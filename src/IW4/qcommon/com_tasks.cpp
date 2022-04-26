//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void TaskManager_AssertTaskSetIsRegistered(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct overlappedTask* TaskManager_GetTaskSetListFromSet(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* TaskManager_GetTaskSetName(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TaskManager_ClearTask_Core(struct overlappedTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TaskManager_ClearOverlappedTasks(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TaskManager_ConstructTaskSet(struct OverlappedTaskSet* taskSet, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool TaskManager_CancelTask(struct overlappedTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool TaskManager_CancelTasks_Core(struct OverlappedTaskSet* taskSet, bool any, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool TaskManager_DestructTaskSet_CanFail(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TaskManager_DestructTaskSet(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool TaskManager_CancelTasks(struct OverlappedTaskSet* taskSet, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool TaskManager_DestructAllTaskSets_CanFail()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TaskManager_DestructAllTaskSets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct overlappedTask* TaskManager_GetOpenTaskSlot_Try(struct OverlappedTaskSet* taskSet, const int controllerIndex, const int type, enum TaskSubsystem subsystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct overlappedTask* TaskManager_GetOpenTaskSlot_Internal(struct OverlappedTaskSet* taskSet, const int controllerIndex, const int type, enum TaskSubsystem subsystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct overlappedTask* TaskManager_GetOpenTaskSlotForIwNetStorage(struct OverlappedTaskSet* taskSet, const int controllerIndex, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct overlappedTask* TaskManager_GetOpenTaskSlot(struct OverlappedTaskSet* taskSet, const int controllerIndex, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TaskManager_ClearTask(struct overlappedTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool TaskManager_AnyTaskInProgress(struct OverlappedTaskSet* taskSet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool TaskManager_TaskIsInProgress(struct OverlappedTaskSet* taskSet, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool TaskManager_TaskIsInProgressForController(struct OverlappedTaskSet* taskSet, const int type, const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int TaskManager_CountTasksInProgress(struct OverlappedTaskSet* taskSet, const int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct overlappedTask* TaskManager_TaskFromXOverlapped(struct OverlappedTaskSet* taskSet, const struct _XOVERLAPPED* xov)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct _XOVERLAPPED* TaskManager_TaskToXOverlapped(struct overlappedTask* overlappedTask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct IWNetStorageTaskState* TaskManager_TaskToIWNetStorageTaskState(struct overlappedTask* overlappedTask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TaskManager_SetTaskData(struct overlappedTask* overlappedTask, void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* TaskManager_GetTaskData(struct overlappedTask* overlappedTask)
{

}

#endif // __UNIMPLEMENTED__
