#pragma once
#include "CoreMinimal.h"
#include "OrionBaseFragment.h"
#include "OrionTextureFragment.generated.h"

USTRUCT(BlueprintType)
struct ORIONUI_API FOrionTextureFragment : public FOrionBaseFragment
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Brush, meta=( AllowPrivateAccess="true", DisplayThumbnail="true", DisplayName="Image", AllowedClasses="/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface", DisallowedClasses = "/Script/MediaAssets.MediaTexture"))
	TObjectPtr<UObject> ResourceObject;
};
