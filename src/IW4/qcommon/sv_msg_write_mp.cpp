//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_msg()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct NetFieldList* MSG_GetStateFieldListForEntityType(const int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_CheckWritingEnoughBits(int value, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteReliableCommandToBuffer(const char* pszCommand, char* pszBuffer, int iBufferSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_CheckOriginIsInPlayableBounds(const float* origin, const float* mapCenter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteOriginFloat(const struct SnapshotInfo_s* snapInfo, const int clientNum, const float* mapCenter, struct msg_t* msg, int bits, float value, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteOriginZFloat(const struct SnapshotInfo_s* snapInfo, const int clientNum, const float* mapCenter, struct msg_t* msg, float value, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_ShouldSendPSField(const struct SnapshotInfo_s* snapInfo, bool sendOriginAndVel, const struct playerState_s* ps, const struct playerState_s* oldPs, const struct NetField* field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEntityIndex(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int index, const int indexBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteLastChangedField(struct msg_t* msg, const int lastChangedFieldNum, int numFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaTime(const int clientNum, struct msg_t* msg, int timeBase, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteEFlags(const int clientNum, struct msg_t* msg, const int oldFlags, const int newFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteGroundEntityNum(const int clientNum, struct msg_t* msg, const int groundEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEventNum(const int clientNum, struct msg_t* msg, int eventNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEventParam(const int clientNum, struct msg_t* msg, int eventParam)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PacketEntityType MSG_GetPacketEntityTypeForEType(int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_GetBitCount(int bits, bool* estimate, int from, int to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_EncodeSkippedFields(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, int numFieldsSkipped, const int skippedFieldBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteValueNoXor(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, int value, const int bits, const char* fieldName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteValue(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int* fromF, const int* toF, const int bits, const char* fieldName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaAngle(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const float oldFloat, const float fullFloat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_WriteDeltaField(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const struct NetField* field, const int fieldNum, const bool forceSend, const int lastChangedField, const int skippedFieldBits, const bool sendSkippedFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaFields(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const unsigned char* from, const unsigned char* to, const int force, int lastChanged, int numFields, const struct NetField* stateFields, const int skippedFieldBits, bool writeEntUnlinkBit, bool isEntity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_GetLastChangedField(const struct SnapshotInfo_s* snapInfo, const unsigned char* from, const unsigned char* to, const int numFields, const struct NetField* stateFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_WriteDeltaStruct(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, unsigned char* from, unsigned char* to, int force, int numFields, int indexBits, const struct NetField* stateFields, int bChangeBit, int skippedFieldBits, bool isEntity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_TrTypeUsesTrDelta(const int trType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_TrTypeUsesTrDuration(const int trType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_ShouldEntityFieldBeForcedSent(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_ShouldEntityFieldBeForcedHidden(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_ShouldSendEntityField(const struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to, const struct NetField* field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_WriteEntityDelta(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct entityState_s* fromES, const struct entityState_s* toES, int force, int numFields, int indexBits, const struct NetField* stateFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteEntityRemoval(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, unsigned char* from, int indexBits, bool changeBit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool MSG_EntityStatesMatch(const struct entityState_s* e1, const struct entityState_s* e2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteEntityDeltaForEType(const struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, int eType, const struct entityState_s* from, const struct entityState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateEntTimesForTimeDelta(struct entityState_s* ent, const int timeDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintChangedEntityFields(struct SnapshotInfo_s* snapInfo, const struct entityState_s* from, const struct entityState_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MSG_WriteEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int timeDeltaFrom, const int timeDeltaTo, const int time, const struct entityState_s* from, const struct entityState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MSG_WriteDeltaArchivedEntity(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct archivedEntity_s* from, const struct archivedEntity_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaClient(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct clientState_s* from, const struct clientState_s* to, int force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_WriteDeltaHudElems(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct hudelem_s* from, const struct hudelem_s* to, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteEmptyPlayerstate(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaPlayerstate(struct SnapshotInfo_s* snapInfo, struct msg_t* msg, const int time, const struct playerState_s* from, const struct playerState_s* to)
{

}

#endif // __UNIMPLEMENTED__
