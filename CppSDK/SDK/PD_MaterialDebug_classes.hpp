﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PD_MaterialDebug

#include "Basic.hpp"

#include "SMaterialDebugInfo_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PD_MaterialDebug.PD_MaterialDebug_C
// 0x0140 (0x0178 - 0x0038)
class UPD_MaterialDebug_C final : public UPrimaryDataAsset
{
public:
	TMap<int32, class FString>                    MaterialControllerList;                            // 0x0038(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, struct FSMaterialDebugInfo> Body;                                            // 0x0088(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, struct FSMaterialDebugInfo> Weapon;                                          // 0x00D8(0x0050)(Edit, BlueprintVisible)
	TMap<class FString, struct FSMaterialDebugInfo> Hulu;                                            // 0x0128(0x0050)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PD_MaterialDebug_C">();
	}
	static class UPD_MaterialDebug_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPD_MaterialDebug_C>();
	}
};
static_assert(alignof(UPD_MaterialDebug_C) == 0x000008, "Wrong alignment on UPD_MaterialDebug_C");
static_assert(sizeof(UPD_MaterialDebug_C) == 0x000178, "Wrong size on UPD_MaterialDebug_C");
static_assert(offsetof(UPD_MaterialDebug_C, MaterialControllerList) == 0x000038, "Member 'UPD_MaterialDebug_C::MaterialControllerList' has a wrong offset!");
static_assert(offsetof(UPD_MaterialDebug_C, Body) == 0x000088, "Member 'UPD_MaterialDebug_C::Body' has a wrong offset!");
static_assert(offsetof(UPD_MaterialDebug_C, Weapon) == 0x0000D8, "Member 'UPD_MaterialDebug_C::Weapon' has a wrong offset!");
static_assert(offsetof(UPD_MaterialDebug_C, Hulu) == 0x000128, "Member 'UPD_MaterialDebug_C::Hulu' has a wrong offset!");

}

