/**
 * Name: TRIALS
 * Version: FINAL
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
	 * 		Name   -> Function Library_BP.Library_BP_C.BookSeedFunc
	 * 		Flags  -> ()
	 */
	void ALibrary_BP_C::BookSeedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Library_BP.Library_BP_C.BookSeedFunc");
		
		ALibrary_BP_C_BookSeedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Library_BP.Library_BP_C.PlaceBook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShelfHeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LibraryBottomHeight                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SeperatorSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NewBookSeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UStaticMesh*                                 Separator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibrary_BP_C::PlaceBook(float Location, float ShelfHeight, float LibraryBottomHeight, float SeperatorSize, float NewBookSeed, class UStaticMesh* Separator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Library_BP.Library_BP_C.PlaceBook");
		
		ALibrary_BP_C_PlaceBook_Params params {};
		params.Location = Location;
		params.ShelfHeight = ShelfHeight;
		params.LibraryBottomHeight = LibraryBottomHeight;
		params.SeperatorSize = SeperatorSize;
		params.NewBookSeed = NewBookSeed;
		params.Separator = Separator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Library_BP.Library_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ALibrary_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Library_BP.Library_BP_C.UserConstructionScript");
		
		ALibrary_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALibrary_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALibrary_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Library_BP.Library_BP_C");
		return ptr;
	}

}


