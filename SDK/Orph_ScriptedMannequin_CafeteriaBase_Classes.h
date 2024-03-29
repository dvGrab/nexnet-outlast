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
	 * BlueprintGeneratedClass Orph_ScriptedMannequin_CafeteriaBase.Orph_ScriptedMannequin_CafeteriaBase_C
	 * Size -> 0x0027 (FullSize[0x0478] - InheritedSize[0x0451])
	 */
	class AOrph_ScriptedMannequin_CafeteriaBase_C : public AScriptedMannequin_Base_BP_C
	{
	public:
		unsigned char                                              UnknownData_NPEL[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                RightHand;                                               // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                LeftHand;                                                // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void DisableCollisionsOnStaticmeshes();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Event_OnTriggered();
		void ExecuteUbergraph_Orph_ScriptedMannequin_CafeteriaBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
