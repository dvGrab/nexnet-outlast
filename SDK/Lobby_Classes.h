﻿#pragma once

/**
 * Name: OUTLAST
 * Version: 0.0.2_fixed
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
	 * Class Lobby.LobbyBeaconClient
	 * Size -> 0x0088 (FullSize[0x0360] - InheritedSize[0x02D8])
	 */
	class ALobbyBeaconClient : public AOnlineBeaconClient
	{
	public:
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x02D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALobbyBeaconPlayerState*                             PlayerState;                                             // 0x02E0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNCO[0x1];                                   // 0x02E8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELobbyBeaconJoinState                                      LobbyJoinServerState;                                    // 0x02E9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E063[0x76];                                  // 0x02EA(0x0076) MISSED OFFSET (PADDING)

	public:
		void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
		void ServerNotifyJoiningServer();
		void ServerLoginPlayer(const class FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
		void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const class FText& Reason);
		void ServerDisconnectFromLobby();
		void ServerCheat(const class FString& Msg);
		void ClientWasKicked(const class FText& KickReason);
		void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
		void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
		void ClientPlayerJoined(const class FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
		void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
		void ClientJoinGame();
		void ClientAckJoiningServer();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconHost
	 * Size -> 0x0038 (FullSize[0x02A8] - InheritedSize[0x0270])
	 */
	class ALobbyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_91TO[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LobbyStateClass[0x28];                                   // 0x0278(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class ALobbyBeaconState*                                   LobbyState;                                              // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconPlayerState
	 * Size -> 0x00C0 (FullSize[0x0308] - InheritedSize[0x0248])
	 */
	class ALobbyBeaconPlayerState : public AInfo
	{
	public:
		class FText                                                DisplayName;                                             // 0x0248(0x0018) Net, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    UniqueId;                                                // 0x0260(0x0028) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FUniqueNetIdRepl                                    PartyOwnerUniqueId;                                      // 0x0288(0x0028) Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInLobby;                                                // 0x02B0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6LN[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOnlineBeaconClient*                                 ClientActor;                                             // 0x02B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FT9X[0x48];                                  // 0x02C0(0x0048) MISSED OFFSET (PADDING)

	public:
		void OnRep_UniqueId();
		void OnRep_PartyOwner();
		void OnRep_InLobby();
		static UClass* StaticClass();
	};

	/**
	 * Class Lobby.LobbyBeaconState
	 * Size -> 0x01A8 (FullSize[0x03F0] - InheritedSize[0x0248])
	 */
	class ALobbyBeaconState : public AInfo
	{
	public:
		int32_t                                                    MaxPlayers;                                              // 0x0248(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y5CD[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LobbyBeaconPlayerStateClass;                             // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CA51[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLobbyStarted;                                           // 0x0260(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D4Z6[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitForPlayersTimeRemaining;                             // 0x0264(0x0004) Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLobbyPlayerStateInfoArray                          Players;                                                 // 0x0268(0x0120) Net, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DXII[0x68];                                  // 0x0388(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnRep_WaitForPlayersTimeRemaining();
		void OnRep_LobbyStarted();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
