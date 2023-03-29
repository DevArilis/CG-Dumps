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
	 * 		Name   -> PredefinedFunction UWBP_Common_PremiumButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Common_PremiumButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Common_PremiumButton.WBP_Common_PremiumButton_C");
		return ptr;
	}

}


