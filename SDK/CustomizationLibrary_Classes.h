#pragma once

/**
 * Name: TRIALS
 * Version: FINAL
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CustomizationLibrary.CustomizationLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomizationLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply HandleGamepadCharacterRotationInput(const struct FAnalogInputEvent& Analog_Input, class UObject* __WorldContext);
		void AssignCustomAnimBPOrSetMasterPose(class USkeletalMeshComponent** Component, class USkeletalMesh* Mesh, bool MasterPoseFallback, class UObject* __WorldContext);
		void GetClosestMenuCharacter(const struct FVector& actorLocation, class UObject* __WorldContext, class AMenuCharacter_C** MenuCharacter);
		void UpdateSkinAlbedo(class USkeletalMeshComponent* Head, TArray<class USkeletalMeshComponent*>* OtherBodyParts, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
