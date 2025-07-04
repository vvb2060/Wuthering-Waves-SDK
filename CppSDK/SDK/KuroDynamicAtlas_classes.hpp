﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroDynamicAtlas

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroDynamicAtlas.DynamicAtlasBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UDynamicAtlasBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddTextureAsync(const class FString& InAtlasTag, const TArray<struct FSoftObjectPath>& InSoftObjectPath, TDelegate<void(const TArray<struct FDynamicAtlasSlotManagedHandle>& ManagedHandle)> CompleteCallback);
	static void CleanAllAtlas(const class FString& InAtlasTag);
	static bool HasOverrideSetting(const class FString& InAtlasTag);
	static void RebuildAllAtlas(const class FString& InAtlasTag);
	static void SetOverrideSetting(const class FString& InAtlasTag, struct FDynamicTextureAtlasSetting* InSetting);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicAtlasBlueprintLibrary">();
	}
	static class UDynamicAtlasBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicAtlasBlueprintLibrary>();
	}
};
static_assert(alignof(UDynamicAtlasBlueprintLibrary) == 0x000008, "Wrong alignment on UDynamicAtlasBlueprintLibrary");
static_assert(sizeof(UDynamicAtlasBlueprintLibrary) == 0x000030, "Wrong size on UDynamicAtlasBlueprintLibrary");

}

