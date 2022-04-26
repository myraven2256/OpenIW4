//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_RegisterWeaponDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float GetWeaponAnimRate(int weaponNum, struct XAnim_s* anims, enum weapAnimFiles_t animIndex, int oneHanded)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StartWeaponAnim(int localClientNum, int weaponNum, enum PlayerHandIndex hand, enum weapAnimFiles_t animIndex, float transitionTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayADSAnim(float weaponPosFrac, struct DObj* obj, int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_JavelinADS(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsPlayerReloading(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockBlink(int localClientNum, float blinkPerSec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockAttackTop(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockAttackDirect(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLocking(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLocked(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_UICheckWeapLockTooClose(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetLockTargetTagPos(int localClientNum, struct playerState_s* ps, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetWeapLockLoc2D(int localClientNum, struct cg_s* cgameGlob, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GetWeapLockLoc2DCached(int localClientNum, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_UIGetWeapLockLoc2D_X(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_UIGetWeapLockLoc2D_Y(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* CG_GetWeaponName(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponRunXModelAnims(int localClientNum, const struct playerState_s* ps, enum PlayerHandIndex handIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ResetWeaponAnimTrees(int localClientNum, const struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_WeaponDObjHandle(enum PlayerHandIndex weaponHand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CheckADSViewAnimIsNotLooping(const struct WeaponDef* weapDef, struct XAnim_s* pAnims, const char* animName, unsigned int animIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_CreateTurretAnims(int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_CreateWeaponViewModelXAnim(struct WeaponDef* weapDef, const char** animArray)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CreateWeaponViewModelXAnimDefs(int weaponNum, struct weaponStaticInfo_t* weapStaticInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnimTree_s* CG_CreateWeaponViewModelXAnimTree(struct XAnim_s* pAnims)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateViewModelHidePartBits_EMP(const int localClientNum, const int weaponNum, struct DObj* obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateViewModelHidePartBits(int localClientNum, int weaponNum, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterWeapon(int localClientNum, int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ChangeViewmodelDobj(int localClientNum, const struct playerState_s* ps, unsigned int weaponNum, struct XModel* newHands, bool updateClientInfo, bool recreateAnimTrees)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewmodelRocketShouldBeAttached(int localClientNum, struct WeaponDef* weapDef, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ViewmodelKnifeShouldBeAttached(int localClientNum, struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool UpdateViewmodelAttachments(int localClientNum, int weaponNum, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateWeaponViewmodels(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateHandViewmodels_Internal(int localClientNum, struct XModel* handModel, const struct playerState_s* ps, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateHandViewmodels(int localClientNum, struct XModel* handModel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayNoteMappedSoundAliases(int localClientNum, const char* noteName, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PlayNoteMappedRumbleAliases(int localClientNum, const char* noteName, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ProcessWeaponNoteTracks(int localClientNum, const struct playerState_s* predictedPlayerState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterItems(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BuildWeaponState(struct cg_s* cgameGlob, struct weaponState_t* ws)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SaveWeaponState(const struct weaponState_t* ws, struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateWeaponPositionToADS(struct cg_s* cgameGlob, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_LocalToWorld(const struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_Landing(const struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_SaveOrigin(struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_Debug(const struct cg_s* cgameGlob, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_SaveAngles(struct cg_s* cgameGlob, float* angles, struct GfxScaledPlacement* placement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CalculateWeaponMovement_ClientSpecific(struct cg_s* cgameGlob, struct GfxScaledPlacement* placement, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_GetPrimaryIfAltIsNotWeapon(const struct centity_s* cent, int weaponNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WeaponFlash(int localClientNum, int dobjHandle, int weaponNum, int bViewFlash, unsigned int flashTag)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_HoldBreathInit(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HoldBreathSoundLerp(int localClientNum, float lerp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void HoldBreathUpdate(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateViewModelPose(const struct DObj* obj, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateViewModelPoseForHand(const struct DObj* obj, int localClientNum, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletDynEntImpact(const unsigned int localClientNum, const unsigned int sourceEntNum, const struct WeaponDef* weapDef, const bool hasBulletExploded, const float* start, const float* hitPos, const struct trace_t* traceResults)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct clientInfo_t* CG_GetClientInfo(const int localClientNum, const struct centity_s* otherClient)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetPlayerViewOrigin(int localClientNum, const struct playerState_s* ps, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ShouldIgnoreHitEntity(int attackerNum, int hitEntNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_BulletTrace(int localClientNum, const struct BulletFireParams* bp, const struct WeaponDef* weapDef, const struct centity_s* attackerEnt, struct BulletTraceResults* br, int lastSurfaceType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_SimulateBulletFire_FakeTrace(const int localClientNum, const struct WeaponDef* weapDef, const struct BulletFireParams* bp, const int knownHitClientNum, struct BulletTraceResults* br)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_IsEntityAPlayer(int localClientNum, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_SimulateBulletFire_Internal_UseEventBasedHitEffect(int localClientNum, int targetEntityNum, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SimulateBulletFire_Internal_HitEffect(int localClientNum, int sourceEntityNum, int targetEntityNum, const int knownHitClientNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, unsigned int meansOfDeath, unsigned char impactEffects, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SimulateBulletFire_Internal_MissEffect(int localClientNum, int sourceEntityNum, int weaponIndex, const float* startPos, const float* position, int surfType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_IsBulletWeapon(const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool RayPlaneIntersection(float* start, float* dir, float len, float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_ShouldSimulateBulletFire(int localClientNum, struct BulletFireParams* bp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SimulateBulletFire_Internal(int localClientNum, struct BulletFireParams* bp, int weaponIndex, struct centity_s* attackerEnt, const int knownHitClientNum, float* tracerStart, bool drawTracers)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_IsPlayerCrouching(const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_IsPlayerProne(const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_IsPlayerADS(const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GuessSpreadForWeapon(int localClientNum, const struct centity_s* cent, const struct WeaponDef* weapDef, float* minSpread, float* maxSpread)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void RandomBulletDir(unsigned int* randSeed, float* x, float* y)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SimulateBulletFire_EndPos(unsigned int* randSeed, const float spread, const float* start, float* end, float* dir, const float* forwardDir, const float* rightDir, const float* upDir, const float maxRange)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SimulateBulletFire(int localClientNum, struct centity_s* ent, const int knownHitClientNum, unsigned int weaponIndex, const unsigned short boneName, bool isPlayerView, bool isPlayerWeaponView, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_AddMuzzleFlash(int localClientNum, struct centity_s* cent, int weaponNum, int bViewModel, int bDrawGun)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddPlayerWeapon(int localClientNum, const struct GfxScaledPlacement* placement, const struct playerState_s* ps, struct centity_s* cent, int bDrawGun)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_UpdateViewWeaponAnim(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddViewWeapon(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool WeaponCycleAllowed(struct cg_s* cgameGlob)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_NextWeapon_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PrevWeapon_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VerifyPlayerAltModeWeapon(int localClientNum, int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_OutOfAmmoChange_internal(int localClientNum, bool clipOnly)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_OutOfAmmoChange(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_OutOfAmmoChangeClipOnly(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_ForceSwitchToValidWeapon(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int NextWeapInCycle(int localClientNum, const struct playerState_s* ps, enum weapInventoryType_t type, unsigned int weaponIndex, bool cycleForward, bool skipEmpties, bool skipHaveNoAlts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GetWeapIdxForAltUsageHistory(struct cg_s* cgameGlob, unsigned int weapIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CycleWeapPrimary(int localClientNum, int cycleForward, int bIgnoreEmpty, int bIgnoreStanceUnusable)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CG_GetPrimaryForAltModeWeapon(const struct cg_s* cgameGlob, unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CG_AltWeaponToggleIndex(int localClientNum, const struct cg_s* cgameGlob, bool selectPrimaryWeapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ToggleWeaponAltMode(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ActionSlotUsageAllowed(struct cg_s* cgameGlob, enum ActionSlotType type)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ActionParms(int* slotResult)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ActionSlotDown_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ActionSlotUp_f()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_EjectWeaponBrass(int localClientNum, const struct entityState_s* ent, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void TakeWeaponIfEmpty(int localClientNum, struct playerState_s* ps)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_ClientViewLockedOnTurret(int localClientNum, int entnum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_FireWeapon_AddNonPlayerWeaponFlash(int localClientNum, const struct entityState_s* ent, const unsigned short tagName, unsigned int weapon, bool isPlayerView)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_FireWeapon_FireSound(int localClientNum, struct centity_s* cent, int event, const unsigned short tagName, struct DObj* obj, const struct WeaponDef* weaponDef, bool isPlayerView, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_FireWeapon_Rumble(int localClientNum, const struct entityState_s* ent, const struct WeaponDef* weaponDef, bool isPlayerView)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_FireWeapon(int localClientNum, struct centity_s* cent, int event, int knownHitClientNum, const unsigned short tagName, unsigned int weapon, bool isPlayerView)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WhizbySound(int localClientNum, const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct cg_s* CG_GetLocalClientGlobalsForEnt(int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_GetViewDirection(int localClientNum, int entityNum, float* forward, float* right, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_CalcEyePoint(int localClientNum, int entityNum, float* eyePos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_CalcMuzzlePoint(const int localClientNum, const int entityNum, const unsigned int flashTag, float* out_Point)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_BulletTracer_ShouldSpawn_TrajectoryEffects(int localClientNum, struct centity_s* attackerEnt, const struct WeaponDef* weaponDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletTrajectoryEffects(int localClientNum, int sourceEntityNum, int weaponIndex, const float* startPos, const float* position, int surfType, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RandomEffectAxis(const float* forward, float* left, float* up)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_OverrideImpactEffectType(const int localClientNum, const int sourceEntityNum, enum ImpactType* fxImpactType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetImpactEffectForWeapon(int localClientNum, const int sourceEntityNum, const int weaponIndex, const int surfType, const int impactFlags, const struct FxEffectDef** outFx, struct snd_alias_list_t** outSnd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_CullBulletHitEffect_Cell(const struct cg_s* cgameGlob, const float* eyeDir, const float* position, const float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_CullBulletHitEffect_Normal(int localClientNum, const struct cg_s* cgameGlob, int eventType, const float* eyeDir, const float* position, const float* axis[0x3], int targetEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_CullBulletHitEffect(int localClientNum, int eventType, const float* position, const float* axis[0x3], int targetEntityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float GetSplatterHeight(int localClientNum, struct centity_s* targetEnt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void BloodSplatterOnShield(int localClientNum, int entityNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletImpactEffects(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* position, const float* normal, int surfType, int event, unsigned char impactEffects, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_BulletHitEvent_Internal(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, int event, unsigned char impactEffects, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BulletHitEvent(int localClientNum, int sourceEntityNum, int targetEntityNum, int weaponIndex, const float* startPos, const float* position, const float* normal, int surfType, int event, unsigned char impactEffects, int hitContents)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void BulletHitClientEventSound(int localClientNum, const float* position, int surfType, int event)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BulletHitClientEvent(int localClientNum, int sourceEntityNum, int weaponIndex, const float* startPos, const float* position, int surfType, int event, unsigned char impactEffects)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DecodeHitLocToWorldSpace(int localClientNum, struct cg_s* cgameGlob, unsigned int eventParm, float* result, bool* resultHitFront)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CalcViewmodelHitPos(int localClientNum, unsigned int eventParm, float* resultPos, float* resultNormal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_ViewmodelShieldHitStore(int localClientNum, unsigned int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ViewmodelShieldHitsProcess(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BulletHitClientShieldEvent(int localClientNum, int sourceEntityNum, int weaponIndex, int surfType, int event, unsigned int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ExplosiveImpactOnShieldEvent(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_ExplosiveSplashOnShieldEvent(int localClientNum, int originalDamage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_MeleeBloodEvent(int localClientNum, const struct centity_s* cent, int eventParm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SetupWeaponDef(int localClientNum, unsigned int weapIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int ValidLatestPrimaryWeapIdx(struct cg_s* cgameGlob, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetAltUsageFlag(struct cg_s* cgameGlob, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CG_UpdatePrimaryForAltModeWeapon(struct cg_s* cgameGlob, unsigned int oldWeaponIndex, unsigned int newWeaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_SelectWeaponIndex(int localClientNum, unsigned int weaponIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_ScopeIsOverlayed(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_ThermalScopeIsOverlayed(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_GetWeaponZoom(const struct cg_s* cgameGlob, const struct WeaponDef* weapDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int CG_PlayerTurretWeaponIdx(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_PlayerUsingScopedTurret(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_PlayerUsingThermalTurret(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayerTurret_HeatEnabled(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float CG_PlayerTurret_HeatValue(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayerTurret_HeatOverheated(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GetIconDimsForPlayer(int localClientNum, const struct centity_s* cent, float* x, float* y, float* w, float* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawTargetBox(float x, float y, float w, float h, struct Material* icon, float alpha)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float GetTargetboxAlphaForPlayer(int localClientNum, const struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GetIconDimsForVehicle(int localClientNum, const struct DObj* dobj, const float* origin, float* x, float* y, float* w, float* h)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void DrawTargetBoxVehicle(int localClientNum, const struct DObj* dobj, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawTargetBoxVehicles(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawTargetBoxPlayers(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DrawTargetBoxSelf(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawFriendOrFoeTargetBoxes(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_DrawRemoteMissileOverlay(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DebugDrawMissileProjectedSound(const struct MissileConeSoundVars* mcv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetupAndValidateConeVars(const struct centity_s* cent, struct MissileConeSoundVars* mcv)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CalcDistanceFactors(const float* listenerOrigin, const struct MissileConeSoundVars* mcv, float* result_line, float* result_missile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float NormalizeForMinMax(float original, float min, float max)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayMissileProjectedConeSound(int localClientNum, struct centity_s* cent)
{

}

#endif // __UNIMPLEMENTED__
