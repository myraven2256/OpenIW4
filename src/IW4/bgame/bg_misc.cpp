//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void BG_RegisterShockVolumeDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* BG_GetEntityTypeName(const int eType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_FindItemForWeapon(int weapon, int model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_FindItem(const char* pickupName, int model)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerTouchesItem(const struct playerState_s* ps, const struct entityState_s* item, int atTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerHasRoomForAmmo(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsScavengerPickup(const unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_HasRoomForScavengerPickup(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerCanPickUpWeaponOffhandClass(unsigned int weaponIndex, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponEntCanBeGrabbed(const struct entityState_s* weaponEntState, const struct playerState_s* ps, int touched, unsigned int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int ScavengerBagCanBeGrabbed(const struct entityState_s* weaponEntState, const struct playerState_s* ps, int touched, unsigned int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_CanItemBeGrabbed(const struct entityState_s* ent, const struct playerState_s* ps, int touched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerHasRoomForEntAllAmmoTypes(const struct entityState_s* ent, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_EvaluateTrajectory(const struct trajectory_t* tr, int atTime, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_EvaluateTrajectoryDelta(const struct trajectory_t* tr, int atTime, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetMarkDir(const float* dir, const float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_AddEventInternal<int,unsigned int>(const unsigned int newEvent, const unsigned int eventParm, int* eventSequence, int* events, unsigned int* eventParms, const char addType, const unsigned int eventTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AddPredictableEventToPlayerstate(const unsigned int newEvent, const unsigned int eventParm, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AddUnPredictableEventToPlayerstate(const unsigned int newEvent, const unsigned int eventParm, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AddEventToEntityState(const unsigned int newEvent, const unsigned int eventParm, struct entityState_s* es, const int eventTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BG_PlayerToEntity_ShouldAddEvent(const unsigned int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntity_ProcessEventInternal(struct entityState_s* es, const unsigned char handler, const int eventTime, const int* events, const unsigned int* eventParms, const int* eventSequence, int* oldEventSequence)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntity_ProcessEvents(struct playerState_s* ps, struct entityState_s* es, const unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntity_SetFlags(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntity_SetMisc(struct playerState_s* ps, struct entityState_s* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_PlayerToEntity_SetTrajectory(struct playerState_s* ps, struct entityState_s* s, int snap)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_PlayerStateToEntityState(struct playerState_s* ps, struct entityState_s* s, int snap, unsigned char handler)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum FeetDirection PM_GetProneFeetDirection(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CheckProneValid(int passEntityNum, const float* vPos, const float fSize, const float fHeight, const float fYaw, float* pfTorsoPitch, float* pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist, enum FeetDirection feetDirection)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetPlayerEyePosition(const struct playerState_s* ps, float* origin, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetPlayerViewDirection(const struct playerState_s* ps, float* forward, float* right, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_ApplyLinkAngles(const float* linkAngles, float* viewangles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CheckProne(int passEntityNum, const float* vPos, const float fSize, const float fHeight, const float fYaw, float* pfTorsoPitch, float* pfWaistPitch, int isAlreadyProne, int isOnGround, int groundIsWalkable, unsigned char handler, enum proneCheckType_t proneCheckType, float prone_feet_dist, enum FeetDirection feetDirection)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LerpFontScale(const struct hudelem_s* elem, int time, float* toScale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_LerpHudColors(const struct hudelem_s* elem, int time, union hudelem_color_t* toColor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_LoadShellShockDvars(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetShellShockParmsFromDvars(struct shellshock_parms_t* parms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_SaveShellShockDvars(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct shellshock_parms_t* BG_GetShellshockParms(const int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CreateXAnim(struct XAnim_s* anims, unsigned int animIndex, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_CheckThread()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetMaxSprintTime(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_NetDataChecksum()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int EncodeShieldPosToSegment(float pos, float min, float max, int segmentCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char BG_ShieldHitEncode(const float* hitPos, bool fromTheFront)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char BG_ShieldHitEncodeRandom(unsigned int* randSeed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float DecodeShieldSegmentToPos(int segment, float min, float max, int segmentCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_ShieldHitDecode(unsigned int encoded, float* result, bool* resultHitFront)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_IsThirdPersonMode(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_GetThirdPersonCrosshairOffset(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_UpdateClientControlledMissile(float* angles, const struct usercmd_s* cmd, int msec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetPlayerDamageFlinch(struct playerState_s* ps, int damage, const float* damageDir)
{

}

#endif // __UNIMPLEMENTED__
