//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_g_combat()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_HitLocStrcpy(unsigned char* pMember, const char* pszKeyValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ParseHitLocDmgTable()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void AddScore(struct gentity_s* ent, int score)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LookAtKiller(struct gentity_s* self, const struct gentity_s* inflictor, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum meansOfDeath_t G_MeansOfDeathFromScriptParam(int scrParam)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum hitLocation_t G_HitLocFromScriptParam(int scrParam)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DeathGrenadeDrop(struct gentity_s* self, int meansOfDeath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetDeathAnimDamageTypeCondition(struct gentity_s* self, const struct gentity_s* inflictor, int meansOfDeath, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetDeathAnimHitLocationCondition(struct gentity_s* self, const enum hitLocation_t hitLoc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetDeathAnimHitDirectionCondition(struct gentity_s* self, const float* vDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_DeathAnimForScript(struct gentity_s* self, const struct gentity_s* inflictor, int meansOfDeath, int weapon, enum hitLocation_t hitLoc, const float* direction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void player_die(struct gentity_s* self, const struct gentity_s* inflictor, struct gentity_s* attacker, int damage, int meansOfDeath, int iWeapon, const float* vDir, const enum hitLocation_t hitLoc, int psTimeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float G_GetWeaponHitLocationMultiplier(enum hitLocation_t hitLoc, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int G_GetWeaponIndexForEntity(const struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_DamageClient(struct gentity_s* targ, const struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dflags, int mod, int weapon, enum hitLocation_t hitLoc, int timeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_DamageNotify(unsigned short notify, struct gentity_s* targ, struct gentity_s* attacker, const float* dir, const float* point, int damage, int mod, int dFlags, unsigned int modelIndex, unsigned int partName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Damage(struct gentity_s* targ, const struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dFlags, int mod, int weapon, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ShieldNotifyAndDamage(struct gentity_s* targ, const struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dFlags, int mod, int weapon, int timeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CanDamage(struct gentity_s* targ, struct gentity_s* inflictor, const float* centerPos, float coneAngleCos, float* coneDirection, int contentMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float EntDistToPoint(const float* origin, struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetEntListForRadius(const float* origin, float radius_max, float radius_min, int* entList, int* entListCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void AddScrTeamName(enum team_t team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void FlashbangBlastEnt(struct gentity_s* ent, const float* blastOrigin, float radius_max, float radius_min, struct gentity_s* attacker, enum team_t team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_FlashbangBlast(const float* origin, float radius_max, float radius_min, struct gentity_s* attacker, enum team_t team)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_WithinDamageRadius(const float* damageOrigin, float radiusSquared, struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int G_RadiusDamage(const float* origin, struct gentity_s* inflictor, struct gentity_s* attacker, float fInnerDamage, float fOuterDamage, float radius, float coneAngleCos, float* coneDirection, struct gentity_s* ignore, enum meansOfDeath_t mod, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short G_GetHitLocationString(enum hitLocation_t hitLoc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum hitLocation_t G_GetHitLocationIndexFromString(unsigned short sString)
{

}

#endif // __UNIMPLEMENTED__
