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
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.UserConstructionScript
	 */
	struct ACameraIntercom__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReceiveTick
	 */
	struct ACameraIntercom__BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Activate Light
	 */
	struct ACameraIntercom__BP_C_Activate_Light_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.Deactivate Light
	 */
	struct ACameraIntercom__BP_C_Deactivate_Light_Params
	{	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.AssignPlayer
	 */
	struct ACameraIntercom__BP_C_AssignPlayer_Params
	{
	public:
		class ARBPlayer_BP_C*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ReactToNightVision
	 */
	struct ACameraIntercom__BP_C_ReactToNightVision_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CameraIntercom-01_BP.CameraIntercom-01_BP_C.ExecuteUbergraph_CameraIntercom-01_BP
	 */
	struct ACameraIntercom__BP_C_ExecuteUbergraph_CameraIntercom__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
