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
	 * BlueprintGeneratedClass BF_Triangulate.BF_Triangulate_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBF_Triangulate_C : public UBlueprintFunctionLibrary
	{
	public:
		bool PointInTriangle(const struct FCoreUObject_FVector2D& P, const struct FCoreUObject_FVector2D& A, const struct FCoreUObject_FVector2D& B, const struct FCoreUObject_FVector2D& C, bool IgnoreSide, class UObject* __WorldContext);
		void LineSegIntersectionTest(const struct FCoreUObject_FVector2D& a1, const struct FCoreUObject_FVector2D& b1, const struct FCoreUObject_FVector2D& a2, const struct FCoreUObject_FVector2D& b2, bool IgnoreSide, class UObject* __WorldContext, bool* Return);
		void FlipPoligon(TArray<struct FST_VertexID>* vert, class UObject* __WorldContext, TArray<struct FST_VertexID>* Return);
		void RecursiveTriangulate(TArray<struct FST_VertexID>* vert, TArray<struct FST_VertexID>* FullSetVert, TArray<struct FST_LineSegment>* BuiltSeg, int32_t Thread, class UObject* __WorldContext, TArray<int32_t>* Triangles);
		void LoopArrayIndex(int32_t Index, int32_t Shift, int32_t ArrayLength, class UObject* __WorldContext, int32_t* Return);
		void TriangulatePolygon(TArray<struct FCoreUObject_FVector>* Vertices, class UObject* __WorldContext, TArray<int32_t>* Triangles);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
