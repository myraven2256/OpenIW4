//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void Glass_ForceRandomSeed(int seed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_UpdateRandomSeed()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_Random()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_RandomDvarRange(const struct dvar_t* dvar)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RandomSmallAngularVelocity(float* avel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Glass_RandomInt(int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_SetCrackEdgeDelta(const struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_FreeCrackEdge(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_GetFreeEdge(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_AllocCrackEdge(struct FxGlassCrackWork* work, unsigned int i0, unsigned int i1, unsigned int loopIndex, unsigned char edgeType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_AllocCrackEdgeTwin(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* twin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_FreeLoopEdges(struct FxGlassCrackWork* work, struct FxGlassCrackEdge** loops, unsigned int loopCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char Glass_BorderEdgeType(unsigned int supportMask, unsigned int i0)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_UnpackAndAddVertex(struct FxGlassCrackWork* work, struct FxGlassVertex vert)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_GetAngleMetricForDirs(const float* baseDir, const float* testDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_FindExistingEdgeBeforeNewEdge(struct FxGlassCrackWork* work, unsigned int i0, unsigned int i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeOuterPieceLoop(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeHolePieceLoops(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RenumberLoop(struct FxGlassCrackEdge* edgeLoop, unsigned char newLoopIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeCrackPieceLoops(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_CalcLoopBounds(struct FxGlassCrackWork* work, struct FxGlassCrackLoop* loop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_CalcAllLoopBounds(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakePieceLoops(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_InertiaScale(float areaX2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_SchedulePieceToFall(const struct FxGlassCrackWork* work, const struct FxGlassShard* shard, struct FxGlassPieceDynamics* pieceDynamics)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_GetVertWorldPos(struct FxGlassVertex vert, const float* origin, const float* axis[0x3], float* pos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_AddHingeVert(const float* worldVertPos, float* hingeVertPos[0x3], unsigned int hingeCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_ShouldMakeHingeJoint(const float* hingeStart, const float* hingeDir, float hingeLen, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_CreatePieceJoint(struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RotatePieceAroundEdge(const struct FxGlassCrackWork* work, const struct FxGlassShard* shard, union FxGlassPiecePlace* piecePlace, const struct FxGlassCrackEdge* pivotEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_SetupPieceFall(struct FxGlassSystem* glassSys, unsigned int pieceIndex, const float* vel, const float* avel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_StartImmediateFall(const struct FxGlassCrackWork* work, unsigned int newPieceIndex, unsigned int basePieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SetupDynamics(const struct FxGlassCrackWork* work, const struct FxGlassShard* shard, unsigned int newPieceIndex, unsigned int basePieceIndex, const struct FxGlassCrackEdge* pivotEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_StartDelayedFall(struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ConsiderBreakingPiece(struct FxGlassCrackWork* work, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_FinalizeShard(struct FxGlassCrackWork* work, const struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_AssertDirIsInArc(const float* dir, const float* edge0, const float* edge1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PushCrackBranch(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* afterEdge, const float* dir, float len, const float* baseDir, float deflectLimit, float priorCrackLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct FxGlassCrackBranch* Glass_PopCrackBranch(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_ShouldSplitCrack(const struct FxGlassCrackWork* work, unsigned int segmentsSinceSplit)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_CrackLengthScale()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DeflectVectorWithSign(float cosMin, float cosMax, float sign, const float* dirIn, float* dirOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DeflectVector(float cosMin, float cosMax, const float* dirIn, float* dirOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_DoesSegmentIntersectEitherEdge(const struct FxGlassCrackWork* work, const float* start, const float* end, const struct FxGlassCrackEdge* edgePrev, const struct FxGlassCrackEdge* edge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_WantToUseDeflection(const struct FxGlassClipSegment* clip, const struct FxGlassCrackEdge* edgeIter, const float* delta, float perpDistClipStartToEdge, float deflectLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_UseDeflection(const struct FxGlassCrackWork* work, const struct FxGlassClipSegment* clip, unsigned int snapIndex, const struct FxGlassCrackEdge* edgeIter, const float* delta, float perpDistClipStartToEdge, float deflectLen)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_TraceCrackAgainstEdge(struct FxGlassCrackWork* work, struct FxGlassClipSegment* clip, const float* start, struct FxGlassCrackEdge* edgeIter, struct FxGlassCrackEdge* edgeIterPrev)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ClipSegmentWithinEdgeLoop(struct FxGlassCrackWork* work, struct FxGlassClipSegment* clip, struct FxGlassCrackEdge* edgeLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ClipSegment(struct FxGlassCrackWork* work, struct FxGlassClipSegment* clip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SplitTwin(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edge01, struct FxGlassCrackEdge* edge12)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_DoCrackWalk(struct FxGlassCrackWork* work, struct FxGlassCrackWalk* walk)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeFinalPiece(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakePiece(struct FxGlassCrackWork* work, struct FxGlassCrackEdge** loops, unsigned int loopCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_IsPointInEdgeLoop(const struct FxGlassCrackWork* work, const float* point, const struct FxGlassCrackEdge* edgeLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_IsEdgeTwinInLoopIndex(const struct FxGlassCrackEdge* edge, unsigned int loopIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_DoesLoopContainLoop(const struct FxGlassCrackWork* work, const struct FxGlassCrackLoop* outerLoop, const struct FxGlassCrackLoop* innerLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakePieceForOuterLoop(struct FxGlassCrackWork* work, unsigned int otherPieceLoopIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SplitLoop(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edge0, struct FxGlassCrackEdge* edge1, unsigned int loopIndex1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ProcessCrack(struct FxGlassCrackWork* work, const struct FxGlassCrackBranch* branch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_EvaluateSeedDirToEdge(const struct FxGlassCrackWork* work, const struct FxGlassCrackEdge* edgeIter, const float* deltaOrg, float* s, float* distSq)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_SnapSeedDirToEdge(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* hitEdgePrev, float hitEdgeLen, float minDistSq, float* breakOrg, float* seedDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PickSeedDirForLoop(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edgeLoop, const float* breakOrg, struct FxGlassSeedDirResults* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct FxGlassCrackEdge* Glass_PickSeedDir(struct FxGlassCrackWork* work, float* seedDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_InitialCrackLength()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_GetDeflectLimit(float cosAngleDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Glass_GetCornerInteriorAngle(const float* delta_p0_p1, const float* delta_p1_p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_CreateCracks(struct FxGlassCrackWork* work)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PrintCrackAssertFloat(float f, const char* suffix)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const union FxGlassGeometryData* Glass_PrintCrackAssertArray(const char* headerMsg, unsigned int dataCount, const union FxGlassGeometryData* geoData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PrintCrackPieceAssertReproData()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_CrackPiece(struct FxGlassCrackWork* work, struct FxGlassSystem* glassSys, unsigned int pieceIndex, const float* axis[0x3], const struct FxGlassVertex breakOrg, const float* breakDir, float avgCrackLength)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_GetRandomVertex(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* axis[0x3], struct FxGlassVertex* vertex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_GetVertexForPos(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* impactPos, float* axis[0x3], int* quantizedPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_GetVertexForImpact(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* axis[0x3], struct FxGlassVertex* vertex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PlaySingleShatterEffect(const struct FxEffectDef* fx, const float* center, const float* axis[0x3], const float* dir, const int* pt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PlayShatterEffects(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* axis[0x3], float* shatterDir, float maxEffects)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CompareFringePieceArea(const unsigned short& index0, const unsigned short& index1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DestroyPiece(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* impactPos, float* impactDir, struct Glass_BreakData* breakData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DestroySimplePiece(struct FxGlassSystem* glassSys, unsigned int pieceIndex, float* impactPos, float* impactDir, const float* playerOrigin)
{

}

#endif // __UNIMPLEMENTED__
