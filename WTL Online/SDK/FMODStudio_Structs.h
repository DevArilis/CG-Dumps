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
	 * Enum FMODStudio.EFMODEventProperty
	 */
	enum class EFMODEventProperty : uint8_t
	{
		ChannelPriority   = 0,
		ScheduleDelay     = 1,
		ScheduleLookahead = 2,
		MinimumDistance   = 3,
		MaximumDistance   = 4,
		Count             = 5,
		MAX               = 6
	};

	/**
	 * Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
	 */
	enum class EFMOD_STUDIO_STOP_MODE : uint8_t
	{
		ALLOWFADEOUT = 0,
		IMMEDIATE    = 1,
		MAX          = 2
	};

	/**
	 * Enum FMODStudio.EFMODEventControlKey
	 */
	enum class EFMODEventControlKey : uint8_t
	{
		Stop = 0,
		Play = 1,
		MAX  = 2
	};

	/**
	 * Enum FMODStudio.EFMODSpeakerMode
	 */
	enum class EFMODSpeakerMode : uint8_t
	{
		Stereo     = 0,
		Surround_5 = 1,
		Surround_7 = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FMODStudio.FMODAttenuationDetails
	 * Size -> 0x000C
	 */
	struct FFMODAttenuationDetails
	{
	public:
		bool                                                       bOverrideAttenuation;                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7VO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistance;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODOcclusionDetails
	 * Size -> 0x0014
	 */
	struct FFMODOcclusionDetails
	{
	public:
		bool                                                       bEnableOcclusion;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OcclusionTraceChannel;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3AT[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionLowPassFilterFrequency;                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionVolumeAttenuation;                              // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionInterpolationTime;                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseComplexCollisionForOcclusion;                        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZWA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventControlChannel
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	struct FFMODEventControlChannel : public FMovieSceneByteChannel
	{	};

	/**
	 * ScriptStruct FMODStudio.CustomPoolSizes
	 * Size -> 0x0014
	 */
	struct FCustomPoolSizes
	{
	public:
		int32_t                                                    Desktop;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Mobile;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PS4;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Switch;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XboxOne;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventInstance
	 * Size -> 0x0008
	 */
	struct FFMODEventInstance
	{
	public:
		unsigned char                                              UnknownData_G86Q[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventControlSectionTemplate
	 * Size -> 0x0098 (FullSize[0x00B8] - InheritedSize[0x0020])
	 */
	struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FFMODEventControlChannel                            ControlKeys;                                             // 0x0020(0x0098) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
