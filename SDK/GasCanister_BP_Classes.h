#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * BlueprintGeneratedClass GasCanister_BP.GasCanister_BP_C
	 * Size -> 0x001E (FullSize[0x094A] - InheritedSize[0x092C])
	 */
	class AGasCanister_BP_C : public ARBLargePickup
	{
	public:
		unsigned char                                              UnknownData_BJS0[0x4];                                   // 0x092C(0x0004) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0930(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URBActiveSkillVisionComponent*                       ActiveSkillVision;                                       // 0x0938(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ActiveSkillWaveSphere;                                   // 0x0940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       isUsed;                                                  // 0x0948(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUsedLocal;                                             // 0x0949(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsUsable();
		bool GetCustomDropInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText);
		bool GetCustomPickupInteractionText(class ARBPlayer* Player, class FText* out_CustomInteractionText);
		void Event_OnResetStage();
		void ReceiveBeginPlay();
		void Event_OnUsedOnInteractible(class ARBPawn* interactor, class URBLargeObjectInteractionPanelComponent* interactible);
		void ExecuteUbergraph_GasCanister_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
