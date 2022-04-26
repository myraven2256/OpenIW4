//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later

#pragma once


#ifdef    __UNIMPLEMENTED__

float Bounds_Min(const struct Bounds* bounds, unsigned int axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_Max(const struct Bounds* bounds, unsigned int axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Mins2D(const struct Bounds* bounds, float* mins)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Maxs2D(const struct Bounds* bounds, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_MinsMaxs2D(const struct Bounds* bounds, float* mins, float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_SetMin(struct Bounds* bounds, unsigned int axis, float min)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_SetMax(struct Bounds* bounds, unsigned int axis, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_SetMinMax(struct Bounds* bounds, unsigned int axis, float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ShiftMin(struct Bounds* bounds, unsigned int axis, float shift)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_GetCorner(const struct Bounds* bounds, unsigned int cornerIndex, float* corner)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum SideClassification Bounds_ClassifyPlaneSide(const struct Bounds* bounds, const struct cplane_s* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum SideClassification Sphere_ClassifyPlaneSide(const struct Sphere* sphere, const struct cplane_s* p)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Transform(const struct Bounds* baseBounds, const float* origin, const float* axis[0x3], struct Bounds* rotatedBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExtentBounds_Clear(struct ExtentBounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Clear(struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForEverything(struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BuildBounds_ForNothing(struct BuildBounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BuildBounds_ToBounds(const struct BuildBounds* fromBounds, struct Bounds* toBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BuildBounds_FromBounds(struct BuildBounds* toBounds, const struct Bounds* fromBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExtentBounds_FromBounds(struct ExtentBounds* toBounds, const struct Bounds* fromBounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ExtentBounds_AddPoint(struct ExtentBounds* bounds, const float* pt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Bounds_ContainsPoint(const struct Bounds* bounds, const float* pt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Bounds_ContainsOrTouchesPoint(const struct Bounds* bounds, const float* pt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Bounds_Overlap(const struct Bounds* b0, const struct Bounds* b1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Bounds_OverlapOrTouch(const struct Bounds* b0, const struct Bounds* b1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Bounds_OverlapEpsilon(const struct Bounds* b0, const struct Bounds* b1, float epsilon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Bounds_FullyContainOnAxis(const struct Bounds* outer, const struct Bounds* inner, unsigned int axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Bounds_FullyContain(const struct Bounds* outer, const struct Bounds* inner)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Expand(struct Bounds* bounds, const struct Bounds* added)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BuildBounds_Expand(struct BuildBounds* bounds, const struct BuildBounds* added)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Extend(struct Bounds* bounds, const float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Pad(struct Bounds* bounds, float padding)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ExpandToWidth(struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_RaiseToWidth(struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ShrinkToHeight(struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_AddOffset(struct Bounds* bounds, const float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_AddOffsetTo(struct Bounds* toBounds, const struct Bounds* fromBounds, const float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_SubtractOffsetTo(struct Bounds* toBounds, const struct Bounds* fromBounds, const float* offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Midpoint(const struct Bounds* bounds, float* midpoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_Size(const struct Bounds* bounds, unsigned int axis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_Sizes(const struct Bounds* bounds, float* size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_ToRadius2D(const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_ToRadius(const struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCube(struct Bounds* bounds, const float* origin, float halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCubeAtOrigin(struct Bounds* bounds, float halfSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForSphere(struct Bounds* bounds, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Sphere_ForSphere(struct Sphere* sphere, const float* origin, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForSphereAtOrigin(struct Bounds* bounds, float radius)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCapsule(struct Bounds* bounds, const float* origin, float radius, float bottom, float top)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCapsuleAtOrigin(struct Bounds* bounds, float radius, float bottom, float top)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCenteredCapsule(struct Bounds* bounds, const float* origin, float radius, float midZ, float halfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForCenteredCapsuleAtOrigin(struct Bounds* bounds, float radius, float midZ, float halfHeight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForExtents(struct Bounds* bounds, const float* mins, const float* maxs)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForPoint(struct Bounds* bounds, const float* pt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bounds_ForSegment(struct Bounds* bounds, const float* v0, const float* v1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_DistToPointSq(const struct Bounds* bounds, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Bounds_DistToPoint(const struct Bounds* bounds, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Sphere_OverlapOrTouch(const struct Bounds* b, const struct Sphere* s)
{

}

#endif // __UNIMPLEMENTED__
