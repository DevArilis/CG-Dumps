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
	 * Function WTL.WTLSteamMainMenuLevelScriptActor.ShowInventoryItems
	 */
	struct AWTLSteamMainMenuLevelScriptActor_ShowInventoryItems_Params
	{	};

	/**
	 * Function WTL.WTLSteamMainMenuLevelScriptActor.Authorize
	 */
	struct AWTLSteamMainMenuLevelScriptActor_Authorize_Params
	{	};

	/**
	 * Function WTL.WTLSteelTarget.OnRep_RecoveryCooldown
	 */
	struct AWTLSteelTarget_OnRep_RecoveryCooldown_Params
	{	};

	/**
	 * Function WTL.WTLSteelTarget.OnRep_IsActivate
	 */
	struct AWTLSteelTarget_OnRep_IsActivate_Params
	{	};

	/**
	 * Function WTL.WTLSteelTarget.NetMulticast_UpdateImpulseValue
	 */
	struct AWTLSteelTarget_NetMulticast_UpdateImpulseValue_Params
	{
	public:
		float                                                      Impulse;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLSteelTarget.Deactivate
	 */
	struct AWTLSteelTarget_Deactivate_Params
	{	};

	/**
	 * Function WTL.WTLSteelTarget.BPOnTargetHit
	 */
	struct AWTLSteelTarget_BPOnTargetHit_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ImpulseValue;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLSteelTarget.Activate
	 */
	struct AWTLSteelTarget_Activate_Params
	{	};

	/**
	 * Function WTL.WTLTacticalGrenade.OnRep_CurrentCondition
	 */
	struct AWTLTacticalGrenade_OnRep_CurrentCondition_Params
	{	};

	/**
	 * Function WTL.WTLTacticalGrenade.OnOverlapEnd
	 */
	struct AWTLTacticalGrenade_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.OnOverlapBegin
	 */
	struct AWTLTacticalGrenade_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I78A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.OnConditionChanged
	 */
	struct AWTLTacticalGrenade_OnConditionChanged_Params
	{
	public:
		float                                                      inCurrentCondition;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.NetMulticast_StuntCharacter
	 */
	struct AWTLTacticalGrenade_NetMulticast_StuntCharacter_Params
	{
	public:
		struct FVector                                             ImpactPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.BPSwitchMaterialColor
	 */
	struct AWTLTacticalGrenade_BPSwitchMaterialColor_Params
	{
	public:
		float                                                      CondionPercent;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.BPDestroyFX
	 */
	struct AWTLTacticalGrenade_BPDestroyFX_Params
	{	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_IsInSafeZone
	 */
	struct AWTLTacticalGrenade_AIInterface_IsInSafeZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_IsCanBeAttacked
	 */
	struct AWTLTacticalGrenade_AIInterface_IsCanBeAttacked_Params
	{
	public:
		EWTLFaction                                                InstigatorFaction;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_IsAlive
	 */
	struct AWTLTacticalGrenade_AIInterface_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_GetVelocity
	 */
	struct AWTLTacticalGrenade_AIInterface_GetVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_GetGroupID
	 */
	struct AWTLTacticalGrenade_AIInterface_GetGroupID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalGrenade.AIInterface_GetFaction
	 */
	struct AWTLTacticalGrenade_AIInterface_GetFaction_Params
	{
	public:
		EWTLFaction                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalWeapon.SetPreviewMeshVisibility
	 */
	struct AWTLTacticalWeapon_SetPreviewMeshVisibility_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTacticalWeapon.Server_StopUse
	 */
	struct AWTLTacticalWeapon_Server_StopUse_Params
	{	};

	/**
	 * Function WTL.WTLTacticalWeapon.Server_StartUse
	 */
	struct AWTLTacticalWeapon_Server_StartUse_Params
	{	};

	/**
	 * Function WTL.WTLTacticalWeapon.NetMulticast_OnUse
	 */
	struct AWTLTacticalWeapon_NetMulticast_OnUse_Params
	{	};

	/**
	 * Function WTL.WTLTacticalWeapon.NetMulticast_OnPlace
	 */
	struct AWTLTacticalWeapon_NetMulticast_OnPlace_Params
	{	};

	/**
	 * Function WTL.WTLTacticalWeapon.Client_ShowPlacementMesh
	 */
	struct AWTLTacticalWeapon_Client_ShowPlacementMesh_Params
	{	};

	/**
	 * Function WTL.WTLTiltComponent.OnRep_TiltState
	 */
	struct UWTLTiltComponent_OnRep_TiltState_Params
	{	};

	/**
	 * Function WTL.WTLTransitionLevelScriptActor.OnLevelLoaded
	 */
	struct AWTLTransitionLevelScriptActor_OnLevelLoaded_Params
	{	};

	/**
	 * Function WTL.WTLTriggerObject.ShowNote
	 */
	struct AWTLTriggerObject_ShowNote_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                NoteName;                                                // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    NoteID;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.SetQuestState
	 */
	struct AWTLTriggerObject_SetQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             State;                                                   // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerCheckResult                                     Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.OnEndUse
	 */
	struct AWTLTriggerObject_OnEndUse_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.OnCharacterUse
	 */
	struct AWTLTriggerObject_OnCharacterUse_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.OnCharacterCanBeUsed
	 */
	struct AWTLTriggerObject_OnCharacterCanBeUsed_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.HasQuestWithQuestState
	 */
	struct AWTLTriggerObject_HasQuestWithQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             QuestState;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.GetTriggerActionType
	 */
	struct AWTLTriggerObject_GetTriggerActionType_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerObjectActionType                                ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.GetQuestState
	 */
	struct AWTLTriggerObject_GetQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             QuestState;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.CharacterTakeQuest
	 */
	struct AWTLTriggerObject_CharacterTakeQuest_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerCheckResult                                     Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.CharacterCompleteQuest
	 */
	struct AWTLTriggerObject_CharacterCompleteQuest_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerCheckResult                                     Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.CharacterCanTakeQuest
	 */
	struct AWTLTriggerObject_CharacterCanTakeQuest_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerCheckResult                                     Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.CharacterCanCompleteQuest
	 */
	struct AWTLTriggerObject_CharacterCanCompleteQuest_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerCheckResult                                     Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.CanQuestBeCompleted
	 */
	struct AWTLTriggerObject_CanQuestBeCompleted_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerObject.BeginInformationDialog
	 */
	struct AWTLTriggerObject_BeginInformationDialog_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InformationDialogID;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerStateObject.OnRep_State
	 */
	struct AWTLTriggerStateObject_OnRep_State_Params
	{	};

	/**
	 * Function WTL.WTLTriggerStateObject.OnCharacterUse
	 */
	struct AWTLTriggerStateObject_OnCharacterUse_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerObjectState                                     NewState;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.SwitchCharacterQuestState
	 */
	struct AWTLTriggerVolume_SwitchCharacterQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             QuestState;                                              // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.ShowCharacterActionTimerWidget
	 */
	struct AWTLTriggerVolume_ShowCharacterActionTimerWidget_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLActionTimerWidgetType                                  Type;                                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLCountdownSliderWidgetFillingType                       Direction;                                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.SetCharacterQuestState
	 */
	struct AWTLTriggerVolume_SetCharacterQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             QuestState;                                              // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerActionResult                                    Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.OnEndOverlap
	 */
	struct AWTLTriggerVolume_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.OnCharacterLeave
	 */
	struct AWTLTriggerVolume_OnCharacterLeave_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.OnCharacterEnter
	 */
	struct AWTLTriggerVolume_OnCharacterEnter_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.OnBeginOverlap
	 */
	struct AWTLTriggerVolume_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ACNA[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.HideCharacterActionTimerWidget
	 */
	struct AWTLTriggerVolume_HideCharacterActionTimerWidget_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.GiveItemToCharacter
	 */
	struct AWTLTriggerVolume_GiveItemToCharacter_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLItemType                                               ItemType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DLZY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemTypeID;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLTriggerActionResult                                    Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.GiveItemsToCharacter
	 */
	struct AWTLTriggerVolume_GiveItemsToCharacter_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FWTLGiveItemInfo>                            ItemsToGive;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EWTLTriggerActionResult                                    Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.GetCharactersQuestState
	 */
	struct AWTLTriggerVolume_GetCharactersQuestState_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    QuestID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLQuestState                                             ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.GetCharactersCount
	 */
	struct AWTLTriggerVolume_GetCharactersCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.CheckCharacterHaveItem
	 */
	struct AWTLTriggerVolume_CheckCharacterHaveItem_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWTLItemType                                               ItemType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EP9D[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemTypeID;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CheckContainers;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTriggerVolume.CharacterInVolume
	 */
	struct AWTLTriggerVolume_CharacterInVolume_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTutorialVolume.OnBeginOverlap
	 */
	struct AWTLTutorialVolume_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8KKR[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUndergroundVolume.OnEndOverlap
	 */
	struct AWTLUndergroundVolume_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUndergroundVolume.OnBeginOverlap
	 */
	struct AWTLUndergroundVolume_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6FPS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnValueSliderChanged
	 */
	struct UWTLUtilityColorPicker_OnValueSliderChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnSaturationSliderChanged
	 */
	struct UWTLUtilityColorPicker_OnSaturationSliderChanged_Params
	{
	public:
		float                                                      Saturation;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnHueSliderChanged
	 */
	struct UWTLUtilityColorPicker_OnHueSliderChanged_Params
	{
	public:
		float                                                      Hue;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnHexCommitted
	 */
	struct UWTLUtilityColorPicker_OnHexCommitted_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnHexChanged
	 */
	struct UWTLUtilityColorPicker_OnHexChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityColorPicker.OnAlphaSliderChanged
	 */
	struct UWTLUtilityColorPicker_OnAlphaSliderChanged_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityNumberTextBox.OnNumberTextCommitted
	 */
	struct UWTLUtilityNumberTextBox_OnNumberTextCommitted_Params
	{
	public:
		class FText                                                NumberText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLUtilityNumberTextBox.OnNumberTextChanged
	 */
	struct UWTLUtilityNumberTextBox_OnNumberTextChanged_Params
	{
	public:
		class FText                                                NumberText;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.MasterServerBlueprintLibrary.UpdateAccountStatistics
	 */
	struct UMasterServerBlueprintLibrary_UpdateAccountStatistics_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ParameterID;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Delta;                                                   // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.MasterServerBlueprintLibrary.TriggerAccountAchievement
	 */
	struct UMasterServerBlueprintLibrary_TriggerAccountAchievement_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AchievementID;                                           // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLTestingBlueprintLibrary.ProcessSteamInventoryItem
	 */
	struct UWTLTestingBlueprintLibrary_ProcessSteamInventoryItem_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.UpdateObstruction
	 */
	struct AWTLVehiclePawn_UpdateObstruction_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.SetVehicleMeshVisibility
	 */
	struct AWTLVehiclePawn_SetVehicleMeshVisibility_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.SetIsInAnomaly
	 */
	struct AWTLVehiclePawn_SetIsInAnomaly_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_VehicleEnteredInWater
	 */
	struct AWTLVehiclePawn_Server_VehicleEnteredInWater_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_UseHorn
	 */
	struct AWTLVehiclePawn_Server_UseHorn_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_UpdateObstruction
	 */
	struct AWTLVehiclePawn_Server_UpdateObstruction_Params
	{
	public:
		struct FVector                                             ImpactPoint;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_ToggleRadio
	 */
	struct AWTLVehiclePawn_Server_ToggleRadio_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_ToggleHeadlight
	 */
	struct AWTLVehiclePawn_Server_ToggleHeadlight_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_SetMoveRightPressed
	 */
	struct AWTLVehiclePawn_Server_SetMoveRightPressed_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_SetEngineBraking
	 */
	struct AWTLVehiclePawn_Server_SetEngineBraking_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_RequestEject
	 */
	struct AWTLVehiclePawn_Server_RequestEject_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_PlayStun
	 */
	struct AWTLVehiclePawn_Server_PlayStun_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_LeaveVehicle
	 */
	struct AWTLVehiclePawn_Server_LeaveVehicle_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_Kick
	 */
	struct AWTLVehiclePawn_Server_Kick_Params
	{
	public:
		float                                                      KickVelocity;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_EjectCharacterFromVehicle
	 */
	struct AWTLVehiclePawn_Server_EjectCharacterFromVehicle_Params
	{
	public:
		EWTLCharacterStunhitDirection                              Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_CharacterIsUnderground
	 */
	struct AWTLVehiclePawn_Server_CharacterIsUnderground_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_BrakeReleased
	 */
	struct AWTLVehiclePawn_Server_BrakeReleased_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Server_BrakePressed
	 */
	struct AWTLVehiclePawn_Server_BrakePressed_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.PlayVehicleAnimMontage
	 */
	struct AWTLVehiclePawn_PlayVehicleAnimMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.PlayHightGravityVehicleMontage
	 */
	struct AWTLVehiclePawn_PlayHightGravityVehicleMontage_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_VehicleMeshVisibility
	 */
	struct AWTLVehiclePawn_OnRep_VehicleMeshVisibility_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_UseRadio
	 */
	struct AWTLVehiclePawn_OnRep_UseRadio_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_UseHeadlight
	 */
	struct AWTLVehiclePawn_OnRep_UseHeadlight_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_PlayHightGravityMontage
	 */
	struct AWTLVehiclePawn_OnRep_PlayHightGravityMontage_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_LeaveVehicle
	 */
	struct AWTLVehiclePawn_OnRep_LeaveVehicle_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_ItemInventoryID
	 */
	struct AWTLVehiclePawn_OnRep_ItemInventoryID_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_IsInAmomaly
	 */
	struct AWTLVehiclePawn_OnRep_IsInAmomaly_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_EngineBraking
	 */
	struct AWTLVehiclePawn_OnRep_EngineBraking_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_EjectCharacter
	 */
	struct AWTLVehiclePawn_OnRep_EjectCharacter_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.OnRep_BrakePressed
	 */
	struct AWTLVehiclePawn_OnRep_BrakePressed_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.NetMulticast_UseHorn
	 */
	struct AWTLVehiclePawn_NetMulticast_UseHorn_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.NetMulticast_PlayVehicleAnimMontage
	 */
	struct AWTLVehiclePawn_NetMulticast_PlayVehicleAnimMontage_Params
	{
	public:
		class UAnimMontage*                                        Montag;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rate;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.NetMulticast_PlayUnlandingMontage
	 */
	struct AWTLVehiclePawn_NetMulticast_PlayUnlandingMontage_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.NetMulticast_PlayLandingMontage
	 */
	struct AWTLVehiclePawn_NetMulticast_PlayLandingMontage_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.NetMulticast_EjectCharacter
	 */
	struct AWTLVehiclePawn_NetMulticast_EjectCharacter_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_VehicleCustomEvent
	 */
	struct AWTLVehiclePawn_K2_VehicleCustomEvent_Params
	{
	public:
		class FName                                                TriggerName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_UpdateHeadLight
	 */
	struct AWTLVehiclePawn_K2_UpdateHeadLight_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_SetStoplight
	 */
	struct AWTLVehiclePawn_K2_SetStoplight_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_SetRadio
	 */
	struct AWTLVehiclePawn_K2_SetRadio_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_SetHighlight
	 */
	struct AWTLVehiclePawn_K2_SetHighlight_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_SetHeadlight
	 */
	struct AWTLVehiclePawn_K2_SetHeadlight_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Mode;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.K2_ConditionChanged
	 */
	struct AWTLVehiclePawn_K2_ConditionChanged_Params
	{
	public:
		float                                                      NewCondition;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.IsCharacterUnderground
	 */
	struct AWTLVehiclePawn_IsCharacterUnderground_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.GetVehicleState
	 */
	struct AWTLVehiclePawn_GetVehicleState_Params
	{
	public:
		EWTLVehicleState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetVehicleMesh
	 */
	struct AWTLVehiclePawn_GetVehicleMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetVehicleHighGravityMontage
	 */
	struct AWTLVehiclePawn_GetVehicleHighGravityMontage_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetSpeed
	 */
	struct AWTLVehiclePawn_GetSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetRearWheelRotationAngle
	 */
	struct AWTLVehiclePawn_GetRearWheelRotationAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetNormalizedSpeedSigned
	 */
	struct AWTLVehiclePawn_GetNormalizedSpeedSigned_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetNormalizedSpeed
	 */
	struct AWTLVehiclePawn_GetNormalizedSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetMaxSpeed
	 */
	struct AWTLVehiclePawn_GetMaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetIsInAnomaly
	 */
	struct AWTLVehiclePawn_GetIsInAnomaly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetFrontWheelRotationAngle
	 */
	struct AWTLVehiclePawn_GetFrontWheelRotationAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetForwardWheelAngle
	 */
	struct AWTLVehiclePawn_GetForwardWheelAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentSpeedSigned
	 */
	struct AWTLVehiclePawn_GetCurrentSpeedSigned_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentSpeed
	 */
	struct AWTLVehiclePawn_GetCurrentSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentRootBoneOffset
	 */
	struct AWTLVehiclePawn_GetCurrentRootBoneOffset_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentRollValue
	 */
	struct AWTLVehiclePawn_GetCurrentRollValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentForwardInputValue
	 */
	struct AWTLVehiclePawn_GetCurrentForwardInputValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentForwardAbsorberOffset
	 */
	struct AWTLVehiclePawn_GetCurrentForwardAbsorberOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCurrentBackwardAbsorberOffset
	 */
	struct AWTLVehiclePawn_GetCurrentBackwardAbsorberOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCharacterStateInVehicle
	 */
	struct AWTLVehiclePawn_GetCharacterStateInVehicle_Params
	{
	public:
		EWTLCharacterStateInVehicle                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.GetCharacterIsStunned
	 */
	struct AWTLVehiclePawn_GetCharacterIsStunned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.EnterInVehicle
	 */
	struct AWTLVehiclePawn_EnterInVehicle_Params
	{
	public:
		class AWTLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Client_ResetCamera
	 */
	struct AWTLVehiclePawn_Client_ResetCamera_Params
	{	};

	/**
	 * Function WTL.WTLVehiclePawn.Client_OnUpdateInVehicle
	 */
	struct AWTLVehiclePawn_Client_OnUpdateInVehicle_Params
	{
	public:
		bool                                                       IsInVehicle;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVehiclePawn.Client_OnPossessed
	 */
	struct AWTLVehiclePawn_Client_OnPossessed_Params
	{	};

	/**
	 * Function WTL.WTLVolumePortal.OnEndOverlap
	 */
	struct AWTLVolumePortal_OnEndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLVolumePortal.OnBeginOverlap
	 */
	struct AWTLVolumePortal_OnBeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_61SP[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLWeaponAnimInstance.GetCharacter
	 */
	struct UWTLWeaponAnimInstance_GetCharacter_Params
	{
	public:
		class AWTLCharacter*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function WTL.WTLWeaponAttachment.Client_SetMesh
	 */
	struct UWTLWeaponAttachment_Client_SetMesh_Params
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
