/**
 * Name: WTL
 * Version: 4.26.2
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetVector4DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_SetVector4DEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetVector4DEqualFSV");
		
		USCLibrary_SCO_Pure_SetVector4DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetVector3DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_SetVector3DEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetVector3DEqualFSV");
		
		USCLibrary_SCO_Pure_SetVector3DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetVector2DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_SetVector2DEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetVector2DEqualFSV");
		
		USCLibrary_SCO_Pure_SetVector2DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetTransformEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NT                                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCO_Pure_SetTransformEqualFST(struct FTransform* NT, struct FSafeTransform* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetTransformEqualFST");
		
		USCLibrary_SCO_Pure_SetTransformEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetTextEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCO_Pure_SetTextEqualFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetTextEqualFST");
		
		USCLibrary_SCO_Pure_SetTextEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetStringEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCO_Pure_SetStringEqualFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetStringEqualFSS");
		
		USCLibrary_SCO_Pure_SetStringEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualVector4D");
		
		USCLibrary_SCO_Pure_SetSafeVector4DEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_SetSafeVector4DEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector4DEqualFSV");
		
		USCLibrary_SCO_Pure_SetSafeVector4DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualVector3D");
		
		USCLibrary_SCO_Pure_SetSafeVector3DEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_SetSafeVector3DEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector3DEqualFSV");
		
		USCLibrary_SCO_Pure_SetSafeVector3DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualVector2D");
		
		USCLibrary_SCO_Pure_SetSafeVector2DEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_SetSafeVector2DEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeVector2DEqualFSV");
		
		USCLibrary_SCO_Pure_SetSafeVector2DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SST                                                        (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Output                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualTransform(struct FSafeTransform* FST, struct FTransform* SST, struct FTransform* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualTransform");
		
		USCLibrary_SCO_Pure_SetSafeTransformEqualTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (SST != nullptr)
			*SST = params.SST;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              SST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Output                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeTransform USCLibrary::SCO_Pure_SetSafeTransformEqualFST(struct FSafeTransform* FST, struct FSafeTransform* SST, struct FTransform* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeTransformEqualFST");
		
		USCLibrary_SCO_Pure_SetSafeTransformEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (SST != nullptr)
			*SST = params.SST;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualText(struct FSafeText* FST, class FText* NT, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualText");
		
		USCLibrary_SCO_Pure_SetSafeTextEqualText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_SetSafeTextEqualFST(struct FSafeText* FST, struct FSafeText* ST, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeTextEqualFST");
		
		USCLibrary_SCO_Pure_SetSafeTextEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualString(struct FSafeString* FSS, class FString* NS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualString");
		
		USCLibrary_SCO_Pure_SetSafeStringEqualString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_SetSafeStringEqualFSS(struct FSafeString* FSS, struct FSafeString* SS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeStringEqualFSS");
		
		USCLibrary_SCO_Pure_SetSafeStringEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualRotator");
		
		USCLibrary_SCO_Pure_SetSafeRotatorEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_SetSafeRotatorEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeRotatorEqualFSR");
		
		USCLibrary_SCO_Pure_SetSafeRotatorEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualName(struct FSafeName* FSN, class FName* NN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualName");
		
		USCLibrary_SCO_Pure_SetSafeNameEqualName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_SetSafeNameEqualFSN(struct FSafeName* FSN, struct FSafeName* SSN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeNameEqualFSN");
		
		USCLibrary_SCO_Pure_SetSafeNameEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualInt");
		
		USCLibrary_SCO_Pure_SetSafeIntEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_SetSafeIntEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeIntEqualFSI");
		
		USCLibrary_SCO_Pure_SetSafeIntEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFSF");
		
		USCLibrary_SCO_Pure_SetSafeFloatEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_SetSafeFloatEqualFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeFloatEqualFloat");
		
		USCLibrary_SCO_Pure_SetSafeFloatEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  SSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualFSC(struct FSafeColor* FSC, struct FSafeColor* SSC, struct FLinearColor* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualFSC");
		
		USCLibrary_SCO_Pure_SetSafeColorEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (SSC != nullptr)
			*SSC = params.SSC;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                SSC                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeColor USCLibrary::SCO_Pure_SetSafeColorEqualColor(struct FSafeColor* FSC, struct FLinearColor* SSC, struct FLinearColor* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeColorEqualColor");
		
		USCLibrary_SCO_Pure_SetSafeColorEqualColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (SSC != nullptr)
			*SSC = params.SSC;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualFSB");
		
		USCLibrary_SCO_Pure_SetSafeByteEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_SetSafeByteEqualByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeByteEqualByte");
		
		USCLibrary_SCO_Pure_SetSafeByteEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualFSB(struct FSafeBool* FSB, struct FSafeBool* SSB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualFSB");
		
		USCLibrary_SCO_Pure_SetSafeBoolEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_SetSafeBoolEqualBool(struct FSafeBool* FSB, bool* NB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetSafeBoolEqualBool");
		
		USCLibrary_SCO_Pure_SetSafeBoolEqualBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetRotatorEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_SetRotatorEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetRotatorEqualFSR");
		
		USCLibrary_SCO_Pure_SetRotatorEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetNameEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCO_Pure_SetNameEqualFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetNameEqualFSN");
		
		USCLibrary_SCO_Pure_SetNameEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetIntEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_SetIntEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetIntEqualFSI");
		
		USCLibrary_SCO_Pure_SetIntEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetFloatEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_SetFloatEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetFloatEqualFSF");
		
		USCLibrary_SCO_Pure_SetFloatEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetColorEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NC                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCO_Pure_SetColorEqualFSC(struct FLinearColor* NC, struct FSafeColor* FSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetColorEqualFSC");
		
		USCLibrary_SCO_Pure_SetColorEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NC != nullptr)
			*NC = params.NC;
		if (FSC != nullptr)
			*FSC = params.FSC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetByteEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_SetByteEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetByteEqualFSB");
		
		USCLibrary_SCO_Pure_SetByteEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_SetBoolEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_SetBoolEqualFSB(bool* NB, struct FSafeBool* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_SetBoolEqualFSB");
		
		USCLibrary_SCO_Pure_SetBoolEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DTimesFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DTimesFSV");
		
		USCLibrary_SCO_Pure_GetVector4DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DSmallerFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetVector4DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DSmallerEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DPlusFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusFSV");
		
		USCLibrary_SCO_Pure_GetVector4DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DPlusEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DNotEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DModFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DModFSV");
		
		USCLibrary_SCO_Pure_GetVector4DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DMinusFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusFSV");
		
		USCLibrary_SCO_Pure_GetVector4DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DMinusEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DGreaterFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetVector4DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DGreaterEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector4DEqualFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector4DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector4DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCO_Pure_GetVector4DDivideFSV(struct FVector4* NV, struct FSafeVector4D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector4DDivideFSV");
		
		USCLibrary_SCO_Pure_GetVector4DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DTimesFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DTimesFSV");
		
		USCLibrary_SCO_Pure_GetVector3DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DSmallerFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetVector3DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DSmallerEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DPlusFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusFSV");
		
		USCLibrary_SCO_Pure_GetVector3DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DPlusEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DNotEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DModFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DModFSV");
		
		USCLibrary_SCO_Pure_GetVector3DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DMinusFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusFSV");
		
		USCLibrary_SCO_Pure_GetVector3DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DMinusEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DGreaterFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetVector3DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DGreaterEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector3DEqualFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector3DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector3DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCO_Pure_GetVector3DDivideFSV(struct FVector* NV, struct FSafeVector3D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector3DDivideFSV");
		
		USCLibrary_SCO_Pure_GetVector3DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DTimesFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DTimesFSV");
		
		USCLibrary_SCO_Pure_GetVector2DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DSmallerFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetVector2DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DSmallerEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DPlusFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusFSV");
		
		USCLibrary_SCO_Pure_GetVector2DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DPlusEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DNotEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DModFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DModFSV");
		
		USCLibrary_SCO_Pure_GetVector2DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DMinusFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusFSV");
		
		USCLibrary_SCO_Pure_GetVector2DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DMinusEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DGreaterFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetVector2DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DGreaterEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetVector2DEqualFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DEqualFSV");
		
		USCLibrary_SCO_Pure_GetVector2DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetVector2DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCO_Pure_GetVector2DDivideFSV(struct FVector2D* NV, struct FSafeVector2D* FSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetVector2DDivideFSV");
		
		USCLibrary_SCO_Pure_GetVector2DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NV != nullptr)
			*NV = params.NV;
		if (FSV != nullptr)
			*FSV = params.FSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTransformNotEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NT                                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTransformNotEqualFST(struct FTransform* NT, struct FSafeTransform* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTransformNotEqualFST");
		
		USCLibrary_SCO_Pure_GetTransformNotEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTransformEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NT                                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTransformEqualFST(struct FTransform* NT, struct FSafeTransform* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTransformEqualFST");
		
		USCLibrary_SCO_Pure_GetTransformEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextSmallerFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTextSmallerFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextSmallerFST");
		
		USCLibrary_SCO_Pure_GetTextSmallerFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCO_Pure_GetTextPlusFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusFST");
		
		USCLibrary_SCO_Pure_GetTextPlusFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCO_Pure_GetTextPlusEqualFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextPlusEqualFST");
		
		USCLibrary_SCO_Pure_GetTextPlusEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextNotEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTextNotEqualFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextNotEqualFST");
		
		USCLibrary_SCO_Pure_GetTextNotEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextGreaterFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTextGreaterFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextGreaterFST");
		
		USCLibrary_SCO_Pure_GetTextGreaterFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetTextEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetTextEqualFST(class FText* NT, struct FSafeText* FST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetTextEqualFST");
		
		USCLibrary_SCO_Pure_GetTextEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NT != nullptr)
			*NT = params.NT;
		if (FST != nullptr)
			*FST = params.FST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringSmallerFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetStringSmallerFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringSmallerFSS");
		
		USCLibrary_SCO_Pure_GetStringSmallerFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCO_Pure_GetStringPlusFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusFSS");
		
		USCLibrary_SCO_Pure_GetStringPlusFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCO_Pure_GetStringPlusEqualFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringPlusEqualFSS");
		
		USCLibrary_SCO_Pure_GetStringPlusEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringNotEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetStringNotEqualFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringNotEqualFSS");
		
		USCLibrary_SCO_Pure_GetStringNotEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringGreaterFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetStringGreaterFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringGreaterFSS");
		
		USCLibrary_SCO_Pure_GetStringGreaterFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetStringEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetStringEqualFSS(class FString* NS, struct FSafeString* FSS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetStringEqualFSS");
		
		USCLibrary_SCO_Pure_GetStringEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NS != nullptr)
			*NS = params.NS;
		if (FSS != nullptr)
			*FSS = params.FSS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DTimesVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DTimesFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DTimesFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DSmallerVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DSmallerEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DPlusVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DPlusEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DNotEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DNotEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DModVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DModFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DModFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DMinusVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DMinusEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DIncreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DIncreaseFSV(struct FSafeVector4D* FSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DIncreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DIncreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DGreaterVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DGreaterEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DEqualVector4D(struct FSafeVector4D* FSV, struct FVector4* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DEqualVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector4DEqualFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideVector4D(struct FSafeVector4D* FSV, struct FVector4* NV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideVector4D");
		
		USCLibrary_SCO_Pure_GetSafeVector4DDivideVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector4D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDivideFSV(struct FSafeVector4D* FSV, struct FSafeVector4D* SSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDivideFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDecreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector4D USCLibrary::SCO_Pure_GetSafeVector4DDecreaseFSV(struct FSafeVector4D* FSV, struct FVector4* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector4DDecreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector4DDecreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DTimesVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DTimesFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DTimesFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DSmallerVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DSmallerEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DPlusVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DPlusEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DNotEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DNotEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DModVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DModFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DModFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DMinusVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DMinusEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DIncreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DIncreaseFSV(struct FSafeVector3D* FSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DIncreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DIncreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DGreaterVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DGreaterEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DEqualVector3D(struct FSafeVector3D* FSV, struct FVector* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DEqualVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector3DEqualFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideVector3D(struct FSafeVector3D* FSV, struct FVector* NV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideVector3D");
		
		USCLibrary_SCO_Pure_GetSafeVector3DDivideVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector3D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDivideFSV(struct FSafeVector3D* FSV, struct FSafeVector3D* SSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDivideFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDecreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector3D USCLibrary::SCO_Pure_GetSafeVector3DDecreaseFSV(struct FSafeVector3D* FSV, struct FVector* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector3DDecreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector3DDecreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DTimesVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DTimesFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DTimesFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DTimesFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DSmallerVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DSmallerFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DSmallerEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DSmallerEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DSmallerEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DPlusVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DPlusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DPlusEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DPlusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DPlusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DNotEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DNotEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DNotEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DNotEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DModVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DModFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DModFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DModFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DMinusVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DMinusFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DMinusEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DMinusEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DMinusEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DIncreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DIncreaseFSV(struct FSafeVector2D* FSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DIncreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DIncreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DGreaterVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DGreaterFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DGreaterEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DGreaterEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DGreaterEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DEqualVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DEqualVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeVector2DEqualFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DEqualFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DEqualFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   NV                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideVector2D(struct FSafeVector2D* FSV, struct FVector2D* NV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideVector2D");
		
		USCLibrary_SCO_Pure_GetSafeVector2DDivideVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (NV != nullptr)
			*NV = params.NV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeVector2D                               SSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDivideFSV(struct FSafeVector2D* FSV, struct FSafeVector2D* SSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDivideFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DDivideFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (SSV != nullptr)
			*SSV = params.SSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDecreaseFSV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               FSV                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeVector2D USCLibrary::SCO_Pure_GetSafeVector2DDecreaseFSV(struct FSafeVector2D* FSV, struct FVector2D* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeVector2DDecreaseFSV");
		
		USCLibrary_SCO_Pure_GetSafeVector2DDecreaseFSV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSV != nullptr)
			*FSV = params.FSV;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NT                                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualTransform(struct FSafeTransform* FST, struct FTransform* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualTransform");
		
		USCLibrary_SCO_Pure_GetSafeTransformNotEqualTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              SST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTransformNotEqualFST(struct FSafeTransform* FST, struct FSafeTransform* SST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformNotEqualFST");
		
		USCLibrary_SCO_Pure_GetSafeTransformNotEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (SST != nullptr)
			*SST = params.SST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NT                                                         (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTransformEqualTransform(struct FSafeTransform* FST, struct FTransform* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualTransform");
		
		USCLibrary_SCO_Pure_GetSafeTransformEqualTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              FST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeTransform                              SST                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTransformEqualFST(struct FSafeTransform* FST, struct FSafeTransform* SST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTransformEqualFST");
		
		USCLibrary_SCO_Pure_GetSafeTransformEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (SST != nullptr)
			*SST = params.SST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextSmallerText(struct FSafeText* FST, class FText* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerText");
		
		USCLibrary_SCO_Pure_GetSafeTextSmallerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextSmallerFST(struct FSafeText* FST, struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextSmallerFST");
		
		USCLibrary_SCO_Pure_GetSafeTextSmallerFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusText(struct FSafeText* FST, class FText* NT, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusText");
		
		USCLibrary_SCO_Pure_GetSafeTextPlusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusFST(struct FSafeText* FST, struct FSafeText* ST, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusFST");
		
		USCLibrary_SCO_Pure_GetSafeTextPlusFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualText(struct FSafeText* FST, class FText* NT, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualText");
		
		USCLibrary_SCO_Pure_GetSafeTextPlusEqualText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Output                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	struct FSafeText USCLibrary::SCO_Pure_GetSafeTextPlusEqualFST(struct FSafeText* FST, struct FSafeText* ST, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextPlusEqualFST");
		
		USCLibrary_SCO_Pure_GetSafeTextPlusEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextNotEqualText(struct FSafeText* FST, class FText* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualText");
		
		USCLibrary_SCO_Pure_GetSafeTextNotEqualText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextNotEqualFST(struct FSafeText* FST, struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextNotEqualFST");
		
		USCLibrary_SCO_Pure_GetSafeTextNotEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextGreaterText(struct FSafeText* FST, class FText* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterText");
		
		USCLibrary_SCO_Pure_GetSafeTextGreaterText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextGreaterFST(struct FSafeText* FST, struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextGreaterFST");
		
		USCLibrary_SCO_Pure_GetSafeTextGreaterFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        NT                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextEqualText(struct FSafeText* FST, class FText* NT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualText");
		
		USCLibrary_SCO_Pure_GetSafeTextEqualText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (NT != nullptr)
			*NT = params.NT;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualFST
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   FST                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeTextEqualFST(struct FSafeText* FST, struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeTextEqualFST");
		
		USCLibrary_SCO_Pure_GetSafeTextEqualFST_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FST != nullptr)
			*FST = params.FST;
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringSmallerString(struct FSafeString* FSS, class FString* NS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerString");
		
		USCLibrary_SCO_Pure_GetSafeStringSmallerString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringSmallerFSS(struct FSafeString* FSS, struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringSmallerFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringSmallerFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusString(struct FSafeString* FSS, class FString* NS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusString");
		
		USCLibrary_SCO_Pure_GetSafeStringPlusString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusFSS(struct FSafeString* FSS, struct FSafeString* SS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringPlusFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualString(struct FSafeString* FSS, class FString* NS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualString");
		
		USCLibrary_SCO_Pure_GetSafeStringPlusEqualString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeString USCLibrary::SCO_Pure_GetSafeStringPlusEqualFSS(struct FSafeString* FSS, struct FSafeString* SS, class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringPlusEqualFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringPlusEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringNotEqualString(struct FSafeString* FSS, class FString* NS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualString");
		
		USCLibrary_SCO_Pure_GetSafeStringNotEqualString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringNotEqualFSS(struct FSafeString* FSS, struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringNotEqualFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringNotEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringGreaterString(struct FSafeString* FSS, class FString* NS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterString");
		
		USCLibrary_SCO_Pure_GetSafeStringGreaterString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringGreaterFSS(struct FSafeString* FSS, struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringGreaterFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringGreaterFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NS                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringEqualString(struct FSafeString* FSS, class FString* NS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualString");
		
		USCLibrary_SCO_Pure_GetSafeStringEqualString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (NS != nullptr)
			*NS = params.NS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualFSS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 FSS                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeStringEqualFSS(struct FSafeString* FSS, struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeStringEqualFSS");
		
		USCLibrary_SCO_Pure_GetSafeStringEqualFSS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSS != nullptr)
			*FSS = params.FSS;
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorTimesRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorTimesFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorTimesFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorTimesFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorSmallerRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorSmallerFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorSmallerEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorSmallerEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorSmallerEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorPlusRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorPlusFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorPlusEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorPlusEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorPlusEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorNotEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorNotEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorNotEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorNotEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorModRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorModFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorModFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorModFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorMinusRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorMinusFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorMinusEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorMinusEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorMinusEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorIncreaseFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorIncreaseFSR(struct FSafeRotator* FSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorIncreaseFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorIncreaseFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorGreaterRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorGreaterFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorGreaterEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorGreaterEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorGreaterEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorEqualRotator(struct FSafeRotator* FSR, struct FRotator* NR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorEqualRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeRotatorEqualFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorEqualFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideRotator(struct FSafeRotator* FSR, struct FRotator* NR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideRotator");
		
		USCLibrary_SCO_Pure_GetSafeRotatorDivideRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (NR != nullptr)
			*NR = params.NR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                SSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDivideFSR(struct FSafeRotator* FSR, struct FSafeRotator* SSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDivideFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorDivideFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (SSR != nullptr)
			*SSR = params.SSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDecreaseFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FSafeRotator USCLibrary::SCO_Pure_GetSafeRotatorDecreaseFSR(struct FSafeRotator* FSR, struct FRotator* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeRotatorDecreaseFSR");
		
		USCLibrary_SCO_Pure_GetSafeRotatorDecreaseFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSR != nullptr)
			*FSR = params.FSR;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameSmallerName(struct FSafeName* FSN, class FName* NN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerName");
		
		USCLibrary_SCO_Pure_GetSafeNameSmallerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameSmallerFSN(struct FSafeName* FSN, struct FSafeName* SSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameSmallerFSN");
		
		USCLibrary_SCO_Pure_GetSafeNameSmallerFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusName(struct FSafeName* FSN, class FName* NN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusName");
		
		USCLibrary_SCO_Pure_GetSafeNamePlusName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusFSN(struct FSafeName* FSN, struct FSafeName* SSN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusFSN");
		
		USCLibrary_SCO_Pure_GetSafeNamePlusFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualName(struct FSafeName* FSN, class FName* NN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualName");
		
		USCLibrary_SCO_Pure_GetSafeNamePlusEqualName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeName USCLibrary::SCO_Pure_GetSafeNamePlusEqualFSN(struct FSafeName* FSN, struct FSafeName* SSN, class FName* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNamePlusEqualFSN");
		
		USCLibrary_SCO_Pure_GetSafeNamePlusEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameNotEqualName(struct FSafeName* FSN, class FName* NN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualName");
		
		USCLibrary_SCO_Pure_GetSafeNameNotEqualName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameNotEqualFSN(struct FSafeName* FSN, struct FSafeName* SSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameNotEqualFSN");
		
		USCLibrary_SCO_Pure_GetSafeNameNotEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameGreaterName(struct FSafeName* FSN, class FName* NN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterName");
		
		USCLibrary_SCO_Pure_GetSafeNameGreaterName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameGreaterFSN(struct FSafeName* FSN, struct FSafeName* SSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameGreaterFSN");
		
		USCLibrary_SCO_Pure_GetSafeNameGreaterFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameEqualName(struct FSafeName* FSN, class FName* NN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualName");
		
		USCLibrary_SCO_Pure_GetSafeNameEqualName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (NN != nullptr)
			*NN = params.NN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   SSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeNameEqualFSN(struct FSafeName* FSN, struct FSafeName* SSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeNameEqualFSN");
		
		USCLibrary_SCO_Pure_GetSafeNameEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSN != nullptr)
			*FSN = params.FSN;
		if (SSN != nullptr)
			*SSN = params.SSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorInt");
		
		USCLibrary_SCO_Pure_GetSafeIntXorInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntXorFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntXorFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntXorFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesInt");
		
		USCLibrary_SCO_Pure_GetSafeIntTimesInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntTimesFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntTimesFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntTimesFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntSmallerInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerInt");
		
		USCLibrary_SCO_Pure_GetSafeIntSmallerInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntSmallerFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntSmallerFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntSmallerEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntSmallerEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntSmallerEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntSmallerEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRInt");
		
		USCLibrary_SCO_Pure_GetSafeIntShiftRInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftRFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftRFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntShiftRFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLInt");
		
		USCLibrary_SCO_Pure_GetSafeIntShiftLInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntShiftLFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntShiftLFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntShiftLFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusInt");
		
		USCLibrary_SCO_Pure_GetSafeIntPlusInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntPlusFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntPlusEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntPlusEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntPlusEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntPlusEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrInt");
		
		USCLibrary_SCO_Pure_GetSafeIntOrInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntOrFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntOrFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntOrFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotInt(int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotInt");
		
		USCLibrary_SCO_Pure_GetSafeIntNotInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntNotFSI(struct FSafeInt* FSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntNotFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntNotEqualInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntNotEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntNotEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntNotEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntNotEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntModInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModInt");
		
		USCLibrary_SCO_Pure_GetSafeIntModInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntModFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntModFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntModFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusInt");
		
		USCLibrary_SCO_Pure_GetSafeIntMinusInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntMinusFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntMinusEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntMinusEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntMinusEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntMinusEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntIncreaseFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntIncreaseFSI(struct FSafeInt* FSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntIncreaseFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntIncreaseFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntGreaterInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterInt");
		
		USCLibrary_SCO_Pure_GetSafeIntGreaterInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntGreaterFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntGreaterFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntGreaterEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntGreaterEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntGreaterEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntGreaterEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntEqualInt(struct FSafeInt* FSI, int32_t* NI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualInt");
		
		USCLibrary_SCO_Pure_GetSafeIntEqualInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeIntEqualFSI(struct FSafeInt* FSI, struct FSafeInt* SSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntEqualFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideInt");
		
		USCLibrary_SCO_Pure_GetSafeIntDivideInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDivideFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDivideFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntDivideFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDecreaseFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntDecreaseFSI(struct FSafeInt* FSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntDecreaseFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntDecreaseFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndInt(struct FSafeInt* FSI, int32_t* NI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndInt");
		
		USCLibrary_SCO_Pure_GetSafeIntAndInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (NI != nullptr)
			*NI = params.NI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    SSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeInt USCLibrary::SCO_Pure_GetSafeIntAndFSI(struct FSafeInt* FSI, struct FSafeInt* SSI, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeIntAndFSI");
		
		USCLibrary_SCO_Pure_GetSafeIntAndFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSI != nullptr)
			*FSI = params.FSI;
		if (SSI != nullptr)
			*SSI = params.SSI;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatTimesFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatTimesFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatTimesFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatTimesFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatSmallerFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatSmallerFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatSmallerFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatSmallerEqualFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatSmallerEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatSmallerEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatPlusFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatPlusFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatPlusEqualFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatPlusEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatPlusEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatNotEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatNotEqualFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatNotEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatNotEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatModFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatModFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatModFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatModFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatMinusFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatMinusFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatMinusEqualFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatMinusEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatMinusEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatIncreaseFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatIncreaseFSF(struct FSafeFloat* FSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatIncreaseFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatIncreaseFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatGreaterFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatGreaterFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatGreaterFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatGreaterEqualFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatGreaterEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatGreaterEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatEqualFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeFloatEqualFloat(struct FSafeFloat* FSF, float* NF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatEqualFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatEqualFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  SSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFSF(struct FSafeFloat* FSF, struct FSafeFloat* SSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatDivideFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (SSF != nullptr)
			*SSF = params.SSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDivideFloat(struct FSafeFloat* FSF, float* NF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDivideFloat");
		
		USCLibrary_SCO_Pure_GetSafeFloatDivideFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (NF != nullptr)
			*NF = params.NF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDecreaseFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeFloat USCLibrary::SCO_Pure_GetSafeFloatDecreaseFSF(struct FSafeFloat* FSF, float* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeFloatDecreaseFSF");
		
		USCLibrary_SCO_Pure_GetSafeFloatDecreaseFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSF != nullptr)
			*FSF = params.FSF;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  SSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeColorNotEqualFSC(struct FSafeColor* FSC, struct FSafeColor* SSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualFSC");
		
		USCLibrary_SCO_Pure_GetSafeColorNotEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (SSC != nullptr)
			*SSC = params.SSC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NC                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeColorNotEqualColor(struct FSafeColor* FSC, struct FLinearColor* NC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorNotEqualColor");
		
		USCLibrary_SCO_Pure_GetSafeColorNotEqualColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (NC != nullptr)
			*NC = params.NC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  SSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeColorEqualFSC(struct FSafeColor* FSC, struct FSafeColor* SSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualFSC");
		
		USCLibrary_SCO_Pure_GetSafeColorEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (SSC != nullptr)
			*SSC = params.SSC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                NC                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeColorEqualColor(struct FSafeColor* FSC, struct FLinearColor* NC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeColorEqualColor");
		
		USCLibrary_SCO_Pure_GetSafeColorEqualColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSC != nullptr)
			*FSC = params.FSC;
		if (NC != nullptr)
			*NC = params.NC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteXorFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteXorByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteXorByte");
		
		USCLibrary_SCO_Pure_GetSafeByteXorByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteTimesFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteTimesByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteTimesByte");
		
		USCLibrary_SCO_Pure_GetSafeByteTimesByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteSmallerFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteSmallerFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteSmallerEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteSmallerEqualByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeByteSmallerEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteSmallerByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteSmallerByte");
		
		USCLibrary_SCO_Pure_GetSafeByteSmallerByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteShiftRFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftRByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftRByte");
		
		USCLibrary_SCO_Pure_GetSafeByteShiftRByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteShiftLFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteShiftLByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteShiftLByte");
		
		USCLibrary_SCO_Pure_GetSafeByteShiftLByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusFSB");
		
		USCLibrary_SCO_Pure_GetSafeBytePlusFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeBytePlusEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusEqualByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeBytePlusEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeBytePlusByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBytePlusByte");
		
		USCLibrary_SCO_Pure_GetSafeBytePlusByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteOrFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteOrByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteOrByte");
		
		USCLibrary_SCO_Pure_GetSafeByteOrByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotFSB(struct FSafeByte* FSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteNotFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteNotEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteNotEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteNotEqualByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeByteNotEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteNotByte(unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteNotByte");
		
		USCLibrary_SCO_Pure_GetSafeByteNotByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteModFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteModFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteModByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteModByte");
		
		USCLibrary_SCO_Pure_GetSafeByteModByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteMinusFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteMinusEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusEqualByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeByteMinusEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteMinusByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteMinusByte");
		
		USCLibrary_SCO_Pure_GetSafeByteMinusByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteIncreaseFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteIncreaseFSB(struct FSafeByte* FSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteIncreaseFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteIncreaseFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteGreaterFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteGreaterFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteGreaterEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteGreaterEqualByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeByteGreaterEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteGreaterByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteGreaterByte");
		
		USCLibrary_SCO_Pure_GetSafeByteGreaterByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteEqualFSB(struct FSafeByte* FSB, struct FSafeByte* SSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetSafeByteEqualByte(struct FSafeByte* FSB, unsigned char* NB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteEqualByte");
		
		USCLibrary_SCO_Pure_GetSafeByteEqualByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteDivideFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDivideByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDivideByte");
		
		USCLibrary_SCO_Pure_GetSafeByteDivideByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDecreaseFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteDecreaseFSB(struct FSafeByte* FSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteDecreaseFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteDecreaseFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndFSB(struct FSafeByte* FSB, struct FSafeByte* SSB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndFSB");
		
		USCLibrary_SCO_Pure_GetSafeByteAndFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeByte USCLibrary::SCO_Pure_GetSafeByteAndByte(struct FSafeByte* FSB, unsigned char* NB, unsigned char* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeByteAndByte");
		
		USCLibrary_SCO_Pure_GetSafeByteAndByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrFSB(struct FSafeBool* FSB, struct FSafeBool* SSB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrFSB");
		
		USCLibrary_SCO_Pure_GetSafeBoolOrFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolOrBool(struct FSafeBool* FSB, bool* NB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolOrBool");
		
		USCLibrary_SCO_Pure_GetSafeBoolOrBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualFSB(struct FSafeBool* FSB, struct FSafeBool* SSB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeBoolNotEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolNotEqualBool(struct FSafeBool* FSB, bool* NB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolNotEqualBool");
		
		USCLibrary_SCO_Pure_GetSafeBoolNotEqualBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualFSB(struct FSafeBool* FSB, struct FSafeBool* SSB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualFSB");
		
		USCLibrary_SCO_Pure_GetSafeBoolEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolEqualBool(struct FSafeBool* FSB, bool* NB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolEqualBool");
		
		USCLibrary_SCO_Pure_GetSafeBoolEqualBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   SSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndFSB(struct FSafeBool* FSB, struct FSafeBool* SSB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndFSB");
		
		USCLibrary_SCO_Pure_GetSafeBoolAndFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (SSB != nullptr)
			*SSB = params.SSB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSafeBool USCLibrary::SCO_Pure_GetSafeBoolAndBool(struct FSafeBool* FSB, bool* NB, bool* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetSafeBoolAndBool");
		
		USCLibrary_SCO_Pure_GetSafeBoolAndBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FSB != nullptr)
			*FSB = params.FSB;
		if (NB != nullptr)
			*NB = params.NB;
		if (Output != nullptr)
			*Output = params.Output;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorTimesFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorTimesFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorTimesFSR");
		
		USCLibrary_SCO_Pure_GetRotatorTimesFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorSmallerFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerFSR");
		
		USCLibrary_SCO_Pure_GetRotatorSmallerFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorSmallerEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorSmallerEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorSmallerEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorPlusFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusFSR");
		
		USCLibrary_SCO_Pure_GetRotatorPlusFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorPlusEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorPlusEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorPlusEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorNotEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorNotEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorNotEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorNotEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorModFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorModFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorModFSR");
		
		USCLibrary_SCO_Pure_GetRotatorModFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorMinusFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusFSR");
		
		USCLibrary_SCO_Pure_GetRotatorMinusFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorMinusEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorMinusEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorMinusEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorGreaterFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterFSR");
		
		USCLibrary_SCO_Pure_GetRotatorGreaterFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorGreaterEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorGreaterEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorGreaterEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorEqualFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetRotatorEqualFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorEqualFSR");
		
		USCLibrary_SCO_Pure_GetRotatorEqualFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetRotatorDivideFSR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NR                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FSafeRotator                                FSR                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCO_Pure_GetRotatorDivideFSR(struct FRotator* NR, struct FSafeRotator* FSR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetRotatorDivideFSR");
		
		USCLibrary_SCO_Pure_GetRotatorDivideFSR_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NR != nullptr)
			*NR = params.NR;
		if (FSR != nullptr)
			*FSR = params.FSR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNameSmallerFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetNameSmallerFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNameSmallerFSN");
		
		USCLibrary_SCO_Pure_GetNameSmallerFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCO_Pure_GetNamePlusFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusFSN");
		
		USCLibrary_SCO_Pure_GetNamePlusFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCO_Pure_GetNamePlusEqualFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNamePlusEqualFSN");
		
		USCLibrary_SCO_Pure_GetNamePlusEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNameNotEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetNameNotEqualFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNameNotEqualFSN");
		
		USCLibrary_SCO_Pure_GetNameNotEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNameGreaterFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetNameGreaterFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNameGreaterFSN");
		
		USCLibrary_SCO_Pure_GetNameGreaterFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetNameEqualFSN
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NN                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeName                                   FSN                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetNameEqualFSN(class FName* NN, struct FSafeName* FSN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetNameEqualFSN");
		
		USCLibrary_SCO_Pure_GetNameEqualFSN_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NN != nullptr)
			*NN = params.NN;
		if (FSN != nullptr)
			*FSN = params.FSN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntXorFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntXorFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntXorFSI");
		
		USCLibrary_SCO_Pure_GetIntXorFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntTimesFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntTimesFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntTimesFSI");
		
		USCLibrary_SCO_Pure_GetIntTimesFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntSmallerFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerFSI");
		
		USCLibrary_SCO_Pure_GetIntSmallerFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntSmallerEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntSmallerEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntSmallerEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftRFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntShiftRFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftRFSI");
		
		USCLibrary_SCO_Pure_GetIntShiftRFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftLFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntShiftLFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntShiftLFSI");
		
		USCLibrary_SCO_Pure_GetIntShiftLFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntPlusFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusFSI");
		
		USCLibrary_SCO_Pure_GetIntPlusFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntPlusEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntPlusEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntPlusEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntOrFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntOrFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntOrFSI");
		
		USCLibrary_SCO_Pure_GetIntOrFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntNotEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntNotEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntNotEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntNotEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntModFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntModFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntModFSI");
		
		USCLibrary_SCO_Pure_GetIntModFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntMinusFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusFSI");
		
		USCLibrary_SCO_Pure_GetIntMinusFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntMinusEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntMinusEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntMinusEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntGreaterFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterFSI");
		
		USCLibrary_SCO_Pure_GetIntGreaterFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntGreaterEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntGreaterEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntGreaterEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntEqualFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetIntEqualFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntEqualFSI");
		
		USCLibrary_SCO_Pure_GetIntEqualFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntDivideFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntDivideFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntDivideFSI");
		
		USCLibrary_SCO_Pure_GetIntDivideFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetIntAndFSI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NI                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeInt                                    FSI                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCO_Pure_GetIntAndFSI(int32_t* NI, struct FSafeInt* FSI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetIntAndFSI");
		
		USCLibrary_SCO_Pure_GetIntAndFSI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NI != nullptr)
			*NI = params.NI;
		if (FSI != nullptr)
			*FSI = params.FSI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatTimesFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatTimesFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatTimesFSF");
		
		USCLibrary_SCO_Pure_GetFloatTimesFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatSmallerFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerFSF");
		
		USCLibrary_SCO_Pure_GetFloatSmallerFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatSmallerEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatSmallerEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatSmallerEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatPlusFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusFSF");
		
		USCLibrary_SCO_Pure_GetFloatPlusFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatPlusEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatPlusEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatPlusEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatNotEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatNotEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatNotEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatNotEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatModFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatModFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatModFSF");
		
		USCLibrary_SCO_Pure_GetFloatModFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatMinusFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusFSF");
		
		USCLibrary_SCO_Pure_GetFloatMinusFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatMinusEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatMinusEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatMinusEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatGreaterFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterFSF");
		
		USCLibrary_SCO_Pure_GetFloatGreaterFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatGreaterEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatGreaterEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatGreaterEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatEqualFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetFloatEqualFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatEqualFSF");
		
		USCLibrary_SCO_Pure_GetFloatEqualFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetFloatDivideFSF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NF                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeFloat                                  FSF                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCO_Pure_GetFloatDivideFSF(float* NF, struct FSafeFloat* FSF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetFloatDivideFSF");
		
		USCLibrary_SCO_Pure_GetFloatDivideFSF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NF != nullptr)
			*NF = params.NF;
		if (FSF != nullptr)
			*FSF = params.FSF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetColorNotEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NC                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetColorNotEqualFSC(struct FLinearColor* NC, struct FSafeColor* FSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetColorNotEqualFSC");
		
		USCLibrary_SCO_Pure_GetColorNotEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NC != nullptr)
			*NC = params.NC;
		if (FSC != nullptr)
			*FSC = params.FSC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetColorEqualFSC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NC                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeColor                                  FSC                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetColorEqualFSC(struct FLinearColor* NC, struct FSafeColor* FSC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetColorEqualFSC");
		
		USCLibrary_SCO_Pure_GetColorEqualFSC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NC != nullptr)
			*NC = params.NC;
		if (FSC != nullptr)
			*FSC = params.FSC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteXorFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteXorFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteXorFSB");
		
		USCLibrary_SCO_Pure_GetByteXorFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteTimesFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteTimesFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteTimesFSB");
		
		USCLibrary_SCO_Pure_GetByteTimesFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteSmallerFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerFSB");
		
		USCLibrary_SCO_Pure_GetByteSmallerFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteSmallerEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteSmallerEqualFSB");
		
		USCLibrary_SCO_Pure_GetByteSmallerEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftRFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteShiftRFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftRFSB");
		
		USCLibrary_SCO_Pure_GetByteShiftRFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftLFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteShiftLFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteShiftLFSB");
		
		USCLibrary_SCO_Pure_GetByteShiftLFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetBytePlusFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusFSB");
		
		USCLibrary_SCO_Pure_GetBytePlusFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetBytePlusEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBytePlusEqualFSB");
		
		USCLibrary_SCO_Pure_GetBytePlusEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteOrFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteOrFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteOrFSB");
		
		USCLibrary_SCO_Pure_GetByteOrFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteNotEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteNotEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteNotEqualFSB");
		
		USCLibrary_SCO_Pure_GetByteNotEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteModFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteModFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteModFSB");
		
		USCLibrary_SCO_Pure_GetByteModFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteMinusFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusFSB");
		
		USCLibrary_SCO_Pure_GetByteMinusFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteMinusEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteMinusEqualFSB");
		
		USCLibrary_SCO_Pure_GetByteMinusEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteGreaterFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterFSB");
		
		USCLibrary_SCO_Pure_GetByteGreaterFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteGreaterEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteGreaterEqualFSB");
		
		USCLibrary_SCO_Pure_GetByteGreaterEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetByteEqualFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteEqualFSB");
		
		USCLibrary_SCO_Pure_GetByteEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteDivideFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteDivideFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteDivideFSB");
		
		USCLibrary_SCO_Pure_GetByteDivideFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetByteAndFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeByte                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCO_Pure_GetByteAndFSB(unsigned char* NB, struct FSafeByte* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetByteAndFSB");
		
		USCLibrary_SCO_Pure_GetByteAndFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBoolOrFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetBoolOrFSB(bool* NB, struct FSafeBool* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBoolOrFSB");
		
		USCLibrary_SCO_Pure_GetBoolOrFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBoolNotEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetBoolNotEqualFSB(bool* NB, struct FSafeBool* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBoolNotEqualFSB");
		
		USCLibrary_SCO_Pure_GetBoolNotEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBoolEqualFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetBoolEqualFSB(bool* NB, struct FSafeBool* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBoolEqualFSB");
		
		USCLibrary_SCO_Pure_GetBoolEqualFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCO_Pure_GetBoolAndFSB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NB                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSafeBool                                   FSB                                                        (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCO_Pure_GetBoolAndFSB(bool* NB, struct FSafeBool* FSB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCO_Pure_GetBoolAndFSB");
		
		USCLibrary_SCO_Pure_GetBoolAndFSB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NB != nullptr)
			*NB = params.NB;
		if (FSB != nullptr)
			*FSB = params.FSB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Pure_SetSafeVector4DWithKey(struct FSafeVector4D* SV, const class FString& Key, struct FVector4* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4DWithKey");
		
		USCLibrary_SCL_Pure_SetSafeVector4DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Pure_SetSafeVector4D(struct FSafeVector4D* SV, struct FVector4* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector4D");
		
		USCLibrary_SCL_Pure_SetSafeVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Pure_SetSafeVector3DWithKey(struct FSafeVector3D* SV, const class FString& Key, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3DWithKey");
		
		USCLibrary_SCL_Pure_SetSafeVector3DWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Pure_SetSafeVector3D(struct FSafeVector3D* SV, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector3D");
		
		USCLibrary_SCL_Pure_SetSafeVector3D_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Pure_SetSafeVector2DWithKey(struct FSafeVector2D* SV, const class FString& Key, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2DWithKey");
		
		USCLibrary_SCL_Pure_SetSafeVector2DWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Pure_SetSafeVector2D(struct FSafeVector2D* SV, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeVector2D");
		
		USCLibrary_SCL_Pure_SetSafeVector2D_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransformWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Pure_SetSafeTransformWithKey(struct FSafeTransform* ST, const class FString& Key, struct FTransform* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransformWithKey");
		
		USCLibrary_SCL_Pure_SetSafeTransformWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Pure_SetSafeTransform(struct FSafeTransform* ST, struct FTransform* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeTransform");
		
		USCLibrary_SCL_Pure_SetSafeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeTextWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Value                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Pure_SetSafeTextWithKey(struct FSafeText* ST, const class FString& Key, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeTextWithKey");
		
		USCLibrary_SCL_Pure_SetSafeTextWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Value                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Pure_SetSafeText(struct FSafeText* ST, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeText");
		
		USCLibrary_SCL_Pure_SetSafeText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeStringWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Pure_SetSafeStringWithKey(struct FSafeString* SS, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeStringWithKey");
		
		USCLibrary_SCL_Pure_SetSafeStringWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Pure_SetSafeString(struct FSafeString* SS, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeString");
		
		USCLibrary_SCL_Pure_SetSafeString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotatorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Pure_SetSafeRotatorWithKey(struct FSafeRotator* SR, const class FString& Key, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotatorWithKey");
		
		USCLibrary_SCL_Pure_SetSafeRotatorWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Pure_SetSafeRotator(struct FSafeRotator* SR, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeRotator");
		
		USCLibrary_SCL_Pure_SetSafeRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeNameWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Pure_SetSafeNameWithKey(struct FSafeName* SN, const class FString& Key, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeNameWithKey");
		
		USCLibrary_SCL_Pure_SetSafeNameWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Pure_SetSafeName(struct FSafeName* SN, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeName");
		
		USCLibrary_SCL_Pure_SetSafeName_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeIntWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Pure_SetSafeIntWithKey(struct FSafeInt* SI, const class FString& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeIntWithKey");
		
		USCLibrary_SCL_Pure_SetSafeIntWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Pure_SetSafeInt(struct FSafeInt* SI, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeInt");
		
		USCLibrary_SCL_Pure_SetSafeInt_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloatWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Pure_SetSafeFloatWithKey(struct FSafeFloat* SF, const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloatWithKey");
		
		USCLibrary_SCL_Pure_SetSafeFloatWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Pure_SetSafeFloat(struct FSafeFloat* SF, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeFloat");
		
		USCLibrary_SCL_Pure_SetSafeFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeColorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Pure_SetSafeColorWithKey(struct FSafeColor* SC, const class FString& Key, struct FLinearColor* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeColorWithKey");
		
		USCLibrary_SCL_Pure_SetSafeColorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Pure_SetSafeColor(struct FSafeColor* SC, struct FLinearColor* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeColor");
		
		USCLibrary_SCL_Pure_SetSafeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeByteWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Pure_SetSafeByteWithKey(struct FSafeByte* SB, const class FString& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeByteWithKey");
		
		USCLibrary_SCL_Pure_SetSafeByteWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Pure_SetSafeByte(struct FSafeByte* SB, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeByte");
		
		USCLibrary_SCL_Pure_SetSafeByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeBoolWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Pure_SetSafeBoolWithKey(struct FSafeBool* SB, const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeBoolWithKey");
		
		USCLibrary_SCL_Pure_SetSafeBoolWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_SetSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Pure_SetSafeBool(struct FSafeBool* SB, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_SetSafeBool");
		
		USCLibrary_SCL_Pure_SetSafeBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Pure_GetSafeVector4DWithKey(struct FSafeVector4D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4DWithKey");
		
		USCLibrary_SCL_Pure_GetSafeVector4DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Pure_GetSafeVector4D(struct FSafeVector4D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector4D");
		
		USCLibrary_SCL_Pure_GetSafeVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Pure_GetSafeVector3DWithKey(struct FSafeVector3D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3DWithKey");
		
		USCLibrary_SCL_Pure_GetSafeVector3DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Pure_GetSafeVector3D(struct FSafeVector3D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector3D");
		
		USCLibrary_SCL_Pure_GetSafeVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Pure_GetSafeVector2DWithKey(struct FSafeVector2D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2DWithKey");
		
		USCLibrary_SCL_Pure_GetSafeVector2DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Pure_GetSafeVector2D(struct FSafeVector2D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeVector2D");
		
		USCLibrary_SCL_Pure_GetSafeVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransformWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Pure_GetSafeTransformWithKey(struct FSafeTransform* ST, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransformWithKey");
		
		USCLibrary_SCL_Pure_GetSafeTransformWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Pure_GetSafeTransform(struct FSafeTransform* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeTransform");
		
		USCLibrary_SCL_Pure_GetSafeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeTextWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Pure_GetSafeTextWithKey(struct FSafeText* ST, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeTextWithKey");
		
		USCLibrary_SCL_Pure_GetSafeTextWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Pure_GetSafeText(struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeText");
		
		USCLibrary_SCL_Pure_GetSafeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeStringWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Pure_GetSafeStringWithKey(struct FSafeString* SS, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeStringWithKey");
		
		USCLibrary_SCL_Pure_GetSafeStringWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Pure_GetSafeString(struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeString");
		
		USCLibrary_SCL_Pure_GetSafeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotatorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Pure_GetSafeRotatorWithKey(struct FSafeRotator* SR, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotatorWithKey");
		
		USCLibrary_SCL_Pure_GetSafeRotatorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Pure_GetSafeRotator(struct FSafeRotator* SR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeRotator");
		
		USCLibrary_SCL_Pure_GetSafeRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeNameWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Pure_GetSafeNameWithKey(struct FSafeName* SN, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeNameWithKey");
		
		USCLibrary_SCL_Pure_GetSafeNameWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Pure_GetSafeName(struct FSafeName* SN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeName");
		
		USCLibrary_SCL_Pure_GetSafeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeIntWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Pure_GetSafeIntWithKey(struct FSafeInt* SI, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeIntWithKey");
		
		USCLibrary_SCL_Pure_GetSafeIntWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Pure_GetSafeInt(struct FSafeInt* SI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeInt");
		
		USCLibrary_SCL_Pure_GetSafeInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloatWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Pure_GetSafeFloatWithKey(struct FSafeFloat* SF, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloatWithKey");
		
		USCLibrary_SCL_Pure_GetSafeFloatWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Pure_GetSafeFloat(struct FSafeFloat* SF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeFloat");
		
		USCLibrary_SCL_Pure_GetSafeFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeColorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Pure_GetSafeColorWithKey(struct FSafeColor* SC, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeColorWithKey");
		
		USCLibrary_SCL_Pure_GetSafeColorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Pure_GetSafeColor(struct FSafeColor* SC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeColor");
		
		USCLibrary_SCL_Pure_GetSafeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeByteWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Pure_GetSafeByteWithKey(struct FSafeByte* SB, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeByteWithKey");
		
		USCLibrary_SCL_Pure_GetSafeByteWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Pure_GetSafeByte(struct FSafeByte* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeByte");
		
		USCLibrary_SCL_Pure_GetSafeByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeBoolWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Pure_GetSafeBoolWithKey(struct FSafeBool* SB, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeBoolWithKey");
		
		USCLibrary_SCL_Pure_GetSafeBoolWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Pure_GetSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Pure_GetSafeBool(struct FSafeBool* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Pure_GetSafeBool");
		
		USCLibrary_SCL_Pure_GetSafeBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Callable_SetSafeVector4DWithKey(struct FSafeVector4D* SV, const class FString& Key, struct FVector4* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4DWithKey");
		
		USCLibrary_SCL_Callable_SetSafeVector4DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Callable_SetSafeVector4D(struct FSafeVector4D* SV, struct FVector4* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector4D");
		
		USCLibrary_SCL_Callable_SetSafeVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Callable_SetSafeVector3DWithKey(struct FSafeVector3D* SV, const class FString& Key, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3DWithKey");
		
		USCLibrary_SCL_Callable_SetSafeVector3DWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Callable_SetSafeVector3D(struct FSafeVector3D* SV, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector3D");
		
		USCLibrary_SCL_Callable_SetSafeVector3D_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Callable_SetSafeVector2DWithKey(struct FSafeVector2D* SV, const class FString& Key, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2DWithKey");
		
		USCLibrary_SCL_Callable_SetSafeVector2DWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Callable_SetSafeVector2D(struct FSafeVector2D* SV, const struct FVector2D& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeVector2D");
		
		USCLibrary_SCL_Callable_SetSafeVector2D_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransformWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Callable_SetSafeTransformWithKey(struct FSafeTransform* ST, const class FString& Key, struct FTransform* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransformWithKey");
		
		USCLibrary_SCL_Callable_SetSafeTransformWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Value                                                      (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Callable_SetSafeTransform(struct FSafeTransform* ST, struct FTransform* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeTransform");
		
		USCLibrary_SCL_Callable_SetSafeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeTextWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        Value                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Callable_SetSafeTextWithKey(struct FSafeText* ST, const class FString& Key, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeTextWithKey");
		
		USCLibrary_SCL_Callable_SetSafeTextWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FText                                        Value                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Callable_SetSafeText(struct FSafeText* ST, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeText");
		
		USCLibrary_SCL_Callable_SetSafeText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeStringWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_SetSafeStringWithKey(struct FSafeString* SS, const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeStringWithKey");
		
		USCLibrary_SCL_Callable_SetSafeStringWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_SetSafeString(struct FSafeString* SS, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeString");
		
		USCLibrary_SCL_Callable_SetSafeString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotatorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Callable_SetSafeRotatorWithKey(struct FSafeRotator* SR, const class FString& Key, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotatorWithKey");
		
		USCLibrary_SCL_Callable_SetSafeRotatorWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Callable_SetSafeRotator(struct FSafeRotator* SR, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeRotator");
		
		USCLibrary_SCL_Callable_SetSafeRotator_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeNameWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Callable_SetSafeNameWithKey(struct FSafeName* SN, const class FString& Key, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeNameWithKey");
		
		USCLibrary_SCL_Callable_SetSafeNameWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Callable_SetSafeName(struct FSafeName* SN, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeName");
		
		USCLibrary_SCL_Callable_SetSafeName_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeIntWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Callable_SetSafeIntWithKey(struct FSafeInt* SI, const class FString& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeIntWithKey");
		
		USCLibrary_SCL_Callable_SetSafeIntWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Callable_SetSafeInt(struct FSafeInt* SI, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeInt");
		
		USCLibrary_SCL_Callable_SetSafeInt_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloatWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Callable_SetSafeFloatWithKey(struct FSafeFloat* SF, const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloatWithKey");
		
		USCLibrary_SCL_Callable_SetSafeFloatWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Callable_SetSafeFloat(struct FSafeFloat* SF, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeFloat");
		
		USCLibrary_SCL_Callable_SetSafeFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeColorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Callable_SetSafeColorWithKey(struct FSafeColor* SC, const class FString& Key, struct FLinearColor* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeColorWithKey");
		
		USCLibrary_SCL_Callable_SetSafeColorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Callable_SetSafeColor(struct FSafeColor* SC, struct FLinearColor* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeColor");
		
		USCLibrary_SCL_Callable_SetSafeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeByteWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Callable_SetSafeByteWithKey(struct FSafeByte* SB, const class FString& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeByteWithKey");
		
		USCLibrary_SCL_Callable_SetSafeByteWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Callable_SetSafeByte(struct FSafeByte* SB, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeByte");
		
		USCLibrary_SCL_Callable_SetSafeByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeBoolWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Callable_SetSafeBoolWithKey(struct FSafeBool* SB, const class FString& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeBoolWithKey");
		
		USCLibrary_SCL_Callable_SetSafeBoolWithKey_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Callable_SetSafeBool(struct FSafeBool* SB, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetSafeBool");
		
		USCLibrary_SCL_Callable_SetSafeBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Callable_SetRawSafeText(struct FSafeText* ST, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeText");
		
		USCLibrary_SCL_Callable_SetRawSafeText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_SetRawSafeString(struct FSafeString* SS, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeString");
		
		USCLibrary_SCL_Callable_SetRawSafeString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Callable_SetRawSafeName(struct FSafeName* SN, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeName");
		
		USCLibrary_SCL_Callable_SetRawSafeName_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Callable_SetRawSafeInt(struct FSafeInt* SI, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeInt");
		
		USCLibrary_SCL_Callable_SetRawSafeInt_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Callable_SetRawSafeFloat(struct FSafeFloat* SF, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeFloat");
		
		USCLibrary_SCL_Callable_SetRawSafeFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Callable_SetRawSafeByte(struct FSafeByte* SB, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeByte");
		
		USCLibrary_SCL_Callable_SetRawSafeByte_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Callable_SetRawSafeBool(struct FSafeBool* SB, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_SetRawSafeBool");
		
		USCLibrary_SCL_Callable_SetRawSafeBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Callable_GetSafeVector4DWithKey(struct FSafeVector4D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4DWithKey");
		
		USCLibrary_SCL_Callable_GetSafeVector4DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector4D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USCLibrary::SCL_Callable_GetSafeVector4D(struct FSafeVector4D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector4D");
		
		USCLibrary_SCL_Callable_GetSafeVector4D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Callable_GetSafeVector3DWithKey(struct FSafeVector3D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3DWithKey");
		
		USCLibrary_SCL_Callable_GetSafeVector3DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector3D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USCLibrary::SCL_Callable_GetSafeVector3D(struct FSafeVector3D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector3D");
		
		USCLibrary_SCL_Callable_GetSafeVector3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2DWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Callable_GetSafeVector2DWithKey(struct FSafeVector2D* SV, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2DWithKey");
		
		USCLibrary_SCL_Callable_GetSafeVector2DWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeVector2D                               SV                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D USCLibrary::SCL_Callable_GetSafeVector2D(struct FSafeVector2D* SV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeVector2D");
		
		USCLibrary_SCL_Callable_GetSafeVector2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SV != nullptr)
			*SV = params.SV;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransformWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Callable_GetSafeTransformWithKey(struct FSafeTransform* ST, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransformWithKey");
		
		USCLibrary_SCL_Callable_GetSafeTransformWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeTransform                              ST                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform USCLibrary::SCL_Callable_GetSafeTransform(struct FSafeTransform* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeTransform");
		
		USCLibrary_SCL_Callable_GetSafeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeTextWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Callable_GetSafeTextWithKey(struct FSafeText* ST, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeTextWithKey");
		
		USCLibrary_SCL_Callable_GetSafeTextWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USCLibrary::SCL_Callable_GetSafeText(struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeText");
		
		USCLibrary_SCL_Callable_GetSafeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeStringWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetSafeStringWithKey(struct FSafeString* SS, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeStringWithKey");
		
		USCLibrary_SCL_Callable_GetSafeStringWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetSafeString(struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeString");
		
		USCLibrary_SCL_Callable_GetSafeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotatorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Callable_GetSafeRotatorWithKey(struct FSafeRotator* SR, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotatorWithKey");
		
		USCLibrary_SCL_Callable_GetSafeRotatorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeRotator                                SR                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USCLibrary::SCL_Callable_GetSafeRotator(struct FSafeRotator* SR)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeRotator");
		
		USCLibrary_SCL_Callable_GetSafeRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SR != nullptr)
			*SR = params.SR;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeNameWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Callable_GetSafeNameWithKey(struct FSafeName* SN, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeNameWithKey");
		
		USCLibrary_SCL_Callable_GetSafeNameWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USCLibrary::SCL_Callable_GetSafeName(struct FSafeName* SN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeName");
		
		USCLibrary_SCL_Callable_GetSafeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeIntWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Callable_GetSafeIntWithKey(struct FSafeInt* SI, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeIntWithKey");
		
		USCLibrary_SCL_Callable_GetSafeIntWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USCLibrary::SCL_Callable_GetSafeInt(struct FSafeInt* SI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeInt");
		
		USCLibrary_SCL_Callable_GetSafeInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloatWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Callable_GetSafeFloatWithKey(struct FSafeFloat* SF, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloatWithKey");
		
		USCLibrary_SCL_Callable_GetSafeFloatWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USCLibrary::SCL_Callable_GetSafeFloat(struct FSafeFloat* SF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeFloat");
		
		USCLibrary_SCL_Callable_GetSafeFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeColorWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Callable_GetSafeColorWithKey(struct FSafeColor* SC, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeColorWithKey");
		
		USCLibrary_SCL_Callable_GetSafeColorWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeColor                                  SC                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor USCLibrary::SCL_Callable_GetSafeColor(struct FSafeColor* SC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeColor");
		
		USCLibrary_SCL_Callable_GetSafeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SC != nullptr)
			*SC = params.SC;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeByteWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Callable_GetSafeByteWithKey(struct FSafeByte* SB, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeByteWithKey");
		
		USCLibrary_SCL_Callable_GetSafeByteWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char USCLibrary::SCL_Callable_GetSafeByte(struct FSafeByte* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeByte");
		
		USCLibrary_SCL_Callable_GetSafeByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeBoolWithKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Callable_GetSafeBoolWithKey(struct FSafeBool* SB, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeBoolWithKey");
		
		USCLibrary_SCL_Callable_GetSafeBoolWithKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USCLibrary::SCL_Callable_GetSafeBool(struct FSafeBool* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetSafeBool");
		
		USCLibrary_SCL_Callable_GetSafeBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeText                                   ST                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeText(struct FSafeText* ST)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeText");
		
		USCLibrary_SCL_Callable_GetRawSafeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ST != nullptr)
			*ST = params.ST;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeString                                 SS                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeString(struct FSafeString* SS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeString");
		
		USCLibrary_SCL_Callable_GetRawSafeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SS != nullptr)
			*SS = params.SS;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeName                                   SN                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeName(struct FSafeName* SN)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeName");
		
		USCLibrary_SCL_Callable_GetRawSafeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SN != nullptr)
			*SN = params.SN;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeInt                                    SI                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeInt(struct FSafeInt* SI)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeInt");
		
		USCLibrary_SCL_Callable_GetRawSafeInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SI != nullptr)
			*SI = params.SI;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeFloat                                  SF                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeFloat(struct FSafeFloat* SF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeFloat");
		
		USCLibrary_SCL_Callable_GetRawSafeFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SF != nullptr)
			*SF = params.SF;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeByte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeByte                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeByte(struct FSafeByte* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeByte");
		
		USCLibrary_SCL_Callable_GetRawSafeByte_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSafeBool                                   SB                                                         (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USCLibrary::SCL_Callable_GetRawSafeBool(struct FSafeBool* SB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SCLibrary.SCL_Callable_GetRawSafeBool");
		
		USCLibrary_SCL_Callable_GetRawSafeBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SB != nullptr)
			*SB = params.SB;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SCLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USCUE4Settings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USCUE4Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SCUE4Settings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SCUE4.SafeGameInstance.HideGameGuardConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USafeGameInstance::HideGameGuardConsole(bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SCUE4.SafeGameInstance.HideGameGuardConsole");
		
		USafeGameInstance_HideGameGuardConsole_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USafeGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USafeGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SCUE4.SafeGameInstance");
		return ptr;
	}

}


