﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletCampType

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BulletCampType.BulletCampType_C
// 0x0008 (0x0040 - 0x0038)
class UBulletCampType_C final : public UPrimaryDataAsset
{
public:
	int32                                         阵营;                                              // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BulletCampType_C">();
	}
	static class UBulletCampType_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBulletCampType_C>();
	}
};
static_assert(alignof(UBulletCampType_C) == 0x000008, "Wrong alignment on UBulletCampType_C");
static_assert(sizeof(UBulletCampType_C) == 0x000040, "Wrong size on UBulletCampType_C");
static_assert(offsetof(UBulletCampType_C, 阵营) == 0x000038, "Member 'UBulletCampType_C::阵营' has a wrong offset!");

}

