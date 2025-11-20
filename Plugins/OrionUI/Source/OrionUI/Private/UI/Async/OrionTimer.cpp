#include "UI/Async/OrionTimer.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Curves/CurveFloat.h"

UOrionTimer* UOrionTimer::OrionTimer(UObject* WorldContext, UCurveFloat* Curve, float UpdateRate, float Start, float Duration)
{
	if (!WorldContext)
	{
		return nullptr;
	}
	UOrionTimer* OrionTimer = NewObject<UOrionTimer>();
	OrionTimer->Curve = Curve;
	OrionTimer->UpdateRate = UpdateRate;
	OrionTimer->Start = Start;
	OrionTimer->Duration = Duration;
	OrionTimer->RegisterWithGameInstance(WorldContext);
	return OrionTimer;
}

void UOrionTimer::Activate()
{
	Super::Activate();
	if (FTimerManager* Manager = GetTimerManager())
	{
		Manager->SetTimer(Handle, this, &ThisClass::TimerUpdate, UpdateRate, true);
		StartTime = UGameplayStatics::GetRealTimeSeconds(RegisteredWithGameInstance.Get());
		TimerUpdate();
	}
	else
	{
		SetReadyToDestroy();
	}
}

void UOrionTimer::Cancel()
{
	OnCancelled.Broadcast();
	if (FTimerManager* Manager = GetTimerManager())
	{
		Manager->ClearTimer(Handle);
	}
	Super::Cancel();
}

bool UOrionTimer::IsActive() const
{
	if (FTimerManager* Manager = GetTimerManager())
	{
		return Super::IsActive() && Manager->IsTimerActive(Handle);
	}
	return Super::IsActive();
}

void UOrionTimer::TimerUpdate()
{
	FTimerManager* Manager = GetTimerManager();
	if (!Manager)
	{
		SetReadyToDestroy();
	}

	const double CurrentTime = UGameplayStatics::GetRealTimeSeconds(RegisteredWithGameInstance.Get());
	ElapsedTime = static_cast<float>(CurrentTime - StartTime) + Start * Duration;

	OnUpdate.Broadcast(GetProgress());

	if (ElapsedTime >= Duration)
	{
		OnFinish.Broadcast();
		Manager->ClearTimer(Handle);
		SetReadyToDestroy();
	}
}

float UOrionTimer::GetProgress() const
{
	float Progress = FMath::Clamp(UKismetMathLibrary::NormalizeToRange(ElapsedTime, 0.f, Duration), 0. ,1.f);
	if (IsValid(Curve))
	{
		return Curve->GetFloatValue(Progress);
	}
	
	return Progress;
}
