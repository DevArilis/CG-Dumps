﻿#pragma once

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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function FMODStudio.FMODAudioComponent.TriggerCue
	 */
	struct UFMODAudioComponent_TriggerCue_Params
	{	};

	/**
	 * Function FMODStudio.FMODAudioComponent.Stop
	 */
	struct UFMODAudioComponent_Stop_Params
	{	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetVolume
	 */
	struct UFMODAudioComponent_SetVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetTimelinePosition
	 */
	struct UFMODAudioComponent_SetTimelinePosition_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetProperty
	 */
	struct UFMODAudioComponent_SetProperty_Params
	{
	public:
		EFMODEventProperty                                         Property;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MPZK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	 */
	struct UFMODAudioComponent_SetProgrammerSoundName_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetPitch
	 */
	struct UFMODAudioComponent_SetPitch_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetPaused
	 */
	struct UFMODAudioComponent_SetPaused_Params
	{
	public:
		bool                                                       paused;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetParameter
	 */
	struct UFMODAudioComponent_SetParameter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.SetEvent
	 */
	struct UFMODAudioComponent_SetEvent_Params
	{
	public:
		class UFMODEvent*                                          NewEvent;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.Release
	 */
	struct UFMODAudioComponent_Release_Params
	{	};

	/**
	 * Function FMODStudio.FMODAudioComponent.Play
	 */
	struct UFMODAudioComponent_Play_Params
	{	};

	/**
	 * Function FMODStudio.FMODAudioComponent.IsPlaying
	 */
	struct UFMODAudioComponent_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.GetTimelinePosition
	 */
	struct UFMODAudioComponent_GetTimelinePosition_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.GetProperty
	 */
	struct UFMODAudioComponent_GetProperty_Params
	{
	public:
		EFMODEventProperty                                         Property;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8KMM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.GetParameter
	 */
	struct UFMODAudioComponent_GetParameter_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODAudioComponent.GetLength
	 */
	struct UFMODAudioComponent_GetLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.VCASetVolume
	 */
	struct UFMODBlueprintStatics_VCASetVolume_Params
	{
	public:
		class UFMODVCA*                                            Vca;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
	 */
	struct UFMODBlueprintStatics_UnloadEventSampleData_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
	 */
	struct UFMODBlueprintStatics_UnloadBankSampleData_Params
	{
	public:
		class UFMODBank*                                           Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.UnloadBank
	 */
	struct UFMODBlueprintStatics_UnloadBank_Params
	{
	public:
		class UFMODBank*                                           Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
	 */
	struct UFMODBlueprintStatics_SetOutputDriverByName_Params
	{
	public:
		class FString                                              NewDriverName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
	 */
	struct UFMODBlueprintStatics_SetOutputDriverByIndex_Params
	{
	public:
		int32_t                                                    NewDriverIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEventAttachedWithParams
	 */
	struct UFMODBlueprintStatics_PlayEventAttachedWithParams_Params
	{
	public:
		class UFMODEvent*                                          Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MS9G[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, float>                                   Params;                                                  // 0x0028(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bApplyOcclusion;                                         // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bApplyOcclusionDirect;                                   // 0x0079(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N025[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFMODAudioComponent*                                 ReturnValue;                                             // 0x0080(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
	 */
	struct UFMODBlueprintStatics_PlayEventAttached_Params
	{
	public:
		class UFMODEvent*                                          Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopWhenAttachedToDestroyed;                            // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PGM5[0x1];                                   // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFMODAudioComponent*                                 ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocationWithParams
	 */
	struct UFMODBlueprintStatics_PlayEventAtLocationWithParams_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XUOJ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, float>                                   Params;                                                  // 0x0048(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bApplyOcclusion;                                         // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bApplyOcclusionDirect;                                   // 0x0099(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WY06[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFMODEventInstance                                  ReturnValue;                                             // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
	 */
	struct UFMODBlueprintStatics_PlayEventAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HA7B[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFMODEventInstance                                  ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEvent2DWithParams
	 */
	struct UFMODBlueprintStatics_PlayEvent2DWithParams_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V4FN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FName, float>                                   Params;                                                  // 0x0018(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		struct FFMODEventInstance                                  ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
	 */
	struct UFMODBlueprintStatics_PlayEvent2D_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoPlay;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_07EN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFMODEventInstance                                  ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.MixerSuspend
	 */
	struct UFMODBlueprintStatics_MixerSuspend_Params
	{	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.MixerResume
	 */
	struct UFMODBlueprintStatics_MixerResume_Params
	{	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
	 */
	struct UFMODBlueprintStatics_LoadEventSampleData_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
	 */
	struct UFMODBlueprintStatics_LoadBankSampleData_Params
	{
	public:
		class UFMODBank*                                           Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.LoadBank
	 */
	struct UFMODBlueprintStatics_LoadBank_Params
	{
	public:
		class UFMODBank*                                           Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBlocking;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLoadSampleData;                                         // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
	 */
	struct UFMODBlueprintStatics_IsBankLoaded_Params
	{
	public:
		class UFMODBank*                                           Bank;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
	 */
	struct UFMODBlueprintStatics_GetOutputDrivers_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.FindEventInstances
	 */
	struct UFMODBlueprintStatics_FindEventInstances_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          Event;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FFMODEventInstance>                          ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.FindEventByName
	 */
	struct UFMODBlueprintStatics_FindEventByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODEvent*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.FindAssetByName
	 */
	struct UFMODBlueprintStatics_FindAssetByName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFMODAsset*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
	 */
	struct UFMODBlueprintStatics_EventInstanceTriggerCue_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
	 */
	struct UFMODBlueprintStatics_EventInstanceStop_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
	 */
	struct UFMODBlueprintStatics_EventInstanceSetVolume_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
	 */
	struct UFMODBlueprintStatics_EventInstanceSetTransform_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RGNM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
	 */
	struct UFMODBlueprintStatics_EventInstanceSetProperty_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EFMODEventProperty                                         Property;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3C8N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
	 */
	struct UFMODBlueprintStatics_EventInstanceSetPitch_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Pitch;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
	 */
	struct UFMODBlueprintStatics_EventInstanceSetPaused_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       paused;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
	 */
	struct UFMODBlueprintStatics_EventInstanceSetParameter_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
	 */
	struct UFMODBlueprintStatics_EventInstancePlay_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
	 */
	struct UFMODBlueprintStatics_EventInstanceIsValid_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
	 */
	struct UFMODBlueprintStatics_EventInstanceGetParameter_Params
	{
	public:
		struct FFMODEventInstance                                  EventInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
	 */
	struct UFMODBlueprintStatics_BusStopAllEvents_Params
	{
	public:
		class UFMODBus*                                            Bus;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFMOD_STUDIO_STOP_MODE                                     stopMode;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.BusSetVolume
	 */
	struct UFMODBlueprintStatics_BusSetVolume_Params
	{
	public:
		class UFMODBus*                                            Bus;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.BusSetPaused
	 */
	struct UFMODBlueprintStatics_BusSetPaused_Params
	{
	public:
		class UFMODBus*                                            Bus;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPaused;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function FMODStudio.FMODBlueprintStatics.BusSetMute
	 */
	struct UFMODBlueprintStatics_BusSetMute_Params
	{
	public:
		class UFMODBus*                                            Bus;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMute;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
