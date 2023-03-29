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
	 * Function MainMenu.MainMenu_C.ReceiveTick
	 */
	struct AMainMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToOriginalPoint
	 */
	struct AMainMenu_C_MoveCameraToOriginalPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterTorsoPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterTorsoPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterHeadPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterHeadPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterLegsPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterLegsPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterFeetPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterFeetPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterWatchesPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterWatchesPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterBackpackPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterBackpackPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.MoveCameraToCharacterCommonPoint
	 */
	struct AMainMenu_C_MoveCameraToCharacterCommonPoint_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ReceiveBeginPlay
	 */
	struct AMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
	 */
	struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZFYY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
