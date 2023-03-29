#pragma once

/**
 * Name: WTL
 * Version: 4.26.2
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VariantManagerContent.EPropertyValueCategory
	 */
	enum class EPropertyValueCategory : uint8_t
	{
		Undefined        = 0,
		Generic          = 1,
		RelativeLocation = 2,
		RelativeRotation = 3,
		RelativeScale3D  = 4,
		Visibility       = 5,
		Material         = 6,
		Color            = 7,
		Option           = 8,
		MAX              = 9
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
