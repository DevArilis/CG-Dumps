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
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetPostProcessColorTint
	 */
	struct AUltra_Dynamic_Sky_BP_C_GetPostProcessColorTint_Params
	{
	public:
		struct FLinearColor                                        PostProcessColor;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.GetWeatherScheme
	 */
	struct AUltra_Dynamic_Sky_BP_C_GetWeatherScheme_Params
	{
	public:
		EWTLWeatherType                                            WeatherType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P1IJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FST_WeatherScheme                                   Scheme;                                                  // 0x0008(0x0078)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Material Variables
	 */
	struct AUltra_Dynamic_Sky_BP_C_SetMaterialVariables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.Set Solar Angle
	 */
	struct AUltra_Dynamic_Sky_BP_C_SetSolarAngle_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Sky_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveBeginPlay
	 */
	struct AUltra_Dynamic_Sky_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Sky_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky_BP.Ultra_Dynamic_Sky_BP_C.ExecuteUbergraph_Ultra_Dynamic_Sky_BP
	 */
	struct AUltra_Dynamic_Sky_BP_C_ExecuteUbergraph_Ultra_Dynamic_Sky_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
