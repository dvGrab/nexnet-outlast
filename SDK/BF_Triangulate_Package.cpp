/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.PointInTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      C                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBF_Triangulate_C::PointInTriangle(const struct FCoreUObject_FVector2D& P, const struct FCoreUObject_FVector2D& A, const struct FCoreUObject_FVector2D& B, const struct FCoreUObject_FVector2D& C, bool IgnoreSide, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.PointInTriangle");
		
		UBF_Triangulate_C_PointInTriangle_Params params {};
		params.P = P;
		params.A = A;
		params.B = B;
		params.C = C;
		params.IgnoreSide = IgnoreSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.LineSegIntersectionTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      a1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      b1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      a2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCoreUObject_FVector2D                      b2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnoreSide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBF_Triangulate_C::LineSegIntersectionTest(const struct FCoreUObject_FVector2D& a1, const struct FCoreUObject_FVector2D& b1, const struct FCoreUObject_FVector2D& a2, const struct FCoreUObject_FVector2D& b2, bool IgnoreSide, class UObject* __WorldContext, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.LineSegIntersectionTest");
		
		UBF_Triangulate_C_LineSegIntersectionTest_Params params {};
		params.a1 = a1;
		params.b1 = b1;
		params.a2 = a2;
		params.b2 = b2;
		params.IgnoreSide = IgnoreSide;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.FlipPoligon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_VertexID>                        vert                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FST_VertexID>                        Return                                                     (Parm, OutParm)
	 */
	void UBF_Triangulate_C::FlipPoligon(TArray<struct FST_VertexID>* vert, class UObject* __WorldContext, TArray<struct FST_VertexID>* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.FlipPoligon");
		
		UBF_Triangulate_C_FlipPoligon_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (vert != nullptr)
			*vert = params.vert;
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.RecursiveTriangulate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FST_VertexID>                        vert                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_VertexID>                        FullSetVert                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FST_LineSegment>                     BuiltSeg                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Thread                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm)
	 */
	void UBF_Triangulate_C::RecursiveTriangulate(TArray<struct FST_VertexID>* vert, TArray<struct FST_VertexID>* FullSetVert, TArray<struct FST_LineSegment>* BuiltSeg, int32_t Thread, class UObject* __WorldContext, TArray<int32_t>* Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.RecursiveTriangulate");
		
		UBF_Triangulate_C_RecursiveTriangulate_Params params {};
		params.Thread = Thread;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (vert != nullptr)
			*vert = params.vert;
		if (FullSetVert != nullptr)
			*FullSetVert = params.FullSetVert;
		if (BuiltSeg != nullptr)
			*BuiltSeg = params.BuiltSeg;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.LoopArrayIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Shift                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ArrayLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBF_Triangulate_C::LoopArrayIndex(int32_t Index, int32_t Shift, int32_t ArrayLength, class UObject* __WorldContext, int32_t* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.LoopArrayIndex");
		
		UBF_Triangulate_C_LoopArrayIndex_Params params {};
		params.Index = Index;
		params.Shift = Shift;
		params.ArrayLength = ArrayLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BF_Triangulate.BF_Triangulate_C.TriangulatePolygon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector>                Vertices                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Triangles                                                  (Parm, OutParm)
	 */
	void UBF_Triangulate_C::TriangulatePolygon(TArray<struct FCoreUObject_FVector>* Vertices, class UObject* __WorldContext, TArray<int32_t>* Triangles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BF_Triangulate.BF_Triangulate_C.TriangulatePolygon");
		
		UBF_Triangulate_C_TriangulatePolygon_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vertices != nullptr)
			*Vertices = params.Vertices;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBF_Triangulate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBF_Triangulate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BF_Triangulate.BF_Triangulate_C");
		return ptr;
	}

}


