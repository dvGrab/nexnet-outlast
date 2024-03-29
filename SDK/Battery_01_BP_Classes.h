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
	 * BlueprintGeneratedClass Battery_01_BP.Battery-01_BP_C
	 * Size -> 0x0031 (FullSize[0x0A21] - InheritedSize[0x09F0])
	 */
	class ABattery__BP_C : public ASimpleMesh_Pickup_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Ngr_BatteryDestroyed;                                    // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DestroyedVFXAnchor;                                      // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_LensScale_64AFBFFE410614B7874B399354356EE1;   // 0x0A08(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_OverlayMulti_64AFBFFE410614B7874B399354356EE1; // 0x0A0C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_64AFBFFE410614B7874B399354356EE1;  // 0x0A10(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5TPO[0x7];                                   // 0x0A11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBurned;                                                 // 0x0A20(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor

	public:
		void PlayBurnedSFX();
		void PlayBurnedVFX();
		void OnRep_bBurned();
		void SetBurned(bool bNewBurnedState);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnConsumeItemCancelledNotify(class ARBPawn* Pawn);
		void OnConsumeItemStartNotify(class ARBPawn* Pawn);
		void ExecuteUbergraph_Battery__BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
