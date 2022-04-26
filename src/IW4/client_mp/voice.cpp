//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool Voice_XUIDIsRegisteredWithXHV(unsigned __int64* xuids, unsigned long count, unsigned __int64 x)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_FindUser(const struct SessionData* session, const unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned __int64 Voice_GetClientXUID(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_CheckXHVSync(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_Init(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Voice_IsMicEnabled(const struct SessionData* session, const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Voice_IsMicEnabledInAnySession(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_EnableMic(struct SessionData* session, int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_DisableMic(struct SessionData* session, int port)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_DisableLocalMics(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Voice_SetFriendFlag(int localControllerIndex, struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_SetAllFriendFlags(int localControllerIndex, struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Live_IsClientAFriend(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_EnableMicIfAllowed(struct SessionData* session, int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_RegisterRemotePlayer(int localControllerIndex, struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_UnregisterRemotePlayer(struct SessionData* session, const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_ClearRemoteTalkers(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetConnectedPlayerList(const struct SessionData* session, unsigned __int64* playerList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Live_GetConnectedPlayerCount(const struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_IncomingVoiceData(const struct SessionData* session, int clientNum, unsigned char* data, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_GetLocalVoiceData(struct SessionData* session, const int clientNum, struct ClientVoicePacket_t* voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsXuidTalking(struct SessionData* session, int localControllerIndex, unsigned __int64 xuid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsLocalClientTalking(struct SessionData* session, int localClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Voice_GetTalkingCount(struct SessionData* session, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsHeadsetPresent(struct SessionData* session, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_Shutdown(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Voice_IsPlayerGloballyMuted(const int localControllerIndex, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsMemberMuted(struct SessionData* session, const int localControllerIndex, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Voice_IsMemberUnmutable(struct SessionData* session, const int localControllerIndex, const unsigned __int64 player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_MuteMember(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Voice_UnmuteMember(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__
