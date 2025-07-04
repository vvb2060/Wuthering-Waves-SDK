﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1LiufangzhewomanMd00001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1LiufangzhewomanMd00001.AIC_MO1LiufangzhewomanMd00001_C
// 0x03A0 (0x0B28 - 0x0788)
class AAIC_MO1LiufangzhewomanMd00001_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1LiufangzhewomanMd00001_C;    // 0x0788(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         激活撬棍;                                          // 0x0790(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         激活狙击枪;                                        // 0x0848(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         激活电刃;                                          // 0x0900(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         激活喷火器;                                        // 0x09B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         激活电锯;                                          // 0x0A70(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1LiufangzhewomanMd00001(int32 EntryPoint);
	void OnStart();
	void 狙击枪技能组(bool bContent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1LiufangzhewomanMd00001_C">();
	}
	static class AAIC_MO1LiufangzhewomanMd00001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1LiufangzhewomanMd00001_C>();
	}
};
static_assert(alignof(AAIC_MO1LiufangzhewomanMd00001_C) == 0x000008, "Wrong alignment on AAIC_MO1LiufangzhewomanMd00001_C");
static_assert(sizeof(AAIC_MO1LiufangzhewomanMd00001_C) == 0x000B28, "Wrong size on AAIC_MO1LiufangzhewomanMd00001_C");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, UberGraphFrame_AIC_MO1LiufangzhewomanMd00001_C) == 0x000788, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::UberGraphFrame_AIC_MO1LiufangzhewomanMd00001_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, 激活撬棍) == 0x000790, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::激活撬棍' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, 激活狙击枪) == 0x000848, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::激活狙击枪' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, 激活电刃) == 0x000900, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::激活电刃' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, 激活喷火器) == 0x0009B8, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::激活喷火器' has a wrong offset!");
static_assert(offsetof(AAIC_MO1LiufangzhewomanMd00001_C, 激活电锯) == 0x000A70, "Member 'AAIC_MO1LiufangzhewomanMd00001_C::激活电锯' has a wrong offset!");

}

