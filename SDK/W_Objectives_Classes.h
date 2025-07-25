﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass W_Objectives.W_Objectives_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UW_Objectives_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        PopulateBox;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FMargin                                             ObjectiveMargins;                                        // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		TArray<class UClass*>                                      PreviewObjectives;                                       // 0x0280(0x0010) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void Build_Objective_List();
		void ExecuteUbergraph_W_Objectives(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
