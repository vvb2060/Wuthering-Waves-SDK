﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroLightDecal

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_KuroLightDecal.BP_KuroLightDecal_C.updateMaterialParameters
// 0x0010 (0x0010 - 0x0000)
struct BP_KuroLightDecal_C_updateMaterialParameters final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_KuroLightDecal_C_updateMaterialParameters) == 0x000008, "Wrong alignment on BP_KuroLightDecal_C_updateMaterialParameters");
static_assert(sizeof(BP_KuroLightDecal_C_updateMaterialParameters) == 0x000010, "Wrong size on BP_KuroLightDecal_C_updateMaterialParameters");
static_assert(offsetof(BP_KuroLightDecal_C_updateMaterialParameters, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'BP_KuroLightDecal_C_updateMaterialParameters::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_KuroLightDecal_C_updateMaterialParameters, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_KuroLightDecal_C_updateMaterialParameters::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

