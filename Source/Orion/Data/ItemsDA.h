// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Orion/Fragments/CategoryFragment.h"
#include "StructUtils/InstancedStruct.h"
#include "ItemsDA.generated.h"

UCLASS(Blueprintable)
class ORION_API UItemsDA : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<TInstancedStruct<FCategoryFragment>> ItemCategories;
};