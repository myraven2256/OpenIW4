//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int GetMinBitCountForNum(const unsigned int num)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MSG_ValuesAreEqual(int bits, const int* fromF, const int* toF)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKey(struct msg_t* msg, int key, int oldV, int newV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKey(struct msg_t* msg, int key, int oldV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteKey(struct msg_t* msg, int key, int newV, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadKey(struct msg_t* msg, int key, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKeyByte(struct msg_t* msg, int key, int oldV, int newV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKeyByte(struct msg_t* msg, int key, int oldV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaKeyShort(struct msg_t* msg, int key, int oldV, int newV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaKeyShort(struct msg_t* msg, int key, int oldV)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_WriteDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, const struct usercmd_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MSG_ReadDeltaUsercmdKey(struct msg_t* msg, int key, const struct usercmd_s* from, struct usercmd_s* to)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ClearLastReferencedEntity(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaTime(struct msg_t* msg, int timeBase)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaGroundEntity(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEventField(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEventParamField(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadEFlags(struct msg_t* msg, const int oldFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float MSG_ReadOriginFloat(int bits, struct msg_t* msg, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float MSG_ReadOriginZFloat(struct msg_t* msg, float oldValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadEntityIndex(struct msg_t* msg, int indexBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadLastChangedField(struct msg_t* msg, int totalFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadValueNoXor(struct msg_t* msg, const int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadValue(struct msg_t* msg, const int* fromF, int* toF, const int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float MSG_ReadDeltaAngle(struct msg_t* msg, const float oldFloat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_ReadDeltaField(struct msg_t* msg, const int time, const void* from, void* to, const struct NetField* field, int print, bool noXor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadNumFieldsSkipped(struct msg_t* msg, const int skippedFieldBits, const int maxVal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_CopyFieldOver(const struct NetField* stateFields, const void* from, void* to, const int fieldNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_ReadDeltaFields(struct msg_t* msg, const int time, const void* from, void* to, int numFields, const struct NetField* stateFields, const int skippedFieldBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, int numFields, int indexBits, const struct NetField* stateFields, const int skippedFieldBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MSG_ReadDeltaEntityStruct(struct msg_t* msg, const int time, const void* from, void* to, unsigned int number, const int skippedFieldBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaEntity(struct msg_t* msg, const int time, const struct entityState_s* from, struct entityState_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaArchivedEntity(struct msg_t* msg, const int time, const struct archivedEntity_s* from, struct archivedEntity_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int MSG_ReadDeltaClient(struct msg_t* msg, const int time, const struct clientState_s* from, struct clientState_s* to, int number)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_ReadDeltaHudElems(struct msg_t* msg, const int time, const struct hudelem_s* from, struct hudelem_s* to, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_ReadDeltaPlayerstate(const int localClientNum, struct msg_t* msg, const int time, const struct playerState_s* from, struct playerState_s* to, bool predictedFieldsIgnoreXor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MSG_initHuffmanInternal()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_CheckFields()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_InitHuffman()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MSG_DumpNetFieldChanges_f()
{

}

#endif // __UNIMPLEMENTED__
