/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::GetElapsedAnimTime(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.GetElapsedAnimTime");
		
		AtvChannel_BP_C_GetElapsedAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ChromaticAberation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NoiseDeform                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RefreshJumpLuminosity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Interlace                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    TVmovie                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::Set_Material_Dynamic_Parameter(float Height, float ChromaticAberation, float NoiseDeform, float RefreshJumpLuminosity, float Interlace, class UTexture* TVmovie)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Set Material Dynamic Parameter");
		
		AtvChannel_BP_C_Set_Material_Dynamic_Parameter_Params params {};
		params.Height = Height;
		params.ChromaticAberation = ChromaticAberation;
		params.NoiseDeform = NoiseDeform;
		params.RefreshJumpLuminosity = RefreshJumpLuminosity;
		params.Interlace = Interlace;
		params.TVmovie = TVmovie;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayOnNarrator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::PlaySoundFromTV(class UAkAudioEvent* Sound, bool PlayOnNarrator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlaySoundFromTV");
		
		AtvChannel_BP_C_PlaySoundFromTV_Params params {};
		params.Sound = Sound;
		params.PlayOnNarrator = PlayOnNarrator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Data_Table                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LoopSingleAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OnlySingleRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::PlayRandomAnim(class UDataTable* Data_Table, bool LoopSingleAnimation, bool OnlySingleRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayRandomAnim");
		
		AtvChannel_BP_C_PlayRandomAnim_Params params {};
		params.Data_Table = Data_Table;
		params.LoopSingleAnimation = LoopSingleAnimation;
		params.OnlySingleRow = OnlySingleRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::ShouldLoopAnim(bool* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ShouldLoopAnim");
		
		AtvChannel_BP_C_ShouldLoopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ValidateTexture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::ValidateTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ValidateTexture");
		
		AtvChannel_BP_C_ValidateTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  Data_Table                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::GetRandomDataTableRow(class UDataTable* Data_Table, class FName* RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.GetRandomDataTableRow");
		
		AtvChannel_BP_C_GetRandomDataTableRow_Params params {};
		params.Data_Table = Data_Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RowName != nullptr)
			*RowName = params.RowName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::Create_Dynamic_Texture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Create Dynamic Texture");
		
		AtvChannel_BP_C_Create_Dynamic_Texture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::Set_Test_Screen_Mat(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Set Test Screen Mat");
		
		AtvChannel_BP_C_Set_Test_Screen_Mat_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UserConstructionScript");
		
		AtvChannel_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ReceiveBeginPlay");
		
		AtvChannel_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UpdateText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Font_Scale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::UpdateText(const class FText& Text, float Font_Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UpdateText");
		
		AtvChannel_BP_C_UpdateText_Params params {};
		params.Text = Text;
		params.Font_Scale = Font_Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.startMovie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTextAnim_Struc>                     TextAnim                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UMediaSource*                                Movie                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               MovieSound                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::startMovie(TArray<struct FTextAnim_Struc> TextAnim, class UMediaSource* Movie, class UAkAudioEvent* MovieSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.startMovie");
		
		AtvChannel_BP_C_startMovie_Params params {};
		params.TextAnim = TextAnim;
		params.Movie = Movie;
		params.MovieSound = MovieSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FTextAnim_Struc>                     TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AtvChannel_BP_C::StartTextAnimation(TArray<struct FTextAnim_Struc> TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.StartTextAnimation");
		
		AtvChannel_BP_C_StartTextAnimation_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.EndMovie
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::EndMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.EndMovie");
		
		AtvChannel_BP_C_EndMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::PlayCurrentAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayCurrentAnim");
		
		AtvChannel_BP_C_PlayCurrentAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::CreateTextTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.CreateTextTexture");
		
		AtvChannel_BP_C_CreateTextTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Noise                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Rorschard                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MovieFlash                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AtvChannel_BP_C::UpdateMaterialParameter(float TextColor, class UTexture* Texture, bool Noise, bool Rorschard, bool MovieFlash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.UpdateMaterialParameter");
		
		AtvChannel_BP_C_UpdateMaterialParameter_Params params {};
		params.TextColor = TextColor;
		params.Texture = Texture;
		params.Noise = Noise;
		params.Rorschard = Rorschard;
		params.MovieFlash = MovieFlash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::DrawRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.DrawRenderTarget");
		
		AtvChannel_BP_C_DrawRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::Event_OnCurrentlyPlayingDataChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.Event_OnCurrentlyPlayingDataChanged");
		
		AtvChannel_BP_C_Event_OnCurrentlyPlayingDataChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinished
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::OnAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.OnAnimationFinished");
		
		AtvChannel_BP_C_OnAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.PlayCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::PlayCountdown(int32_t Countdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.PlayCountdown");
		
		AtvChannel_BP_C_PlayCountdown_Params params {};
		params.Countdown = Countdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.stopMovie
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::stopMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.stopMovie");
		
		AtvChannel_BP_C_stopMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.loopAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::loopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.loopAnim");
		
		AtvChannel_BP_C_loopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.StopAnim
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::StopAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.StopAnim");
		
		AtvChannel_BP_C_StopAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ReceiveEndPlay");
		
		AtvChannel_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.OnLoop
	 * 		Flags  -> ()
	 */
	void AtvChannel_BP_C::OnLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.OnLoop");
		
		AtvChannel_BP_C_OnLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtvChannel_BP_C::ExecuteUbergraph_tvChannel_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tvChannel_BP.tvChannel_BP_C.ExecuteUbergraph_tvChannel_BP");
		
		AtvChannel_BP_C_ExecuteUbergraph_tvChannel_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AtvChannel_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtvChannel_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass tvChannel_BP.tvChannel_BP_C");
		return ptr;
	}

}


