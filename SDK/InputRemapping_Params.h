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
	 * Function InputRemapping.InputRemappingNodes.RemoveAxisMapping
	 */
	struct UInputRemappingNodes_RemoveAxisMapping_Params
	{
	public:
		struct FAxisMappingStruct                                  MappingData;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.RemoveActionMapping
	 */
	struct UInputRemappingNodes_RemoveActionMapping_Params
	{
	public:
		struct FActionMappingStruct                                MappingData;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.RebindAxisMapping
	 */
	struct UInputRemappingNodes_RebindAxisMapping_Params
	{
	public:
		struct FAxisMappingStruct                                  AxisMapping;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FAxisMappingStruct                                  NewData;                                                 // 0x0028(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.RebindActionMapping
	 */
	struct UInputRemappingNodes_RebindActionMapping_Params
	{
	public:
		struct FActionMappingStruct                                ActionMapping;                                           // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		struct FActionMappingStruct                                NewData;                                                 // 0x0028(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.GetAllAxisMappings
	 */
	struct UInputRemappingNodes_GetAllAxisMappings_Params
	{
	public:
		struct FAxisMappingStruct                                  FilterData;                                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<EAxisMappingFilter>                                 Filters;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CG7I[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAxisMappingStruct>                          AxisMappings;                                            // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.GetAllActionMappings
	 */
	struct UInputRemappingNodes_GetAllActionMappings_Params
	{
	public:
		struct FActionMappingStruct                                FilterData;                                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		TArray<EActionMappingFilter>                               Filters;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PJ1W[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FActionMappingStruct>                        ActionMappings;                                          // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.CreateNewAxisMapping
	 */
	struct UInputRemappingNodes_CreateNewAxisMapping_Params
	{
	public:
		struct FAxisMappingStruct                                  MappingData;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.CreateNewActionMapping
	 */
	struct UInputRemappingNodes_CreateNewActionMapping_Params
	{
	public:
		struct FActionMappingStruct                                MappingData;                                             // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.AxisMappingNotEqualActionMapping
	 */
	struct UInputRemappingNodes_AxisMappingNotEqualActionMapping_Params
	{
	public:
		struct FAxisMappingStruct                                  A;                                                       // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAxisMappingStruct                                  B;                                                       // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.AxisMappingEqualActionMapping
	 */
	struct UInputRemappingNodes_AxisMappingEqualActionMapping_Params
	{
	public:
		struct FAxisMappingStruct                                  A;                                                       // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAxisMappingStruct                                  B;                                                       // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.ActionMappingNotEqualActionMapping
	 */
	struct UInputRemappingNodes_ActionMappingNotEqualActionMapping_Params
	{
	public:
		struct FActionMappingStruct                                A;                                                       // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActionMappingStruct                                B;                                                       // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function InputRemapping.InputRemappingNodes.ActionMappingEqualActionMapping
	 */
	struct UInputRemappingNodes_ActionMappingEqualActionMapping_Params
	{
	public:
		struct FActionMappingStruct                                A;                                                       // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FActionMappingStruct                                B;                                                       // 0x0028(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
