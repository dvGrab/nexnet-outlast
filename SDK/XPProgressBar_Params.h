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
	 * Function XPProgressBar.XPProgressBar_C.Update
	 */
	struct UXPProgressBar_C_Update_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartXp;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentXp;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.InitProgressBar
	 */
	struct UXPProgressBar_C_InitProgressBar_Params
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Xp;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.Refresh
	 */
	struct UXPProgressBar_C_Refresh_Params
	{	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.Init
	 */
	struct UXPProgressBar_C_Init_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartXp;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentXp;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.Finished_9C6F7CD84E0F470B1412B4BAA721AA7E
	 */
	struct UXPProgressBar_C_Finished_9C6F7CD84E0F470B1412B4BAA721AA7E_Params
	{	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.RefreshWithAnimation
	 */
	struct UXPProgressBar_C_RefreshWithAnimation_Params
	{	};

	/**
	 * Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar
	 */
	struct UXPProgressBar_C_ExecuteUbergraph_XPProgressBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
