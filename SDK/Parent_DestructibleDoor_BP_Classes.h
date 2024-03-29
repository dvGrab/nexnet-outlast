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
	 * BlueprintGeneratedClass Parent_DestructibleDoor_BP.Parent_DestructibleDoor_BP_C
	 * Size -> 0x00A0 (FullSize[0x0510] - InheritedSize[0x0470])
	 */
	class AParent_DestructibleDoor_BP_C : public ARBDestructibleActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            WoodSplinters_Shoulder_PS1;                              // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ShadowBox;                                               // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            WoodSplinters_Kick_PS;                                   // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          OriginTransforms;                                        // 0x0490(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          DestinationTransforms;                                   // 0x04C0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TranslationDelta;                                        // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CastShadowForDarkness;                                   // 0x04F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ISU8[0x3];                                   // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       WindowBreakAkEvent;                                      // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            NoShadowSections;                                        // 0x0500(0x0010) Edit, BlueprintVisible

	public:
		bool GetPingItemName(class FText* outName);
		bool GetPingEnabled(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, bool* outIsEnabled);
		bool GetPlayerPingData(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FPlayerPingData* outData);
		bool GetPlayerPingWorldLocation(class ARBPlayer* pingOwner, const struct FHitResult& HitResult, struct FVector* OutLocation);
		void EnableDamageSectionsShadow(bool CastShadow);
		void PostWindowBreakAkEvent();
		void SetParticleRotation(class ARBPawn* Front, class UParticleSystemComponent* ParticleSystem);
		void SetMovementTransforms();
		void UserConstructionScript();
		void Event_On_Bash(class ARBPawn* Pawn, bool bSuccess, bool bApplyDamageVisual, EBashDoorType bashType);
		void Event_OnResetStage();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Parent_DestructibleDoor_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
