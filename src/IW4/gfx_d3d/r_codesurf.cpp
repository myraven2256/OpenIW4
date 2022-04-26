//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int R_BeginCodeSurfs(enum GfxCodeSurfUser user, enum GfxCodeSurfListType surfList, struct GfxCodeSurfGlob** codeSurfGlobOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EndCodeSurfs(struct GfxCodeSurfGlob* codeSurfGlob, enum GfxCodeSurfUser user)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_ReserveCodeSurfVerts(struct GfxCodeSurfGlob* codeSurfGlob, unsigned int vertCount, unsigned short* baseVertexOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_ReturnCodeSurfVerts(struct GfxCodeSurfGlob* codeSurfGlob, unsigned int vertCount, const struct GfxPackedVertex* vertsIter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_ReserveCodeSurfIndices(struct GfxCodeSurfGlob* codeSurfGlob, unsigned int indexCount, struct r_double_index_t** indicesOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool R_ReserveCodeSurfBuffers(struct GfxCodeSurfGlob* codeSurfGlob, unsigned int vertCount, unsigned int indexCount, unsigned int argCount, unsigned short* baseVertexOut, struct r_double_index_t** indicesOut, unsigned int* argOffsetOut)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float* R_GetCodeSurfArgs(struct GfxCodeSurfGlob* codeSurfGlob[0x4], unsigned int argOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCodeSurf(struct GfxCodeSurfGlob* codeSurfGlob, struct Material* mtlHandle, struct r_double_index_t* indices, unsigned int indexCount, unsigned int argOffset, unsigned int argCount, const char* fxName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_AddCode3DQuadSurf(struct GfxCodeSurfGlob* codeSurfGlob, unsigned short baseVertex, struct r_double_index_t* indices, const float* center, const float* axis[0x3], float width, float height, float s0, float t0, float s1, float t1, const float* color, struct Material* material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GfxPackedVertex* R_CodeSurfVertIter_Begin(struct GfxCodeSurfGlob* codeSurfGlob, unsigned short baseVertex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float* R_CodeSurfArgsIter_Begin(struct GfxCodeSurfGlob* codeSurfGlob[0x4], unsigned int argsOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxSortCodeSurfsInterface::GetIncrement(const struct GfxCodeSurf* codeSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public unsigned int GfxSortCodeSurfsInterface::GetMaterialSortedIndex(const struct GfxCodeSurf* codeSurf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void R_EmitCodeSurfs(struct GfxCodeSurfList* codeSurfList, unsigned int codeSurfLimit, enum GfxCodeSurfListType surfList)
{

}

#endif // __UNIMPLEMENTED__
