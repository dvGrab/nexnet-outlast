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
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.ApplyDamageState
	 */
	struct UW_DamagePaperdoll_C_ApplyDamageState_Params
	{
	public:
		class UImage*                                              InImage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bDamagedLimb;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bFlashingLimb;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9RCE[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LimbHealth;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetLimbDamaged
	 */
	struct UW_DamagePaperdoll_C_SetLimbDamaged_Params
	{
	public:
		bool                                                       bLimb;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bNewlyDamaged;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdatePaperdollPartToHealedColor
	 */
	struct UW_DamagePaperdoll_C_UpdatePaperdollPartToHealedColor_Params
	{
	public:
		bool                                                       bRightArm;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LeftArm;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Torso;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Head;                                                    // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right_Leg;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Left_Leg;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.SetDamageState
	 */
	struct UW_DamagePaperdoll_C_SetDamageState_Params
	{
	public:
		bool                                                       bHeadHit;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBodyHit;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftArmHit;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightArmHit;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftLegHit;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRightLegHit;                                            // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NZK[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetTorsoDmgVisibility
	 */
	struct UW_DamagePaperdoll_C_GetTorsoDmgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgRightVisibility
	 */
	struct UW_DamagePaperdoll_C_GetLegDmgRightVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetLegDmgLeftVisibility
	 */
	struct UW_DamagePaperdoll_C_GetLegDmgLeftVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetHeadDmgVisibility
	 */
	struct UW_DamagePaperdoll_C_GetHeadDmgVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgRightVisibility
	 */
	struct UW_DamagePaperdoll_C_GetArmDmgRightVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.GetArmDmgLeftVisibility
	 */
	struct UW_DamagePaperdoll_C_GetArmDmgLeftVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Head
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Head_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Leg
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Left_Leg_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Leg
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Right_Leg_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Left Arm
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Left_Arm_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Right Arm
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Right_Arm_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Stop Flashing Torso
	 */
	struct UW_DamagePaperdoll_C_Stop_Flashing_Torso_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Tick
	 */
	struct UW_DamagePaperdoll_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.Construct
	 */
	struct UW_DamagePaperdoll_C_Construct_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnBodyPartHit
	 */
	struct UW_DamagePaperdoll_C_OnBodyPartHit_Params
	{
	public:
		bool                                                       Head;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBodyHit;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Left_Arm;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right_Arm;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Left_Leg;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right_Leg;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.UpdateHealth
	 */
	struct UW_DamagePaperdoll_C_UpdateHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.OnInitialized
	 */
	struct UW_DamagePaperdoll_C_OnInitialized_Params
	{	};

	/**
	 * Function W_DamagePaperdoll.W_DamagePaperdoll_C.ExecuteUbergraph_W_DamagePaperdoll
	 */
	struct UW_DamagePaperdoll_C_ExecuteUbergraph_W_DamagePaperdoll_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
