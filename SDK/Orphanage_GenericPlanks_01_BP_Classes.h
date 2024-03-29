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
	 * BlueprintGeneratedClass Orphanage_GenericPlanks_01_BP.Orphanage_GenericPlanks-01_BP_C
	 * Size -> 0x0010 (FullSize[0x05A0] - InheritedSize[0x0590])
	 */
	class AOrphanage_GenericPlanks__BP_C : public AWall__BP_C
	{
	public:
		EGrayBoxMat_ENU                                            Materials;                                               // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseOverwriteMaterials;                                   // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GDAF[0x2];                                   // 0x0592(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NewSize;                                                 // 0x0594(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
