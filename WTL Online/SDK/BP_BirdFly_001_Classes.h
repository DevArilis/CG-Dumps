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
	 * BlueprintGeneratedClass BP_BirdFly_001.BP_BirdFly_001_C
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class ABP_BirdFly_001_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              Bird_5;                                                  // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Spline_5;                                                // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Bird_4;                                                  // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Spline_4;                                                // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Bird_3;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Spline_3;                                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Bird_2;                                                  // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USplineComponent*                                    Spline_2;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimSequence*                                       AnimFly;                                                 // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedRotation_2;                                         // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedRotation_3;                                         // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedRotation_4;                                         // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpeedRotation_5;                                         // 0x0284(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        Traectory_2;                                             // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        Traectory_3;                                             // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        Traectory_4;                                             // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFlying;                                                // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZK6D[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rate;                                                    // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_BirdFly_001(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
