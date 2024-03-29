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
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        RadVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::VectorRadiansToDegrees(const struct FCoreUObject_FVector& RadVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorRadiansToDegrees");
		
		UTKMathFunctionLibrary_VectorRadiansToDegrees_Params params {};
		params.RadVector = RadVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        DegVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::VectorDegreesToRadians(const struct FCoreUObject_FVector& DegVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.VectorDegreesToRadians");
		
		UTKMathFunctionLibrary_VectorDegreesToRadians_Params params {};
		params.DegVector = DegVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        BoxOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::SphereBoxIntersection(const struct FCoreUObject_FVector& SphereOrigin, float SphereRadius, const struct FCoreUObject_FVector& BoxOrigin, const struct FCoreUObject_FVector& BoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SphereBoxIntersection");
		
		UTKMathFunctionLibrary_SphereBoxIntersection_Params params {};
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		params.BoxOrigin = BoxOrigin;
		params.BoxExtent = BoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        planePoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::SignedDistancePlanePoint(const struct FCoreUObject_FVector& PlaneNormal, const struct FCoreUObject_FVector& planePoint, const struct FCoreUObject_FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SignedDistancePlanePoint");
		
		UTKMathFunctionLibrary_SignedDistancePlanePoint_Params params {};
		params.PlaneNormal = PlaneNormal;
		params.planePoint = planePoint;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::SetVectorLength(const struct FCoreUObject_FVector& A, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetVectorLength");
		
		UTKMathFunctionLibrary_SetVectorLength_Params params {};
		params.A = A;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTKMathFunctionLibrary::SetCenterOfMassOffset(class UPrimitiveComponent* Target, const struct FCoreUObject_FVector& Offset, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.SetCenterOfMassOffset");
		
		UTKMathFunctionLibrary_SetCenterOfMassOffset_Params params {};
		params.Target = Target;
		params.Offset = Offset;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               skipSelf                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToUpperMultiple(int32_t A, int32_t Multiple, bool skipSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToUpperMultiple");
		
		UTKMathFunctionLibrary_RoundToUpperMultiple_Params params {};
		params.A = A;
		params.Multiple = Multiple;
		params.skipSelf = skipSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToNearestMultiple(int32_t A, int32_t Multiple)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToNearestMultiple");
		
		UTKMathFunctionLibrary_RoundToNearestMultiple_Params params {};
		params.A = A;
		params.Multiple = Multiple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               skipSelf                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::RoundToLowerMultiple(int32_t A, int32_t Multiple, bool skipSelf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.RoundToLowerMultiple");
		
		UTKMathFunctionLibrary_RoundToLowerMultiple_Params params {};
		params.A = A;
		params.Multiple = Multiple;
		params.skipSelf = skipSelf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::ProjectPointOnLine(const struct FCoreUObject_FVector& LineOrigin, const struct FCoreUObject_FVector& LineDirection, const struct FCoreUObject_FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ProjectPointOnLine");
		
		UTKMathFunctionLibrary_ProjectPointOnLine_Params params {};
		params.LineOrigin = LineOrigin;
		params.LineDirection = LineDirection;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::PointOnWhichSideOfLineSegment(const struct FCoreUObject_FVector& LinePoint1, const struct FCoreUObject_FVector& LinePoint2, const struct FCoreUObject_FVector& Point)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.PointOnWhichSideOfLineSegment");
		
		UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment_Params params {};
		params.LinePoint1 = LinePoint1;
		params.LinePoint2 = LinePoint2;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector2D UTKMathFunctionLibrary::NegateVector2D(const struct FCoreUObject_FVector2D& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateVector2D");
		
		UTKMathFunctionLibrary_NegateVector2D_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::NegateInt(int32_t A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateInt");
		
		UTKMathFunctionLibrary_NegateInt_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::NegateFloat(float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.NegateFloat");
		
		UTKMathFunctionLibrary_NegateFloat_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        IntersectionPoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineDir1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineDir2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::LineToLineIntersection(struct FCoreUObject_FVector* IntersectionPoint, const struct FCoreUObject_FVector& LinePoint1, const struct FCoreUObject_FVector& LineDir1, const struct FCoreUObject_FVector& LinePoint2, const struct FCoreUObject_FVector& LineDir2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineToLineIntersection");
		
		UTKMathFunctionLibrary_LineToLineIntersection_Params params {};
		params.LinePoint1 = LinePoint1;
		params.LineDir1 = LineDir1;
		params.LinePoint2 = LinePoint2;
		params.LineDir2 = LineDir2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntersectionPoint != nullptr)
			*IntersectionPoint = params.IntersectionPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        InBox                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        HitNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HitTime                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::LineExtentBoxIntersection(const struct FBox& InBox, const struct FCoreUObject_FVector& Start, const struct FCoreUObject_FVector& End, const struct FCoreUObject_FVector& Extent, struct FCoreUObject_FVector* HitLocation, struct FCoreUObject_FVector* HitNormal, float* HitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.LineExtentBoxIntersection");
		
		UTKMathFunctionLibrary_LineExtentBoxIntersection_Params params {};
		params.InBox = InBox;
		params.Start = Start;
		params.End = End;
		params.Extent = Extent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitLocation != nullptr)
			*HitLocation = params.HitLocation;
		if (HitNormal != nullptr)
			*HitNormal = params.HitNormal;
		if (HitTime != nullptr)
			*HitTime = params.HitTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsPowerOfTwo(int32_t X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPowerOfTwo");
		
		UTKMathFunctionLibrary_IsPowerOfTwo_Params params {};
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        BoxOrigin                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsPointInsideBox(const struct FCoreUObject_FVector& Point, const struct FCoreUObject_FVector& BoxOrigin, const struct FCoreUObject_FVector& BoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsPointInsideBox");
		
		UTKMathFunctionLibrary_IsPointInsideBox_Params params {};
		params.Point = Point;
		params.BoxOrigin = BoxOrigin;
		params.BoxExtent = BoxExtent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Multiple                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsMultipleOf(int32_t A, int32_t Multiple)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsMultipleOf");
		
		UTKMathFunctionLibrary_IsMultipleOf_Params params {};
		params.A = A;
		params.Multiple = Multiple;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LineLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsLineInsideSphere(const struct FCoreUObject_FVector& LineStart, const struct FCoreUObject_FVector& LineDir, float LineLength, const struct FCoreUObject_FVector& SphereOrigin, float SphereRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsLineInsideSphere");
		
		UTKMathFunctionLibrary_IsLineInsideSphere_Params params {};
		params.LineStart = LineStart;
		params.LineDir = LineDir;
		params.LineLength = LineLength;
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::IsEvenNumber(float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.IsEvenNumber");
		
		UTKMathFunctionLibrary_IsEvenNumber_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Grid                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::GridSnap(const struct FCoreUObject_FVector& A, float Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GridSnap");
		
		UTKMathFunctionLibrary_GridSnap_Params params {};
		params.A = A;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawDebugInfo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::GetVelocityAtPoint(class UPrimitiveComponent* Target, const struct FCoreUObject_FVector& Point, const class FName& BoneName, bool DrawDebugInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetVelocityAtPoint");
		
		UTKMathFunctionLibrary_GetVelocityAtPoint_Params params {};
		params.Target = Target;
		params.Point = Point;
		params.BoneName = BoneName;
		params.DrawDebugInfo = DrawDebugInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTKMathFunctionLibrary::GetConsoleVariableInt(const class FString& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableInt");
		
		UTKMathFunctionLibrary_GetConsoleVariableInt_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::GetConsoleVariableFloat(const class FString& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.GetConsoleVariableFloat");
		
		UTKMathFunctionLibrary_GetConsoleVariableFloat_Params params {};
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESpeedUnit                                         SpeedUnit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTKMathFunctionLibrary::ConvertPhysicsLinearVelocity(const struct FCoreUObject_FVector& Velocity, ESpeedUnit SpeedUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertPhysicsLinearVelocity");
		
		UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity_Params params {};
		params.Velocity = Velocity;
		params.SpeedUnit = SpeedUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAnchors                                    CurrentAnchor                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMargin                                     Offsets                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAnchors                                    TargetAnchor                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FMargin                                     ConvertedOffsets                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTKMathFunctionLibrary::ConvertAnchorToAnchor(class UObject* WorldContextObject, const struct FAnchors& CurrentAnchor, const struct FMargin& Offsets, const struct FAnchors& TargetAnchor, struct FMargin* ConvertedOffsets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ConvertAnchorToAnchor");
		
		UTKMathFunctionLibrary_ConvertAnchorToAnchor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CurrentAnchor = CurrentAnchor;
		params.Offsets = Offsets;
		params.TargetAnchor = TargetAnchor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedOffsets != nullptr)
			*ConvertedOffsets = params.ConvertedOffsets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        closestPointLine1                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        closestPointLine2                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint1                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        lineVec1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint2                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        lineVec2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::ClosestPointsOnTwoLines(struct FCoreUObject_FVector* closestPointLine1, struct FCoreUObject_FVector* closestPointLine2, const struct FCoreUObject_FVector& LinePoint1, const struct FCoreUObject_FVector& lineVec1, const struct FCoreUObject_FVector& LinePoint2, const struct FCoreUObject_FVector& lineVec2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOnTwoLines");
		
		UTKMathFunctionLibrary_ClosestPointsOnTwoLines_Params params {};
		params.LinePoint1 = LinePoint1;
		params.lineVec1 = lineVec1;
		params.LinePoint2 = LinePoint2;
		params.lineVec2 = lineVec2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (closestPointLine1 != nullptr)
			*closestPointLine1 = params.closestPointLine1;
		if (closestPointLine2 != nullptr)
			*closestPointLine2 = params.closestPointLine2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Line1Start                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Line1End                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Line2Start                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Line2End                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LinePoint2                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTKMathFunctionLibrary::ClosestPointsOfLineSegments(const struct FCoreUObject_FVector& Line1Start, const struct FCoreUObject_FVector& Line1End, const struct FCoreUObject_FVector& Line2Start, const struct FCoreUObject_FVector& Line2End, struct FCoreUObject_FVector* LinePoint1, struct FCoreUObject_FVector* LinePoint2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointsOfLineSegments");
		
		UTKMathFunctionLibrary_ClosestPointsOfLineSegments_Params params {};
		params.Line1Start = Line1Start;
		params.Line1End = Line1End;
		params.Line2Start = Line2Start;
		params.Line2End = Line2End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinePoint1 != nullptr)
			*LinePoint1 = params.LinePoint1;
		if (LinePoint2 != nullptr)
			*LinePoint2 = params.LinePoint2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        SphereOrigin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineDir                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::ClosestPointOnSphereToLine(const struct FCoreUObject_FVector& SphereOrigin, float SphereRadius, const struct FCoreUObject_FVector& LineOrigin, const struct FCoreUObject_FVector& LineDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnSphereToLine");
		
		UTKMathFunctionLibrary_ClosestPointOnSphereToLine_Params params {};
		params.SphereOrigin = SphereOrigin;
		params.SphereRadius = SphereRadius;
		params.LineOrigin = LineOrigin;
		params.LineDir = LineDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineStart                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LineEnd                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UTKMathFunctionLibrary::ClosestPointOnLineSeqment(const struct FCoreUObject_FVector& Point, const struct FCoreUObject_FVector& LineStart, const struct FCoreUObject_FVector& LineEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.ClosestPointOnLineSeqment");
		
		UTKMathFunctionLibrary_ClosestPointOnLineSeqment_Params params {};
		params.Point = Point;
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        pointA1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        pointA2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        pointB1                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        pointB2                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTKMathFunctionLibrary::AreLineSegmentsCrossing(const struct FCoreUObject_FVector& pointA1, const struct FCoreUObject_FVector& pointA2, const struct FCoreUObject_FVector& pointB1, const struct FCoreUObject_FVector& pointB2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.TKMathFunctionLibrary.AreLineSegmentsCrossing");
		
		UTKMathFunctionLibrary_AreLineSegmentsCrossing_Params params {};
		params.pointA1 = pointA1;
		params.pointA2 = pointA2;
		params.pointB1 = pointB1;
		params.pointB2 = pointB2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTKMathFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTKMathFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VictoryBPLibrary.TKMathFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InPIEWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InPIEWorld");
		
		UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InGameInstanceWorld");
		
		UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WorldType__InEditorWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WorldType__InEditorWorld");
		
		UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     PossibleParent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::WidgetIsChildOf(class UWidget* ChildWidget, class UWidget* PossibleParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetIsChildOf");
		
		UVictoryBPFunctionLibrary_WidgetIsChildOf_Params params {};
		params.ChildWidget = ChildWidget;
		params.PossibleParent = PossibleParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ChildWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::WidgetGetParentOfClass(class UWidget* ChildWidget, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetParentOfClass");
		
		UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Params params {};
		params.ChildWidget = ChildWidget;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     ParentWidget                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UUserWidget*>                         ChildWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bImmediateOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>* ChildWidgets, class UClass* WidgetClass, bool bImmediateOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.WidgetGetChildrenOfClass");
		
		UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Params params {};
		params.ParentWidget = ParentWidget;
		params.WidgetClass = WidgetClass;
		params.bImmediateOnly = bImmediateOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChildWidgets != nullptr)
			*ChildWidgets = params.ChildWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              CurrentlyRenderedActors                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinRecentTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Visibility__GetRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyRenderedActors, float MinRecentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetRenderedActors");
		
		UVictoryBPFunctionLibrary_Visibility__GetRenderedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinRecentTime = MinRecentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlyRenderedActors != nullptr)
			*CurrentlyRenderedActors = params.CurrentlyRenderedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              CurrentlyNotRenderedActors                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              MinRecentTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Visibility__GetNotRenderedActors(class UObject* WorldContextObject, TArray<class AActor*>* CurrentlyNotRenderedActors, float MinRecentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Visibility__GetNotRenderedActors");
		
		UVictoryBPFunctionLibrary_Visibility__GetNotRenderedActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MinRecentTime = MinRecentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentlyNotRenderedActors != nullptr)
			*CurrentlyNotRenderedActors = params.CurrentlyNotRenderedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      ViewportPosition                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutWorldOrigin                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutWorldDirection                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::ViewportPositionDeproject(class UObject* WorldContextObject, const struct FCoreUObject_FVector2D& ViewportPosition, struct FCoreUObject_FVector* OutWorldOrigin, struct FCoreUObject_FVector* OutWorldDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ViewportPositionDeproject");
		
		UVictoryBPFunctionLibrary_ViewportPositionDeproject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ViewportPosition = ViewportPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWorldOrigin != nullptr)
			*OutWorldOrigin = params.OutWorldOrigin;
		if (OutWorldDirection != nullptr)
			*OutWorldDirection = params.OutWorldDirection;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__SetMousePosition(class APlayerController* ThePC, float PosX, float PosY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__SetMousePosition");
		
		UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Params params {};
		params.ThePC = ThePC;
		params.PosX = PosX;
		params.PosY = PosY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__GetMousePosition(class APlayerController* ThePC, float* PosX, float* PosY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetMousePosition");
		
		UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Params params {};
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PosX != nullptr)
			*PosX = params.PosX;
		if (PosY != nullptr)
			*PosY = params.PosY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PosY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(class APlayerController* ThePC, float* PosX, float* PosY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__GetCenterOfViewport");
		
		UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Params params {};
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PosX != nullptr)
			*PosX = params.PosX;
		if (PosY != nullptr)
			*PosY = params.PosY;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RenderTheWorld                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Viewport__EnableWorldRendering(class APlayerController* ThePC, bool RenderTheWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Viewport__EnableWorldRendering");
		
		UVictoryBPFunctionLibrary_Viewport__EnableWorldRendering_Params params {};
		params.ThePC = ThePC;
		params.RenderTheWorld = RenderTheWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundClass*                                 SoundClassObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySoundVolumeChange");
		
		UVictoryBPFunctionLibrary_VictorySoundVolumeChange_Params params {};
		params.SoundClassObject = SoundClassObject;
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IntArrayRef                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySortIntArray(TArray<int32_t>* IntArray, TArray<int32_t>* IntArrayRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortIntArray");
		
		UVictoryBPFunctionLibrary_VictorySortIntArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntArray != nullptr)
			*IntArray = params.IntArray;
		if (IntArrayRef != nullptr)
			*IntArrayRef = params.IntArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      FloatArrayRef                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySortFloatArray(TArray<float>* FloatArray, TArray<float>* FloatArrayRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySortFloatArray");
		
		UVictoryBPFunctionLibrary_VictorySortFloatArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloatArray != nullptr)
			*FloatArray = params.FloatArray;
		if (FloatArrayRef != nullptr)
			*FloatArrayRef = params.FloatArrayRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delta                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateMouseWheel");
		
		UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySimulateKeyPress(class APlayerController* ThePC, const struct FKey& Key, EInputEvent EventType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySimulateKeyPress");
		
		UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Params params {};
		params.ThePC = ThePC;
		params.Key = Key;
		params.EventType = EventType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, const struct FCoreUObject_FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector2D");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, const struct FCoreUObject_FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Vector");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_String");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, const struct FCoreUObject_FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Rotator");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Int");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Float");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Color");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictorySetCustomConfigVar_Bool");
		
		UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInputAxis                           ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryRemoveAxisKeyBind(const struct FVictoryInputAxis& ToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveAxisKeyBind");
		
		UVictoryBPFunctionLibrary_VictoryRemoveAxisKeyBind_Params params {};
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInput                               ToRemove                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryRemoveActionKeyBind(const struct FVictoryInput& ToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryRemoveActionKeyBind");
		
		UVictoryBPFunctionLibrary_VictoryRemoveActionKeyBind_Params params {};
		params.ToRemove = ToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInputAxis                           Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInputAxis                           NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryReBindAxisKey(const struct FVictoryInputAxis& Original, const struct FVictoryInputAxis& NewBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindAxisKey");
		
		UVictoryBPFunctionLibrary_VictoryReBindAxisKey_Params params {};
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVictoryInput                               Original                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FVictoryInput                               NewBinding                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryReBindActionKey(const struct FVictoryInput& Original, const struct FVictoryInput& NewBinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryReBindActionKey");
		
		UVictoryBPFunctionLibrary_VictoryReBindActionKey_Params params {};
		params.Original = Original;
		params.NewBinding = NewBinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CompToUpdate                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewAngularDamping                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryPhysics_UpdateAngularDamping(class UPrimitiveComponent* CompToUpdate, float NewAngularDamping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPhysics_UpdateAngularDamping");
		
		UVictoryBPFunctionLibrary_VictoryPhysics_UpdateAngularDamping_Params params {};
		params.CompToUpdate = CompToUpdate;
		params.NewAngularDamping = NewAngularDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__WindowsNoEditorDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__WindowsNoEditorDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__WindowsNoEditorDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__Win64Dir_BinaryLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__Win64Dir_BinaryLocation");
		
		UVictoryBPFunctionLibrary_VictoryPaths__Win64Dir_BinaryLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__ScreenShotsDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ScreenShotsDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__ScreenShotsDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__SavedDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__SavedDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__SavedDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__LogsDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__LogsDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__LogsDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__GameRootDirectory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__GameRootDirectory");
		
		UVictoryBPFunctionLibrary_VictoryPaths__GameRootDirectory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::VictoryPaths__ConfigDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryPaths__ConfigDir");
		
		UVictoryBPFunctionLibrary_VictoryPaths__ConfigDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapFolderOffOfContent                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceNumber                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelStreaming* UVictoryBPFunctionLibrary::VictoryLoadLevelInstance(class UObject* WorldContextObject, const class FString& MapFolderOffOfContent, const class FString& LevelName, int32_t InstanceNumber, const struct FCoreUObject_FVector& Location, const struct FCoreUObject_FRotator& Rotation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryLoadLevelInstance");
		
		UVictoryBPFunctionLibrary_VictoryLoadLevelInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MapFolderOffOfContent = MapFolderOffOfContent;
		params.LevelName = LevelName;
		params.InstanceNumber = InstanceNumber;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AVictoryISM*>                         Out                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryISM_GetAllVictoryISMActors(class UObject* WorldContextObject, TArray<class AVictoryISM*>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_GetAllVictoryISMActors");
		
		UVictoryBPFunctionLibrary_VictoryISM_GetAllVictoryISMActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AVictoryISM*>                         CreatedISMActors                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               DestroyOriginalActors                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinCountToCreateISM                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryISM_ConvertToVictoryISMActors(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AVictoryISM*>* CreatedISMActors, bool DestroyOriginalActors, int32_t MinCountToCreateISM)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryISM_ConvertToVictoryISMActors");
		
		UVictoryBPFunctionLibrary_VictoryISM_ConvertToVictoryISMActors_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.DestroyOriginalActors = DestroyOriginalActors;
		params.MinCountToCreateISM = MinCountToCreateISM;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CreatedISMActors != nullptr)
			*CreatedISMActors = params.CreatedISMActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(int32_t ProcessId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIsApplicationRunning");
		
		UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Params params {};
		params.ProcessId = ProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Int                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Add                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryIntPlusEquals(int32_t* Int, int32_t Add, int32_t* IntOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntPlusEquals");
		
		UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Params params {};
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
		if (IntOut != nullptr)
			*IntOut = params.IntOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Int                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Sub                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryIntMinusEquals(int32_t* Int, int32_t Sub, int32_t* IntOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryIntMinusEquals");
		
		UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Params params {};
		params.Sub = Sub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Int != nullptr)
			*Int = params.Int;
		if (IntOut != nullptr)
			*IntOut = params.IntOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInputAxis UVictoryBPFunctionLibrary::VictoryGetVictoryInputAxis(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInputAxis");
		
		UVictoryBPFunctionLibrary_VictoryGetVictoryInputAxis_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVictoryInput UVictoryBPFunctionLibrary::VictoryGetVictoryInput(const struct FKeyEvent& KeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetVictoryInput");
		
		UVictoryBPFunctionLibrary_VictoryGetVictoryInput_Params params {};
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundClass*                                 SoundClassObject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VictoryGetSoundVolume(class USoundClass* SoundClassObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetSoundVolume");
		
		UVictoryBPFunctionLibrary_VictoryGetSoundVolume_Params params {};
		params.SoundClassObject = SoundClassObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector2D UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector2D");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Vector");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_String");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Rotator");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Int");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Float");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Color");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SectionName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariableName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(const class FString& SectionName, const class FString& VariableName, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetCustomConfigVar_Bool");
		
		UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Params params {};
		params.SectionName = SectionName;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::VictoryGetApplicationName(int32_t ProcessId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetApplicationName");
		
		UVictoryBPFunctionLibrary_VictoryGetApplicationName_Params params {};
		params.ProcessId = ProcessId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVictoryInputAxis>                   Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllAxisKeyBindings(TArray<struct FVictoryInputAxis>* Bindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisKeyBindings");
		
		UVictoryBPFunctionLibrary_VictoryGetAllAxisKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInput>                       ActionBindings                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVictoryInputAxis>                   AxisBindings                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllAxisAndActionMappingsForKey(const struct FKey& Key, TArray<struct FVictoryInput>* ActionBindings, TArray<struct FVictoryInputAxis>* AxisBindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllAxisAndActionMappingsForKey");
		
		UVictoryBPFunctionLibrary_VictoryGetAllAxisAndActionMappingsForKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionBindings != nullptr)
			*ActionBindings = params.ActionBindings;
		if (AxisBindings != nullptr)
			*AxisBindings = params.AxisBindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVictoryInput>                       Bindings                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryGetAllActionKeyBindings(TArray<struct FVictoryInput>* Bindings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryGetAllActionKeyBindings");
		
		UVictoryBPFunctionLibrary_VictoryGetAllActionKeyBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bindings != nullptr)
			*Bindings = params.Bindings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Add                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(float* Float, float Add, float* FloatOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatPlusEquals");
		
		UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Params params {};
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Float != nullptr)
			*Float = params.Float;
		if (FloatOut != nullptr)
			*FloatOut = params.FloatOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Sub                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(float* Float, float Sub, float* FloatOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryFloatMinusEquals");
		
		UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Params params {};
		params.Sub = Sub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Float != nullptr)
			*Float = params.Float;
		if (FloatOut != nullptr)
			*FloatOut = params.FloatOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ProcessId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullPathOfProgramToRun                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              CommandlineArgs                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Detach                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalWorkingDirectory                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryCreateProc(int32_t* ProcessId, const class FString& FullPathOfProgramToRun, TArray<class FString> CommandlineArgs, bool Detach, bool Hidden, int32_t Priority, const class FString& OptionalWorkingDirectory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryCreateProc");
		
		UVictoryBPFunctionLibrary_VictoryCreateProc_Params params {};
		params.FullPathOfProgramToRun = FullPathOfProgramToRun;
		params.CommandlineArgs = CommandlineArgs;
		params.Detach = Detach;
		params.Hidden = Hidden;
		params.Priority = Priority;
		params.OptionalWorkingDirectory = OptionalWorkingDirectory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProcessId != nullptr)
			*ProcessId = params.ProcessId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToAppend                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AppendNewline                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::VictoryAppendInline(class FString* String, const class FString& ToAppend, class FString* Result, bool AppendNewline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VictoryAppendInline");
		
		UVictoryBPFunctionLibrary_VictoryAppendInline_Params params {};
		params.ToAppend = ToAppend;
		params.AppendNewline = AppendNewline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TrimZeroes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Victory_SecondsToHoursMinutesSeconds(float Seconds, bool TrimZeroes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SecondsToHoursMinutesSeconds");
		
		UVictoryBPFunctionLibrary_Victory_SecondsToHoursMinutesSeconds_Params params {};
		params.Seconds = Seconds;
		params.TrimZeroes = TrimZeroes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToClipboard                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(const class FString& ToClipboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SaveStringToOSClipboard");
		
		UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Params params {};
		params.ToClipboard = ToClipboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        ImagePixels                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SaveAsBMP                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               sRGB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_SavePixels(const class FString& FullFilePath, int32_t Width, int32_t Height, TArray<struct FLinearColor> ImagePixels, bool SaveAsBMP, bool sRGB, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_SavePixels");
		
		UVictoryBPFunctionLibrary_Victory_SavePixels_Params params {};
		params.FullFilePath = FullFilePath;
		params.Width = Width;
		params.Height = Height;
		params.ImagePixels = ImagePixels;
		params.SaveAsBMP = SaveAsBMP;
		params.sRGB = sRGB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EJoyImageFormats                                   ImageFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        OutPixels                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height, TArray<struct FLinearColor>* OutPixels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile_Pixels");
		
		UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Params params {};
		params.FullFilePath = FullFilePath;
		params.ImageFormat = ImageFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		if (OutPixels != nullptr)
			*OutPixels = params.OutPixels;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EJoyImageFormats                                   ImageFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(const class FString& FullFilePath, EJoyImageFormats ImageFormat, bool* IsValid, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_LoadTexture2D_FromFile");
		
		UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Params params {};
		params.FullFilePath = FullFilePath;
		params.ImageFormat = ImageFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FromClipboard                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(class FString* FromClipboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetStringFromOSClipboard");
		
		UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FromClipboard != nullptr)
			*FromClipboard = params.FromClipboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  T2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextureWidth                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TextureHeight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        PixelArray                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(class UTexture2D* T2D, int32_t* TextureWidth, int32_t* TextureHeight, TArray<struct FLinearColor>* PixelArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelsArrayFromT2D");
		
		UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Params params {};
		params.T2D = T2D;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextureWidth != nullptr)
			*TextureWidth = params.TextureWidth;
		if (TextureHeight != nullptr)
			*TextureHeight = params.TextureHeight;
		if (PixelArray != nullptr)
			*PixelArray = params.PixelArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  T2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                PixelColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(class UTexture2D* T2D, int32_t X, int32_t Y, struct FLinearColor* PixelColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetPixelFromT2D");
		
		UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Params params {};
		params.T2D = T2D;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelColor != nullptr)
			*PixelColor = params.PixelColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::Victory_GetGRHIAdapterName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGRHIAdapterName");
		
		UVictoryBPFunctionLibrary_Victory_GetGRHIAdapterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceDescription                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Provider                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DriverVersion                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DriverDate                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Victory_GetGPUInfo(class FString* DeviceDescription, class FString* Provider, class FString* DriverVersion, class FString* DriverDate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUInfo");
		
		UVictoryBPFunctionLibrary_Victory_GetGPUInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceDescription != nullptr)
			*DeviceDescription = params.DeviceDescription;
		if (Provider != nullptr)
			*Provider = params.Provider;
		if (DriverVersion != nullptr)
			*DriverVersion = params.DriverVersion;
		if (DriverDate != nullptr)
			*DriverDate = params.DriverDate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::Victory_GetGPUBrand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_GetGPUBrand");
		
		UVictoryBPFunctionLibrary_Victory_GetGPUBrand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Pixels                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ImageHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                FoundColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Victory_Get_Pixel(TArray<struct FLinearColor> Pixels, int32_t ImageHeight, int32_t X, int32_t Y, struct FLinearColor* FoundColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_Get_Pixel");
		
		UVictoryBPFunctionLibrary_Victory_Get_Pixel_Params params {};
		params.Pixels = Pixels;
		params.ImageHeight = ImageHeight;
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundColor != nullptr)
			*FoundColor = params.FoundColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Dest                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EPathFollowingRequestResult UVictoryBPFunctionLibrary::Victory_AI_MoveToWithFilter(class APawn* Pawn, const struct FCoreUObject_FVector& Dest, class UClass* FilterClass, float AcceptanceRadius, bool bProjectDestinationToNavigation, bool bStopOnOverlap, bool bCanStrafe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Victory_AI_MoveToWithFilter");
		
		UVictoryBPFunctionLibrary_Victory_AI_MoveToWithFilter_Params params {};
		params.Pawn = Pawn;
		params.Dest = Dest;
		params.FilterClass = FilterClass;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bCanStrafe = bCanStrafe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HorizontalFOV                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::VerticalFOV(float HorizontalFOV, float AspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.VerticalFOV");
		
		UVictoryBPFunctionLibrary_VerticalFOV_Params params {};
		params.HorizontalFOV = HorizontalFOV;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo_Constant(const struct FCoreUObject_FVector2D& Current, const struct FCoreUObject_FVector2D& Target, float DeltaTime, float InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo_Constant");
		
		UVictoryBPFunctionLibrary_Vector2DInterpTo_Constant_Params params {};
		params.Current = Current;
		params.Target = Target;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      Current                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector2D UVictoryBPFunctionLibrary::Vector2DInterpTo(const struct FCoreUObject_FVector2D& Current, const struct FCoreUObject_FVector2D& Target, float DeltaTime, float InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Vector2DInterpTo");
		
		UVictoryBPFunctionLibrary_Vector2DInterpTo_Params params {};
		params.Current = Current;
		params.Target = Target;
		params.DeltaTime = DeltaTime;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      UTCTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FDateTime                      LocalTime                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::UTCToLocal(const struct FCoreUObject_FDateTime& UTCTime, struct FCoreUObject_FDateTime* LocalTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UTCToLocal");
		
		UVictoryBPFunctionLibrary_UTCToLocal_Params params {};
		params.UTCTime = UTCTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalTime != nullptr)
			*LocalTime = params.LocalTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::UnloadStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.UnloadStreamingLevel");
		
		UVictoryBPFunctionLibrary_UnloadStreamingLevel_Params params {};
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::TransformVectorToActorSpaceAngle(class AActor* Actor, const struct FCoreUObject_FVector& InVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpaceAngle");
		
		UVictoryBPFunctionLibrary_TransformVectorToActorSpaceAngle_Params params {};
		params.Actor = Actor;
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::TransformVectorToActorSpace(class AActor* Actor, const struct FCoreUObject_FVector& InVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TransformVectorToActorSpace");
		
		UVictoryBPFunctionLibrary_TransformVectorToActorSpace_Params params {};
		params.Actor = Actor;
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TraceOwner                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceStart                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceEnd                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutImpactPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutImpactNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClosestSocketName                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        SocketLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestSocket(class UObject* WorldContextObject, class AActor* TraceOwner, const struct FCoreUObject_FVector& TraceStart, const struct FCoreUObject_FVector& TraceEnd, struct FCoreUObject_FVector* OutImpactPoint, struct FCoreUObject_FVector* OutImpactNormal, class FName* ClosestSocketName, struct FCoreUObject_FVector* SocketLocation, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestSocket");
		
		UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestSocket_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TraceOwner = TraceOwner;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImpactPoint != nullptr)
			*OutImpactPoint = params.OutImpactPoint;
		if (OutImpactNormal != nullptr)
			*OutImpactNormal = params.OutImpactNormal;
		if (ClosestSocketName != nullptr)
			*ClosestSocketName = params.ClosestSocketName;
		if (SocketLocation != nullptr)
			*SocketLocation = params.SocketLocation;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TraceOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceStart                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceEnd                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutImpactPoint                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        OutImpactNormal                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ClosestBoneName                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ClosestBoneLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::Traces__CharacterMeshTrace___ClosestBone(class AActor* TraceOwner, const struct FCoreUObject_FVector& TraceStart, const struct FCoreUObject_FVector& TraceEnd, struct FCoreUObject_FVector* OutImpactPoint, struct FCoreUObject_FVector* OutImpactNormal, class FName* ClosestBoneName, struct FCoreUObject_FVector* ClosestBoneLocation, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Traces__CharacterMeshTrace___ClosestBone");
		
		UVictoryBPFunctionLibrary_Traces__CharacterMeshTrace___ClosestBone_Params params {};
		params.TraceOwner = TraceOwner;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImpactPoint != nullptr)
			*OutImpactPoint = params.OutImpactPoint;
		if (OutImpactNormal != nullptr)
			*OutImpactNormal = params.OutImpactNormal;
		if (ClosestBoneName != nullptr)
			*ClosestBoneName = params.ClosestBoneName;
		if (ClosestBoneLocation != nullptr)
			*ClosestBoneLocation = params.ClosestBoneLocation;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       TraceRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TraceLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawTraceData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceDataColor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TraceDataThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromSkeletalMeshSocket(struct FCoreUObject_FVector* TraceStart, struct FCoreUObject_FVector* TraceEnd, class USkeletalMeshComponent* Mesh, const struct FCoreUObject_FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromSkeletalMeshSocket");
		
		UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromSkeletalMeshSocket_Params params {};
		params.Mesh = Mesh;
		params.TraceRotation = TraceRotation;
		params.TraceLength = TraceLength;
		params.Socket = Socket;
		params.DrawTraceData = DrawTraceData;
		params.TraceDataColor = TraceDataColor;
		params.TraceDataThickness = TraceDataThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        TraceStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TraceEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       TraceRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              TraceLength                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DrawTraceData                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                TraceDataColor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TraceDataThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::TraceData__GetTraceDataFromCharacterSocket(struct FCoreUObject_FVector* TraceStart, struct FCoreUObject_FVector* TraceEnd, class AActor* TheCharacter, const struct FCoreUObject_FRotator& TraceRotation, float TraceLength, const class FName& Socket, bool DrawTraceData, const struct FLinearColor& TraceDataColor, float TraceDataThickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.TraceData__GetTraceDataFromCharacterSocket");
		
		UVictoryBPFunctionLibrary_TraceData__GetTraceDataFromCharacterSocket_Params params {};
		params.TheCharacter = TheCharacter;
		params.TraceRotation = TraceRotation;
		params.TraceLength = TraceLength;
		params.Socket = Socket;
		params.DrawTraceData = DrawTraceData;
		params.TraceDataColor = TraceDataColor;
		params.TraceDataThickness = TraceDataThickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceStart != nullptr)
			*TraceStart = params.TraceStart;
		if (TraceEnd != nullptr)
			*TraceEnd = params.TraceEnd;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseDotForThousands                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::Text_ToInt(const class FText& Text, bool UseDotForThousands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToInt");
		
		UVictoryBPFunctionLibrary_Text_ToInt_Params params {};
		params.Text = Text;
		params.UseDotForThousands = UseDotForThousands;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               UseDotForThousands                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::Text_ToFloat(const class FText& Text, bool UseDotForThousands)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_ToFloat");
		
		UVictoryBPFunctionLibrary_Text_ToFloat_Params params {};
		params.Text = Text;
		params.UseDotForThousands = UseDotForThousands;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Text_IsNumeric(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Text_IsNumeric");
		
		UVictoryBPFunctionLibrary_Text_IsNumeric_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Target                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::StringIsEmpty(const class FString& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringIsEmpty");
		
		UVictoryBPFunctionLibrary_StringIsEmpty_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TheFloat                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TheString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Precision                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeLeadingZero                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::StringConversion__GetFloatAsStringWithPrecision(float TheFloat, class FString* TheString, int32_t Precision, bool IncludeLeadingZero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.StringConversion__GetFloatAsStringWithPrecision");
		
		UVictoryBPFunctionLibrary_StringConversion__GetFloatAsStringWithPrecision_Params params {};
		params.TheFloat = TheFloat;
		params.Precision = Precision;
		params.IncludeLeadingZero = IncludeLeadingZero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TheString != nullptr)
			*TheString = params.TheString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              OutputStrings                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      InputString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Separator                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Limit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrimElements                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::String__ExplodeString(TArray<class FString>* OutputStrings, const class FString& InputString, const class FString& Separator, int32_t Limit, bool bTrimElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__ExplodeString");
		
		UVictoryBPFunctionLibrary_String__ExplodeString_Params params {};
		params.InputString = InputString;
		params.Separator = Separator;
		params.Limit = Limit;
		params.bTrimElements = bTrimElements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputStrings != nullptr)
			*OutputStrings = params.OutputStrings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::String__CombineStrings_Multi(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings_Multi");
		
		UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringFirst                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringSecond                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Separator                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringFirstLabel                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringSecondLabel                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::String__CombineStrings(const class FString& StringFirst, const class FString& StringSecond, const class FString& Separator, const class FString& StringFirstLabel, const class FString& StringSecondLabel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.String__CombineStrings");
		
		UVictoryBPFunctionLibrary_String__CombineStrings_Params params {};
		params.StringFirst = StringFirst;
		params.StringSecond = StringSecond;
		params.Separator = Separator;
		params.StringFirstLabel = StringFirstLabel;
		params.StringSecondLabel = StringSecondLabel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               SpawnEvenIfColliding                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::SpawnActorIntoLevel(class UObject* WorldContextObject, class UClass* ActorClass, const class FName& Level, const struct FCoreUObject_FVector& Location, const struct FCoreUObject_FRotator& Rotation, bool SpawnEvenIfColliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SpawnActorIntoLevel");
		
		UVictoryBPFunctionLibrary_SpawnActorIntoLevel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Level = Level;
		params.Location = Location;
		params.Rotation = Rotation;
		params.SpawnEvenIfColliding = SpawnEvenIfColliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewTeamId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::SetGenericTeamId(class AActor* Target, unsigned char NewTeamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetGenericTeamId");
		
		UVictoryBPFunctionLibrary_SetGenericTeamId_Params params {};
		params.Target = Target;
		params.NewTeamId = NewTeamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::SetComponentTickRate(class UActorComponent* Component, float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetComponentTickRate");
		
		UVictoryBPFunctionLibrary_SetComponentTickRate_Params params {};
		params.Component = Component;
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APostProcessVolume*                          PostProcessVolume                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::SetBloomIntensity(class APostProcessVolume* PostProcessVolume, float Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SetBloomIntensity");
		
		UVictoryBPFunctionLibrary_SetBloomIntensity_Params params {};
		params.PostProcessVolume = PostProcessVolume;
		params.Intensity = Intensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipNotifyPlayers                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::ServerTravel(class UObject* WorldContextObject, const class FString& MapName, bool bSkipNotifyPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ServerTravel");
		
		UVictoryBPFunctionLibrary_ServerTravel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MapName = MapName;
		params.bSkipNotifyPlayers = bSkipNotifyPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              SelectedActors                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      AnchorPoint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      DraggedPoint                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassFilter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Selection_SelectionBox(class UObject* WorldContextObject, TArray<class AActor*>* SelectedActors, const struct FCoreUObject_FVector2D& AnchorPoint, const struct FCoreUObject_FVector2D& DraggedPoint, class UClass* ClassFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Selection_SelectionBox");
		
		UVictoryBPFunctionLibrary_Selection_SelectionBox_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AnchorPoint = AnchorPoint;
		params.DraggedPoint = DraggedPoint;
		params.ClassFilter = ClassFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedActors != nullptr)
			*SelectedActors = params.SelectedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::seedRandWithTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithTime");
		
		UVictoryBPFunctionLibrary_seedRandWithTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::seedRandWithEntropy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRandWithEntropy");
		
		UVictoryBPFunctionLibrary_seedRandWithEntropy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::seedRand(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.seedRand");
		
		UVictoryBPFunctionLibrary_seedRand_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OriginalFileName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewAbsoluteFolderPath                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HighResolution                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::ScreenShots_Rename_Move_Most_Recent(class FString* OriginalFileName, const class FString& NewName, const class FString& NewAbsoluteFolderPath, bool HighResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ScreenShots_Rename_Move_Most_Recent");
		
		UVictoryBPFunctionLibrary_ScreenShots_Rename_Move_Most_Recent_Params params {};
		params.NewName = NewName;
		params.NewAbsoluteFolderPath = NewAbsoluteFolderPath;
		params.HighResolution = HighResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OriginalFileName != nullptr)
			*OriginalFileName = params.OriginalFileName;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              FileNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::SaveGameObject_GetAllSaveSlotFileNames(TArray<class FString>* FileNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.SaveGameObject_GetAllSaveSlotFileNames");
		
		UVictoryBPFunctionLibrary_SaveGameObject_GetAllSaveSlotFileNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FileNames != nullptr)
			*FileNames = params.FileNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::Rendering__UnFreezeGameRendering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__UnFreezeGameRendering");
		
		UVictoryBPFunctionLibrary_Rendering__UnFreezeGameRendering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::Rendering__FreezeGameRendering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Rendering__FreezeGameRendering");
		
		UVictoryBPFunctionLibrary_Rendering__FreezeGameRendering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLevelStreamInstanceInfo                    LevelInstanceInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::RemoveFromStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveFromStreamingLevels");
		
		UVictoryBPFunctionLibrary_RemoveFromStreamingLevels_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelInstanceInfo = LevelInstanceInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RemoveAllWidgetsOfClass");
		
		UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousTime                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Hours                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::RealWorldTime__GetTimePassedSincePreviousTime(const class FString& PreviousTime, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetTimePassedSincePreviousTime");
		
		UVictoryBPFunctionLibrary_RealWorldTime__GetTimePassedSincePreviousTime_Params params {};
		params.PreviousTime = PreviousTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours != nullptr)
			*Hours = params.Hours;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousTime1                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PreviousTime2                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Hours                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::RealWorldTime__GetDifferenceBetweenTimes(const class FString& PreviousTime1, const class FString& PreviousTime2, float* MilliSeconds, float* Seconds, float* Minutes, float* Hours)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetDifferenceBetweenTimes");
		
		UVictoryBPFunctionLibrary_RealWorldTime__GetDifferenceBetweenTimes_Params params {};
		params.PreviousTime1 = PreviousTime1;
		params.PreviousTime2 = PreviousTime2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours != nullptr)
			*Hours = params.Hours;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MilliSeconds                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hours12                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Hours24                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Day                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Month                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Year                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::RealWorldTime__GetCurrentOSTime(int32_t* MilliSeconds, int32_t* Seconds, int32_t* Minutes, int32_t* Hours12, int32_t* Hours24, int32_t* Day, int32_t* Month, int32_t* Year)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RealWorldTime__GetCurrentOSTime");
		
		UVictoryBPFunctionLibrary_RealWorldTime__GetCurrentOSTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MilliSeconds != nullptr)
			*MilliSeconds = params.MilliSeconds;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (Minutes != nullptr)
			*Minutes = params.Minutes;
		if (Hours12 != nullptr)
			*Hours12 = params.Hours12;
		if (Hours24 != nullptr)
			*Hours24 = params.Hours24;
		if (Day != nullptr)
			*Day = params.Day;
		if (Month != nullptr)
			*Month = params.Month;
		if (Year != nullptr)
			*Year = params.Year;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT
	 * 		Flags  -> ()
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_uniDis_MT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis_MT");
		
		UVictoryBPFunctionLibrary_RandInt_uniDis_MT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis
	 * 		Flags  -> ()
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_uniDis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_uniDis");
		
		UVictoryBPFunctionLibrary_RandInt_uniDis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis_MT(int32_t iMin, int32_t iMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis_MT");
		
		UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_MT_Params params {};
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::RandInt_MINMAX_uniDis(int32_t iMin, int32_t iMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandInt_MINMAX_uniDis");
		
		UVictoryBPFunctionLibrary_RandInt_MINMAX_uniDis_Params params {};
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT
	 * 		Flags  -> ()
	 */
	float UVictoryBPFunctionLibrary::RandFloat_uniDis_MT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis_MT");
		
		UVictoryBPFunctionLibrary_RandFloat_uniDis_MT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis
	 * 		Flags  -> ()
	 */
	float UVictoryBPFunctionLibrary::RandFloat_uniDis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_uniDis");
		
		UVictoryBPFunctionLibrary_RandFloat_uniDis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis_MT(float iMin, float iMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis_MT");
		
		UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_MT_Params params {};
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              iMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              iMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::RandFloat_MINMAX_uniDis(float iMin, float iMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandFloat_MINMAX_uniDis");
		
		UVictoryBPFunctionLibrary_RandFloat_MINMAX_uniDis_Params params {};
		params.iMin = iMin;
		params.iMax = iMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fBias                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::RandBool_Bernoulli_MT(float fBias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli_MT");
		
		UVictoryBPFunctionLibrary_RandBool_Bernoulli_MT_Params params {};
		params.fBias = fBias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fBias                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::RandBool_Bernoulli(float fBias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.RandBool_Bernoulli");
		
		UVictoryBPFunctionLibrary_RandBool_Bernoulli_Params params {};
		params.fBias = fBias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector2D UVictoryBPFunctionLibrary::ProjectWorldToScreenPosition(const struct FCoreUObject_FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ProjectWorldToScreenPosition");
		
		UVictoryBPFunctionLibrary_ProjectWorldToScreenPosition_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::PointDistanceToPlane(const struct FPlane& Plane, const struct FCoreUObject_FVector& Point, float* Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PointDistanceToPlane");
		
		UVictoryBPFunctionLibrary_PointDistanceToPlane_Params params {};
		params.Plane = Plane;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayerId                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::PlayerState_GetPlayerID(class APlayerController* ThePC, int32_t* PlayerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerState_GetPlayerID");
		
		UVictoryBPFunctionLibrary_PlayerState_GetPlayerID_Params params {};
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerId != nullptr)
			*PlayerId = params.PlayerId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           ThePC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ControllerId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::PlayerController_GetControllerID(class APlayerController* ThePC, int32_t* ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.PlayerController_GetControllerID");
		
		UVictoryBPFunctionLibrary_PlayerController_GetControllerID_Params params {};
		params.ThePC = ThePC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ControllerId != nullptr)
			*ControllerId = params.ControllerId;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeightOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InterpSpeed                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__UpdateCharacterCameraToRagdollLocation(class AActor* TheCharacter, float HeightOffset, float InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__UpdateCharacterCameraToRagdollLocation");
		
		UVictoryBPFunctionLibrary_Physics__UpdateCharacterCameraToRagdollLocation_Params params {};
		params.TheCharacter = TheCharacter;
		params.HeightOffset = HeightOffset;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SetToFallingMovementMode                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAboveRBMesh                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        InitLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       InitRotation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__LeaveRagDoll(class AActor* TheCharacter, bool SetToFallingMovementMode, float HeightAboveRBMesh, const struct FCoreUObject_FVector& InitLocation, const struct FCoreUObject_FRotator& InitRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__LeaveRagDoll");
		
		UVictoryBPFunctionLibrary_Physics__LeaveRagDoll_Params params {};
		params.TheCharacter = TheCharacter;
		params.SetToFallingMovementMode = SetToFallingMovementMode;
		params.HeightAboveRBMesh = HeightAboveRBMesh;
		params.InitLocation = InitLocation;
		params.InitRotation = InitRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__IsRagDoll(class AActor* TheCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__IsRagDoll");
		
		UVictoryBPFunctionLibrary_Physics__IsRagDoll_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        InitLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       InitRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__InitializeVictoryRagDoll(class AActor* TheCharacter, struct FCoreUObject_FVector* InitLocation, struct FCoreUObject_FRotator* InitRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__InitializeVictoryRagDoll");
		
		UVictoryBPFunctionLibrary_Physics__InitializeVictoryRagDoll_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitLocation != nullptr)
			*InitLocation = params.InitLocation;
		if (InitRotation != nullptr)
			*InitRotation = params.InitRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        RagdollLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__GetLocationofRagDoll(class AActor* TheCharacter, struct FCoreUObject_FVector* RagdollLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__GetLocationofRagDoll");
		
		UVictoryBPFunctionLibrary_Physics__GetLocationofRagDoll_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RagdollLocation != nullptr)
			*RagdollLocation = params.RagdollLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Physics__EnterRagDoll(class AActor* TheCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Physics__EnterRagDoll");
		
		UVictoryBPFunctionLibrary_Physics__EnterRagDoll_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    Widths                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Heights                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    RefreshRates                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeRefreshRates                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::OptionsMenu__GetDisplayAdapterScreenResolutions(TArray<int32_t>* Widths, TArray<int32_t>* Heights, TArray<int32_t>* RefreshRates, bool IncludeRefreshRates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OptionsMenu__GetDisplayAdapterScreenResolutions");
		
		UVictoryBPFunctionLibrary_OptionsMenu__GetDisplayAdapterScreenResolutions_Params params {};
		params.IncludeRefreshRates = IncludeRefreshRates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widths != nullptr)
			*Widths = params.Widths;
		if (Heights != nullptr)
			*Heights = params.Heights;
		if (RefreshRates != nullptr)
			*RefreshRates = params.RefreshRates;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Windows_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Mac                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Linux                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IOS                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android_ARM                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Android_Vulkan                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PS4                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               XboxOne                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HTML5                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               APPLE                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::OperatingSystem__GetCurrentPlatform(bool* Windows_, bool* Mac, bool* Linux, bool* IOS, bool* Android, bool* Android_ARM, bool* Android_Vulkan, bool* PS4, bool* XboxOne, bool* HTML5, bool* APPLE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.OperatingSystem__GetCurrentPlatform");
		
		UVictoryBPFunctionLibrary_OperatingSystem__GetCurrentPlatform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Windows_ != nullptr)
			*Windows_ = params.Windows_;
		if (Mac != nullptr)
			*Mac = params.Mac;
		if (Linux != nullptr)
			*Linux = params.Linux;
		if (IOS != nullptr)
			*IOS = params.IOS;
		if (Android != nullptr)
			*Android = params.Android;
		if (Android_ARM != nullptr)
			*Android_ARM = params.Android_ARM;
		if (Android_Vulkan != nullptr)
			*Android_Vulkan = params.Android_Vulkan;
		if (PS4 != nullptr)
			*PS4 = params.PS4;
		if (XboxOne != nullptr)
			*XboxOne = params.XboxOne;
		if (HTML5 != nullptr)
			*HTML5 = params.HTML5;
		if (APPLE != nullptr)
			*APPLE = params.APPLE;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TheURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Open_URL_In_Web_Browser(const class FString& TheURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Open_URL_In_Web_Browser");
		
		UVictoryBPFunctionLibrary_Open_URL_In_Web_Browser_Params params {};
		params.TheURL = TheURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::NotEqual_Vector2DVector2D(const struct FCoreUObject_FVector2D& A, const struct FCoreUObject_FVector2D& B, float ErrorTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.NotEqual_Vector2DVector2D");
		
		UVictoryBPFunctionLibrary_NotEqual_Vector2DVector2D_Params params {};
		params.A = A;
		params.B = B;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EComponentMobility                                 NewMobility                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Mobility__SetSceneCompMobility(class USceneComponent* SceneComp, EComponentMobility NewMobility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Mobility__SetSceneCompMobility");
		
		UVictoryBPFunctionLibrary_Mobility__SetSceneCompMobility_Params params {};
		params.SceneComp = SceneComp;
		params.NewMobility = NewMobility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MinValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::MinOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMinValue, int32_t* MinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfIntArray");
		
		UVictoryBPFunctionLibrary_MinOfIntArray_Params params {};
		params.IntArray = IntArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMinValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::MinOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMinValue, float* MinValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MinOfFloatArray");
		
		UVictoryBPFunctionLibrary_MinOfFloatArray_Params params {};
		params.FloatArray = FloatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMinValue != nullptr)
			*IndexOfMinValue = params.IndexOfMinValue;
		if (MinValue != nullptr)
			*MinValue = params.MinValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    IntArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::MaxOfIntArray(TArray<int32_t> IntArray, int32_t* IndexOfMaxValue, int32_t* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfIntArray");
		
		UVictoryBPFunctionLibrary_MaxOfIntArray_Params params {};
		params.IntArray = IntArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      FloatArray                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IndexOfMaxValue                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::MaxOfFloatArray(TArray<float> FloatArray, int32_t* IndexOfMaxValue, float* MaxValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MaxOfFloatArray");
		
		UVictoryBPFunctionLibrary_MaxOfFloatArray_Params params {};
		params.FloatArray = FloatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndexOfMaxValue != nullptr)
			*IndexOfMaxValue = params.IndexOfMaxValue;
		if (MaxValue != nullptr)
			*MaxValue = params.MaxValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.MapRangeClamped");
		
		UVictoryBPFunctionLibrary_MapRangeClamped_Params params {};
		params.Value = Value;
		params.InRangeA = InRangeA;
		params.InRangeB = InRangeB;
		params.OutRangeA = OutRangeA;
		params.OutRangeB = OutRangeB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::Loops_ResetBPRunawayCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Loops_ResetBPRunawayCounter");
		
		UVictoryBPFunctionLibrary_Loops_ResetBPRunawayCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImagePath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OutHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromFileByExtension(const class FString& ImagePath, bool* IsValid, int32_t* OutWidth, int32_t* OutHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromFileByExtension");
		
		UVictoryBPFunctionLibrary_LoadTexture2D_FromFileByExtension_Params params {};
		params.ImagePath = ImagePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutWidth != nullptr)
			*OutWidth = params.OutWidth;
		if (OutHeight != nullptr)
			*OutHeight = params.OutHeight;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UVictoryBPFunctionLibrary::LoadTexture2D_FromDDSFile(const class FString& FullFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadTexture2D_FromDDSFile");
		
		UVictoryBPFunctionLibrary_LoadTexture2D_FromDDSFile_Params params {};
		params.FullFilePath = FullFilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LoadStringFromFile(class FString* Result, const class FString& FullFilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringFromFile");
		
		UVictoryBPFunctionLibrary_LoadStringFromFile_Params params {};
		params.FullFilePath = FullFilePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              StringArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArraySize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FullFilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ExcludeEmptyLines                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LoadStringArrayFromFile(TArray<class FString>* StringArray, int32_t* ArraySize, const class FString& FullFilePath, bool ExcludeEmptyLines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadStringArrayFromFile");
		
		UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Params params {};
		params.FullFilePath = FullFilePath;
		params.ExcludeEmptyLines = ExcludeEmptyLines;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StringArray != nullptr)
			*StringArray = params.StringArray;
		if (ArraySize != nullptr)
			*ArraySize = params.ArraySize;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ObjectClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Path                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(class UClass* ObjectClass, const class FName& Path, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LoadObjectFromAssetPath");
		
		UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Params params {};
		params.ObjectClass = ObjectClass;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LightSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchOffset                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              YawOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RollOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::LensFlare__GetLensFlareOffsets(class APlayerController* PlayerController, class AActor* LightSource, float* PitchOffset, float* YawOffset, float* RollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.LensFlare__GetLensFlareOffsets");
		
		UVictoryBPFunctionLibrary_LensFlare__GetLensFlareOffsets_Params params {};
		params.PlayerController = PlayerController;
		params.LightSource = LightSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitchOffset != nullptr)
			*PitchOffset = params.PitchOffset;
		if (YawOffset != nullptr)
			*YawOffset = params.YawOffset;
		if (RollOffset != nullptr)
			*RollOffset = params.RollOffset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ctrl                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Shift                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Alt                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Cmd                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::JoyIsKey(const struct FKeyEvent& KeyEvent, const struct FKey& Key, bool* Ctrl, bool* Shift, bool* Alt, bool* Cmd, bool* Match)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyIsKey");
		
		UVictoryBPFunctionLibrary_JoyIsKey_Params params {};
		params.KeyEvent = KeyEvent;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ctrl != nullptr)
			*Ctrl = params.Ctrl;
		if (Shift != nullptr)
			*Shift = params.Shift;
		if (Alt != nullptr)
			*Alt = params.Alt;
		if (Cmd != nullptr)
			*Cmd = params.Cmd;
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoyGraphicsFullScreen                             NewSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Set(EJoyGraphicsFullScreen NewSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Set");
		
		UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Set_Params params {};
		params.NewSetting = NewSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get
	 * 		Flags  -> ()
	 */
	EJoyGraphicsFullScreen UVictoryBPFunctionLibrary::JoyGraphicsSettings__FullScreen_Get()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyGraphicsSettings__FullScreen_Get");
		
		UVictoryBPFunctionLibrary_JoyGraphicsSettings__FullScreen_Get_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      RootFolderFullPath                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ext                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::JoyFileIO_GetFilesInRootAndAllSubFolders(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFilesInRootAndAllSubFolders");
		
		UVictoryBPFunctionLibrary_JoyFileIO_GetFilesInRootAndAllSubFolders_Params params {};
		params.RootFolderFullPath = RootFolderFullPath;
		params.Ext = Ext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Files                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      RootFolderFullPath                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Ext                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::JoyFileIO_GetFiles(TArray<class FString>* Files, const class FString& RootFolderFullPath, const class FString& Ext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.JoyFileIO_GetFiles");
		
		UVictoryBPFunctionLibrary_JoyFileIO_GetFiles_Params params {};
		params.RootFolderFullPath = RootFolderFullPath;
		params.Ext = Ext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Files != nullptr)
			*Files = params.Files;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(class UObject* WorldContextObject, class UClass* WidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsWidgetOfClassInViewport");
		
		UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsStandAlone(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsStandAlone");
		
		UVictoryBPFunctionLibrary_IsStandAlone_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlane                                      Plane                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsPointOnPlane(const struct FPlane& Plane, const struct FCoreUObject_FVector& Point, float Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsPointOnPlane");
		
		UVictoryBPFunctionLibrary_IsPointOnPlane_Params params {};
		params.Plane = Plane;
		params.Point = Point;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::IsAlphaNumeric(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.IsAlphaNumeric");
		
		UVictoryBPFunctionLibrary_IsAlphaNumeric_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Parent                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPanelSlot* UVictoryBPFunctionLibrary::InsertChildAt(class UWidget* Parent, int32_t Index, class UWidget* Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.InsertChildAt");
		
		UVictoryBPFunctionLibrary_InsertChildAt_Params params {};
		params.Parent = Parent;
		params.Index = Index;
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VerticalFOV                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AspectRatio                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::HorizontalFOV(float VerticalFOV, float AspectRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HorizontalFOV");
		
		UVictoryBPFunctionLibrary_HorizontalFOV_Params params {};
		params.VerticalFOV = VerticalFOV;
		params.AspectRatio = AspectRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::HideStreamingLevel(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HideStreamingLevel");
		
		UVictoryBPFunctionLibrary_HideStreamingLevel_Params params {};
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SearchIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchCase                                        SearchCase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchDir                                         SearchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::HasSubstring(const class FString& SearchIn, const class FString& SubString, ESearchCase SearchCase, ESearchDir SearchDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.HasSubstring");
		
		UVictoryBPFunctionLibrary_HasSubstring_Params params {};
		params.SearchIn = SearchIn;
		params.SubString = SubString;
		params.SearchCase = SearchCase;
		params.SearchDir = SearchDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateToBeUnbound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateToBeUnbound");
		
		UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateToBeUnbound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::GraphicsSettings__SetFrameRateCap(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GraphicsSettings__SetFrameRateCap");
		
		UVictoryBPFunctionLibrary_GraphicsSettings__SetFrameRateCap_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 ParentUserWidget                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UWidget* UVictoryBPFunctionLibrary::GetWidgetFromName(class UUserWidget* ParentUserWidget, const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetWidgetFromName");
		
		UVictoryBPFunctionLibrary_GetWidgetFromName_Params params {};
		params.ParentUserWidget = ParentUserWidget;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      ViewportPosition                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECollisionChannel                                  TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetViewportPositionHitResultByChannel(class UObject* WorldContextObject, const struct FCoreUObject_FVector2D& ViewportPosition, ECollisionChannel TraceChannel, bool bTraceComplex, struct FHitResult* OutHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPositionHitResultByChannel");
		
		UVictoryBPFunctionLibrary_GetViewportPositionHitResultByChannel_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ViewportPosition = ViewportPosition;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitResult != nullptr)
			*OutHitResult = params.OutHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      ScreenPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      OutViewportPosition                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetViewportPosition(class UObject* WorldContextObject, const struct FCoreUObject_FVector2D& ScreenPosition, struct FCoreUObject_FVector2D* OutViewportPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetViewportPosition");
		
		UVictoryBPFunctionLibrary_GetViewportPosition_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ScreenPosition = ScreenPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutViewportPosition != nullptr)
			*OutViewportPosition = params.OutViewportPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        ParentLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       ParentRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ChildLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::GetVectorRelativeLocation(const struct FCoreUObject_FVector& ParentLocation, const struct FCoreUObject_FRotator& ParentRotation, const struct FCoreUObject_FVector& ChildLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetVectorRelativeLocation");
		
		UVictoryBPFunctionLibrary_GetVectorRelativeLocation_Params params {};
		params.ParentLocation = ParentLocation;
		params.ParentRotation = ParentRotation;
		params.ChildLocation = ChildLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UnixTimeStamp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FDateTime                      UTCTime                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(int32_t UnixTimeStamp, struct FCoreUObject_FDateTime* UTCTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUTCFromUnixTimeStamp");
		
		UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Params params {};
		params.UnixTimeStamp = UnixTimeStamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UTCTime != nullptr)
			*UTCTime = params.UTCTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAMD                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsNvidia                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsIntel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsUnknown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UnknownId                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::GetUserDisplayAdapterBrand(bool* IsAMD, bool* IsNvidia, bool* IsIntel, bool* IsUnknown, int32_t* UnknownId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUserDisplayAdapterBrand");
		
		UVictoryBPFunctionLibrary_GetUserDisplayAdapterBrand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAMD != nullptr)
			*IsAMD = params.IsAMD;
		if (IsNvidia != nullptr)
			*IsNvidia = params.IsNvidia;
		if (IsIntel != nullptr)
			*IsIntel = params.IsIntel;
		if (IsUnknown != nullptr)
			*IsUnknown = params.IsUnknown;
		if (UnknownId != nullptr)
			*UnknownId = params.UnknownId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FDateTime                      UTCTime                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::GetUnixTimeStamp(const struct FCoreUObject_FDateTime& UTCTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetUnixTimeStamp");
		
		UVictoryBPFunctionLibrary_GetUnixTimeStamp_Params params {};
		params.UTCTime = UTCTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetTimeAlive(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetTimeAlive");
		
		UVictoryBPFunctionLibrary_GetTimeAlive_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Comp                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCoreUObject_FVector>                VertexPositions                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(class UStaticMeshComponent* Comp, TArray<struct FCoreUObject_FVector>* VertexPositions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetStaticMeshVertexLocations");
		
		UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Params params {};
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VertexPositions != nullptr)
			*VertexPositions = params.VertexPositions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FRotator                       ParentRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       ChildRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::GetRotatorRelativeRotation(const struct FCoreUObject_FRotator& ParentRotation, const struct FCoreUObject_FRotator& ChildRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetRotatorRelativeRotation");
		
		UVictoryBPFunctionLibrary_GetRotatorRelativeRotation_Params params {};
		params.ParentRotation = ParentRotation;
		params.ChildRotation = ChildRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID
	 * 		Flags  -> ()
	 */
	int32_t UVictoryBPFunctionLibrary::GetPlayerUniqueNetID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerUniqueNetID");
		
		UVictoryBPFunctionLibrary_GetPlayerUniqueNetID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerStartName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerStart* UVictoryBPFunctionLibrary::GetPlayerStart(class UObject* WorldContextObject, const class FString& PlayerStartName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetPlayerStart");
		
		UVictoryBPFunctionLibrary_GetPlayerStart_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PlayerStartName = PlayerStartName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Obj                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UVictoryBPFunctionLibrary::GetObjectPath(class UObject* Obj)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetObjectPath");
		
		UVictoryBPFunctionLibrary_GetObjectPath_Params params {};
		params.Obj = Obj;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              NamesOfLoadedLevels                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(class UObject* WorldContextObject, TArray<class FString>* NamesOfLoadedLevels)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetNamesOfLoadedLevels");
		
		UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NamesOfLoadedLevels != nullptr)
			*NamesOfLoadedLevels = params.NamesOfLoadedLevels;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevelStreamingDynamic*                      LevelInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLevelStreamInstanceInfo UVictoryBPFunctionLibrary::GetLevelInstanceInfo(class ULevelStreamingDynamic* LevelInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetLevelInstanceInfo");
		
		UVictoryBPFunctionLibrary_GetLevelInstanceInfo_Params params {};
		params.LevelInstance = LevelInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType
	 * 		Flags  -> ()
	 */
	class FName UVictoryBPFunctionLibrary::GetHeadMountedDisplayDeviceType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetHeadMountedDisplayDeviceType");
		
		UVictoryBPFunctionLibrary_GetHeadMountedDisplayDeviceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UVictoryBPFunctionLibrary::GetGenericTeamId(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetGenericTeamId");
		
		UVictoryBPFunctionLibrary_GetGenericTeamId_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UUserWidget* UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetFirstWidgetOfClass");
		
		UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WidgetClass = WidgetClass;
		params.TopLevelOnly = TopLevelOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CollisionComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ClosestPointOnCollision                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetDistanceToCollision(class UPrimitiveComponent* CollisionComponent, const struct FCoreUObject_FVector& Point, struct FCoreUObject_FVector* ClosestPointOnCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceToCollision");
		
		UVictoryBPFunctionLibrary_GetDistanceToCollision_Params params {};
		params.CollisionComponent = CollisionComponent;
		params.Point = Point;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestPointOnCollision != nullptr)
			*ClosestPointOnCollision = params.ClosestPointOnCollision;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CollisionComponent1                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         CollisionComponent2                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        PointOnSurface1                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        PointOnSurface2                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetDistanceBetweenComponentSurfaces(class UPrimitiveComponent* CollisionComponent1, class UPrimitiveComponent* CollisionComponent2, struct FCoreUObject_FVector* PointOnSurface1, struct FCoreUObject_FVector* PointOnSurface2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetDistanceBetweenComponentSurfaces");
		
		UVictoryBPFunctionLibrary_GetDistanceBetweenComponentSurfaces_Params params {};
		params.CollisionComponent1 = CollisionComponent1;
		params.CollisionComponent2 = CollisionComponent2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PointOnSurface1 != nullptr)
			*PointOnSurface1 = params.PointOnSurface1;
		if (PointOnSurface2 != nullptr)
			*PointOnSurface2 = params.PointOnSurface2;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::GetCreationTime(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCreationTime");
		
		UVictoryBPFunctionLibrary_GetCreationTime_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ChildComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::GetComponentRelativeRotation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeRotation");
		
		UVictoryBPFunctionLibrary_GetComponentRelativeRotation_Params params {};
		params.ParentComponent = ParentComponent;
		params.ChildComponent = ChildComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ParentComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ChildComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::GetComponentRelativeLocation(class USceneComponent* ParentComponent, class USceneComponent* ChildComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetComponentRelativeLocation");
		
		UVictoryBPFunctionLibrary_GetComponentRelativeLocation_Params params {};
		params.ParentComponent = ParentComponent;
		params.ChildComponent = ChildComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine
	 * 		Flags  -> ()
	 */
	class FString UVictoryBPFunctionLibrary::GetCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetCommandLine");
		
		UVictoryBPFunctionLibrary_GetCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(class UObject* WorldContextObject, class UClass* ActorClass, const struct FCoreUObject_FVector& Center, float Radius, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfLocation");
		
		UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.Center = Center;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorCenter                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(class UObject* WorldContextObject, class UClass* ActorClass, class AActor* ActorCenter, float Radius, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetClosestActorOfClassInRadiusOfActor");
		
		UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.ActorCenter = ActorCenter;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCoreUObject_FVector>                Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Extent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::GetBoxContainingWorldPoints(TArray<struct FCoreUObject_FVector> Points, struct FCoreUObject_FVector* Center, struct FCoreUObject_FVector* Extent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetBoxContainingWorldPoints");
		
		UVictoryBPFunctionLibrary_GetBoxContainingWorldPoints_Params params {};
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
		if (Extent != nullptr)
			*Extent = params.Extent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartingBoneName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                BoneNames                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(class USkeletalMeshComponent* SkeletalMeshComp, const class FName& StartingBoneName, TArray<class FName>* BoneNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetAllBoneNamesBelowBone");
		
		UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Params params {};
		params.SkeletalMeshComp = SkeletalMeshComp;
		params.StartingBoneName = StartingBoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneNames != nullptr)
			*BoneNames = params.BoneNames;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ChildActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::GetActorRelativeRotation(class AActor* ParentActor, class AActor* ChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeRotation");
		
		UVictoryBPFunctionLibrary_GetActorRelativeRotation_Params params {};
		params.ParentActor = ParentActor;
		params.ChildActor = ChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ChildActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::GetActorRelativeLocation(class AActor* ParentActor, class AActor* ChildActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.GetActorRelativeLocation");
		
		UVictoryBPFunctionLibrary_GetActorRelativeLocation_Params params {};
		params.ParentActor = ParentActor;
		params.ChildActor = ChildActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::FlushPressedKeys(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlushPressedKeys");
		
		UVictoryBPFunctionLibrary_FlushPressedKeys_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FlashContinuous                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxFlashCount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FlashFrequencyMilliseconds                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::FlashGameOnTaskBar(class APlayerController* PC, bool FlashContinuous, int32_t MaxFlashCount, int32_t FlashFrequencyMilliseconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FlashGameOnTaskBar");
		
		UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Params params {};
		params.PC = PC;
		params.FlashContinuous = FlashContinuous;
		params.MaxFlashCount = MaxFlashCount;
		params.FlashFrequencyMilliseconds = FlashFrequencyMilliseconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoyfulFileName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SaveText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowOverWriting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, const class FString& SaveText, bool AllowOverWriting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringTextToFile");
		
		UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Params params {};
		params.SaveDirectory = SaveDirectory;
		params.JoyfulFileName = JoyfulFileName;
		params.SaveText = SaveText;
		params.AllowOverWriting = AllowOverWriting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SaveDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoyfulFileName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveText                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowOverWriting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(const class FString& SaveDirectory, const class FString& JoyfulFileName, TArray<class FString> SaveText, bool AllowOverWriting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.FileIO__SaveStringArrayToFile");
		
		UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Params params {};
		params.SaveDirectory = SaveDirectory;
		params.JoyfulFileName = JoyfulFileName;
		params.SaveText = SaveText;
		params.AllowOverWriting = AllowOverWriting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector2D                      A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ErrorTolerance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::EqualEqual_Vector2DVector2D(const struct FCoreUObject_FVector2D& A, const struct FCoreUObject_FVector2D& B, float ErrorTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.EqualEqual_Vector2DVector2D");
		
		UVictoryBPFunctionLibrary_EqualEqual_Vector2DVector2D_Params params {};
		params.A = A;
		params.B = B;
		params.ErrorTolerance = ErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumPoints                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        YAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ZAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PersistentLines                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::DrawCircle(class UObject* WorldContextObject, const struct FCoreUObject_FVector& Center, float Radius, int32_t NumPoints, float Thickness, const struct FLinearColor& LineColor, const struct FCoreUObject_FVector& YAxis, const struct FCoreUObject_FVector& ZAxis, float Duration, bool PersistentLines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DrawCircle");
		
		UVictoryBPFunctionLibrary_DrawCircle_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Center = Center;
		params.Radius = Radius;
		params.NumPoints = NumPoints;
		params.Thickness = Thickness;
		params.LineColor = LineColor;
		params.YAxis = YAxis;
		params.ZAxis = ZAxis;
		params.Duration = Duration;
		params.PersistentLines = PersistentLines;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Endpoint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromSocket(class USkeletalMeshComponent* Mesh, const struct FCoreUObject_FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromSocket");
		
		UVictoryBPFunctionLibrary_Draw__Thick3DLineFromSocket_Params params {};
		params.Mesh = Mesh;
		params.Endpoint = Endpoint;
		params.Socket = Socket;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Endpoint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineFromCharacterSocket(class AActor* TheCharacter, const struct FCoreUObject_FVector& Endpoint, const class FName& Socket, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineFromCharacterSocket");
		
		UVictoryBPFunctionLibrary_Draw__Thick3DLineFromCharacterSocket_Params params {};
		params.TheCharacter = TheCharacter;
		params.Endpoint = Endpoint;
		params.Socket = Socket;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      StartActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      EndActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Draw__Thick3DLineBetweenActors(class AActor* StartActor, class AActor* EndActor, const struct FLinearColor& LineColor, float Thickness, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Draw__Thick3DLineBetweenActors");
		
		UVictoryBPFunctionLibrary_Draw__Thick3DLineBetweenActors_Params params {};
		params.StartActor = StartActor;
		params.EndActor = EndActor;
		params.LineColor = LineColor;
		params.Thickness = Thickness;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInterface*                          Mat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Parameter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::DoesMaterialHaveParameter(class UMaterialInterface* Mat, const class FName& Parameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DoesMaterialHaveParameter");
		
		UVictoryBPFunctionLibrary_DoesMaterialHaveParameter_Params params {};
		params.Mat = Mat;
		params.Parameter = Parameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AStaticMeshActor*                            TheSMA                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        TestPoint                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ClosestSurfacePoint                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::DistanceToSurface__DistaceOfPointToMeshSurface(class AStaticMeshActor* TheSMA, const struct FCoreUObject_FVector& TestPoint, struct FCoreUObject_FVector* ClosestSurfacePoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.DistanceToSurface__DistaceOfPointToMeshSurface");
		
		UVictoryBPFunctionLibrary_DistanceToSurface__DistaceOfPointToMeshSurface_Params params {};
		params.TheSMA = TheSMA;
		params.TestPoint = TestPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestSurfacePoint != nullptr)
			*ClosestSurfacePoint = params.ClosestSurfacePoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCoreUObject_FVector>                BoneLocations                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Data__GetCharacterBoneLocations(class AActor* TheCharacter, TArray<struct FCoreUObject_FVector>* BoneLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Data__GetCharacterBoneLocations");
		
		UVictoryBPFunctionLibrary_Data__GetCharacterBoneLocations_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoneLocations != nullptr)
			*BoneLocations = params.BoneLocations;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Gamma                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTextureRenderTarget2D* UVictoryBPFunctionLibrary::CreateTextureRenderTarget2D(int32_t Width, int32_t Height, const struct FLinearColor& ClearColor, float Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateTextureRenderTarget2D");
		
		UVictoryBPFunctionLibrary_CreateTextureRenderTarget2D_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.ClearColor = ClearColor;
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      CompClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* UVictoryBPFunctionLibrary::CreatePrimitiveComponent(class UObject* WorldContextObject, class UClass* CompClass, const class FName& Name, const struct FCoreUObject_FVector& Location, const struct FCoreUObject_FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePrimitiveComponent");
		
		UVictoryBPFunctionLibrary_CreatePrimitiveComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CompClass = CompClass;
		params.Name = Name;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Normal                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPlane UVictoryBPFunctionLibrary::CreatePlane(const struct FCoreUObject_FVector& Center, const struct FCoreUObject_FVector& Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreatePlane");
		
		UVictoryBPFunctionLibrary_CreatePlane_Params params {};
		params.Center = Center;
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      TheObjectClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UVictoryBPFunctionLibrary::CreateObject(class UObject* WorldContextObject, class UClass* TheObjectClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateObject");
		
		UVictoryBPFunctionLibrary_CreateObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.TheObjectClass = TheObjectClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FileToHash                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FileToStoreHashTo                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CreateMD5Hash(const class FString& FileToHash, const class FString& FileToStoreHashTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CreateMD5Hash");
		
		UVictoryBPFunctionLibrary_CreateMD5Hash_Params params {};
		params.FileToHash = FileToHash;
		params.FileToStoreHashTo = FileToStoreHashTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SubString                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESearchCase                                        SearchCase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::CountOccurrancesOfSubString(const class FString& Source, const class FString& SubString, ESearchCase SearchCase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CountOccurrancesOfSubString");
		
		UVictoryBPFunctionLibrary_CountOccurrancesOfSubString_Params params {};
		params.Source = Source;
		params.SubString = SubString;
		params.SearchCase = SearchCase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        TheVector                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::Conversions__VectorToRotator(const struct FCoreUObject_FVector& TheVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__VectorToRotator");
		
		UVictoryBPFunctionLibrary_Conversions__VectorToRotator_Params params {};
		params.TheVector = TheVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ConvertedVector                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToVector(const class FString& String, struct FCoreUObject_FVector* ConvertedVector, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToVector");
		
		UVictoryBPFunctionLibrary_Conversions__StringToVector_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedVector != nullptr)
			*ConvertedVector = params.ConvertedVector;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       ConvertedRotator                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToRotator(const class FString& String, struct FCoreUObject_FRotator* ConvertedRotator, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToRotator");
		
		UVictoryBPFunctionLibrary_Conversions__StringToRotator_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedRotator != nullptr)
			*ConvertedRotator = params.ConvertedRotator;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ConvertedColor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Conversions__StringToColor(const class FString& String, struct FLinearColor* ConvertedColor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__StringToColor");
		
		UVictoryBPFunctionLibrary_Conversions__StringToColor_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConvertedColor != nullptr)
			*ConvertedColor = params.ConvertedColor;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FRotator                       TheRotator                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FVector UVictoryBPFunctionLibrary::Conversions__RotatorToVector(const struct FCoreUObject_FRotator& TheRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__RotatorToVector");
		
		UVictoryBPFunctionLibrary_Conversions__RotatorToVector_Params params {};
		params.TheRotator = TheRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ColorAsString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Conversions__ColorToString(const struct FLinearColor& Color, class FString* ColorAsString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversions__ColorToString");
		
		UVictoryBPFunctionLibrary_Conversions__ColorToString_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorAsString != nullptr)
			*ColorAsString = params.ColorAsString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              IN_Float                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVictoryBPFunctionLibrary::Conversion__FloatToRoundedInteger(float IN_Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Conversion__FloatToRoundedInteger");
		
		UVictoryBPFunctionLibrary_Conversion__FloatToRoundedInteger_Params params {};
		params.IN_Float = IN_Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand
	 * 		Flags  -> ()
	 */
	void UVictoryBPFunctionLibrary::constructRand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.constructRand");
		
		UVictoryBPFunctionLibrary_constructRand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMeshComponent*                              Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableStreaming                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CinematicTextureGroups                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Component_PrestreamTextures(class UMeshComponent* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Component_PrestreamTextures");
		
		UVictoryBPFunctionLibrary_Component_PrestreamTextures_Params params {};
		params.Target = Target;
		params.Seconds = Seconds;
		params.bEnableStreaming = bEnableStreaming;
		params.CinematicTextureGroups = CinematicTextureGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MD5HashFile1                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MD5HashFile2                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CompareMD5Hash(const class FString& MD5HashFile1, const class FString& MD5HashFile2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CompareMD5Hash");
		
		UVictoryBPFunctionLibrary_CompareMD5Hash_Params params {};
		params.MD5HashFile1 = MD5HashFile1;
		params.MD5HashFile2 = MD5HashFile2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AStaticMeshActor*                            ToClone                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        LocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       RotationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class AStaticMeshActor* UVictoryBPFunctionLibrary::Clone__StaticMeshActor(class UObject* WorldContextObject, bool* IsValid, class AStaticMeshActor* ToClone, const struct FCoreUObject_FVector& LocationOffset, const struct FCoreUObject_FRotator& RotationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Clone__StaticMeshActor");
		
		UVictoryBPFunctionLibrary_Clone__StaticMeshActor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ToClone = ToClone;
		params.LocationOffset = LocationOffset;
		params.RotationOffset = RotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS
	 * 		Flags  -> ()
	 */
	bool UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.ClientWindow__GameWindowIsForeGroundInOS");
		
		UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewMaxMoveSpeed                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CharacterMovement__SetMaxMoveSpeed(class ACharacter* TheCharacter, float NewMaxMoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CharacterMovement__SetMaxMoveSpeed");
		
		UVictoryBPFunctionLibrary_CharacterMovement__SetMaxMoveSpeed_Params params {};
		params.TheCharacter = TheCharacter;
		params.NewMaxMoveSpeed = NewMaxMoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FRotator UVictoryBPFunctionLibrary::Character__GetControllerRotation(class AActor* TheCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Character__GetControllerRotation");
		
		UVictoryBPFunctionLibrary_Character__GetControllerRotation_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImagePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColour                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(class USceneCaptureComponent2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_SaveImage");
		
		UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Params params {};
		params.Target = Target;
		params.ImagePath = ImagePath;
		params.ClearColour = ClearColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      OutPixelLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::CaptureComponent2D_Project(class USceneCaptureComponent2D* Target, const struct FCoreUObject_FVector& Location, struct FCoreUObject_FVector2D* OutPixelLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.CaptureComponent2D_Project");
		
		UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Params params {};
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPixelLocation != nullptr)
			*OutPixelLocation = params.OutPixelLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASceneCapture2D*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImagePath                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                ClearColour                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Capture2D_SaveImage(class ASceneCapture2D* Target, const class FString& ImagePath, const struct FLinearColor& ClearColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_SaveImage");
		
		UVictoryBPFunctionLibrary_Capture2D_SaveImage_Params params {};
		params.Target = Target;
		params.ImagePath = ImagePath;
		params.ClearColour = ClearColour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASceneCapture2D*                             Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector2D                      OutPixelLocation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Capture2D_Project(class ASceneCapture2D* Target, const struct FCoreUObject_FVector& Location, struct FCoreUObject_FVector2D* OutPixelLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Capture2D_Project");
		
		UVictoryBPFunctionLibrary_Capture2D_Project_Params params {};
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPixelLocation != nullptr)
			*OutPixelLocation = params.OutPixelLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCoreUObject_FVector                        Source                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCoreUObject_FVector>                OtherPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FVector                        ClosestPoint                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVictoryBPFunctionLibrary::Calcs__ClosestPointToSourcePoint(const struct FCoreUObject_FVector& Source, TArray<struct FCoreUObject_FVector> OtherPoints, struct FCoreUObject_FVector* ClosestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Calcs__ClosestPointToSourcePoint");
		
		UVictoryBPFunctionLibrary_Calcs__ClosestPointToSourcePoint_Params params {};
		params.Source = Source;
		params.OtherPoints = OtherPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClosestPoint != nullptr)
			*ClosestPoint = params.ClosestPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TargetArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAscendingOrder                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        VariableName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Array_Sort(TArray<int32_t> TargetArray, bool bAscendingOrder, const class FName& VariableName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_Sort");
		
		UVictoryBPFunctionLibrary_Array_Sort_Params params {};
		params.TargetArray = TargetArray;
		params.bAscendingOrder = bAscendingOrder;
		params.VariableName = VariableName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TargetArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Array_IsValidIndex(TArray<int32_t> TargetArray, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Array_IsValidIndex");
		
		UVictoryBPFunctionLibrary_Array_IsValidIndex_Params params {};
		params.TargetArray = TargetArray;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      A                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::AppendMultiple(const class FString& A, const class FString& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AppendMultiple");
		
		UVictoryBPFunctionLibrary_AppendMultiple_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimBPOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       TheRotation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(class AActor* AnimBPOwner, const struct FCoreUObject_FRotator& TheRotation, float* Pitch, float* Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsetsFromRotation");
		
		UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Params params {};
		params.AnimBPOwner = AnimBPOwner;
		params.TheRotation = TheRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pitch != nullptr)
			*Pitch = params.Pitch;
		if (Yaw != nullptr)
			*Yaw = params.Yaw;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AnimBPOwner                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Pitch                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Yaw                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Animation__GetAimOffsets(class AActor* AnimBPOwner, float* Pitch, float* Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Animation__GetAimOffsets");
		
		UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Params params {};
		params.AnimBPOwner = AnimBPOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pitch != nullptr)
			*Pitch = params.Pitch;
		if (Yaw != nullptr)
			*Yaw = params.Yaw;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLevelStreamInstanceInfo                    LevelInstanceInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::AddToStreamingLevels(class UObject* WorldContextObject, const struct FLevelStreamInstanceInfo& LevelInstanceInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToStreamingLevels");
		
		UVictoryBPFunctionLibrary_AddToStreamingLevels_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LevelInstanceInfo = LevelInstanceInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCoreUObject_FRotator                       AddRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::AddToActorRotation(class AActor* TheActor, const struct FCoreUObject_FRotator& AddRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.AddToActorRotation");
		
		UVictoryBPFunctionLibrary_AddToActorRotation_Params params {};
		params.TheActor = TheActor;
		params.AddRot = AddRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnableStreaming                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CinematicTextureGroups                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Actor_PrestreamTextures(class AActor* Target, float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor_PrestreamTextures");
		
		UVictoryBPFunctionLibrary_Actor_PrestreamTextures_Params params {};
		params.Target = Target;
		params.Seconds = Seconds;
		params.bEnableStreaming = bEnableStreaming;
		params.CinematicTextureGroups = CinematicTextureGroups;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToTeleport                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DestinationActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVictoryBPFunctionLibrary::Actor__TeleportToActor(class AActor* ActorToTeleport, class AActor* DestinationActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__TeleportToActor");
		
		UVictoryBPFunctionLibrary_Actor__TeleportToActor_Params params {};
		params.ActorToTeleport = ActorToTeleport;
		params.DestinationActor = DestinationActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ParentActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPFunctionLibrary::Actor__GetAttachedActors(class AActor* ParentActor, TArray<class AActor*>* ActorsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Actor__GetAttachedActors");
		
		UVictoryBPFunctionLibrary_Actor__GetAttachedActors_Params params {};
		params.ParentActor = ParentActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsArray != nullptr)
			*ActorsArray = params.ActorsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class APlayerController* UVictoryBPFunctionLibrary::Accessor__GetPlayerController(class AActor* TheCharacter, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetPlayerController");
		
		UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     TheObject                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVictoryBPFunctionLibrary::Accessor__GetNameAsString(class UObject* TheObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetNameAsString");
		
		UVictoryBPFunctionLibrary_Accessor__GetNameAsString_Params params {};
		params.TheObject = TheObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TheCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UVictoryBPFunctionLibrary::Accessor__GetCharacterSkeletalMesh(class AActor* TheCharacter, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPFunctionLibrary.Accessor__GetCharacterSkeletalMesh");
		
		UVictoryBPFunctionLibrary_Accessor__GetCharacterSkeletalMesh_Params params {};
		params.TheCharacter = TheCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryBPFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MakeVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVictoryBPHTML::VictoryHTML5_SetCursorVisible(bool MakeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.VictoryHTML5_SetCursorVisible");
		
		UVictoryBPHTML_VictoryHTML5_SetCursorVisible_Params params {};
		params.MakeVisible = MakeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VictoryBPLibrary.VictoryBPHTML.IsHTML
	 * 		Flags  -> ()
	 */
	bool UVictoryBPHTML::IsHTML()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VictoryBPLibrary.VictoryBPHTML.IsHTML");
		
		UVictoryBPHTML_IsHTML_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVictoryBPHTML.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVictoryBPHTML::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryBPHTML");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVictoryISM.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVictoryISM::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VictoryBPLibrary.VictoryISM");
		return ptr;
	}

}


