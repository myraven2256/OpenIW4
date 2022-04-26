//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool IWNet_Storage_IsStorageCommand(struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_UtilStateComplete(struct IWNetStorageTaskState* state, enum IWNetStorageError errorCode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_UtilComplete(struct IWNetCommandData* cmd, enum IWNetStorageError errorCode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int IWNet_Storage_UtilWriteSpaceLeft(struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int IWNet_Storage_UtilReadSpaceLeft(struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorageUtil_FileId(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorageUtil_FileName(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_BeginWrite(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_Write(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_EndWrite(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_BeginRead(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_Read(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_WriteStorage_EndRead(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Storage_WriteCommand(const int localControllerIndex, struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_UtilNextWrite(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_UtilNextRead(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileBeginWrite(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileWrite(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileEndWrite(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileBeginRead(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileRead(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleReplyFileEndRead(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void IWNet_Storage_HandleError<3>(struct IWNetCommandData* cmd, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Storage_ParsePacket(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_Storage_Write(const int localControllerIndex, struct IWNetStorageTaskState* request, const char* filename, unsigned char* data, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_Storage_Read(const int localControllerIndex, struct IWNetStorageTaskState* request, const char* filename, unsigned char* data, unsigned int maxSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_Storage_IsComplete(struct IWNetStorageTaskState* request)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Storage_Cancel(struct IWNetStorageTaskState* request)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Storage_Clear(struct IWNetStorageTaskState* request)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Storage_GetErrorCode(struct IWNetStorageTaskState* request, enum IWNetStorageError* outErrorCode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* IWNet_Storage_ErrorCodeToString(enum IWNetStorageError errorCode)
{

}

#endif // __UNIMPLEMENTED__
