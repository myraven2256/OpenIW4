//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void RMsg_DropAllPacketsForClient(const int clientSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RMsg_FindSlotForAddr(struct netadr_t* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RMsg_DropAllPacketsToAddr(struct netadr_t* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RMsg_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RMsg_AddMessageAtMsgSlot(const int clientSlot, const int msgSlot, struct netadr_t* to, const unsigned char* msg, const int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RMsg_ShiftMessagesBackInBuffer(struct reliableClient* client, int bytesShifted)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool RMsg_AddMessageForClient(int clientSlot, struct netadr_t* to, const unsigned char* msg, int length)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool RMsg_AddMessage(struct netadr_t* to, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool RMsg_AddPrint(struct netadr_t* to, const char* line)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RMsg_AddRMsgsToPacket(const int clientSlot, struct msg_t* outMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RMsg_SendMessages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RMsg_AckSequence(struct netadr_t* from, unsigned char sequenceNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RMsg_FindOldestSeq(const int clientSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RMsg_FindMessageSlot(const int clientSlot, unsigned char sequenceNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RMsg_CountOutstandingMessages(const int clientSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RMsg_AckMsgSlot(struct reliableClient* client, int clientSlot, int msgSlot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RMsg_MarkPacketReceived(struct netadr_t* from, unsigned char sequenceNum)
{

}

#endif // __UNIMPLEMENTED__
