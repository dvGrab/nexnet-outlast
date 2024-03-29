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
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UANIMBP_Python_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.AnimGraph");
		
		UANIMBP_Python_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4
	 * 		Flags  -> ()
	 */
	void UANIMBP_Python_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4");
		
		UANIMBP_Python_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANIMBP_Python_AnimGraphNode_ModifyBone_3F6B2BE4404594F30BA9028598E57FB4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Python_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.BlueprintUpdateAnimation");
		
		UANIMBP_Python_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_RotateCylinder
	 * 		Flags  -> ()
	 */
	void UANIMBP_Python_C::AnimNotify_RotateCylinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_RotateCylinder");
		
		UANIMBP_Python_C_AnimNotify_RotateCylinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ResetCyliner
	 * 		Flags  -> ()
	 */
	void UANIMBP_Python_C::AnimNotify_ResetCyliner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ResetCyliner");
		
		UANIMBP_Python_C_AnimNotify_ResetCyliner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ShowBullets
	 * 		Flags  -> ()
	 */
	void UANIMBP_Python_C::AnimNotify_ShowBullets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_ShowBullets");
		
		UANIMBP_Python_C_AnimNotify_ShowBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_HideBullets
	 * 		Flags  -> ()
	 */
	void UANIMBP_Python_C::AnimNotify_HideBullets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.AnimNotify_HideBullets");
		
		UANIMBP_Python_C_AnimNotify_HideBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ANIMBP_Python.ANIMBP_Python_C.ExecuteUbergraph_ANIMBP_Python
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UANIMBP_Python_C::ExecuteUbergraph_ANIMBP_Python(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ANIMBP_Python.ANIMBP_Python_C.ExecuteUbergraph_ANIMBP_Python");
		
		UANIMBP_Python_C_ExecuteUbergraph_ANIMBP_Python_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UANIMBP_Python_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UANIMBP_Python_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ANIMBP_Python.ANIMBP_Python_C");
		return ptr;
	}

}


