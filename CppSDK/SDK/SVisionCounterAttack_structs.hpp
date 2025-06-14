﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SVisionCounterAttack

#include "Basic.hpp"

#include "SCounterAttackEffect_structs.hpp"


namespace SDK
{

// UserDefinedStruct SVisionCounterAttack.SVisionCounterAttack
// 0x01D8 (0x01D8 - 0x0000)
struct FSVisionCounterAttack final
{
public:
	struct FSCounterAttackEffect                  对策动作效果_3_C49F3CD947BF3CCBAE02BB87703A0690;   // 0x0000(0x01C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int64                                         被对策者应用BuffID_6_B107430041EE7889780ABFB2BF439935; // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         攻击者应用BuffID_8_770DF1D74885F20C854E60A1CCB1823E; // 0x01C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          广播对策事件_15_05D42AC24F81951811435A9B67880249;  // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         对策事件ID_11_6A13DC214E971B0DF65BC788698B4A73;    // 0x01D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSVisionCounterAttack) == 0x000008, "Wrong alignment on FSVisionCounterAttack");
static_assert(sizeof(FSVisionCounterAttack) == 0x0001D8, "Wrong size on FSVisionCounterAttack");
static_assert(offsetof(FSVisionCounterAttack, 对策动作效果_3_C49F3CD947BF3CCBAE02BB87703A0690) == 0x000000, "Member 'FSVisionCounterAttack::对策动作效果_3_C49F3CD947BF3CCBAE02BB87703A0690' has a wrong offset!");
static_assert(offsetof(FSVisionCounterAttack, 被对策者应用BuffID_6_B107430041EE7889780ABFB2BF439935) == 0x0001C0, "Member 'FSVisionCounterAttack::被对策者应用BuffID_6_B107430041EE7889780ABFB2BF439935' has a wrong offset!");
static_assert(offsetof(FSVisionCounterAttack, 攻击者应用BuffID_8_770DF1D74885F20C854E60A1CCB1823E) == 0x0001C8, "Member 'FSVisionCounterAttack::攻击者应用BuffID_8_770DF1D74885F20C854E60A1CCB1823E' has a wrong offset!");
static_assert(offsetof(FSVisionCounterAttack, 广播对策事件_15_05D42AC24F81951811435A9B67880249) == 0x0001D0, "Member 'FSVisionCounterAttack::广播对策事件_15_05D42AC24F81951811435A9B67880249' has a wrong offset!");
static_assert(offsetof(FSVisionCounterAttack, 对策事件ID_11_6A13DC214E971B0DF65BC788698B4A73) == 0x0001D4, "Member 'FSVisionCounterAttack::对策事件ID_11_6A13DC214E971B0DF65BC788698B4A73' has a wrong offset!");

}

