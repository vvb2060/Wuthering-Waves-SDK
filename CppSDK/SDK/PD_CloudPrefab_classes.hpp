﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PD_CloudPrefab

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PD_CloudPrefab.PD_CloudPrefab_C
// 0x0008 (0x0198 - 0x0190)
class UPD_CloudPrefab_C final : public UKuroPDCloudPrefab
{
public:
	class UClass*                                 PrefebBP;                                          // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PD_CloudPrefab_C">();
	}
	static class UPD_CloudPrefab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPD_CloudPrefab_C>();
	}
};
static_assert(alignof(UPD_CloudPrefab_C) == 0x000008, "Wrong alignment on UPD_CloudPrefab_C");
static_assert(sizeof(UPD_CloudPrefab_C) == 0x000198, "Wrong size on UPD_CloudPrefab_C");
static_assert(offsetof(UPD_CloudPrefab_C, PrefebBP) == 0x000190, "Member 'UPD_CloudPrefab_C::PrefebBP' has a wrong offset!");

}

