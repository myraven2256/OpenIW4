//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_AddStaticModelDebugString(float* origin, const char* string)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowCountsStaticModel(int smodelIndex, int lod)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StaticModelWriteInfoHeader(void* fileHandle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StaticModelWriteInfo(void* fileHandle, const struct GfxStaticModelDrawInst* smodelDrawInst, const float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DumpStaticModelLodInfo(const struct GfxStaticModelDrawInst* smodelDrawInst, const float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EndDumpStaticModelLodInfo()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_EmitSModelSurfVisData(const struct XModel* model, unsigned int lodIndex, const unsigned short* smodelIndexes, unsigned int smodelCount, struct GfxSModelSurfDrawData* drawData, unsigned int* smodelSurfType, unsigned short* visDataIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SortSModelSurfDelaySort(union GfxSModelSurfDelaySort* delaySurfList, unsigned int begin, unsigned int end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FinishEmittingPreviousSModelSurf(struct GfxSModelSurfBuildList* buildList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitSingleSModelSurf(struct GfxSModelSurfBuildList* buildList, union GfxSModelSurfHeader smodelSurfHeader, union GfxSModelSurfVisDataRef visDataRef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitDelayedSModelSurfsUpToMaterial(struct GfxSModelSurfBuildList* buildListArray, union GfxSModelSurfHeader refKey, unsigned int firstMtlSortIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddDelayedSModelSurf(struct GfxSModelSurfBuildList* buildList, union GfxSModelSurfHeader smodelSurfHeader, union GfxSModelSurfVisDataRef visDataRef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitDelayedSModelSurfsRemaining(struct GfxSModelSurfBuildList* buildListArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_StaticModelDebugAids(unsigned int smodelIndex, unsigned int lod, float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ClearStaticModelVisibility(unsigned char* smodelVisData, unsigned int smodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char* R_InitSModelSurfBuffers(struct GfxSModelSurfDrawData* drawData, unsigned int visDataLimit, unsigned int surfDataLimit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildList(struct GfxSModelSurfDrawData* drawData, unsigned int camRgn, unsigned char** surfData, union GfxSModelSurfDelaySort** delaySurfList, unsigned int surfDataLimit, unsigned int delaySurfLimit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildLists_Camera(struct GfxSModelSurfDrawData* drawData, union GfxSModelSurfDelaySort* delaySurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelShadowCasterMaterialIndex()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildLists_Shadow(struct GfxSModelSurfDrawData* drawData, unsigned int surfDataLimit, unsigned int visDataLimit, union GfxSModelSurfDelaySort* delaySurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildLists_SunShadow(struct GfxSModelSurfDrawData* drawData, unsigned int partitionIndex, union GfxSModelSurfDelaySort* delaySurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildLists_SpotShadow(struct GfxSModelSurfDrawData* drawData, union GfxSModelSurfDelaySort* delaySurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSModelSurfBuildLists_DynLight(struct GfxSModelSurfDrawData* drawData, union GfxSModelSurfDelaySort* delaySurfList, const struct GfxDrawList* shadowDrawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitDelayedSModelSurfsRemaining_Camera(struct GfxSModelSurfDrawData* drawData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitDelayedSModelSurfsRemaining_Shadow(struct GfxSModelSurfDrawData* drawData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSModelSurfList(struct GfxSModelSurfList* smodelSurfListArray, struct GfxSModelSurfDrawData* drawData, unsigned int buildListIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelSurfListIndex(unsigned int smodelSurfType, unsigned int lodIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelLodFromSurfListIndex(unsigned int smodelSurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelSurfTypeFromSurfListIndex(unsigned int smodelSurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelSurfListIndexForShadowMap(unsigned int lodIndex, int useShadowMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSModelLodFromSurfListIndexForShadowMap(unsigned int smodelSurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_GetSModelUseShadowMapFromSurfListIndex(unsigned int smodelSurfList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitSModelSurfs_Camera(struct GfxSModelSurfDrawData* drawData, const struct GfxSModelEmitInfo* smodelEmit, unsigned short* smodelIndexForSurf[0x128], unsigned int* smodelCountForSurf, unsigned int smodelCountMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitSModelSurfs_Shadow(struct GfxSModelSurfDrawData* drawData, const struct XModel* model, unsigned short* smodelIndexForSurf[0x128], unsigned int* smodelCountForSurf, unsigned int smodelCountMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_EmitSModelSurfs_DynLight(struct GfxSModelSurfDrawData* drawData, const struct GfxSModelEmitInfo* smodelEmit, unsigned short* smodelIndexForSurf[0x128], unsigned int* smodelCountForSurf, unsigned int smodelCountMask, const struct GfxDrawList* shadowDrawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddSModelToAppropriateList(unsigned int smodelIndex, unsigned int lodIndex, unsigned short* smodelIndexForSurf[0x128], unsigned int* smodelCountForSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddSModelToAppropriateListForShadowMap(unsigned int smodelIndex, unsigned int lodIndex, unsigned short* smodelIndexForSurf[0x128], unsigned int* smodelCountForSurf, int useShadowMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllStaticModelSurfacesCamera(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddAllStaticModelSurfacesRangeSunShadow(struct GfxViewInfo* viewInfo, unsigned int partitionIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllStaticModelSurfacesSunShadow(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllStaticModelSurfacesSpotShadow(struct GfxViewInfo* viewInfo, unsigned int spotShadowIndex, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddAllStaticModelSurfacesDynLight(struct GfxViewInfo* viewInfo, unsigned int sceneLightIndex, const unsigned short* smodelIndexes, unsigned int smodelCount)
{

}

#endif // __UNIMPLEMENTED__
