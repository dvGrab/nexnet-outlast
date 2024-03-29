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
	 * BlueprintGeneratedClass SJ_FallingObject_Book_02_BP.SJ_FallingObject_Book-02_BP_C
	 * Size -> 0x000F (FullSize[0x0568] - InheritedSize[0x0559])
	 */
	class ASJ_FallingObject_Book02_BP_C : public ASJ_FallingObject_Base_BP_C
	{
	public:
		unsigned char                                              UnknownData_S16D[0x7];                                   // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 Billboard;                                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
