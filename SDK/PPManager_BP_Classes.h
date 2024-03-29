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
	 * BlueprintGeneratedClass PPManager_BP.PPManager_BP_C
	 * Size -> 0x017C (FullSize[0x03C4] - InheritedSize[0x0248])
	 */
	class APPManager_BP_C : public ARBPostProcessUpdateManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      FX_Hit_TL_NewTrack_0_B57CAFE54A8B999E18CC5DA1AAB74DB1;   // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FX_Hit_TL__Direction_B57CAFE54A8B999E18CC5DA1AAB74DB1;   // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QZ1A[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FX_Hit_TL;                                               // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FX_WakeUp_TL_NewTrack_0_2212E6434646E7D0E5FB40A24C17E1E2; // 0x0270(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FX_WakeUp_TL__Direction_2212E6434646E7D0E5FB40A24C17E1E2; // 0x0274(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CY3V[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FX_WakeUp_TL;                                            // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_inFocus_NewTrack_0_ACB905814E0B0B7B864472BC02D3CA55;  // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_inFocus_Blend_ACB905814E0B0B7B864472BC02D3CA55;       // 0x0284(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_inFocus__Direction_ACB905814E0B0B7B864472BC02D3CA55;  // 0x0288(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KO15[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_inFocus;                                              // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvExit_TL_UV_C77ACCC546F2A7F1CE0A3DAFBDE18CEE;           // 0x0298(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvExit_TL_FocalDistance_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x029C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvExit_TL_Black_C77ACCC546F2A7F1CE0A3DAFBDE18CEE;        // 0x02A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvExit_TL_Blur_C77ACCC546F2A7F1CE0A3DAFBDE18CEE;         // 0x02A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvExit_TL_DoubleVision_C77ACCC546F2A7F1CE0A3DAFBDE18CEE; // 0x02A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         nvExit_TL__Direction_C77ACCC546F2A7F1CE0A3DAFBDE18CEE;   // 0x02AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M5MR[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  nvExit_TL;                                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_White_D0C479F54AFB3F9F5915F18D719266F7;       // 0x02B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_NV_Flash_D0C479F54AFB3F9F5915F18D719266F7;    // 0x02BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_FocalDistance_D0C479F54AFB3F9F5915F18D719266F7; // 0x02C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_Exposition_D0C479F54AFB3F9F5915F18D719266F7;  // 0x02C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_Blur_D0C479F54AFB3F9F5915F18D719266F7;        // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvEnter_TL_DoubleVision_D0C479F54AFB3F9F5915F18D719266F7; // 0x02CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         nvEnter_TL__Direction_D0C479F54AFB3F9F5915F18D719266F7;  // 0x02D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IZGV[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  nvEnter_TL;                                              // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Density_754EF43147DE172C96E7C49DB7B7D5B6;     // 0x02E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_754EF43147DE172C96E7C49DB7B7D5B6;  // 0x02E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SK4M[0x3];                                   // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_Spook01_Blend_E7E483AF40D2178EA14504A6D0309303;       // 0x02F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_Spook01__Direction_E7E483AF40D2178EA14504A6D0309303;  // 0x02F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H3ZL[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_Spook01;                                              // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_WhiteFadeOut_Blend_5A85C2A143557A30588EA087FA49DDA1;  // 0x0300(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_WhiteFadeOut__Direction_5A85C2A143557A30588EA087FA49DDA1; // 0x0304(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H2LU[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_WhiteFadeOut;                                         // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TL_WhiteFadeIn_Blend_2CF0231D4859F6655484A8AD69175B7F;   // 0x0310(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TL_WhiteFadeIn__Direction_2CF0231D4859F6655484A8AD69175B7F; // 0x0314(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_13DO[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TL_WhiteFadeIn;                                          // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UActorComponent*>                             CA;                                                      // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       FX_FlashWhite_On;                                        // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FX_FadeWhite_On;                                         // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FX_PsySpook_On;                                          // 0x0332(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FX_GetGased_On;                                          // 0x0333(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FX_nv_On;                                                // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XC5N[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedBlendable                                  FX_PsySpook_Mat;                                         // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWeightedBlendable                                  FX_GetGas_Mat;                                           // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FWeightedBlendable                                  FX_Double_Vision_Mat;                                    // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      FX_FadeWhiteExpComp;                                     // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXXV[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedBlendable>                          Material;                                                // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PsySpookFOVScale;                                        // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PsySpookFarBlurSize;                                     // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PsyFocalDistance;                                        // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvFlashExpComp;                                          // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvFlashDistance;                                         // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvFlashFOVScale;                                         // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      nvFlashNearBlurSize;                                     // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FX_InFocus_On;                                           // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IM0U[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InFocusNearBlurSize;                                     // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InFocusFOVScale;                                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InFocusFocalDistance;                                    // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InFocusFarBlurSize;                                      // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InFocusFocalRegion;                                      // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bMansionIntroOn;                                         // 0x03B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MPAP[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FarTransitionRegion;                                     // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFX_Hit;                                                 // 0x03BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GJX7[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      hitExpComp;                                              // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void debug();
		void Remove_PP_Override();
		void OverridePP(struct FPostProcessSettings* PP);
		void TL_WhiteFadeIn__FinishedFunc();
		void TL_WhiteFadeIn__UpdateFunc();
		void TL_WhiteFadeOut__FinishedFunc();
		void TL_WhiteFadeOut__UpdateFunc();
		void TL_Spook01__FinishedFunc();
		void TL_Spook01__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void nvEnter_TL__FinishedFunc();
		void nvEnter_TL__UpdateFunc();
		void nvExit_TL__FinishedFunc();
		void nvExit_TL__UpdateFunc();
		void TL_inFocus__FinishedFunc();
		void TL_inFocus__UpdateFunc();
		void FX_WakeUp_TL__FinishedFunc();
		void FX_WakeUp_TL__UpdateFunc();
		void FX_Hit_TL__FinishedFunc();
		void FX_Hit_TL__UpdateFunc();
		void FX_FadeWhiteOut(float MinExp, float MaxExp, float TimeFadeOut);
		void FX_FadeWhiteIn(float MinExp, float MaxExp, float TimeFadeIn);
		void FX_PsySpook(float SpookTime, class UObject* PP_Material);
		void FX_GetGas();
		void ReceiveTick(float DeltaSeconds);
		void FX_WhiteFlash(float MaxExp, float TimeFadeIn, float TimeFadeOut, float DelayTimeOut);
		void OnExitNightVision();
		void OnEnterNightVision();
		void FX_InFocus(float delay, float blendTime, float MinFocalDistance, float MaxFocalDistance, float MinFOVScale, float MaxFOVScale, float NearBlurSize, float FarBlurSize, float MinFocalRegion, float MaxFocalRegion);
		void FX_SetMansionDOFEnabled();
		void FX_PlayMansionDOFEaseOut();
		void FX_Hit(float MaxExp);
		void ExecuteUbergraph_PPManager_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
