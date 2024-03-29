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
	 * BlueprintGeneratedClass B_BackgroundProceduralBuilding.B_BackgroundProceduralBuilding_C
	 * Size -> 0x0354 (FullSize[0x0574] - InheritedSize[0x0220])
	 */
	class AB_BackgroundProceduralBuilding_C : public AActor
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProceduralMeshComponent*                            Building;                                                // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UProceduralMeshComponent*                            TempProceduralBuilding;                                  // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Snap_Grid;                                               // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Snap_Mesh_Spline;                                        // 0x0244(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KP8L[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TempTris;                                                // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector>                        TempMeshVertices;                                        // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<float>                                              TempDistanceBtwPoints;                                   // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector2D>                      TempUV;                                                  // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempNumberCurvePoints;                                   // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Button_Snap_Object_in_World;                             // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Apply_Presets_Button;                                    // 0x028D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Only_One_Type_Presets;                                   // 0x028E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Random_Button;                                           // 0x028F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Border_Type_On_UV;                                       // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Roof_On;                                                 // 0x0294(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66OH[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Roof_Border_Type_Material;                               // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U0E3[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstance*>                           Top_Roof_Materials;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstance*                                   TopRoofMaterial;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Border_Variation;                                        // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JMY8[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInstance*>                           BorderMaterials;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstance*>                           TempBorderMaterial;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstance*>                           Roof_Materials;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Roof_Type_Material;                                      // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YVJE[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   RoofMaterial;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MaterialFound;                                           // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K49U[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   TempMaterial;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstance*>                           Ground_Floor_Materials;                                  // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstance*                                   GroundFloorMaterial;                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstance*>                           Facades_Materials;                                       // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ArrayNumberHorizontal_GF_Windows;                        // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UMaterialInstance*>                           TempFacadesMaterial;                                     // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ArrayNumberHorizontalWindows;                            // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Overwrite_GroundFloor_X_Windows;                         // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MUM3[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   Overwrite_GroundFloor_Material;                          // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Overwrite_X_Windows;                                     // 0x0378(0x0010) Edit, BlueprintVisible
		TArray<class UMaterialInstance*>                           Overwrite_Facade_Material;                               // 0x0388(0x0010) Edit, BlueprintVisible
		TArray<class UMaterialInstance*>                           Overwrite_Border_Material;                               // 0x0398(0x0010) Edit, BlueprintVisible
		class UMaterialInstance*                                   Overwrite_Roof_Material;                                 // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Overwrite_Roof_Top_Material;                             // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FCoreUObject_FVector>                        RoofMeshVerticesPrimary;                                 // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector>                        RoofBackMeshVertices;                                    // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector>                        RoofTopMeshVertices;                                     // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector>                        RoofMeshVertices;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector2D>                      RoofTopUV;                                               // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector2D>                      RoofUV;                                                  // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector2D>                      RoofBackUV;                                              // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            Array_GF_Height;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    RealGroundFloorHeight;                                   // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentHeight;                                           // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    X_Windows;                                               // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempDistanceUV;                                          // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Border_Roof_Height;                                      // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondAngle;                                             // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstAngle;                                              // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FinalAngle;                                              // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Border_Roof_Width;                                       // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RealHeight;                                              // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempVerticesRoofMissed;                                  // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UA50[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoreUObject_FVector>                        RoofMeshVerticesCurves;                                  // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TempDistanceSegmentation;                                // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSectionNumber;                                    // 0x047C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempCurrentDistance;                                     // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempCurveDivisionOfTexture;                              // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempCurrentSegment;                                      // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempNumberOfSegments;                                    // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SignPlusOrMinus;                                         // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeightOffsetUV;                                          // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Debug;                                                   // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9038[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TopOffsetUV;                                             // 0x049C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LateralOffsetUV;                                         // 0x04A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9KD4[0x4];                                   // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RoofTris;                                                // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCoreUObject_FVector                                TempLastDirection;                                       // 0x04B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCoreUObject_FVector                                TempCurrentDirection;                                    // 0x04C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCoreUObject_FVector                                LastLocationPosition;                                    // 0x04D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempForTris;                                             // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FProcMeshTangent>                            TempTangents;                                            // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCoreUObject_FVector>                        TempNormals;                                             // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentSectionFinalBuilding;                             // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_GroundSection                                   Section_Ground_Floor;                                    // 0x0504(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_26Y8[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FST_Section>                                 Sections_Floors;                                         // 0x0518(0x0010) Edit, BlueprintVisible
		int32_t                                                    TempCurrentIndex;                                        // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Temp_VerticesForRoof;                                    // 0x052C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SMOJ[0x3];                                   // 0x052D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FST_PresetsBuilding>                         Presets;                                                 // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Temp_Integer;                                            // 0x0540(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_RandomOptions                                   Random_Options;                                          // 0x0544(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Concave;                                                 // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_Shape                                                    Shape_Type;                                              // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PXDU[0x3];                                   // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Length_Curve_Segment;                                    // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Dimension1;                                              // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Dimension2;                                              // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempDimension1;                                          // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempDimension2;                                          // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CircleSegmentation;                                      // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConvexConcave(int32_t PreviousPoint, int32_t Point, int32_t NextPoint);
		void Apply_Presets_Function();
		void MergeSectionByMaterial(class UMaterialInstance* Material_Of_Section);
		void DebugArray(TArray<struct FCoreUObject_FVector>* Array);
		void SectionFloor(class UMaterialInstance* Material_Section, int32_t Height, int32_t Height_Offset, bool Vertices_for_Roof, bool No_Mesh_Generated, float Lateral_Offset_UV, bool UV_Strectched_Height, bool UV_Border);
		void CreateFacadeCurve(int32_t SectionIndex, int32_t IndexPoint1, int32_t IndexPoint2, int32_t Height, int32_t Height_Offset, bool VerticesForRoof, bool NoMeshGenerated, bool UV_Border, bool UV_Stretched_Height, float Lateral_Offset_UV);
		void CreateFacade(int32_t SectionIndex, int32_t Point1, int32_t Point2, int32_t Height, int32_t Height_Offset, bool Vertices_Roof, bool No_Mesh_Generated, bool UV_Border, bool UV_Stretched_Height, float Lateral_Offset_UV);
		void Search_Material(int32_t Types, int32_t Variations, TArray<class UMaterialInstance*>* Array_Material, class UMaterialInstance** FinalMaterial);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
