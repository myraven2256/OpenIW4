//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int Live_UIMapPackFlags()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_CurrentLocalMapPackFlags()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_CurrentFullPartyMapPackFlags(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_CurrentDesiredLobbyMapPackFlags()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_IsIndexedContentPackEnabled(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_PartyMembersMissingMapPack(struct PartyData* party, int* playerSlot, int* mapPackIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Party_MissingMapPackPlayerName()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Party_MissingMapPackName()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_IsAnyMemberMissingMapPack()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_UpdateMissingMapPackDvar()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ClearLastEntries(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_UpdateHostAddr(struct PartyData* party, struct netadr_t addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RandomPermute(int* arr, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RandomizeParty(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_PlayPlayerJoinSound(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_PlayPlayerLeaveSound(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_GetLobbyState_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Lobby_DumpInfo_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_DumpInfo_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_DumpInfo(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindMemberByXUID(struct PartyData* party, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Party_GetXuid(struct PartyData* party, const int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_IsMemberActive(struct PartyData* party, const int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetVetoCount(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_UsingLobbyMerge(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_RemoveFromList(struct PartyData* party, struct XNADDR* xnaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_StopParty(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_FindNextMemberUsingXNAddr(struct PartyData* party, const struct netadr_t playerAddr, const int startingSlot, const int remoteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_FindNextMemberAtAddrInternal(struct PartyData* party, const struct netadr_t playerAddr, const int startingSlot, const int remoteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindMember(struct PartyData* party, const struct netadr_t playerAddr, const int remoteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindFirstMemberAtAddr(struct PartyData* party, const struct netadr_t playerAddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindNextMemberAtAddr(struct PartyData* party, const struct netadr_t playerAddr, int slotIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetVoiceConnectivityBits(struct PartyData* party, int memberIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetAssignedTeam(struct PartyData* party, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetPlaylistEntry(struct PartyData* party, const int playlistEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetPlaylistEntry(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ClearPartyList(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_AddPartyToList(struct PartyData* party, const struct _XSESSION_INFO* info, const int publicSlots, const int privateSlots, const int occupiedPublicSlots, const int occupiedPrivateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_SetPartyQoS(struct PartyData* party, int slot, int ping, int uploadBandwidth)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct _XSESSION_INFO* Party_GetPartyInfo(struct PartyData* party, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_FindPartyByXNKId(struct PartyData* party, const struct XNKID* key)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_JoinAttemptFailed(struct PartyData* party, const int localControllerIndex, const char* errorMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_CountActivePlayersInSubparty(struct PartyData* party, int subpartyIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_AskToJoinParty(struct PartyData* party, int partyId, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_CountPotentialHosts(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetLobbySessionFlags(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetDisplayMapName(const char* rawmapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetDisplayGameType(const char* rawgametype)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_SetDisplayMapPacks(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetMapPackFlags(struct PartyData* party, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_WriteAvailableMapPackFlags(int mapPackFlags, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_ReadAvailableMapPackFlags(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SendVetoMsg(struct PartyData* party, const bool veto)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SendHeadsetMsg(struct PartyData* party, const bool headsetPresent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_UpdateClanName(struct PartyData* party, const char* clanAbbrev)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_UpdateVoteString(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_UpdateStatusString(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_UpdateUIDvars(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetQoSProgress(struct PartyData* party, float percent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Party_GetQoSPercent(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_GetSuccessfulSearchResults(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Party_GetPotentialSearchResults(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Party_GetStatus(struct PartyData* party, int* timeRemaining)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_GetNatType(struct PartyData* party, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SetNatTypeForXuid(struct PartyData* party, const unsigned __int64 xuid, int natType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_IsRunning(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_InParty(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_AreWeHost(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_FailedToJoinParty(struct PartyData* party, int localControllerIndex, struct netadr_t from, const char* errorMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleFailedPartyJoinMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleOldPlaylistMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleNewPlaylistMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleFullPartyMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleEndingMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_HandleVoiceFailMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ClearMembers(struct PartyData* party, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Party_HandlePacket(struct PartyData* party, const char* c, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Sleep(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ChooseNextPlaylist(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_SendNewLobbyToAddr(struct PartyData* party, struct PartyInfo* newHost, const int controllerIndex, const char* challenge, struct netadr_t addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_SendNewLobbyToClient(struct PartyData* party, struct PartyInfo* newHost, const int localControllerIndex, const char* challenge, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_BroadcastLobby(struct PartyData* party, struct PartyInfo* newHost, const int localControllerIndex, const char* challenge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Awake(struct PartyData* party, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_InactiveFrame(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Party_CopySessionToPresence(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_Frame(struct PartyData* party, int localControllerIndex, const int msec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_ShowTeams(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Party_HideTeams(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Party_AreTeamsVisible()
{

}

#endif // __UNIMPLEMENTED__
