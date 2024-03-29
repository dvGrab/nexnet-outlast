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
	 * Function W_RadioContainer.W_RadioContainer_C.OnNewChildSelected
	 */
	struct UW_RadioContainer_C_OnNewChildSelected_Params
	{
	public:
		unsigned char                                              UnknownData_HGTJ[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_RadioContainer.W_RadioContainer_C.RegisterRadioChild
	 */
	struct UW_RadioContainer_C_RegisterRadioChild_Params
	{
	public:
		unsigned char                                              UnknownData_3FSI[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
