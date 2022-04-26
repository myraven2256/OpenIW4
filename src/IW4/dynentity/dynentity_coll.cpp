//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_DynEntityCollWorld()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DynEntityCollWorld* DynEnt_GetCollWorld(enum DynEntityCollType collType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DynEntityCollSector* DynEnt_GetCollSector(enum DynEntityCollType collType, unsigned int sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ClearCollWorld(enum DynEntityCollType collType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_Validate(enum DynEntityCollType collType, const struct DynEntityColl* dynEntColl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_ValidateWorldSector_r(enum DynEntityCollType collType, unsigned short sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ValidateCollWorldClient()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawDebugBox2D(float* mins, float* maxs, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_DrawCollSector(struct DynEntityCollWorld* world, float height, float* mins, float* maxs, struct DynEntityCollSector* sector)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_DrawCollWorld(enum DynEntityCollType collType, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short DynEnt_AllocCollSector(enum DynEntityCollType collType, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_AddToCollSector(enum DynEntityCollType collType, unsigned int dynEntId, unsigned short sectorIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_SortCollSector(enum DynEntityCollType collType, unsigned short sectorIndex, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_UnlinkEntity(enum DynEntityCollType collType, unsigned int dynEntId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_LinkEntity(enum DynEntityCollType collType, unsigned int dynEntId, const float* absMins, const float* absMaxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DynEnt_GetContents(const struct DynEntityDef* dynEntDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DynEnt_GetLocalBounds(const struct DynEntityDef* dynEntDef, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DynEnt_GetSphereDist(const struct DynEntityPose* dynEntPose, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DynEnt_GetCylinderDist(const struct DynEntityPose* dynEntPose, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEnt_IsInCone(const struct DynEntityDef* dynEntDef, const struct GfxPlacement* pose, const float* origin, float coneAngleCos, const float* coneDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEnt_EntityInSphere(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct DynEntityAreaParms* areaParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DynEnt_EntityInCylinder(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct DynEntityAreaParms* areaParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_PointTraceToModel(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_PointTraceToBrush(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct pointtrace_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_ClipMoveTraceToBrush(const struct DynEntityDef* dynEntDef, const struct DynEntityPose* dynEntPose, const struct moveclip_t* clip, struct trace_t* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DynEnt_SetPhysObjCollision(const struct DynEntityDef* dynEntDef, int physId, bool loadingSaveGame)
{

}

#endif // __UNIMPLEMENTED__
