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
	 * WidgetBlueprintGeneratedClass WBP_Common_CreditsAmount.WBP_Common_CreditsAmount_C
	 * Size -> 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
	 */
	class UWBP_Common_CreditsAmount_C : public UWTLCommonCreditsAmount
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CreditsTopUpAnim;                                        // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              imgCredits;                                              // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_WBP_Common_CreditsAmount(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
