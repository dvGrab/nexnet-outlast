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
	 * AnimBlueprintGeneratedClass ChessPanel_GhostAnimBP.ChessPanel_GhostAnimBP_C
	 * Size -> 0x3071 (FullSize[0x3359] - InheritedSize[0x02E8])
	 */
	class UChessPanel_GhostAnimBP_C : public URBGhostAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FK79[0x8];                                   // 0x02E8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02F8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x0328(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x0350(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x0378(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x03A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x03C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x03F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x0418(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x0440(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x0468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x0490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x04B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x04E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0508(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0530(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0558(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x05A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x05D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x05F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0620(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0648(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0670(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0698(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x06C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x06E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x0710(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x0790(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x0838(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x08B8(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x0960(0x00A8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x0A08(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x0AF0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x0BD8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x0C08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x0C88(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x0D30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0DB0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0DE0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x0E08(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x0EF0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x0FD8(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x1080(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x10B0(0x00A8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x1158(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x1240(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x1328(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x1358(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x13D8(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x1480(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1500(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x1530(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x15B0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x1630(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x16D8(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x1780(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x1800(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x1880(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1928(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x1958(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x19D8(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x1A80(0x0080)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x1B00(0x00B8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1BB8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x1C38(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1CE0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1D60(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x1DE0(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x1E88(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1F08(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1F38(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x1FB8(0x00A8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x2060(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x2108(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x2188(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x2270(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2358(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x2400(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2430(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x24B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x24E0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x2560(0x00A8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2608(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2688(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x26B8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x27A0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x2888(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2930(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2960(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x29E0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x2A60(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2B08(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2B38(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2BE8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x2D40(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x2D68(0x0020)
		unsigned char                                              UnknownData_AA78[0x8];                                   // 0x2D88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x2D90(0x01E0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x2F70(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x2F90(0x00A8)
		unsigned char                                              UnknownData_U0OD[0x8];                                   // 0x3038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x3040(0x01E0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x3220(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x3240(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x3260(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x3280(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x32A8(0x0020)
		class URBChessBoardPanelComponentBase_C*                   panel;                                                   // 0x32C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       bPlayer1;                                                // 0x32D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bWon;                                                    // 0x32D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bGameTied;                                               // 0x32D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8YEJ[0x1];                                   // 0x32D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookPitch;                                               // 0x32D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookYaw;                                                 // 0x32D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTaunting;                                             // 0x32DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1O2U[0x3];                                   // 0x32DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TauntType;                                               // 0x32E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TauntCount;                                              // 0x32E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ARBChessBoard*                                       ChessBoard;                                              // 0x32E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseIK;                                                  // 0x32F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0DXD[0x3];                                   // 0x32F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShouldMoveHandIKRoot;                                    // 0x32F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IKHandLocationWS;                                        // 0x32F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Player1HandRotation;                                     // 0x3304(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Player1IKElbowLocation;                                  // 0x3310(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Player2HandRotation;                                     // 0x331C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             Player2IKElbowLocation;                                  // 0x3328(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsLocallyControlled;                                    // 0x3334(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EChessGamePlayerAnimState                                  PlayerAnimState;                                         // 0x3335(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bGetUp;                                                  // 0x3336(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bResetMove;                                              // 0x3337(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ResetMoveTargetLocalPos;                                 // 0x3338(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ResetMoveLocationWS;                                     // 0x3344(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           BS_FocusedPos;                                           // 0x3350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFullyBlendedMovePiece;                                  // 0x3358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void UpdateResetMove(float DeltaTime);
		void InitPanelData();
		void SetHandIK(float DeltaTime);
		void ManageIK(float DeltaTime);
		void ManageLookAt();
		void Reset();
		bool FinishGhost(EGhostFinishReason finishReason, int32_t GhostFinishCustomReason);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_AD494F0644E31E08041F17AD085DAAAC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_59F4F9784B5F8694C8614BAC294CBF8E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_E1B7D4014AFA5C34E625D7A7DBF9D51A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_BlendSpacePlayer_F4B9CD8A45F0344DDE1CECA00B9AD300();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_4C33560A4AAFC6A5A42B12B5193043E1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_39CAA8F04E0434359EF16B8A82F833BE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_C9EBFC75468806B14911D49EE2295D6F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_B6D70405436D8EFBE67F00B9807B4D62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_76F6CBA34D57ED3DD6DFBEAEE55CB37D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_8D2CFEC946FEB7288E179D9F58BA2FFD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_D5D8BF244510D5CE0BDBBFB3DDB999E2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_7C247B9C4F3274E175CBD68F0C751193();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F9D509EB42025585F723D18A7073B0BE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_255CE84D4A61A87BBF29018177C50B57();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_625E10DD424F05D1CC7C8B8B6F9E134A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_A23CE4EB417B01905D1DA38AEB297B56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_92B7E6C246CF2AEB021B29A9872A68EF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_07303B3F465FE270B3C642B69EF090B4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_2FAD0A5342380D899375A0900E7EE358();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_F358446647921990ECA0BEB6DAB864E7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ChessPanel_GhostAnimBP_AnimGraphNode_TransitionResult_012879E54B7C38C0AC54A582DD040312();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BP_InitializeGhost();
		void AnimNotify_EntryDone();
		void AnimNotify_Finished();
		void AnimNotify_RandomTaunt();
		void AnimNotify_ExitState();
		void AnimNotify_WaitForOpponent();
		void AnimNotify_EndRound();
		void AnimNotify_EnteredMovePiece();
		void AnimNotify_EnteredRevertMove();
		void AnimNotify_RevertMoveFullyBlended();
		void AnimNotify_EnteredWaitForTurn();
		void AnimNotify_DoneMovingEvent();
		void AnimNotify_FullyBlendedMovePiece();
		void AnimNotify_LeftMovePiece();
		void ExecuteUbergraph_ChessPanel_GhostAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
