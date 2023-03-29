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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct ST_WeatherScheme.ST_WeatherScheme
	 * Size -> 0x0078
	 */
	struct FST_WeatherScheme
	{
	public:
		float                                                      CloudDensity_3_379A086D4DFA6191C20DB7A59428ECD5;         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonIntensity_7_154D98184900D4157902F2A3B572C7FA;        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Saturation_6_B0BEDF37446BAA52764525A933D1D268;           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverallIntensity_11_24DAF7B247FA2997FB47C685BB10D287;    // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunBrightness_13_2566699542EA6AA0BD8640A9D0B34353;       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunLightingIntensity_15_5B5E97EF438AC3E63F1CEEAE5884D260; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SunIntensityMultiplier_36_BF4E3E8F453067E251F7D9A513101A60; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QIVH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveLinearColor*                                   HorizonBaseColorCurve_27_70F23F4944B79D1A5CF720BCB031B796; // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   ZenithBaseColorCurve_28_6077562242BA56F5F17EF8B4D2B2F843; // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   CloudLightColorCurve_29_85BEF7BA4A2300075D6D1AACDB48EA5E; // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   CloudDarkColorCurve_30_9F40C7344D417AC4515E20AC74CF915E; // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   SunColorCurve_31_DA9008094F11BA9741DB55A059D5E7A9;       // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogDensity_38_F99F0D2B4500323900BBDBB70DD2AC66;          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogHeightFalloff_45_524DCC4A4B90EA5F8F9E6BBC1263EA37;    // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogStartDistance_40_05CC49BF40712380F81A5F9A0CDE5A17;    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogCutoffDistance_43_4F93197F41D7D794A4B1188819017667;   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PostProcessSceneColorTint_48_979F9FE6477CA3880EC647ACB5464BEF; // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FogColor_51_738E10244157E6FCB3831FB98A95346B;            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
