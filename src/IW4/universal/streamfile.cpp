//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static bool FileIndexIsInPackfile(unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Sys_File PakFile_Open(struct Sys_File* streamFileCache, enum PackfileUser user, unsigned int fileIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StreamFileOpen(struct StreamFile* streamFile, const struct CacheFileName* fileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StreamFileClose(struct StreamFile* streamFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StreamFileSetMissing(struct StreamFile* streamFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StreamFileMissing(struct StreamFile* streamFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StreamFileDefined(struct StreamFile* streamFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StreamFileReadCompletion(unsigned long dwErrorCode, unsigned long dwNumberOfBytesTransferred, struct _OVERLAPPED* lpOverlapped)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StreamFileRead(struct StreamFile* streamFile, unsigned char** buffer, int fileOffset, int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CacheFileNameEqual(const struct CacheFileName2* file0, const struct CacheFileName* file1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CacheFileNameDefined(const struct CacheFileName* file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CacheFileNameDefined2(const struct CacheFileName2* file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CacheFileNameClear2(struct CacheFileName2* file, char* rawName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CacheFileNameCopy(const struct CacheFileName* src, struct CacheFileName* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CacheFileNameCopy2(const struct CacheFileName* src, struct CacheFileName2* dest, char* rawName, unsigned int maxLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CacheFileNameHash(const struct CacheFileName* file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CacheFileNameGetDebugName(const struct CacheFileName* file)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StreamFileNameGetCacheName(const struct StreamFileName* streamFileName, struct CacheFileName* fileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StreamFileNameGetName(const struct StreamFileName* streamFileName, char* filename, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StreamFileNameIsNullSound(const struct StreamFileName* streamFileName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Sys_OpenFileReliable(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Sys_File Sys_CreateFile(const char* dir, const char* filename)
{

}

#endif // __UNIMPLEMENTED__
