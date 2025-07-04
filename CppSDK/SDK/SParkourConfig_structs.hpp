﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SParkourConfig

#include "Basic.hpp"

#include "SParkourPointInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct SParkourConfig.SParkourConfig
// 0x00F0 (0x00F0 - 0x0000)
struct FSParkourConfig final
{
public:
	class FName                                   ConfigName_9_E6DDA147487673F585147C8D7F17EBA6;     // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IstoStart_1_A1A9EF794863920C43E4DFB781B39949;      // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsRequireToEnd_39_B08602CF41D4921620F7C1A874D15B06; // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSParkourPointInfo>             ParkourPoints_5_72CEA0AF402E809A69DC70B0BC11D22F;  // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CheckPointsRequire_12_2A6395ED409CA8E1CBF73EAEFE40C508; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UEffectModelBase>        CheckPointResource_40_21C66EB4448641CC3391699C432EEFC5; // 0x0028(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UEffectModelBase>        CheckPointsDestroyRes_41_8347C1044DCFC2AF496D69BDBD1F439F; // 0x0058(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UEffectModelBase>        StartResource_42_3A450A2942F81A8F43E519B3034C6B75; // 0x0088(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UEffectModelBase>        EndResource_43_397BBED54F5D6F2346B8FDB55EEB027F;   // 0x00B8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         DefaultBuffId_35_26D821E34B8C1D796885CDB95EADADF6; // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultModifiedTime_36_0AC7A1F44D1AA5FAC39A019A8D444772; // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSParkourConfig) == 0x000008, "Wrong alignment on FSParkourConfig");
static_assert(sizeof(FSParkourConfig) == 0x0000F0, "Wrong size on FSParkourConfig");
static_assert(offsetof(FSParkourConfig, ConfigName_9_E6DDA147487673F585147C8D7F17EBA6) == 0x000000, "Member 'FSParkourConfig::ConfigName_9_E6DDA147487673F585147C8D7F17EBA6' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, IstoStart_1_A1A9EF794863920C43E4DFB781B39949) == 0x00000C, "Member 'FSParkourConfig::IstoStart_1_A1A9EF794863920C43E4DFB781B39949' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, IsRequireToEnd_39_B08602CF41D4921620F7C1A874D15B06) == 0x00000D, "Member 'FSParkourConfig::IsRequireToEnd_39_B08602CF41D4921620F7C1A874D15B06' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, ParkourPoints_5_72CEA0AF402E809A69DC70B0BC11D22F) == 0x000010, "Member 'FSParkourConfig::ParkourPoints_5_72CEA0AF402E809A69DC70B0BC11D22F' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, CheckPointsRequire_12_2A6395ED409CA8E1CBF73EAEFE40C508) == 0x000020, "Member 'FSParkourConfig::CheckPointsRequire_12_2A6395ED409CA8E1CBF73EAEFE40C508' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, CheckPointResource_40_21C66EB4448641CC3391699C432EEFC5) == 0x000028, "Member 'FSParkourConfig::CheckPointResource_40_21C66EB4448641CC3391699C432EEFC5' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, CheckPointsDestroyRes_41_8347C1044DCFC2AF496D69BDBD1F439F) == 0x000058, "Member 'FSParkourConfig::CheckPointsDestroyRes_41_8347C1044DCFC2AF496D69BDBD1F439F' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, StartResource_42_3A450A2942F81A8F43E519B3034C6B75) == 0x000088, "Member 'FSParkourConfig::StartResource_42_3A450A2942F81A8F43E519B3034C6B75' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, EndResource_43_397BBED54F5D6F2346B8FDB55EEB027F) == 0x0000B8, "Member 'FSParkourConfig::EndResource_43_397BBED54F5D6F2346B8FDB55EEB027F' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, DefaultBuffId_35_26D821E34B8C1D796885CDB95EADADF6) == 0x0000E8, "Member 'FSParkourConfig::DefaultBuffId_35_26D821E34B8C1D796885CDB95EADADF6' has a wrong offset!");
static_assert(offsetof(FSParkourConfig, DefaultModifiedTime_36_0AC7A1F44D1AA5FAC39A019A8D444772) == 0x0000EC, "Member 'FSParkourConfig::DefaultModifiedTime_36_0AC7A1F44D1AA5FAC39A019A8D444772' has a wrong offset!");

}

