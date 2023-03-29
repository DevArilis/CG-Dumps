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
	 * Enum ChaosSolverEngine.EClusterConnectionTypeEnum
	 */
	enum class EClusterConnectionTypeEnum : uint8_t
	{
		Chaos_PointImplicit                              = 0,
		Chaos_DelaunayTriangulation                      = 1,
		Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
		Chaos_PointImplicitAugmentedWithMinimalDelaunay  = 3,
		Chaos_None                                       = 4,
		Chaos_EClsuterCreationParameters_Max             = 5,
		Chaos_MAX                                        = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
