//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void RB_VirtualToSceneRadius(float radius, float* radiusX, float* radiusY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RB_PickSymmetricFilterMaterial(int halfTapCount, int gammaType, const struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RB_GaussianFilterPoints1D(float pixels, int srcRes, int dstRes, int tapLimit, float* tapOffsets, float* tapWeights)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_GenerateGaussianFilter1D(float radius, int* res, int axis, int gammaType, struct GfxImageFilterPass* filterPass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_GenerateGaussianFilter2D(float radius, int srcWidth, int srcHeight, int dstWidth, int dstHeight, int gammaType, struct GfxImageFilterPass* filterPass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RB_GenerateGaussianFilterChain(float radiusX, float radiusY, int srcWidth, int srcHeight, int dstWidth, int dstHeight, int passLimit, int gammaType, struct GfxImageFilterPass* filterPass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetupFilterPass(const struct GfxImageFilterPass* filterPass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_FilterPingPong(const struct GfxImageFilter* filter, int passIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_FilterPingPongEnd(const struct GfxImageFilter* filter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetSrgbTexture(struct GfxImage* image, bool useSrgbReads)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetSrgbTextureReadsForFilteringImage(const struct GfxImageFilter* filter, bool useSrgbReads)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_FilterImage(struct GfxImageFilter* filter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_GaussianFilterImage(float radius, enum GfxRenderTargetId srcRenderTargetId, enum GfxRenderTargetId dstRenderTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum GfxRenderTargetId RB_ApplyGlowFilter(float radius, enum GfxRenderTargetId srcRenderTarget, enum GfxRenderTargetId dstRenderTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_GlowFilterImage(float radius)
{

}

#endif // __UNIMPLEMENTED__
