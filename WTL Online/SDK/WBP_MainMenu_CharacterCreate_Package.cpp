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
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_CharacterCreate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_CharacterCreate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_CharacterCreate.WBP_MainMenu_CharacterCreate_C");
		return ptr;
	}

}


