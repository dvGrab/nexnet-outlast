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
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.SetBlood
	 */
	struct AScreenshotPlayer_C_SetBlood_Params
	{	};

	/**
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateStaticMesh
	 */
	struct AScreenshotPlayer_C_UpdateStaticMesh_Params
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.UpdateSkeletalMesh
	 */
	struct AScreenshotPlayer_C_UpdateSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Mesh;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.UserConstructionScript
	 */
	struct AScreenshotPlayer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.ReceiveBeginPlay
	 */
	struct AScreenshotPlayer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScreenshotPlayer.ScreenshotPlayer_C.ExecuteUbergraph_ScreenshotPlayer
	 */
	struct AScreenshotPlayer_C_ExecuteUbergraph_ScreenshotPlayer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
