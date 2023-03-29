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
	 * Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Construct
	 */
	struct UWBP_LoadingScreen_Simple_C_Construct_Params
	{	};

	/**
	 * Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.Tick
	 */
	struct UWBP_LoadingScreen_Simple_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_LoadingScreen_Simple.WBP_LoadingScreen_Simple_C.ExecuteUbergraph_WBP_LoadingScreen_Simple
	 */
	struct UWBP_LoadingScreen_Simple_C_ExecuteUbergraph_WBP_LoadingScreen_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
