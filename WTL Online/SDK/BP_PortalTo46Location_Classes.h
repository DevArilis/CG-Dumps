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
	 * BlueprintGeneratedClass BP_PortalTo46Location.BP_PortalTo46Location_C
	 * Size -> 0x0081 (FullSize[0x02A1] - InheritedSize[0x0220])
	 */
	class ABP_PortalTo46Location_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_UltimateLooping;                                       // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ST_DitailSphera;                                         // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DeltaSec;                                                // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QI5M[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MyPostProcMaterial;                                      // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CState;                                                  // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SState;                                                  // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SphereRadius;                                            // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSphereRadius;                                         // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaSphereRadius;                                       // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H61J[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            PSBloodRain;                                             // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_ToxicToadstool_Event462023_C*>            ListToxic;                                               // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      SpawnDelay;                                              // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifeTime;                                                // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOnFinish;                                              // 0x02A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SUpdateState();
		void SUpdateSpawnToxic();
		void ClientIsPortalActive(bool* Result);
		void ClientPortalActivate();
		void OnStateEndFinish();
		void OnStateStartFinish();
		void CUpdateVFX();
		void CUpdateState();
		void InitVFX();
		void Init();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BP_PortalTo46Location_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_BP_PortalTo46Location(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
