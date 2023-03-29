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
	 * WidgetBlueprintGeneratedClass WBP_MainMenu_Announcer.WBP_MainMenu_Announcer_C
	 * Size -> 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
	 */
	class UWBP_MainMenu_Announcer_C : public UWTLMainMenuAnnouncer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NewAnnouncementAnim;                                     // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_WBP_MainMenu_Announcer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
