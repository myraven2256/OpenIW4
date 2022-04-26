//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int Session_FindRegisteredUserInternal(struct SessionData* session, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Session_IsUserRegisteredInternal(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SanityCheckSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_QoSListenStart(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_QoSListenStop(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_FindRegisteredUser(struct SessionData* session, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CountRegisteredUsers(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsInfoValid(const struct _XSESSION_INFO* sessionInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsValid(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsFull(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CompareSessionInfo(const struct _XSESSION_INFO* first, const struct _XSESSION_INFO* second)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CurrentFlags(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_PrivateSlots(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_PublicSlots(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_CountTotalSlots(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_CountRegisteredUsersInternal(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsUserRegistered(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Session_GetXuid(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Session_GetXuidEvenIfInactive(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_MoveSession(struct SessionData* from, struct SessionData* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_ClearSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct SessionTaskData* Session_GetFreeSessionTaskData()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct SessionTaskData* Session_GetActiveSessionTaskData(const int tasknum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_FreeActiveSessionTaskData(struct SessionTaskData* taskData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndGameSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_StartDeleteHandle(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_DeleteHandleComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeleteHandle(void* sessionHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_UnregisterAllUsersFromVoice(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_GetFreeSessionGraveYardSlot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeleteSessionImmediately(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_DeleteSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_ClientRegisterWithArbitration(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FindXuidInList(unsigned __int64 xuid, int listSize, unsigned __int64* list)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_HostRegisterWithArbitration(struct PartyData* party)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_SetUpTrueskillData(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_StartHostComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_StartHost(struct SessionData* session, int sessionFlags, int numPrivateSlots, int numPublicSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_StartClientInternal(struct SessionData* session, const int localControllerIndex, const int flags, struct _XSESSION_INFO* hostInfo, unsigned __int64 sessionNonce, int numPublicSlots, int numPrivateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_StartClient(struct SessionData* session, const int localControllerIndex, const int flags, struct _XSESSION_INFO* hostInfo, unsigned __int64 sessionNonce, int numPublicSlots, int numPrivateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetModifiableFlags()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_NeedToSyncParams(struct SessionData* session, const int numPublic, const int numPrivate, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_SyncParams(const int localControllerIndex, struct SessionData* session, const int numPublic, const int numPrivate, const int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_Migrate(struct SessionData* session, struct _XSESSION_INFO* sessionInfo, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_ModifyInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Modify(const int localControllerIndex, struct SessionData* session, const int flags, const int publicSlots, const int privateSlots)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_ModifyComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_FinishModify()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_CreateOrJoinInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_Started(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_JoinSession(const int localControllerIndex, struct SessionData* session, const int slot, const unsigned __int64 xuid, bool privateSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_JoinSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_EveryoneLeaveSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_EveryoneLeaveSessionAsync(const int localControllerIndex, struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_RemoveAllPlayersFromSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_LeaveSession(struct SessionData* session, const int registeredUserSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_CountPrivateSlotsUsed(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_CountPublicSlotsUsed(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_RegisterRemotePlayer(const int localControllerIndex, struct SessionData* session, const unsigned __int64 xuid, bool privateSlot, const int clientNum, const int natType, const struct XNADDR* xnaddr, const struct netadr_t addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_UnregisterRemotePlayer(struct SessionData* session, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Session_GetNonce(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Xenon_SetSessionNonce(struct SessionData* session, unsigned __int64 nonce)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNKEY* Xenon_GetXNKey(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XNKID* Xenon_GetXNKId(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_SearchForAllSessions(struct SessionData* session, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_SearchForSession(struct SessionData* session, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* LookupCountryCode(const int countryCode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* XUSERDATA_PrintValue(struct _XUSER_DATA* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Session_ParseSearchResults(const int localControllerIndex, struct _XSESSION_SEARCHRESULT_HEADER* searchResults)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_RandomSearchSessionsComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_CleanUpSearches(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_KillSearches()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_SearchInProgress()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_ClearSessionIDFromGraveyard(const struct XNKID* sessionID)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_ManageGraveYard()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DeleteGraveyardSlotImmediately(int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_LeavePresenceSessionInGraveYard(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EmptyGraveYard(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_NeedsSkillUpdate(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_CalcSkill()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_CalcSkillComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_ModifySkill()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_ModifySkillComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Session_GetTaskName(int taskEnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SpecificSessionTaskInProgress(const struct SessionData* session, const int tasknum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_SpecificSessionTasksInProgress(struct SessionData* session, int taskMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_SessionTasksInProgress(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_CleanUpCancelledTask(struct SessionData* session, int tasknum, int taskType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_CancelSpecificSessionTasks(struct SessionData* session, int taskMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_CancelAllSessionTasks(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndSpecificSessionTasks(struct SessionData* session, int taskMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndCreateSessionTasks(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndNonSkillSessionTasks(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_EndOngoingSessionTasks(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_JoinInProgressForXUID(struct SessionData* session, unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_StartGameSession(const int localControllerIndex, struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Session_StartSessionComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults CheckOngoingSessionTask(const int tasknum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CheckSessionTaskDataLeaks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_CheckOngoingSessionTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_AddMembersToSessionInternal(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_AddNewPlayersToSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_DropOldPlayersFromSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Session_UpdateIWNetPlayerList(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_FrameForSession(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Session_Frame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct in_addr Live_GetPlayerInAddr(const struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_UpdatePlayerInAddr(struct SessionData* session, const int clientNum, const struct in_addr inaddr, const unsigned short port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Live_UpdatePlayerAddr(struct SessionData* session, const int clientNum, const struct netadr_t addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct netadr_t Live_GetPlayerAddr(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Live_PlayerHasLoopbackAddr(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetNatTypeForClientNum(struct SessionData* session, const int player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Session_IsHost(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Session_HostNum(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__
