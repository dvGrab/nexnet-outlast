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
	 * Function W_ControlsBind.W_ControlsBind_C.GetConflictingKeybindText
	 */
	struct UW_ControlsBind_C_GetConflictingKeybindText_Params
	{
	public:
		class FText                                                RequiredKeybindName;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Text;                                                    // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.CheckConflictingKeybindsAreUnbindable
	 */
	struct UW_ControlsBind_C_CheckConflictingKeybindsAreUnbindable_Params
	{
	public:
		TArray<struct FAxisMappingStruct>                          Axes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FActionMappingStruct>                        Actions;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                BindFriendlyName;                                        // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds
	 */
	struct UW_ControlsBind_C_Remove_Conflict_Keybinds_Params
	{
	public:
		TArray<struct FAxisMappingStruct>                          Axes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FActionMappingStruct>                        Actions;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List
	 */
	struct UW_ControlsBind_C_Add_Keybinds_to_List_Params
	{
	public:
		TArray<struct FSKeybinding>                                Keybinds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                AxisMapping;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_24OT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAxisMappingStruct>                          AxesList;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FActionMappingStruct>                        ActionsList;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List
	 */
	struct UW_ControlsBind_C_Add_Conflicting_Keybinds_to_List_Params
	{
	public:
		class FName                                                MappingName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L71Y[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAxisMappingStruct>                          Axes;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FActionMappingStruct>                        Actions;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel
	 */
	struct UW_ControlsBind_C_HandleMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid
	 */
	struct UW_ControlsBind_C_Get_Conflicting_Keybinds_when_Valid_Params
	{
	public:
		TArray<struct FAxisMappingStruct>                          Axes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FActionMappingStruct>                        Actions;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bHasConflict;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8GNP[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAxisMappingStruct>                          ConflictingAxes;                                         // 0x0028(0x0010)  (Parm, OutParm)
		TArray<struct FActionMappingStruct>                        ConflictingActions;                                      // 0x0038(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown
	 */
	struct UW_ControlsBind_C_HandleKeyDown_Params
	{
	public:
		struct FGeometry                                           My_Geometry;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           In_Key_Event;                                            // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown
	 */
	struct UW_ControlsBind_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex
	 */
	struct UW_ControlsBind_C_GetOtherBindingIndex_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown
	 */
	struct UW_ControlsBind_C_HandleMouseButtonDown_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         Reply;                                                   // 0x0070(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel
	 */
	struct UW_ControlsBind_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.SetDisabled
	 */
	struct UW_ControlsBind_C_SetDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.SetKeybindingText
	 */
	struct UW_ControlsBind_C_SetKeybindingText_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.ResetBinding
	 */
	struct UW_ControlsBind_C_ResetBinding_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BindingFinished
	 */
	struct UW_ControlsBind_C_BindingFinished_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.RebindKey
	 */
	struct UW_ControlsBind_C_RebindKey_Params
	{
	public:
		struct FKey                                                NewKey;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Key_Rebound;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3C5E[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown
	 */
	struct UW_ControlsBind_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnKeyDown
	 */
	struct UW_ControlsBind_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.GetInputBindingData
	 */
	struct UW_ControlsBind_C_GetInputBindingData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B07Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FActionMappingStruct                                ActionMapping;                                           // 0x0008(0x0028)  (Parm, OutParm)
		struct FAxisMappingStruct                                  AxisMapping;                                             // 0x0030(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.PreConstruct
	 */
	struct UW_ControlsBind_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Key Event Received
	 */
	struct UW_ControlsBind_C_Key_Event_Received_Params
	{
	public:
		struct FKey                                                KeyIn;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Binding Confirmed
	 */
	struct UW_ControlsBind_C_Binding_Confirmed_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Destruct
	 */
	struct UW_ControlsBind_C_Destruct_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted
	 */
	struct UW_ControlsBind_C_OnIllegalBindAttempted_Params
	{
	public:
		class FText                                                BindFriendlyName;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.UnbindAllEvents
	 */
	struct UW_ControlsBind_C_UnbindAllEvents_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.Construct
	 */
	struct UW_ControlsBind_C_Construct_Params
	{	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind
	 */
	struct UW_ControlsBind_C_ExecuteUbergraph_W_ControlsBind_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74MS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnUnbindableKeyReboundAttempted__DelegateSignature_Params
	{
	public:
		class FText                                                BindFriendlyName;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnConflictingBindDetected__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingBind;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FActionMappingStruct>                        ActionMappings;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FAxisMappingStruct>                          AxisMappings;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FKey                                                Key;                                                     // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<class FText>                                        ConflictBindsText;                                       // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnBindingCommitted__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnBindingCanceled__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnBindingStarted__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnReleased__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnPressed__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature
	 */
	struct UW_ControlsBind_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UW_ControlsBind_C*                                   CallingWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
