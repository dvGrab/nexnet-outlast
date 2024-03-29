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
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetCameras
	 */
	struct ACustomizationViewer_BP_C_GetCameras_Params
	{	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.GetMenuCharacter
	 */
	struct ACustomizationViewer_BP_C_GetMenuCharacter_Params
	{
	public:
		class AMenuCharacter_C*                                    MenuCharacter;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.DeactivateViewer
	 */
	struct ACustomizationViewer_BP_C_DeactivateViewer_Params
	{
	public:
		bool                                                       SkipViewTargetChange;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N5T5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.ActivateViewer
	 */
	struct ACustomizationViewer_BP_C_ActivateViewer_Params
	{
	public:
		class AActor*                                              CustomReturnViewTarget;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.UserConstructionScript
	 */
	struct ACustomizationViewer_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.ReceiveBeginPlay
	 */
	struct ACustomizationViewer_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.CustomEvent
	 */
	struct ACustomizationViewer_BP_C_CustomEvent_Params
	{
	public:
		ECustomizationMenuCategory                                 CustomizationMenuCategory;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationViewer_BP.CustomizationViewer_BP_C.ExecuteUbergraph_CustomizationViewer_BP
	 */
	struct ACustomizationViewer_BP_C_ExecuteUbergraph_CustomizationViewer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
