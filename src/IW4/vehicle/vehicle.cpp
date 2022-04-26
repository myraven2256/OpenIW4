//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_vehicle()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct VehicleHandler* Vehicle_GetHandler(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const struct VehicleDef* Vehicle_LoadServerDefAssets(const char* name, int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Vehicle_RegisterServerDef(const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_ClearServerDefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_LoadServerDefs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct VehicleDef* Vehicle_GetServerDef(int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Vehicle_GetServerDefName(int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct GraphFloat* Vehicle_GetAccelGraph(int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateSounds(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_PrecacheDefaultDef()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_InitSystem(int restart)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct gentity_s* Vehicle_GetCollMap(const char* modelname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_SetupCollmap(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_SetupSystem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_ShutdownDevgui()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_ShutdownSystem()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_WriteSaveGame(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_ReadSaveGame(struct SaveGame* save)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_FreeEntity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_FreeReferences(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct Vehicle* Vehicle_Get(int vehIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_DebugLine(float* start, float* end, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_DebugBox(float* pos, float width, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_DebugCapsule(float* pos, float rad, float height, float r, float g, float b)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VEH_GetTagBoneIndex(struct gentity_s* ent, int barrel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GetWheelOrigin(const struct gentity_s* ent, int idx, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_ResetWheels(struct gentity_s* ent, struct vehicle_physic_t* phys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_SetPosition(struct gentity_s* ent, const float* origin, const float* vel, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool VEH_DObjHasRequiredTags(struct gentity_s* ent, int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_InitModelAndValidateTags(struct gentity_s* ent, int vehDefIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Impact(int obj, const float* normal, float momentumMag, bool twoBodies)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_InitPhysVeh(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_JoltBody(struct gentity_s* ent, const float* dir, float intensity, float speedFrac, float decel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_CalcAccel(struct gentity_s* ent, char* move, float* bodyAccel, float* rotAccel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_ClipVelocity(const float* in, const float* normal, float* out)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VEH_CorrectAllSolid(struct gentity_s* ent, struct trace_t* trace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_ClearGround(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GroundTrace(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_MoveTrace(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int VEH_SlideMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_StepSlideMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_GroundMove(struct gentity_s* ent, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_AirMove(struct gentity_s* ent, int gravity, float frameTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_GroundPlant(struct gentity_s* ent, struct vehicle_physic_t* phys, int gravity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_BackupPosition(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_VerifyPosition(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Vehicle_AttachedStickyMissile(struct gentity_s* ent, struct gentity_s* missile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_PushAttachedStickyMissile(struct gentity_s* ent, struct gentity_s* missile, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Vehicle_IsPushedEntityInSolid(struct gentity_s* ent, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePushedEntityLocation(struct gentity_s* check, struct gentity_s* pusher, float* newOrigin, float* newAngles, float* deltaMat[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Vehicle_TryPushingEntity(struct gentity_s* check, struct gentity_s* pusher, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_PushEntity(struct gentity_s* ent, struct gentity_s* target, float* pushDir, float* deltaOrigin, float* deltaAngles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_TouchEntities(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateAim(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Vehicle_AccelerateSpeed(float speed, float tgtSpeed, float accel, float dt)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Veh_BoatGetRockingAngles(struct Vehicle* const veh, float* const targetPitch, float* const targetRoll)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateBody(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdateSteering(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_UpdatePlayerControlledWeapon(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePlayerMove_NonPhysics(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePlayerMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_CalcPhysVelFromPrevState(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateRotateToYaw(struct Vehicle* veh, const struct VehicleDef* vehDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePathMove_NonPhysics(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePathConstrainedMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdatePathFollowMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateDefaultMove_NonPhysics(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateDefaultMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_LinkCommonChecks(struct gentity_s* vehEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_LinkPlayerTurretControlOnly(struct gentity_s* vehEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VEH_LinkPlayer(struct gentity_s* vehEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VEH_UnlinkPlayer(struct gentity_s* vehEnt, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_MyChanges()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_InitBoneTags(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_InitPhysics(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct Vehicle* Vehicle_Allocate()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Create(struct gentity_s* ent, const char* typeName, const struct gentity_s* player, int load)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_IsVehicleUsable(struct gentity_s* ent, struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_IsVehicleUnusable(const struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct gentity_s* G_GetPlayerVehicle(const struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Vehicle_IsImmune(struct gentity_s* ent, int mod, int damageFlags, int weapon)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Vehicle_Damage(struct gentity_s* targ, const struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dFlags, int mod, int weapIndex, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_FinishDamage(struct gentity_s* targ, const struct gentity_s* inflictor, struct gentity_s* attacker, const float* dir, const float* point, int damage, int dFlags, int mod, int weapIndex, enum hitLocation_t hitLoc, unsigned int modelIndex, unsigned int partName, int timeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Vehicle_IsPlayerProtected(const struct gentity_s* player)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Controller(const struct gentity_s* pSelf, int* partBits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateCameraState(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_PreThink(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_RunPreThinkForAllVehicles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_SpeedboatBouncing(struct Vehicle* veh, float timestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_CollideWheels(struct gentity_s* pSelf, float timestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_CollideVehicleWithVehicle(struct gentity_s* ent1, struct gentity_s* ent2, float timeStep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_CollideAllVehicles(float stepSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Think(struct gentity_s* pSelf)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Pain(struct gentity_s* pSelf, struct gentity_s* pAttacker, int damage, const float* point, const int mod, const float* dir, const enum hitLocation_t hitLoc, const int weaponIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Touch(struct gentity_s* pSelf, struct gentity_s* pOther, int bTouched)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Use(struct gentity_s* pEnt, struct gentity_s* pOther, struct gentity_s* pActivator)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Die(struct gentity_s* pSelf, const struct gentity_s* pInflictor, struct gentity_s* pAttacker, const int damage, const int mod, const int weapon, const float* dir, const enum hitLocation_t hitLoc, int psTimeOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_SpawnEntity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_SpawnCollmapEntity(struct gentity_s* ent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_TrophyTestMissile(struct gentity_s* missileEnt, const float* start, float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateAnimScriptedMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Vehicle_UpdateAiMove(struct Vehicle* veh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_Knockback(struct Vehicle* veh, const float* dir, enum meansOfDeath_t mod, float forceScale, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Vehicle_ExplosionEvent(const float* origin, float innerRadius, float outerRadius, bool isCylinder, float forceScale, const float* impulse)
{

}

#endif // __UNIMPLEMENTED__
