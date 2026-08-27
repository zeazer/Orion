#pragma once
#include "CoreMinimal.h"
#include "ItemFragment.h"
#include "StructUtils/InstancedStruct.h"
#include "UI/Fragments/OrionTextureFragment.h"
#include "CategoryFragment.generated.h"

USTRUCT(BlueprintType)
struct ORION_API FCategoryFragment
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	TArray<TInstancedStruct<FItemFragment>> ItemFragments;
	
	UPROPERTY(EditAnywhere)
	FName CategoryName;
	
	UPROPERTY(EditAnywhere)
	TInstancedStruct<FOrionTextureFragment> CategoryTextureFragment;
};