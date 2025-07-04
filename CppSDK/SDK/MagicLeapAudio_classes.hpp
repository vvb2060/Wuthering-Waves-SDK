﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapAudio

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (0x0030 - 0x0030)
class UMagicLeapAudioFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool IsMicMuted();
	static bool SetMicMute(bool IsMuted);
	static bool SetOnAudioJackPluggedDelegate(const TDelegate<void()>& ResultDelegate);
	static bool SetOnAudioJackUnpluggedDelegate(const TDelegate<void()>& ResultDelegate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MagicLeapAudioFunctionLibrary">();
	}
	static class UMagicLeapAudioFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMagicLeapAudioFunctionLibrary>();
	}
};
static_assert(alignof(UMagicLeapAudioFunctionLibrary) == 0x000008, "Wrong alignment on UMagicLeapAudioFunctionLibrary");
static_assert(sizeof(UMagicLeapAudioFunctionLibrary) == 0x000030, "Wrong size on UMagicLeapAudioFunctionLibrary");

}

