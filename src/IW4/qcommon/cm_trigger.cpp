//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int CM_TestTriggerTouch_Slab(const struct TriggerCapsuleTest* test, const float* dir, float midPoint, float halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestTriggerTouch_UnrotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const struct TriggerCapsuleTest* test)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestTriggerTouch_RotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const float* axis[0x3], const struct TriggerCapsuleTest* test)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestTriggerTouch_Unrotated(const struct MapTriggers* triggers, const struct TriggerModel* tmodel, const struct TriggerCapsuleTest* test)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TestTriggerTouch_Rotated(const struct MapTriggers* triggers, const struct TriggerModel* tmodel, const float* axis[0x3], const struct TriggerCapsuleTest* test)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_SetupTriggerTest(const struct Bounds* bounds, const float* origin, const float* angles, struct TriggerCapsuleTest* capsuleOut, float* axisOut[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TestTriggerTouch(const struct Bounds* bounds, unsigned int tmodelIndex, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerHullContainsPoint(const struct MapTriggers* triggers, const struct TriggerHull* thull, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TriggerModelPointContents(unsigned int tmodelIndex, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TestTriggerContainsPoint(unsigned int tmodelIndex, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksStationarySightTrace_Slab(const struct TriggerCapsuleTrace* trace, const float* dir, float midPoint, float halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksStationarySightTrace_UnrotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const struct TriggerCapsuleTrace* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksStationarySightTrace_RotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const float* axis[0x3], const struct TriggerCapsuleTrace* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TriggerModelSightTrace_Slab(const struct TriggerCapsuleTrace* trace, const float* dir, float midPoint, float halfSize, struct TriggerCapsuleTraceResults* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TriggerModelSightTrace_InitResults(struct TriggerCapsuleTraceResults* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelSightTrace_MissedHull(const struct TriggerCapsuleTraceResults* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksSightTrace_UnrotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const struct TriggerCapsuleTrace* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksSightTrace_RotatedHull(const struct MapTriggers* triggers, const struct TriggerHull* thull, const float* axis[0x3], const struct TriggerCapsuleTrace* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksSightTrace_Unrotated(const struct MapTriggers* triggers, const struct TriggerModel* tmodel, const struct TriggerCapsuleTrace* trace, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CM_TriggerModelBlocksSightTrace_Rotated(const struct MapTriggers* triggers, const struct TriggerModel* tmodel, const float* axis[0x3], const struct TriggerCapsuleTrace* trace, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CM_TransformedTriggerModelSightTrace(const float* start, const float* end, const struct Bounds* bounds, unsigned int tmodelIndex, int contentmask, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__
