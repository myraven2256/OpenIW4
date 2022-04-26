//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void EntTagInfoChanged(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SlideMoveClientLinkedStep(float deltaT, float* origin, float* velocity, const struct Bounds* bounds, bool gravity, int passEntityNum, int clipMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void EntUnlink_Internal(struct gentity_s* ent, bool relinking)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int EntLinkTo_Internal(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntLinkTo(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntLinkToWithOffset(struct gentity_s* ent, struct gentity_s* parent, unsigned int tagName, const float* originOffset, const float* anglesOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_EntUnlink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_EntIsLinkedTo(struct gentity_s* ent, struct gentity_s* parent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_EntIsLinkedToAncestor(const struct gentity_s* childEnt, const struct gentity_s* ancestorEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateTagInfo(struct gentity_s* ent, int bParentHasDObj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateTagInfoOfChildren(struct gentity_s* parent, int bHasDObj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagParentAxis(struct gentity_s* ent, float* parentAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagParentRelAxis(struct gentity_s* ent, float* parentRelAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcTagAxis(struct gentity_s* ent, int bAnglesOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_VerifyLinkedMoveTarget(const struct gentity_s* ent, const float* targetOrigin, const int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_CalcFixedLinkTargetAxis(struct gentity_s* ent, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_SetFixedLinkNonPlayer(struct gentity_s* ent, const int eAngles, const int contentMask, float* outTargetOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DefaultViewAngleClampGoal(struct viewClampState* clamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SnapToViewAngleClampGoal(struct viewClampState* clamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float CalcLerpFraction(float startTime, float totalAccelTime, float totalDecelTime, float totalTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LerpViewClamp(struct viewClampState* clamp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UpdateViewAngleClamp(struct gclient_s* client, const float* worldAnglesCenter)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ApplyGroundReferenceFrame(const float* groundAngles, const float* worldAxis[0x3], float* relativeAxis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitPlayerLinkAngles(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_GeneralLink(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetPlayerFixedLinkViewAngles(struct gentity_s* ent, const float* worldAxis[0x3], float lerpFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetPlayerFixedLinkOrigin(struct gentity_s* ent, const float* worldAxis[0x3], float lerpFraction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetFixedLinkPlayer(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_TransferLinkedEntities(struct gentity_s* from, struct gentity_s* to)
{

}

#endif // __UNIMPLEMENTED__
