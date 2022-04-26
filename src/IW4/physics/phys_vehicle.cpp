//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_phys_vehicle()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsFrontWheel(unsigned int wheelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsRightWheel(unsigned int wheelIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_ObjGetInvMass(int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_ObjGetMass(int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PhysVeh_ComparePhysObj(struct PhysVehicle* physVeh, int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_RemoveStability(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PhysVeh_IsWrecked(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Crash(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Launch(struct PhysVehicle* physVeh, const float* launchVelocity, float spinFactor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Impact(struct PhysVehicle* physVeh, const float* normal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_LeakCheck()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct PhysVehicle* PhysVeh_Create(const float* position, const float* angles, int modelIndex, int passEntityNum, const struct VehiclePhysDef* def, const struct GraphFloat* accelGraph)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_WheelEnable(struct PhysVehicle* physVeh, int wheelIndex, const float* originLocal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_WheelSetFlags(struct PhysVehicle* physVeh, int wheelIndex, unsigned int flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PhysVeh_FinalizeWheels(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Destroy(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_InitDef(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_Save(struct PhysVehicle* physVeh, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct PhysVehicle* PhysVeh_Load(struct SaveGame* save, const struct VehiclePhysDef* def, const struct GraphFloat* accelGraph)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetVelocity(struct PhysVehicle* physVeh, const float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetSpeed(const struct PhysVehicle* physVeh, float speed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetState(struct PhysVehicle* physVeh, const float* position, const float* angles, const float* linearVelocity, const float* angularVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetCenterOfMass(const struct PhysVehicle* physVeh, float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetState(const struct PhysVehicle* physVeh, float* position, float* angles, float* velocity, bool clampVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetForwardDir(const struct PhysVehicle* physVeh, float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetWorldVelocity(const struct PhysVehicle* physVeh, float* vel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetLocalVelocity(const struct PhysVehicle* physVeh, float* localVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetWorldAcceleration(const struct PhysVehicle* physVeh, float* accel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetLocalAcceleration(const struct PhysVehicle* physVeh, float* accel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PhysVeh_GetWheelsOnGround(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PhysVeh_IsReversing(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CalcSpringParms(float timeStepSize, float invMass, float springConstant, float damping, float* erp, float* cfm)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_TorqueMove(struct PhysVehicle* physVeh, float yawTorque, float pitchTorque)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool PhysVeh_WheelIsBeingDriven(const struct PhysVehicle* physVeh, const struct PhysVehicleWheel* wheel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_CalcWheelFriction(unsigned int wheelIndex, const struct PhysVehicle* physVeh, struct PhysVehicleWheel* wheel, const float* normal, const float* frictionFwdDir, float timeStepSize, struct dSurfaceParameters* surfParms)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_HighCenteredMove(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_CollideWheels(struct PhysVehicle* physVeh, float timeStepSize, int* wheelSurfTypes, float* wheelCompressions)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_CollideVehicleWithVehicle(struct PhysVehicle* physVeh1, bool veh1DontAffect, struct PhysVehicle* physVeh2, bool veh2DontAffect, float timeStep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_UpdateTankSteering(struct PhysVehicle* physVeh, float steeringAngle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_SetSteeringAngle(struct PhysVehicle* physVeh, float steeringAngle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetFrontWheelCenter(const struct PhysVehicle* physVeh, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetRearWheelCenter(const struct PhysVehicle* physVeh, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetFrontWheelDist(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetRearWheelDist(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_GetSteeringPoint(const struct PhysVehicle* physVeh, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetSteeringPointDist(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetWheelBaseHalfWidth(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PhysVeh_CheckForJolt(struct PhysVehicle* physVeh, float invTimestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_UpdateControls(struct PhysVehicle* physVeh, const struct PhysVehicleControl* control)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_PostThink(struct PhysVehicle* physVeh, float invTimestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool PhysVeh_AreFrontWheelsOffGround(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_DebugText(struct PhysVehicle* physVeh, unsigned int* flags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_DisableCrashing(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_EnableCrashing(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PhysVeh_IsCrashingDisabled(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetTankSteering(struct PhysVehicle* physVeh, float maxYawSpeed, float yawAccel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetPathConstraintState(struct PhysVehicle* physVeh, const float* pos, const float* vel, float yaw, float yawVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_DisablePathConstraint(struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_AddForce(struct PhysVehicle* physVeh, const float* force, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_AddImpulse(struct PhysVehicle* physVeh, const float* impulse, const float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetConveyorBelt(struct PhysVehicle* physVeh, const float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void PhysVeh_SetTopSpeed(struct PhysVehicle* physVeh, float speed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetTopSpeed(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float PhysVeh_GetReverseSpeed(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int PhysVeh_IsAwake(const struct PhysVehicle* physVeh)
{

}

#endif // __UNIMPLEMENTED__
