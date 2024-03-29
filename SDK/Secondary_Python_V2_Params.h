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
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.UserConstructionScript
	 */
	struct ASecondary_Python_V2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.OnWeaponFire_Event_1
	 */
	struct ASecondary_Python_V2_C_OnWeaponFire_Event_1_Params
	{
	public:
		class ABaseMagazineWeapon*                                 Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bServer;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.SetupBaseEvents
	 */
	struct ASecondary_Python_V2_C_SetupBaseEvents_Params
	{	};

	/**
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveBeginPlay
	 */
	struct ASecondary_Python_V2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.ReceiveTick
	 */
	struct ASecondary_Python_V2_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Secondary_Python_V2.Secondary_Python_V2_C.ExecuteUbergraph_Secondary_Python_V2
	 */
	struct ASecondary_Python_V2_C_ExecuteUbergraph_Secondary_Python_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FBII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
