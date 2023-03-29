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
	 * 		Name   -> Function WBP_MainMenu_CharacterSelect.WBP_MainMenu_CharacterSelect_C.InitializeBlueprint
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_CharacterSelect_C::InitializeBlueprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_CharacterSelect.WBP_MainMenu_CharacterSelect_C.InitializeBlueprint");
		
		UWBP_MainMenu_CharacterSelect_C_InitializeBlueprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_CharacterSelect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_CharacterSelect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_CharacterSelect.WBP_MainMenu_CharacterSelect_C");
		return ptr;
	}

}


