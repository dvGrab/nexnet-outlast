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
	 * Function RBChessBoardBase.RBChessBoardBase_C.DrawGrid
	 */
	struct ARBChessBoardBase_C_DrawGrid_Params
	{	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.GetPromotingPieceRelativeLocation
	 */
	struct ARBChessBoardBase_C_GetPromotingPieceRelativeLocation_Params
	{
	public:
		struct FIntPoint                                           coord;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.SetDisplayPromotingPieces
	 */
	struct ARBChessBoardBase_C_SetDisplayPromotingPieces_Params
	{
	public:
		bool                                                       bDisplay;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EChessTeam                                                 Team;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZRBI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.UserConstructionScript
	 */
	struct ARBChessBoardBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.OnWorldPopulateFinished
	 */
	struct ARBChessBoardBase_C_OnWorldPopulateFinished_Params
	{	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.RegisterDebugChessPieces
	 */
	struct ARBChessBoardBase_C_RegisterDebugChessPieces_Params
	{	};

	/**
	 * Function RBChessBoardBase.RBChessBoardBase_C.ExecuteUbergraph_RBChessBoardBase
	 */
	struct ARBChessBoardBase_C_ExecuteUbergraph_RBChessBoardBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
