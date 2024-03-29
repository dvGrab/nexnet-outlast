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
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBPS__DelegateSignature(const struct FZeuzTeam& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamgetBP__DelegateSignature(const struct FZeuzTeam& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamdeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamdeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamdeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamcreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamcreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountTeamcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountTeamcreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotasetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotasetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotasetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotasetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBPS__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotagetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotagetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountQuotagetBP__DelegateSignature(const struct FZeuzAccountQuotaInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountQuotagetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBPS__DelegateSignature(TArray<struct FZeuzProj> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectsgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectsgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectsgetBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectsgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBPS__DelegateSignature(const struct FZeuzProj& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectgetBP__DelegateSignature(const struct FZeuzProj& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectdeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectdeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectdeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectcreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectcreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountProjectcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountProjectcreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBPS__DelegateSignature(TArray<struct FZeuzEnv> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvsgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvsgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvsgetBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvsgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvserviceupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvserviceupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvserviceupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvserviceupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvservicedeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvservicedeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvservicedeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvservicedeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBPS__DelegateSignature(const struct FZeuzEnv& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvgetBP__DelegateSignature(const struct FZeuzEnv& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvdeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvdeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvdeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvcreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvcreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountEnvcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountEnvcreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBPS__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevquicksetupBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevquicksetupBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevquicksetupBP__DelegateSignature(const struct FZeuzAccountDevQuickSetupOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevquicksetupBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersgetBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopersetpwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopersetpwhashBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperrevokeBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperrevokeBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperrevokeBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperrevokeBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperpasswordresetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperinviteBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperinviteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDeveloperinviteBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDeveloperinviteBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopergetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopergetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopergetBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopergetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPS__DelegateSignature(const struct FZeuzDeveloper& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreatepwhashBP__DelegateSignature(const struct FZeuzDeveloper& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountDevelopercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountDevelopercreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountupdateBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountupdateBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountupdateBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBPS__DelegateSignature(const struct FZeuzAccount& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountgetBP__DelegateSignature(const struct FZeuzAccount& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountcreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountcreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::DelegateAccountAccountcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature");
		
		UZeuzApiAccount_DelegateAccountAccountcreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTeam                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountTeamupdateBP(const struct FZeuzTeam& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP");
		
		UZeuzApiAccount_AccountTeamupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountTeamgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP");
		
		UZeuzApiAccount_AccountTeamgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountTeamDeleteIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountTeamdeleteBP(const struct FZeuzAccountTeamDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP");
		
		UZeuzApiAccount_AccountTeamdeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountTeamCreateIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountTeamcreateBP(const struct FZeuzAccountTeamCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP");
		
		UZeuzApiAccount_AccountTeamcreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountQuotaInfo                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountQuotasetBP(const struct FZeuzAccountQuotaInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP");
		
		UZeuzApiAccount_AccountQuotasetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountQuotagetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP");
		
		UZeuzApiAccount_AccountQuotagetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProj                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountProjectupdateBP(const struct FZeuzProj& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP");
		
		UZeuzApiAccount_AccountProjectupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountProjectsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP");
		
		UZeuzApiAccount_AccountProjectsgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountProjectgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP");
		
		UZeuzApiAccount_AccountProjectgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountProjectDeleteIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountProjectdeleteBP(const struct FZeuzAccountProjectDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP");
		
		UZeuzApiAccount_AccountProjectdeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountProjectCreateIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountProjectcreateBP(const struct FZeuzAccountProjectCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP");
		
		UZeuzApiAccount_AccountProjectcreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEnv                                    In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvupdateBP(const struct FZeuzEnv& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP");
		
		UZeuzApiAccount_AccountEnvupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvsgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP");
		
		UZeuzApiAccount_AccountEnvsgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServiceCfg                             In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvserviceupdateBP(const struct FZeuzServiceCfg& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP");
		
		UZeuzApiAccount_AccountEnvserviceupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvservicedeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP");
		
		UZeuzApiAccount_AccountEnvservicedeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP");
		
		UZeuzApiAccount_AccountEnvgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountEnvDeleteIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvdeleteBP(const struct FZeuzAccountEnvDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP");
		
		UZeuzApiAccount_AccountEnvdeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountEnvCreateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountEnvcreateBP(const struct FZeuzAccountEnvCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP");
		
		UZeuzApiAccount_AccountEnvcreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDevQuickSetupIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevquicksetupBP(const struct FZeuzAccountDevQuickSetupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP");
		
		UZeuzApiAccount_AccountDevquicksetupBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzDeveloper                              In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperupdateBP(const struct FZeuzDeveloper& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP");
		
		UZeuzApiAccount_AccountDeveloperupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevelopersgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP");
		
		UZeuzApiAccount_AccountDevelopersgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperSetPwHashIn            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevelopersetpwhashBP(const struct FZeuzAccountDeveloperSetPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP");
		
		UZeuzApiAccount_AccountDevelopersetpwhashBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperrevokeBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP");
		
		UZeuzApiAccount_AccountDeveloperrevokeBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperPasswordResetIn        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperpasswordresetrequestBP(const struct FZeuzAccountDeveloperPasswordResetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP");
		
		UZeuzApiAccount_AccountDeveloperpasswordresetrequestBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperpasswordresetBP(const struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP");
		
		UZeuzApiAccount_AccountDeveloperpasswordresetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperispasswordresethashexpiredBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP");
		
		UZeuzApiAccount_AccountDeveloperispasswordresethashexpiredBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreateIn               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDeveloperinviteBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP");
		
		UZeuzApiAccount_AccountDeveloperinviteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevelopergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP");
		
		UZeuzApiAccount_AccountDevelopergetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreatePwHashIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevelopercreatepwhashBP(const struct FZeuzAccountDeveloperCreatePwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP");
		
		UZeuzApiAccount_AccountDevelopercreatepwhashBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountDeveloperCreateIn               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountDevelopercreateBP(const struct FZeuzAccountDeveloperCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP");
		
		UZeuzApiAccount_AccountDevelopercreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccount                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountAccountupdateBP(const struct FZeuzAccount& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP");
		
		UZeuzApiAccount_AccountAccountupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountAccountgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP");
		
		UZeuzApiAccount_AccountAccountgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAccountCreateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAccount::AccountAccountcreateBP(const struct FZeuzAccountCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP");
		
		UZeuzApiAccount_AccountAccountcreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBPS__DelegateSignature(const struct FZeuzAdminStatsOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminStatsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminStatsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminStatsBP__DelegateSignature(const struct FZeuzAdminStatsOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminStatsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBPS__DelegateSignature(TArray<struct FZeuzProj> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminProjectsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminProjectsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProj>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminProjectsBP__DelegateSignature(TArray<struct FZeuzProj> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminProjectsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchOut                           Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBPS__DelegateSignature(const struct FZeuzLogsearchOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminLogsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminLogsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchOut                           Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminLogsBP__DelegateSignature(const struct FZeuzLogsearchOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminLogsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBPS__DelegateSignature(const struct FZeuzAdminItemsOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminItemsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminItemsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminItemsBP__DelegateSignature(const struct FZeuzAdminItemsOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminItemsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminGetquotaBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminGetquotaBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminGetquotaBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminGetquotaBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBPS__DelegateSignature(TArray<struct FZeuzEnv> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminEnvironmentsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminEnvironmentsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzEnv>                            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminEnvironmentsBP__DelegateSignature(TArray<struct FZeuzEnv> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminEnvironmentsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBPS__DelegateSignature(TArray<struct FZeuzDeveloper> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminDevelopersBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminDevelopersBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzDeveloper>                      Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminDevelopersBP__DelegateSignature(TArray<struct FZeuzDeveloper> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminDevelopersBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPS__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesperaccBP__DelegateSignature(TArray<struct FZeuzAdminCountResoucesPerAccountOut> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesperaccBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminCountresourcesBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAccount>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBPS__DelegateSignature(TArray<struct FZeuzAccount> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminAccountsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminAccountsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAccount>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::DelegateAdminAccountsBP__DelegateSignature(TArray<struct FZeuzAccount> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature");
		
		UZeuzApiAdmin_DelegateAdminAccountsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminStatsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminStatsIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminStatsBP(const struct FZeuzAdminStatsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminStatsBP");
		
		UZeuzApiAdmin_AdminStatsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminProjectsBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP");
		
		UZeuzApiAdmin_AdminProjectsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminLogsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminLogsIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminLogsBP(const struct FZeuzAdminLogsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminLogsBP");
		
		UZeuzApiAdmin_AdminLogsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminItemsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminItemsIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminItemsBP(const struct FZeuzAdminItemsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminItemsBP");
		
		UZeuzApiAdmin_AdminItemsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminTestpoolIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminGetquotaBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP");
		
		UZeuzApiAdmin_AdminGetquotaBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminEnvIn                             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminEnvironmentsBP(const struct FZeuzAdminEnvIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP");
		
		UZeuzApiAdmin_AdminEnvironmentsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminDevelopersBP(const struct FZeuzAdminAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP");
		
		UZeuzApiAdmin_AdminDevelopersBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminTestpoolIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminCountresourcesperaccBP(const struct FZeuzAdminTestpoolIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP");
		
		UZeuzApiAdmin_AdminCountresourcesperaccBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminCountResoucesIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminCountresourcesBP(const struct FZeuzAdminCountResoucesIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP");
		
		UZeuzApiAdmin_AdminCountresourcesBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAdminAccountsIn                        In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAdmin::AdminAccountsBP(const struct FZeuzAdminAccountsIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP");
		
		UZeuzApiAdmin_AdminAccountsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAdmin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiAdmin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiAdmin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationUpdateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAllocationPayloadInfo>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBPS__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationRequestServicesBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationRequestServicesBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAllocationPayloadInfo>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationRequestServicesBP__DelegateSignature(TArray<struct FZeuzAllocationPayloadInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationRequestServicesBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetOut                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBPS__DelegateSignature(const struct FZeuzAllocationGetOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetOut                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationGetBP__DelegateSignature(const struct FZeuzAllocationGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBPS__DelegateSignature(const struct FZeuzAllocationInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationInfo                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::DelegateAllocationCreateBP__DelegateSignature(const struct FZeuzAllocationInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature");
		
		UZeuzApiAllocation_DelegateAllocationCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationUpdateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::AllocationUpdateBP(const struct FZeuzAllocationUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP");
		
		UZeuzApiAllocation_AllocationUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationRequestServiceIn             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::AllocationRequestServicesBP(const struct FZeuzAllocationRequestServiceIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP");
		
		UZeuzApiAllocation_AllocationRequestServicesBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationGetIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::AllocationGetBP(const struct FZeuzAllocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAllocation.AllocationGetBP");
		
		UZeuzApiAllocation_AllocationGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAllocationCreateIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAllocation::AllocationCreateBP(const struct FZeuzAllocationCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP");
		
		UZeuzApiAllocation_AllocationCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAllocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiAllocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiAllocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyUpdateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeySetpwhashBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeySetpwhashBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeySetpwhashBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeySetpwhashBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyRevokeBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyRevokeBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyRevokeBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyRevokeBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBPS__DelegateSignature(TArray<struct FZeuzAPIKey> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetallBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetallBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzAPIKey>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGetallBP__DelegateSignature(TArray<struct FZeuzAPIKey> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGetallBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGenerateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGenerateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyGenerateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyGenerateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyDeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyDeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyDeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyDeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBPS__DelegateSignature(const struct FZeuzAPIKey& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::DelegateApikeyCreateBP__DelegateSignature(const struct FZeuzAPIKey& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature");
		
		UZeuzApiApikey_DelegateApikeyCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyUpdateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP");
		
		UZeuzApiApikey_ApikeyUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyPwHashIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeySetpwhashBP(const struct FZeuzAPIKeyPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP");
		
		UZeuzApiApikey_ApikeySetpwhashBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyDeleteIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyRevokeBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP");
		
		UZeuzApiApikey_ApikeyRevokeBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyGetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyGetBP");
		
		UZeuzApiApikey_ApikeyGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyGetIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyGetallBP(const struct FZeuzAPIKeyGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP");
		
		UZeuzApiApikey_ApikeyGetallBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyGenerateIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyGenerateBP(const struct FZeuzAPIKeyGenerateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP");
		
		UZeuzApiApikey_ApikeyGenerateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKeyDeleteIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyDeleteBP(const struct FZeuzAPIKeyDeleteIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP");
		
		UZeuzApiApikey_ApikeyDeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAPIKey                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiApikey::ApikeyCreateBP(const struct FZeuzAPIKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP");
		
		UZeuzApiApikey_ApikeyCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiApikey.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiApikey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiApikey");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthSessiondelBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthSessiondelBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthSessiondelBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthSessiondelBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLogoutBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLogoutBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthLogoutBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLogoutBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginResult                        Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzAuthLoginResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLoginBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLoginBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginResult                        Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzAuthLoginResult& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthLoginBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Result                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthCheckBPS__DelegateSignature(const struct FZeuzTimestamp& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthCheckBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthCheckBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthCheckBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Result                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthCheckBP__DelegateSignature(const struct FZeuzTimestamp& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthCheckBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzSession>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBPS__DelegateSignature(TArray<struct FZeuzSession> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthActivesessionsgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthActivesessionsgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzSession>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::DelegateAuthActivesessionsgetBP__DelegateSignature(TArray<struct FZeuzSession> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature");
		
		UZeuzApiAuth_DelegateAuthActivesessionsgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::AuthSessiondelBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP");
		
		UZeuzApiAuth_AuthSessiondelBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthLogoutBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::AuthLogoutBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAuth.AuthLogoutBP");
		
		UZeuzApiAuth_AuthLogoutBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthLoginBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzAuthLoginIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::AuthLoginBP(const struct FZeuzAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAuth.AuthLoginBP");
		
		UZeuzApiAuth_AuthLoginBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthCheckBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::AuthCheckBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAuth.AuthCheckBP");
		
		UZeuzApiAuth_AuthCheckBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiAuth::AuthActivesessionsgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP");
		
		UZeuzApiAuth_AuthActivesessionsgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiAuth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiAuth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo4BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::Echo4BP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiEcho.Echo4BP");
		
		UZeuzApiEcho_Echo4BP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo3BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho3In                                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::Echo3BP(const struct FZeuzEcho3In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiEcho.Echo3BP");
		
		UZeuzApiEcho_Echo3BP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo2BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2In                                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::Echo2BP(const struct FZeuzEcho2In& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiEcho.Echo2BP");
		
		UZeuzApiEcho_Echo2BP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiEcho.Echo1BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoIn                                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::Echo1BP(const struct FZeuzEchoIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiEcho.Echo1BP");
		
		UZeuzApiEcho_Echo1BP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho4BPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho4BPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho4BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho4BPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho4BP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho4BP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho3BPS__DelegateSignature(const struct FZeuzEchoOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho3BPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho3BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho3BPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho3BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho3BP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2Out                               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho2BPS__DelegateSignature(const struct FZeuzEcho2Out& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho2BPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho2BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho2BPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEcho2Out                               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho2BP__DelegateSignature(const struct FZeuzEcho2Out& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho2BP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho1BPS__DelegateSignature(const struct FZeuzEchoOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho1BPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho1BPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho1BPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzEchoOut                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiEcho::DelegateEcho1BP__DelegateSignature(const struct FZeuzEchoOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature");
		
		UZeuzApiEcho_DelegateEcho1BP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiEcho.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiEcho::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiEcho");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPresignedFileUrlIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerPushFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP");
		
		UZeuzApiImagemanager_ImagemanagerPushFileUrlBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerManifest                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerPushBP(const struct FZeuzImageManagerManifest& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP");
		
		UZeuzApiImagemanager_ImagemanagerPushBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPresignedFileUrlIn         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerPullFileUrlBP(const struct FZeuzImageManagerPresignedFileUrlIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP");
		
		UZeuzApiImagemanager_ImagemanagerPullFileUrlBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPullInput                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerPullBP(const struct FZeuzImageManagerPullInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP");
		
		UZeuzApiImagemanager_ImagemanagerPullBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPublishInput               In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerPublishBP(const struct FZeuzImageManagerPublishInput& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP");
		
		UZeuzApiImagemanager_ImagemanagerPublishBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerListBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP");
		
		UZeuzApiImagemanager_ImagemanagerListBP_Params params {};
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerGetpublishstateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP");
		
		UZeuzApiImagemanager_ImagemanagerGetpublishstateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::ImagemanagerDiscardBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP");
		
		UZeuzApiImagemanager_ImagemanagerDiscardBP_Params params {};
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPushBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPushBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullFileUrlBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBPS__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImageManagerPushPullOutput             Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPullBP__DelegateSignature(const struct FZeuzImageManagerPushPullOutput& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPullBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPublishBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPublishBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerPublishBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerPublishBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzImageManagerListEntry>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBPS__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerListBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerListBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzImageManagerListEntry>          Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerListBP__DelegateSignature(TArray<struct FZeuzImageManagerListEntry> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerListBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPS__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzImagemanagerPublishState               Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerGetpublishstateBP__DelegateSignature(const struct FZeuzImagemanagerPublishState& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerDiscardBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerDiscardBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiImagemanager::DelegateImagemanagerDiscardBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature");
		
		UZeuzApiImagemanager_DelegateImagemanagerDiscardBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiImagemanager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiImagemanager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiImagemanager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStorePutBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStorePutIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::KVStorePutBP(const struct FZeuzKVStorePutIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiKVStore.KVStorePutBP");
		
		UZeuzApiKVStore_KVStorePutBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKey                             In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::KVStoreGetBP(const struct FZeuzKVStoreKey& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP");
		
		UZeuzApiKVStore_KVStoreGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreDelIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::KVStoreDelBP(const struct FZeuzKVStoreDelIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP");
		
		UZeuzApiKVStore_KVStoreDelBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStorePutBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStorePutBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStorePutBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStorePutBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKVEntry                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBPS__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzKVStoreKVEntry                         Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStoreGetBP__DelegateSignature(const struct FZeuzKVStoreKVEntry& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreDelBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreDelBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiKVStore::DelegateKVStoreDelBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature");
		
		UZeuzApiKVStore_DelegateKVStoreDelBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiKVStore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiKVStore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiKVStore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyUserBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUserIn                            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyUserBP(const struct FZeuzLobbyUserIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyUserBP");
		
		UZeuzApiLobby_LobbyUserBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStateIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyUpdateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP");
		
		UZeuzApiLobby_LobbyUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyStartBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStartDestroy                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyStartBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyStartBP");
		
		UZeuzApiLobby_LobbyStartBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyRefresh                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyRefreshBP(const struct FZeuzLobbyRefresh& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP");
		
		UZeuzApiLobby_LobbyRefreshBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyQueryBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyQueryBP(const struct FZeuzLobbyQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyQueryBP");
		
		UZeuzApiLobby_LobbyQueryBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyJoin                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyLeaveBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP");
		
		UZeuzApiLobby_LobbyLeaveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyKickBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyKick                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyKickBP(const struct FZeuzLobbyKick& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyKickBP");
		
		UZeuzApiLobby_LobbyKickBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyJoinBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyJoin                              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyJoinBP(const struct FZeuzLobbyJoin& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyJoinBP");
		
		UZeuzApiLobby_LobbyJoinBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStartDestroy                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyDestroyBP(const struct FZeuzLobbyStartDestroy& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP");
		
		UZeuzApiLobby_LobbyDestroyBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLobby.LobbyCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyStateIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::LobbyCreateBP(const struct FZeuzLobbyStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLobby.LobbyCreateBP");
		
		UZeuzApiLobby_LobbyCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUserBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUserBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUserBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUserBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUserBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUserBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyUpdateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyServerConnect                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyStartBPS__DelegateSignature(const struct FZeuzLobbyServerConnect& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyStartBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyStartBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyStartBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyServerConnect                     Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyStartBP__DelegateSignature(const struct FZeuzLobbyServerConnect& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyStartBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyRefreshBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyRefreshBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyRefreshBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyRefreshBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBPS__DelegateSignature(const struct FZeuzLobbyQueryOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyQueryBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyQueryBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyQueryOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyQueryBP__DelegateSignature(const struct FZeuzLobbyQueryOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyQueryBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyLeaveBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyLeaveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyLeaveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyLeaveBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLobby::DelegateLobbyKickBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyKickBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyKickBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyKickBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyKickBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyKickBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyJoinBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyJoinBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyJoinBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyJoinBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyDestroyBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyDestroyBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyDestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyDestroyBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBPS__DelegateSignature(const struct FZeuzLobbyUsersOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLobbyUsersOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLobby::DelegateLobbyCreateBP__DelegateSignature(const struct FZeuzLobbyUsersOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature");
		
		UZeuzApiLobby_DelegateLobbyCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLobby.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiLobby::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiLobby");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityRegionUpdateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP");
		
		UZeuzApiLocality_LocalityRegionUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityRegionRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP");
		
		UZeuzApiLocality_LocalityRegionRemoveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityRegionGetIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityRegionGetBP(const struct FZeuzLocalityRegionGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP");
		
		UZeuzApiLocality_LocalityRegionGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityRegionCreateBP(const struct FZeuzRegion& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP");
		
		UZeuzApiLocality_LocalityRegionCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityProviderUpdateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP");
		
		UZeuzApiLocality_LocalityProviderUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityProviderRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP");
		
		UZeuzApiLocality_LocalityProviderRemoveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityProviderGetIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityProviderGetBP(const struct FZeuzLocalityProviderGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP");
		
		UZeuzApiLocality_LocalityProviderGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityProviderCreateBP(const struct FZeuzProvider& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP");
		
		UZeuzApiLocality_LocalityProviderCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityLocationUpdateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP");
		
		UZeuzApiLocality_LocalityLocationUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityLocationRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP");
		
		UZeuzApiLocality_LocalityLocationRemoveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocalityLocationGetIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityLocationGetBP(const struct FZeuzLocalityLocationGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP");
		
		UZeuzApiLocality_LocalityLocationGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::LocalityLocationCreateBP(const struct FZeuzLocation& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP");
		
		UZeuzApiLocality_LocalityLocationCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBPS__DelegateSignature(const struct FZeuzRegion& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionUpdateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionRemoveBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionRemoveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionRemoveBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzRegion>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBPS__DelegateSignature(TArray<struct FZeuzRegion> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzRegion>                         Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionGetBP__DelegateSignature(TArray<struct FZeuzRegion> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBPS__DelegateSignature(const struct FZeuzRegion& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzRegion                                 Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityRegionCreateBP__DelegateSignature(const struct FZeuzRegion& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityRegionCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBPS__DelegateSignature(const struct FZeuzProvider& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderUpdateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderRemoveBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderRemoveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderRemoveBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProvider>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBPS__DelegateSignature(TArray<struct FZeuzProvider> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProvider>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderGetBP__DelegateSignature(TArray<struct FZeuzProvider> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBPS__DelegateSignature(const struct FZeuzProvider& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProvider                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityProviderCreateBP__DelegateSignature(const struct FZeuzProvider& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityProviderCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBPS__DelegateSignature(const struct FZeuzLocation& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationUpdateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationRemoveBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationRemoveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationRemoveBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzLocation>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBPS__DelegateSignature(TArray<struct FZeuzLocation> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzLocation>                       Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationGetBP__DelegateSignature(TArray<struct FZeuzLocation> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBPS__DelegateSignature(const struct FZeuzLocation& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLocation                               Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLocality::DelegateLocalityLocationCreateBP__DelegateSignature(const struct FZeuzLocation& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature");
		
		UZeuzApiLocality_DelegateLocalityLocationCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLocality.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiLocality::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiLocality");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::LogsearchStartexportBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP");
		
		UZeuzApiLogsearch_LogsearchStartexportBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::LogsearchDownloadexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP");
		
		UZeuzApiLogsearch_LogsearchDownloadexportBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::LogsearchCheckexportBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP");
		
		UZeuzApiLogsearch_LogsearchCheckexportBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::LogsearchAccountBP(const struct FZeuzLogsearchAccountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP");
		
		UZeuzApiLogsearch_LogsearchAccountBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchStartexportBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchStartexportBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchStartexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchStartexportBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchDownloadexportBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchDownloadexportBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchLogsStatus                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPS__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchCheckexportBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchCheckexportBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchLogsStatus                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchCheckexportBP__DelegateSignature(const struct FZeuzLogsearchLogsStatus& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchCheckexportBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBPS__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchAccountBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchAccountBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzLogsearchAccountOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiLogsearch::DelegateLogsearchAccountBP__DelegateSignature(const struct FZeuzLogsearchAccountOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature");
		
		UZeuzApiLogsearch_DelegateLogsearchAccountBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiLogsearch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiLogsearch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiLogsearch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceUpdateIn                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineUpdateresourceBP(const struct FZeuzMachineResourceUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP");
		
		UZeuzApiMachine_MachineUpdateresourceBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineSettagsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineSettagsBP(TArray<struct FZeuzMachineTagsSetIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineSettagsBP");
		
		UZeuzApiMachine_MachineSettagsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDeprovisionIn           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineResourcedeprovisionBP(const struct FZeuzMachineResourceDeprovisionIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP");
		
		UZeuzApiMachine_MachineResourcedeprovisionBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGettagsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineGettagsBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineGettagsBP");
		
		UZeuzApiMachine_MachineGettagsBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceGetIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineGetresourcesBP(const struct FZeuzMachineResourceGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP");
		
		UZeuzApiMachine_MachineGetresourcesBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineGetinfoBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP");
		
		UZeuzApiMachine_MachineGetinfoBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineGetBP(const struct FZeuzMachineGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineGetBP");
		
		UZeuzApiMachine_MachineGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDeallocateIn            In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineDeallocateBP(const struct FZeuzMachineResourceDeallocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP");
		
		UZeuzApiMachine_MachineDeallocateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourcesCountIn                In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineCountresourcesBP(const struct FZeuzMachineResourcesCountIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP");
		
		UZeuzApiMachine_MachineCountresourcesBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineAllocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceAllocateIn              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineAllocateBP(const struct FZeuzMachineResourceAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineAllocateBP");
		
		UZeuzApiMachine_MachineAllocateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceDataIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::MachineAddresourceBP(const struct FZeuzMachineResourceDataIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP");
		
		UZeuzApiMachine_MachineAddresourceBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineUpdateresourceBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineUpdateresourceBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineUpdateresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineUpdateresourceBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineSettagsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineSettagsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineSettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineSettagsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineResourcedeprovisionBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineResourcedeprovisionBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineResourcedeprovisionBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineResourcedeprovisionBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBPS__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGettagsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGettagsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineTagsSetIn>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGettagsBP__DelegateSignature(TArray<struct FZeuzMachineTagsSetIn> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGettagsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineResourceInfo>            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBPS__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetresourcesBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetresourcesBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineResourceInfo>            Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetresourcesBP__DelegateSignature(TArray<struct FZeuzMachineResourceInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetresourcesBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetinfoBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetinfoBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetinfoBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetinfoBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetBPS__DelegateSignature(const struct FZeuzMachineGetOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineGetBP__DelegateSignature(const struct FZeuzMachineGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBPS__DelegateSignature(TArray<class FString> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineDeallocateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineDeallocateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineDeallocateBP__DelegateSignature(TArray<class FString> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineDeallocateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBPS__DelegateSignature(int32_t Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineCountresourcesBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineCountresourcesBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineCountresourcesBP__DelegateSignature(int32_t Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineCountresourcesBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBPS__DelegateSignature(TArray<struct FZeuzMachineInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAllocateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAllocateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzMachineInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAllocateBP__DelegateSignature(TArray<struct FZeuzMachineInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAllocateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBPS__DelegateSignature(const struct FZeuzMachineResourceInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAddresourceBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAddresourceBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMachineResourceInfo                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMachine::DelegateMachineAddresourceBP__DelegateSignature(const struct FZeuzMachineResourceInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature");
		
		UZeuzApiMachine_DelegateMachineAddresourceBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingUpdateBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP");
		
		UZeuzApiMatchmaking_MatchmakingUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingStatsBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP");
		
		UZeuzApiMatchmaking_MatchmakingStatsBP_Params params {};
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingServerInfo                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingServerrefreshBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP");
		
		UZeuzApiMatchmaking_MatchmakingServerrefreshBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingServerInfo                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingServerdestroyBP(const struct FZeuzMatchMakingServerInfo& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP");
		
		UZeuzApiMatchmaking_MatchmakingServerdestroyBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingPartyInit                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingCreatepartyBP(const struct FZeuzMatchMakingPartyInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP");
		
		UZeuzApiMatchmaking_MatchmakingCreatepartyBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingInit                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingCreateBP(const struct FZeuzMatchMakingInit& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP");
		
		UZeuzApiMatchmaking_MatchmakingCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::MatchmakingCloseBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP");
		
		UZeuzApiMatchmaking_MatchmakingCloseBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingUpdateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStats                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPS__DelegateSignature(const struct FZeuzMatchMakingStats& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingStatsBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingStatsBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStats                       Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingStatsBP__DelegateSignature(const struct FZeuzMatchMakingStats& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingStatsBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerrefreshBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingServerdestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreatepartyBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPS__DelegateSignature(const struct FZeuzMatchMakingStatus& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMatchMakingStatus                      Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCreateBP__DelegateSignature(const struct FZeuzMatchMakingStatus& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCloseBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCloseBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMatchmaking::DelegateMatchmakingCloseBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature");
		
		UZeuzApiMatchmaking_DelegateMatchmakingCloseBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMatchmaking.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiMatchmaking::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiMatchmaking");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsPayloadnetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP");
		
		UZeuzApiMetrics_MetricsPayloadnetworksentBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsPayloadnetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP");
		
		UZeuzApiMetrics_MetricsPayloadnetworkreceivedBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsPayloadmemoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP");
		
		UZeuzApiMetrics_MetricsPayloadmemoryusageBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsPayloadcpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP");
		
		UZeuzApiMetrics_MetricsPayloadcpuusageBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsPayloadcountBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP");
		
		UZeuzApiMetrics_MetricsPayloadcountBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsMachinenetworksentBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP");
		
		UZeuzApiMetrics_MetricsMachinenetworksentBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsMachinenetworkreceivedBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP");
		
		UZeuzApiMetrics_MetricsMachinenetworkreceivedBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsMachinememoryusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP");
		
		UZeuzApiMetrics_MetricsMachinememoryusageBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzMetricsQueryIn                         In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::MetricsMachinecpuusageBP(const struct FZeuzMetricsQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP");
		
		UZeuzApiMetrics_MetricsMachinecpuusageBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadmemoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcountBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcountBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsPayloadcountBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsPayloadcountBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworksentBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworksentBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinenetworkreceivedBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinememoryusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinememoryusageBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPS__DelegateSignature(const struct FZeuzVariant& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiMetrics::DelegateMetricsMachinecpuusageBP__DelegateSignature(const struct FZeuzVariant& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature");
		
		UZeuzApiMetrics_DelegateMetricsMachinecpuusageBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiMetrics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiMetrics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiMetrics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadUpdateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadUpdateBP(const struct FZeuzPayloadUpdateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP");
		
		UZeuzApiPayload_PayloadUpdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadUnreserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP");
		
		UZeuzApiPayload_PayloadUnreserveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadStateGetIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadStateupdateBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP");
		
		UZeuzApiPayload_PayloadStateupdateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadStateGetIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadStateinfoBP(const struct FZeuzPayloadStateGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP");
		
		UZeuzApiPayload_PayloadStateinfoBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadResumeBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadResumeIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadResumeBP(const struct FZeuzPayloadResumeIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadResumeBP");
		
		UZeuzApiPayload_PayloadResumeBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadRestartBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadRestartBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadRestartBP");
		
		UZeuzApiPayload_PayloadRestartBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadReserveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadReserveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadReserveBP");
		
		UZeuzApiPayload_PayloadReserveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadRemoveBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP");
		
		UZeuzApiPayload_PayloadRemoveBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadGetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetIn                           In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadGetBP(const struct FZeuzPayloadGetIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadGetBP");
		
		UZeuzApiPayload_PayloadGetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadCreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadCreateIn                        In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadCreateBP(const struct FZeuzPayloadCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadCreateBP");
		
		UZeuzApiPayload_PayloadCreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadAllocateIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::PayloadAllocateBP(const struct FZeuzPayloadAllocateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP");
		
		UZeuzApiPayload_PayloadAllocateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUpdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUpdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUpdateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUpdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUnreserveBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUnreserveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadUnreserveBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadUnreserveBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateupdateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateupdateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateupdateBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateupdateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBPS__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateinfoBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateinfoBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadStateInfo>               Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadStateinfoBP__DelegateSignature(TArray<struct FZeuzPayloadStateInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadStateinfoBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadResumeBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadResumeBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadResumeBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadResumeBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRestartBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRestartBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadRestartBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRestartBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBPS__DelegateSignature(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadReserveBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadReserveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadReserveBP__DelegateSignature(bool Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadReserveBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRemoveBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRemoveBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadRemoveBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadRemoveBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadGetBPS__DelegateSignature(const struct FZeuzPayloadGetOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadGetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadGetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadGetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadGetOut                          Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadGetBP__DelegateSignature(const struct FZeuzPayloadGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadGetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBPS__DelegateSignature(const struct FZeuzPayloadInfo& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadCreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadCreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzPayloadInfo                            Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadCreateBP__DelegateSignature(const struct FZeuzPayloadInfo& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadCreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBPS__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadAllocateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadAllocateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzPayloadInfo>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPayload::DelegatePayloadAllocateBP__DelegateSignature(TArray<struct FZeuzPayloadInfo> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature");
		
		UZeuzApiPayload_DelegatePayloadAllocateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPayload.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiPayload::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiPayload");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzProfileUserLookupIn>            In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUserslookupBP(TArray<struct FZeuzProfileUserLookupIn> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP");
		
		UZeuzApiProfile_ProfileUserslookupBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListIn                     In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUserslistBP(const struct FZeuzProfileUsersListIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP");
		
		UZeuzApiProfile_ProfileUserslistBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsersgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP");
		
		UZeuzApiProfile_ProfileUsersgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserPwHashIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsersetpwhashBP(const struct FZeuzProfileUserPwHashIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP");
		
		UZeuzApiProfile_ProfileUsersetpwhashBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsersetBP(const struct FZeuzUser& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP");
		
		UZeuzApiProfile_ProfileUsersetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserLookupIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUserlookupBP(const struct FZeuzProfileUserLookupIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP");
		
		UZeuzApiProfile_ProfileUserlookupBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsergetpwhashBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP");
		
		UZeuzApiProfile_ProfileUsergetpwhashBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsergetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP");
		
		UZeuzApiProfile_ProfileUsergetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUserdeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP");
		
		UZeuzApiProfile_ProfileUserdeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUserCreateIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileUsercreateBP(const struct FZeuzProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP");
		
		UZeuzApiProfile_ProfileUsercreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              In                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileProfilesgetBP(TArray<class FString> In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP");
		
		UZeuzApiProfile_ProfileProfilesgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileProfilesetBP(const struct FZeuzUserProfile& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP");
		
		UZeuzApiProfile_ProfileProfilesetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileProfilegetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP");
		
		UZeuzApiProfile_ProfileProfilegetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileProfiledeleteBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP");
		
		UZeuzApiProfile_ProfileProfiledeleteBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemTransferIn                  In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemtransferBP(const struct FZeuzProfileItemTransferIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP");
		
		UZeuzApiProfile_ProfileItemtransferBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemsetBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP");
		
		UZeuzApiProfile_ProfileItemsetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemRemByNameIn                 In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemrembynameBP(const struct FZeuzProfileItemRemByNameIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP");
		
		UZeuzApiProfile_ProfileItemrembynameBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemremBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemRemIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemremBP(const struct FZeuzProfileItemRemIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemremBP");
		
		UZeuzApiProfile_ProfileItemremBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemlistBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP");
		
		UZeuzApiProfile_ProfileItemlistBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemUserName                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemgetbynameBP(const struct FZeuzProfileItemUserName& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP");
		
		UZeuzApiProfile_ProfileItemgetbynameBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemgetBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP");
		
		UZeuzApiProfile_ProfileItemgetBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                In                                                         (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemcreateBP(const struct FZeuzInvItem& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP");
		
		UZeuzApiProfile_ProfileItemcreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemconfiggetBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP");
		
		UZeuzApiProfile_ProfileItemconfiggetBP_Params params {};
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemAddIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItembuyBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP");
		
		UZeuzApiProfile_ProfileItembuyBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemBarterIn                    In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItembarterBP(const struct FZeuzProfileItemBarterIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP");
		
		UZeuzApiProfile_ProfileItembarterBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemAddIn                       In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::ProfileItemaddBP(const struct FZeuzProfileItemAddIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP");
		
		UZeuzApiProfile_ProfileItemaddBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBPS__DelegateSignature(TArray<class FString> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslookupBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslookupBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslookupBP__DelegateSignature(TArray<class FString> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslookupBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBPS__DelegateSignature(const struct FZeuzProfileUsersListOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslistBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslistBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileUsersListOut                    Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserslistBP__DelegateSignature(const struct FZeuzProfileUsersListOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserslistBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUser>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBPS__DelegateSignature(TArray<struct FZeuzUser> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUser>                           Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersgetBP__DelegateSignature(TArray<struct FZeuzUser> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetpwhashBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetpwhashBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersetpwhashBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetpwhashBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsersetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsersetBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserlookupBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserlookupBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserlookupBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserlookupBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetpwhashBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetpwhashBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetpwhashBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetpwhashBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBPS__DelegateSignature(const struct FZeuzUser& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUser                                   Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsergetBP__DelegateSignature(const struct FZeuzUser& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsergetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserdeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserdeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUserdeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUserdeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsercreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsercreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileUsercreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUserProfile>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBPS__DelegateSignature(TArray<struct FZeuzUserProfile> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzUserProfile>                    Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilesgetBP__DelegateSignature(TArray<struct FZeuzUserProfile> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesetBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilesetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilesetBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBPS__DelegateSignature(const struct FZeuzUserProfile& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilegetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilegetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzUserProfile                            Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfilegetBP__DelegateSignature(const struct FZeuzUserProfile& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfilegetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfiledeleteBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfiledeleteBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileProfiledeleteBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileProfiledeleteBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemtransferBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemtransferBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemtransferBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemtransferBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemsetBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemsetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemsetBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemsetBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemrembynameBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemrembynameBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemrembynameBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemrembynameBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileItemremBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemremBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemremBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemremBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemremBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemremBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzInvItem>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBPS__DelegateSignature(TArray<struct FZeuzInvItem> Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemlistBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemlistBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FZeuzInvItem>                        Result                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemlistBP__DelegateSignature(TArray<struct FZeuzInvItem> Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemlistBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBPS__DelegateSignature(const struct FZeuzInvItem& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetbynameBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetbynameBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetbynameBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetbynameBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBPS__DelegateSignature(const struct FZeuzInvItem& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzInvItem                                Result                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemgetBP__DelegateSignature(const struct FZeuzInvItem& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemgetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemcreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemcreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemcreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemcreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemConfigGetOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBPS__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemconfiggetBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemconfiggetBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzProfileItemConfigGetOut                Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemconfiggetBP__DelegateSignature(const struct FZeuzProfileItemConfigGetOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemconfiggetBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembuyBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembuyBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItembuyBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembuyBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembarterBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembarterBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItembarterBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItembarterBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemaddBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemaddBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiProfile::DelegateProfileItemaddBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature");
		
		UZeuzApiProfile_DelegateProfileItemaddBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserStateIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::ServerbrowserRefreshBP(const struct FZeuzServerBrowserStateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP");
		
		UZeuzApiServerbrowser_ServerbrowserRefreshBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryIn                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::ServerbrowserQueryBP(const struct FZeuzServerBrowserQueryIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP");
		
		UZeuzApiServerbrowser_ServerbrowserQueryBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::ServerbrowserDestroyBP(const class FString& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP");
		
		UZeuzApiServerbrowser_ServerbrowserDestroyBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserRefreshBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserRefreshBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserRefreshBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserRefreshBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryOut                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPS__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserQueryBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserQueryBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzServerBrowserQueryOut                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserQueryBP__DelegateSignature(const struct FZeuzServerBrowserQueryOut& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserQueryBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPS__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserDestroyBPS__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserDestroyBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiServerbrowser::DelegateServerbrowserDestroyBP__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature");
		
		UZeuzApiServerbrowser_DelegateServerbrowserDestroyBP__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiServerbrowser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiServerbrowser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiServerbrowser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.StringHash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Val                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiSimpleAuth::StringHash(const class FString& Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiSimpleAuth.StringHash");
		
		UZeuzApiSimpleAuth_StringHash_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzSimpleProfileUserCreateIn              In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::SimpleProfileUsercreateBP(const struct FZeuzSimpleProfileUserCreateIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP");
		
		UZeuzApiSimpleAuth_SimpleProfileUsercreateBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateSimpleProfileUsercreateBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBPS__DelegateSignature(const struct FZeuzContext& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthLoginBPS__DelegateSignature_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthLoginBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Context                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthLoginBP__DelegateSignature(const struct FZeuzContext& Context, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthLoginBP__DelegateSignature_Params params {};
		params.Context = Context;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Expires                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPS__DelegateSignature(const struct FZeuzTimestamp& Expires)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPS__DelegateSignature_Params params {};
		params.Expires = Expires;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              Expires                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::DelegateAuthCheckSessionBP__DelegateSignature(const struct FZeuzTimestamp& Expires, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature");
		
		UZeuzApiSimpleAuth_DelegateAuthCheckSessionBP__DelegateSignature_Params params {};
		params.Expires = Expires;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Login                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiSimpleAuth::CalcPWHash(const class FString& Login, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash");
		
		UZeuzApiSimpleAuth_CalcPWHash_Params params {};
		params.Login = Login;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzSimpleAuthLoginIn                      In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveDefaultContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::AuthLoginBP(const struct FZeuzSimpleAuthLoginIn& In, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx, bool SaveDefaultContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP");
		
		UZeuzApiSimpleAuth_AuthLoginBP_Params params {};
		params.In = In;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		params.SaveDefaultContext = SaveDefaultContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiSimpleAuth::AuthCheckSessionBP(const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP");
		
		UZeuzApiSimpleAuth_AuthCheckSessionBP_Params params {};
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiSimpleAuth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiSimpleAuth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiSimpleAuth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiContext.SetDefaultContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiContext::SetDefaultContext(const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiContext.SetDefaultContext");
		
		UZeuzApiContext_SetDefaultContext_Params params {};
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiContext.GetDefaultContext
	 * 		Flags  -> ()
	 */
	struct FZeuzContext UZeuzApiContext::GetDefaultContext()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiContext.GetDefaultContext");
		
		UZeuzApiContext_GetDefaultContext_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzID::IsValid(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzID.IsValid");
		
		UZeuzID_IsValid_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.IsType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EZeuzIDType                                        typ                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzID::IsType(const class FString& ID, EZeuzIDType typ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzID.IsType");
		
		UZeuzID_IsType_Params params {};
		params.ID = ID;
		params.typ = typ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzID.GetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EZeuzIDType UZeuzID::GetType(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzID.GetType");
		
		UZeuzID_GetType_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzID.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzID::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzID");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPing.DoPingBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPing::DoPingBP(const class FString& Target, float Timeout, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPing.DoPingBP");
		
		UZeuzApiPing_DoPingBP_Params params {};
		params.Target = Target;
		params.Timeout = Timeout;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Resolved                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPing::DelegateDoPingBPS__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature");
		
		UZeuzApiPing_DelegateDoPingBPS__DelegateSignature_Params params {};
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPing::DelegateDoPingBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature");
		
		UZeuzApiPing_DelegateDoPingBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Resolved                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPing::DelegateDoPingBP__DelegateSignature(const class FString& Target, float Duration, const class FString& Resolved, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature");
		
		UZeuzApiPing_DelegateDoPingBP__DelegateSignature_Params params {};
		params.Target = Target;
		params.Duration = Duration;
		params.Resolved = Resolved;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiPing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiPing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               v6                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnFailure                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FZeuzContext                                Ctx                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPubIP::GetPublicIPBP(bool v6, const class FScriptDelegate& Callback, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnFailure, const struct FZeuzContext& Ctx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP");
		
		UZeuzApiPubIP_GetPublicIPBP_Params params {};
		params.v6 = v6;
		params.Callback = Callback;
		params.OnSuccess = OnSuccess;
		params.OnFailure = OnFailure;
		params.Ctx = Ctx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBPS__DelegateSignature(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature");
		
		UZeuzApiPubIP_DelegateGetPublicIPBPS__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBPF__DelegateSignature(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature");
		
		UZeuzApiPubIP_DelegateGetPublicIPBPF__DelegateSignature_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiPubIP::DelegateGetPublicIPBP__DelegateSignature(const class FString& Result, const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature");
		
		UZeuzApiPubIP_DelegateGetPublicIPBP__DelegateSignature_Params params {};
		params.Result = Result;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiPubIP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiPubIP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiPubIP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzTagsUtil.TagsToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTags                                   In                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzTagsUtil::TagsToString(const struct FZeuzTags& In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzTagsUtil.TagsToString");
		
		UZeuzTagsUtil_TagsToString_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzTagsUtil.StringToTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      In                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzTags                                   Out                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UZeuzTagsUtil::StringToTags(const class FString& In, struct FZeuzTags* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzTagsUtil.StringToTags");
		
		UZeuzTagsUtil_StringToTags_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzTagsUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzTagsUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzTagsUtil");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.ToDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              T                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FDateTime UZeuzApiTime::ToDateTime(const struct FZeuzTimestamp& T)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.ToDateTime");
		
		UZeuzApiTime_ToDateTime_Params params {};
		params.T = T;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.Now
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               adjusted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FZeuzTimestamp UZeuzApiTime::Now(bool adjusted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.Now");
		
		UZeuzApiTime_Now_Params params {};
		params.adjusted = adjusted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.IsZero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              T                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiTime::IsZero(const struct FZeuzTimestamp& T)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.IsZero");
		
		UZeuzApiTime_IsZero_Params params {};
		params.T = T;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.GetOffset
	 * 		Flags  -> ()
	 */
	struct FZeuzTimestamp UZeuzApiTime::GetOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.GetOffset");
		
		UZeuzApiTime_GetOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.FromDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      T                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               adjusted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FZeuzTimestamp UZeuzApiTime::FromDateTime(const struct FCoreUObject_FDateTime& T, bool adjusted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.FromDateTime");
		
		UZeuzApiTime_FromDateTime_Params params {};
		params.T = T;
		params.adjusted = adjusted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiTime.AdjustOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzTimestamp                              ofs                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiTime::AdjustOffset(const struct FZeuzTimestamp& ofs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiTime.AdjustOffset");
		
		UZeuzApiTime_AdjustOffset_Params params {};
		params.ofs = ofs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.TimerWithString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiUtil::TimerWithString(const class FScriptDelegate& Event, float Time, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.TimerWithString");
		
		UZeuzApiUtil_TimerWithString_Params params {};
		params.Event = Event;
		params.Time = Time;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZeuzApiUtil::TimerDynamicDelegateS__DelegateSignature(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature");
		
		UZeuzApiUtil_TimerDynamicDelegateS__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToVariant(class UProperty* AnyStruct, struct FZeuzVariant* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructToVariant");
		
		UZeuzApiUtil_StructToVariant_Params params {};
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToByteArrayJSON(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON");
		
		UZeuzApiUtil_StructToByteArrayJSON_Params params {};
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructToByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin");
		
		UZeuzApiUtil_StructToByteArrayBin_Params params {};
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromVariant(class UProperty** AnyStruct, const struct FZeuzVariant& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructFromVariant");
		
		UZeuzApiUtil_StructFromVariant_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnyStruct != nullptr)
			*AnyStruct = params.AnyStruct;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromByteArrayJSON(class UProperty** AnyStruct, const struct FZeuzByteArray& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON");
		
		UZeuzApiUtil_StructFromByteArrayJSON_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnyStruct != nullptr)
			*AnyStruct = params.AnyStruct;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProperty*                                   AnyStruct                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StructFromByteArrayBin(class UProperty* AnyStruct, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin");
		
		UZeuzApiUtil_StructFromByteArrayBin_Params params {};
		params.AnyStruct = AnyStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StringNotEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StringNotEmpty(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StringNotEmpty");
		
		UZeuzApiUtil_StringNotEmpty_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.StringIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::StringIsEmpty(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.StringIsEmpty");
		
		UZeuzApiUtil_StringIsEmpty_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzByteArray                              Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::SaveGameToByteArray(const class FString& Filename, struct FZeuzByteArray* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray");
		
		UZeuzApiUtil_SaveGameToByteArray_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzByteArray                              Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::SaveGameFromByteArray(const struct FZeuzByteArray& Value, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray");
		
		UZeuzApiUtil_SaveGameFromByteArray_Params params {};
		params.Value = Value;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.JsonToVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FZeuzVariant                                Variant                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::JsonToVariant(const class FString& Json, struct FZeuzVariant* Variant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.JsonToVariant");
		
		UZeuzApiUtil_JsonToVariant_Params params {};
		params.Json = Json;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Variant != nullptr)
			*Variant = params.Variant;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.JsonFromVariant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FZeuzVariant                                Variant                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Json                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UZeuzApiUtil::JsonFromVariant(const struct FZeuzVariant& Variant, class FString* Json)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.JsonFromVariant");
		
		UZeuzApiUtil_JsonFromVariant_Params params {};
		params.Variant = Variant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Json != nullptr)
			*Json = params.Json;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Zeuzsdk.ZeuzApiUtil.GetSaveGamePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UZeuzApiUtil::GetSaveGamePath(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Zeuzsdk.ZeuzApiUtil.GetSaveGamePath");
		
		UZeuzApiUtil_GetSaveGamePath_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZeuzApiUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZeuzApiUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Zeuzsdk.ZeuzApiUtil");
		return ptr;
	}

}


