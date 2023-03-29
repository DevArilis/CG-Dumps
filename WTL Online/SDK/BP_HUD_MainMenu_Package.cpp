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
	 * 		Name   -> PredefinedFunction ABP_HUD_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HUD_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_MainMenu.BP_HUD_MainMenu_C");
		return ptr;
	}

}


