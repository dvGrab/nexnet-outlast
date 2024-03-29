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
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
	 */
	struct UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       bRequireNameOnly;                                        // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
	 */
	struct UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		ESteamUserOverlayType                                      DialogType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
	 */
	struct UAdvancedSteamFriendsLibrary_IsSteamInBigPictureMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
	 */
	struct UAdvancedSteamFriendsLibrary_IsOverlayEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
	 */
	struct UAdvancedSteamFriendsLibrary_InitTextFiltering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
	 */
	struct UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
	 */
	struct UAdvancedSteamFriendsLibrary_GetSteamGroups_Params
	{
	public:
		TArray<struct FBPSteamGroupInfo>                           SteamGroups;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
	 */
	struct UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VHFK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AppId;                                                   // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
	 */
	struct UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EBlueprintAsyncResultSwitch                                Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESteamAvatarSize                                           AvatarSize;                                              // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X1MX[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
	 */
	struct UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params
	{
	public:
		struct FBPUniqueNetId                                      ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
	 */
	struct UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
	 */
	struct UAdvancedSteamFriendsLibrary_FilterText_Params
	{
	public:
		class FString                                              TextToFilter;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPTextFilteringContext                                    Context;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SDPS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      TextSourceID;                                            // 0x0018(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class FString                                              FilteredText;                                            // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
	 */
	struct UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params
	{
	public:
		class FString                                              SteamID64;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
	 */
	struct UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params
	{
	public:
		int32_t                                                    NumberOfItems;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BB71[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FBPSteamWorkshopID>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
	 */
	struct UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params
	{
	public:
		int32_t                                                    NumberOfItems;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
	 */
	struct USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      GroupUniqueNetID;                                        // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class USteamRequestGroupOfficersCallbackProxy*             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
	 */
	struct USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPSteamWorkshopID                                  WorkShopID;                                              // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class USteamWSRequestUGCDetailsCallbackProxy*              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
