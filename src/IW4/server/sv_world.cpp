//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int SV_ContentsForEntity(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_UnlinkEntity(struct gentity_s* gEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SnapAngles(float* vAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_LinkEntity(struct gentity_s* gEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ClipMoveToEntity(const struct moveclip_t* clip, struct svEntity_s* check, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj* SV_LocationalTraceDObj(const struct pointtrace_t* clip, const struct gentity_s* touch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj* SV_LocationalSightTraceDObj(const struct sightpointtrace_t* clip, const struct gentity_s* touch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_PointTraceToEntity(const struct pointtrace_t* clip, struct svEntity_s* check, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int SV_EntityBlocksSightTrace(const float* start, const float* end, const struct Bounds* bounds, int contentmask, const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_ClipSightToEntity(const struct sightclip_t* clip, struct svEntity_s* check)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_PointSightTraceToEntity(const struct sightpointtrace_t* clip, struct svEntity_s* check)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetupIgnoreEntParams(struct IgnoreEntParams* ignoreEntParams, int baseEntity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_WorldTrace(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Trace(struct trace_t* results, const float* start, const float* end, const struct Bounds* bounds, const struct IgnoreEntParams* ignoreEntParams, int contentmask, int locational, unsigned char* priorityMap, int staticmodels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_BrushModelSightTrace(int oldHitNum, const float* start, const float* end, const struct Bounds* bounds, unsigned int bmodelIndex, int brushmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_TracePassed(const float* start, const float* end, const struct Bounds* bounds, int passEntityNum0, int passEntityNum1, int contentmask, int locational, unsigned char* priorityMap, int staticmodels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SightTrace(int* hitNum, const float* start, const float* end, const struct Bounds* bounds, int passEntityNum0, int passEntityNum1, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_SightTraceToEntity(const float* start, const float* end, int entityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_SightTraceToEntityWithBounds(const float* start, const float* end, const struct Bounds* bounds, int entityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_LocationalTraceToEntity(struct trace_t* results, const float* start, const float* end, int entIndex, int contentMask, unsigned char* priorityMap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_PointContents(const float* p, int passEntityNum, int contentmask)
{

}

#endif // __UNIMPLEMENTED__
