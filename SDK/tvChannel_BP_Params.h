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
	 * Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime
	 */
	struct AtvChannel_BP_C_GetElapsedAnimTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8K5J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter
	 */
	struct AtvChannel_BP_C_Set_Material_Dynamic_Parameter_Params
	{
	public:
		float                                                      Height;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChromaticAberation;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NoiseDeform;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RefreshJumpLuminosity;                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Interlace;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3RDA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            TVmovie;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV
	 */
	struct AtvChannel_BP_C_PlaySoundFromTV_Params
	{
	public:
		class UAkAudioEvent*                                       Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayOnNarrator;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJK7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim
	 */
	struct AtvChannel_BP_C_PlayRandomAnim_Params
	{
	public:
		class UDataTable*                                          Data_Table;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LoopSingleAnimation;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OnlySingleRow;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim
	 */
	struct AtvChannel_BP_C_ShouldLoopAnim_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.ValidateTexture
	 */
	struct AtvChannel_BP_C_ValidateTexture_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow
	 */
	struct AtvChannel_BP_C_GetRandomDataTableRow_Params
	{
	public:
		class UDataTable*                                          Data_Table;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RowName;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture
	 */
	struct AtvChannel_BP_C_Create_Dynamic_Texture_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat
	 */
	struct AtvChannel_BP_C_Set_Test_Screen_Mat_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript
	 */
	struct AtvChannel_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay
	 */
	struct AtvChannel_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.UpdateText
	 */
	struct AtvChannel_BP_C_UpdateText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Font_Scale;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.startMovie
	 */
	struct AtvChannel_BP_C_startMovie_Params
	{
	public:
		TArray<struct FTextAnim_Struc>                             TextAnim;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UMediaSource*                                        Movie;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkAudioEvent*                                       MovieSound;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation
	 */
	struct AtvChannel_BP_C_StartTextAnimation_Params
	{
	public:
		TArray<struct FTextAnim_Struc>                             TargetArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.EndMovie
	 */
	struct AtvChannel_BP_C_EndMovie_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim
	 */
	struct AtvChannel_BP_C_PlayCurrentAnim_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture
	 */
	struct AtvChannel_BP_C_CreateTextTexture_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter
	 */
	struct AtvChannel_BP_C_UpdateMaterialParameter_Params
	{
	public:
		float                                                      TextColor;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9L6J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture*                                            Texture;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Noise;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Rorschard;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MovieFlash;                                              // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget
	 */
	struct AtvChannel_BP_C_DrawRenderTarget_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged
	 */
	struct AtvChannel_BP_C_Event_OnCurrentlyPlayingDataChanged_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinished
	 */
	struct AtvChannel_BP_C_OnAnimationFinished_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.PlayCountdown
	 */
	struct AtvChannel_BP_C_PlayCountdown_Params
	{
	public:
		int32_t                                                    Countdown;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.stopMovie
	 */
	struct AtvChannel_BP_C_stopMovie_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.loopAnim
	 */
	struct AtvChannel_BP_C_loopAnim_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.StopAnim
	 */
	struct AtvChannel_BP_C_StopAnim_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay
	 */
	struct AtvChannel_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.OnLoop
	 */
	struct AtvChannel_BP_C_OnLoop_Params
	{	};

	/**
	 * Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP
	 */
	struct AtvChannel_BP_C_ExecuteUbergraph_tvChannel_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8YU0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
