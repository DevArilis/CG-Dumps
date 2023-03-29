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
	 * 		Name   -> Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Common_CreditsAmount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.Construct");
		
		UWBP_Common_CreditsAmount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.ExecuteUbergraph_WBP_Common_CreditsAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Common_CreditsAmount_C::ExecuteUbergraph_WBP_Common_CreditsAmount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C.ExecuteUbergraph_WBP_Common_CreditsAmount");
		
		UWBP_Common_CreditsAmount_C_ExecuteUbergraph_WBP_Common_CreditsAmount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Common_CreditsAmount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Common_CreditsAmount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C");
		return ptr;
	}

}


