﻿#pragma once

/**
 * Name: READYORNOT
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SteamSockets.SteamSocketsNetConnection
	 * Size -> 0x0010 (FullSize[0x1BB8] - InheritedSize[0x1BA8])
	 */
	class USteamSocketsNetConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_NRS3[0x10];                                  // 0x1BA8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SteamSockets.SteamSocketsNetDriver
	 * Size -> 0x0010 (FullSize[0x0770] - InheritedSize[0x0760])
	 */
	class USteamSocketsNetDriver : public UNetDriver
	{
	public:
		unsigned char                                              UnknownData_ZUCK[0x10];                                  // 0x0760(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
