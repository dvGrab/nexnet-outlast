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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct PipeModuleDetailParameters.PipeModuleDetailParameters
	 * Size -> 0x0015
	 */
	struct FPipeModuleDetailParameters
	{
	public:
		class UStaticMesh*                                         Staticmesh_2_E3641C7843830E61841D0599B46F13DF;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinTilingDistance_6_A5B8D7994CF25D5EDCF0098D319DE275;    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PositionOffset_9_409952B6452100431B7F4CAD7A02FEBE;       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationOffset_11_DBA5FE9D4DA243E9654754BB353193ED;      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Use_14_BCAA5A17401C00DBE6E786BD24CE5C69;                 // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
