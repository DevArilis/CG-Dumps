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
	 * BlueprintGeneratedClass BP_ElectricLightBlinkMainMenu.BP_ElectricLightBlinkMainMenu_C
	 * Size -> 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
	 */
	class ABP_ElectricLightBlinkMainMenu_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Blink_NewTrack_0_47A0275A4D841953DF1555B1760B1EBB;       // 0x0230(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Blink__Direction_47A0275A4D841953DF1555B1760B1EBB;       // 0x0234(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_ELCK[0x3];                                   // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Blink;                                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightIntensity;                                          // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterConeAngle;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InnerConeAngle;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        EmissiveColor;                                           // 0x024C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EmissiveIntensity;                                       // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlafonEmissiveIntensity;                                 // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttenuationRadius;                                       // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CastShadow;                                              // 0x0268(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JYMK[0x3];                                   // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastLightIntensity;                                      // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastEmissiveIntensity;                                   // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastPlafonEmissiveIntensity;                             // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void Blink__FinishedFunc();
		void Blink__UpdateFunc();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ElectricLightBlinkMainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
