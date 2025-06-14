﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NinjaLiveFunctions

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "SimPrecision_Enum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass NinjaLiveFunctions.NinjaLiveFunctions_C
// 0x0000 (0x0030 - 0x0030)
class UNinjaLiveFunctions_C final : public UBlueprintFunctionLibrary
{
public:
	static void TraceOverlapSingle(const struct FVector& Start, const struct FVector& End, float TracelineOvershoot, class UPrimitiveComponent* TraceMesh, class UObject* __WorldContext, struct FLinearColor* HitUV, struct FVector* TracePosition);
	static void CameraFacing(class USceneComponent* InMesh, bool UseLegacyFacing, bool LockY, const struct FRotator& TraceMeshInitRot, class UObject* __WorldContext);
	static void RenderTgAcquisitionStatus(const class UObject* SelfRef, int32 RT_number___added, ESimPrecision_Enum SimPrecision, int32 ResX, int32 ResY, bool PoolManDetected, bool HalfRes, int32 NumberOfChannels, class UObject* __WorldContext, class FString* Print, float* MemConsumtion);
	static void AcquireRenderTargetsFromPool(int32 Request_0isRGBA1isRG2isR, int32 Host_RenderTG_List_Index, TArray<class FString>& RenderTargetList, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>* RenderTargetsMapTmp);
	static void TemplateLoader(class FName TemplateDefinition, class UDataTable* LoadedDataTable, const class FString& LoadedDatatablePath, class UObject* __WorldContext, bool* LoadFailed, class UObject** LoadedTemplateObject, class FString* LoadedTmpFullPath, class FString* LoadedTemplateNameOnly, bool* UsesAbsolutePath);
	static void SingleKeyPicker(class UDataTable* DataTableIn, const class FString& KeyToPick, class UObject* __WorldContext, class FString* PickedKeyValue, bool* NotFound);
	static void CreateRenderTarget(int32 Width, int32 Height, ETextureRenderTargetFormat Format, bool Clamping, ETextureGroup LODgroup, ETextureFilter Filter, class UObject* __WorldContext, class UTextureRenderTarget2D** RTout);
	static void PresetLoader(const class FString& PresetName, TArray<class FName>& AssetPath, class FName AssetTrimmedName, bool ForcePreferredPreset, class UDataTable* PreferredPreset, class UObject* __WorldContext, class UDataTable** LoadedDataTable, class FString* LoadedDataTablePath, TMap<class FString, float>* PresetMap);
	static void TraceOverlap(const struct FVector& Start, const struct FVector& End, float TracelineOvershoot, ETraceTypeQuery TraceChannel, TArray<class AActor*>& FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, struct FVector* TracePosition);
	static void TraceMouse(class UObject* HitComponent, bool TouchSensitive, uint8 FingerIndex, ETraceTypeQuery TraceChannel, const TArray<class AActor*>& FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, bool* SimHitByMouse, bool* MouseClickValid, bool* TouchValid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NinjaLiveFunctions_C">();
	}
	static class UNinjaLiveFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNinjaLiveFunctions_C>();
	}
};
static_assert(alignof(UNinjaLiveFunctions_C) == 0x000008, "Wrong alignment on UNinjaLiveFunctions_C");
static_assert(sizeof(UNinjaLiveFunctions_C) == 0x000030, "Wrong size on UNinjaLiveFunctions_C");

}

