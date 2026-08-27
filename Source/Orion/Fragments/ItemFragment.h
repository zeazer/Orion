#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "UI/Fragments/OrionTextureFragment.h"
#include "ItemFragment.generated.h"

UENUM(BlueprintType)
enum ERarity : uint8
{
	Common,
	Rare,
	Legendary
};

USTRUCT(BlueprintType)
struct ORION_API FItemFragment
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	FText ItemName;
	
	UPROPERTY(EditAnywhere)
	FText ItemDescription;
	
	UPROPERTY(EditAnywhere)
	TInstancedStruct<FOrionTextureFragment> SmallImageFragment;
	
	UPROPERTY(EditAnywhere)
	TInstancedStruct<FOrionTextureFragment> LargeImageFragment;
	
	UPROPERTY(EditAnywhere)
	TEnumAsByte<ERarity> ItemRarity;
	
	UPROPERTY(EditAnywhere)
	int32 CurrencyValue;
};