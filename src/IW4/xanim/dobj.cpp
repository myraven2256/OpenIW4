//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void DObjInit()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjShutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjDumpInfo(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DObjIgnoreCollision(const struct DObj* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjDumpCreationInfo(struct DObjModel_s* dobjModels, unsigned int numModels)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjCreateDuplicateParts(struct DObj* obj, struct DObjModel_s* dobjModels, unsigned int numModels, unsigned char* modelHierarchy)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetHierarchyBits(const struct DObj* obj, int boneIndex, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetTree(struct DObj* obj, struct XAnimTree_s* tree)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DObjComputeBounds(struct DObj* obj, unsigned char* modelHierarchy)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCreate(struct DObjModel_s* dobjModels, unsigned int numModels, struct XAnimTree_s* tree, char* buf, unsigned int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClone(const struct DObj* from, char* buf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjFree(struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetCreateParms(const struct DObj* obj, struct DObjModel_s* dobjModels, unsigned short* numModels, struct XAnimTree_s** tree, unsigned short* entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjArchive(struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjUnarchive(struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelExistsConst(const struct DObj* obj, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSkelClear(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSkelReset(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBounds(const struct DObj* obj, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjPhysicsGetBounds(const struct DObj* obj, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct XModel* DObjGetFirstModel(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetVisibleBounds(const struct DObj* obj, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DObjGetRadius(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct PhysPreset* DObjGetPhysPreset(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetName(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNumSurfaces(const struct DObj* obj, char* lods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetBoneName(const struct DObj* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* DObjGetModelParentBoneName(const struct DObj* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XAnimTree_s* DObjGetTree(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LocalInvMatrixTransformVectorQuatTrans(const float* in, const struct DObjAnimMat* mat, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTraceline(struct DObj* obj, const float* start, const float* end, const unsigned char* priorityMap, struct DObjTrace_s* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTracelinePartBits(struct DObj* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGeomTraceline(struct DObj* obj, const float* localStart, const float* localEnd, int contentmask, struct DObjTrace_s* results)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGeomTracelinePartBits(struct DObj* obj, int contentmask, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjHasContents(struct DObj* obj, int contentmask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetContents(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetLocalBoneIndex(struct DObj* obj, int* partBits, int boneIndex, const float* trans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetBoneIndex(const struct DObj* obj, unsigned int name, unsigned char* index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNextChildBoneIndex(const struct DObj* obj, unsigned char parentIndex, unsigned char* childIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char DObjGetReverseBoneIndex(const struct DObj* obj, unsigned int name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetModelBoneIndex(const struct DObj* obj, const char* modelName, unsigned int name, unsigned char* index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char DObjGetReverseModelBoneIndex(const struct DObj* obj, const char* modelName, unsigned int name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char DObjGetModelRootBoneIndex(const struct DObj* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBasePoseMatrix(const struct DObj* obj, unsigned char boneIndex, struct DObjAnimMat* outMat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DoesDObjHaveDistortion(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetHidePartBits(struct DObj* obj, const unsigned int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetSurfaceData(const struct DObj* obj, const float* origin, char* lods, unsigned int usedInScene)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjTouchXModelsBase(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__
