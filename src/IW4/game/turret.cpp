//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_turret()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitTurrets()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FreeTurret(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_FillWeaponParms(const struct gentity_s* ent, const struct gentity_s* activator, struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_GetRemainingConvergenceTime(const struct Turret* turret, int type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_FireLead(struct gentity_s* ent, struct gentity_s* activator, bool bUseAccuracy)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ClientAim(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_CanShoot(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_Shoot_internal(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Shoot(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_PlayerTurretPositionAndBlend(struct gentity_s* playerEnt, struct gentity_s* turretEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_UpdateBarrelRotation(struct gentity_s* self, struct gentity_s* owner)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_UpdateHeat(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_Track(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_UpdateSound(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ClientStopUsingTurret(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Think_Client(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ScanStart(struct Turret* turret, struct WeaponDef* weapDef, float deltaYaw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ScanStop(struct Turret* turret)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ScanForEnemies(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_CalculateConvergenceAngularVelocity(const struct gentity_s* self, const float* desiredAngles, float* angularVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_UpdateTargetAngles(struct gentity_s* self, const float* desiredAngles, const bool bManned)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_IsFiringInternal(int state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Turret_IsFiring(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_SetState(struct gentity_s* self, int state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_ClearTargetEnt(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_ReturnToDefaultPos(struct gentity_s* self, bool bManned)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetDefaultDropPitch(struct gentity_s* self, float pitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_RestoreDefaultDropPitch(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Think_Init(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Turret_CanTargetPoint(const struct gentity_s* self, const float* vPoint, float* out_sourcePosition, float* out_localAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_GetTargetEyePosition(const struct gentity_s* target, float* eyePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Turret_CanTargetSentient_GetTargetPosInternal(const struct gentity_s* targetEnt, const float* targetEntOffset, const float* turretAxis[0x3], const int targetHead, float* out_targetPosition, float* out_localAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Turret_CanTargetSentient(const struct gentity_s* turretEnt, const struct gentity_s* targetEnt, const float* targetEntOffset, float* out_targetPosition, float* out_sourcePosition, float* out_localAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_UpdateShootingState(struct gentity_s* self, const int bShoot, const float* desiredAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_AimAtVector_Internal(struct gentity_s* self, const float* origin, int bShoot, const float* localTargetAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_AimAtVector(struct gentity_s* self, const float* origin, const int bShoot, float* out_localTargetAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_SetTargetEnt(struct gentity_s* self, const struct gentity_s* ent, const float* entOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_AimAtSentient_Internal(struct gentity_s* self, struct gentity_s* enemy, const float* enemyOffset, int bShoot, int missTime, float* out_localTargetAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_AimAtSentient(struct gentity_s* self, struct gentity_s* enemy, const float* enemyOffset, int bShoot, int missTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_AimAtEntity(struct gentity_s* self, const struct gentity_s* ent, const float* entOffset, const int bShoot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_SightTrace(const float* start, const float* end, int passEnt1, int passEnt2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_IsTargetVisible(struct gentity_s* self, const struct gentity_s* target, const float* targetOffset, float* distSqr)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_GetEnemyTeamFlags(const struct Turret* turret)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* Turret_NextTarget(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* Turret_FindBestTarget(struct gentity_s* self, float* out_targetOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ModeChangeClear(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_ModeChangeNotify(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_ModeChangeWait(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Turret_Think_Auto_NonAI(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Turret_Think_Manual(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Think(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_IsOperable(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Controller(const struct gentity_s* self, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_IsBehind(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Turret_IsSentryUsageRestricted(struct gentity_s* self, struct gentity_s* other)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_IsTurretUsable(struct gentity_s* self, struct gentity_s* owner)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DeactivateTurret(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetSentryOwner(struct gentity_s* self, struct gentity_s* owner)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetSentryCarried(struct gentity_s* self, int carried)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetMode(struct gentity_s* self, int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetAutoRotationStopDelay(struct gentity_s* self, int delayMS)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_SetManualSpinning(struct gentity_s* self, int spinning)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Turret_GetBarrelSpinRate(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Turret_Use(struct gentity_s* self, struct gentity_s* owner, struct gentity_s* activator)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_CanSpawnTurret()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char Turret_SoundAliasIndex(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SpawnTurret(struct gentity_s* self, const char* weaponinfoname, const int useDropPitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SP_turret(struct gentity_s* self)
{

}

#endif // __UNIMPLEMENTED__
