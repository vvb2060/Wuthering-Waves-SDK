﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SUiRoleCameraSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SUiRoleCameraSetting.SUiRoleCameraSetting
// 0x0054 (0x0054 - 0x0000)
struct FSUiRoleCameraSetting final
{
public:
	float                                         镜头Yaw灵敏度系数_4_9DF488B344C2385FCBA690AE5B49236F; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         镜头Pitch灵敏度系数_7_8C215E884572AA5E4941018F3E2F8923; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         镜头缩放灵敏度系数_14_1EA4B0154F4FCB5BA9BEF5BD4F1E2603; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         角色开始虚化仰视角_15_DDAFBD504DEA2E936A4E9E949D1DFA40; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         角色最大虚化仰视角_16_695E333E48605B29486DF7B0080A2706; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw限制Min_61_4D39AA9540B89EDF570903BFE0CD0167;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw限制Max_62_4DD67A1949FA2027BA054EA1EEF6E069;    // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch限制Min_17_D842EAA048CA56B424F0529FFD1B4920;  // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch限制Max_18_01FCA83843A6902CDA4BAE8341D3F8E7;  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         最小臂长_21_4B98CC13437D1E04074A228C5B7474E2;      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         最大臂长_22_EB8CAF65428E4746ED8C589952CA8666;      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         倍化手柄输入倍率_2_E0BBF79C4E9FDC1AE86C91BADB6AA459; // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         角色开始虚化距离_27_558A6097480B8FB5B34382A452387D67; // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         角色最大虚化距离_28_A6440A3C424B7D3A6D55F2B6FB5D47DA; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         相机动画过程中角色开始虚化距离_35_0A9E98094554EC4FD6A51185DA1BC08D; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         相机动画过程中角色最大虚化距离_36_2D8297684F8ACB4D57B1AFBBF003CCB6; // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         相机相对角色的最低高度_40_3FFF172C431BCDE077A9D1807E252876; // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         移动端旋转输入倍率_45_160DF5664D05BD64474BC2A7815C7F89; // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         移动端缩放输入倍率_46_71E29147450B2C27B37F569D9B92A7F4; // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         最大臂长时的光圈_53_750E0B314C586842CA0CE7B2CF988CE5; // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         最小臂长时的光圈_54_3C09738C4B9FD3931FB9629BEF3FE4BB; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSUiRoleCameraSetting) == 0x000004, "Wrong alignment on FSUiRoleCameraSetting");
static_assert(sizeof(FSUiRoleCameraSetting) == 0x000054, "Wrong size on FSUiRoleCameraSetting");
static_assert(offsetof(FSUiRoleCameraSetting, 镜头Yaw灵敏度系数_4_9DF488B344C2385FCBA690AE5B49236F) == 0x000000, "Member 'FSUiRoleCameraSetting::镜头Yaw灵敏度系数_4_9DF488B344C2385FCBA690AE5B49236F' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 镜头Pitch灵敏度系数_7_8C215E884572AA5E4941018F3E2F8923) == 0x000004, "Member 'FSUiRoleCameraSetting::镜头Pitch灵敏度系数_7_8C215E884572AA5E4941018F3E2F8923' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 镜头缩放灵敏度系数_14_1EA4B0154F4FCB5BA9BEF5BD4F1E2603) == 0x000008, "Member 'FSUiRoleCameraSetting::镜头缩放灵敏度系数_14_1EA4B0154F4FCB5BA9BEF5BD4F1E2603' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 角色开始虚化仰视角_15_DDAFBD504DEA2E936A4E9E949D1DFA40) == 0x00000C, "Member 'FSUiRoleCameraSetting::角色开始虚化仰视角_15_DDAFBD504DEA2E936A4E9E949D1DFA40' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 角色最大虚化仰视角_16_695E333E48605B29486DF7B0080A2706) == 0x000010, "Member 'FSUiRoleCameraSetting::角色最大虚化仰视角_16_695E333E48605B29486DF7B0080A2706' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, Yaw限制Min_61_4D39AA9540B89EDF570903BFE0CD0167) == 0x000014, "Member 'FSUiRoleCameraSetting::Yaw限制Min_61_4D39AA9540B89EDF570903BFE0CD0167' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, Yaw限制Max_62_4DD67A1949FA2027BA054EA1EEF6E069) == 0x000018, "Member 'FSUiRoleCameraSetting::Yaw限制Max_62_4DD67A1949FA2027BA054EA1EEF6E069' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, Pitch限制Min_17_D842EAA048CA56B424F0529FFD1B4920) == 0x00001C, "Member 'FSUiRoleCameraSetting::Pitch限制Min_17_D842EAA048CA56B424F0529FFD1B4920' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, Pitch限制Max_18_01FCA83843A6902CDA4BAE8341D3F8E7) == 0x000020, "Member 'FSUiRoleCameraSetting::Pitch限制Max_18_01FCA83843A6902CDA4BAE8341D3F8E7' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 最小臂长_21_4B98CC13437D1E04074A228C5B7474E2) == 0x000024, "Member 'FSUiRoleCameraSetting::最小臂长_21_4B98CC13437D1E04074A228C5B7474E2' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 最大臂长_22_EB8CAF65428E4746ED8C589952CA8666) == 0x000028, "Member 'FSUiRoleCameraSetting::最大臂长_22_EB8CAF65428E4746ED8C589952CA8666' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 倍化手柄输入倍率_2_E0BBF79C4E9FDC1AE86C91BADB6AA459) == 0x00002C, "Member 'FSUiRoleCameraSetting::倍化手柄输入倍率_2_E0BBF79C4E9FDC1AE86C91BADB6AA459' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 角色开始虚化距离_27_558A6097480B8FB5B34382A452387D67) == 0x000030, "Member 'FSUiRoleCameraSetting::角色开始虚化距离_27_558A6097480B8FB5B34382A452387D67' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 角色最大虚化距离_28_A6440A3C424B7D3A6D55F2B6FB5D47DA) == 0x000034, "Member 'FSUiRoleCameraSetting::角色最大虚化距离_28_A6440A3C424B7D3A6D55F2B6FB5D47DA' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 相机动画过程中角色开始虚化距离_35_0A9E98094554EC4FD6A51185DA1BC08D) == 0x000038, "Member 'FSUiRoleCameraSetting::相机动画过程中角色开始虚化距离_35_0A9E98094554EC4FD6A51185DA1BC08D' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 相机动画过程中角色最大虚化距离_36_2D8297684F8ACB4D57B1AFBBF003CCB6) == 0x00003C, "Member 'FSUiRoleCameraSetting::相机动画过程中角色最大虚化距离_36_2D8297684F8ACB4D57B1AFBBF003CCB6' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 相机相对角色的最低高度_40_3FFF172C431BCDE077A9D1807E252876) == 0x000040, "Member 'FSUiRoleCameraSetting::相机相对角色的最低高度_40_3FFF172C431BCDE077A9D1807E252876' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 移动端旋转输入倍率_45_160DF5664D05BD64474BC2A7815C7F89) == 0x000044, "Member 'FSUiRoleCameraSetting::移动端旋转输入倍率_45_160DF5664D05BD64474BC2A7815C7F89' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 移动端缩放输入倍率_46_71E29147450B2C27B37F569D9B92A7F4) == 0x000048, "Member 'FSUiRoleCameraSetting::移动端缩放输入倍率_46_71E29147450B2C27B37F569D9B92A7F4' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 最大臂长时的光圈_53_750E0B314C586842CA0CE7B2CF988CE5) == 0x00004C, "Member 'FSUiRoleCameraSetting::最大臂长时的光圈_53_750E0B314C586842CA0CE7B2CF988CE5' has a wrong offset!");
static_assert(offsetof(FSUiRoleCameraSetting, 最小臂长时的光圈_54_3C09738C4B9FD3931FB9629BEF3FE4BB) == 0x000050, "Member 'FSUiRoleCameraSetting::最小臂长时的光圈_54_3C09738C4B9FD3931FB9629BEF3FE4BB' has a wrong offset!");

}

