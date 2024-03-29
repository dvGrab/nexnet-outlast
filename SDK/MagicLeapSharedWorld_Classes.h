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
	 * Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
	 * Size -> 0x00D0 (FullSize[0x0400] - InheritedSize[0x0330])
	 */
	class AMagicLeapSharedWorldGameMode : public AGameMode
	{
	public:
		struct FMagicLeapSharedWorldSharedData                     SharedWorldData;                                         // 0x0330(0x0010) BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewLocalDataFromClients;                               // 0x0340(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      PinSelectionConfidenceThreshold;                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXG0[0xA4];                                  // 0x0354(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMagicLeapSharedWorldPlayerController*               ChosenOne;                                               // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool SendSharedWorldDataToClients();
		void SelectChosenOne();
		void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
		void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
	 * Size -> 0x0040 (FullSize[0x02E8] - InheritedSize[0x02A8])
	 */
	class AMagicLeapSharedWorldGameState : public AGameState
	{
	public:
		struct FMagicLeapSharedWorldSharedData                     SharedWorldData;                                         // 0x02A8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FMagicLeapSharedWorldAlignmentTransforms            AlignmentTransforms;                                     // 0x02B8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSharedWorldDataUpdated;                                // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAlignmentTransformsUpdated;                            // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void OnReplicate_SharedWorldData();
		void OnReplicate_AlignmentTransforms();
		void MagicLeapSharedWorldEvent__DelegateSignature();
		struct FTransform CalculateXRCameraRootTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
	 * Size -> 0x0018 (FullSize[0x05B0] - InheritedSize[0x0598])
	 */
	class AMagicLeapSharedWorldPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_PC0P[0x18];                                  // 0x0598(0x0018) MISSED OFFSET (PADDING)

	public:
		void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
		void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
		bool IsChosenOne();
		void ClientSetChosenOne(bool bChosenOne);
		void ClientMarkReadyForSendingLocalData();
		bool CanSendLocalDataToServer();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
