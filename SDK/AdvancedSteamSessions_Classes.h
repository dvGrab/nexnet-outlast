﻿#pragma once

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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamFriendsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly);
		bool OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType);
		bool IsSteamInBigPictureMode();
		bool IsOverlayEnabled();
		bool InitTextFiltering();
		class FString GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId);
		void GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups);
		void GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int32_t* AppId);
		class UTexture2D* GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize);
		struct FBPUniqueNetId GetLocalSteamIDFromSteam();
		int32_t GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId);
		bool FilterText(const class FString& TextToFilter, EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText);
		struct FBPUniqueNetId CreateSteamIDFromString(const class FString& SteamID64);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSteamWorkshopLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32_t* NumberOfItems);
		void GetNumSubscribedWorkshopItems(int32_t* NumberOfItems);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FVK[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)

	public:
		class USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID);
		static UClass* StaticClass();
	};

	/**
	 * Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FENX[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)

	public:
		class USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
