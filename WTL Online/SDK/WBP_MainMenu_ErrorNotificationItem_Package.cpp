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
	 * 		Name   -> Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_ErrorNotificationItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.Construct");
		
		UWBP_MainMenu_ErrorNotificationItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_ErrorNotificationItem_C::ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C.ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem");
		
		UWBP_MainMenu_ErrorNotificationItem_C_ExecuteUbergraph_WBP_MainMenu_ErrorNotificationItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_ErrorNotificationItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_ErrorNotificationItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_ErrorNotificationItem.WBP_MainMenu_ErrorNotificationItem_C");
		return ptr;
	}

}


