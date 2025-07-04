﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasePlatform

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BasePlatform.BP_BasePlatform_C
// 0x0018 (0x02C8 - 0x02B0)
class ABP_BasePlatform_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LeaveSphereRadius;                                 // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeaveSphereCenter;                                 // 0x02BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BasePlatform_C">();
	}
	static class ABP_BasePlatform_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BasePlatform_C>();
	}
};
static_assert(alignof(ABP_BasePlatform_C) == 0x000008, "Wrong alignment on ABP_BasePlatform_C");
static_assert(sizeof(ABP_BasePlatform_C) == 0x0002C8, "Wrong size on ABP_BasePlatform_C");
static_assert(offsetof(ABP_BasePlatform_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_BasePlatform_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BasePlatform_C, LeaveSphereRadius) == 0x0002B8, "Member 'ABP_BasePlatform_C::LeaveSphereRadius' has a wrong offset!");
static_assert(offsetof(ABP_BasePlatform_C, LeaveSphereCenter) == 0x0002BC, "Member 'ABP_BasePlatform_C::LeaveSphereCenter' has a wrong offset!");

}

