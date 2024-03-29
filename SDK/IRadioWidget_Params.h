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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function IRadioWidget.IRadioWidget_C.Equals
	 */
	struct UIRadioWidget_C_Equals_Params
	{
	public:
		unsigned char                                              UnknownData_TRMO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IRadioWidget.IRadioWidget_C.OnRadioDeselected
	 */
	struct UIRadioWidget_C_OnRadioDeselected_Params
	{	};

	/**
	 * Function IRadioWidget.IRadioWidget_C.OnRadioSelected
	 */
	struct UIRadioWidget_C_OnRadioSelected_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
