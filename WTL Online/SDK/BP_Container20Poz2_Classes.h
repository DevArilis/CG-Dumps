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
	 * BlueprintGeneratedClass BP_Container20Poz2.BP_Container20Poz2_C
	 * Size -> 0x001C (FullSize[0x023C] - InheritedSize[0x0220])
	 */
	class ABP_Container20Poz2_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0220(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FLinearColor                                        PaintColor;                                              // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Logo;                                                    // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
