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
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.SUpdateState
	 */
	struct ABP_PortalTo46Location_C_SUpdateState_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.SUpdateSpawnToxic
	 */
	struct ABP_PortalTo46Location_C_SUpdateSpawnToxic_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.ClientIsPortalActive
	 */
	struct ABP_PortalTo46Location_C_ClientIsPortalActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.ClientPortalActivate
	 */
	struct ABP_PortalTo46Location_C_ClientPortalActivate_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.OnStateEndFinish
	 */
	struct ABP_PortalTo46Location_C_OnStateEndFinish_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.OnStateStartFinish
	 */
	struct ABP_PortalTo46Location_C_OnStateStartFinish_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.CUpdateVFX
	 */
	struct ABP_PortalTo46Location_C_CUpdateVFX_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.CUpdateState
	 */
	struct ABP_PortalTo46Location_C_CUpdateState_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.InitVFX
	 */
	struct ABP_PortalTo46Location_C_InitVFX_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.Init
	 */
	struct ABP_PortalTo46Location_C_Init_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.ReceiveBeginPlay
	 */
	struct ABP_PortalTo46Location_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.ReceiveTick
	 */
	struct ABP_PortalTo46Location_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.BndEvt__BP_PortalTo46Location_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_PortalTo46Location_C_BndEvt__BP_PortalTo46Location_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WJ40[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PortalTo46Location.BP_PortalTo46Location_C.ExecuteUbergraph_BP_PortalTo46Location
	 */
	struct ABP_PortalTo46Location_C_ExecuteUbergraph_BP_PortalTo46Location_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
