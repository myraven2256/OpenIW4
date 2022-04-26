//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_rb_backend()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const void* RB_NextRenderCmd(const void* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_AdvanceToNextRenderCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_SetIdentity()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetVertex2d(struct GfxVertex* vert, float x, float y, float s, float t, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetVertex3d(struct GfxVertex* vert, float x, float y, float z, float s, float t, const unsigned char* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_SetVertex4d(struct GfxVertex* vert, float x, float y, float z, float w, float s, float t, const unsigned char* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SetVertex4dWithNormal(struct GfxVertex* vert, float x, float y, float z, float w, float nx, float ny, float nz, float s, float t, const unsigned char* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawStretchPic(const struct Material* material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget primStatsTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawStretchPicFlipST(const struct Material* material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned long color, enum GfxPrimStatsTarget primStatsTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawStretchPicRotate(const struct Material* material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, float sinAngle, float cosAngle, unsigned long color, enum GfxPrimStatsTarget primStatsTarget)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawFullScreenColoredQuad(const struct Material* material, float s0, float t0, float s1, float t1, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_FullScreenColoredFilter(const struct Material* material, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SplitScreenTexCoords(float x, float y, float w, float h, float* s0, float* t0, float* s1, float* t1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_SplitScreenFilter(const struct Material* material, const struct GfxViewInfo* viewInfo, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_FullScreenFilter(const struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool RB_IsViewFullScreen(const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_Filter(const struct Material* material, const struct GfxViewInfo* viewInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_ViewportColoredFilter(const struct Material* material, unsigned long color, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_ViewportFilter(const struct Material* material, const struct GfxViewport* viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveAndClear_Xbox360(struct D3DDevice* device, struct GfxImage* image, unsigned long resolveFlags, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float* color, float depth, unsigned char stencil, struct _D3DRECT* sourceRect, struct _D3DPOINT* destPoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveAndClearFull_Xbox360(struct GfxCmdBufContext context, struct GfxImage* image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float* color, float depth, unsigned char stencil)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawStretchPicForResolve(struct GfxImage* image, float x, float y, float w, float h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveAndClearPartial_Xbox360(struct GfxCmdBufContext context, struct GfxImage* image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float* color, float depth, unsigned char stencil, struct GfxViewport viewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveDepthFull_Xbox360(struct GfxCmdBufContext context, enum GfxRenderTargetId renderTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveSpecificDepthFull_Xbox360(struct GfxCmdBufContext context, struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveAndClearSection_Xbox360(struct GfxCmdBufContext context, struct GfxImage* image, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float* color, float depth, unsigned char stencil, float s0, float t0, float s1, float t1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResolveAndClearRenderTarget(struct GfxCmdBufContext context, unsigned char whichToClear, enum _D3DFORMAT colorFormat, const float* color, float depth, unsigned char stencil)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResolveShadowmap(struct GfxCmdBufState* state, const struct GfxViewport* sourceViewport, unsigned int destX, unsigned int destY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_Resolve(struct GfxCmdBufContext context, struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResolvePartial(struct GfxCmdBufContext context, struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_ResolveSection(struct GfxCmdBufContext context, struct GfxImage* image, float s0, float t0, float ds, float dt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResolveFloatZ(struct GfxCmdBufContext context, enum GfxRenderTargetId renderTargetId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ResolveSpecificFloatZ(struct GfxCmdBufContext context, struct GfxImage* image)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchPicCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchPicCmdFlipST(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchPicRotateXYCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchPicRotateSTCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawQuadPicCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawFullScreenColoredQuadCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchRaw(int x, int y, int w, int h, int cols, int rows, const unsigned char* data, int client, int dirty)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_StretchRawCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_RenderDrawGroup_SetupFirstPass(struct GfxDrawListArgs* listArgs, union GfxDrawGroupSetup drawGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_RenderDrawGroup_SetupSecondPass(struct GfxDrawListArgs* listArgs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_RenderDrawGroup_Finish(struct GfxDrawListArgs* listArgs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxBspSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxBspSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxBspLightMapSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxBspLightMapSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxSModelRigidSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxSModelRigidSurfIter* smodelSurfIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxDrawSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxDrawSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxCodeSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxCodeSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxMarkSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxMarkSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxGlassSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxGlassSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxCloudSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxCloudSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public void GfxSparkSurfTessCallback::Tess(struct GfxDrawListArgs* listArgs, struct GfxSparkSurfIter* iter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_RenderDrawGroup_FromSurfList<GfxBspSurfTessCallback,GfxBspSurfIter>(struct GfxDrawListArgs* listArgs, struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_RenderDrawGroupNoRender_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_Savemark_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool R_Terminate_FromSurfList<GfxBspNoSunShadowsSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_TessEnd(struct GfxCmdBufContext context, struct GfxCmdBufContext prepassContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_InitListArgs(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawListInfo* listInfo, struct GfxDrawListArgs* listArgsOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_Begin(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawListInfo* listInfo, struct GfxDrawListArgs* listArgsOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_End(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_InsertionSortHeadIterator(struct GfxSurfsIterator* iterators, unsigned int iteratorCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_SortIterators(struct GfxSurfsIterator* iterators, unsigned int iteratorCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetDrawGroupSortKey<GfxBspSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetDrawGroupSortKey<GfxDrawSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddDrawGroupIterator_DrawGroupSortKey<GfxBspSurfTessCallback,GfxBspSurfIter>(struct GfxSpliceSurfs* spliceSurfs, unsigned int spliceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_GetPrimarySortKey<GfxBspSurfIter>(struct GfxDrawListIter* drawListIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddDrawGroupIterator_PrimarySortKey<GfxBspSurfTessCallback,GfxBspSurfIter>(struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_AddDrawGroupIterator_PrimarySortKey_NoSunShadows<GfxBspSurfTessCallback,GfxBspNoSunShadowsSurfIter>(struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_SetupIteratorList_DrawGroupSortKey(const struct GfxDrawList* drawList, struct GfxSpliceSurfs* spliceSurfs, unsigned int spliceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_SetupIteratorList_PrimarySortKey(const struct GfxDrawList* drawList, struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_SetupIteratorList_PrimarySortKey_NoSunShadows(const struct GfxDrawList* drawList, struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int R_DrawSurfs_Iterate_Sorted_NoRender(struct GfxSurfsIterGroup* iterGroup, unsigned int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_SplitIterGroup(struct GfxSurfsIterGroup* iterGroup0, struct GfxSurfsIterGroup* iterGroup1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_CmdBuf_Exceeded(struct GfxCmdRingBuf* cmdBuf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_Iterate_ByType(struct GfxDrawListArgs* listArgs, struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_Iterate_Sorted(struct GfxDrawListArgs* listArgs, struct GfxSurfsIterGroup* iterGroup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_DrawSurfs_Iterate_SortedSpliceGroups(struct GfxDrawListArgs* listArgsArray, struct GfxSpliceSurfs* spliceSurfs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_Camera(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawList* drawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_Camera_NoSunShadows(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawList* drawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void R_GetDynLightScissorViewport(const struct GfxLight* dynLight, const struct GfxViewInfo* viewInfo, struct GfxViewport* scissorViewport)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_SetupGfxSpliceSurfs_DrawGroupSortKey(const struct GfxBackEndData* data, const struct GfxViewInfo* viewInfo, const struct GfxDrawList* drawList, struct GfxSpliceSurfs* spliceSurfs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_LitTransAndDynLights(const struct GfxViewInfo* viewInfo, struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawList* drawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_Prepass(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, struct GfxSurfsIterGroup* iterGroupRef, const struct GfxDrawList* drawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_DrawSurfs_Unsorted(struct GfxCmdBufContext context, struct GfxCmdBufState* prepassState, const struct GfxDrawList* drawList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_ClearScreenCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_SetGammaRamp(const struct GfxGammaRamp* gammaTable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SaveScreenCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SaveScreenSectionCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_BlendSavedScreenBlurredCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_BlendSavedScreenFlashedCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawPoints2D(const struct GfxCmdDrawPoints* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawPoints3D(const struct GfxCmdDrawPoints* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawPointsCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawLines2D(int count, int width, const struct GfxPointVertex* verts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawLines3D(int count, int width, const struct GfxPointVertex* verts, bool depthTest)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawLinesCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawTriangles_Internal(const struct Material* material, enum MaterialTechniqueType techType, unsigned char dimensions, short indexCount, const unsigned short* indices, short vertexCount, const float* xyzw[0x4], const float* normal[0x3], const union GfxColor* color, const float* st[0x2])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawTrianglesCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawProfileCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetMaterialColorCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetViewportCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SetScissorCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_ClearScissorCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_LookupColor(unsigned char c, unsigned char* color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float RB_DrawHudIcon(const char* text, float x, float y, float sinAngle, float cosAngle, struct Font_s* font, float xScale, float yScale, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ValidGamePadButtonIcon(unsigned int letter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned long RB_ProcessLetterColor(unsigned long color, unsigned int letter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawChar(const struct Material* material, float x, float y, float w, float h, float sinAngle, float cosAngle, const struct Glyph* glyph, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawCursor(const struct Material* material, unsigned char cursor, float x, float y, float sinAngle, float cosAngle, struct Font_s* font, float xScale, float yScale, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RotateXY(float cosAngle, float sinAngle, float pivotX, float pivotY, float x, float y, float* outX, float* outY)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float GetMonospaceWidth(struct Font_s* font, int renderFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GlowColor(union GfxColor* result, union GfxColor baseColor, union GfxColor forcedGlowColor, int renderFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetupPulseFXVars(const char* text, int maxLength, int renderFlags, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, bool* resultDrawRandChar, int* resultRandSeed, int* resultMaxLength, bool* resultDecaying, int* resultdecayTimeElapsed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetDecayingLetterInfo(unsigned int letter, struct Font_s* font, int* randSeed, int decayTimeElapsed, int fxBirthTime, int fxDecayDuration, unsigned char alpha, bool* resultSkipDrawing, unsigned char* resultAlpha, unsigned int* resultLetter, bool* resultDrawExtraFxChar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawTextFxExtraCharacter(const struct Material* material, int charIndex, float x, float y, float w, float h, float sinAngle, float cosAngle, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char ModulateByteColors(unsigned char colorA, unsigned char colorB)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawText2D(const char* text, float x, float y, struct Font_s* font, float xScale, float yScale, float sinAngle, float cosAngle, const union GfxColor color, int maxLength, int renderFlags, int cursorPos, char cursorLetter, float padding, union GfxColor glowForcedColor, int fxBirthTime, int fxLetterTime, int fxDecayStartTime, int fxDecayDuration, const struct Material* fxMaterial, const struct Material* fxMaterialGlow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawText(const char* text, struct Font_s* font, float x, float y, const union GfxColor color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawCharInSpace(const struct Material* material, const float* xyz, const float* dx, const float* dy, const struct Glyph* glyph, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_DrawTextInSpace(const char* text, struct Font_s* font, const float* org, const float* xPixelStep, const float* yPixelStep, unsigned long color)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawText2DCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_DrawText3DCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_ProjectionSetCmd(struct GfxRenderCommandExecState* execState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_BeginFrame(const void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_SwapBuffers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_EndFrame(unsigned int drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_UpdateBackEndDvarOptions()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_ExecuteRenderCommandsLoop(const void* cmds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_Draw3D()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int RB_SwapTimeout()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_CallExecuteRenderCommands()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_RenderCommandFrame(const void* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AcquireDeviceOwnership()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_TryAcquireDeviceOwnership(int* waitedForFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ReleaseDeviceOwnership()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int R_HasDeviceOwnership()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_ShowDirtyDiscError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ShowDirtyDiscError()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum BladeErrorResponse R_BladeErrorDisplay(const char* errorMessage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_BladeErrorHandleResponse(enum BladeErrorResponse response)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_RenderThreadIdle()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_RenderThread(unsigned int threadContext)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_InitBackendGlobalStructs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_InitCodeConstants()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_SetBspImages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RB_InitSingleCodeImage(unsigned int codeTexture, const struct GfxImage* image, unsigned char samplerState, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_InitCodeImages()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void RB_RegisterBackendAssets()
{

}

#endif // __UNIMPLEMENTED__
