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
	 * BlueprintGeneratedClass Gore_Throwable_BP.Gore_Throwable_BP_C
	 * Size -> 0x0120 (FullSize[0x0C58] - InheritedSize[0x0B38])
	 */
	class AGore_Throwable_BP_C : public ASimpleMesh_ThrowableWeapon_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B38(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    ForcedVisualMeshIndex;                                   // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C6F8[0x4];                                   // 0x0B44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 PossibleVisualMeshes;                                    // 0x0B48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    VisualIndex;                                             // 0x0B58(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bFloating;                                               // 0x0B5C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_IXMI[0x3];                                   // 0x0B5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloatTimeOffset;                                         // 0x0B60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CSNV[0x4];                                   // 0x0B64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UItemAnimRef*>                         AnimData1P;                                              // 0x0B68(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, class UItemAnimRef*>                         AnimData1P_LookDown;                                     // 0x0BB8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, class UItemAnimRef*>                         AnimData3P;                                              // 0x0C08(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool BP_TickItem(float DeltaTime);
		void OnRep_bSinking();
		void OnRep_bFloating();
		void OnRep_VisualIndex();
		void ReceiveBeginPlay();
		void BP_OnGroundAndPoundCounter();
		void Event_OnContainerChanged();
		void Event_OnPickedUp(class ARBPawn* Pawn);
		void ExecuteUbergraph_Gore_Throwable_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
