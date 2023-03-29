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
	 * BlueprintGeneratedClass BP_Devourer_Projectile.BP_Devourer_Projectile_C
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class ABP_Devourer_Projectile_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_AlienSpiderCecoaliensa_Projectile;                    // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       IsSpikeRemoved;                                          // 0x0240(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EWTLCharacterStunhitDirection                              SpikeLocation;                                           // 0x0241(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHRR[0x2];                                   // 0x0242(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartLocation;                                           // 0x0244(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMesh(class UStaticMeshComponent** SM_AlienSpiderCecoaliensa_Projectile);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void OnBloodSplatter();
		void ExecuteUbergraph_BP_Devourer_Projectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
