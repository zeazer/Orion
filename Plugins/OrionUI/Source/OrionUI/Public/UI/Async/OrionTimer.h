#pragma once

#include "Engine/CancellableAsyncAction.h"
#include "Engine/TimerHandle.h"
#include "OrionTimer.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimerUdpate, float, Progress);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTimerFinished);

class UCurveFloat;

UCLASS()
class ORIONUI_API UOrionTimer : public UCancellableAsyncAction
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta =(BlueprintInternalUseOnly="true", WorldContext="WorldContext"))
	static UOrionTimer* OrionTimer(UObject* WorldContext, UCurveFloat* Curve,float UpdateRate = 0.01f, float Start = 0.0f, float Duration = 1.0f);

	virtual void Activate() override;
	virtual void Cancel() override;
	virtual bool IsActive() const override;

	UFUNCTION()
	void TimerUpdate();

	float GetProgress() const;

	UPROPERTY(BlueprintAssignable)
	FTimerUdpate OnUpdate;
	UPROPERTY(BlueprintAssignable)
	FTimerFinished OnCancelled;
	UPROPERTY(BlueprintAssignable)
	FTimerFinished OnFinish;

private:
	UPROPERTY()
	UCurveFloat* Curve;
	FTimerHandle Handle;
	double StartTime = 0.f;
	float ElapsedTime = 0.f;
	float Start = 0.f;
	float Duration = 1.f;
	float UpdateRate = 0.01f;
};
