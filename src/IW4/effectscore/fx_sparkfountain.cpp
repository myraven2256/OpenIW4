//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static enum FindSlotResult FX_SpawnSparkFountain_AllocOrFindCachedSparkFountain(struct FxSystem* system, struct FxEffect* effect, struct FxElem* elem, struct FxSparkFountain** outAllocedSparkFountain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float frand01()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float frand()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vec3Rand(float* outVec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RandomizeNormal(const float* inNormal, const float randFrac, float* outNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float SolveQuadraticForSmalestPositiveOrZero(float a, float b, float c)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CollideTrajectory(const float* pos, const float* vel, const float* gravity, float timeLeft, float* outPos, float* outNormal, float* outTime, float* fixedVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void InitTrajectories(const float* trajPos0Array, unsigned int trajCount, unsigned int maxCollisions, float* velDir, float velMin, float velMax, float velConeFrac, struct FxSpark* outSparks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CollideTrajectories(unsigned int trajCount, unsigned int maxCollisions, float maxTime, float bounceFrac, float bounceRandFrac, float* gravity, struct FxSpark* outSparks)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_SparkFountain_DoClusterPortion(struct FxSparkFountainCluster* cluster, const struct FxSparkFountainDef* fountainDef, int begin, int count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_SpawnSparkFountain(struct FxSystem* system, struct FxEffect* effect, struct FxElem* elem, const struct FxElemDef* elemDef, int randomSeed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_UpdateElement_SparkFountain(struct FxSystem* system, struct FxUpdateElem* update, struct FxElem* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FX_DrawElem_SparkFountain_PopulateVertices(struct FxDrawState* draw, struct GfxPosTexVertex** inOutVerts, const float* times, const float* pos[0x3], float uMin, float uDelta, float vMin, float vDelta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DrawElem_SparkFountain_GetBoostedTime(float boostTime, float boostFactor, float* outTMsec, float* outDTMsec, float tMsec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DrawElem_SparkFountain(struct FxDrawState* draw)
{

}

#endif // __UNIMPLEMENTED__
