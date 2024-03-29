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
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
	 */
	struct UAdvancedExternalUILibrary_ShowWebURLUI_Params
	{
	public:
		class FString                                              URLToShow;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ED29[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      AllowedDomains;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bEmbedded;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowBackground;                                         // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShowCloseButton;                                        // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4LLZ[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OffsetX;                                                 // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OffsetY;                                                 // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
	 */
	struct UAdvancedExternalUILibrary_ShowProfileUI_Params
	{
	public:
		struct FBPUniqueNetId                                      PlayerViewingProfile;                                    // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      PlayerToViewProfileOf;                                   // 0x0020(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
	 */
	struct UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params
	{
	public:
		class FString                                              LeaderboardName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
	 */
	struct UAdvancedExternalUILibrary_ShowInviteUI_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
	 */
	struct UAdvancedExternalUILibrary_ShowFriendsUI_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
	 */
	struct UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params
	{
	public:
		struct FBPUniqueNetId                                      PlayerRequestingAccountUpgradeUI;                        // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
	 */
	struct UAdvancedExternalUILibrary_CloseWebURLUI_Params
	{	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
	 */
	struct UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params
	{
	public:
		int32_t                                                    LocalPlayerNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1DVT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PersonInviting;                                          // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              AppId;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SessionToJoin;                                           // 0x0038(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
	 */
	struct UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params
	{
	public:
		int32_t                                                    LocalPlayerNum;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_32EX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PersonInvited;                                           // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SessionToJoin;                                           // 0x0028(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
	 */
	struct UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params
	{
	public:
		struct FBPUniqueNetId                                      PlayerId;                                                // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
	 */
	struct UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params
	{
	public:
		int32_t                                                    PlayerNum;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPLoginStatus                                             PreviousStatus;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPLoginStatus                                             NewStatus;                                               // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MH6U[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      NewPlayerUniqueNetID;                                    // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
	 */
	struct UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params
	{
	public:
		int32_t                                                    PlayerNum;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
	 */
	struct UAdvancedFriendsInterface_OnSessionInviteReceived_Params
	{
	public:
		struct FBPUniqueNetId                                      PersonInviting;                                          // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0020(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
	 */
	struct UAdvancedFriendsInterface_OnSessionInviteAccepted_Params
	{
	public:
		struct FBPUniqueNetId                                      PersonInvited;                                           // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0020(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
	 */
	struct UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params
	{
	public:
		struct FBPUniqueNetId                                      PlayerId;                                                // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bIsTalking;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
	 */
	struct UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params
	{
	public:
		EBPLoginStatus                                             PreviousStatus;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPLoginStatus                                             NewStatus;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MBHT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PlayerUniqueNetID;                                       // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
	 */
	struct UAdvancedFriendsInterface_OnPlayerLoginChanged_Params
	{
	public:
		int32_t                                                    PlayerNum;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
	 */
	struct UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBPUniqueNetId>                              Friends;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
	 */
	struct UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      FriendUniqueNetId;                                       // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
	 */
	struct UAdvancedFriendsLibrary_IsAFriend_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		bool                                                       IsFriend;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
	 */
	struct UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FBPOnlineRecentPlayer>                       PlayersList;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
	 */
	struct UAdvancedFriendsLibrary_GetStoredFriendsList_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBPFriendInfo>                               FriendsList;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
	 */
	struct UAdvancedFriendsLibrary_GetFriend_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      FriendUniqueNetId;                                       // 0x0008(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		struct FBPFriendInfo                                       Friend;                                                  // 0x0028(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
	 */
	struct UAdvancedIdentityLibrary_SetUserAccountAttribute_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              AttributeName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewAttributeValue;                                       // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
	 */
	struct UAdvancedIdentityLibrary_GetUserID_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0010(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
	 */
	struct UAdvancedIdentityLibrary_GetUserAccountRealName_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Username;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
	 */
	struct UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              DisplayName;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
	 */
	struct UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              AttributeName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AuthAttribute;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
	 */
	struct UAdvancedIdentityLibrary_GetUserAccountAttribute_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              AttributeName;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AttributeValue;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
	 */
	struct UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params
	{
	public:
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              AccessToken;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
	 */
	struct UAdvancedIdentityLibrary_GetUserAccount_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBPUserOnlineAccount                                AccountInfo;                                             // 0x0020(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
	 */
	struct UAdvancedIdentityLibrary_GetPlayerNickname_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              PlayerNickname;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
	 */
	struct UAdvancedIdentityLibrary_GetPlayerAuthToken_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AuthToken;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
	 */
	struct UAdvancedIdentityLibrary_GetLoginStatus_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EBPLoginStatus                                             LoginStatus;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
	 */
	struct UAdvancedIdentityLibrary_GetAllUserAccounts_Params
	{
	public:
		TArray<struct FBPUserOnlineAccount>                        AccountInfos;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
	 */
	struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
	 */
	struct UAdvancedSessionsLibrary_SetPlayerName_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
	{
	public:
		struct FSessionPropertyKeyPair                             SessionSearchProperty;                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EOnlineComparisonOpRedux                                   ComparisonOp;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DC6N[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionsSearchSetting                              ReturnValue;                                             // 0x0028(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0018(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JQQ4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OW4Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_54WV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8L9C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
	 */
	struct UAdvancedSessionsLibrary_KickPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerToKick;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                KickReason;                                              // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
	 */
	struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
	 */
	struct UAdvancedSessionsLibrary_IsValidSession_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
	 */
	struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      PlayerToCheck;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsInSession;                                            // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
	 */
	struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
	{
	public:
		class FName                                                SubSystemName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	 */
	struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
	 */
	struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
	 */
	struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x0108)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    UniqueBuildId;                                           // 0x0108(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
	 */
	struct UAdvancedSessionsLibrary_GetSessionState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOnlineSessionState                                      SessionState;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
	 */
	struct UAdvancedSessionsLibrary_GetSessionSettings_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumConnections;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumPrivateConnections;                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLAN;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDedicated;                                            // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinInProgress;                                    // 0x0013(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAnticheatEnabled;                                     // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8UCY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BuildUniqueID;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZMCD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L9J6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SettingValue;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
	{
	public:
		struct FSessionPropertyKeyPair                             SessionProperty;                                         // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ARES[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SettingValue;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LDH9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SettingValue;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              SettingValue;                                            // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SettingValue;                                            // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
	 */
	struct UAdvancedSessionsLibrary_GetSessionID_AsString_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              SessionID;                                               // 0x0108(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
	 */
	struct UAdvancedSessionsLibrary_GetPlayerName_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	 */
	struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumNetPlayers;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
	 */
	struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NetPlayerIndex;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
	 */
	struct UAdvancedSessionsLibrary_GetExtraSettings_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x0108)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0108(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	 */
	struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
	{
	public:
		int32_t                                                    UniqueBuildId;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
	 */
	struct UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SessionID;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	 */
	struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XSOT[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutIndex;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
	 */
	struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingsName;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C6QG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             OutProperty;                                             // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	 */
	struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
	{
	public:
		struct FBPUniqueNetId                                      A;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      B;                                                       // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
	 */
	struct UAdvancedSessionsLibrary_BanPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerToBan;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                BanReason;                                               // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	 */
	struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     SettingsArray;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     NewOrChangedSettings;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ModifiedSettingsArray;                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
	 */
	struct UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
	 */
	struct UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params
	{
	public:
		unsigned char                                              LocalPlayerNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
	 */
	struct UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params
	{	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
	 */
	struct UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params
	{
	public:
		unsigned char                                              LocalUserNum;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_INXR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsSystemWide;                                           // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
	 */
	struct UAdvancedVoiceLibrary_StopNetworkedVoice_Params
	{
	public:
		unsigned char                                              LocalPlayerNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
	 */
	struct UAdvancedVoiceLibrary_StartNetworkedVoice_Params
	{
	public:
		unsigned char                                              LocalPlayerNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
	 */
	struct UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params
	{	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
	 */
	struct UAdvancedVoiceLibrary_RegisterRemoteTalker_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
	 */
	struct UAdvancedVoiceLibrary_RegisterLocalTalker_Params
	{
	public:
		unsigned char                                              LocalPlayerNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
	 */
	struct UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params
	{	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
	 */
	struct UAdvancedVoiceLibrary_MuteRemoteTalker_Params
	{
	public:
		unsigned char                                              LocalUserNum;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GR9B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsSystemWide;                                           // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
	 */
	struct UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
	 */
	struct UAdvancedVoiceLibrary_IsPlayerMuted_Params
	{
	public:
		unsigned char                                              LocalUserNumChecking;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N07E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
	 */
	struct UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params
	{
	public:
		unsigned char                                              LocalPlayerNum;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
	 */
	struct UAdvancedVoiceLibrary_IsHeadsetPresent_Params
	{
	public:
		bool                                                       bHasHeadset;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              LocalPlayerNum;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
	 */
	struct UAdvancedVoiceLibrary_GetNumLocalTalkers_Params
	{
	public:
		int32_t                                                    NumLocalTalkers;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
	 */
	struct UCancelFindSessionsCallbackProxy_CancelFindSessions_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCancelFindSessionsCallbackProxy*                    ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
	 */
	struct UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PublicConnections;                                       // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PrivateConnections;                                      // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDedicatedServer;                                      // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePresence;                                            // 0x002B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLobbiesIfAvailable;                                  // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinViaPresence;                                   // 0x002D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinViaPresenceFriendsOnly;                        // 0x002E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAntiCheatProtected;                                     // 0x002F(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsesStats;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldAdvertise;                                        // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_57YG[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCreateSessionCallbackProxyAdvanced*                 ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
	 */
	struct UDestroySessionCallbackProxyAdvanced_DestroySession_Params
	{
	public:
		class UWorld*                                              WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDestroySessionCallbackProxyAdvanced*                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.EndSessionCallbackProxy.EndSession
	 */
	struct UEndSessionCallbackProxy_EndSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEndSessionCallbackProxy*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
	 */
	struct UFindFriendSessionCallbackProxy_FindFriendSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      FriendUniqueNetId;                                       // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UFindFriendSessionCallbackProxy*                     ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
	 */
	struct UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxResults;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPServerPresenceSearchType                                ServerTypeToSearch;                                      // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EQXU[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSessionsSearchSetting>                      Filters;                                                 // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bEmptyServersOnly;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNonEmptyServersOnly;                                    // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSecureServersOnly;                                      // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSearchLobbies;                                          // 0x002B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MinSlotsAvailable;                                       // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFindSessionsCallbackProxyAdvanced*                  ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
	 */
	struct UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params
	{
	public:
		TArray<struct FBlueprintSessionResult>                     SessionResults;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSessionsSearchSetting>                      Filters;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FBlueprintSessionResult>                     FilteredResults;                                         // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
	 */
	struct UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGetFriendsCallbackProxy*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
	 */
	struct UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGetRecentPlayersCallbackProxy*                      ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
	 */
	struct UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPUserPrivileges                                          PrivilegeToCheck;                                        // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I6CX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPUniqueNetId                                      PlayerUniqueNetID;                                       // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGetUserPrivilegeCallbackProxy*                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
	 */
	struct UJoinSessionCallbackProxyAdvanced_JoinSession_Params
	{
	public:
		class UWorld*                                              WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0010(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UJoinSessionCallbackProxyAdvanced*                   ReturnValue;                                             // 0x0118(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
	 */
	struct ULoginUserCallbackProxy_LoginUser_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserID;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserToken;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULoginUserCallbackProxy*                             ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
	 */
	struct ULogoutUserCallbackProxy_LogoutUser_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULogoutUserCallbackProxy*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
	 */
	struct USendFriendInviteCallbackProxy_SendFriendInvite_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetIDInvited;                                      // 0x0010(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class USendFriendInviteCallbackProxy*                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
	 */
	struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    PublicConnections;                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PrivateConnections;                                      // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinInProgress;                                    // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRefreshOnlineData;                                      // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDedicatedServer;                                      // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8UAK[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpdateSessionCallbackProxyAdvanced*                 ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
