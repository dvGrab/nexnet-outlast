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
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamgetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzTeam                                           Result;                                                  // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamgetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzTeam                                           Result;                                                  // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamdeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamdeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamdeleteBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamdeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamcreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamcreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountTeamcreateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountTeamcreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotasetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountQuotaInfo                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotasetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotasetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotasetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountQuotaInfo                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotagetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountQuotaInfo                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotagetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountQuotagetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountQuotagetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountQuotaInfo                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectsgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProj>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectsgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectsgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectsgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProj>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectgetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzProj                                           Result;                                                  // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectgetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzProj                                           Result;                                                  // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00C8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectdeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectdeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectdeleteBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectdeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectcreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectcreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountProjectcreateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountProjectcreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvsgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzEnv>                                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvsgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvsgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvsgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzEnv>                                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvserviceupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvserviceupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvserviceupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvserviceupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvservicedeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvservicedeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvservicedeleteBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvservicedeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvgetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzEnv                                            Result;                                                  // 0x0000(0x00E8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvgetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzEnv                                            Result;                                                  // 0x0000(0x00E8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvdeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvdeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvdeleteBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvdeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvcreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvcreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountEnvcreateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountEnvcreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevquicksetupBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountDevQuickSetupOut                        Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevquicksetupBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevquicksetupBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevquicksetupBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAccountDevQuickSetupOut                        Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0080(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzDeveloper>                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzDeveloper>                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersetpwhashBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopersetpwhashBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopersetpwhashBP__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0120(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperrevokeBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperrevokeBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperrevokeBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperrevokeBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetrequestBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperpasswordresetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperpasswordresetBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPS__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperispasswordresethashexpiredBP__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UU0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperinviteBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperinviteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDeveloperinviteBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDeveloperinviteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopergetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopergetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopergetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopergetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0120(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreatepwhashBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreatepwhashBP__DelegateSignature_Params
	{
	public:
		struct FZeuzDeveloper                                      Result;                                                  // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0120(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountDevelopercreateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountDevelopercreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountupdateBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountupdateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountupdateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountgetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAccount                                        Result;                                                  // 0x0000(0x0168)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountgetBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountgetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAccount                                        Result;                                                  // 0x0000(0x0168)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0168(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPS__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountcreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBPF__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountcreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAccount.DelegateAccountAccountcreateBP__DelegateSignature
	 */
	struct UZeuzApiAccount_DelegateAccountAccountcreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountTeamupdateBP
	 */
	struct UZeuzApiAccount_AccountTeamupdateBP_Params
	{
	public:
		struct FZeuzTeam                                           In;                                                      // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountTeamgetBP
	 */
	struct UZeuzApiAccount_AccountTeamgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountTeamdeleteBP
	 */
	struct UZeuzApiAccount_AccountTeamdeleteBP_Params
	{
	public:
		struct FZeuzAccountTeamDeleteIn                            In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountTeamcreateBP
	 */
	struct UZeuzApiAccount_AccountTeamcreateBP_Params
	{
	public:
		struct FZeuzAccountTeamCreateIn                            In;                                                      // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0098(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountQuotasetBP
	 */
	struct UZeuzApiAccount_AccountQuotasetBP_Params
	{
	public:
		struct FZeuzAccountQuotaInfo                               In;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0048(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountQuotagetBP
	 */
	struct UZeuzApiAccount_AccountQuotagetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountProjectupdateBP
	 */
	struct UZeuzApiAccount_AccountProjectupdateBP_Params
	{
	public:
		struct FZeuzProj                                           In;                                                      // 0x0000(0x00C8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountProjectsgetBP
	 */
	struct UZeuzApiAccount_AccountProjectsgetBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountProjectgetBP
	 */
	struct UZeuzApiAccount_AccountProjectgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountProjectdeleteBP
	 */
	struct UZeuzApiAccount_AccountProjectdeleteBP_Params
	{
	public:
		struct FZeuzAccountProjectDeleteIn                         In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountProjectcreateBP
	 */
	struct UZeuzApiAccount_AccountProjectcreateBP_Params
	{
	public:
		struct FZeuzAccountProjectCreateIn                         In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvupdateBP
	 */
	struct UZeuzApiAccount_AccountEnvupdateBP_Params
	{
	public:
		struct FZeuzEnv                                            In;                                                      // 0x0000(0x00E8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00F8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0108(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0118(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvsgetBP
	 */
	struct UZeuzApiAccount_AccountEnvsgetBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvserviceupdateBP
	 */
	struct UZeuzApiAccount_AccountEnvserviceupdateBP_Params
	{
	public:
		struct FZeuzServiceCfg                                     In;                                                      // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0068(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvservicedeleteBP
	 */
	struct UZeuzApiAccount_AccountEnvservicedeleteBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvgetBP
	 */
	struct UZeuzApiAccount_AccountEnvgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvdeleteBP
	 */
	struct UZeuzApiAccount_AccountEnvdeleteBP_Params
	{
	public:
		struct FZeuzAccountEnvDeleteIn                             In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountEnvcreateBP
	 */
	struct UZeuzApiAccount_AccountEnvcreateBP_Params
	{
	public:
		struct FZeuzAccountEnvCreateIn                             In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevquicksetupBP
	 */
	struct UZeuzApiAccount_AccountDevquicksetupBP_Params
	{
	public:
		struct FZeuzAccountDevQuickSetupIn                         In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperupdateBP
	 */
	struct UZeuzApiAccount_AccountDeveloperupdateBP_Params
	{
	public:
		struct FZeuzDeveloper                                      In;                                                      // 0x0000(0x0120)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0120(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0130(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0140(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0150(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersgetBP
	 */
	struct UZeuzApiAccount_AccountDevelopersgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevelopersetpwhashBP
	 */
	struct UZeuzApiAccount_AccountDevelopersetpwhashBP_Params
	{
	public:
		struct FZeuzAccountDeveloperSetPwHashIn                    In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperrevokeBP
	 */
	struct UZeuzApiAccount_AccountDeveloperrevokeBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetrequestBP
	 */
	struct UZeuzApiAccount_AccountDeveloperpasswordresetrequestBP_Params
	{
	public:
		struct FZeuzAccountDeveloperPasswordResetIn                In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperpasswordresetBP
	 */
	struct UZeuzApiAccount_AccountDeveloperpasswordresetBP_Params
	{
	public:
		struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn  In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperispasswordresethashexpiredBP
	 */
	struct UZeuzApiAccount_AccountDeveloperispasswordresethashexpiredBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDeveloperinviteBP
	 */
	struct UZeuzApiAccount_AccountDeveloperinviteBP_Params
	{
	public:
		struct FZeuzAccountDeveloperCreateIn                       In;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevelopergetBP
	 */
	struct UZeuzApiAccount_AccountDevelopergetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreatepwhashBP
	 */
	struct UZeuzApiAccount_AccountDevelopercreatepwhashBP_Params
	{
	public:
		struct FZeuzAccountDeveloperCreatePwHashIn                 In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountDevelopercreateBP
	 */
	struct UZeuzApiAccount_AccountDevelopercreateBP_Params
	{
	public:
		struct FZeuzAccountDeveloperCreateIn                       In;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountAccountupdateBP
	 */
	struct UZeuzApiAccount_AccountAccountupdateBP_Params
	{
	public:
		struct FZeuzAccount                                        In;                                                      // 0x0000(0x0168)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0168(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0178(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0188(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0198(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountAccountgetBP
	 */
	struct UZeuzApiAccount_AccountAccountgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAccount.AccountAccountcreateBP
	 */
	struct UZeuzApiAccount_AccountAccountcreateBP_Params
	{
	public:
		struct FZeuzAccountCreateIn                                In;                                                      // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminStatsBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAdminStatsOut                                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminStatsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminStatsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminStatsBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAdminStatsOut                                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminProjectsBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProj>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminProjectsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminProjectsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminProjectsBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProj>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminLogsBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchOut                                   Result;                                                  // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminLogsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminLogsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminLogsBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchOut                                   Result;                                                  // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminItemsBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAdminItemsOut                                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminItemsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminItemsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminItemsBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAdminItemsOut                                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminGetquotaBPS__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminGetquotaBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminGetquotaBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminGetquotaBP__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L4M0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminEnvironmentsBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzEnv>                                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminEnvironmentsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminEnvironmentsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminEnvironmentsBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzEnv>                                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminDevelopersBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzDeveloper>                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminDevelopersBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminDevelopersBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminDevelopersBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzDeveloper>                              Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAdminCountResoucesPerAccountOut>        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesperaccBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesperaccBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesperaccBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAdminCountResoucesPerAccountOut>        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesBPS__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminCountresourcesBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminCountresourcesBP__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BLDI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPS__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminAccountsBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAccount>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBPF__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminAccountsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAdmin.DelegateAdminAccountsBP__DelegateSignature
	 */
	struct UZeuzApiAdmin_DelegateAdminAccountsBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAccount>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminStatsBP
	 */
	struct UZeuzApiAdmin_AdminStatsBP_Params
	{
	public:
		struct FZeuzAdminStatsIn                                   In;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0080(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminProjectsBP
	 */
	struct UZeuzApiAdmin_AdminProjectsBP_Params
	{
	public:
		struct FZeuzAdminAccountIn                                 In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminLogsBP
	 */
	struct UZeuzApiAdmin_AdminLogsBP_Params
	{
	public:
		struct FZeuzAdminLogsIn                                    In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminItemsBP
	 */
	struct UZeuzApiAdmin_AdminItemsBP_Params
	{
	public:
		struct FZeuzAdminItemsIn                                   In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminGetquotaBP
	 */
	struct UZeuzApiAdmin_AdminGetquotaBP_Params
	{
	public:
		struct FZeuzAdminTestpoolIn                                In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminEnvironmentsBP
	 */
	struct UZeuzApiAdmin_AdminEnvironmentsBP_Params
	{
	public:
		struct FZeuzAdminEnvIn                                     In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminDevelopersBP
	 */
	struct UZeuzApiAdmin_AdminDevelopersBP_Params
	{
	public:
		struct FZeuzAdminAccountIn                                 In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesperaccBP
	 */
	struct UZeuzApiAdmin_AdminCountresourcesperaccBP_Params
	{
	public:
		struct FZeuzAdminTestpoolIn                                In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminCountresourcesBP
	 */
	struct UZeuzApiAdmin_AdminCountresourcesBP_Params
	{
	public:
		struct FZeuzAdminCountResoucesIn                           In;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0048(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAdmin.AdminAccountsBP
	 */
	struct UZeuzApiAdmin_AdminAccountsBP_Params
	{
	public:
		struct FZeuzAdminAccountsIn                                In;                                                      // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JKG4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PEYJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzContext                                        Ctx;                                                     // 0x0038(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationInfo                                 Result;                                                  // 0x0000(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationUpdateBP__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationInfo                                 Result;                                                  // 0x0000(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0168(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPS__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationRequestServicesBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAllocationPayloadInfo>                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBPF__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationRequestServicesBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationRequestServicesBP__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationRequestServicesBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAllocationPayloadInfo>                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPS__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationGetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationGetOut                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBPF__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationGetBP__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationGetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationGetOut                               Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPS__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationInfo                                 Result;                                                  // 0x0000(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBPF__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAllocation.DelegateAllocationCreateBP__DelegateSignature
	 */
	struct UZeuzApiAllocation_DelegateAllocationCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAllocationInfo                                 Result;                                                  // 0x0000(0x0168)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0168(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAllocation.AllocationUpdateBP
	 */
	struct UZeuzApiAllocation_AllocationUpdateBP_Params
	{
	public:
		struct FZeuzAllocationUpdateIn                             In;                                                      // 0x0000(0x0130)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0130(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0140(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0150(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0160(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAllocation.AllocationRequestServicesBP
	 */
	struct UZeuzApiAllocation_AllocationRequestServicesBP_Params
	{
	public:
		struct FZeuzAllocationRequestServiceIn                     In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAllocation.AllocationGetBP
	 */
	struct UZeuzApiAllocation_AllocationGetBP_Params
	{
	public:
		struct FZeuzAllocationGetIn                                In;                                                      // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0090(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAllocation.AllocationCreateBP
	 */
	struct UZeuzApiAllocation_AllocationCreateBP_Params
	{
	public:
		struct FZeuzAllocationCreateIn                             In;                                                      // 0x0000(0x0138)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0138(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0148(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0158(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0168(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyUpdateBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeySetpwhashBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeySetpwhashBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeySetpwhashBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeySetpwhashBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyRevokeBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyRevokeBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyRevokeBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyRevokeBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAPIKey>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAPIKey>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetallBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAPIKey>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetallBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGetallBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGetallBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzAPIKey>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGenerateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGenerateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyGenerateBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyGenerateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyDeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyDeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyDeleteBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyDeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPS__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBPF__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiApikey.DelegateApikeyCreateBP__DelegateSignature
	 */
	struct UZeuzApiApikey_DelegateApikeyCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAPIKey                                         Result;                                                  // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyUpdateBP
	 */
	struct UZeuzApiApikey_ApikeyUpdateBP_Params
	{
	public:
		struct FZeuzAPIKey                                         In;                                                      // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0100(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0110(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeySetpwhashBP
	 */
	struct UZeuzApiApikey_ApikeySetpwhashBP_Params
	{
	public:
		struct FZeuzAPIKeyPwHashIn                                 In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyRevokeBP
	 */
	struct UZeuzApiApikey_ApikeyRevokeBP_Params
	{
	public:
		struct FZeuzAPIKeyDeleteIn                                 In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyGetBP
	 */
	struct UZeuzApiApikey_ApikeyGetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyGetallBP
	 */
	struct UZeuzApiApikey_ApikeyGetallBP_Params
	{
	public:
		struct FZeuzAPIKeyGetIn                                    In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyGenerateBP
	 */
	struct UZeuzApiApikey_ApikeyGenerateBP_Params
	{
	public:
		struct FZeuzAPIKeyGenerateIn                               In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyDeleteBP
	 */
	struct UZeuzApiApikey_ApikeyDeleteBP_Params
	{
	public:
		struct FZeuzAPIKeyDeleteIn                                 In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiApikey.ApikeyCreateBP
	 */
	struct UZeuzApiApikey_ApikeyCreateBP_Params
	{
	public:
		struct FZeuzAPIKey                                         In;                                                      // 0x0000(0x00E0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0100(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0110(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPS__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthSessiondelBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBPF__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthSessiondelBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthSessiondelBP__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthSessiondelBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPS__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLogoutBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBPF__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLogoutBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLogoutBP__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLogoutBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPS__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLoginBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzAuthLoginResult                                Result;                                                  // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBPF__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLoginBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthLoginBP__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthLoginBP__DelegateSignature_Params
	{
	public:
		struct FZeuzAuthLoginResult                                Result;                                                  // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0068(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPS__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthCheckBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzTimestamp                                      Result;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBPF__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthCheckBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthCheckBP__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthCheckBP__DelegateSignature_Params
	{
	public:
		struct FZeuzTimestamp                                      Result;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPS__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthActivesessionsgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzSession>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBPF__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthActivesessionsgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiAuth.DelegateAuthActivesessionsgetBP__DelegateSignature
	 */
	struct UZeuzApiAuth_DelegateAuthActivesessionsgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzSession>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAuth.AuthSessiondelBP
	 */
	struct UZeuzApiAuth_AuthSessiondelBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAuth.AuthLogoutBP
	 */
	struct UZeuzApiAuth_AuthLogoutBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAuth.AuthLoginBP
	 */
	struct UZeuzApiAuth_AuthLoginBP_Params
	{
	public:
		struct FZeuzAuthLoginIn                                    In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAuth.AuthCheckBP
	 */
	struct UZeuzApiAuth_AuthCheckBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiAuth.AuthActivesessionsgetBP
	 */
	struct UZeuzApiAuth_AuthActivesessionsgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiEcho.Echo4BP
	 */
	struct UZeuzApiEcho_Echo4BP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiEcho.Echo3BP
	 */
	struct UZeuzApiEcho_Echo3BP_Params
	{
	public:
		struct FZeuzEcho3In                                        In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R5H6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzContext                                        Ctx;                                                     // 0x0038(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiEcho.Echo2BP
	 */
	struct UZeuzApiEcho_Echo2BP_Params
	{
	public:
		struct FZeuzEcho2In                                        In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiEcho.Echo1BP
	 */
	struct UZeuzApiEcho_Echo1BP_Params
	{
	public:
		struct FZeuzEchoIn                                         In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPS__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho4BPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BPF__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho4BPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho4BP__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho4BP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPS__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho3BPS__DelegateSignature_Params
	{
	public:
		struct FZeuzEchoOut                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BPF__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho3BPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho3BP__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho3BP__DelegateSignature_Params
	{
	public:
		struct FZeuzEchoOut                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPS__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho2BPS__DelegateSignature_Params
	{
	public:
		struct FZeuzEcho2Out                                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BPF__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho2BPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho2BP__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho2BP__DelegateSignature_Params
	{
	public:
		struct FZeuzEcho2Out                                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPS__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho1BPS__DelegateSignature_Params
	{
	public:
		struct FZeuzEchoOut                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BPF__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho1BPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiEcho.DelegateEcho1BP__DelegateSignature
	 */
	struct UZeuzApiEcho_DelegateEcho1BP__DelegateSignature_Params
	{
	public:
		struct FZeuzEchoOut                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushFileUrlBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerPushFileUrlBP_Params
	{
	public:
		struct FZeuzImageManagerPresignedFileUrlIn                 In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPushBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerPushBP_Params
	{
	public:
		struct FZeuzImageManagerManifest                           In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullFileUrlBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerPullFileUrlBP_Params
	{
	public:
		struct FZeuzImageManagerPresignedFileUrlIn                 In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPullBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerPullBP_Params
	{
	public:
		struct FZeuzImageManagerPullInput                          In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerPublishBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerPublishBP_Params
	{
	public:
		struct FZeuzImageManagerPublishInput                       In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerListBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerListBP_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0030(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerGetpublishstateBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerGetpublishstateBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiImagemanager.ImagemanagerDiscardBP
	 */
	struct UZeuzApiImagemanager_ImagemanagerDiscardBP_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0030(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushFileUrlBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushFileUrlBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzImageManagerPushPullOutput                     Result;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPushBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPushBP__DelegateSignature_Params
	{
	public:
		struct FZeuzImageManagerPushPullOutput                     Result;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullFileUrlBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullFileUrlBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzImageManagerPushPullOutput                     Result;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPullBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPullBP__DelegateSignature_Params
	{
	public:
		struct FZeuzImageManagerPushPullOutput                     Result;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPublishBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzImagemanagerPublishState                       Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPublishBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerPublishBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerPublishBP__DelegateSignature_Params
	{
	public:
		struct FZeuzImagemanagerPublishState                       Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0080(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerListBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzImageManagerListEntry>                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerListBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerListBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerListBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzImageManagerListEntry>                  Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzImagemanagerPublishState                       Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerGetpublishstateBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerGetpublishstateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzImagemanagerPublishState                       Result;                                                  // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0080(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPS__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerDiscardBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBPF__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerDiscardBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiImagemanager.DelegateImagemanagerDiscardBP__DelegateSignature
	 */
	struct UZeuzApiImagemanager_DelegateImagemanagerDiscardBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiKVStore.KVStorePutBP
	 */
	struct UZeuzApiKVStore_KVStorePutBP_Params
	{
	public:
		struct FZeuzKVStorePutIn                                   In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiKVStore.KVStoreGetBP
	 */
	struct UZeuzApiKVStore_KVStoreGetBP_Params
	{
	public:
		struct FZeuzKVStoreKey                                     In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiKVStore.KVStoreDelBP
	 */
	struct UZeuzApiKVStore_KVStoreDelBP_Params
	{
	public:
		struct FZeuzKVStoreDelIn                                   In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPS__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStorePutBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBPF__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStorePutBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStorePutBP__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStorePutBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPS__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreGetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzKVStoreKVEntry                                 Result;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBPF__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreGetBP__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreGetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzKVStoreKVEntry                                 Result;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPS__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreDelBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBPF__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreDelBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiKVStore.DelegateKVStoreDelBP__DelegateSignature
	 */
	struct UZeuzApiKVStore_DelegateKVStoreDelBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyUserBP
	 */
	struct UZeuzApiLobby_LobbyUserBP_Params
	{
	public:
		struct FZeuzLobbyUserIn                                    In;                                                      // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00C8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyUpdateBP
	 */
	struct UZeuzApiLobby_LobbyUpdateBP_Params
	{
	public:
		struct FZeuzLobbyStateIn                                   In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyStartBP
	 */
	struct UZeuzApiLobby_LobbyStartBP_Params
	{
	public:
		struct FZeuzLobbyStartDestroy                              In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyRefreshBP
	 */
	struct UZeuzApiLobby_LobbyRefreshBP_Params
	{
	public:
		struct FZeuzLobbyRefresh                                   In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyQueryBP
	 */
	struct UZeuzApiLobby_LobbyQueryBP_Params
	{
	public:
		struct FZeuzLobbyQueryIn                                   In;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0068(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyLeaveBP
	 */
	struct UZeuzApiLobby_LobbyLeaveBP_Params
	{
	public:
		struct FZeuzLobbyJoin                                      In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyKickBP
	 */
	struct UZeuzApiLobby_LobbyKickBP_Params
	{
	public:
		struct FZeuzLobbyKick                                      In;                                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0078(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyJoinBP
	 */
	struct UZeuzApiLobby_LobbyJoinBP_Params
	{
	public:
		struct FZeuzLobbyJoin                                      In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyDestroyBP
	 */
	struct UZeuzApiLobby_LobbyDestroyBP_Params
	{
	public:
		struct FZeuzLobbyStartDestroy                              In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLobby.LobbyCreateBP
	 */
	struct UZeuzApiLobby_LobbyCreateBP_Params
	{
	public:
		struct FZeuzLobbyStateIn                                   In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUserBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUserBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUserBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUserBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyUpdateBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyStartBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyServerConnect                             Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyStartBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyStartBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyStartBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyServerConnect                             Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyRefreshBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyRefreshBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyRefreshBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyRefreshBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyQueryBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyQueryOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyQueryBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyQueryBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyQueryBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyQueryOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyLeaveBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyLeaveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyLeaveBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyLeaveBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyKickBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyKickBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyKickBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyKickBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyJoinBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyJoinBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyJoinBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyJoinBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyDestroyBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyDestroyBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyDestroyBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyDestroyBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPS__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBPF__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLobby.DelegateLobbyCreateBP__DelegateSignature
	 */
	struct UZeuzApiLobby_DelegateLobbyCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLobbyUsersOut                                  Result;                                                  // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0078(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityRegionUpdateBP
	 */
	struct UZeuzApiLocality_LocalityRegionUpdateBP_Params
	{
	public:
		struct FZeuzRegion                                         In;                                                      // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00D8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityRegionRemoveBP
	 */
	struct UZeuzApiLocality_LocalityRegionRemoveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityRegionGetBP
	 */
	struct UZeuzApiLocality_LocalityRegionGetBP_Params
	{
	public:
		struct FZeuzLocalityRegionGetIn                            In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityRegionCreateBP
	 */
	struct UZeuzApiLocality_LocalityRegionCreateBP_Params
	{
	public:
		struct FZeuzRegion                                         In;                                                      // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00C8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00D8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityProviderUpdateBP
	 */
	struct UZeuzApiLocality_LocalityProviderUpdateBP_Params
	{
	public:
		struct FZeuzProvider                                       In;                                                      // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00E0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityProviderRemoveBP
	 */
	struct UZeuzApiLocality_LocalityProviderRemoveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityProviderGetBP
	 */
	struct UZeuzApiLocality_LocalityProviderGetBP_Params
	{
	public:
		struct FZeuzLocalityProviderGetIn                          In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityProviderCreateBP
	 */
	struct UZeuzApiLocality_LocalityProviderCreateBP_Params
	{
	public:
		struct FZeuzProvider                                       In;                                                      // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00E0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityLocationUpdateBP
	 */
	struct UZeuzApiLocality_LocalityLocationUpdateBP_Params
	{
	public:
		struct FZeuzLocation                                       In;                                                      // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0150(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0160(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0170(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0180(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityLocationRemoveBP
	 */
	struct UZeuzApiLocality_LocalityLocationRemoveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityLocationGetBP
	 */
	struct UZeuzApiLocality_LocalityLocationGetBP_Params
	{
	public:
		struct FZeuzLocalityLocationGetIn                          In;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0080(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLocality.LocalityLocationCreateBP
	 */
	struct UZeuzApiLocality_LocalityLocationCreateBP_Params
	{
	public:
		struct FZeuzLocation                                       In;                                                      // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0150(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0160(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0170(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0180(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzRegion                                         Result;                                                  // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionUpdateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzRegion                                         Result;                                                  // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionRemoveBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionRemoveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionRemoveBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionRemoveBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionGetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzRegion>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionGetBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionGetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzRegion>                                 Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzRegion                                         Result;                                                  // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityRegionCreateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityRegionCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzRegion                                         Result;                                                  // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00A8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzProvider                                       Result;                                                  // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderUpdateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzProvider                                       Result;                                                  // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderRemoveBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderRemoveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderRemoveBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderRemoveBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderGetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProvider>                               Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderGetBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderGetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzProvider>                               Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzProvider                                       Result;                                                  // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityProviderCreateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityProviderCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzProvider                                       Result;                                                  // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00B0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLocation                                       Result;                                                  // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationUpdateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLocation                                       Result;                                                  // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0150(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationRemoveBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationRemoveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationRemoveBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationRemoveBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationGetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzLocation>                               Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationGetBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationGetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzLocation>                               Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPS__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLocation                                       Result;                                                  // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBPF__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLocality.DelegateLocalityLocationCreateBP__DelegateSignature
	 */
	struct UZeuzApiLocality_DelegateLocalityLocationCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLocation                                       Result;                                                  // 0x0000(0x0150)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0150(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLogsearch.LogsearchStartexportBP
	 */
	struct UZeuzApiLogsearch_LogsearchStartexportBP_Params
	{
	public:
		struct FZeuzLogsearchAccountIn                             In;                                                      // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00A0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLogsearch.LogsearchDownloadexportBP
	 */
	struct UZeuzApiLogsearch_LogsearchDownloadexportBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLogsearch.LogsearchCheckexportBP
	 */
	struct UZeuzApiLogsearch_LogsearchCheckexportBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiLogsearch.LogsearchAccountBP
	 */
	struct UZeuzApiLogsearch_LogsearchAccountBP_Params
	{
	public:
		struct FZeuzLogsearchAccountIn                             In;                                                      // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00A0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPS__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchStartexportBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBPF__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchStartexportBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchStartexportBP__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchStartexportBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPS__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBPF__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchDownloadexportBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchDownloadexportBP__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchDownloadexportBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPS__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchCheckexportBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchLogsStatus                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBPF__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchCheckexportBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchCheckexportBP__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchCheckexportBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchLogsStatus                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPS__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchAccountBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchAccountOut                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBPF__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchAccountBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiLogsearch.DelegateLogsearchAccountBP__DelegateSignature
	 */
	struct UZeuzApiLogsearch_DelegateLogsearchAccountBP__DelegateSignature_Params
	{
	public:
		struct FZeuzLogsearchAccountOut                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineUpdateresourceBP
	 */
	struct UZeuzApiMachine_MachineUpdateresourceBP_Params
	{
	public:
		struct FZeuzMachineResourceUpdateIn                        In;                                                      // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00F0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0100(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineSettagsBP
	 */
	struct UZeuzApiMachine_MachineSettagsBP_Params
	{
	public:
		TArray<struct FZeuzMachineTagsSetIn>                       In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineResourcedeprovisionBP
	 */
	struct UZeuzApiMachine_MachineResourcedeprovisionBP_Params
	{
	public:
		struct FZeuzMachineResourceDeprovisionIn                   In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineGettagsBP
	 */
	struct UZeuzApiMachine_MachineGettagsBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineGetresourcesBP
	 */
	struct UZeuzApiMachine_MachineGetresourcesBP_Params
	{
	public:
		struct FZeuzMachineResourceGetIn                           In;                                                      // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00C0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineGetinfoBP
	 */
	struct UZeuzApiMachine_MachineGetinfoBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineGetBP
	 */
	struct UZeuzApiMachine_MachineGetBP_Params
	{
	public:
		struct FZeuzMachineGetIn                                   In;                                                      // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineDeallocateBP
	 */
	struct UZeuzApiMachine_MachineDeallocateBP_Params
	{
	public:
		struct FZeuzMachineResourceDeallocateIn                    In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineCountresourcesBP
	 */
	struct UZeuzApiMachine_MachineCountresourcesBP_Params
	{
	public:
		struct FZeuzMachineResourcesCountIn                        In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineAllocateBP
	 */
	struct UZeuzApiMachine_MachineAllocateBP_Params
	{
	public:
		struct FZeuzMachineResourceAllocateIn                      In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMachine.MachineAddresourceBP
	 */
	struct UZeuzApiMachine_MachineAddresourceBP_Params
	{
	public:
		struct FZeuzMachineResourceDataIn                          In;                                                      // 0x0000(0x00C0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineUpdateresourceBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineResourceInfo                            Result;                                                  // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineUpdateresourceBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineUpdateresourceBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineUpdateresourceBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineResourceInfo                            Result;                                                  // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00F0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineSettagsBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineTagsSetIn>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineSettagsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineSettagsBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineSettagsBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineTagsSetIn>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineResourcedeprovisionBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineResourcedeprovisionBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineResourcedeprovisionBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineResourcedeprovisionBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGettagsBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineTagsSetIn>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGettagsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGettagsBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGettagsBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineTagsSetIn>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetresourcesBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineResourceInfo>                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetresourcesBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetresourcesBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetresourcesBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineResourceInfo>                    Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetinfoBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetinfoBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetinfoBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetinfoBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineGetOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineGetBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineGetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineGetOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineDeallocateBPS__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineDeallocateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineDeallocateBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineDeallocateBP__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineCountresourcesBPS__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineCountresourcesBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineCountresourcesBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineCountresourcesBP__DelegateSignature_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GJFB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAllocateBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAllocateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAllocateBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAllocateBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzMachineInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPS__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAddresourceBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineResourceInfo                            Result;                                                  // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBPF__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAddresourceBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMachine.DelegateMachineAddresourceBP__DelegateSignature
	 */
	struct UZeuzApiMachine_DelegateMachineAddresourceBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMachineResourceInfo                            Result;                                                  // 0x0000(0x00F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00F0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingUpdateBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingUpdateBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingStatsBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingStatsBP_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0030(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerrefreshBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingServerrefreshBP_Params
	{
	public:
		struct FZeuzMatchMakingServerInfo                          In;                                                      // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00A8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingServerdestroyBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingServerdestroyBP_Params
	{
	public:
		struct FZeuzMatchMakingServerInfo                          In;                                                      // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00A8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreatepartyBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingCreatepartyBP_Params
	{
	public:
		struct FZeuzMatchMakingPartyInit                           In;                                                      // 0x0000(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00E0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCreateBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingCreateBP_Params
	{
	public:
		struct FZeuzMatchMakingInit                                In;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMatchmaking.MatchmakingCloseBP
	 */
	struct UZeuzApiMatchmaking_MatchmakingCloseBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingUpdateBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00D0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingStatsBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStats                               Result;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingStatsBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingStatsBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingStatsBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStats                               Result;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JSMA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerrefreshBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerrefreshBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingServerdestroyBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingServerdestroyBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreatepartyBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreatepartyBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00D0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCreateBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzMatchMakingStatus                              Result;                                                  // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00D0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPS__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCloseBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBPF__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCloseBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMatchmaking.DelegateMatchmakingCloseBP__DelegateSignature
	 */
	struct UZeuzApiMatchmaking_DelegateMatchmakingCloseBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworksentBP
	 */
	struct UZeuzApiMetrics_MetricsPayloadnetworksentBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadnetworkreceivedBP
	 */
	struct UZeuzApiMetrics_MetricsPayloadnetworkreceivedBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadmemoryusageBP
	 */
	struct UZeuzApiMetrics_MetricsPayloadmemoryusageBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcpuusageBP
	 */
	struct UZeuzApiMetrics_MetricsPayloadcpuusageBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsPayloadcountBP
	 */
	struct UZeuzApiMetrics_MetricsPayloadcountBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworksentBP
	 */
	struct UZeuzApiMetrics_MetricsMachinenetworksentBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinenetworkreceivedBP
	 */
	struct UZeuzApiMetrics_MetricsMachinenetworkreceivedBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinememoryusageBP
	 */
	struct UZeuzApiMetrics_MetricsMachinememoryusageBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiMetrics.MetricsMachinecpuusageBP
	 */
	struct UZeuzApiMetrics_MetricsMachinecpuusageBP_Params
	{
	public:
		struct FZeuzMetricsQueryIn                                 In;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0088(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworksentBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworksentBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadnetworkreceivedBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadmemoryusageBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadmemoryusageBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcpuusageBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcpuusageBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcountBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcountBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsPayloadcountBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsPayloadcountBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworksentBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworksentBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworksentBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinenetworkreceivedBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinenetworkreceivedBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinememoryusageBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinememoryusageBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinememoryusageBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPS__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBPF__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinecpuusageBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiMetrics.DelegateMetricsMachinecpuusageBP__DelegateSignature
	 */
	struct UZeuzApiMetrics_DelegateMetricsMachinecpuusageBP__DelegateSignature_Params
	{
	public:
		struct FZeuzVariant                                        Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadUpdateBP
	 */
	struct UZeuzApiPayload_PayloadUpdateBP_Params
	{
	public:
		struct FZeuzPayloadUpdateIn                                In;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0080(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadUnreserveBP
	 */
	struct UZeuzApiPayload_PayloadUnreserveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadStateupdateBP
	 */
	struct UZeuzApiPayload_PayloadStateupdateBP_Params
	{
	public:
		struct FZeuzPayloadStateGetIn                              In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadStateinfoBP
	 */
	struct UZeuzApiPayload_PayloadStateinfoBP_Params
	{
	public:
		struct FZeuzPayloadStateGetIn                              In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0060(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadResumeBP
	 */
	struct UZeuzApiPayload_PayloadResumeBP_Params
	{
	public:
		struct FZeuzPayloadResumeIn                                In;                                                      // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadRestartBP
	 */
	struct UZeuzApiPayload_PayloadRestartBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadReserveBP
	 */
	struct UZeuzApiPayload_PayloadReserveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadRemoveBP
	 */
	struct UZeuzApiPayload_PayloadRemoveBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadGetBP
	 */
	struct UZeuzApiPayload_PayloadGetBP_Params
	{
	public:
		struct FZeuzPayloadGetIn                                   In;                                                      // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadCreateBP
	 */
	struct UZeuzApiPayload_PayloadCreateBP_Params
	{
	public:
		struct FZeuzPayloadCreateIn                                In;                                                      // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00A8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPayload.PayloadAllocateBP
	 */
	struct UZeuzApiPayload_PayloadAllocateBP_Params
	{
	public:
		struct FZeuzPayloadAllocateIn                              In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUpdateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUpdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUpdateBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUpdateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUnreserveBPS__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUnreserveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadUnreserveBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadUnreserveBP__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J4HB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateupdateBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadStateInfo>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateupdateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateupdateBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateupdateBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadStateInfo>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateinfoBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadStateInfo>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateinfoBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadStateinfoBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadStateinfoBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadStateInfo>                       Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadResumeBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadResumeBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadResumeBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadResumeBP__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRestartBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRestartBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRestartBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRestartBP__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadReserveBPS__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadReserveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadReserveBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadReserveBP__DelegateSignature_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V1MJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRemoveBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRemoveBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadRemoveBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadRemoveBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadGetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadGetOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadGetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadGetBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadGetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadGetOut                                  Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadCreateBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadCreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadCreateBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadCreateBP__DelegateSignature_Params
	{
	public:
		struct FZeuzPayloadInfo                                    Result;                                                  // 0x0000(0x00E8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00E8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPS__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadAllocateBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBPF__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadAllocateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPayload.DelegatePayloadAllocateBP__DelegateSignature
	 */
	struct UZeuzApiPayload_DelegatePayloadAllocateBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzPayloadInfo>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUserslookupBP
	 */
	struct UZeuzApiProfile_ProfileUserslookupBP_Params
	{
	public:
		TArray<struct FZeuzProfileUserLookupIn>                    In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUserslistBP
	 */
	struct UZeuzApiProfile_ProfileUserslistBP_Params
	{
	public:
		struct FZeuzProfileUsersListIn                             In;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0048(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsersgetBP
	 */
	struct UZeuzApiProfile_ProfileUsersgetBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetpwhashBP
	 */
	struct UZeuzApiProfile_ProfileUsersetpwhashBP_Params
	{
	public:
		struct FZeuzProfileUserPwHashIn                            In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsersetBP
	 */
	struct UZeuzApiProfile_ProfileUsersetBP_Params
	{
	public:
		struct FZeuzUser                                           In;                                                      // 0x0000(0x00D8)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00D8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00E8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00F8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0108(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUserlookupBP
	 */
	struct UZeuzApiProfile_ProfileUserlookupBP_Params
	{
	public:
		struct FZeuzProfileUserLookupIn                            In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetpwhashBP
	 */
	struct UZeuzApiProfile_ProfileUsergetpwhashBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsergetBP
	 */
	struct UZeuzApiProfile_ProfileUsergetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUserdeleteBP
	 */
	struct UZeuzApiProfile_ProfileUserdeleteBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileUsercreateBP
	 */
	struct UZeuzApiProfile_ProfileUsercreateBP_Params
	{
	public:
		struct FZeuzProfileUserCreateIn                            In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesgetBP
	 */
	struct UZeuzApiProfile_ProfileProfilesgetBP_Params
	{
	public:
		TArray<class FString>                                      In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileProfilesetBP
	 */
	struct UZeuzApiProfile_ProfileProfilesetBP_Params
	{
	public:
		struct FZeuzUserProfile                                    In;                                                      // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00A8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00B8(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileProfilegetBP
	 */
	struct UZeuzApiProfile_ProfileProfilegetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileProfiledeleteBP
	 */
	struct UZeuzApiProfile_ProfileProfiledeleteBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemtransferBP
	 */
	struct UZeuzApiProfile_ProfileItemtransferBP_Params
	{
	public:
		struct FZeuzProfileItemTransferIn                          In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemsetBP
	 */
	struct UZeuzApiProfile_ProfileItemsetBP_Params
	{
	public:
		struct FZeuzInvItem                                        In;                                                      // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemrembynameBP
	 */
	struct UZeuzApiProfile_ProfileItemrembynameBP_Params
	{
	public:
		struct FZeuzProfileItemRemByNameIn                         In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemremBP
	 */
	struct UZeuzApiProfile_ProfileItemremBP_Params
	{
	public:
		struct FZeuzProfileItemRemIn                               In;                                                      // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0048(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemlistBP
	 */
	struct UZeuzApiProfile_ProfileItemlistBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetbynameBP
	 */
	struct UZeuzApiProfile_ProfileItemgetbynameBP_Params
	{
	public:
		struct FZeuzProfileItemUserName                            In;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0050(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemgetBP
	 */
	struct UZeuzApiProfile_ProfileItemgetBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemcreateBP
	 */
	struct UZeuzApiProfile_ProfileItemcreateBP_Params
	{
	public:
		struct FZeuzInvItem                                        In;                                                      // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00C0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x00D0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x00E0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x00F0(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemconfiggetBP
	 */
	struct UZeuzApiProfile_ProfileItemconfiggetBP_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0030(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItembuyBP
	 */
	struct UZeuzApiProfile_ProfileItembuyBP_Params
	{
	public:
		struct FZeuzProfileItemAddIn                               In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItembarterBP
	 */
	struct UZeuzApiProfile_ProfileItembarterBP_Params
	{
	public:
		struct FZeuzProfileItemBarterIn                            In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiProfile.ProfileItemaddBP
	 */
	struct UZeuzApiProfile_ProfileItemaddBP_Params
	{
	public:
		struct FZeuzProfileItemAddIn                               In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslookupBPS__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslookupBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslookupBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslookupBP__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslistBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzProfileUsersListOut                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslistBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserslistBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserslistBP__DelegateSignature_Params
	{
	public:
		struct FZeuzProfileUsersListOut                            Result;                                                  // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzUser>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersgetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzUser>                                   Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetpwhashBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetpwhashBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetpwhashBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetpwhashBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsersetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsersetBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserlookupBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserlookupBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserlookupBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserlookupBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetpwhashBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetpwhashBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetpwhashBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetpwhashBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzUser                                           Result;                                                  // 0x0000(0x00D8)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsergetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsergetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzUser                                           Result;                                                  // 0x0000(0x00D8)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00D8(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserdeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserdeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUserdeleteBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUserdeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsercreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsercreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileUsercreateBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileUsercreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesgetBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzUserProfile>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesgetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesgetBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzUserProfile>                            Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesetBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilesetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilesetBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilegetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzUserProfile                                    Result;                                                  // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilegetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfilegetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfilegetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzUserProfile                                    Result;                                                  // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0088(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfiledeleteBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfiledeleteBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileProfiledeleteBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileProfiledeleteBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemtransferBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemtransferBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemtransferBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemtransferBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemsetBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemsetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemsetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemsetBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemrembynameBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemrembynameBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemrembynameBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemrembynameBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemremBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemremBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemremBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemremBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemlistBPS__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzInvItem>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemlistBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemlistBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemlistBP__DelegateSignature_Params
	{
	public:
		TArray<struct FZeuzInvItem>                                Result;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetbynameBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzInvItem                                        Result;                                                  // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetbynameBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetbynameBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetbynameBP__DelegateSignature_Params
	{
	public:
		struct FZeuzInvItem                                        Result;                                                  // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00C0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzInvItem                                        Result;                                                  // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemgetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemgetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzInvItem                                        Result;                                                  // 0x0000(0x00C0)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x00C0(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemcreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemcreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemcreateBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemcreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemconfiggetBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzProfileItemConfigGetOut                        Result;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemconfiggetBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemconfiggetBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemconfiggetBP__DelegateSignature_Params
	{
	public:
		struct FZeuzProfileItemConfigGetOut                        Result;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembuyBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembuyBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembuyBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembuyBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembarterBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembarterBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItembarterBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItembarterBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPS__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemaddBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBPF__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemaddBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiProfile.DelegateProfileItemaddBP__DelegateSignature
	 */
	struct UZeuzApiProfile_DelegateProfileItemaddBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserRefreshBP
	 */
	struct UZeuzApiServerbrowser_ServerbrowserRefreshBP_Params
	{
	public:
		struct FZeuzServerBrowserStateIn                           In;                                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0078(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserQueryBP
	 */
	struct UZeuzApiServerbrowser_ServerbrowserQueryBP_Params
	{
	public:
		struct FZeuzServerBrowserQueryIn                           In;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0068(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiServerbrowser.ServerbrowserDestroyBP
	 */
	struct UZeuzApiServerbrowser_ServerbrowserDestroyBP_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0040(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPS__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserRefreshBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBPF__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserRefreshBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserRefreshBP__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserRefreshBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPS__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserQueryBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzServerBrowserQueryOut                          Result;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBPF__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserQueryBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserQueryBP__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserQueryBP__DelegateSignature_Params
	{
	public:
		struct FZeuzServerBrowserQueryOut                          Result;                                                  // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPS__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserDestroyBPS__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBPF__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserDestroyBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiServerbrowser.DelegateServerbrowserDestroyBP__DelegateSignature
	 */
	struct UZeuzApiServerbrowser_DelegateServerbrowserDestroyBP__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiSimpleAuth.StringHash
	 */
	struct UZeuzApiSimpleAuth_StringHash_Params
	{
	public:
		class FString                                              Val;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiSimpleAuth.SimpleProfileUsercreateBP
	 */
	struct UZeuzApiSimpleAuth_SimpleProfileUsercreateBP_Params
	{
	public:
		struct FZeuzSimpleProfileUserCreateIn                      In;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0070(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPS__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBPF__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateSimpleProfileUsercreateBP__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateSimpleProfileUsercreateBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPS__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthLoginBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzContext                                        Context;                                                 // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBPF__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthLoginBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthLoginBP__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthLoginBP__DelegateSignature_Params
	{
	public:
		struct FZeuzContext                                        Context;                                                 // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0098(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPS__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPS__DelegateSignature_Params
	{
	public:
		struct FZeuzTimestamp                                      Expires;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBPF__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthCheckSessionBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiSimpleAuth.DelegateAuthCheckSessionBP__DelegateSignature
	 */
	struct UZeuzApiSimpleAuth_DelegateAuthCheckSessionBP__DelegateSignature_Params
	{
	public:
		struct FZeuzTimestamp                                      Expires;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiSimpleAuth.CalcPWHash
	 */
	struct UZeuzApiSimpleAuth_CalcPWHash_Params
	{
	public:
		class FString                                              Login;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiSimpleAuth.AuthLoginBP
	 */
	struct UZeuzApiSimpleAuth_AuthLoginBP_Params
	{
	public:
		struct FZeuzSimpleAuthLoginIn                              In;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0058(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       SaveDefaultContext;                                      // 0x00F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiSimpleAuth.AuthCheckSessionBP
	 */
	struct UZeuzApiSimpleAuth_AuthCheckSessionBP_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FZeuzContext                                        Ctx;                                                     // 0x0030(0x0098)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiContext.SetDefaultContext
	 */
	struct UZeuzApiContext_SetDefaultContext_Params
	{
	public:
		struct FZeuzContext                                        Ctx;                                                     // 0x0000(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiContext.GetDefaultContext
	 */
	struct UZeuzApiContext_GetDefaultContext_Params
	{
	public:
		struct FZeuzContext                                        ReturnValue;                                             // 0x0000(0x0098)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzID.IsValid
	 */
	struct UZeuzID_IsValid_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzID.IsType
	 */
	struct UZeuzID_IsType_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EZeuzIDType                                                typ;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzID.GetType
	 */
	struct UZeuzID_GetType_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EZeuzIDType                                                ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPing.DoPingBP
	 */
	struct UZeuzApiPing_DoPingBP_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0034(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LF4Y[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzContext                                        Ctx;                                                     // 0x0048(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPS__DelegateSignature
	 */
	struct UZeuzApiPing_DelegateDoPingBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BPFX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Resolved;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBPF__DelegateSignature
	 */
	struct UZeuzApiPing_DelegateDoPingBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPing.DelegateDoPingBP__DelegateSignature
	 */
	struct UZeuzApiPing_DelegateDoPingBP__DelegateSignature_Params
	{
	public:
		class FString                                              Target;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KP48[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Resolved;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiPubIP.GetPublicIPBP
	 */
	struct UZeuzApiPubIP_GetPublicIPBP_Params
	{
	public:
		bool                                                       v6;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DVJM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0024(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1HNW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzContext                                        Ctx;                                                     // 0x0038(0x0098)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPS__DelegateSignature
	 */
	struct UZeuzApiPubIP_DelegateGetPublicIPBPS__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBPF__DelegateSignature
	 */
	struct UZeuzApiPubIP_DelegateGetPublicIPBPF__DelegateSignature_Params
	{
	public:
		class FString                                              Error;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiPubIP.DelegateGetPublicIPBP__DelegateSignature
	 */
	struct UZeuzApiPubIP_DelegateGetPublicIPBP__DelegateSignature_Params
	{
	public:
		class FString                                              Result;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Error;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzTagsUtil.TagsToString
	 */
	struct UZeuzTagsUtil_TagsToString_Params
	{
	public:
		struct FZeuzTags                                           In;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzTagsUtil.StringToTags
	 */
	struct UZeuzTagsUtil_StringToTags_Params
	{
	public:
		class FString                                              In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzTags                                           Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.ToDateTime
	 */
	struct UZeuzApiTime_ToDateTime_Params
	{
	public:
		struct FZeuzTimestamp                                      T;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCoreUObject_FDateTime                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.Now
	 */
	struct UZeuzApiTime_Now_Params
	{
	public:
		bool                                                       adjusted;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_84HF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzTimestamp                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.IsZero
	 */
	struct UZeuzApiTime_IsZero_Params
	{
	public:
		struct FZeuzTimestamp                                      T;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.GetOffset
	 */
	struct UZeuzApiTime_GetOffset_Params
	{
	public:
		struct FZeuzTimestamp                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.FromDateTime
	 */
	struct UZeuzApiTime_FromDateTime_Params
	{
	public:
		struct FCoreUObject_FDateTime                              T;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       adjusted;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T0G1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FZeuzTimestamp                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiTime.AdjustOffset
	 */
	struct UZeuzApiTime_AdjustOffset_Params
	{
	public:
		struct FZeuzTimestamp                                      ofs;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.TimerWithString
	 */
	struct UZeuzApiUtil_TimerWithString_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0NB1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction Zeuzsdk.ZeuzApiUtil.TimerDynamicDelegateS__DelegateSignature
	 */
	struct UZeuzApiUtil_TimerDynamicDelegateS__DelegateSignature_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructToVariant
	 */
	struct UZeuzApiUtil_StructToVariant_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzVariant                                        Value;                                                   // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayJSON
	 */
	struct UZeuzApiUtil_StructToByteArrayJSON_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzByteArray                                      Value;                                                   // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructToByteArrayBin
	 */
	struct UZeuzApiUtil_StructToByteArrayBin_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzByteArray                                      Value;                                                   // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructFromVariant
	 */
	struct UZeuzApiUtil_StructFromVariant_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzVariant                                        Value;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayJSON
	 */
	struct UZeuzApiUtil_StructFromByteArrayJSON_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzByteArray                                      Value;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StructFromByteArrayBin
	 */
	struct UZeuzApiUtil_StructFromByteArrayBin_Params
	{
	public:
		class UProperty*                                           AnyStruct;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzByteArray                                      Value;                                                   // 0x0008(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StringNotEmpty
	 */
	struct UZeuzApiUtil_StringNotEmpty_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.StringIsEmpty
	 */
	struct UZeuzApiUtil_StringIsEmpty_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.SaveGameToByteArray
	 */
	struct UZeuzApiUtil_SaveGameToByteArray_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzByteArray                                      Value;                                                   // 0x0010(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.SaveGameFromByteArray
	 */
	struct UZeuzApiUtil_SaveGameFromByteArray_Params
	{
	public:
		struct FZeuzByteArray                                      Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.JsonToVariant
	 */
	struct UZeuzApiUtil_JsonToVariant_Params
	{
	public:
		class FString                                              Json;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FZeuzVariant                                        Variant;                                                 // 0x0010(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.JsonFromVariant
	 */
	struct UZeuzApiUtil_JsonFromVariant_Params
	{
	public:
		struct FZeuzVariant                                        Variant;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              Json;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Zeuzsdk.ZeuzApiUtil.GetSaveGamePath
	 */
	struct UZeuzApiUtil_GetSaveGamePath_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
