//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void G_AntiLagRewindClientPos(int gameTime, struct AntilagClientStore* antilagStore)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_AntiLag_RestoreClientPos(struct AntilagClientStore* antilagStore)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Melee_Trace(struct gentity_s* ent, struct weaponParms* wp, int damage, float range, float width, float height, struct trace_t* traceResult, float* hitOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* Weapon_Melee_internal(struct gentity_s* ent, struct weaponParms* wp, float range, float width, float height)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Weapon_Melee(struct gentity_s* ent, struct weaponParms* wp, float range, float width, float height, int gametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void gunrandom(float* x, float* y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Weapon_Throw_Grenade(struct gentity_s* ent, int grenType, unsigned char grenModel, struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Weapon_GrenadeLauncher_Fire(struct gentity_s* ent, int grenType, unsigned char grenModel, struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void MacrossMissiles(struct gentity_s* parent, unsigned int weaponIndex, struct weaponParms* wp, float* start, const float* gunVel, struct lockonFireParms* lockParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* Weapon_RocketLauncher_Fire(struct gentity_s* ent, unsigned int weaponIndex, float spread, struct weaponParms* wp, const float* gunVel, struct lockonFireParms* lockParms, bool magicBullet)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LogAccuracyHit(struct gentity_s* target, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CalcMuzzlePoints(const struct gentity_s* ent, struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FireWeapon_SendClientEvent(struct gentity_s* attacker, int event, int hitClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FireWeapon(struct gentity_s* ent, int gametime, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_UseOffHand(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void FireWeaponMelee(struct gentity_s* ent, int gametime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_GivePlayerWeapon(struct playerState_s* ps, int weaponIndex, unsigned char altModelIndex, int dualWield)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetupWeaponDef()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int G_GetWeaponIndexForName(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SelectWeaponIndex(int clientNum, int iWeaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SetEquippedOffHand(int clientNum, int offHandIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_RegisterWeaponForKillcamFXRemoval(int clientNum, int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_WorldPointToScreenPos(const float* viewOrigin, const float* viewAngles, float viewFOV, const float* targetPoint, float* outScreenPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_InitDefaultViewmodelRumbles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int G_GetShieldTagName(const struct gentity_s* shieldHolder)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_GetShieldTagMatrix(const struct gentity_s* shieldHolder, float* resultMatrix[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_GetShieldCosOfAngleToPoint(const struct gentity_s* shieldHolder, const float* point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_GetShieldTagNormal(const struct gentity_s* shieldHolder, float* resultNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_TakePlayerWeapon(struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_GetShieldBlastDamageProtection(struct gentity_s* ent, const float* blastOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_AddShieldSplashDamageEvent(struct gentity_s* ent, float originalDamageRawPoints, float originalDamageScale, float shieldProtection)
{

}

#endif // __UNIMPLEMENTED__
