/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireNameOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::RequestSteamFriendInfo(const struct FBPUniqueNetId& UniqueNetId, bool bRequireNameOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo");
		
		UAdvancedSteamFriendsLibrary_RequestSteamFriendInfo_Params params {};
		params.UniqueNetId = UniqueNetId;
		params.bRequireNameOnly = bRequireNameOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		ESteamUserOverlayType                              DialogType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::OpenSteamUserOverlay(const struct FBPUniqueNetId& UniqueNetId, ESteamUserOverlayType DialogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay");
		
		UAdvancedSteamFriendsLibrary_OpenSteamUserOverlay_Params params {};
		params.UniqueNetId = UniqueNetId;
		params.DialogType = DialogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode
	 * 		Flags  -> ()
	 */
	bool UAdvancedSteamFriendsLibrary::IsSteamInBigPictureMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsSteamInBigPictureMode");
		
		UAdvancedSteamFriendsLibrary_IsSteamInBigPictureMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled
	 * 		Flags  -> ()
	 */
	bool UAdvancedSteamFriendsLibrary::IsOverlayEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.IsOverlayEnabled");
		
		UAdvancedSteamFriendsLibrary_IsOverlayEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering
	 * 		Flags  -> ()
	 */
	bool UAdvancedSteamFriendsLibrary::InitTextFiltering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.InitTextFiltering");
		
		UAdvancedSteamFriendsLibrary_InitTextFiltering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAdvancedSteamFriendsLibrary::GetSteamPersonaName(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName");
		
		UAdvancedSteamFriendsLibrary_GetSteamPersonaName_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPSteamGroupInfo>                   SteamGroups                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSteamFriendsLibrary::GetSteamGroups(TArray<struct FBPSteamGroupInfo>* SteamGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups");
		
		UAdvancedSteamFriendsLibrary_GetSteamGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SteamGroups != nullptr)
			*SteamGroups = params.SteamGroups;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AppId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSteamFriendsLibrary::GetSteamFriendGamePlayed(const struct FBPUniqueNetId& UniqueNetId, EBlueprintResultSwitch* Result, int32_t* AppId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed");
		
		UAdvancedSteamFriendsLibrary_GetSteamFriendGamePlayed_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AppId != nullptr)
			*AppId = params.AppId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintAsyncResultSwitch                        Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UAdvancedSteamFriendsLibrary::GetSteamFriendAvatar(const struct FBPUniqueNetId& UniqueNetId, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar");
		
		UAdvancedSteamFriendsLibrary_GetSteamFriendAvatar_Params params {};
		params.UniqueNetId = UniqueNetId;
		params.AvatarSize = AvatarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam
	 * 		Flags  -> ()
	 */
	struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::GetLocalSteamIDFromSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam");
		
		UAdvancedSteamFriendsLibrary_GetLocalSteamIDFromSteam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAdvancedSteamFriendsLibrary::GetFriendSteamLevel(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel");
		
		UAdvancedSteamFriendsLibrary_GetFriendSteamLevel_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TextToFilter                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPTextFilteringContext                            Context                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              TextSourceID                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      FilteredText                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSteamFriendsLibrary::FilterText(const class FString& TextToFilter, EBPTextFilteringContext Context, const struct FBPUniqueNetId& TextSourceID, class FString* FilteredText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.FilterText");
		
		UAdvancedSteamFriendsLibrary_FilterText_Params params {};
		params.TextToFilter = TextToFilter;
		params.Context = Context;
		params.TextSourceID = TextSourceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredText != nullptr)
			*FilteredText = params.FilteredText;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamID64                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBPUniqueNetId UAdvancedSteamFriendsLibrary::CreateSteamIDFromString(const class FString& SteamID64)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString");
		
		UAdvancedSteamFriendsLibrary_CreateSteamIDFromString_Params params {};
		params.SteamID64 = SteamID64;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamFriendsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamFriendsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfItems                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FBPSteamWorkshopID> UAdvancedSteamWorkshopLibrary::GetSubscribedWorkshopItems(int32_t* NumberOfItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems");
		
		UAdvancedSteamWorkshopLibrary_GetSubscribedWorkshopItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfItems != nullptr)
			*NumberOfItems = params.NumberOfItems;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumberOfItems                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSteamWorkshopLibrary::GetNumSubscribedWorkshopItems(int32_t* NumberOfItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems");
		
		UAdvancedSteamWorkshopLibrary_GetNumSubscribedWorkshopItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumberOfItems != nullptr)
			*NumberOfItems = params.NumberOfItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSteamWorkshopLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSteamWorkshopLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              GroupUniqueNetID                                           (Parm, NativeAccessSpecifierPublic)
	 */
	class USteamRequestGroupOfficersCallbackProxy* USteamRequestGroupOfficersCallbackProxy::GetSteamGroupOfficerList(class UObject* WorldContextObject, const struct FBPUniqueNetId& GroupUniqueNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList");
		
		USteamRequestGroupOfficersCallbackProxy_GetSteamGroupOfficerList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupUniqueNetID = GroupUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamRequestGroupOfficersCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamRequestGroupOfficersCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPSteamWorkshopID                          WorkShopID                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USteamWSRequestUGCDetailsCallbackProxy* USteamWSRequestUGCDetailsCallbackProxy::GetWorkshopItemDetails(class UObject* WorldContextObject, const struct FBPSteamWorkshopID& WorkShopID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails");
		
		USteamWSRequestUGCDetailsCallbackProxy_GetWorkshopItemDetails_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorkShopID = WorkShopID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamWSRequestUGCDetailsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamWSRequestUGCDetailsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy");
		return ptr;
	}

}


