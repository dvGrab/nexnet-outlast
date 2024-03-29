/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.DrawGrid
	 * 		Flags  -> ()
	 */
	void ARBChessBoardBase_C::DrawGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.DrawGrid");
		
		ARBChessBoardBase_C_DrawGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.GetPromotingPieceRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   coord                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBChessBoardBase_C::GetPromotingPieceRelativeLocation(const struct FIntPoint& coord, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.GetPromotingPieceRelativeLocation");
		
		ARBChessBoardBase_C_GetPromotingPieceRelativeLocation_Params params {};
		params.coord = coord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.SetDisplayPromotingPieces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisplay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EChessTeam                                         Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBChessBoardBase_C::SetDisplayPromotingPieces(bool bDisplay, EChessTeam Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.SetDisplayPromotingPieces");
		
		ARBChessBoardBase_C_SetDisplayPromotingPieces_Params params {};
		params.bDisplay = bDisplay;
		params.Team = Team;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ARBChessBoardBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.UserConstructionScript");
		
		ARBChessBoardBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.OnWorldPopulateFinished
	 * 		Flags  -> ()
	 */
	void ARBChessBoardBase_C::OnWorldPopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.OnWorldPopulateFinished");
		
		ARBChessBoardBase_C_OnWorldPopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.RegisterDebugChessPieces
	 * 		Flags  -> ()
	 */
	void ARBChessBoardBase_C::RegisterDebugChessPieces()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.RegisterDebugChessPieces");
		
		ARBChessBoardBase_C_RegisterDebugChessPieces_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RBChessBoardBase.RBChessBoardBase_C.ExecuteUbergraph_RBChessBoardBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARBChessBoardBase_C::ExecuteUbergraph_RBChessBoardBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RBChessBoardBase.RBChessBoardBase_C.ExecuteUbergraph_RBChessBoardBase");
		
		ARBChessBoardBase_C_ExecuteUbergraph_RBChessBoardBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARBChessBoardBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARBChessBoardBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RBChessBoardBase.RBChessBoardBase_C");
		return ptr;
	}

}


