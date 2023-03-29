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
	 * Enum AudioMixer.EMusicalNoteName
	 */
	enum class EMusicalNoteName : uint8_t
	{
		C   = 0,
		Db  = 1,
		D   = 2,
		Eb  = 3,
		E   = 4,
		F   = 5,
		Gb  = 6,
		G   = 7,
		Ab  = 8,
		A   = 9,
		Bb  = 10,
		B   = 11,
		MAX = 12
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
	 */
	enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
	{
		Disabled = 0,
		Average  = 1,
		Peak     = 2,
		Count    = 3,
		MAX      = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsPeakMode
	 */
	enum class ESubmixEffectDynamicsPeakMode : uint8_t
	{
		MeanSquared     = 0,
		RootMeanSquared = 1,
		Peak            = 2,
		Count           = 3,
		MAX             = 4
	};

	/**
	 * Enum AudioMixer.ESubmixEffectDynamicsProcessorType
	 */
	enum class ESubmixEffectDynamicsProcessorType : uint8_t
	{
		Compressor = 0,
		Limiter    = 1,
		Expander   = 2,
		Gate       = 3,
		Count      = 4,
		MAX        = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
