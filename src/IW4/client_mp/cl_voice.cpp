//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int CL_CanClient1ConnectToClient2(struct SessionData* session, const int client1Num, const int client2Num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_CanWeConnectToClient(struct SessionData* session, const int ourClientNum, const int theirClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_CanClientConnectToUs(struct SessionData* session, const int ourClientNum, const int theirClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_CanClientTalkToAllClientsInList(struct SessionData* session, const int sender, const int clientBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_UpdateVoiceConnectivityBitsForRemoteUser(struct SessionData* session, const int ourClientNum, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_UpdateConnectivityBits(int localClientNum, struct SessionData* session, int connectivityBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_WeNowCantHearSomeone(int localClientNum, struct SessionData* session, int remoteClient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum netsrc_t GetLocalClientSock(const int localClientNum, const enum connstate_t minConnState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SendPeerConnectivityTest(const int localClientNum, struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_RebuildConnectionToClient(struct SessionData* session, int localClientNum, int ourClientNum, int destClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SendVoiceTestPackets(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_SendPeerVoiceData_Real(struct SessionData* session, const int localClientNum, const enum netsrc_t sock, const int clientNum, struct msg_t* msg, bool voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_SendPeerVoiceData(struct SessionData* session, const int localClientNum, const enum netsrc_t sock, const int clientNum, struct msg_t* msg, bool voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CL_ServerIsTheOnlyWayToTalkToClient(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_FindGoodRouteForClientList(struct SessionData* session, int* routeList, const int clientBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_FindGoodRouteForClientNum(struct SessionData* session, int* routeList, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_BuildRouteList(struct SessionData* session, int localClientNum, int ourClientNum, int* routeList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_WriteVoicePacket(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoiceConnectionTestPacket(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoicePacket(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_ConnectionIsEstablished(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_HasConnectionFailed(struct in_addr inaddr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_FindRouteForClientNum(struct SessionData* session, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_SendRelayPacket(struct SessionData* session, int relayClientNum, int destinationClientNum, const char* message, bool voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_WritePeerToPeerOOBString(struct SessionData* session, int localControllerIndex, int clientNum, const char* message, bool voiceData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_IsUsingVoice(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_IsPlayerTalking(struct SessionData* session, int localClientNum, int talkingClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoiceInitOnceForAll()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoiceTransmit(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_VoiceFrame(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ResetPlayerMuting(struct SessionData* session, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_MutePlayer(struct SessionData* session, int localClientNum, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_UnmutePlayer(struct SessionData* session, int localClientNum, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_IsClientBlockedByPrivacySettings(struct SessionData* session, int controllerIndex, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_IsPlayerMuted(struct SessionData* session, int localClientNum, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CL_IsPlayerUnmutable(struct SessionData* session, int localClientNum, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_TogglePlayerMute(struct SessionData* session, int localClientNum, int muteClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_CheckMutes(struct SessionData* session, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ClearMutedList(struct SessionData* session)
{

}

#endif // __UNIMPLEMENTED__
