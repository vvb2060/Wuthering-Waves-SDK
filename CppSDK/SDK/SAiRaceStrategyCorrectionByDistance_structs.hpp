﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAiRaceStrategyCorrectionByDistance

#include "Basic.hpp"

#include "SAiRaceStrategyOneParamFunction_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAiRaceStrategyCorrectionByDistance.SAiRaceStrategyCorrectionByDistance
// 0x0018 (0x0018 - 0x0000)
struct FSAiRaceStrategyCorrectionByDistance final
{
public:
	bool                                          Enable_8_990BD65148AE83829208A5ABE39ECF8C;         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSAiRaceStrategyOneParamFunction> CalcTargetSpeedByDistanceBetweenConfig_41_C886A6E745869034C2EB0CA3FCD143AA; // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSAiRaceStrategyCorrectionByDistance) == 0x000008, "Wrong alignment on FSAiRaceStrategyCorrectionByDistance");
static_assert(sizeof(FSAiRaceStrategyCorrectionByDistance) == 0x000018, "Wrong size on FSAiRaceStrategyCorrectionByDistance");
static_assert(offsetof(FSAiRaceStrategyCorrectionByDistance, Enable_8_990BD65148AE83829208A5ABE39ECF8C) == 0x000000, "Member 'FSAiRaceStrategyCorrectionByDistance::Enable_8_990BD65148AE83829208A5ABE39ECF8C' has a wrong offset!");
static_assert(offsetof(FSAiRaceStrategyCorrectionByDistance, CalcTargetSpeedByDistanceBetweenConfig_41_C886A6E745869034C2EB0CA3FCD143AA) == 0x000008, "Member 'FSAiRaceStrategyCorrectionByDistance::CalcTargetSpeedByDistanceBetweenConfig_41_C886A6E745869034C2EB0CA3FCD143AA' has a wrong offset!");

}

