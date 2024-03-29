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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass AIAction_Startle.AIAction_Startle_C
	 * Size -> 0x002D (FullSize[0x0075] - InheritedSize[0x0048])
	 */
	class UAIAction_Startle_C : public UAIAction
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bIsRightStartle;                                         // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_URFA[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartleAnimation;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FCoreUObject_FVector                                StimulusLocation;                                        // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTrackingTarget;                                         // 0x0074(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanStartle(bool* Return_Value);
		void AngleToAnimation(float InAngle, bool bRight, class FString* Return_Value);
		void IsLocationRightOfUs(const struct FCoreUObject_FVector& InLocation, bool* Return_Value);
		bool ShouldPerformAction();
		void BeginAction_Blueprint();
		void InitAction_Blueprint(class ACyberneticController* Controller);
		void Tick_Blueprint(float DeltaTime);
		void ResetData();
		void ExecuteUbergraph_AIAction_Startle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
