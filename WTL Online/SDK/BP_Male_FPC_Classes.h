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
	 * BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C
	 * Size -> 0x00F9 (FullSize[0x1989] - InheritedSize[0x1890])
	 */
	class ABP_Male_FPC_C : public AWTLCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1890(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   Niagara;                                                 // 0x1898(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              NiagaraTestMerge;                                        // 0x18A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x18A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                FlashlightBackplate;                                     // 0x18B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPhysicalAnimationComponent*                         PhysicalAnimation;                                       // 0x18B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      EyeBlink_NewTrack_0_314643A648B6C5BD1513ADABC0DC0988;    // 0x18C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         EyeBlink__Direction_314643A648B6C5BD1513ADABC0DC0988;    // 0x18C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_25TP[0x3];                                   // 0x18C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  EyeBlink;                                                // 0x18C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_4F0570FC49EB6A568CBAEE83D70FD335;  // 0x18D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_4F0570FC49EB6A568CBAEE83D70FD335;  // 0x18D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_SBQ3[0x3];                                   // 0x18D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x18D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BoneName;                                                // 0x18E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              LocalComplesion;                                         // 0x18E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLockingRotation;                                       // 0x18E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZH9T[0x6];                                   // 0x18EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSkeletalMeshMergeParams                            Params;                                                  // 0x18F0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class UNiagaraComponent*                                   TeleportationEffect;                                     // 0x1930(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              DeathEffectEvent[0x28];                                  // 0x1938(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              CharacterBloodEvent[0x28];                               // 0x1960(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       isCanTeleport;                                           // 0x1988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void EyeBlink__FinishedFunc();
		void EyeBlink__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void K2_ShowEffectsAfterDeath();
		void K2_ShowTeleportationDeviceEffect();
		void K2_OnDeath();
		void K2_ShowExplosionEffectsAfterDeath();
		void ExecuteUbergraph_BP_Male_FPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
