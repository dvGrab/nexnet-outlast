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
	 * BlueprintGeneratedClass DeadBody_Trunk_02_BP.DeadBody_Trunk-02_BP_C
	 * Size -> 0x000F (FullSize[0x04E8] - InheritedSize[0x04D9])
	 */
	class ADeadBody_Trunk02_BP_C : public ADeadBodyBase_BP_C
	{
	public:
		unsigned char                                              UnknownData_J2EU[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       CustomCollisionsBox1;                                    // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
