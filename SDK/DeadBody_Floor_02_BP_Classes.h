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
	 * BlueprintGeneratedClass DeadBody_Floor_02_BP.DeadBody_Floor-02_BP_C
	 * Size -> 0x0010 (FullSize[0x0580] - InheritedSize[0x0570])
	 */
	class ADeadBody_Floor__BP_C : public ADeadBodyBase_BP_C
	{
	public:
		class UBoxComponent*                                       CustomCollisionsBox2;                                    // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CustomCollisionsBox1;                                    // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
