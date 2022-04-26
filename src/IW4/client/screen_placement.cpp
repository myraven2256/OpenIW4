//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void ScrPlace_CalcSpecificSafeAreaOffsets(float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, float safeAreaRatioHorz, float safeAreaRatioVert, float* realViewableMin, float* realViewableMax, float* virtualViewableMin, float* virtualViewableMax, int renderTargetWidth, int renderTargetHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ScrPlace_CalcSafeAreaOffsets(struct ScreenPlacement* scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, float horzAspectScale, int renderTargetWidth, int renderTargetHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupFloatRenderTargetViewport(struct ScreenPlacement* scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight, int renderTargetWidth, int renderTargetHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupFloatViewport(struct ScreenPlacement* scrPlace, float viewportX, float viewportY, float viewportWidth, float viewportHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupRenderTargetViewport(struct ScreenPlacement* scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight, int renderTargetWidth, int renderTargetHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupViewport(struct ScreenPlacement* scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupUnsafeViewport(struct ScreenPlacement* scrPlace, int viewportX, int viewportY, int viewportWidth, int viewportHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float ScrPlace_ApplyXWithoutSplitScreenScaling(const struct ScreenPlacement* scrPlace, float x, int horzAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float ScrPlace_ApplyX(const struct ScreenPlacement* scrPlace, float x, int horzAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float ScrPlace_ApplyYWithoutSplitScreenScaling(const struct ScreenPlacement* scrPlace, float y, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float ScrPlace_ApplyY(const struct ScreenPlacement* scrPlace, float y, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ApplySplitscreenScaling(float* x, float* y, float* w, float* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_ApplyRectWithoutSplitScreenScaling(const struct ScreenPlacement* scrPlace, float* x, float* y, float* w, float* h, int horzAlign, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsFullscreenRect(float x, float y, float w, float h, int horzAlign, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_ApplyRect(const struct ScreenPlacement* scrPlace, float* x, float* y, float* w, float* h, int horzAlign, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ClampDimension(float* o, float* size, float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_ApplyRectClamped(const struct ScreenPlacement* scrPlace, float* x, float* y, float* w, float* h, int horzAlign, int vertAlign)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetLegacySplitscreenScaling()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetNormalSplitscreenScaling()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupFullscreenViewports()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_SetupClientViewports()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_BeginDisplayView()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_BeginFullScreen()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ScrPlace_EndFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct ScreenPlacement* ScrPlace_GetViewPlacement(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct ScreenPlacement* ScrPlace_GetFullPlacement()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct ScreenPlacement* ScrPlace_GetUnsafeFullPlacement()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ScrPlace_IsDisplayViewActive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int ScrPlace_IsFullScreenActive()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct ScreenPlacement* ScrPlace_GetActivePlacement(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__
