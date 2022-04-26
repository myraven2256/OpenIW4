//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* DObjGetRotTransArray(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNumModels(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetNumBones(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetSurfaces(const struct DObj* obj, int* partBits, const char* lods)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetBoneInfo(const struct DObj* obj, struct XBoneInfo** boneInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjNumBones(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetThermalRender(struct DObj* obj, bool enabled)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DObjThermalRenderIsEnabled(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetSetBones(const struct DObj* obj, int* setPartBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjIsBoneSet(const struct DObj* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClearBoneSetBit(const struct DObj* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int DObjGetRootBoneCount(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool DObjSetSkelRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetControlTagAngles(const struct DObj* obj, int* partBits, unsigned int boneIndex, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetWorldControlTag(const struct DObj* obj, int* partBits, unsigned int boneIndex, const float* trans, const float* quat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct XModel* DObjGetModel(const struct DObj* obj, int modelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetLocalTag(const struct DObj* obj, int* partBits, unsigned int boneIndex, const float* trans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetLocalTagInternal(const struct DObj* obj, const float* trans, const float* angles, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetAngles(struct DObjAnimMat* rotTrans, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClearAngles(struct DObjAnimMat* rotTrans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjSetTrans(struct DObjAnimMat* rotTrans, const float* trans)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCompleteHierarchyBits(const struct DObj* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetControlRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSetWorldControlRotTransIndex(const struct DObj* obj, const int* partBits, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelExists(const struct DObj* obj, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjClearSkel(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelIsBoneUpToDate(const struct DObj* obj, int boneIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjSkelAreBonesUpToDate(const struct DObj* obj, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int DObjGetAllocSkelSize(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjCreateSkel(const struct DObj* obj, char* buf, int timeStamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct DObjAnimMat* I_dmaGetDObjSkel(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjGetHidePartBits(const struct DObj* obj, unsigned int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjLock(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DObjUnlock(const struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__
