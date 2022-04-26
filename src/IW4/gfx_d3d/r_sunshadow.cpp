//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void R_GetSunAxes(const struct GfxBackEndData* data, float* sunAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowPartitionViewMatrix(const struct GfxSunShadowProjectionSetup* projSetup, unsigned int partitionIndex, struct GfxMatrix* viewMatrix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowPartitionProjectionMatrix(const struct GfxSunShadowMapMetrics* mapMetrics, const struct GfxSunShadowProjectionSetup* projSetup, unsigned int partitionIndex, struct GfxViewParms* shadowViewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowMapViewParms(const struct GfxSunShadowMapMetrics* mapMetrics, const struct GfxSunShadowProjectionSetup* projSetup, unsigned int partitionIndex, struct GfxViewParms* shadowViewParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetFrustumCornerRays(const struct GfxCamera* camera, float* cornerRays[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_TransformAndBoundFrustumRays(const float* sunAxis[0x3], struct GfxSunShadowFrustumRays* frustumRays)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowSinesAndBoundingArcEdge(struct GfxSunShadowFrustumRays* frustumRays)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowFrustumRays(const struct GfxCamera* camera, const float* sunAxis[0x3], struct GfxSunShadowFrustumRays* frustumRays)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesAlongViewDir_Near(const struct GfxCamera* camera, float nearShadowMinDist, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesAlongViewDir_Far(const struct GfxCamera* camera, float nearShadowMinDist, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForViewDir_Common(const struct GfxCamera* camera, float nearShadowMinDist, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForViewDir_FadeByDistance(const struct GfxCamera* camera, const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForFrustumSides(const float* viewOrg, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForBoundingArc(const float* viewOrg, const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlaneForNearClipPoints(const float* viewOrg, const struct GfxSunShadowProjectionSetup* projSetup, const float* nearClipPoints[0x2], struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_CullSunShadowClipPlane(const struct DpvsPlane* clipPlanes, unsigned int clipPlaneBegin, unsigned int clipPlaneEnd, const float* edgeMidPoint, const float* edgeDir, float edgeHalfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForMapBoundary(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, unsigned int partitionIndex, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlaneForFrustumEdge(const float* viewOrg, const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, unsigned int ray0, unsigned int ray1, float pushoff, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddSunShadowClipPlanesForFrustumBoundary(const float* viewOrg, const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowClip* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapProjection(const struct GfxSunShadowProjectionSetup* projSetup, int hasExplicitFarShadowCenter, const struct GfxSunShadowMapMetrics* mapMetrics, struct GfxSunShadowProjection* sunProj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSnappedSunShadowOrg(struct GfxSunShadowProjectionSetup* projSetup, unsigned int partitionIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetFarSunShadowOrg_ExplicitCenter(struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowMapMetrics* mapMetrics, const float* shadowCenter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunShadowMapBoundingRect(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowMapMetrics* mapMetrics, unsigned int partitionIndex, float* rect[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetFarSunShadowCullingRectangles(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowMapMetrics* mapMetrics, float* rects[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetRayDistRangeInsideSingleRectangle(const float* rayOrg, const float* rayDir, const float* rect[0x2], struct ShadowRayDistRange* distRange)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_GetRayDistInsideRectangleArray(const float* rayOrg, const float* rayDir, const float* rects[0x2], unsigned int rectCount, float* leaveDist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_IsEdgeContainedInRectangleArray(const float* p0, const float* p1, const float* rects[0x2], unsigned int rectCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_GetFarSunShadowNearClipPoints(struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, float* nearClipPoints[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_SetFarSunShadowOrg_NormalCascade(struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, float* nearClipPoints[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowViewports_Common(const struct GfxSunShadowMapMetrics* mapMetrics, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_TrimSunShadowViewportForPartition(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, unsigned int partitionIndex, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_TrimSunShadowViewportForNearClipPoints(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, const float* nearClipPoints[0x2], struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowViewport_Untrimmed(const struct GfxSunShadowMapMetrics* mapMetrics, unsigned int partitionIndex, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowViewports_UseFullMap(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, int hasExplicitFarShadowCenter, int useNearClipPoints, const float* nearClipPoints[0x2], struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetSunShadowViewports_FadeByDistance(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowMapMetrics* mapMetrics, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_InitSunShadowProjectionSetupForFrustum(const struct GfxCamera* camera, const struct GfxSunShadowMapMetrics* mapMetrics, const struct GfxSunShadowFrustumRays* frustumRays, struct GfxSunShadowProjectionSetup* projSetup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapDebugOverlay(const struct GfxSunShadowProjectionSetup* projSetup, const struct GfxSunShadowFrustumRays* frustumRays, const struct GfxSunShadowClip* clip, struct GfxSunShadowOverlaySetup* overlaySetup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapProjectionAndClipPlanes(const struct GfxCamera* camera, const struct GfxSunShadowMapMetrics* mapMetrics, struct GfxSunShadow* sunShadow, struct GfxSunShadowClip* clip, float* partitionFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunShadowLookupMatrix(const struct GfxViewParms* shadowViewParms, const struct GfxSunShadowProjection* sunProj, const float* partitionFraction, unsigned int resolution, unsigned int tileCount, struct GfxMatrix* lookupMatrix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetupSunShadowMapMetrics(const struct GfxViewInfo* viewInfo, struct GfxSunShadowMapMetrics* mapMetrics)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetupSunShadowMaps(struct GfxViewInfo* viewInfo, const struct GfxCamera* camera, struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int R_KeepSunShadowOverlayBorderPoint(const float* point, const float* planes[0x3], unsigned int planeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetSunShadowOverlayBorderPoly(const float* planes[0x3], unsigned int planeCount, const float* clipOrg, float clipScale, float* points[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetSunShadowOverlayFrustumLines(const float* frustumRays[0x2], const float* viewOrg, const float* clipOrg, float clipScale, float* lines[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_GetSunShadowMapOverlayLines(const struct GfxBackEndData* data, const struct GfxSunShadow* sunShadow, struct GfxSunShadowOverlayLines* overlay)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SunShadowMaps(struct GfxSunShadow* sunShadow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_MergeAndEmitSunShadowMapsSurfs(struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__
