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
	 * Class FMODStudio.FMODAmbientSound
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AFMODAmbientSound : public AActor
	{
	public:
		class UFMODAudioComponent*                                 AudioComponent;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAnimNotifyPlay
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UFMODAnimNotifyPlay : public UAnimNotify
	{
	public:
		bool                                                       bFollow : 1;                                             // 0x0038(0x0001) BIT_FIELD Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZB5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AttachName;                                              // 0x0040(0x0010) Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Event[0x28];                                             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UFMODAsset : public UObject
	{
	public:
		struct FGuid                                               AssetGuid;                                               // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAsAsset;                                            // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_367G[0x17];                                  // 0x0039(0x0017) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODAudioComponent
	 * Size -> 0x01E8 (FullSize[0x03E0] - InheritedSize[0x01F8])
	 */
	class UFMODAudioComponent : public USceneComponent
	{
	public:
		unsigned char                                              Event[0x28];                                             // 0x01F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<class FName, float>                                   ParameterCache;                                          // 0x0220(0x0050) Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CCV[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProgrammerSoundName;                                     // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableTimelineCallbacks : 1;                            // 0x0288(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_86F3[0x17];                                  // 0x0289(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoDestroy : 1;                                        // 0x02A0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenOwnerDestroyed : 1;                             // 0x02A0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_40S6[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEventStopped;                                          // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimelineMarker;                                        // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimelineBeat;                                          // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FFMODAttenuationDetails                             AttenuationDetails;                                      // 0x02D8(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FFMODOcclusionDetails                               OcclusionDetails;                                        // 0x02E4(0x0014) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseDistanceDelay : 1;                                   // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YL3[0xE7];                                  // 0x02F9(0x00E7) MISSED OFFSET (PADDING)

	public:
		void TriggerCue();
		void Stop();
		void SetVolume(float Volume);
		void SetTimelinePosition(int32_t Time);
		void SetProperty(EFMODEventProperty Property, float Value);
		void SetProgrammerSoundName(const class FString& Value);
		void SetPitch(float Pitch);
		void SetPaused(bool paused);
		void SetParameter(const class FName& Name, float Value);
		void SetEvent(class UFMODEvent* NewEvent);
		void Release();
		void Play();
		bool IsPlaying();
		int32_t GetTimelinePosition();
		float GetProperty(EFMODEventProperty Property);
		float GetParameter(const class FName& Name);
		int32_t GetLength();
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBank
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFMODBank : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBlueprintStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
	{
	public:
		void VCASetVolume(class UFMODVCA* Vca, float Volume);
		void UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
		void UnloadBankSampleData(class UFMODBank* Bank);
		void UnloadBank(class UFMODBank* Bank);
		void SetOutputDriverByName(const class FString& NewDriverName);
		void SetOutputDriverByIndex(int32_t NewDriverIndex);
		class UFMODAudioComponent* PlayEventAttachedWithParams(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, TMap<class FName, float> Params, bool bApplyOcclusion, bool bApplyOcclusionDirect);
		class UFMODAudioComponent* PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay);
		struct FFMODEventInstance PlayEventAtLocationWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay, TMap<class FName, float> Params, bool bApplyOcclusion, bool bApplyOcclusionDirect);
		struct FFMODEventInstance PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay);
		struct FFMODEventInstance PlayEvent2DWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay, TMap<class FName, float> Params);
		struct FFMODEventInstance PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
		void MixerSuspend();
		void MixerResume();
		void LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
		void LoadBankSampleData(class UFMODBank* Bank);
		void LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
		bool IsBankLoaded(class UFMODBank* Bank);
		TArray<class FString> GetOutputDrivers();
		TArray<struct FFMODEventInstance> FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
		class UFMODEvent* FindEventByName(const class FString& Name);
		class UFMODAsset* FindAssetByName(const class FString& Name);
		void EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance);
		void EventInstanceStop(const struct FFMODEventInstance& EventInstance);
		void EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
		void EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location);
		void EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, EFMODEventProperty Property, float Value);
		void EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
		void EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused);
		void EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name, float Value);
		void EventInstancePlay(const struct FFMODEventInstance& EventInstance);
		bool EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
		float EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const class FName& Name);
		void BusStopAllEvents(class UFMODBus* Bus, EFMOD_STUDIO_STOP_MODE stopMode);
		void BusSetVolume(class UFMODBus* Bus, float Volume);
		void BusSetPaused(class UFMODBus* Bus, bool bPaused);
		void BusSetMute(class UFMODBus* Bus, bool bMute);
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODBus
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFMODBus : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEvent
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFMODEvent : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventControlSection
	 * Size -> 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
	 */
	class UFMODEventControlSection : public UMovieSceneSection
	{
	public:
		struct FFMODEventControlChannel                            ControlKeys;                                             // 0x00E8(0x0098) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventControlTrack
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UFMODEventControlTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          ControlSections;                                         // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODEventParameterTrack
	 * Size -> 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
	 */
	class UFMODEventParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_MKIO[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0080(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UFMODSettings : public UObject
	{
	public:
		bool                                                       bLoadAllBanks;                                           // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadAllSampleData;                                      // 0x0029(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableLiveUpdate;                                       // 0x002A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableEditorLiveUpdate;                                 // 0x002B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMSM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      BankOutputDirectory;                                     // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		EFMODSpeakerMode                                           OutputFormat;                                            // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVol0Virtual;                                            // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9TV6[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Vol0VirtualLevel;                                        // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SampleRate;                                              // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchHardwareSampleRate;                                // 0x004C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_73ZF[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RealChannelCount;                                        // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalChannelCount;                                       // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DSPBufferLength;                                         // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DSPBufferCount;                                          // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FileBufferSize;                                          // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StudioUpdatePeriod;                                      // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InitialOutputDriverName;                                 // 0x0068(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockAllBuses;                                           // 0x0078(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZY3[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomPoolSizes                                    MemoryPoolSizes;                                         // 0x007C(0x0014) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LiveUpdatePort;                                          // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EditorLiveUpdatePort;                                    // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PluginFiles;                                             // 0x0098(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              ContentBrowserPrefix;                                    // 0x00A8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ForcePlatformName;                                       // 0x00B8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MasterBankName;                                          // 0x00C8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SkipLoadBankName;                                        // 0x00D8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WavWriterPath;                                           // 0x00E8(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSnapshot
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFMODSnapshot : public UFMODEvent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODSnapshotReverb
	 * Size -> 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
	 */
	class UFMODSnapshotReverb : public UReverbEffect
	{
	public:
		struct FGuid                                               AssetGuid;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAsAsset;                                            // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EB9S[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class FMODStudio.FMODVCA
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UFMODVCA : public UFMODAsset
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
