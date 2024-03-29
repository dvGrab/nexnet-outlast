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
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Update Position
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Coordinates                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::Update_Position(const struct FCoreUObject_FVector2D& Coordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Update Position");
		
		UW_Radial_MapMarking_C_Update_Position_Params params {};
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_Radial_MapMarking_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonUp");
		
		UW_Radial_MapMarking_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_Radial_MapMarking_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnKeyDown");
		
		UW_Radial_MapMarking_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_Radial_MapMarking_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnMouseButtonDown");
		
		UW_Radial_MapMarking_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Finished_344D667B4B5F9FD05121C694FD14ED92
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::Finished_344D667B4B5F9FD05121C694FD14ED92()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Finished_344D667B4B5F9FD05121C694FD14ED92");
		
		UW_Radial_MapMarking_C_Finished_344D667B4B5F9FD05121C694FD14ED92_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Radial_MapMarking_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.PreConstruct");
		
		UW_Radial_MapMarking_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Tick");
		
		UW_Radial_MapMarking_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.AddCategory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  IconImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasSubCommands                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Radial_MapMarking_C::AddCategory(const class FString& ID, const class FText& DisplayName, class UTexture2D* IconImage, bool HasSubCommands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.AddCategory");
		
		UW_Radial_MapMarking_C_AddCategory_Params params {};
		params.ID = ID;
		params.DisplayName = DisplayName;
		params.IconImage = IconImage;
		params.HasSubCommands = HasSubCommands;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.PopulateSubmenu
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::PopulateSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.PopulateSubmenu");
		
		UW_Radial_MapMarking_C_PopulateSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Populate
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Populate");
		
		UW_Radial_MapMarking_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Construct");
		
		UW_Radial_MapMarking_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.GoBack
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::GoBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.GoBack");
		
		UW_Radial_MapMarking_C_GoBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Submit
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::Submit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Submit");
		
		UW_Radial_MapMarking_C_Submit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.SelectionMade
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::SelectionMade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.SelectionMade");
		
		UW_Radial_MapMarking_C_SelectionMade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseRadial
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::CollapseRadial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseRadial");
		
		UW_Radial_MapMarking_C_CollapseRadial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseSubMenu
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::CollapseSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.CollapseSubMenu");
		
		UW_Radial_MapMarking_C_CollapseSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnPageViewUpdate_2
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::OnPageViewUpdate_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnPageViewUpdate_2");
		
		UW_Radial_MapMarking_C_OnPageViewUpdate_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OpenSubmenu
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::OpenSubmenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OpenSubmenu");
		
		UW_Radial_MapMarking_C_OpenSubmenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature");
		
		UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_InnerRadial_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature_Params params {};
		params.NewSelection = NewSelection;
		params.OldSelection = OldSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OldSelection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature(int32_t NewSelection, int32_t OldSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature");
		
		UW_Radial_MapMarking_C_BndEvt__W_Radial_MapMarking_OutterRadial_K2Node_ComponentBoundEvent_3_SelectionChanged__DelegateSignature_Params params {};
		params.NewSelection = NewSelection;
		params.OldSelection = OldSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.ExecuteUbergraph_W_Radial_MapMarking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::ExecuteUbergraph_W_Radial_MapMarking(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.ExecuteUbergraph_W_Radial_MapMarking");
		
		UW_Radial_MapMarking_C_ExecuteUbergraph_W_Radial_MapMarking_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnSubmenuCollapse__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::OnSubmenuCollapse__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnSubmenuCollapse__DelegateSignature");
		
		UW_Radial_MapMarking_C_OnSubmenuCollapse__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnCollapsed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::OnCollapsed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.OnCollapsed__DelegateSignature");
		
		UW_Radial_MapMarking_C_OnCollapsed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.Cancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_Radial_MapMarking_C::Cancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.Cancel__DelegateSignature");
		
		UW_Radial_MapMarking_C_Cancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Radial_MapMarking.W_Radial_MapMarking_C.SubmenuCommit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        MarkerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Radial_MapMarking_C::SubmenuCommit__DelegateSignature(const class FName& Category, const class FName& MarkerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Radial_MapMarking.W_Radial_MapMarking_C.SubmenuCommit__DelegateSignature");
		
		UW_Radial_MapMarking_C_SubmenuCommit__DelegateSignature_Params params {};
		params.Category = Category;
		params.MarkerName = MarkerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Radial_MapMarking_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Radial_MapMarking_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Radial_MapMarking.W_Radial_MapMarking_C");
		return ptr;
	}

}


