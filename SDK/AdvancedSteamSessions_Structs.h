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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AdvancedSteamSessions.FBPWorkshopFileType
	 */
	enum class EFBPWorkshopFileType : uint8_t
	{
		FBPWorkshopFileType_k_EWorkshopFileTypeCommunity              = 0,
		FBPWorkshopFileType_k_EWorkshopFileTypeMicrotransaction       = 1,
		FBPWorkshopFileType_k_EWorkshopFileTypeCollection             = 2,
		FBPWorkshopFileType_k_EWorkshopFileTypeArt                    = 3,
		FBPWorkshopFileType_k_EWorkshopFileTypeVideo                  = 4,
		FBPWorkshopFileType_k_EWorkshopFileTypeScreenshot             = 5,
		FBPWorkshopFileType_k_EWorkshopFileTypeGame                   = 6,
		FBPWorkshopFileType_k_EWorkshopFileTypeSoftware               = 7,
		FBPWorkshopFileType_k_EWorkshopFileTypeConcept                = 8,
		FBPWorkshopFileType_k_EWorkshopFileTypeWebGuide               = 9,
		FBPWorkshopFileType_k_EWorkshopFileTypeIntegratedGuide        = 10,
		FBPWorkshopFileType_k_EWorkshopFileTypeMerch                  = 11,
		FBPWorkshopFileType_k_EWorkshopFileTypeControllerBinding      = 12,
		FBPWorkshopFileType_k_EWorkshopFileTypeSteamworksAccessInvite = 13,
		FBPWorkshopFileType_k_EWorkshopFileTypeSteamVideo             = 14,
		FBPWorkshopFileType_k_EWorkshopFileTypeMax                    = 15,
		FBPWorkshopFileType_k_MAX                                     = 16
	};

	/**
	 * Enum AdvancedSteamSessions.FBPSteamResult
	 */
	enum class EFBPSteamResult : uint8_t
	{
		FBPSteamResult_K_EResultInvalid                                 = 0,
		FBPSteamResult_k_EResultOK                                      = 1,
		FBPSteamResult_k_EResultFail                                    = 2,
		FBPSteamResult_k_EResultNoConnection                            = 3,
		FBPSteamResult_k_EResultInvalidPassword                         = 4,
		FBPSteamResult_k_EResultLoggedInElsewhere                       = 5,
		FBPSteamResult_k_EResultInvalidProtocolVer                      = 6,
		FBPSteamResult_k_EResultInvalidParam                            = 7,
		FBPSteamResult_k_EResultFileNotFound                            = 8,
		FBPSteamResult_k_EResultBusy                                    = 9,
		FBPSteamResult_k_EResultInvalidState                            = 10,
		FBPSteamResult_k_EResultInvalidName                             = 11,
		FBPSteamResult_k_EResultInvalidEmail                            = 12,
		FBPSteamResult_k_EResultDuplicateName                           = 13,
		FBPSteamResult_k_EResultAccessDenied                            = 14,
		FBPSteamResult_k_EResultTimeout                                 = 15,
		FBPSteamResult_k_EResultBanned                                  = 16,
		FBPSteamResult_k_EResultAccountNotFound                         = 17,
		FBPSteamResult_k_EResultInvalidSteamID                          = 18,
		FBPSteamResult_k_EResultServiceUnavailable                      = 19,
		FBPSteamResult_k_EResultNotLoggedOn                             = 20,
		FBPSteamResult_k_EResultPending                                 = 21,
		FBPSteamResult_k_EResultEncryptionFailure                       = 22,
		FBPSteamResult_k_EResultInsufficientPrivilege                   = 23,
		FBPSteamResult_k_EResultLimitExceeded                           = 24,
		FBPSteamResult_k_EResultRevoked                                 = 25,
		FBPSteamResult_k_EResultExpired                                 = 26,
		FBPSteamResult_k_EResultAlreadyRedeemed                         = 27,
		FBPSteamResult_k_EResultDuplicateRequest                        = 28,
		FBPSteamResult_k_EResultAlreadyOwned                            = 29,
		FBPSteamResult_k_EResultIPNotFound                              = 30,
		FBPSteamResult_k_EResultPersistFailed                           = 31,
		FBPSteamResult_k_EResultLockingFailed                           = 32,
		FBPSteamResult_k_EResultLogonSessionReplaced                    = 33,
		FBPSteamResult_k_EResultConnectFailed                           = 34,
		FBPSteamResult_k_EResultHandshakeFailed                         = 35,
		FBPSteamResult_k_EResultIOFailure                               = 36,
		FBPSteamResult_k_EResultRemoteDisconnect                        = 37,
		FBPSteamResult_k_EResultShoppingCartNotFound                    = 38,
		FBPSteamResult_k_EResultBlocked                                 = 39,
		FBPSteamResult_k_EResultIgnored                                 = 40,
		FBPSteamResult_k_EResultNoMatch                                 = 41,
		FBPSteamResult_k_EResultAccountDisabled                         = 42,
		FBPSteamResult_k_EResultServiceReadOnly                         = 43,
		FBPSteamResult_k_EResultAccountNotFeatured                      = 44,
		FBPSteamResult_k_EResultAdministratorOK                         = 45,
		FBPSteamResult_k_EResultContentVersion                          = 46,
		FBPSteamResult_k_EResultTryAnotherCM                            = 47,
		FBPSteamResult_k_EResultPasswordRequiredToKickSession           = 48,
		FBPSteamResult_k_EResultAlreadyLoggedInElsewhere                = 49,
		FBPSteamResult_k_EResultSuspended                               = 50,
		FBPSteamResult_k_EResultCancelled                               = 51,
		FBPSteamResult_k_EResultDataCorruption                          = 52,
		FBPSteamResult_k_EResultDiskFull                                = 53,
		FBPSteamResult_k_EResultRemoteCallFailed                        = 54,
		FBPSteamResult_k_EResultPasswordUnset                           = 55,
		FBPSteamResult_k_EResultExternalAccountUnlinked                 = 56,
		FBPSteamResult_k_EResultPSNTicketInvalid                        = 57,
		FBPSteamResult_k_EResultExternalAccountAlreadyLinked            = 58,
		FBPSteamResult_k_EResultRemoteFileConflict                      = 59,
		FBPSteamResult_k_EResultIllegalPassword                         = 60,
		FBPSteamResult_k_EResultSameAsPreviousValue                     = 61,
		FBPSteamResult_k_EResultAccountLogonDenied                      = 62,
		FBPSteamResult_k_EResultCannotUseOldPassword                    = 63,
		FBPSteamResult_k_EResultInvalidLoginAuthCode                    = 64,
		FBPSteamResult_k_EResultAccountLogonDeniedNoMail                = 65,
		FBPSteamResult_k_EResultHardwareNotCapableOfIPT                 = 66,
		FBPSteamResult_k_EResultIPTInitError                            = 67,
		FBPSteamResult_k_EResultParentalControlRestricted               = 68,
		FBPSteamResult_k_EResultFacebookQueryError                      = 69,
		FBPSteamResult_k_EResultExpiredLoginAuthCode                    = 70,
		FBPSteamResult_k_EResultIPLoginRestrictionFailed                = 71,
		FBPSteamResult_k_EResultAccountLockedDown                       = 72,
		FBPSteamResult_k_EResultAccountLogonDeniedVerifiedEmailRequired = 73,
		FBPSteamResult_k_EResultNoMatchingURL                           = 74,
		FBPSteamResult_k_EResultBadResponse                             = 75,
		FBPSteamResult_k_EResultRequirePasswordReEntry                  = 76,
		FBPSteamResult_k_EResultValueOutOfRange                         = 77,
		FBPSteamResult_k_EResultUnexpectedError                         = 78,
		FBPSteamResult_k_EResultDisabled                                = 79,
		FBPSteamResult_k_EResultInvalidCEGSubmission                    = 80,
		FBPSteamResult_k_EResultRestrictedDevice                        = 81,
		FBPSteamResult_k_EResultRegionLocked                            = 82,
		FBPSteamResult_k_EResultRateLimitExceeded                       = 83,
		FBPSteamResult_k_EResultAccountLoginDeniedNeedTwoFactor         = 84,
		FBPSteamResult_k_EResultItemDeleted                             = 85,
		FBPSteamResult_k_EResultAccountLoginDeniedThrottle              = 86,
		FBPSteamResult_k_EResultTwoFactorCodeMismatch                   = 87,
		FBPSteamResult_k_EResultTwoFactorActivationCodeMismatch         = 88,
		FBPSteamResult_k_EResultAccountAssociatedToMultiplePartners     = 89,
		FBPSteamResult_k_EResultNotModified                             = 90,
		FBPSteamResult_FBPSteamResult_MAX                               = 91
	};

	/**
	 * Enum AdvancedSteamSessions.EBPTextFilteringContext
	 */
	enum class EBPTextFilteringContext : uint8_t
	{
		FContext_Unknown     = 0,
		FContext_GameContent = 1,
		FContext_Chat        = 2,
		FContext_Name        = 3,
		FContext_MAX         = 4
	};

	/**
	 * Enum AdvancedSteamSessions.ESteamUserOverlayType
	 */
	enum class ESteamUserOverlayType : uint8_t
	{
		steamid             = 0,
		chat                = 1,
		jointrade           = 2,
		stats               = 3,
		achievements        = 4,
		friendadd           = 5,
		friendremove        = 6,
		friendrequestaccept = 7,
		friendrequestignore = 8,
		MAX                 = 9
	};

	/**
	 * Enum AdvancedSteamSessions.SteamAvatarSize
	 */
	enum class ESteamAvatarSize : uint8_t
	{
		SteamAvatarSize_SteamAvatar_INVALID = 0,
		SteamAvatarSize_SteamAvatar_Small   = 1,
		SteamAvatarSize_SteamAvatar_Medium  = 2,
		SteamAvatarSize_SteamAvatar_Large   = 3,
		SteamAvatarSize_SteamAvatar_MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
	 * Size -> 0x0028
	 */
	struct FBPSteamGroupOfficer
	{
	public:
		struct FBPUniqueNetId                                      OfficerUniqueNetID;                                      // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsOwner;                                                // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98DC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
	 * Size -> 0x0060
	 */
	struct FBPSteamWorkshopItemDetails
	{
	public:
		EFBPSteamResult                                            ResultOfRequest;                                         // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFBPWorkshopFileType                                       FileType;                                                // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHDV[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CreatorAppID;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumerAppID;                                           // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBH2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemUrl;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VotesUp;                                                 // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VotesDown;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CalculatedScore;                                         // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBanned;                                                 // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptedForUse;                                         // 0x004D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTagsTruncated;                                          // 0x004E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76I8[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CreatorSteamID;                                          // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
	 * Size -> 0x0050
	 */
	struct FBPSteamGroupInfo
	{
	public:
		struct FBPUniqueNetId                                      GroupID;                                                 // 0x0000(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupTag;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    numOnline;                                               // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    numInGame;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    numChatting;                                             // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXCU[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
	 * Size -> 0x0008
	 */
	struct FBPSteamWorkshopID
	{
	public:
		unsigned char                                              UnknownData_P7I3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
