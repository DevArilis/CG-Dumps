/**
 * Name: WTL
 * Version: 4.26.2
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
	 * 		Name   -> Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_LoadingScreen_Simple_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Construct");
		
		UWBP_LoadingScreen_Simple_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadingScreen_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Tick");
		
		UWBP_LoadingScreen_Simple_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.ExecuteUbergraph_WBP_LoadingScreen_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoadingScreen_Simple_C::ExecuteUbergraph_WBP_LoadingScreen_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.ExecuteUbergraph_WBP_LoadingScreen_Simple");
		
		UWBP_LoadingScreen_Simple_C_ExecuteUbergraph_WBP_LoadingScreen_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_LoadingScreen_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_LoadingScreen_Simple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C");
		return ptr;
	}

}


