//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int R_IsSurfaceVisible(const unsigned char* surfaceVisData, unsigned int sortedSurfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_BeginBspSurfList(struct GfxBspSurfListBuild* bspSurfList, unsigned int dataLimit, unsigned int buildIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EndBspSurfList(struct GfxBspSurfListBuild* bspSurfListBuild, struct GfxBspSurfList* bspSurfList, unsigned int buildIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsBspSurfListFull(const struct GfxBspSurfListBuild* bspSurfListBuild)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitBspSurfDatum(struct GfxBspSurfListBuild* bspSurfListBuild, unsigned short datum, unsigned int buildIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitBspSurfArray(struct GfxBspSurfListBuild* bspSurfListBuild, union GfxDrawSurf drawSurf, unsigned int restartMask, unsigned int firstSurfIndex, unsigned int surfCount, unsigned int buildIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AreBspSurfsMergeable_Internal(unsigned int surfIndex, union GfxDrawSurf drawSurf, const struct GfxSurface* surface, struct GfxBspSurfMergeState* mergeState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_AreBspSurfsMergeable(unsigned int surfIndex, union GfxDrawSurf drawSurf, struct GfxBspSurfMergeState* mergeState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetBspSurfList<GfxAddBspSurfacesCameraNonlitInterface,unsigned char *>(unsigned char* userData, unsigned int iterBegin, unsigned int iterEnd, unsigned int dataLimit, struct GfxBspSurfList* bspSurfListOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetBspSurfListCameraLitInterfaceBase::PerVisibleDrawSurfCallback(struct GfxGetBspSurfListCameraLitData& userData, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGetBspSurfListCameraLitInterfaceBase::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetBspSurfListCameraLitInterface::KeepSurfIndex(struct GfxGetBspSurfListCameraLitData& userData, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetBspSurfListLitCamera(struct GfxGetBspSurfListCameraLitData userData, unsigned int surfBegin, unsigned int surfEnd, unsigned int* dataLimit, struct GfxBspSurfList** bspSurfListOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllBspDrawSurfacesCamera(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxAddBspSurfacesCameraNonlitInterface::GetSurfIndex(unsigned char* surfaceVisData, unsigned int iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxAddBspSurfacesCameraNonlitInterface::KeepSurfIndex(unsigned char* surfaceVisData, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxAddBspSurfacesCameraNonlitInterface::PerVisibleDrawSurfCallback(unsigned char* surfaceVisData, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxAddBspSurfacesCameraNonlitInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllBspDrawSurfacesCameraNonlit(unsigned int beginSurface, unsigned int endSurface, unsigned int bspSurfDataLimit, struct GfxBspSurfList* bspSurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxGetSunShadowBspSurfListInterface_SlowShadow::GetSurfIndex(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSunShadowBspSurfListInterface_SlowShadow::KeepSurfIndex(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSunShadowBspSurfListInterface_SlowShadow::PerVisibleDrawSurfCallback(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGetSunShadowBspSurfListInterface_SlowShadow::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxGetSunShadowBspSurfListInterface_FastShadow::GetSurfIndex(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSunShadowBspSurfListInterface_FastShadow::KeepSurfIndex(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSunShadowBspSurfListInterface_FastShadow::PerVisibleDrawSurfCallback(const struct GfxGetSunShadowBspSurfListData& listData, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGetSunShadowBspSurfListInterface_FastShadow::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddAllBspDrawSurfacesSunShadowInternal(struct GfxBspSurfList* bspSurfList_0, struct GfxBspSurfList* bspSurfList_1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllBspDrawSurfacesSunShadow(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxGetSpotShadowBspSurfListInterface::GetSurfIndex(const struct GfxShadowGeometry* shadowGeom, unsigned int iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSpotShadowBspSurfListInterface::KeepSurfIndex(const struct GfxShadowGeometry* shadowGeom, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSpotShadowBspSurfListInterface::PerVisibleDrawSurfCallback(const struct GfxShadowGeometry* shadowGeom, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGetSpotShadowBspSurfListInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllBspDrawSurfacesSpotShadow(struct GfxViewInfo* viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxGetSortedBspSurfListInterface::GetSurfIndex(struct GfxSurface** surfArray, unsigned int iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSortedBspSurfListInterface::KeepSurfIndex(struct GfxSurface** surfArray, unsigned int surfIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public int GfxGetSortedBspSurfListInterface::PerVisibleDrawSurfCallback(struct GfxSurface** surfArray, unsigned int surfIndex, union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGetSortedBspSurfListInterface::PerEmittedDrawSurfCallback(union GfxDrawSurf drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetSortedBspSurfListIndirect(struct GfxSurface** surfArray, unsigned int surfArraySize, struct GfxBspSurfList* bspSurfList)
{

}

#endif // __UNIMPLEMENTED__
