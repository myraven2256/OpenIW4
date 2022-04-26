//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_debugsockets_host()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WelcomePacketInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientsInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int IWSocketClose(unsigned int sock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int IWSocketAccept(unsigned int sock, struct sockaddr_in* addr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IWSocketSetNotBlocking(unsigned int sock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWSocketIPFromAddr(struct sockaddr_in* clientAddr, unsigned char* IPResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GetTimestampMSecs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GetTimestampSecs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWSocketLatestError_IsBlocking()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWSocketLatestError_IsConnectionAborted()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IWSocketIsValid(unsigned int sock)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IWSocketTransferResultIsValid(int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int IWSocketDataSend(unsigned int sock, void* buff, int buffSize, int transferedSoFar, int totalNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int IWSocketDataRecv(unsigned int sock, void* buff, int buffSize, int transferedSoFar, int totalNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SocketData__BLOCKING(function * transferFunc, unsigned int sock, void* buff, int buffLimit, int totalNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IWSocketDataSendBLOCKING(unsigned int sock, void* buff, int buffLimit, int totalNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int CreateHostSocket(unsigned short portNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientPrintIP(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientDisconnect(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct rdbgClientInfo* ClientGetEmpty()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientStateSet_Idle(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientStateSet_FatalError(struct rdbgClientInfo* ci, const char* reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientStateSet_Leaving(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HeaderInit(struct rdbgMsgHeader_t* header, enum rdbgMsgType_t type, unsigned long bodyLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClientHeaderInit(struct rdbgClientInfo* ci, enum rdbgMsgType_t type, unsigned long bodyLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderIsValid(struct rdbgMsgHeader_t* header)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderProcessAndValidateReceived(struct rdbgMsgHeader_t* header)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderXferIsFinished(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderRecieveFragments(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderSendFragments(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool HeaderRecieve(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HeaderOnlySendHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GeneralSendIsFinished(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GeneralReceiveIsFinished(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GeneralRecieveGetFragments(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GeneralRecieveSetup(struct rdbgClientInfo* ci, enum rdbgClientState_t newState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UnknownMsgRecvHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool UnknownMsgRecvSetup(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TabCompletePrepareMatching(const char* prefix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TabCompleteSearchCallback(const char* txt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int TabCompleteQsortFunc(const void* e0, const void* e1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool TabCompleteSendSetup(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TabCompleteRecvHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TabCompleteSendHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* GetDvarValueAsString(const char* dvarName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool DvarSendSetup(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DVarRequestRecvHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DvarSendHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TextPool_Init(struct rdbgTextPool_t* pool)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TextPool_AddText(struct rdbgTextPool_t* pool, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsoleLogThreadShieldUp()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsoleLogThreadShieldDown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FrameThreadShieldUp()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FrameThreadShieldDown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsoleLogAssertShieldUp()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConsoleLogIsUpToDate(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConsoleLogPosIsValid(int logGen, int logPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConsoleLogIsInValidState(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsoleLogResetMarkers(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConsoleLogGetLength(int fromPos, int fromGen, int toPos, int toGen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConsoleLogSendSegment(struct rdbgClientInfo* ci, int startPos, int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConsoleLogSendSetup(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ConsoleLogSendIsFinished(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ConsoleLogSendChunks(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ConsoleLogSendHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CommandShouldEcho(const char* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CommandRecvHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LightEditRecvHandler(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void KeepAliveSendSetup(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetStateFromNewHeader(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientFrame_Console(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientFrame_LightEdit(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientFrame_Connecting(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientFrame(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientsAcceptNew(unsigned int hostSocket)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientsFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AssertState_IsUnusable(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool AssertState_SendNeedsFlushed(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FlushSendForAssert(struct rdbgClientInfo* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ClientAssertHandler(struct rdbgClientInfo* ci, const char* assertText)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgHostInitLogBuffer()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgHostInitSockets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgHostFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgHostShutdownSockets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void NET_RemoteDbgHostWriteToLog(int channel, const char* text)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void NET_RemoteDbgHostWaitForStableConsoleConnection()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgHostAssertHandler(const char* assertText)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgSendMessageBlocking(void* ciUser, int msgType, const unsigned char* buffer, unsigned int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool NET_RemoteDbgDisconnectClient(void* ciUser)
{

}

#endif // __UNIMPLEMENTED__
