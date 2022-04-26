//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_xenon_memorycard()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void MemCard_SetUseDevDrive(bool useDevDrive)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool MemCard_IsUsingDevDrive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int GetContextFileSize(void* fileHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Memcard_InitializeSystem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Memcard_InitializeDevices()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Memcard_SelectSaveDevice(int controllerIndex, bool forceShow, bool showUI, const int bytesNeeded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Memcard_UnselectSaveDevice(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Memcard_SetSelectedDevice(int controllerIndex, unsigned long deviceId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned long Memcard_GetSelectedDeviceID(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Memcard_IsDeviceSelected(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Memcard_IsDeviceAvailable(int controllerIndex, int bytesNeeded, bool* forceShow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Memcard_GetDeviceState(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Memcard_CheckForStorageDeviceChange(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults Memcard_CheckAvailableOverlapped(int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Memcard_CheckOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetMemcardError(struct MemcardError* error, const char* errorString, unsigned long extendedError)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ClearMemcardError(struct MemcardError* error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* MemCard_OpenFromHDD(const char* name, enum MemcardOperation operation, struct MemcardError* error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum Memcard_OpenFile_Result Memcard_OpenFile(void** resultFileHandle, const char* name, const char* description, enum MemcardOperation operation, int controllerIndex, unsigned long deviceId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct MemcardError* Memcard_GetOpenError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* OpenContextFile(const char* name, const char* description, enum MemcardOperation operation, int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int MemCard_ReadFromHDD(void* fileHandle, void* data, int maxsize, struct MemcardError* error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ReadFromMemoryCard(void* fileHandle, void* data, int maxsize, struct MemcardError* error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MemCard_WriteToHDD(void* fileHandle, const void* data, int size, struct MemcardError* error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct MemcardError* Memcard_GetWriteError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void WriteToMemoryCardFile(void* fileHandle, const void* data, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CloseContextFile(void* fileHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DeleteContextFile(void* fileHandle)
{

}

#endif // __UNIMPLEMENTED__
