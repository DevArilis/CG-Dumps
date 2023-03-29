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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class WTL.WTLSteamHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWTLSteamHelper : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLSteamMainMenuLevelScriptActor
	 * Size -> 0x0010 (FullSize[0x0648] - InheritedSize[0x0638])
	 */
	class AWTLSteamMainMenuLevelScriptActor : public AWTLLevelScriptActor
	{
	public:
		class FString                                              SteamServerID;                                           // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ShowInventoryItems();
		void Authorize();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLSteelTarget
	 * Size -> 0x00E8 (FullSize[0x0308] - InheritedSize[0x0220])
	 */
	class AWTLSteelTarget : public AActor
	{
	public:
		bool                                                       m_IsActivate;                                            // 0x0220(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LA8D[0xB];                                   // 0x0221(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_RecoveryCooldown;                                      // 0x022C(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      m_FallImpulseMultiplier;                                 // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      m_RecoverySpeed;                                         // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      m_MaximumImpulseValue;                                   // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinRecoveryCooldownTime;                                 // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxRecoveryCooldownTime;                                 // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_53KL[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         RecoverCurve;                                            // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         FallCurve;                                               // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_16QB[0x40];                                  // 0x0258(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StandMesh;                                               // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                TargetMesh;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFSteelTargetType                                          Type;                                                    // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P4TY[0x3];                                   // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HitsToFall;                                              // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RiseDelayMin;                                            // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      RiseDelayMax;                                            // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              FallSound[0x28];                                         // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              RiseSound[0x28];                                         // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void OnRep_RecoveryCooldown();
		void OnRep_IsActivate();
		void NetMulticast_UpdateImpulseValue(float Impulse);
		void Deactivate();
		void BPOnTargetHit(class AWTLCharacter* Character, float ImpulseValue);
		void Activate();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLStorageObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWTLStorageObjectInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLStuffPlacementZone
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class AWTLStuffPlacementZone : public AVolume
	{
	public:
		TArray<int32_t>                                            AllowedStuffIDS;                                         // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLSublevelScriptActor
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class AWTLSublevelScriptActor : public ALevelScriptActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTacticalGrenade
	 * Size -> 0x0100 (FullSize[0x0320] - InheritedSize[0x0220])
	 */
	class AWTLTacticalGrenade : public AWTLStaticReplicatedActor
	{
	public:
		unsigned char                                              UnknownData_2KM0[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    RootSphere;                                              // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                ShieldLeftSide;                                          // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                ShieldRightSide;                                         // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      CurrentCondition;                                        // 0x0240(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Condition;                                               // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Time;                                                    // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinMeshScaleY;                                           // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinMeshScaleZ;                                           // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TraceDistance;                                           // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TraceDistanceUp;                                         // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TraceStartOffsetX;                                       // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TraceStartOffsetZ;                                       // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MonsterDamageMultiplier;                                 // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            DestructiveProjectileIDList;                             // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       StunRuningCharacters;                                    // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P7LL[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BackgroundSound[0x28];                                   // 0x0280(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HitFX[0x28];                                             // 0x02A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ImpactSound[0x28];                                       // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IgnoreEnvironment;                                       // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QSDI[0x27];                                  // 0x02F9(0x0027) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentCondition();
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnConditionChanged(float inCurrentCondition);
		void NetMulticast_StuntCharacter(const struct FVector& ImpactPosition);
		void BPSwitchMaterialColor(float CondionPercent);
		void BPDestroyFX();
		bool AIInterface_IsInSafeZone();
		bool AIInterface_IsCanBeAttacked(EWTLFaction InstigatorFaction);
		bool AIInterface_IsAlive();
		struct FVector AIInterface_GetVelocity();
		int32_t AIInterface_GetGroupID();
		EWTLFaction AIInterface_GetFaction();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTacticalWeapon
	 * Size -> 0x00A8 (FullSize[0x0478] - InheritedSize[0x03D0])
	 */
	class AWTLTacticalWeapon : public AWTLWeapon
	{
	public:
		unsigned char                                              UnknownData_NOTM[0x38];                                  // 0x03D0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0408(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YLPB[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemAnimationSet                                   ActivateSequenceSet;                                     // 0x0418(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   CanBePlacedMaterial;                                     // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstance*                                   CanNotBePlacedMaterial;                                  // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlaceAngle;                                           // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationTime;                                          // 0x0444(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlaceTraceDistance;                                      // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37FV[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StuffClass[0x28];                                        // 0x0450(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void SetPreviewMeshVisibility(bool NewVisibility);
		void Server_StopUse();
		void Server_StartUse();
		void NetMulticast_OnUse();
		void NetMulticast_OnPlace();
		void Client_ShowPlacementMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTiltComponent
	 * Size -> 0x0028 (FullSize[0x0220] - InheritedSize[0x01F8])
	 */
	class UWTLTiltComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_S6ZI[0x8];                                   // 0x01F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_FP5W[0x8];                                   // 0x0200(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWTLTiltState                                              TiltState;                                               // 0x0208(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsSimulateOnClient;                                     // 0x0209(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WQNM[0xE];                                   // 0x020A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TiltAngle;                                               // 0x0218(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TiltSpeed;                                               // 0x021C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_TiltState();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTradingObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWTLTradingObjectInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTransitionLevelScriptActor
	 * Size -> 0x0050 (FullSize[0x0688] - InheritedSize[0x0638])
	 */
	class AWTLTransitionLevelScriptActor : public AWTLLevelScriptActor
	{
	public:
		unsigned char                                              UnknownData_M714[0x18];                                  // 0x0638(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              m_LevelToLoad[0x28];                                     // 0x0650(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class ULevel*                                              m_LoadedLevel;                                           // 0x0678(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUsePrepareMapChangeLoading;                             // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8NK[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnLevelLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTriggerObject
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class AWTLTriggerObject : public AActor
	{
	public:
		unsigned char                                              UnknownData_16HP[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NJMB[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0240(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EWTLTriggerObjectActionType                                ActionType;                                              // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HighlightAllChildrenStaticMeshes;                        // 0x0259(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I460[0x6];                                   // 0x025A(0x0006) MISSED OFFSET (PADDING)

	public:
		void ShowNote(class AWTLCharacter* Character, const class FText& NoteName, int32_t NoteID);
		void SetQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState State, EWTLTriggerCheckResult* Result);
		void OnEndUse(class AWTLCharacter* Character);
		void OnCharacterUse(class AWTLCharacter* Character);
		bool OnCharacterCanBeUsed(class AWTLCharacter* Character);
		bool HasQuestWithQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState QuestState);
		EWTLTriggerObjectActionType GetTriggerActionType(class AWTLCharacter* Character);
		void GetQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState* QuestState);
		void CharacterTakeQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result);
		void CharacterCompleteQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result);
		void CharacterCanTakeQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result);
		void CharacterCanCompleteQuest(class AWTLCharacter* Character, int32_t QuestID, EWTLTriggerCheckResult* Result);
		bool CanQuestBeCompleted(class AWTLCharacter* Character, int32_t QuestID);
		void BeginInformationDialog(class AWTLCharacter* Character, int32_t InformationDialogID);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTriggerStateObject
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class AWTLTriggerStateObject : public AActor
	{
	public:
		unsigned char                                              UnknownData_RF5B[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                Name;                                                    // 0x0238(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EWTLTriggerObjectState                                     State;                                                   // 0x0250(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6Y8F[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_State();
		void OnCharacterUse(class AWTLCharacter* Character, EWTLTriggerObjectState NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTriggerVolume
	 * Size -> 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
	 */
	class AWTLTriggerVolume : public AActor
	{
	public:
		unsigned char                                              UnknownData_2MGZ[0x28];                                  // 0x0220(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ActivationVolume;                                        // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       OnlyUniqueCharacters;                                    // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1HT[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (PADDING)

	public:
		void SwitchCharacterQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState* QuestState);
		void ShowCharacterActionTimerWidget(class AWTLCharacter* Character, float Timeout, EWTLActionTimerWidgetType Type, EWTLCountdownSliderWidgetFillingType Direction);
		void SetCharacterQuestState(class AWTLCharacter* Character, int32_t QuestID, EWTLQuestState QuestState, EWTLTriggerActionResult* Result);
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnCharacterLeave(class AWTLCharacter* Character);
		void OnCharacterEnter(class AWTLCharacter* Character);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void HideCharacterActionTimerWidget(class AWTLCharacter* Character, bool Success);
		void GiveItemToCharacter(class AWTLCharacter* Character, EWTLItemType ItemType, int32_t ItemTypeID, int32_t Count, int32_t Condition, EWTLTriggerActionResult* Result);
		void GiveItemsToCharacter(class AWTLCharacter* Character, TArray<struct FWTLGiveItemInfo> ItemsToGive, EWTLTriggerActionResult* Result);
		EWTLQuestState GetCharactersQuestState(class AWTLCharacter* Character, int32_t QuestID);
		int32_t GetCharactersCount();
		bool CheckCharacterHaveItem(class AWTLCharacter* Character, EWTLItemType ItemType, int32_t ItemTypeID, int32_t Count, bool CheckContainers);
		bool CharacterInVolume(class AWTLCharacter* Character);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTurretAnimInstance
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class UWTLTurretAnimInstance : public UAnimInstance
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x02B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetFollowingAlpha;                                    // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrelRotationAlpha;                                     // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarrelRotationSpeed;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTutorialVolume
	 * Size -> 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
	 */
	class AWTLTutorialVolume : public AVolume
	{
	public:
		TArray<int32_t>                                            TutorialMessageIDs;                                      // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EWTLTutorialMessage>                                TutorialMessages;                                        // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsIgnoreTutorialEnabling;                                // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KN43[0x7];                                   // 0x0279(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.EnvironmentDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UEnvironmentDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.AcidDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAcidDamageType : public UEnvironmentDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.FireDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UFireDamageType : public UEnvironmentDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.RadiationDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class URadiationDamageType : public UEnvironmentDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WeaponDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UWeaponDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.ExplosiveWeaponDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UExplosiveWeaponDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.MedicineDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMedicineDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.MonsterDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UMonsterDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.SuffocationDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class USuffocationDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.ControlledMonsterSpawnDamageType
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UControlledMonsterSpawnDamageType : public UDamageType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.CurveLipSync
	 * Size -> 0x0480 (FullSize[0x04B0] - InheritedSize[0x0030])
	 */
	class UCurveLipSync : public UCurveBase
	{
	public:
		struct FRichCurve                                          FloatCurves[0x9];                                        // 0x0030(0x0480) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLUndergroundVolume
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class AWTLUndergroundVolume : public AVolume
	{
	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLUtilityColorPicker
	 * Size -> 0x0110 (FullSize[0x0370] - InheritedSize[0x0260])
	 */
	class UWTLUtilityColorPicker : public UUserWidget
	{
	public:
		class UImage*                                              imgPreview;                                              // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             bHue;                                                    // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          tbHue;                                                   // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             slHue;                                                   // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             bSaturation;                                             // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          tbSaturation;                                            // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             slSaturation;                                            // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        vbValue;                                                 // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             bValue;                                                  // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          tbValue;                                                 // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             slValue;                                                 // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVerticalBox*                                        vbAlpha;                                                 // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             bAlpha;                                                  // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTextBlock*                                          tbAlpha;                                                 // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USlider*                                             slAlpha;                                                 // 0x02D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBorder*                                             bHex;                                                    // 0x02D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEditableTextBox*                                    etbHex;                                                  // 0x02E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0J36[0x58];                                  // 0x02E8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PreviewTexture[0x28];                                    // 0x0340(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       IsHidePreviewImage;                                      // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAllowToSetValue;                                       // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAllowToSetAlpha;                                       // 0x036A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAllowToSetHex;                                         // 0x036B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX3U[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnValueSliderChanged(float Value);
		void OnSaturationSliderChanged(float Saturation);
		void OnHueSliderChanged(float Hue);
		void OnHexCommitted(const class FText& Text, ETextCommit CommitType);
		void OnHexChanged(const class FText& Text);
		void OnAlphaSliderChanged(float Alpha);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLUtilityNumberTextBox
	 * Size -> 0x0040 (FullSize[0x0A78] - InheritedSize[0x0A38])
	 */
	class UWTLUtilityNumberTextBox : public UEditableTextBox
	{
	public:
		unsigned char                                              UnknownData_DX70[0x30];                                  // 0x0A38(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsSetCurrentValueWhenCommittIfEmpty;                     // 0x0A68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RJ6[0x3];                                   // 0x0A69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinValue;                                                // 0x0A6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x0A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB0T[0x4];                                   // 0x0A74(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnNumberTextCommitted(const class FText& NumberText, ETextCommit CommitMethod);
		void OnNumberTextChanged(const class FText& NumberText);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.MasterServerBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMasterServerBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateAccountStatistics(class AWTLCharacter* Character, int32_t ParameterID, int32_t Delta);
		void TriggerAccountAchievement(class AWTLCharacter* Character, int32_t AchievementID);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLTestingBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWTLTestingBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ProcessSteamInventoryItem(class AWTLCharacter* Character, const class FString& ItemId);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLVehicleCharacterAnimInstance
	 * Size -> 0x0050 (FullSize[0x0FF0] - InheritedSize[0x0FA0])
	 */
	class UWTLVehicleCharacterAnimInstance : public UWTLCharacterBodyAnimInstance
	{
	public:
		unsigned char                                              UnknownData_502C[0x8];                                   // 0x0FA0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CharacterOffsetInVehicle;                                // 0x0FA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FemaleCharacterAdditionalOffsetInVehicle;                // 0x0FB4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CharacterHeadRotationInVehicle;                          // 0x0FC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SexAlpha;                                                // 0x0FC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelAngle;                                              // 0x0FC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyTiltX;                                               // 0x0FCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BodyTiltY;                                               // 0x0FD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMoveBackward;                                         // 0x0FD4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWTLCharacterStateInVehicle                                CharacterState;                                          // 0x0FD5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBPJ[0x2];                                   // 0x0FD6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BendAlpha;                                               // 0x0FD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnLeftAlpha;                                           // 0x0FDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnRightAlpha;                                          // 0x0FE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnMaxValue;                                            // 0x0FE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideRightValue;                                         // 0x0FE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideLeftValue;                                          // 0x0FEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLVehiclePawn
	 * Size -> 0x04B0 (FullSize[0x1D40] - InheritedSize[0x1890])
	 */
	class AWTLVehiclePawn : public AWTLCharacter
	{
	public:
		uint64_t                                                   m_ItemInventoryID;                                       // 0x1890(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5YQV[0x68];                                  // 0x1898(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_bPlayHightGravityMontage;                              // 0x1900(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YB0D[0x17];                                  // 0x1901(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              VehicleMesh;                                             // 0x1918(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 Horn;                                                    // 0x1920(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 Engine;                                                  // 0x1928(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 Sideslip;                                                // 0x1930(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 WheelSlipOnAcceleation;                                  // 0x1938(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 LandingSound;                                            // 0x1940(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFMODAudioComponent*                                 HitSound;                                                // 0x1948(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpotLightComponent*                                 HeadLight;                                               // 0x1950(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HeadLightBoneName;                                       // 0x1958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            Smoke;                                                   // 0x1960(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            SmokeFromForwardWheel;                                   // 0x1968(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            SmokeFromRearWheel;                                      // 0x1970(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseSimpleDustFromWheels;                                 // 0x1978(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TBJG[0x3];                                   // 0x1979(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForwardWheelDustDensity;                                 // 0x197C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ForwardWheelDustDensityForBraking;                       // 0x1980(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelDustDensity;                                    // 0x1984(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelDustDensityForBraking;                          // 0x1988(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelRocksDensity;                                   // 0x198C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelRocksDensityForBraking;                         // 0x1990(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M2GJ[0x3];                                   // 0x1994(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWTLCharacterStunhitDirection                              NewDirection;                                            // 0x1997(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QYME[0x10];                                  // 0x1998(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_BrakePressed;                                          // 0x19A8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_EngineBraking;                                         // 0x19A9(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DJ77[0x42];                                  // 0x19AA(0x0042) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_bAlreadySpawned;                                       // 0x19EC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bLeaveVehicle;                                         // 0x19ED(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bEjectCharacter;                                       // 0x19EE(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bEnteringInSafeZone;                                   // 0x19EF(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bInWater;                                              // 0x19F0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bIsInAnomaly;                                          // 0x19F1(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6198[0x26];                                  // 0x19F2(0x0026) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        CharacterIdleMontage;                                    // 0x1A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterLandingMontage;                                 // 0x1A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        VehicleLandingMontage;                                   // 0x1A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterUnlandingMontage;                               // 0x1A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        VehicleUnlandingMontage;                                 // 0x1A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterStopIdleMontage;                                // 0x1A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        VehicleStopIdleMontage;                                  // 0x1A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterRidingMontage;                                  // 0x1A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterAccelerationMontage;                            // 0x1A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterReverseMontage;                                 // 0x1A60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterJumpMontage;                                    // 0x1A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterSlideRightMontage;                              // 0x1A70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        CharacterSlideLeftMontage;                               // 0x1A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimMontage*                                        VehicleHightGravityMontage;                              // 0x1A80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G1YF[0x4];                                   // 0x1A88(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      m_MoveRight;                                             // 0x1A8C(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeedInKmPerH;                                        // 0x1A90(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxBackwardSpeedInKmPerH;                                // 0x1A94(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              TurnRateMultiplierCurve[0x28];                           // 0x1A98(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              YawInputMultiplierCurve[0x28];                           // 0x1AC0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      YawInputMultiplier;                                      // 0x1AE8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseYawInputCorrectionInTurnBraking;                      // 0x1AEC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AVNG[0x3];                                   // 0x1AED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BodyTiltYAngleCurve[0x28];                               // 0x1AF0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      BodyTiltYSpeed;                                          // 0x1B18(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZM8J[0x4];                                   // 0x1B1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BodyTiltXSpeed;                                          // 0x1B20(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxBodyTiltX;                                            // 0x1B24(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ForwardWheelRotationSpeed;                               // 0x1B28(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FWheelUpdateSlopeTraceDistance;                          // 0x1B2C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BWheelUpdateSlopeTraceDistance;                          // 0x1B30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      YawInputCurveMultiplier;                                 // 0x1B34(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      YawInterpolationSpeed;                                   // 0x1B38(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NormalBrakingFrictionFactor;                             // 0x1B3C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StoppingBrakingFrictionFactor;                           // 0x1B40(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EngineBrakingFrictionFactor;                             // 0x1B44(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontWheelRadius;                                        // 0x1B48(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelRadius;                                         // 0x1B4C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WheelsMagicConstant;                                     // 0x1B50(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWTLSuspensionType                                         SuspensionType;                                          // 0x1B54(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_139G[0x3];                                   // 0x1B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FrontSuspensionTravel;                                   // 0x1B58(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionDampingSpeed;                             // 0x1B5C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionReboundSpeed;                             // 0x1B60(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionBalancingSpeed;                           // 0x1B64(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionMinLoadOnBraking;                         // 0x1B68(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionMaxLoadOnBraking;                         // 0x1B6C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionMinLoadOnAcceleration;                    // 0x1B70(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontSuspensionMaxLoadOnAcceleration;                    // 0x1B74(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearSuspensionTravel;                                    // 0x1B78(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearSuspensionDampingSpeed;                              // 0x1B7C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearSuspensionReboundSpeed;                              // 0x1B80(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearSuspensionBalancingSpeed;                            // 0x1B84(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionSpeedMultiplierOnLanded;                       // 0x1B88(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionRollThreshold;                                 // 0x1B8C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionRollInterpolationSpeedUp;                      // 0x1B90(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionRollInterpolationSpeedDown;                    // 0x1B94(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionBodyPositionInterpolationSpeed;                // 0x1B98(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SuspensionWheelTraceProfileName;                         // 0x1B9C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionMagicConstant;                                 // 0x1BA4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SuspensionTraceRollRelationConstant;                     // 0x1BA8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MagicConstant2;                                          // 0x1BAC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SuspensionUseConstantInterpolation;                      // 0x1BB0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F5QF[0x3];                                   // 0x1BB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CheckForwardObstructionBoneName;                         // 0x1BB4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                CheckBackwardObstructionBoneName;                        // 0x1BBC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CheckForwardObstructionTraceDistance;                    // 0x1BC4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CheckBackwardObstructionTraceDistance;                   // 0x1BC8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinJumpTimeInterval;                                     // 0x1BCC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinJumpToLandedTimeInterval;                             // 0x1BD0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinJumpRollValue;                                        // 0x1BD4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinJumpSpeed;                                            // 0x1BD8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxJumpZVelocity;                                        // 0x1BDC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FrontWheelToGroundDistanceJumpThreshold;                 // 0x1BE0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RearWheelToGroundDistanceJumpThreshold;                  // 0x1BE4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LandingVelocityToTakeDamage;                             // 0x1BE8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LandingVelocityToEjectCharacter;                         // 0x1BEC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InAirRollDelta;                                          // 0x1BF0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InAirRollDeltaSpeed;                                     // 0x1BF4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SteeringSpeed;                                           // 0x1BF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SteeringUseConstantInterpolation;                        // 0x1BFC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QSQM[0x3];                                   // 0x1BFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewDesiredInputForwardValueInterSpeed;                   // 0x1C00(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FallingAnimationBlendWeight;                             // 0x1C04(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M7N4[0x14];                                  // 0x1C08(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_bUseHeadlight;                                         // 0x1C1C(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              m_HeadlightMode;                                         // 0x1C1D(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bUseRadio;                                             // 0x1C1E(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       m_bVehicleVisibility;                                    // 0x1C1F(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWTLVehicleEngineSoundMode                                 EngineSoundMode;                                         // 0x1C20(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G64Z[0x3];                                   // 0x1C21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EngineMinRPM;                                            // 0x1C24(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EngineMaxRPM;                                            // 0x1C28(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EngineRPMIncreaseSpeed;                                  // 0x1C2C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EngineRPMDropSpeed;                                      // 0x1C30(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CanDoWheelSlipOnAcceleration;                            // 0x1C34(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DropAccelerationInAir;                                   // 0x1C35(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JZFD[0x1A];                                  // 0x1C36(0x001A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraDistance;                                          // 0x1C50(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QFEB[0x8];                                   // 0x1C54(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x1C5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxCameraDistance;                                       // 0x1C60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T7I6[0x4];                                   // 0x1C64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraDistanceChangeSpeed;                               // 0x1C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TimeToResetCameraRotation;                               // 0x1C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AHAO[0x4];                                   // 0x1C70(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraRotationSpeed;                                     // 0x1C74(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RUBP[0xB4];                                  // 0x1C78(0x00B4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       m_bAffectedByAlcohol;                                    // 0x1D2C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I1AP[0x3];                                   // 0x1D2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EObjectTypeQuery>                                   CollisionObjectTypes;                                    // 0x1D30(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void UpdateObstruction(const struct FVector& ImpactPoint);
		void SetVehicleMeshVisibility(bool Value);
		void SetIsInAnomaly(bool Value);
		void Server_VehicleEnteredInWater();
		void Server_UseHorn();
		void Server_UpdateObstruction(const struct FVector& ImpactPoint);
		void Server_ToggleRadio();
		void Server_ToggleHeadlight();
		void Server_SetMoveRightPressed(float Value);
		void Server_SetEngineBraking(bool Value);
		void Server_RequestEject();
		void Server_PlayStun(class AWTLCharacter* Character);
		void Server_LeaveVehicle();
		void Server_Kick(float KickVelocity);
		void Server_EjectCharacterFromVehicle(EWTLCharacterStunhitDirection Direction);
		void Server_CharacterIsUnderground();
		void Server_BrakeReleased();
		void Server_BrakePressed();
		void PlayVehicleAnimMontage(class UAnimMontage* Montage, float Rate);
		void PlayHightGravityVehicleMontage();
		void OnRep_VehicleMeshVisibility();
		void OnRep_UseRadio();
		void OnRep_UseHeadlight();
		void OnRep_PlayHightGravityMontage();
		void OnRep_LeaveVehicle();
		void OnRep_ItemInventoryID();
		void OnRep_IsInAmomaly();
		void OnRep_EngineBraking();
		void OnRep_EjectCharacter();
		void OnRep_BrakePressed();
		void NetMulticast_UseHorn();
		void NetMulticast_PlayVehicleAnimMontage(class UAnimMontage* Montag, float Rate);
		void NetMulticast_PlayUnlandingMontage();
		void NetMulticast_PlayLandingMontage();
		void NetMulticast_EjectCharacter();
		void K2_VehicleCustomEvent(const class FName& TriggerName);
		void K2_UpdateHeadLight(float Intensity);
		void K2_SetStoplight(bool State);
		void K2_SetRadio(bool State);
		void K2_SetHighlight(bool Value);
		void K2_SetHeadlight(bool State, unsigned char Mode);
		void K2_ConditionChanged(float NewCondition);
		void IsCharacterUnderground();
		EWTLVehicleState GetVehicleState();
		class USkeletalMeshComponent* GetVehicleMesh();
		class UAnimMontage* GetVehicleHighGravityMontage();
		float GetSpeed();
		float GetRearWheelRotationAngle();
		float GetNormalizedSpeedSigned();
		float GetNormalizedSpeed();
		float GetMaxSpeed();
		bool GetIsInAnomaly();
		float GetFrontWheelRotationAngle();
		float GetForwardWheelAngle();
		float GetCurrentSpeedSigned();
		float GetCurrentSpeed();
		struct FVector GetCurrentRootBoneOffset();
		float GetCurrentRollValue();
		float GetCurrentForwardInputValue();
		float GetCurrentForwardAbsorberOffset();
		float GetCurrentBackwardAbsorberOffset();
		EWTLCharacterStateInVehicle GetCharacterStateInVehicle();
		bool GetCharacterIsStunned();
		void EnterInVehicle(class AWTLCharacter* Character);
		void Client_ResetCamera();
		void Client_OnUpdateInVehicle(bool IsInVehicle);
		void Client_OnPossessed();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLVKSocialNetworkAdapter
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UWTLVKSocialNetworkAdapter : public UWTLSocialNetworkAdapter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLVoiceController
	 * Size -> 0x1030 (FullSize[0x1058] - InheritedSize[0x0028])
	 */
	class UWTLVoiceController : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z3FI[0x1030];                                // 0x0028(0x1030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLVolumePortal
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AWTLVolumePortal : public AWTLPortal
	{
	public:
		class UStaticMeshComponent*                                ActivationZoneMesh;                                      // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLWaterSource
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class AWTLWaterSource : public AWTLInteractiveObject
	{
	public:
		unsigned char                                              UnknownData_D1L4[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FWTLWaterContainer>                          Containers;                                              // 0x0270(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLWeaponAnimInstance
	 * Size -> 0x00A8 (FullSize[0x0360] - InheritedSize[0x02B8])
	 */
	class UWTLWeaponAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_EMNS[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		bool                                                       bIsEmpty;                                                // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsJammed;                                               // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QM3[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RightHand_Socket;                                        // 0x02C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LeftHand_Socket;                                         // 0x02D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Missile_Socket;                                          // 0x02DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNX2[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHand_Socket_Transform;                              // 0x02F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LeftHand_Socket_Transform;                               // 0x0320(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RightHand_Alpha;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeftHand_Alpha;                                          // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandlingAnimationType;                                   // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLMD[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		class AWTLCharacter* GetCharacter();
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLWeaponAttachment
	 * Size -> 0x0020 (FullSize[0x04F0] - InheritedSize[0x04D0])
	 */
	class UWTLWeaponAttachment : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_J6T7[0x20];                                  // 0x04D0(0x0020) MISSED OFFSET (PADDING)

	public:
		void Client_SetMesh(class UStaticMesh* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLWindTurbine
	 * Size -> 0x0048 (FullSize[0x0268] - InheritedSize[0x0220])
	 */
	class AWTLWindTurbine : public AActor
	{
	public:
		unsigned char                                              UnknownData_V86H[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StandMesh;                                               // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                BodyMesh;                                                // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                FanMesh;                                                 // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UFMODAudioComponent*                                 FMODAudioComponent;                                      // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WindSpeedToFanRotationMultiplier;                        // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BodyMinAngle;                                            // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BodyMaxAngle;                                            // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6BTS[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class WTL.WTLWorldSettings
	 * Size -> 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
	 */
	class AWTLWorldSettings : public AWorldSettings
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
