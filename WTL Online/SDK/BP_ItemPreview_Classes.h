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
	 * BlueprintGeneratedClass BP_ItemPreview.BP_ItemPreview_C
	 * Size -> 0x0030 (FullSize[0x03D0] - InheritedSize[0x03A0])
	 */
	class ABP_ItemPreview_C : public AWTLItemPreview
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URectLightComponent*                                 RectLight4;                                              // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight3;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight2;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight1;                                              // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class URectLightComponent*                                 RectLight;                                               // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ItemPreview(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
