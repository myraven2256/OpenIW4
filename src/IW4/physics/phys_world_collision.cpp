//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int Phys_GetSurfaceFlagsFromBrush(const struct cbrush_t* brush, int brushSideIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_TestGeomInBrush(unsigned int brushNum, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CM_ForEachBrushInLeafBrushNode_r(enum PhysWorld worldIndex, struct cLeafBrushNode_s* node, const struct Bounds* bounds, bool testMask, int clipMask, function * f, void* userData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestGeomInLeafBrushNode(struct cLeaf_t* leaf, const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CM_CullBox2(const struct objInfo* input, const float* origin, const float* halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_PositionGeomTestInAabbTree_r(struct CollisionAabbTree* aabbTree, const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_MeshTestGeomInLeaf(struct cLeaf_t* leaf, const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CM_TestGeomInLeaf(struct cLeaf_t* leaf, const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_TestAgainstEntities(const struct objInfo* input, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_CollideWorldGeomWithInfo(struct objInfo* info, struct Results* results, const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Phys_IsHalfSizeTooNarrow(const float* halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetTransformedBounds(struct objInfo* info, const float* localMidpoint, const float* halfSize, struct Bounds* rotatedBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetBoundsBox(struct objInfo* info, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetBoundsCylinder(struct objInfo* info, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_CollideWorldWithCollmap(struct dxGeom* o2, struct objInfo* info, struct Results* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CollideWorldGeom(struct dxGeom* o1, struct dxGeom* o2, int flags, struct dContactGeom* contact, int skip)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static function * Phys_GetColliderWorld(int classnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitWorldCollision()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetBrushmodelAABB(struct dxGeom* geom, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetCollmapAABB(struct dxGeom* geom, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetCylinderAABB(struct dxGeom* geom, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetCapsuleAABB(struct dxGeom* geom, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetGlassAABB(struct dxGeom* geom, float* aabb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static function * Phys_GetColliderNull(int classnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitBrushmodelGeomClass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitCollmapGeomClass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitCylinderGeomClass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitCapsuleGeomClass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitGlassGeomClass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_CreateBrushmodelGeom(struct dxSpace* space, struct dxBody* body, unsigned short brushModel, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_CreateCollmapGeom(struct dxSpace* space, struct dxBody* body, const struct PhysCollmap* collmap, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_CreateCylinderGeom(struct dxSpace* space, struct dxBody* body, const struct GeomStateCylinder* cyl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_CreateCapsuleGeom(struct dxSpace* space, struct dxBody* body, const struct GeomStateCylinder* cyl)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_CreateGlassGeom(struct dxSpace* space, struct dxBody* body, const struct GeomStateGlass* glass)
{

}

#endif // __UNIMPLEMENTED__
