﻿#pragma once

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
	 * Enum OnlineSubsystem.EInAppPurchaseState
	 */
	enum class EInAppPurchaseState : uint8_t
	{
		Unknown      = 0,
		Success      = 1,
		Failed       = 2,
		Cancelled    = 3,
		Invalid      = 4,
		NotAllowed   = 5,
		Restored     = 6,
		AlreadyOwned = 7,
		MAX          = 8
	};

	/**
	 * Enum OnlineSubsystem.EMPMatchOutcome
	 */
	enum class EMPMatchOutcome : uint8_t
	{
		None        = 0,
		Quit        = 1,
		Won         = 2,
		Lost        = 3,
		Tied        = 4,
		TimeExpired = 5,
		First       = 6,
		Second      = 7,
		Third       = 8,
		Fourth      = 9,
		MAX         = 10
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
