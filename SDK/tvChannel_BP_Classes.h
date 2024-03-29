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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass tvChannel_BP.tvChannel_BP_C
	 * Size -> 0x01B8 (FullSize[0x0498] - InheritedSize[0x02E0])
	 */
	class AtvChannel_BP_C : public ARBNarrativeScreenChannel
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                TVScreenTest;                                            // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      animTime;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentText;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  ScreenMaterial;                                          // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            DefaultImage;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            StandByImage;                                            // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                StandByText;                                             // 0x0320(0x0018) Edit, BlueprintVisible
		float                                                      StandByTextColor;                                        // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StandByFontScale;                                        // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           RenderTextureSize;                                       // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ScaleFactor;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ImageUVSize;                                             // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPixelFormat                                               Pixel_Format;                                            // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y4H0[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBox                                            TextBox;                                                 // 0x0360(0x0090) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UCanvasRenderTarget2D*                               RenterTexture;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMovie;                                                 // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OUQ6[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastRow;                                                 // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBinkMediaPlayer*                                    BinkMediaPlayer;                                         // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            tvMovieTexture;                                          // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasCreatedTexture;                                       // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IAQO[0x3];                                   // 0x0411(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BaseRenderTextureSize;                                   // 0x0414(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenRefreshLuminosity;                                 // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenChromaticAberation;                                // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenNoiseDeform;                                       // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenDeform;                                            // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScreenInterlace;                                         // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ScreenMaterialDynamic;                                   // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                group;                                                   // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTextAnim_Struc>                             Countdown;                                               // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSilent;                                                // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5TIC[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       IdleSoundStart;                                          // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       IdleSoundStop;                                           // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLoopingIdleSoundPlaying;                               // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseMovieAsFlash;                                         // 0x0469(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsManuallyMuted;                                         // 0x046A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugShowTvScreen;                                       // 0x046B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LastIndex;                                               // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayingMovie;                                          // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K4Z5[0x7];                                   // 0x0471(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTextAnim_Struc>                             Target_Array;                                            // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FTextAnim_Struc>                             animationArray;                                          // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetElapsedAnimTime(float* Time);
		void Set_Material_Dynamic_Parameter(float Height, float ChromaticAberation, float NoiseDeform, float RefreshJumpLuminosity, float Interlace, class UTexture* TVmovie);
		void PlaySoundFromTV(class UAkAudioEvent* Sound, bool PlayOnNarrator);
		void PlayRandomAnim(class UDataTable* Data_Table, bool LoopSingleAnimation, bool OnlySingleRow);
		void ShouldLoopAnim(bool* Value);
		void ValidateTexture();
		void GetRandomDataTableRow(class UDataTable* Data_Table, class FName* RowName);
		void Create_Dynamic_Texture();
		void Set_Test_Screen_Mat(class UMaterialInterface* Material);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void UpdateText(const class FText& Text, float Font_Scale);
		void startMovie(TArray<struct FTextAnim_Struc> TextAnim, class UMediaSource* Movie, class UAkAudioEvent* MovieSound);
		void StartTextAnimation(TArray<struct FTextAnim_Struc> TargetArray);
		void EndMovie();
		void PlayCurrentAnim();
		void CreateTextTexture();
		void UpdateMaterialParameter(float TextColor, class UTexture* Texture, bool Noise, bool Rorschard, bool MovieFlash);
		void DrawRenderTarget();
		void Event_OnCurrentlyPlayingDataChanged();
		void OnAnimationFinished();
		void PlayCountdown(int32_t Countdown);
		void stopMovie();
		void loopAnim();
		void StopAnim();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnLoop();
		void ExecuteUbergraph_tvChannel_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
