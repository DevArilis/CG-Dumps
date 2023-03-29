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
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.InitVFX
	 */
	struct ABP_ToxicToadstool_Event462023_C_InitVFX_Params
	{	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.BPCanBeUsed
	 */
	struct ABP_ToxicToadstool_Event462023_C_BPCanBeUsed_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CN7A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.CUpdateState
	 */
	struct ABP_ToxicToadstool_Event462023_C_CUpdateState_Params
	{	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.BPGetDisplayText
	 */
	struct ABP_ToxicToadstool_Event462023_C_BPGetDisplayText_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.ReceiveBeginPlay
	 */
	struct ABP_ToxicToadstool_Event462023_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.ReceiveTick
	 */
	struct ABP_ToxicToadstool_Event462023_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.BPUse
	 */
	struct ABP_ToxicToadstool_Event462023_C_BPUse_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.ClientOnUse
	 */
	struct ABP_ToxicToadstool_Event462023_C_ClientOnUse_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.BPOnTakeItem
	 */
	struct ABP_ToxicToadstool_Event462023_C_BPOnTakeItem_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ToxicToadstool_Event462023.BP_ToxicToadstool_Event462023_C.ExecuteUbergraph_BP_ToxicToadstool_Event462023
	 */
	struct ABP_ToxicToadstool_Event462023_C_ExecuteUbergraph_BP_ToxicToadstool_Event462023_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
