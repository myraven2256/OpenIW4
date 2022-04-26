//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

union FxGlassPiecePlace* Glass_Prefetch<FxGlassPiecePlace>(union FxGlassPiecePlace* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

union FxGlassGeometryData* Glass_PrefetchArray<FxGlassGeometryData>(union FxGlassGeometryData* data, unsigned int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_WaitPrefetch<FxGlassGeometryData>(const union FxGlassGeometryData* data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const union FxGlassPiecePlace* Glass_PrefetchPiecePlaceIndex(const struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct FxGlassPieceState* Glass_PrefetchPieceStateIndex(const struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const float* Glass_PrefetchHalfThicknessIndex(const struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct FxGlassDef* Glass_PrefetchDefFromIndex(const struct FxGlassSystem* glassSys, unsigned int defIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const union FxGlassGeometryData* Glass_PrefetchGeoData(const struct FxGlassSystem* glassSys, unsigned int firstGeoIndex, unsigned int geoCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short* Glass_PrefetchLightingHandles(const struct FxGlassSystem* glassSys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct FxGlassInitPieceState* Glass_PrefetchInitPieceState(const struct FxGlassSystem* glassSys, unsigned int initIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_GetBufferReserveCounts(const struct FxGlassPieceState* pieceState, const union FxGlassGeometryData* geoData, unsigned int drawFlags, unsigned int* reserveVertCount, unsigned int* reserveIndexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_TransformVertexArray(struct FxGlassDrawState* drawState, const struct FxGlassVertex* vertArray, unsigned int vertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_TransformHoleVertices(struct FxGlassDrawState* drawState, const union FxGlassGeometryData* geoData, unsigned int holeDataCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeFaceVerts(struct FxGlassDrawState* drawState, const struct FxGlassFaceDef* faceDef, unsigned int vertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeSimpleFanFaceIndices(unsigned int vertCount, unsigned short baseVertex, int i1, int i2, struct r_double_index_t* dstTri)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_MakeFaceIndices(const struct FxGlassDrawState* drawState, unsigned int borderVertCount, const union FxGlassGeometryData* geoData, unsigned int fanDataCount, int i1, int i2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_TestCamAgainstBorderSegmentPlane(const struct FxGlassDrawState* drawState, const float* camOrg, unsigned int i1, unsigned int i2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DrawBorderSegment(struct FxGlassDrawState* drawState, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_DrawBorderSegmentIfVisible(struct FxGlassDrawState* drawState, const float* camOrg, unsigned int i0, unsigned int i1, unsigned int i2, unsigned int i3, bool usedLastEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeBorderGeometry(struct FxGlassDrawState* drawState, const float* camOrg, unsigned int supportMask, unsigned int firstVert, unsigned int vertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeSingleHoleBorderGeometry(struct FxGlassDrawState* drawState, const float* camOrg, unsigned int firstVert, unsigned int touchVert, unsigned int uniqueVertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeAllHoleBorderGeometry(struct FxGlassDrawState* drawState, const float* camOrg, const union FxGlassGeometryData* geoData, unsigned int holeDataCount, unsigned int firstVert)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeAllCrackBorderGeometry(struct FxGlassDrawState* drawState, const float* camOrg, const union FxGlassGeometryData* geoData, unsigned int crackDataCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeFaceGeometry(struct FxGlassDrawState* drawState, const float* camOrg, unsigned int vertCount, const union FxGlassGeometryData* geoData, unsigned int fanCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakePieceGeometry(struct FxGlassDrawState* drawState, const union FxGlassPiecePlace* piecePlace, const struct FxGlassPieceState* pieceState, const struct FxGlassDef* def, const union FxGlassGeometryData* geoData, const float* camOrg, unsigned int drawFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DrawPiece(unsigned int pieceIndex, const union FxGlassPiecePlace* piecePlace, const struct FxGlassPieceState* pieceState, const struct FxGlassDef* def, const union FxGlassGeometryData* geoData, unsigned short lightingHandle, const struct GfxLightingInfo* lightingInfo, const struct FxGlassInitPieceState* initPieceState, struct FxGenerateGlassVertsCmd* cmd, unsigned int drawFlags, float* glassDist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_GenerateVerts(const struct FxGlassSystem* glassSys, struct FxGlassVisInfo* visInfo, struct FxGenerateGlassVertsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_CompareVisRefs(struct FxGlassPieceVisRef& visRef0, struct FxGlassPieceVisRef& visRef1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GlassUpdatePieceLightingCmd(struct FxGlassPieceLightingCmd* lightingCmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GlassTris_AddGlassPieceVerts(const struct FxGlassSystem* glassSys, const struct FxGlassDef* def, const struct FxGlassPieceState* pieceState, const union FxGlassPiecePlace* piecePlace, const union FxGlassGeometryData* geoData, float* axis[0x3], float side, float* verts[0x3], unsigned int* vertIndex, unsigned int maxVerts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GlassTris_AddGlassPieceTris(const struct FxGlassSystem* glassSys, const struct FxGlassDef* def, const struct FxGlassPieceState* pieceState, const union FxGlassPiecePlace* piecePlace, const union FxGlassGeometryData* geoData, float* axis[0x3], float side, unsigned int startVertIndex, struct GlassTri* tris, unsigned int* triIndex, unsigned int maxTris)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GlassTris_AddGlassPiece(const struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* normal, struct GlassTri* tris, unsigned int* triIndex, unsigned int maxTris, float* verts[0x3], unsigned int* vertIndex, unsigned int maxVerts, float* glassNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_GlassTrisInPiece(unsigned int pieceIndex, float* normal, struct GlassTri* tris, unsigned int maxTris, float* verts[0x3], unsigned int maxVerts, unsigned int* triCount, float* glassNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_GlassPiecesInSphere(struct Sphere* sphere, unsigned short* pieceIndices, unsigned int maxPieces, unsigned int* pieceCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct Material* FX_GlassPieceMaterial(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateGlassVertsCmd(struct FxGenerateGlassVertsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__
