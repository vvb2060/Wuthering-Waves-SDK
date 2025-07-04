﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyDestroySpecBullet

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyDestroySpecBullet.TsAnimNotifyDestroySpecBullet_C
// 0x0038 (0x0080 - 0x0048)
class UTsAnimNotifyDestroySpecBullet_C final : public UKuroAnimNotify
{
public:
	bool                                          是否召唤子子弹;                                    // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  角色拥有标签执行判定;                              // 0x0050(0x0020)(Edit, BlueprintVisible)
	class FName                                   bulletName;                                        // 0x0070(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyDestroySpecBullet_C">();
	}
	static class UTsAnimNotifyDestroySpecBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyDestroySpecBullet_C>();
	}
};
static_assert(alignof(UTsAnimNotifyDestroySpecBullet_C) == 0x000008, "Wrong alignment on UTsAnimNotifyDestroySpecBullet_C");
static_assert(sizeof(UTsAnimNotifyDestroySpecBullet_C) == 0x000080, "Wrong size on UTsAnimNotifyDestroySpecBullet_C");
static_assert(offsetof(UTsAnimNotifyDestroySpecBullet_C, 是否召唤子子弹) == 0x000048, "Member 'UTsAnimNotifyDestroySpecBullet_C::是否召唤子子弹' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyDestroySpecBullet_C, 角色拥有标签执行判定) == 0x000050, "Member 'UTsAnimNotifyDestroySpecBullet_C::角色拥有标签执行判定' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyDestroySpecBullet_C, bulletName) == 0x000070, "Member 'UTsAnimNotifyDestroySpecBullet_C::bulletName' has a wrong offset!");

}

