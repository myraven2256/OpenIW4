//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_r_light()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridOrigin(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridBox(const unsigned int* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowGridCorner(unsigned int x, unsigned int y, unsigned int z, float halfSize, const float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowLightGrid(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const float* samplePos, const struct GfxLightGridEntry** cornerEntry, bool* suppressEntry, bool honorSuppression)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowDetailedGridOrigin(const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowDetailedGridBox(const unsigned int* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightGridAverageColorByIndexes(const struct GfxLightGrid* lightGrid, unsigned short colorIndex, const unsigned int* sampleIndexes, unsigned int sampleIndexCount, float* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowDetailedGridCornerLine(const float* center, unsigned int x, unsigned int y, unsigned int z, const float* lineColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowPrimaryLightLine(const float* origin, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowDetailedGridCorner(const struct GfxLightGrid* lightGrid, unsigned short colorIndex, unsigned int primaryLightIndex, const float* center, unsigned int x, unsigned int y, unsigned int z, bool drawLine, const float* lineColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ShowDetailedLightGrid(const struct GfxLightGrid* lightGrid, unsigned int primaryLightIndex, const unsigned int* pos, const float* samplePos, const struct GfxLightGridEntry** cornerEntry, bool* suppressEntry, bool honorSuppression)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LightGridDebugEnable(const float* viewPos, int desiredState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LightGridDebugDisable()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LightGridDebugToggle(const float* viewPos, bool lockToBox)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_AddSortedHistoryEntry(int x, int y, int z, int pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_SortedHistoryEntry(int x, int y, int z, enum GfxSortedHistoryAdd addMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShowLightVisCachePoints(const float* viewOrigin, const struct DpvsPlane* clipPlanes, int clipPlaneCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_UpdateVisHistory(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** cornerEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_GetPackedSunWeightFromFloat(float sunWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AverageLightGridColors(const struct GfxLightGridColors* colors, float sunWeight, unsigned char* outColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetGridAmbientColor(const struct GfxLightGridColors* colors, unsigned char packedSunWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetLightGridColors(const struct GfxLightGridColors* colors, unsigned char packedSunWeight, unsigned char* pixels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ScaleLightGridColors(const struct GfxLightGridColors* colors, unsigned short fixedPointWeight, unsigned short* scaled)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_WeightedAccumulateLightGridColors(const struct GfxLightGridColors* colors, unsigned short fixedPointWeight, unsigned short* accumulated)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_PackAccumulatedLightGridColors(const unsigned short* accumulated, struct GfxLightGridColors* packed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightGridColorsFixedPointBlendWeights(const float* colorsWeight, unsigned int colorsCount, float weightNormalizeScale, unsigned short* fixedPointWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AdjustLightColorSamples(unsigned short* colorSamples)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ApplyLightGridTweaksToLightGridColors(const struct GfxLightGrid* lightGrid, unsigned int colorsIndex, struct GfxLightGridColors* localColorsToSet, struct GfxLightGridColors** colorsToSetPtr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ApplyCharacterLightsToLightGridColors(const struct GfxLightGrid* lightGrid, unsigned int colorsIndex, const float* charLightOrigin, struct GfxLightGridColors* localColorsToSet, struct GfxLightGridColors** colorsToSetPtr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_SetLightGridColorsFromIndex(const struct GfxLightGrid* lightGrid, unsigned int colorsIndex, float primaryLightWeight, unsigned char* dest, const float* xyz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FixedPointBlendLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const unsigned short* fixedPointWeight, unsigned int colorsCount, struct GfxLightGridColors* outPacked, bool useHeroLighting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BlendLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float weightNormalizeScale, struct GfxLightGridColors* outPacked, bool useHeroLighting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_BlendAndAverageLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char* outAverage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_BlendAndSetLightGridColors(const struct GfxLightGrid* lightGrid, const unsigned short* colorsIndex, const float* colorsWeight, unsigned int colorsCount, float primaryLightWeight, float weightNormalizeScale, unsigned char* dest, const float* xyz)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_SetDefaultLightGridColors(const struct GfxLightGrid* lightGrid, unsigned char* dest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_ExtrapolateLightingAtPoint(const struct GfxLightGrid* lightGrid, unsigned char* dest, enum GfxModelLightExtrapolation extrapolateBehavior, unsigned int defaultGridEntry, const float* xyz, union GfxColor* ambientColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddLightGridSample(unsigned short* sampleColors, float* sampleWeight, unsigned int sampleCount, unsigned short sampleColorsAdd, float sampleWeightAdd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetLightGridSampleEntryQuad(const struct GfxLightGrid* lightGrid, const unsigned int* pos, const struct GfxLightGridEntry** entries, unsigned int* defaultGridEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_SunPrimaryLightCount()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_FirstOccludedSunPrimaryLight()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsOccludedSunLight(unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_IsPrimarySunLight(unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightForOccludedSunLight(unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsBetterPrimaryLight(unsigned char oldPrimaryLightIndex, unsigned char newPrimaryLightIndex, float oldWeight, float newWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_LightSightTrace(int oldHitNum, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsValidLightGridSample(const struct GfxLightGrid* lightGrid, const struct GfxLightGridEntry* entry, int cornerIndex, const unsigned int* pos, const float* samplePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char R_LightGridLookup(const struct GfxLightGrid* lightGrid, const float* samplePos, float* cornerWeight, const struct GfxLightGridEntry** cornerEntry, unsigned int* defaultGridEntry)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char R_GetPrimaryLightFromGrid(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned char sunPrimaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_CanLightInfluenceLightGridCorner(const struct GfxLightGrid* lightGrid, const struct ComPrimaryLight* light, const float* samplePos, unsigned int cornerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsInSunPrimaryLight(const float* samplePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GetLightingAtPoint(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned int nonSunPrimaryLightIndex, unsigned short* sampleColors, float* sampleWeight, unsigned int* sampleCount, unsigned int* defaultGridEntry, float* primaryVisibleWeight, float* primaryOccludedWeight, float* maxWeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetLightingAtPoint(const struct GfxLightGrid* lightGrid, const float* samplePos, unsigned int nonSunPrimaryLightIndex, unsigned char* dest, enum GfxModelLightExtrapolation extrapolateBehavior, int useHeroLighting, union GfxColor* ambientColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetAttenuatedPrimaryLightColor(const struct ComPrimaryLight* light, const float* origin, float* attenuatedColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetAverageLightingAtPoint(const float* samplePos, unsigned char* outColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_LightVisHistoryFilename(const char* bspName, char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_InitLightVisHistory(const char* bspName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SaveLightVisHistory()
{

}

#endif // __UNIMPLEMENTED__
