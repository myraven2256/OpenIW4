//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void Bullet_RandomDir(unsigned int* randSeed, float* x, float* y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Bullet_Endpos(unsigned int* randSeed, float spread, float* end, float* dir, const struct weaponParms* wp, float maxRange)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Bullet_GetDamage(const struct BulletFireParams* bp, const struct BulletTraceResults* br, const struct WeaponDef* weapDef, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum meansOfDeath_t Bullet_GetMethodOfDeath(struct gentity_s* attacker, const struct weaponParms* wp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_ImpactExplosion_ComputeImpactLocation(const struct BulletFireParams* bp, const struct BulletTraceResults* br, float* outLocation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_ImpactExplosion(struct BulletFireParams* bp, struct BulletTraceResults* br, const struct WeaponDef* weapDef, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_ImpactEffect_SetAdditionalFlags(struct gentity_s* hitEffectEnt, int impactEffectFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetTempEventEntNormal(struct gentity_s* ent, const float* normal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BroadcastShieldHitEvent(const float* hitPos, const float* hitNormal, const float* startPos, unsigned int weaponIndex, int attackerEntNum, int victimEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char EncodeShieldHitPos(int entNum, const float* hitPos, const float* startPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BroadcastShieldHitEventToVictim(unsigned int* randSeed, const float* hitPos, const float* hitNormal, const float* startPos, unsigned int weaponIndex, int attackerEntNum, int victimEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_ImpactEffect(unsigned int* randSeed, const struct BulletFireParams* bp, const struct BulletTraceResults* br, const float* normal, unsigned int weaponIndex, struct gentity_s* attacker, int impactEffectFlags, struct gentity_s** outHitEffectEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_DamageGlass(const struct BulletFireParams* bp, const struct BulletTraceResults* br, const struct WeaponDef* weapDef, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Bullet_IgnoreHitEntity(const struct BulletFireParams* bp, const struct BulletTraceResults* br, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Bullet_Trace(const struct BulletFireParams* bp, const struct WeaponDef* weapDef, struct gentity_s* attacker, struct BulletTraceResults* br, int lastSurfaceType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_HitNothing(unsigned int* randSeed, struct BulletFireParams* bp, struct BulletTraceResults* br, unsigned int weaponIndex, struct gentity_s* attacker)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CalcRicochet(const float* incoming, const float* normal, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int G_GetPrimaryIfAltIsNotWeapon(const struct gentity_s* attacker, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BulletRicochet(unsigned int* randSeed, struct gentity_s* hitEnt, struct gentity_s* attacker, unsigned int weaponIndex, const float* contactPoint, const float* surfaceNormal, const float* incomingNormal, int gameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Bullet_ProcessShieldHit(unsigned int* randSeed, struct BulletFireParams* bp, struct BulletTraceResults* br, unsigned int weaponIndex, struct gentity_s* attacker, int gameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Bullet_Process(unsigned int* randSeed, struct BulletFireParams* bp, struct BulletTraceResults* br, unsigned int weaponIndex, struct gentity_s* attacker, int dFlags, int gameTime, int* outImpactFlags, bool processFx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_FireExtended(unsigned int* randSeed, struct BulletFireParams* bp, struct BulletTraceResults* br, unsigned int weaponIndex, struct gentity_s* attacker, int gameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_FirePenetrate(unsigned int* randSeed, struct BulletFireParams* bp, struct BulletTraceResults* br, unsigned int weaponIndex, struct gentity_s* attacker, int gameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Bullet_CheckSpreadFireAtPos(struct gentity_s* attacker, struct gentity_s* target, struct BulletFireParams* bp, const struct weaponParms* wp, const struct gentity_s* weaponEnt, enum hitLocation_t hitLoc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* Bullet_SpreadFire_NextTarget(struct gentity_s* attacker, int* targetIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Bullet_SpreadFireTargets(struct gentity_s* attacker, int shotCount, float range, float spread, const struct weaponParms* wp, const struct gentity_s* weaponEnt, int gameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Bullet_Fire(struct gentity_s* attacker, float spread, const struct weaponParms* wp, const struct gentity_s* weaponEnt, enum PlayerHandIndex hand, int gameTime)
{

}

#endif // __UNIMPLEMENTED__
