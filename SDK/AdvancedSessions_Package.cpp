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
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URLToShow                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              AllowedDomains                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmbedded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowBackground                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShowCloseButton                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OffsetX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OffsetY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SizeY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowWebURLUI(const class FString& URLToShow, EBlueprintResultSwitch* Result, TArray<class FString>* AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI");
		
		UAdvancedExternalUILibrary_ShowWebURLUI_Params params {};
		params.URLToShow = URLToShow;
		params.bEmbedded = bEmbedded;
		params.bShowBackground = bShowBackground;
		params.bShowCloseButton = bShowCloseButton;
		params.OffsetX = OffsetX;
		params.OffsetY = OffsetY;
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (AllowedDomains != nullptr)
			*AllowedDomains = params.AllowedDomains;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerViewingProfile                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerToViewProfileOf                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowProfileUI(const struct FBPUniqueNetId& PlayerViewingProfile, const struct FBPUniqueNetId& PlayerToViewProfileOf, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI");
		
		UAdvancedExternalUILibrary_ShowProfileUI_Params params {};
		params.PlayerViewingProfile = PlayerViewingProfile;
		params.PlayerToViewProfileOf = PlayerToViewProfileOf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowLeaderBoardUI(const class FString& LeaderboardName, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI");
		
		UAdvancedExternalUILibrary_ShowLeaderBoardUI_Params params {};
		params.LeaderboardName = LeaderboardName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowInviteUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI");
		
		UAdvancedExternalUILibrary_ShowInviteUI_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowFriendsUI(class APlayerController* PlayerController, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI");
		
		UAdvancedExternalUILibrary_ShowFriendsUI_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerRequestingAccountUpgradeUI                           (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(const struct FBPUniqueNetId& PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI");
		
		UAdvancedExternalUILibrary_ShowAccountUpgradeUI_Params params {};
		params.PlayerRequestingAccountUpgradeUI = PlayerRequestingAccountUpgradeUI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI
	 * 		Flags  -> ()
	 */
	void UAdvancedExternalUILibrary::CloseWebURLUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI");
		
		UAdvancedExternalUILibrary_CloseWebURLUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedExternalUILibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedExternalUILibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedExternalUILibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PersonInviting                                             (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AppId                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsGameInstance::OnSessionInviteReceived(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInviting, const class FString& AppId, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived");
		
		UAdvancedFriendsGameInstance_OnSessionInviteReceived_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInviting = PersonInviting;
		params.AppId = AppId;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SessionToJoin                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsGameInstance::OnSessionInviteAccepted(int32_t LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SessionToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted");
		
		UAdvancedFriendsGameInstance_OnSessionInviteAccepted_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		params.PersonInvited = PersonInvited;
		params.SessionToJoin = SessionToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerId                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTalking                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsGameInstance::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged");
		
		UAdvancedFriendsGameInstance_OnPlayerTalkingStateChanged_Params params {};
		params.PlayerId = PlayerId;
		params.bIsTalking = bIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     PreviousStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     NewStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              NewPlayerUniqueNetID                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsGameInstance::OnPlayerLoginStatusChanged(int32_t PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& NewPlayerUniqueNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged");
		
		UAdvancedFriendsGameInstance_OnPlayerLoginStatusChanged_Params params {};
		params.PlayerNum = PlayerNum;
		params.PreviousStatus = PreviousStatus;
		params.NewStatus = NewStatus;
		params.NewPlayerUniqueNetID = NewPlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsGameInstance::OnPlayerLoginChanged(int32_t PlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged");
		
		UAdvancedFriendsGameInstance_OnPlayerLoginChanged_Params params {};
		params.PlayerNum = PlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedFriendsGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedFriendsGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PersonInviting                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsInterface::OnSessionInviteReceived(const struct FBPUniqueNetId& PersonInviting, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived");
		
		UAdvancedFriendsInterface_OnSessionInviteReceived_Params params {};
		params.PersonInviting = PersonInviting;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PersonInvited                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsInterface::OnSessionInviteAccepted(const struct FBPUniqueNetId& PersonInvited, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted");
		
		UAdvancedFriendsInterface_OnSessionInviteAccepted_Params params {};
		params.PersonInvited = PersonInvited;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              PlayerId                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsTalking                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsInterface::OnPlayerVoiceStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged");
		
		UAdvancedFriendsInterface_OnPlayerVoiceStateChanged_Params params {};
		params.PlayerId = PlayerId;
		params.bIsTalking = bIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBPLoginStatus                                     PreviousStatus                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     NewStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerUniqueNetID                                          (Parm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsInterface::OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, const struct FBPUniqueNetId& PlayerUniqueNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged");
		
		UAdvancedFriendsInterface_OnPlayerLoginStatusChanged_Params params {};
		params.PreviousStatus = PreviousStatus;
		params.NewStatus = NewStatus;
		params.PlayerUniqueNetID = PlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsInterface::OnPlayerLoginChanged(int32_t PlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged");
		
		UAdvancedFriendsInterface_OnPlayerLoginChanged_Params params {};
		params.PlayerNum = PlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedFriendsInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedFriendsInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPUniqueNetId>                      Friends                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::SendSessionInviteToFriends(class APlayerController* PlayerController, TArray<struct FBPUniqueNetId> Friends, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends");
		
		UAdvancedFriendsLibrary_SendSessionInviteToFriends_Params params {};
		params.PlayerController = PlayerController;
		params.Friends = Friends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::SendSessionInviteToFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend");
		
		UAdvancedFriendsLibrary_SendSessionInviteToFriend_Params params {};
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFriend                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::IsAFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetId, bool* IsFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend");
		
		UAdvancedFriendsLibrary_IsAFriend_Params params {};
		params.PlayerController = PlayerController;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFriend != nullptr)
			*IsFriend = params.IsFriend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPOnlineRecentPlayer>               PlayersList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::GetStoredRecentPlayersList(const struct FBPUniqueNetId& UniqueNetId, TArray<struct FBPOnlineRecentPlayer>* PlayersList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList");
		
		UAdvancedFriendsLibrary_GetStoredRecentPlayersList_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayersList != nullptr)
			*PlayersList = params.PlayersList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBPFriendInfo>                       FriendsList                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::GetStoredFriendsList(class APlayerController* PlayerController, TArray<struct FBPFriendInfo>* FriendsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList");
		
		UAdvancedFriendsLibrary_GetStoredFriendsList_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendsList != nullptr)
			*FriendsList = params.FriendsList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FBPFriendInfo                               Friend                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedFriendsLibrary::GetFriend(class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId, struct FBPFriendInfo* Friend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend");
		
		UAdvancedFriendsLibrary_GetFriend_Params params {};
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friend != nullptr)
			*Friend = params.Friend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedFriendsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedFriendsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedFriendsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAdvancedGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAdvancedGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewAttributeValue                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::SetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, const class FString& NewAttributeValue, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute");
		
		UAdvancedIdentityLibrary_SetUserAccountAttribute_Params params {};
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		params.NewAttributeValue = NewAttributeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserID(const struct FBPUserOnlineAccount& AccountInfo, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID");
		
		UAdvancedIdentityLibrary_GetUserID_Params params {};
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccountRealName(const struct FBPUserOnlineAccount& AccountInfo, class FString* Username)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName");
		
		UAdvancedIdentityLibrary_GetUserAccountRealName_Params params {};
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Username != nullptr)
			*Username = params.Username;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      DisplayName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccountDisplayName(const struct FBPUserOnlineAccount& AccountInfo, class FString* DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName");
		
		UAdvancedIdentityLibrary_GetUserAccountDisplayName_Params params {};
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthAttribute                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAuthAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AuthAttribute, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute");
		
		UAdvancedIdentityLibrary_GetUserAccountAuthAttribute_Params params {};
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AuthAttribute != nullptr)
			*AuthAttribute = params.AuthAttribute;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAttribute(const struct FBPUserOnlineAccount& AccountInfo, const class FString& AttributeName, class FString* AttributeValue, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute");
		
		UAdvancedIdentityLibrary_GetUserAccountAttribute_Params params {};
		params.AccountInfo = AccountInfo;
		params.AttributeName = AttributeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttributeValue != nullptr)
			*AttributeValue = params.AttributeValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      AccessToken                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccountAccessToken(const struct FBPUserOnlineAccount& AccountInfo, class FString* AccessToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken");
		
		UAdvancedIdentityLibrary_GetUserAccountAccessToken_Params params {};
		params.AccountInfo = AccountInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccessToken != nullptr)
			*AccessToken = params.AccessToken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUserOnlineAccount                        AccountInfo                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetUserAccount(const struct FBPUniqueNetId& UniqueNetId, struct FBPUserOnlineAccount* AccountInfo, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount");
		
		UAdvancedIdentityLibrary_GetUserAccount_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountInfo != nullptr)
			*AccountInfo = params.AccountInfo;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerNickname                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetPlayerNickname(const struct FBPUniqueNetId& UniqueNetId, class FString* PlayerNickname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname");
		
		UAdvancedIdentityLibrary_GetPlayerNickname_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNickname != nullptr)
			*PlayerNickname = params.PlayerNickname;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuthToken                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetPlayerAuthToken(class APlayerController* PlayerController, class FString* AuthToken, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken");
		
		UAdvancedIdentityLibrary_GetPlayerAuthToken_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AuthToken != nullptr)
			*AuthToken = params.AuthToken;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EBPLoginStatus                                     LoginStatus                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetLoginStatus(const struct FBPUniqueNetId& UniqueNetId, EBPLoginStatus* LoginStatus, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus");
		
		UAdvancedIdentityLibrary_GetLoginStatus_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoginStatus != nullptr)
			*LoginStatus = params.LoginStatus;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPUserOnlineAccount>                AccountInfos                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedIdentityLibrary::GetAllUserAccounts(TArray<struct FBPUserOnlineAccount>* AccountInfos, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts");
		
		UAdvancedIdentityLibrary_GetAllUserAccounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AccountInfos != nullptr)
			*AccountInfos = params.AccountInfos;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedIdentityLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedIdentityLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedIdentityLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString");
		
		UAdvancedSessionsLibrary_UniqueNetIdToString_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName");
		
		UAdvancedSessionsLibrary_SetPlayerName_Params params {};
		params.PlayerController = PlayerController;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionSearchProperty                                      (Parm, NativeAccessSpecifierPublic)
	 * 		EOnlineComparisonOpRedux                           ComparisonOp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionsSearchSetting UAdvancedSessionsLibrary::MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params params {};
		params.SessionSearchProperty = SessionSearchProperty;
		params.ComparisonOp = ComparisonOp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyString(const class FName& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyInt(const class FName& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyFloat(const class FName& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyByte(const class FName& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSessionPropertyKeyPair UAdvancedSessionsLibrary::MakeLiteralSessionPropertyBool(const class FName& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool");
		
		UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerToKick                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        KickReason                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, const class FText& KickReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.KickPlayer");
		
		UAdvancedSessionsLibrary_KickPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerToKick = PlayerToKick;
		params.KickReason = KickReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID");
		
		UAdvancedSessionsLibrary_IsValidUniqueNetID_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::IsValidSession(const struct FBlueprintSessionResult& SessionResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession");
		
		UAdvancedSessionsLibrary_IsValidSession_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerToCheck                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsInSession                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::IsPlayerInSession(class UObject* WorldContextObject, const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession");
		
		UAdvancedSessionsLibrary_IsPlayerInSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerToCheck = PlayerToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsInSession != nullptr)
			*bIsInSession = params.bIsInSession;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SubSystemName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::HasOnlineSubsystem(const class FName& SubSystemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem");
		
		UAdvancedSessionsLibrary_HasOnlineSubsystem_Params params {};
		params.SubSystemName = SubSystemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState");
		
		UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID");
		
		UAdvancedSessionsLibrary_GetUniqueNetID_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueNetId != nullptr)
			*UniqueNetId = params.UniqueNetId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32_t* UniqueBuildId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID");
		
		UAdvancedSessionsLibrary_GetUniqueBuildID_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOnlineSessionState                              SessionState                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState* SessionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState");
		
		UAdvancedSessionsLibrary_GetSessionState_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionState != nullptr)
			*SessionState = params.SessionState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumConnections                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPrivateConnections                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLAN                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAnticheatEnabled                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BuildUniqueID                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionSettings(class UObject* WorldContextObject, int32_t* NumConnections, int32_t* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32_t* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings");
		
		UAdvancedSessionsLibrary_GetSessionSettings_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumConnections != nullptr)
			*NumConnections = params.NumConnections;
		if (NumPrivateConnections != nullptr)
			*NumPrivateConnections = params.NumPrivateConnections;
		if (bIsLAN != nullptr)
			*bIsLAN = params.bIsLAN;
		if (bIsDedicated != nullptr)
			*bIsDedicated = params.bIsDedicated;
		if (bAllowInvites != nullptr)
			*bAllowInvites = params.bAllowInvites;
		if (bAllowJoinInProgress != nullptr)
			*bAllowJoinInProgress = params.bAllowJoinInProgress;
		if (bIsAnticheatEnabled != nullptr)
			*bIsAnticheatEnabled = params.bIsAnticheatEnabled;
		if (BuildUniqueID != nullptr)
			*BuildUniqueID = params.BuildUniqueID;
		if (ExtraSettings != nullptr)
			*ExtraSettings = params.ExtraSettings;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SettingValue                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString");
		
		UAdvancedSessionsLibrary_GetSessionPropertyString_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSessionPropertyKeyPair                     SessionProperty                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName UAdvancedSessionsLibrary::GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey");
		
		UAdvancedSessionsLibrary_GetSessionPropertyKey_Params params {};
		params.SessionProperty = SessionProperty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, int32_t* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt");
		
		UAdvancedSessionsLibrary_GetSessionPropertyInt_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat");
		
		UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte");
		
		UAdvancedSessionsLibrary_GetSessionPropertyByte_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESessionSettingSearchResult                        SearchResult                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SettingValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool");
		
		UAdvancedSessionsLibrary_GetSessionPropertyBool_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SearchResult != nullptr)
			*SearchResult = params.SearchResult;
		if (SettingValue != nullptr)
			*SettingValue = params.SettingValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetSessionID_AsString(const struct FBlueprintSessionResult& SessionResult, class FString* SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString");
		
		UAdvancedSessionsLibrary_GetSessionID_AsString_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionID != nullptr)
			*SessionID = params.SessionID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName");
		
		UAdvancedSessionsLibrary_GetPlayerName_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumNetPlayers                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t* NumNetPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers");
		
		UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumNetPlayers != nullptr)
			*NumNetPlayers = params.NumNetPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NetPlayerIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetNetPlayerIndex(class APlayerController* PlayerController, int32_t* NetPlayerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex");
		
		UAdvancedSessionsLibrary_GetNetPlayerIndex_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NetPlayerIndex != nullptr)
			*NetPlayerIndex = params.NetPlayerIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBlueprintSessionResult                     SessionResult                                              (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings");
		
		UAdvancedSessionsLibrary_GetExtraSettings_Params params {};
		params.SessionResult = SessionResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExtraSettings != nullptr)
			*ExtraSettings = params.ExtraSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UniqueBuildId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetCurrentUniqueBuildID(int32_t* UniqueBuildId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID");
		
		UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueBuildId != nullptr)
			*UniqueBuildId = params.UniqueBuildId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SessionID                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::GetCurrentSessionID_AsString(class UObject* WorldContextObject, class FString* SessionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString");
		
		UAdvancedSessionsLibrary_GetCurrentSessionID_AsString_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SessionID != nullptr)
			*SessionID = params.SessionID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, EBlueprintResultSwitch* Result, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName");
		
		UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingName = SettingName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        SettingsName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintResultSwitch                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSessionPropertyKeyPair                     OutProperty                                                (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName");
		
		UAdvancedSessionsLibrary_FindSessionPropertyByName_Params params {};
		params.ExtraSettings = ExtraSettings;
		params.SettingsName = SettingsName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (OutProperty != nullptr)
			*OutProperty = params.OutProperty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID");
		
		UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerToBan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        BanReason                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedSessionsLibrary::BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, const class FText& BanReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.BanPlayer");
		
		UAdvancedSessionsLibrary_BanPlayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerToBan = PlayerToBan;
		params.BanReason = BanReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSessionPropertyKeyPair>             SettingsArray                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             NewOrChangedSettings                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ModifiedSettingsArray                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdvancedSessionsLibrary::AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings");
		
		UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SettingsArray != nullptr)
			*SettingsArray = params.SettingsArray;
		if (NewOrChangedSettings != nullptr)
			*NewOrChangedSettings = params.NewOrChangedSettings;
		if (ModifiedSettingsArray != nullptr)
			*ModifiedSettingsArray = params.ModifiedSettingsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedSessionsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedSessionsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedSessionsLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::UnRegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker");
		
		UAdvancedVoiceLibrary_UnRegisterRemoteTalker_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedVoiceLibrary::UnRegisterLocalTalker(unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker");
		
		UAdvancedVoiceLibrary_UnRegisterLocalTalker_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers
	 * 		Flags  -> ()
	 */
	void UAdvancedVoiceLibrary::UnRegisterAllLocalTalkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers");
		
		UAdvancedVoiceLibrary_UnRegisterAllLocalTalkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSystemWide                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::UnMuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker");
		
		UAdvancedVoiceLibrary_UnMuteRemoteTalker_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.UniqueNetId = UniqueNetId;
		params.bIsSystemWide = bIsSystemWide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedVoiceLibrary::StopNetworkedVoice(unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice");
		
		UAdvancedVoiceLibrary_StopNetworkedVoice_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedVoiceLibrary::StartNetworkedVoice(unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice");
		
		UAdvancedVoiceLibrary_StartNetworkedVoice_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers
	 * 		Flags  -> ()
	 */
	void UAdvancedVoiceLibrary::RemoveAllRemoteTalkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers");
		
		UAdvancedVoiceLibrary_RemoveAllRemoteTalkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::RegisterRemoteTalker(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker");
		
		UAdvancedVoiceLibrary_RegisterRemoteTalker_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::RegisterLocalTalker(unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker");
		
		UAdvancedVoiceLibrary_RegisterLocalTalker_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers
	 * 		Flags  -> ()
	 */
	void UAdvancedVoiceLibrary::RegisterAllLocalTalkers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers");
		
		UAdvancedVoiceLibrary_RegisterAllLocalTalkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSystemWide                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::MuteRemoteTalker(unsigned char LocalUserNum, const struct FBPUniqueNetId& UniqueNetId, bool bIsSystemWide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker");
		
		UAdvancedVoiceLibrary_MuteRemoteTalker_Params params {};
		params.LocalUserNum = LocalUserNum;
		params.UniqueNetId = UniqueNetId;
		params.bIsSystemWide = bIsSystemWide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsRemotePlayerTalking(const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking");
		
		UAdvancedVoiceLibrary_IsRemotePlayerTalking_Params params {};
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalUserNumChecking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsPlayerMuted(unsigned char LocalUserNumChecking, const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted");
		
		UAdvancedVoiceLibrary_IsPlayerMuted_Params params {};
		params.LocalUserNumChecking = LocalUserNumChecking;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAdvancedVoiceLibrary::IsLocalPlayerTalking(unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking");
		
		UAdvancedVoiceLibrary_IsLocalPlayerTalking_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasHeadset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      LocalPlayerNum                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedVoiceLibrary::IsHeadsetPresent(bool* bHasHeadset, unsigned char LocalPlayerNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent");
		
		UAdvancedVoiceLibrary_IsHeadsetPresent_Params params {};
		params.LocalPlayerNum = LocalPlayerNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasHeadset != nullptr)
			*bHasHeadset = params.bHasHeadset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumLocalTalkers                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdvancedVoiceLibrary::GetNumLocalTalkers(int32_t* NumLocalTalkers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers");
		
		UAdvancedVoiceLibrary_GetNumLocalTalkers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumLocalTalkers != nullptr)
			*NumLocalTalkers = params.NumLocalTalkers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdvancedVoiceLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedVoiceLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.AdvancedVoiceLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCancelFindSessionsCallbackProxy* UCancelFindSessionsCallbackProxy::CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions");
		
		UCancelFindSessionsCallbackProxy_CancelFindSessions_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCancelFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCancelFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.CancelFindSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PrivateConnections                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicatedServer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePresence                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLobbiesIfAvailable                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresence                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinViaPresenceFriendsOnly                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAntiCheatProtected                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsesStats                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldAdvertise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCreateSessionCallbackProxyAdvanced* UCreateSessionCallbackProxyAdvanced::CreateAdvancedSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, class APlayerController* PlayerController, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession");
		
		UCreateSessionCallbackProxyAdvanced_CreateAdvancedSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExtraSettings = ExtraSettings;
		params.PlayerController = PlayerController;
		params.PublicConnections = PublicConnections;
		params.PrivateConnections = PrivateConnections;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bIsDedicatedServer = bIsDedicatedServer;
		params.bUsePresence = bUsePresence;
		params.bUseLobbiesIfAvailable = bUseLobbiesIfAvailable;
		params.bAllowJoinViaPresence = bAllowJoinViaPresence;
		params.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
		params.bAntiCheatProtected = bAntiCheatProtected;
		params.bUsesStats = bUsesStats;
		params.bShouldAdvertise = bShouldAdvertise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCreateSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCreateSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.CreateSessionCallbackProxyAdvanced");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDestroySessionCallbackProxyAdvanced* UDestroySessionCallbackProxyAdvanced::DestroySession(class UWorld* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroySession");
		
		UDestroySessionCallbackProxyAdvanced_DestroySession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDestroySessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDestroySessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.DestroySessionCallbackProxyAdvanced");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.EndSessionCallbackProxy.EndSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEndSessionCallbackProxy* UEndSessionCallbackProxy::EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.EndSessionCallbackProxy.EndSession");
		
		UEndSessionCallbackProxy_EndSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.EndSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              FriendUniqueNetId                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UFindFriendSessionCallbackProxy* UFindFriendSessionCallbackProxy::FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& FriendUniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession");
		
		UFindFriendSessionCallbackProxy_FindFriendSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.FriendUniqueNetId = FriendUniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindFriendSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindFriendSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.FindFriendSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPServerPresenceSearchType                        ServerTypeToSearch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionsSearchSetting>              Filters                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bEmptyServersOnly                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNonEmptyServersOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSecureServersOnly                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSearchLobbies                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinSlotsAvailable                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UFindSessionsCallbackProxyAdvanced* UFindSessionsCallbackProxyAdvanced::FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32_t MinSlotsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced");
		
		UFindSessionsCallbackProxyAdvanced_FindSessionsAdvanced_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.MaxResults = MaxResults;
		params.bUseLAN = bUseLAN;
		params.ServerTypeToSearch = ServerTypeToSearch;
		params.Filters = Filters;
		params.bEmptyServersOnly = bEmptyServersOnly;
		params.bNonEmptyServersOnly = bNonEmptyServersOnly;
		params.bSecureServersOnly = bSecureServersOnly;
		params.bSearchLobbies = bSearchLobbies;
		params.MinSlotsAvailable = MinSlotsAvailable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBlueprintSessionResult>             SessionResults                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionsSearchSetting>              Filters                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBlueprintSessionResult>             FilteredResults                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UFindSessionsCallbackProxyAdvanced::FilterSessionResults(TArray<struct FBlueprintSessionResult> SessionResults, TArray<struct FSessionsSearchSetting> Filters, TArray<struct FBlueprintSessionResult>* FilteredResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults");
		
		UFindSessionsCallbackProxyAdvanced_FilterSessionResults_Params params {};
		params.SessionResults = SessionResults;
		params.Filters = Filters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FilteredResults != nullptr)
			*FilteredResults = params.FilteredResults;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFindSessionsCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFindSessionsCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.FindSessionsCallbackProxyAdvanced");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGetFriendsCallbackProxy* UGetFriendsCallbackProxy::GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList");
		
		UGetFriendsCallbackProxy_GetAndStoreFriendsList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetFriendsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetFriendsCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.GetFriendsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetId                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGetRecentPlayersCallbackProxy* UGetRecentPlayersCallbackProxy::GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const struct FBPUniqueNetId& UniqueNetId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList");
		
		UGetRecentPlayersCallbackProxy_GetAndStoreRecentPlayersList_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.UniqueNetId = UniqueNetId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetRecentPlayersCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetRecentPlayersCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.GetRecentPlayersCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPUserPrivileges                                  PrivilegeToCheck                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              PlayerUniqueNetID                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UGetUserPrivilegeCallbackProxy* UGetUserPrivilegeCallbackProxy::GetUserPrivilege(class UObject* WorldContextObject, EBPUserPrivileges PrivilegeToCheck, const struct FBPUniqueNetId& PlayerUniqueNetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege");
		
		UGetUserPrivilegeCallbackProxy_GetUserPrivilege_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PrivilegeToCheck = PrivilegeToCheck;
		params.PlayerUniqueNetID = PlayerUniqueNetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGetUserPrivilegeCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGetUserPrivilegeCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.GetUserPrivilegeCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWorld*                                      WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBlueprintSessionResult                     SearchResult                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UJoinSessionCallbackProxyAdvanced* UJoinSessionCallbackProxyAdvanced::JoinSession(class UWorld* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.JoinSessionCallbackProxyAdvanced.JoinSession");
		
		UJoinSessionCallbackProxyAdvanced_JoinSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.SearchResult = SearchResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoinSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoinSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.JoinSessionCallbackProxyAdvanced");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.LoginUserCallbackProxy.LoginUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserToken                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULoginUserCallbackProxy* ULoginUserCallbackProxy::LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& UserID, const class FString& UserToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LoginUserCallbackProxy.LoginUser");
		
		ULoginUserCallbackProxy_LoginUser_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.UserID = UserID;
		params.UserToken = UserToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginUserCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginUserCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.LoginUserCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULogoutUserCallbackProxy* ULogoutUserCallbackProxy::LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser");
		
		ULogoutUserCallbackProxy_LogoutUser_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULogoutUserCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULogoutUserCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.LogoutUserCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPUniqueNetId                              UniqueNetIDInvited                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USendFriendInviteCallbackProxy* USendFriendInviteCallbackProxy::SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBPUniqueNetId& UniqueNetIDInvited)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite");
		
		USendFriendInviteCallbackProxy_SendFriendInvite_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerController = PlayerController;
		params.UniqueNetIDInvited = UniqueNetIDInvited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USendFriendInviteCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USendFriendInviteCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.SendFriendInviteCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSessionPropertyKeyPair>             ExtraSettings                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PrivateConnections                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseLAN                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowInvites                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowJoinInProgress                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRefreshOnlineData                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsDedicatedServer                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUpdateSessionCallbackProxyAdvanced* UUpdateSessionCallbackProxyAdvanced::UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession");
		
		UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ExtraSettings = ExtraSettings;
		params.PublicConnections = PublicConnections;
		params.PrivateConnections = PrivateConnections;
		params.bUseLAN = bUseLAN;
		params.bAllowInvites = bAllowInvites;
		params.bAllowJoinInProgress = bAllowJoinInProgress;
		params.bRefreshOnlineData = bRefreshOnlineData;
		params.bIsDedicatedServer = bIsDedicatedServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateSessionCallbackProxyAdvanced.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateSessionCallbackProxyAdvanced::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced");
		return ptr;
	}

}


