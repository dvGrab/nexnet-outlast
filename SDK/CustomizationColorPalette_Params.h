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
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.GetPastilleFromColor
	 */
	struct UCustomizationColorPalette_C_GetPastilleFromColor_Params
	{
	public:
		struct FRBHairColorOption                                  HairColor;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UColorPastille_C*                                    ColorPastille;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.Init
	 */
	struct UCustomizationColorPalette_C_Init_Params
	{
	public:
		class FName                                                InitialHairColorId;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.UpdateSelectedPastille
	 */
	struct UCustomizationColorPalette_C_UpdateSelectedPastille_Params
	{
	public:
		class UColorPastille_C*                                    NewSelectedPastille;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.RefreshColorList
	 */
	struct UCustomizationColorPalette_C_RefreshColorList_Params
	{	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.PreConstruct
	 */
	struct UCustomizationColorPalette_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleClicked
	 */
	struct UCustomizationColorPalette_C_OnPastilleClicked_Params
	{
	public:
		class UColorPastille_C*                                    ClickedPastille;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleUnHovered
	 */
	struct UCustomizationColorPalette_C_OnPastilleUnHovered_Params
	{	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.OnPastilleHovered
	 */
	struct UCustomizationColorPalette_C_OnPastilleHovered_Params
	{
	public:
		struct FRBHairColorOption                                  HoveredColor;                                            // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.ExecuteUbergraph_CustomizationColorPalette
	 */
	struct UCustomizationColorPalette_C_ExecuteUbergraph_CustomizationColorPalette_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorHovered__DelegateSignature
	 */
	struct UCustomizationColorPalette_C_OnHairColorHovered__DelegateSignature_Params
	{
	public:
		struct FRBHairColorOption                                  HoveredHairColor;                                        // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CustomizationColorPalette.CustomizationColorPalette_C.OnHairColorClicked__DelegateSignature
	 */
	struct UCustomizationColorPalette_C_OnHairColorClicked__DelegateSignature_Params
	{
	public:
		struct FRBHairColorOption                                  newHairColor;                                            // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
