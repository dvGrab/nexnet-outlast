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
	 * BlueprintGeneratedClass DeadBody_Hanging_03b_BP.DeadBody_Hanging-03b_BP_C
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	class ADeadBody_Hanging_b_BP_C : public ADeadBodyBase_BP_C
	{
	public:
		class UStaticMeshComponent*                                HangManNoose_B;                                          // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                RopeKnot;                                                // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
