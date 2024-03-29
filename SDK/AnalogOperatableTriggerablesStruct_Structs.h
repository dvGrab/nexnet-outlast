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
	 * UserDefinedStruct AnalogOperatableTriggerablesStruct.AnalogOperatableTriggerablesStruct
	 * Size -> 0x0010
	 */
	struct FAnalogOperatableTriggerablesStruct
	{
	public:
		class ARBTriggerable*                                      RBTriggerable_2_B32157E24F755840893559A583D2B7A2;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOn_7_F6EE68124EDCD0BB1C897087B8FF01BE;               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y092[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActivateAt_11_3187D0584BBE4BDDECCF6B9F0FC2035D;          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
