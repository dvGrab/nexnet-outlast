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
	 * Function SocialMenu_Tab_Friends.SocialMenu_Tab_Friends_C.OnFocusReceived
	 */
	struct USocialMenu_Tab_Friends_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SocialMenu_Tab_Friends.SocialMenu_Tab_Friends_C.Deactivate
	 */
	struct USocialMenu_Tab_Friends_C_Deactivate_Params
	{	};

	/**
	 * Function SocialMenu_Tab_Friends.SocialMenu_Tab_Friends_C.Activate
	 */
	struct USocialMenu_Tab_Friends_C_Activate_Params
	{
	public:
		class URBSocialMenuManager*                                SocialMenu;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
