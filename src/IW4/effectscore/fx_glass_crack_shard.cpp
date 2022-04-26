//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool Glass_IsEdgeLoopBackwards(const struct FxGlassCrackWork* work, const struct FxGlassCrackEdge* edgeLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_HasShardTriangleEdge(const struct FxGlassShardTriangulate* triang, unsigned char i0, unsigned char i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_ShouldKeepFanVert(const struct FxGlassCrackWork* work, const struct FxGlassShardTriangulate* triang, unsigned char i0, unsigned char i1, unsigned char i2, unsigned char pivot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_SimplifyTriangleFan(const struct FxGlassCrackWork* work, struct FxGlassShardTriangulate* triang, unsigned int fanVertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SetupAngleMetric(const struct FxGlassVertex* v0, const struct FxGlassVertex* v1, struct FxGlassCrackAngleEval* angleEval)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Glass_EvaluateEdgeEquationAtPoint(const struct FxGlassShardSeenEdge* seenEdge, const struct FxGlassVertex* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_EvaluatePointVersusBaseEdge(const struct FxGlassCrackWork* work, struct FxGlassShardTriangulate* triang, const struct FxGlassCrackAngleEval* angleEval, unsigned int i)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_CompareEvaluatedPoints(const unsigned int i0, const unsigned int i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_AreEvaluatedPointsColinear(const struct FxGlassShardPointMetric* metric0, const struct FxGlassShardPointMetric* metric1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RemovePointsBehindEdge(const struct FxGlassCrackWork* work, const struct FxGlassShardSeenEdge* seenEdge, unsigned int beginIndex, unsigned int endIndex, unsigned int* pts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_GetShardTriangleFanForBaseEdge(const struct FxGlassCrackWork* work, struct FxGlassShardTriangulate* triang, unsigned char evalTime, unsigned int baseEdge)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_PickShardTriangleFanBaseEdge(const struct FxGlassCrackWork* work, struct FxGlassShardTriangulate* triang, unsigned char evalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_GetShardTriangleFan(const struct FxGlassCrackWork* work, struct FxGlassShardTriangulate* triang, unsigned char evalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_RemoveShardTriangleEdge(struct FxGlassShardTriangulate* triang, unsigned char i0, unsigned char i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_AddShardTriangleEdge(struct FxGlassShardTriangulate* triang, unsigned char i0, unsigned char i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_UpdateShardTriangleEdgesForFan(struct FxGlassShardTriangulate* triang, unsigned int fanVertCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_AddEdgesForLoop(const struct FxGlassCrackWork* work, struct FxGlassCrackEdge* edgeLoop, struct FxGlassShardTriangulate* triang, bool isGoodPivotLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SetupTriangulateShard(const struct FxGlassCrackWork* work, struct FxGlassShard* shard, struct FxGlassShardTriangulate* triang)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RotateBorderVerts(struct FxGlassShard* shard, unsigned int newZeroIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_TriangulateShard(const struct FxGlassCrackWork* work, struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static double Glass_AreaX2AndScaledCentroidForEdgeLoop(const struct FxGlassCrackWork* work, const struct FxGlassCrackEdge* edgeLoop, double* scaledCentroid)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_UpdateLoopDependency(struct FxGlassShard* shard, unsigned int firstLoopIndex, unsigned int ptIndex, const unsigned char* isLoopStart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ReverseLoopsStartingAt(struct FxGlassShard* shard, unsigned int firstLoopIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ExtractHoleEdge(struct FxGlassCrackEdge* holeEdge, struct FxGlassCrackEdge* nextHoleEdge, unsigned char* emitAtIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_ExtractCracksAndHolesFromLoop(const struct FxGlassCrackWork* work, struct FxGlassShard* shard, struct FxGlassCrackEdge* edgeLoop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_ExtractShardCracksAndHoles(struct FxGlassCrackWork* work, struct FxGlassShard* shard, struct FxGlassCrackEdge* const* inLoops, unsigned int inLoopCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_AssertValidLoopOrder(const struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_RotateLoops(struct FxGlassShard* shard, unsigned int i0, unsigned int i1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Glass_SwapLoopParentChildRelationship_r(struct FxGlassShard* shard, unsigned int childIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_ReorderLoops(struct FxGlassShard* shard, unsigned int outerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_SetupShard(const struct FxGlassCrackWork* work, struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_EmitShardVertex(const struct FxGlassCrackWork* work, struct FxGlassShard* shard, unsigned int ptIndex, struct FxGlassVertex* vert)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PackShardBorder(const struct FxGlassCrackWork* work, struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_PackShardHoles(const struct FxGlassCrackWork* work, struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_PackShardCracks(const struct FxGlassCrackWork* work, struct FxGlassShard* shard)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_ConvertLoopsToPiece(struct FxGlassCrackWork* work, struct FxGlassCrackEdge* const* inLoops, unsigned int inLoopCount)
{

}

#endif // __UNIMPLEMENTED__
