//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once


#ifdef    __UNIMPLEMENTED__

int FX_GetClientForSystem(const struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_EffectToHandle(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_EffectFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxEffect* FX_EffectFromIndex(struct FxSystem* system, volatile long index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_PoolToHandle_Generic<FxTrailElem>(struct FxPool<FxTrailElem>* poolArray, struct FxTrailElem* item)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSparkFountainCluster* FX_PoolFromHandle_Generic<FxSparkFountainCluster>(struct FxPool<FxSparkFountainCluster>* poolArray, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_ElemToHandle(struct FxSystem* system, struct FxElem* elem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxElem* FX_ElemFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_TrailElemToHandle(struct FxSystem* system, struct FxTrailElem* trailElem)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxTrailElem* FX_TrailElemFromHandle(const struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_TrailToHandle(struct FxSystem* system, struct FxTrail* trail)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxTrail* FX_TrailFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxBolt* FX_BoltFromHandle(struct FxSystem* system, unsigned char handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char FX_BoltToHandle(struct FxSystem* system, struct FxBolt* bolt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSparkCloud* FX_SparkCloudFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxSparkCloud* FX_SparkCloudFromHandle_Const(const struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_SparkCloudToHandle(struct FxSystem* system, struct FxSparkCloud* sparkCloud)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSparkFountain* FX_SparkFountainFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxSparkFountain* FX_SparkFountainFromHandle_Const(const struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_SparkFountainToHandle(struct FxSystem* system, struct FxSparkFountain* sparkFountain)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct FxSparkFountainCluster* FX_SparkFountainClusterFromHandle(struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxSparkFountainCluster* FX_SparkFountainClusterFromHandle_Const(const struct FxSystem* system, unsigned short handle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short FX_SparkFountainClusterToHandle(struct FxSystem* system, struct FxSparkFountainCluster* sparkFountainCluster)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AddRefToEffect(struct FxSystem* __formal, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_DelRefToEffect(struct FxSystem* system, struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxEffectDef* FX_GetEffectDef(const struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct FxElemDef* FX_GetEffectElemDef(const struct FxEffect* effect, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_AcquireEffectLock(struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_ReleaseEffectLock(struct FxEffect* effect)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_BeginIteratingOverEffects_Cooperative(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndIteratingOverEffects_Cooperative(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_WaitBeginIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool FX_BeginIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FX_EndIteratingOverEffects_Exclusive(struct FxSystem* system)
{

}

#endif // __UNIMPLEMENTED__
