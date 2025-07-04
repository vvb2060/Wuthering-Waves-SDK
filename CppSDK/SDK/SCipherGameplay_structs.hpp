﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCipherGameplay

#include "Basic.hpp"

#include "ECipherGameplayType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCipherGameplay.SCipherGameplay
// 0x0058 (0x0058 - 0x0000)
struct FSCipherGameplay final
{
public:
	class FName                                   ID_2_F9D081D64C52D25D678ADCB939D73599;             // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECipherGameplayType                           解密类型_10_032E805C4735ECBAEF87EA801935F4E5;      // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 正确密码_7_1C8451C74D50B83BB80D2381B0F74F87;       // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 扰乱密码_9_0C99D6114D364EE4920E3E9C99847499;       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   解密成功交互ID_17_8DBD076A4726E41E88420AADD95B1D30; // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   解密失败交互ID_18_0C006A6543A9DB90F705BB82A96E0778; // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Tips_21_DF520F63407DA0C62B626796D19A0721;          // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FSCipherGameplay) == 0x000008, "Wrong alignment on FSCipherGameplay");
static_assert(sizeof(FSCipherGameplay) == 0x000058, "Wrong size on FSCipherGameplay");
static_assert(offsetof(FSCipherGameplay, ID_2_F9D081D64C52D25D678ADCB939D73599) == 0x000000, "Member 'FSCipherGameplay::ID_2_F9D081D64C52D25D678ADCB939D73599' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, 解密类型_10_032E805C4735ECBAEF87EA801935F4E5) == 0x00000C, "Member 'FSCipherGameplay::解密类型_10_032E805C4735ECBAEF87EA801935F4E5' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, 正确密码_7_1C8451C74D50B83BB80D2381B0F74F87) == 0x000010, "Member 'FSCipherGameplay::正确密码_7_1C8451C74D50B83BB80D2381B0F74F87' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, 扰乱密码_9_0C99D6114D364EE4920E3E9C99847499) == 0x000020, "Member 'FSCipherGameplay::扰乱密码_9_0C99D6114D364EE4920E3E9C99847499' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, 解密成功交互ID_17_8DBD076A4726E41E88420AADD95B1D30) == 0x000030, "Member 'FSCipherGameplay::解密成功交互ID_17_8DBD076A4726E41E88420AADD95B1D30' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, 解密失败交互ID_18_0C006A6543A9DB90F705BB82A96E0778) == 0x00003C, "Member 'FSCipherGameplay::解密失败交互ID_18_0C006A6543A9DB90F705BB82A96E0778' has a wrong offset!");
static_assert(offsetof(FSCipherGameplay, Tips_21_DF520F63407DA0C62B626796D19A0721) == 0x000048, "Member 'FSCipherGameplay::Tips_21_DF520F63407DA0C62B626796D19A0721' has a wrong offset!");

}

