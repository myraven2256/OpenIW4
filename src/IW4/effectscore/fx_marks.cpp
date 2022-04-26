//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int FX_GetDobjModelGlobalBoneBase(const struct DObj* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_fx_marks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_InitMarksBuffers(int localClientNum, struct FxMarksSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_InitMarksSystem(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ClearMarks(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkTriGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkPointGroups(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMarkFromList(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short* listHead)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeMark(struct FxMarksSystem* marksSystem, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeRewoundMarks(struct FxMarksSystem* marksSystem, int cutoffTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FreeLruMark(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short FX_AllocMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* markTris, int triCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short FX_AllocMarkPoints(struct FxMarksSystem* marksSystem, int pointCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FindSpotForMark(unsigned short& outSpotMarkPrev, unsigned short*& outSpotHandlePrev, struct FxMarksSystem* marksSystem, unsigned short* head, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_LinkMarkIntoList(struct FxMarksSystem* marksSystem, unsigned short* head, struct FxMark* mark)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_CopyMarkTris(struct FxMarksSystem* marksSystem, const struct FxMarkTri* srcTris, unsigned short dstGroupHandle, int triCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_CopyMarkPoints(struct FxMarksSystem* marksSystem, const struct FxMarkPoint* srcPoints, unsigned short dstGroupHandle, int pointCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short FX_FindModelHead(struct FxMarksSystem* marksSystem, unsigned short modelIndex, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_MarkContextsCompare(const struct GfxMarkContext* context0, const struct GfxMarkContext* context1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_CompareMarkTris(const struct FxMarkTri& tri0, const struct FxMarkTri& tri1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_AllocAndConstructMark(int localClientNum, int triCount, int pointCount, struct Material* material, unsigned char fadeInfo, struct FxMarkTri* markTris, const struct FxMarkPoint* markPoints, const float* origin, float radius, const float* texCoordAxis, const unsigned char* nativeColor, int viewmodelClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_AddEntityBrush(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_AddEntityModel(int localClientNum, struct MarkInfo* markInfo, unsigned int entityIndex, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_AddViewmodel(int localClientNum, struct MarkInfo* markInfo, const float* origin, float radius, int viewmodelClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate_Callback(void* context, int triCount, struct FxMarkTri* tris, int pointCount, struct FxMarkPoint* points, const float* markOrigin, const float* markTexCoordAxis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark_Generate(struct MarkInfo* markInfo, int localClientNum, enum MarkFragmentsAgainstEnum markAgainst, struct Material* material, unsigned char fadeInfo, const float* origin, const float* axis[0x3], float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ImpactMark(int localClientNum, struct Material* worldMaterial, struct Material* modelMaterial, unsigned char fadeInfo, const float* origin, const float* quat, float orientation, const unsigned char* nativeColor, float radius, unsigned int markEntnum, bool markGivenModelsOnly, bool markViewmodel, int viewmodelClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginMarks(int clientIndex, int serverTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_CreateImpactMark(int localClientNum, const struct FxElemDef* elemDef, const struct FxSpatialFrame* spatialFrame, int randomSeed, unsigned int markEntnum, bool markViewmodel, bool markGivenModelsOnly, int viewmodelClientIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntDetachAll(int localClientNum, int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkGlassDetachAll(int localClientNum, int glassPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntDetachAllOfType(int localClientNum, int entnum, int markType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntUpdateBegin(struct FxMarkDObjUpdateContext* context, struct DObj* obj, bool isBrush, unsigned short brushIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntDetachModel(struct FxMarksSystem* marksSystem, int entnum, int oldModelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MarkEntUpdateEndDObj(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_MarkEntUpdateEnd(struct FxMarkDObjUpdateContext* context, int localClientNum, int entnum, struct DObj* obj, bool isBrush, unsigned short brushIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_MoveMarkBetweenLists(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short* listHeadFrom, unsigned short* listHeadTo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_TransferDObjMarksFromEntToEnt(int localClientNum, int entnumFrom, struct DObj* objFrom, int entnumTo, const struct XModel* modelTo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FX_GetMarkViewmodelClientIndex(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ClearViewmodelMarks(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void setTexCoordAndLMap<GfxWorldVertex>(struct GfxWorldVertex* outVert, const float* texCoord, const float* lmapCoord)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_GetColor(const struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned char* outColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVert_NoTransform<GfxWorldVertex>(struct GfxWorldVertex* outVert, unsigned char* color, const float texCoordScale, const struct FxMark* mark, const struct FxMarkPoint* markPoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVert_Transform<GfxWorldVertex>(struct GfxWorldVertex* outVert, unsigned char* color, const float texCoordScale, const struct FxMark* mark, const struct FxMarkPoint* markPoint, const float* matrixTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVert_Glass<GfxWorldVertex>(struct GfxWorldVertex* outVert, unsigned char* color, const float* translate, const float normalScale, const float texCoordScale, const struct FxMark* mark, const struct FxMarkPoint* markPoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_NoTransform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_Transform<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, const float* matrixTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_ExpandMarkVerts_Glass<GfxWorldVertex>(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, const float normalScale, const float* translate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_AddMarkTrisToScene(const struct FxActiveMarkSurf* outSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_EmitMarkTri(struct FxMarksSystem* marksSystem, const unsigned short* indices, unsigned short baseVertex, struct FxActiveMarkSurf* outSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawMarkTris(struct FxMarksSystem* marksSystem, const struct FxMark* mark, unsigned short baseVertex, unsigned short* indices, struct FxActiveMarkSurf* outSurf, unsigned short lighthandleOverride, unsigned char reflectionProbeOverride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForMark_Begin(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short markHandle, unsigned int* indexCount, unsigned short* outBaseVertex, struct FxActiveMarkSurf* outDrawSurf, unsigned short lighthandleOverride, unsigned char reflectionProbeOverride)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_FinishNonAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_FinishAnimated(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf, const float* transform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_FinishGlass(struct FxMarksSystem* marksSystem, struct FxMark* mark, unsigned short baseVertex, struct FxActiveMarkSurf* drawSurf, float normalScale, float* translate)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromPlacement(const struct GfxPlacement* placement, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromScaledPlacement(const struct GfxScaledPlacement* placement, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForMark_MatrixFromAnim(struct FxMark* mark, const struct DObj* dobj, const struct DObjAnimMat* boneMtx, const float* viewOffset, float* outTransform[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_GenerateMarkVertsForList_EntDObj(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj* dobj, const struct DObjAnimMat* boneMtxList, unsigned int* hidePartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_EntXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount, unsigned short lightHandleOverride, unsigned char reflectionProbeIndexOverride, const struct DObj* dobj, const struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_EntBrush(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, unsigned short head, unsigned int* indexCount, const struct GfxPlacement* placement, unsigned char reflectionProbeIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_WorldXModel(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_Glass(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool FX_GenerateMarkVertsForList_WorldBrush(struct FxMarksSystem* marksSystem, unsigned short head, const struct FxCamera* camera, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_BeginGeneratingMarkVerts(struct FxMarksSystem* marksSystem, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_FinishGeneratingMarkVerts(struct FxMarksSystem* marksSystem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntXModel(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct GfxScaledPlacement* placement, const struct DObj* dobj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntDObj_internal(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj* remoteDObj, unsigned short entMarkListHead)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntDObj(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, int entId, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj* remoteDobj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForViewmodelDObj(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, int viewmodelClientIndex, unsigned int* indexCount, unsigned short lightHandle, unsigned char reflectionProbeIndex, const struct DObj* remoteDobj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForEntBrush(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, int entId, unsigned int* indexCount, unsigned char reflectionProbeIndex, const struct GfxPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForStaticModels(struct FxMarksSystem* marksSystem, const struct FxCamera* camera, int localClientNum, int smodelCount, const unsigned char* smodelVisLods, unsigned int* indexCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsForGlass(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateDynMarkVertsCmd(struct FxGenerateModelMarksCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_GenerateMarkVertsCmd(struct FxGenerateVertsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__
