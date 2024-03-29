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
	 * Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Colorize
	 */
	struct AProMod_LargePipe_BP_C_Colorize_Params
	{	};

	/**
	 * Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Connector
	 */
	struct AProMod_LargePipe_BP_C_Connector_Params
	{	};

	/**
	 * Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Valve
	 */
	struct AProMod_LargePipe_BP_C_Valve_Params
	{	};

	/**
	 * Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ApplyMaterial
	 */
	struct AProMod_LargePipe_BP_C_ApplyMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ExecuteUbergraph_ProMod_LargePipe_BP
	 */
	struct AProMod_LargePipe_BP_C_ExecuteUbergraph_ProMod_LargePipe_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ZMF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
