//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static bool Party_IsUserRegistered(struct PartyData* party, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetOurNominee(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetOurNomineeUpload(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetOurNomineeNAT(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GetOurNomineeLSPConnection(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned __int64 GetOurNomineeXUID(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_SendNomineeMsg(struct PartyData* party, int localControllerIndex, int ourClientNum, int destinationClientNum, unsigned __int64 xuid, int uploadSpeed, int NATtype, bool lspConnected)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_SendOurNominee(struct PartyData* party, int localControllerIndex, int ourClientNum, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_TellNewHost(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_AnnounceOurNominee(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_SetOurNominee(struct PartyData* party, int localControllerIndex, int ourClientNum, int nominee, bool lspConnected, int nomineeUpload, int nomineeNAT)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyMigrate_CanAnyoneTalkToThisGuy(struct SessionData* session, int destClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyMigrate_CanWeTalkToAllClients(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyMigrate_DoWeHavePartyData(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PartyMigrate_DoWeHaveNecessaryMapPacks(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyMigrate_MigrateActive(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyMigrate_CanWeHost(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_ClearMemberData(struct PartyData* party, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_StartTimeout(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_ClearData(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_StartNegotiation(struct PartyData* party, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsTheirNomineeBetter(struct PartyData* party, int ourClientNum, int theirNominee, int theirNomineeUpload, int theirNomineeNAT, bool theirNomineeLSPConnected)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_HandleNomineeMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_HandleFindBestCommand(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_HandleToMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_HandleSessionInfoMsg(struct PartyData* party, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PartyMigrate_HandlePacket(struct PartyData* party, const char* c, int localControllerIndex, struct netadr_t from, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_SwapHostAndClient(struct PartyData* party, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_CheckBeforeContinuingToHost(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_SendSessionInfo(struct PartyData* party, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_RestartServer(struct PartyData* party, const int oldHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_To(struct PartyData* party, const int newHost)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PartyMigrate_DetermineBestHost(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PartyMigrate_HostMigrationEnabled(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_Frame(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_RequestFindBestHost(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PartyMigrate_HostTo_f()
{

}

#endif // __UNIMPLEMENTED__
