#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
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
	 * Function BaseImpactMesh.BaseImpactMesh_C.ReceiveBeginPlay
	 */
	struct ABaseImpactMesh_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseImpactMesh.BaseImpactMesh_C.ReceiveTick
	 */
	struct ABaseImpactMesh_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseImpactMesh.BaseImpactMesh_C.ExecuteUbergraph_BaseImpactMesh
	 */
	struct ABaseImpactMesh_C_ExecuteUbergraph_BaseImpactMesh_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
