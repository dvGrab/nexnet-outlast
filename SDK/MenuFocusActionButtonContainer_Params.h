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
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.UpdateVisibility
	 */
	struct UMenuFocusActionButtonContainer_C_UpdateVisibility_Params
	{	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Construct
	 */
	struct UMenuFocusActionButtonContainer_C_Construct_Params
	{	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Destruct
	 */
	struct UMenuFocusActionButtonContainer_C_Destruct_Params
	{	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionSet
	 */
	struct UMenuFocusActionButtonContainer_C_OnMenuFocusActionSet_Params
	{
	public:
		class UWidget*                                             Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                action;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionCleared
	 */
	struct UMenuFocusActionButtonContainer_C_OnMenuFocusActionCleared_Params
	{
	public:
		class UWidget*                                             Source;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuInputSourceChanged
	 */
	struct UMenuFocusActionButtonContainer_C_OnMenuInputSourceChanged_Params
	{	};

	/**
	 * Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.ExecuteUbergraph_MenuFocusActionButtonContainer
	 */
	struct UMenuFocusActionButtonContainer_C_ExecuteUbergraph_MenuFocusActionButtonContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YTAX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
