//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void IWNet_CloseTask(struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_CancelTask(struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_CancelStorageTask(struct IWNetStorageTaskState* storageTaskState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_CancelCommand(enum IWNetCommand command)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_IsCommandActive(enum IWNetCommand command)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

function * IWNet_UtilFindWriter(const struct IWNetCommandWriter* writers, enum IWNetCommand command)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct IWNetCommandData* IWNet_GetCommandSlotByIndex(const int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int IWNet_GetCommandIndex(const struct IWNetCommandData* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int IWNet_GetActiveCmdCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct IWNetCommandData* IWNet_FindFreeCommand()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_AddCommand(const int localControllerIndex, enum IWNetCommand command, union IWNetParameters* params)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IWNet_DNSResolved()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_DNSLookup(const char* authMachineName, const char* matchmakingMachineName, const char* storageMachineName, const char* teammakingMachineName, const char* ipDetectHostname, const char* loggingMachineName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Init(const char* authMachineName, const char* matchmakingMachineName, const char* storageMachineName, const char* teammakingMachineName, const char* ipDetectHostname, const char* loggingMachineName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_Frame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void IWNet_CancelTasksForController(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__
