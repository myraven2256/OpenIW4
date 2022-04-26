//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static bool CM_SetupTraceCapsuleWork(struct TraceCapsuleWork* work, const float* start, const float* end, const struct Bounds* bounds, const float* origin, const float* angles, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short Trace_GetEntityHitId(const struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short Trace_GetDynEntHitId(const struct trace_t* trace, enum DynEntityDrawType* drawType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short Trace_GetGlassHitId(const struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_GetTraceThreadInfo(struct TraceThreadInfo* threadInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CM_BrushModelIsValid(unsigned int bmodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct cmodel_t* CM_GetBrushModel(unsigned int bmodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_ContentsOfBrushModel(unsigned int bmodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RotatePoint(float* point, const float* matrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TransposeMatrix(const float* matrix[0x3], float* transpose[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestBoxInBrush(const struct traceWork_t* tw, unsigned int brushnum, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestInLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestInLeafBrushNode(struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestInLeaf(struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestCapsuleInCapsule(const struct TraceCapsuleWork* work, const struct Bounds* capsule, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PositionTest(struct traceWork_t* tw, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool intersect_aabb_aabb(struct __vector4 mn1, struct __vector4 mx1, struct __vector4 mn2, struct __vector4 mx2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void intersect_line_box(struct __vector4 P, struct __vector4 D, struct __vector4 lens, struct __vector4& DR)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool intersect_line_aabb(const struct traceWork_t* tw, struct __vector4 mn, struct __vector4 mx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughBrush(const struct traceWork_t* tw, unsigned int brushnum, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughBrushes(const struct traceWork_t* tw, unsigned short* brushesBegin, unsigned short* brushesEnd, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_TraceThroughLeafBrushNode(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughLeaf(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TraceSphereThroughSphere(const struct TraceCapsuleWork* work, const float* start, const float* end, const float* stationary, float radius, int contents, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TraceCylinderThroughCylinder(const struct TraceCapsuleWork* work, const float* stationary, float stationaryHalfHeight, float radius, int contents, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceCapsuleThroughCapsule(const struct TraceCapsuleWork* work, const struct Bounds* capsule, int contents, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_SetAxialCullOnly(struct traceWork_t* tw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_BrushModelTraceSetup(struct traceWork_t* tw, const float* start, const float* end, const struct Bounds* bounds, int brushmask, struct CM_WorldTraceCallbacks* callbacks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_BrushModelTraceFinish(struct traceWork_t* tw, struct trace_t* results, unsigned int bmodelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_BrushModelTraceRotatedCapsule(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, const float* capsuleUp, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks* callbacks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_BrushModelTraceVerticalCapsule(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks* callbacks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_WorldTrace(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, int brushmask, struct CM_WorldTraceCallbacks* callbacks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_WorldTraceSimple_IsGlassSolid(unsigned int glassPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_WorldTraceSimple(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BrushModelIsGlassSolid(unsigned int glassPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBrushModelTraceRotated(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, const float* origin, const float* matrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBrushModelTrace(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedCapsuleTrace(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, const struct Bounds* capsule, int contents, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedBrushModelTraceExternal(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TransformedCapsuleTraceExternal(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, const struct Bounds* capsule, int contents, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughBrush(const struct traceWork_t* tw, unsigned int brushnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeafBrushNode_r(const struct traceWork_t* tw, struct cLeafBrushNode_s* node, const float* p1_, const float* p2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeafBrushNode(const struct traceWork_t* tw, struct cLeaf_t* leaf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughLeaf(const struct traceWork_t* tw, struct cLeaf_t* leaf, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceSphereThroughSphere(const struct TraceCapsuleWork* work, const float* start, const float* stationary, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceCylinderThroughCylinder(const struct TraceCapsuleWork* work, const float* stationary, float stationaryHalfHeight, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceCapsuleThroughCapsule(const struct TraceCapsuleWork* work, const struct Bounds* capsule)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_SightTraceThroughTree(const struct traceWork_t* tw, int num, const float* p1_, const float* p2, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_BrushModelSightTrace(int oldHitNum, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, struct CM_WorldTraceCallbacks* callbacks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_GetBrushBoundsForHitNum(int hitNum, struct Bounds* outBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TransformedBrushModelSightTrace(int hitNum, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TransformedCapsuleSightTrace(const float* start, const float* end, const struct Bounds* bounds, const struct Bounds* capsule, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CM_IsGlassSolid(unsigned int glassPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_TraceCmd(void* cmdData)
{

}

#endif // __UNIMPLEMENTED__
