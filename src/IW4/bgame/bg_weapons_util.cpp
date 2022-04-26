//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

bool BG_AdvanceTrace(struct BulletFireParams* bp, struct BulletTraceResults* br, float dist)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetFirstAvailableOffhand(const struct playerState_s* ps, int offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetFirstEquippedOffhand(const struct playerState_s* ps, int offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_OneHandedViewModelAnimsValid(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_ViewModelAnimExists(const struct playerState_s* ps, unsigned int weaponIndex, enum weapAnimFiles_t anim, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_UsingSniperScope(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_CanHoldBreath(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsAimDownSightWeapon(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_CanPlayerHaveWeapon(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ValidateWeaponNumber(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ValidateWeaponNumberOffhand(unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_WeaponNeedsToBeRechambered(struct playerState_s* ps, unsigned int weaponIndex, const int hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_WeaponDoesNotNeedToBeRechambered(struct playerState_s* ps, unsigned int weaponIndex, const int hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char BG_GetWeaponModel(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_IsWeaponValid(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBlocksProne(unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_IsWeaponUsableInState(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_RemoveWeaponFromEquippedList(struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_TakePlayerWeapon(struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_WeaponFireRecoil(const struct playerState_s* ps, float* recoilSpeed, float* kickAVel, unsigned int* holdrand, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_GetSpreadForWeapon(const struct playerState_s* ps, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerWeaponCountPrimaryTypes(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerWeaponsFull_Primaries(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerHasCompatibleWeapon(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_PlayerDualWieldingCompatibleWeapon(const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_ThrowingBackGrenade(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AssertOffhandIndexOrNone(int offHandIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_UpdateWeaponHidePartBitsForDObj(struct DObj* obj, int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_GetExtendedClipAmmoForWeapon(int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_GetClipSize(const struct playerState_s* ps, int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PlayerHandIndex BG_PlayerLastWeaponHandForViewWeapon(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PlayerHandIndex BG_PlayerLastWeaponHand(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PlayerHandIndex BG_GetHandFromWeaponEvent(int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_IsLastShotWeaponEvent(int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum meansOfDeath_t BG_WeaponBulletFire_GetMethodOfDeath(const unsigned int* perks, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_WeaponBulletFire_GetHitEvent(unsigned int meansOfDeath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int BG_WeaponBulletFire_GetClientHitEvent(unsigned int meansOfDeath)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBulletFire_ExplodeOnImpact(const unsigned int* perks, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBulletFire_OverrideImpactType(const unsigned int* perks, enum ImpactType* overrideFx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBulletFire_ShouldSpread(const unsigned int* perks, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_WeaponBulletFire_ShouldPenetrate(const unsigned int* perks, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_WeaponBulletFire_GetExplDmg(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_WeaponBulletFire_GetExplRadius(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short BG_GetWeaponFlashTagnameByDef(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short BG_GetWeaponFlashTagname(unsigned int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_PlayerSwitchingToRiotShield(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct GlobalAmmo* BG_FindGlobalAmmoSlot(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetGlobalAmmoForAmmoType(struct playerState_s* ps, unsigned int ammoType, int ammoCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_SetGlobalAmmo(struct playerState_s* ps, unsigned int weaponIndex, int ammoCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BG_AddGlobalAmmoForAmmoType(struct playerState_s* ps, unsigned int ammoType, int ammoCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_InitEquippedWeaponSlot(struct playerState_s* ps, const int equipIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int BG_GetFreeEquipSlot(const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_EquipWeaponAtSlot(struct playerState_s* ps, int weaponIndex, int equipIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool BG_EquipWeapon(struct playerState_s* ps, int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__
