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
	 * Function W_Text.W_Text_C.SetTextJustification
	 */
	struct UW_Text_C_SetTextJustification_Params
	{
	public:
		ETextJustify                                               Justification;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetOutline
	 */
	struct UW_Text_C_SetOutline_Params
	{
	public:
		struct FFontOutlineSettings                                FontOutlineSettings;                                     // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetFont
	 */
	struct UW_Text_C_SetFont_Params
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetFontSize
	 */
	struct UW_Text_C_SetFontSize_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9F9Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Text.W_Text_C.SetTextTransform
	 */
	struct UW_Text_C_SetTextTransform_Params
	{
	public:
		ETextTransformPolicy                                       TextTransform;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetTextShadow
	 */
	struct UW_Text_C_SetTextShadow_Params
	{
	public:
		struct FCoreUObject_FVector2D                              ShadowOffset;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ShadowColor;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetTextLetterSpacing
	 */
	struct UW_Text_C_SetTextLetterSpacing_Params
	{
	public:
		int32_t                                                    LetterSpacing;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8C73[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Text.W_Text_C.SetTextColor
	 */
	struct UW_Text_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.GetText
	 */
	struct UW_Text_C_GetText_Params
	{
	public:
		class FText                                                CurrentText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_Text.W_Text_C.UpdateText
	 */
	struct UW_Text_C_UpdateText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Text.W_Text_C.TruncateText
	 */
	struct UW_Text_C_TruncateText_Params
	{
	public:
		bool                                                       Truncate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SKYI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CharacterLimit;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TruncationCharacters;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                TruncatedText;                                           // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function W_Text.W_Text_C.UpdateFont
	 */
	struct UW_Text_C_UpdateFont_Params
	{
	public:
		struct FSlateFontInfo                                      Font;                                                    // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetStyle
	 */
	struct UW_Text_C_SetStyle_Params
	{
	public:
		struct FST_Style_Text                                      TextStyle;                                               // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_Text.W_Text_C.SetText
	 */
	struct UW_Text_C_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_Text.W_Text_C.PreConstruct
	 */
	struct UW_Text_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Text.W_Text_C.Construct
	 */
	struct UW_Text_C_Construct_Params
	{	};

	/**
	 * Function W_Text.W_Text_C.ExecuteUbergraph_W_Text
	 */
	struct UW_Text_C_ExecuteUbergraph_W_Text_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
