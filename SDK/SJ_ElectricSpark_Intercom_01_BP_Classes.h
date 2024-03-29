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
	 * BlueprintGeneratedClass SJ_ElectricSpark_Intercom_01_BP.SJ_ElectricSpark_Intercom-01_BP_C
	 * Size -> 0x0008 (FullSize[0x0530] - InheritedSize[0x0528])
	 */
	class ASJ_ElectricSpark_Intercom01_BP_C : public ASJ_ElectricSpark01_BP_C
	{
	public:
		class URBSinglePlayerHelperComponent*                      RBSinglePlayerHelper;                                    // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CanTriggerScareJump();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
