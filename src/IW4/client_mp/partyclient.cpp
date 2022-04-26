//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int PartyClient_CountMembersEvenIfInactive(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyClient_CountMembers(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_RemovePartyMember(struct PartyData* party, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_CountTeamMembers(struct PartyData* party, int team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 PartyClient_GetMemberXuidBySlot(struct PartyData* party, int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_DisconnectFromHost(struct PartyData* party, int localControllerIndex, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_HostTimedOut(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_HostTimedOutMidGame(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_CleanUpInviteSessions(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_JoinParty(struct PartyData* party, const int localControllerIndex, struct netadr_t from, const char* challenge, unsigned __int64 xuid, const char* gamertag, const char* clanAbbrev)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdateRank(struct PartyData* party, int rank, int prestige)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdatePlayerCard(struct PartyData* party, unsigned int cardIconIndex, unsigned int cardTitleIndex, unsigned int cardNameplateIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdateVoiceBits(const int localControllerIndex, int ourClientNum, struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdateAvailableMapPackFlags(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_UpdateIdentity(const int localControllerIndex, struct PartyData* party, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParsePartyStateHeaderData(struct PartyData* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from, unsigned char numMembers, bool migrateHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParseMemberListFromPacket(struct PartyData* party, int localControllerIndex, int partNum, struct msg_t* msg, struct netadr_t from, int memberStart, int numMembers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_DoneParsingPartyState(struct PartyData* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_PreParsePartyState(struct PartyData* party, int localControllerIndex, struct msg_t* msg, struct netadr_t from)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParsePartyStatePacket(struct PartyData* party, int localControllerIndex, int partNum, struct msg_t* msg, struct netadr_t from, bool migrateHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_SetUpPartyForHost(struct PartyData* party, const int localControllerIndex, struct PartyHostDetails* hostInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_MarkPacketReceived(struct PartyData* party, struct PartyHostDetails* partyHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_SendHeartbeatAck(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleHeartbeat(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleHostAccept(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleReconnect(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleNewLobbyInfo(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleEndParty(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PartyClient_HaveAllPacketsForPartyState(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_ParsePartyStateMsg(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandlePartyStateMsg(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleNotPresentMsg(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyClient_HandleGoMsg(struct PartyData* party, const int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_BecomePartyHost(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyClient_HandlePacket(struct PartyData* party, const char* c, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyClient_Frame(struct PartyData* party, const int localControllerIndex, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
