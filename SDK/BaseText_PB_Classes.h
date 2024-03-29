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
	 * BlueprintGeneratedClass BaseText_PB.BaseText_PB_C
	 * Size -> 0x0170 (FullSize[0x03B8] - InheritedSize[0x0248])
	 */
	class ABaseText_PB_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 Template;                                                // 0x0260(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FVector2D                                           RenderTextureSize;                                       // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Material;                                                // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCanvasRenderTarget2D*                               CanvasRender;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              KerningScale;                                            // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           BaseRenderTextureSize;                                   // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentKenningScale;                                     // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SR9P[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvas*                                             Canvas;                                                  // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTextBox>                                    TextBox;                                                 // 0x02B0(0x0010) Edit, BlueprintVisible
		TArray<struct FVector2D>                                   TextBoxSizeXY;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FIconBox>                                    Icon;                                                    // 0x02D0(0x0010) Edit, BlueprintVisible
		struct FVector2D                                           ScreenSize;                                              // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ScaleFactor;                                             // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ScaleRatio;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaterialIndex;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMimic;                                                 // 0x02FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_149U[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            newMaterial;                                             // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABaseText_PB_C*                                      ParentToMimic;                                           // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            PrintTexture;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           PrintTexture_UVSize;                                     // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           PrintTexture_UVOffset;                                   // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPixelFormat                                               PixelFormat;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FRJH[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseText_PB_C*>                              MimicItems;                                              // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class ABaseText_PB_C*>                              ItemToRemove;                                            // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FIconBox>                                    AllIcon;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FTextBox>                                    AllTextBox;                                              // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                TextureParameter;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TextureUVParameter;                                      // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  TextBackgroundMaterial;                                  // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KerningJustifyMax;                                       // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KerningJustifyMin;                                       // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFont*                                               _RenderFont;                                             // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           _ScaleFont;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            IconMat;                                                 // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Count;                                                   // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4HR7[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  SelectedMaterial;                                        // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Find_Font_Scale(TArray<class FString>* string, class UFont* RenderFont, const struct FVector2D& Scale, float Kerning, const struct FVector2D& BoxSize, float* NewParam);
		void AddItemToMimic(class ABaseText_PB_C* ItemToFind);
		void Mimic(class UMaterialInterface* Material);
		void SetArray();
		void SetTexture(class UTexture* PrintTexture);
		void AdjustingTextLines(const class FString& Text, const struct FVector2D& BoxSize, class UCanvas* Canvas, class UFont* RenderFont, float Kerning, const struct FVector2D& ScaleFont, TArray<class FString>* NewParam1, float* _ScaleFont);
		void DrawPage(const class FString& RenderText, const struct FVector4& Borders, class UFont* RenderFont, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, const struct FLinearColor& ShadowColor, float Kerning, float LineSpace, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor, const struct FVector2D& BoxSize);
		void UserConstructionScript();
		void CustomEvent_1(class UCanvas* Canvas, int32_t Width, int32_t Height);
		void CreateTextTexture();
		void ReceiveBeginPlay();
		void UpdateMimic();
		void RedrawText();
		void CreateDynamicMaterial();
		void ExecuteUbergraph_BaseText_PB(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
