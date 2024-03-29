/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetConflictingKeybindText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        RequiredKeybindName                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UW_ControlsBind_C::GetConflictingKeybindText(const class FText& RequiredKeybindName, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.GetConflictingKeybindText");
		
		UW_ControlsBind_C_GetConflictingKeybindText_Params params {};
		params.RequiredKeybindName = RequiredKeybindName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.CheckConflictingKeybindsAreUnbindable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        BindFriendlyName                                           (Parm, OutParm)
	 */
	void UW_ControlsBind_C::CheckConflictingKeybindsAreUnbindable(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, class FText* BindFriendlyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.CheckConflictingKeybindsAreUnbindable");
		
		UW_ControlsBind_C_CheckConflictingKeybindsAreUnbindable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (BindFriendlyName != nullptr)
			*BindFriendlyName = params.BindFriendlyName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ControlsBind_C::Remove_Conflict_Keybinds(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Remove Conflict Keybinds");
		
		UW_ControlsBind_C_Remove_Conflict_Keybinds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSKeybinding>                        Keybinds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        AxisMapping                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FAxisMappingStruct>                  AxesList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                ActionsList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ControlsBind_C::Add_Keybinds_to_List(TArray<struct FSKeybinding>* Keybinds, const class FName& AxisMapping, float Scale, TArray<struct FAxisMappingStruct>* AxesList, TArray<struct FActionMappingStruct>* ActionsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Add Keybinds to List");
		
		UW_ControlsBind_C_Add_Keybinds_to_List_Params params {};
		params.AxisMapping = AxisMapping;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Keybinds != nullptr)
			*Keybinds = params.Keybinds;
		if (AxesList != nullptr)
			*AxesList = params.AxesList;
		if (ActionsList != nullptr)
			*ActionsList = params.ActionsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MappingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ControlsBind_C::Add_Conflicting_Keybinds_to_List(const class FName& MappingName, float Scale, TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Add Conflicting Keybinds to List");
		
		UW_ControlsBind_C_Add_Conflicting_Keybinds_to_List_Params params {};
		params.MappingName = MappingName;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_ControlsBind_C::HandleMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.HandleMouseWheel");
		
		UW_ControlsBind_C_HandleMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAxisMappingStruct>                  Axes                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FActionMappingStruct>                Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bHasConflict                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FAxisMappingStruct>                  ConflictingAxes                                            (Parm, OutParm)
	 * 		TArray<struct FActionMappingStruct>                ConflictingActions                                         (Parm, OutParm)
	 */
	void UW_ControlsBind_C::Get_Conflicting_Keybinds_when_Valid(TArray<struct FAxisMappingStruct>* Axes, TArray<struct FActionMappingStruct>* Actions, bool* bHasConflict, TArray<struct FAxisMappingStruct>* ConflictingAxes, TArray<struct FActionMappingStruct>* ConflictingActions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Get Conflicting Keybinds when Valid");
		
		UW_ControlsBind_C_Get_Conflicting_Keybinds_when_Valid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axes != nullptr)
			*Axes = params.Axes;
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (bHasConflict != nullptr)
			*bHasConflict = params.bHasConflict;
		if (ConflictingAxes != nullptr)
			*ConflictingAxes = params.ConflictingAxes;
		if (ConflictingActions != nullptr)
			*ConflictingActions = params.ConflictingActions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   My_Geometry                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   In_Key_Event                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_ControlsBind_C::HandleKeyDown(const struct FGeometry& My_Geometry, const struct FKeyEvent& In_Key_Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.HandleKeyDown");
		
		UW_ControlsBind_C_HandleKeyDown_Params params {};
		params.My_Geometry = My_Geometry;
		params.In_Key_Event = In_Key_Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_ControlsBind_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnPreviewKeyDown");
		
		UW_ControlsBind_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::GetOtherBindingIndex(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.GetOtherBindingIndex");
		
		UW_ControlsBind_C_GetOtherBindingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FEventReply                                 Reply                                                      (Parm, OutParm)
	 */
	void UW_ControlsBind_C::HandleMouseButtonDown(const struct FPointerEvent& PointerEvent, struct FEventReply* Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.HandleMouseButtonDown");
		
		UW_ControlsBind_C_HandleMouseButtonDown_Params params {};
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reply != nullptr)
			*Reply = params.Reply;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnMouseWheel");
		
		UW_ControlsBind_C_OnMouseWheel_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsBind_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.SetDisabled");
		
		UW_ControlsBind_C_SetDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.SetKeybindingText
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::SetKeybindingText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.SetKeybindingText");
		
		UW_ControlsBind_C_SetKeybindingText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.ResetBinding
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::ResetBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.ResetBinding");
		
		UW_ControlsBind_C_ResetBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BindingFinished
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BindingFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BindingFinished");
		
		UW_ControlsBind_C_BindingFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.RebindKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Key_Rebound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsBind_C::RebindKey(const struct FKey& NewKey, bool* Key_Rebound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.RebindKey");
		
		UW_ControlsBind_C_RebindKey_Params params {};
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key_Rebound != nullptr)
			*Key_Rebound = params.Key_Rebound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_ControlsBind_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnMouseButtonDown");
		
		UW_ControlsBind_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_ControlsBind_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnKeyDown");
		
		UW_ControlsBind_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.GetInputBindingData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FActionMappingStruct                        ActionMapping                                              (Parm, OutParm)
	 * 		struct FAxisMappingStruct                          AxisMapping                                                (Parm, OutParm)
	 */
	void UW_ControlsBind_C::GetInputBindingData(int32_t Index, struct FActionMappingStruct* ActionMapping, struct FAxisMappingStruct* AxisMapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.GetInputBindingData");
		
		UW_ControlsBind_C_GetInputBindingData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMapping != nullptr)
			*ActionMapping = params.ActionMapping;
		if (AxisMapping != nullptr)
			*AxisMapping = params.AxisMapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ControlsBind_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.PreConstruct");
		
		UW_ControlsBind_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Key Event Received
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        KeyIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::Key_Event_Received(const struct FKey& KeyIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Key Event Received");
		
		UW_ControlsBind_C_Key_Event_Received_Params params {};
		params.KeyIn = KeyIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Binding Confirmed
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::Binding_Confirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Binding Confirmed");
		
		UW_ControlsBind_C_Binding_Confirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Destruct");
		
		UW_ControlsBind_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BindFriendlyName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ControlsBind_C::OnIllegalBindAttempted(const class FText& BindFriendlyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnIllegalBindAttempted");
		
		UW_ControlsBind_C_OnIllegalBindAttempted_Params params {};
		params.BindFriendlyName = BindFriendlyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");
		
		UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_ControlsBind_C_BndEvt__KeybindButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.UnbindAllEvents
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::UnbindAllEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.UnbindAllEvents");
		
		UW_ControlsBind_C_UnbindAllEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ControlsBind_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.Construct");
		
		UW_ControlsBind_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::ExecuteUbergraph_W_ControlsBind(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.ExecuteUbergraph_W_ControlsBind");
		
		UW_ControlsBind_C_ExecuteUbergraph_W_ControlsBind_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        BindFriendlyName                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ControlsBind_C::OnUnbindableKeyReboundAttempted__DelegateSignature(const class FText& BindFriendlyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnUnbindableKeyReboundAttempted__DelegateSignature");
		
		UW_ControlsBind_C_OnUnbindableKeyReboundAttempted__DelegateSignature_Params params {};
		params.BindFriendlyName = BindFriendlyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FActionMappingStruct>                ActionMappings                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FAxisMappingStruct>                  AxisMappings                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FText>                                ConflictBindsText                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_ControlsBind_C::OnConflictingBindDetected__DelegateSignature(class UW_ControlsBind_C* CallingBind, TArray<struct FActionMappingStruct>* ActionMappings, TArray<struct FAxisMappingStruct>* AxisMappings, const struct FKey& Key, TArray<class FText>* ConflictBindsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnConflictingBindDetected__DelegateSignature");
		
		UW_ControlsBind_C_OnConflictingBindDetected__DelegateSignature_Params params {};
		params.CallingBind = CallingBind;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMappings != nullptr)
			*ActionMappings = params.ActionMappings;
		if (AxisMappings != nullptr)
			*AxisMappings = params.AxisMappings;
		if (ConflictBindsText != nullptr)
			*ConflictBindsText = params.ConflictBindsText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnBindingCommitted__DelegateSignature(class UW_ControlsBind_C* CallingWidget, const struct FKey& NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnBindingCommitted__DelegateSignature");
		
		UW_ControlsBind_C_OnBindingCommitted__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnBindingCanceled__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnBindingCanceled__DelegateSignature");
		
		UW_ControlsBind_C_OnBindingCanceled__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnBindingStarted__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnBindingStarted__DelegateSignature");
		
		UW_ControlsBind_C_OnBindingStarted__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnReleased__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnReleased__DelegateSignature");
		
		UW_ControlsBind_C_OnReleased__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnPressed__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnPressed__DelegateSignature");
		
		UW_ControlsBind_C_OnPressed__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnUnhovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnUnhovered__DelegateSignature");
		
		UW_ControlsBind_C_OnUnhovered__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_ControlsBind_C*                           CallingWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ControlsBind_C::OnHovered__DelegateSignature(class UW_ControlsBind_C* CallingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ControlsBind.W_ControlsBind_C.OnHovered__DelegateSignature");
		
		UW_ControlsBind_C_OnHovered__DelegateSignature_Params params {};
		params.CallingWidget = CallingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ControlsBind_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ControlsBind_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ControlsBind.W_ControlsBind_C");
		return ptr;
	}

}


