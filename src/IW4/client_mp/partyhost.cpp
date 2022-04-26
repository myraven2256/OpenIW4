//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void Party_PrintTeams(struct SubpartyInfo* subparties, int subpartyCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_UsingAssignedTeams(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_CheckTeams(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_GetMaxFreeSlots(struct PartyData* party, int memberCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_ReadyClients(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_PrintConnectivity(struct PartyData* party, const int clientNum, const int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClearMember(struct PartyData* party, const int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_ClearMembers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_CountUninvitedPlayers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_CountInvitedPlayers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_FindFirstSlotByStatus(struct PartyData* party, int status)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_FindOldestSlotByStatus(struct PartyData* party, int status)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_CheckAllXNAddrs(struct PartyData* party, int baseclient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AddAnonymousMemberAtSlot(struct PartyData* party, const int slot, const char* challenge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_CountOpenPublicSlots(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AddAnonymousMember(struct PartyData* party, struct netadr_t* addr, const char* challenge, bool invited)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_FindSubparties(struct PartyData* party, struct SubpartyInfo* subparties, int* subpartyCount, int* totalSkill)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_BuildRandomChallengeId(char* challenge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AnonymousAddRequest(struct PartyData* party, struct netadr_t from, int numPlayersJoining, bool invited, int numSubPartiesJoining, int* numPlayersPerParty)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_MapIsAcceptable(struct PartyData* party, const char* mapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AssignTeam(struct PartyData* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SetMaxFreeSlots(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_ClearConnectivityBitForClient(struct PartyData* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_PlayerJustConnected(struct PartyData* party, const int slot, const struct netadr_t addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AddPlayerAtSlot(struct PartyData* party, const int slot, const struct netadr_t addr, const unsigned __int64* xuid, const int remoteClientIndex, const struct XNKID* privatePartyId, const char* gamertag, const char* clanAbbrev, const bool headsetPresent, int rank, int prestige, unsigned int playerCardIcon, unsigned int playerCardTitle, unsigned int playerCardNameplate, int availableMapPackFlags, const bool invited, const int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_ClaimAnonymousSpot(struct PartyData* party, const struct netadr_t addr, const unsigned __int64* xuid, const int remoteClientIndex, const struct XNKID* privatePartyId, const char* challenge, const char* gamertag, const char* clanAbbrev, const bool headsetPresent, int rank, int prestige, unsigned int playerCardIcon, unsigned int playerCardTitle, unsigned int playerCardNameplate, int availableMapPackFlags, const char* gametype, const bool invited, const int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_AddLocalPlayer(struct PartyData* party, const int localControllerIndex, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_RemovePlayer(struct PartyData* party, const int memberIndex, const bool tellThem, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* PartyHost_GetMemberName(struct PartyData* party, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_GamestateChanged(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_MarkMemberInfoDirty(struct PartyData* party, int dirtyMemberSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdatePlayerHiding(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_AllPartyMembersPresent(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_CleanUpNonResponsiveQoS(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_GetGoodSlot(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_QoSResultsRemain(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SetUpPotentialHost(struct PartyData* party, int localControllerIndex, struct PartyInfo* host, struct in_addr localAddr, unsigned short port, int partyIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_TestPotentialHost(struct PartyData* party, int localControllerIndex, int partyIndex, struct PartyInfo** host, struct in_addr* localAddr, unsigned short* port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_FindAnotherGameToJoin(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SearchForGames(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_MemberInfoChanged(struct PartyData* party, int memberSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_MarkPacketReceivedForClients(struct PartyData* party, const struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_ResetClientTimeouts(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SyncVoiceDataForAllPlayers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_UpdateVoiceConnectivityBits(struct PartyData* party, int memberIndex, int connectivityBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SendGo(struct PartyData* party, int localControllerIndex, int partyMemberSlot, const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SetRoundScores(struct PartyData* party, const int memberIndex, const int score, const int deaths)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_ReadyTeams(struct PartyData* party, int memberCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_MakeTeams(struct PartyData* party, int memberCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SetAssignedTeam(struct PartyData* party, const unsigned __int64 player, int team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_PreMatch(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartTeamMatch(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitMapLoad_FastFile(const char* mapName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HostPreloadMap(const char* mapname, const char* gametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartMatch(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_TestTeamCreation_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AddTestClient(struct PartyData* party, int slot, int privatePartyId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_RemoveTestClient(struct PartyData* party, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_RemoveTestClient_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_AddTestClients_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_GetExpectedPlayerCount(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_TimeoutMembers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStateMember(struct PartyData* party, struct PartyMember* partyMember, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStateFullHeader(struct PartyData* party, int destinationMemberSlot, struct msg_t* msg, int totalParts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStatePartHeader(struct PartyData* party, int destinationMemberSlot, struct msg_t* msg, const int partyStatePartNum, const int totalPackets)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStateHeader(struct PartyData* party, int destinationMemberSlot, struct msg_t* msg, const int partyStatePartNum, const int totalParts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_WritePartyStateMembers(struct PartyData* party, int destinationMemberSlot, struct msg_t* msg, const int partyStatePartNum, const int totalPackets)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyHost_RemapClientAddr(struct PartyData* party, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SendPartyStateToPlayer(struct PartyData* party, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SendPartyStates(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_SendHeartbeats(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_DropPlayersToMatchSlots(struct PartyData* party, const int publicSlots, const int privateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_TellClientToRejoin(struct PartyData* party, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_BroadcastLobbyToParty(struct PartyData* party, struct PartyInfo* newHost, const int localControllerIndex, const char* challenge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SetupParty(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartParty(struct PartyData* party, int localControllerIndex, int flags, int numPrivateSlots, int numPublicSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_CreatePartyPresenceComplete(int localControllerIndex, struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_StartPartyComplete(int localControllerIndex, struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdateRank(struct PartyData* party, int rank, int prestige)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdatePlayerCard(struct PartyData* party, unsigned int cardIconIndex, unsigned int cardTitleIndex, unsigned int cardNameplateIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdateAvailableMapPackFlags(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_UpdateIdentity(const int localControllerIndex, struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_AutoStart(struct PartyData* party, int localControllerIndex, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleHeartbeatAck(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyHost_GenerateClientBitfield(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientPartyStateAckForMember(int partyClientNum, struct PartyData* party, int localControllerIndex, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientPartyStateAck(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleJoinPartyRequest(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyHost_IsStoppingAfterRound(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int HasSubparty(struct PartyData* party, struct XNKID* privatePartyId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientHandshake(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleVetoMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleHeadsetMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClanMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleIHearMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleCantHearMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleClientDisconnect(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleRankMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandlePlayerCardMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleMapPacksMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyHost_HandleIdentMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyHost_HandlePacket(struct PartyData* party, const char* c, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_ClearVetoes(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_SanityCheck(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_Frame(struct PartyData* party, const int localControllerIndex, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyHost_ResetState(struct PartyData* party, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__
