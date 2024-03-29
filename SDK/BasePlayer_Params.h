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
	 * Function BasePlayer.BasePlayer_C.AddFirstPersonShakeFromSuppression
	 */
	struct ABasePlayer_C_AddFirstPersonShakeFromSuppression_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.UpdateFirstPersonShake
	 */
	struct ABasePlayer_C_UpdateFirstPersonShake_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.InpActEvt_F3_K2Node_InputKeyEvent_3
	 */
	struct ABasePlayer_C_InpActEvt_F3_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.InpActEvt_F2_K2Node_InputKeyEvent_2
	 */
	struct ABasePlayer_C_InpActEvt_F2_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.InpActEvt_F1_K2Node_InputKeyEvent_1
	 */
	struct ABasePlayer_C_InpActEvt_F1_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.K2_OnEndCrouch
	 */
	struct ABasePlayer_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.K2_OnStartCrouch
	 */
	struct ABasePlayer_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnSupression
	 */
	struct ABasePlayer_C_OnSupression_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnTurn
	 */
	struct ABasePlayer_C_OnTurn_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnLeanStart
	 */
	struct ABasePlayer_C_OnLeanStart_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnLeanEnd
	 */
	struct ABasePlayer_C_OnLeanEnd_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.PlayVaultAnimation
	 */
	struct ABasePlayer_C_PlayVaultAnimation_Params
	{
	public:
		struct FCoreUObject_FVector                                ledge;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoreUObject_FVector                                ledgeWallNormal;                                         // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCoreUObject_FVector                                ledgeTraceDown;                                          // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ledgeZ;                                                  // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELedgeWidth                                                ledgeWidth;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ELedgeHeight                                               ledgeHeight;                                             // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.ReceiveTick
	 */
	struct ABasePlayer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnBulletImpact
	 */
	struct ABasePlayer_C_OnBulletImpact_Params
	{
	public:
		float                                                      DirectionForward;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DirectionRight;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.ReceiveUnpossessed
	 */
	struct ABasePlayer_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnJumpStart
	 */
	struct ABasePlayer_C_OnJumpStart_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnJumpLand
	 */
	struct ABasePlayer_C_OnJumpLand_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.OnKilledOrGoneUnconciousBP
	 */
	struct ABasePlayer_C_OnKilledOrGoneUnconciousBP_Params
	{	};

	/**
	 * Function BasePlayer.BasePlayer_C.ExecuteUbergraph_BasePlayer
	 */
	struct ABasePlayer_C_ExecuteUbergraph_BasePlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
