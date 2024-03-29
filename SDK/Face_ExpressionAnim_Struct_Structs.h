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
	 * UserDefinedStruct Face_ExpressionAnim_Struct.Face_ExpressionAnim_Struct
	 * Size -> 0x0320
	 */
	struct FFace_ExpressionAnim_Struct
	{
	public:
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Default_58_599E99054D8D9DA09BBFC2A0DD36563F;             // 0x0000(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Neutral_60_5BBE161447B806ED871D7F89816272C5;             // 0x0050(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Angry_70_BE454C4E46AE8A5AC15355B7E14E816B;               // 0x00A0(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Sad_71_30C56BFD4882C69171652E99784BD99E;                 // 0x00F0(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Pain_72_35EE47684EBF85E2148C9DB516DA9866;                // 0x0140(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             PainIntense_80_2669DB0945500A1E6CEB12B77A39A6A8;         // 0x0190(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Struggle_74_589C377D4B723CA6094FC9B1CC7F8F62;            // 0x01E0(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Happy_81_E6AC79C0434BE0ACF6B9678F7F760B2C;               // 0x0230(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Surprised_76_920635304E5E429FECDDD1A7BFACD79C;           // 0x0280(0x0050) Edit, BlueprintVisible
		TMap<EFace_AllList_Enum, class UAnimSequence*>             Tired_73_48A49A9D4636F3DE918D72A3BD961BAE;               // 0x02D0(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
