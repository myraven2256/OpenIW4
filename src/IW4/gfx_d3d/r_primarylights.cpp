//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static float R_ShadowedSpotLightScore(const struct GfxViewParms* viewParms, const struct GfxLight* light)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_DoesSunPrimaryLightDirMatchStage(unsigned int sceneLightIndex, const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_AddPotentiallyShadowedLight(const struct GfxViewInfo* viewInfo, unsigned int sceneLightIndex, struct GfxCandidateShadowedLight* candidateLights, unsigned int candidateLightCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddShadowsForLight(struct GfxViewInfo* viewInfo, unsigned int sceneLightIndex, float spotShadowFade)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddShadowedLightToShadowHistory(struct GfxShadowedLightHistory* shadowHistory, unsigned int sceneLightIndex, float score, float fadeDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_FadeOutShadowHistoryEntries(unsigned int* sceneLightIsUsed, struct GfxShadowedLightHistory* shadowHistory, float fadeDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ClearShadowedPrimaryLightHistory(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_AddDynamicSceneLight(struct GfxViewInfo* viewInfo, const struct GfxLight* light)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsPrimaryLight(unsigned int sceneLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ChooseShadowedLights(unsigned int* sceneLightIsUsed, struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightEntityShadowBit(unsigned int localClientNum, unsigned int entnum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimaryLightDynEntShadowBit(unsigned int entnum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkSphereEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkBoxEntityToPrimaryLights(unsigned int localClientNum, unsigned int entityNum, const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_LinkDynEntToPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType, const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkEntityFromPrimaryLights(unsigned int localClientNum, unsigned int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_UnlinkDynEntFromPrimaryLights(unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsEntityVisibleToPrimaryLight(unsigned int localClientNum, unsigned int entityNum, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsDynEntVisibleToPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType, unsigned int primaryLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_IsEntityVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, unsigned int sceneLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsEntityVisibleToAnyShadowedPrimaryLight(const struct GfxViewInfo* viewInfo, unsigned int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_IsDynEntVisibleToShadowedPrimaryLight(unsigned int baseBitIndex, enum DynEntityDrawType drawType, unsigned int sceneLightIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_IsDynEntVisibleToAnyShadowedPrimaryLight(unsigned int dynEntId, enum DynEntityDrawType drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetNonSunPrimaryLightForBox(const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int R_GetNonSunPrimaryLightForSphere(const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__
