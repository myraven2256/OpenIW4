//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void ImageCache_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_GiveMemory(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_GiveMemoryDelayed(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GfxImageEntry* ImageCache_GetImageEntry(struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_ReleaseImageInternal(struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_ReleaseImage(struct GfxImage* image, struct GfxImage* remoteImage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_ImageUpdateDelayed(struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_SetImageMemory(struct GfxImage* image, struct GfxImage* remoteImage, unsigned char* pixels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_InitImage(struct GfxImage* image, struct GfxImage* remoteImage, unsigned char* pixels, unsigned int imagePartIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char* ImageCache_FreeImage(struct GfxImage* image, struct GfxImage* remoteImage, unsigned int index, unsigned int minSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char* ImageCache_AttemptFreeImage(unsigned int minSize, int streamPriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GfxImageEntry* ImageCache_GetImageToMove(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_GiveSpareMemory(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_MoveImage(struct GfxImageEntry* entry, struct GfxUnusedEntry* unusedEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char* ImageCache_MoveImages(unsigned char* memory, unsigned char* end, int streamPriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char* ImageCache_AllocMemory(unsigned int size, int streamPriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_FreeMemoryInternal(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_FreeMemory(unsigned char* memory, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ImageCache_DmaCopy(unsigned char* dst, const unsigned char* src, unsigned int size, int finalCall)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_DebugImageMoveSize()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_UpdateGPU(int* waitedForFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_WaitFence()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_AllocMemory2(unsigned int size, int streamPriority, unsigned char** outPixels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ImageCache_DmaCopyDelayed(unsigned char* dst, const unsigned char* src, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__
