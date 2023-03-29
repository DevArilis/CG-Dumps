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
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnIsAlive
	 */
	struct ABP_Seagull_FishingEviroment_C_OnIsAlive_Params
	{	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.OnRep_IsAlive
	 */
	struct ABP_Seagull_FishingEviroment_C_OnRep_IsAlive_Params
	{	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveBeginPlay
	 */
	struct ABP_Seagull_FishingEviroment_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Seagull_FishingEviroment_C_BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4HRB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveTick
	 */
	struct ABP_Seagull_FishingEviroment_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Seagull_FishingEviroment_C_BndEvt__BP_Seagull_FishingEviroment_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ReceiveAnyDamage
	 */
	struct ABP_Seagull_FishingEviroment_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SAWM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Seagull_FishingEviroment.BP_Seagull_FishingEviroment_C.ExecuteUbergraph_BP_Seagull_FishingEviroment
	 */
	struct ABP_Seagull_FishingEviroment_C_ExecuteUbergraph_BP_Seagull_FishingEviroment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
