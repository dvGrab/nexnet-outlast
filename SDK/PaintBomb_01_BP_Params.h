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
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.UpdateFog
	 */
	struct APaintBomb__BP_C_UpdateFog_Params
	{
	public:
		float                                                      Density;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.AddDecals
	 */
	struct APaintBomb__BP_C_AddDecals_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.UserConstructionScript
	 */
	struct APaintBomb__BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__FinishedFunc
	 */
	struct APaintBomb__BP_C_MistTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.MistTimeline__UpdateFunc
	 */
	struct APaintBomb__BP_C_MistTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__FinishedFunc
	 */
	struct APaintBomb__BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.Timeline_0__UpdateFunc
	 */
	struct APaintBomb__BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.Boom
	 */
	struct APaintBomb__BP_C_Boom_Params
	{
	public:
		float                                                      duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               TriggeringPawn;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.SetDecal
	 */
	struct APaintBomb__BP_C_SetDecal_Params
	{
	public:
		float                                                      duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.Mist
	 */
	struct APaintBomb__BP_C_Mist_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PaintBomb-01_BP.PaintBomb-01_BP_C.ExecuteUbergraph_PaintBomb-01_BP
	 */
	struct APaintBomb__BP_C_ExecuteUbergraph_PaintBomb__BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
