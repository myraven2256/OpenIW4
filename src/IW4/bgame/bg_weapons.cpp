//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void PM_StartWeaponAnim(struct playerState_s* ps, enum WeaponAnimNumber anim, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_StartWeaponAnimBothHands(struct playerState_s* ps, enum WeaponAnimNumber anim)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_ContinueWeaponAnim(struct playerState_s* ps, enum WeaponAnimNumber anim, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_IsAdsAllowed(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateAimDownSightFlag(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ExitAimDownSight(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_UpdateAimDownSightLerp(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_StartHoldBreath(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_EndHoldBreath(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_HoldBreathFire(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_UpdateHoldBreath(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponStateProneMoveAllowed(int state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponStateNotProneMoveInterruptable(int state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PM_InteruptWeaponWithProneMove(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_AdjustAimSpreadScale(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_IsBulletClipEmpty(struct playerState_s* ps, struct WeaponDef* weapDef, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishRechamber(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_CheckForRechamber(struct playerState_s* ps, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetWeaponReloadAddAmmoDelay(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SetReloadingState(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_BeginWeaponReload(struct playerState_s* ps, unsigned int* holdrand, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_IsAltSwitch(struct playerState_s* ps, unsigned int weaponIndexFrom, unsigned int weaponIndexTo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_BeginWeaponChange(struct pmove_t* pm, unsigned int newweapon, bool quick, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_BeginWeaponRaise(struct playerState_s* ps, enum WeaponAnimNumber anim, unsigned int time, float aim, int altSwitch, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int BG_ShouldTakeWeaponWhenEmpty(int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_TakeWeaponIfEmpty(struct playerState_s* ps, int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BG_SwitchWeaponsIfEmpty(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishWeaponChange(struct pmove_t* pm, int previousWeaponState, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishWeaponRaise(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_AllowReload(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_ReloadDelayedAction(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReloadStart(struct pmove_t* pm, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReload(struct pmove_t* pm, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishReloadEnd(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForReload(struct pmove_t* pm, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ShotLimitReached(struct playerState_s* ps, struct WeaponDef* weapDef, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool BurstFirePending(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponUsesBurstCooldown(unsigned int weaponIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdatePendingTriggerPull(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int WeaponTimeModifiers(struct playerState_s* ps, int msec, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_UseLTriggerForDoubleBarrel(const struct playerState_s* ps, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_WeaponTimeAdjust(struct pmove_t* pm, struct pml_t* pml, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForChangeWeapon(struct pmove_t* pm, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_GetWeaponFireButton(unsigned int weapon, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_ShouldBeFiring(struct pmove_t* pm, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_StartFiring(struct playerState_s* ps, int delayedAction, unsigned int* holdrand, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_Weapon_CheckFiringAmmo(struct playerState_s* ps, unsigned int* holdrand, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_SetFPSFireAnim(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_AddFiringAimSpreadScale(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FireWeapon_SendFireWeaponEvent(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FireWeapon(struct pmove_t* pm, int delayedAction, unsigned int* holdrand, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_DoubleBarrelFire(struct pmove_t* pm, int delayedAction, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_WeaponHasChargeMelee(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeEnd(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeFire(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_MeleeInit(struct pmove_t* pm, struct pml_t* pml, struct playerState_s* ps, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForMelee(struct pmove_t* pm, struct pml_t* pml, int delayedAction, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_Idle(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandInit(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandPrepare(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandHold(struct playerState_s* ps, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandStart(struct pmove_t* pm, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHand(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandDetonate(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_OffHandEnd(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_SendEmptyOffhandEvent(struct playerState_s* ps, enum OffhandClass offhandClass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_IsHoldingGrenade(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CheckForGrenadeThrowbackAndExecute(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForOffHand(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_UpdateGrenadeThrow(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_CheckGrenadeHold(struct pmove_t* pm, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForDetonation(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForGrenadeThrowCancel(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Detonate(struct playerState_s* ps, int delayedAction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForNightVision(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishNightVisionWear(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_FinishNightVisionRemove(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Raise(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Loop(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetSprintOutTime(struct playerState_s* ps, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Sprint_State_Drop(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForSprint(struct pmove_t* pm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetStunnedState_Begin(struct playerState_s* ps, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetStunnedState_Loop(struct playerState_s* ps, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetStunnedState_End(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_Weapon_CheckForStunned(struct pmove_t* pm, unsigned int* holdrand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewModelOverride(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PM_Weapon_Allowed(struct playerState_s* ps, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int PM_WeaponProcessState(struct pmove_t* pm, struct pml_t* pml, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PM_WeaponProcessHand(struct pmove_t* pm, struct pml_t* pml, int delayedAction, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void UpdateRiotShieldSwitchingFlag(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_Weapon(struct pmove_t* pm, struct pml_t* pml)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PM_ResetWeaponState(struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_Turret_ComputeBarrelSpinRate(const struct WeaponDef* weaponDef, const struct LerpEntityStateTurret* turretLerp, const int curTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float BG_Turret_ComputeHeatLevel(const struct WeaponDef* weaponDef, const struct LerpEntityStateTurret* turretLerp, const int curTime)
{

}

#endif // __UNIMPLEMENTED__
