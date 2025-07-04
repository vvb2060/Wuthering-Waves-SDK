﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSS

#include "Basic.hpp"


namespace SDK
{

// Enum DLSS.EDLSSPreset
// NumValues: 0x0009
enum class EDLSSPreset : uint8
{
	Default                                  = 0,
	A                                        = 1,
	B                                        = 2,
	C                                        = 3,
	D                                        = 4,
	E                                        = 5,
	F                                        = 6,
	G                                        = 7,
	EDLSSPreset_MAX                          = 8,
};

// Enum DLSS.EDLSSSettingOverride
// NumValues: 0x0004
enum class EDLSSSettingOverride : uint8
{
	Enabled                                  = 0,
	Disabled                                 = 1,
	UseProjectSettings                       = 2,
	EDLSSSettingOverride_MAX                 = 3,
};

}

