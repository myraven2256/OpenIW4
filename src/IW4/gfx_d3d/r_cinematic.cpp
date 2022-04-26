//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_CheckBinkError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CinematicHunk_Open(struct CinematicHunk* hunk, void* memory, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CinematicHunk_Close(struct CinematicHunk* hunk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_LockRead()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UnlockRead()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CinematicHunk_Alloc(struct CinematicHunk* hunk, int size, int alignment)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* CinematicHunk_Alloc_GpuAligned(struct CinematicHunk* hunk, int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamBeginUsingBufferForMoviePlayback(void** outPointer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_StreamEndUsingBufferForMoviePlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksOpen()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_HunksClose()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_MakeBinkTexture(struct GfxImage* image, unsigned int width, unsigned int height, unsigned int* out_pitch, unsigned int* out_size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_InitBinkTextures()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void commitToMemory(void* ptr, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_Cinematic_SetRendererImagesToFrame(int frameToSetTo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_Cinematic_GetPercentageFull_FromBinkRealtime(const struct BINKREALTIME* binkRealtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_SeizeIO()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_RelinquishIO()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateTimeInMsec(const struct BINKREALTIME* binkRealtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_Advance()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void* R_Cinematic_Bink_Alloc(unsigned int bytes)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_Bink_Free(void* ptr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_Cinematic_StopPlayback_Now()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpenPath_MemoryResident(const char* filename, const void** outPtr, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpenPath(const char* filepath, unsigned int playbackFlags, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_BinkOpen(const char* filename, unsigned int playbackFlags, char* errText, int errTextSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_InitBinkVolumes(struct BINK* bink)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Cinematic_StartPlayback_Now(const char* filename, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_ReserveMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_UpdateFrame_Core2()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_StartPlayback_Internal(const char* name, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_Thread(unsigned int threadContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_StartPlayback(const char* name, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_StartNextPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SetNextPlayback(const char* name, unsigned int playbackFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_UnsetNextPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_StopPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SuspendPlayback()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_SetPaused(enum CinematicEnum paused)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_Cinematic_SyncNow()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_Cinematic_UpdateFrame(int sync)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_Cinematic_UpdateFrame2()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Cinematic_DrawLetterbox_OptionalCinematic(bool drawCinematic, float letterboxAlpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_DrawLetterboxFade(float alpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Cinematic_DrawStretchPic_Letterboxed(int __formal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_GetFilenameAndTimeInMsec(char* outName, int outNameSize, unsigned int* outTimeInMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsFinished()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsStarted()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_Cinematic_IsPending()
{

}

#endif // __UNIMPLEMENTED__
