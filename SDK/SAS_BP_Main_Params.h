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
	 * Function SAS_BP_Main.SAS_BP_Main_C.BP_OnStateChanged
	 */
	struct ASAS_BP_Main_C_BP_OnStateChanged_Params
	{
	public:
		ESASState                                                  State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SAS_BP_Main.SAS_BP_Main_C.ExecuteUbergraph_SAS_BP_Main
	 */
	struct ASAS_BP_Main_C_ExecuteUbergraph_SAS_BP_Main_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SAS_BP_Main.SAS_BP_Main_C.StateChanged__DelegateSignature
	 */
	struct ASAS_BP_Main_C_StateChanged__DelegateSignature_Params
	{
	public:
		ESASState                                                  NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
