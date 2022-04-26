//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static const struct entityState_s* SV_GetNextEnt(const int entCount, const int firstEntIndex, int curIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct entityState_s* SV_GetCachedEntityByNumber(const int entityNum, const int entCount, const int firstEntityIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SV_EntLinkedToEnt(const struct entityState_s* childEnt, int parentEntIndex, const int entCount, const int firstEntityIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SV_ShouldEntityGoToClient(const struct entityState_s* ent, const int clientNum, const int entCount, const int firstEntityIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_WriteEndOfEntitiesMarker(struct SnapshotInfo_s* snapInfo, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_EmitPacketEntities(struct SnapshotInfo_s* snapInfo, const int viewClientNum, const int oldFrameViewClientNum, const int oldEntCount, const int firstOldEntityIndex, const int oldFrameTimeDelta, const int newEntCount, const int firstNewEntityIndex, const int newFrameTimeDelta, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_WriteEndOfClientsMarker(struct SnapshotInfo_s* snapInfo, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_EmitPacketClients(struct SnapshotInfo_s* snapInfo, const int from_num_clients, const int from_first_client, const int to_num_clients, const int to_first_client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_WriteOverlayBits(const int clientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_WriteSnapshotToClient(struct client_t* client, struct msg_t* msg, const bool sendEntities)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UpdateServerCommandsToClient(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UpdateServerCommandsToClient_PreventOverflow(struct client_t* client, struct msg_t* msg, int iMsgSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_PrintServerCommandsForClient(struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_RateMsec(struct client_t* client, int messageSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_WriteDemoMessage(struct client_t* client, unsigned char* svCompressedBuf, int compressedSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_WriteDemoMessage2(struct client_t* client, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendMessageToClient(struct msg_t* msg, struct client_t* client)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_BeginClientSnapshot(struct client_t* client, struct msg_t* msg, unsigned char* snapshotMsgBuf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_EndClientSnapshot(struct client_t* client, struct msg_t* msg, unsigned char* snapshotMsgBuf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetServerStaticHeader()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetServerStaticHeader()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ShouldArchiveSnapshot()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SendClientMessages()
{

}

#endif // __UNIMPLEMENTED__
