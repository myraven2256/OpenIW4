//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void `dynamic initializer for 'physGlob''()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_phys()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ODE_ForEachBody<void (__cdecl*)(dxBody *)>(struct dxWorld* world, function * func)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct dxGeom* Phys_GeomAlloc(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GeomFree(struct dxGeom* const geom, const struct dxWorld* const world)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct dxBody* Phys_BodyAlloc(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyFree(struct dxBody* const body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct PhysObjUserData* Phys_UserDataAlloc(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_UserDataFree(struct PhysObjUserData* const data, enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGetRotation(struct dxBody* body, float* outRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetRotation(int obj, float* outRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGetCenterOfMass(struct dxBody* body, float* outPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_InitJoints()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitCommon()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ShutdownCommon()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_InitWorld(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ShutdownWorld(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitClient()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ShutdownClient()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_InitServer()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ShutdownServer(bool error)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_GetStateFromBody(struct dxBody* body, struct BodyState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjGetPositionFromCenterOfMass(struct dxBody* body, const float* rotation[0x3], const float* centerOfGravity, float* objPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetCenterOfMassFromObjOrigin(int obj, const float* objOrigin, float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjUpdateTunnelTracePos(int obj, const float* newCenterOfMass, const float* rotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_AdjustForNewCenterOfMass(struct dxBody* body, const float* newRelCenterOfMass, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_MassSetBrushTotal(struct dMass* m, float totalMass, const float* momentsOfInertia, const float* productsOfInertia)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_MassSetGlassTotal(struct dMass* m, float totalMass, const struct GeomStateGlass* glassState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyAddGeomAndSetMass(enum PhysWorld worldIndex, struct dxBody* body, float totalMass, const struct GeomState* geomState, const float* centerOfMass, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct dxBody* Phys_CreateBodyFromState(enum PhysWorld worldIndex, const struct BodyState* state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjCreateAngles(enum PhysWorld worldIndex, const float* position, const float* angles, const float* velocity, const struct PhysPreset* physPreset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjCreateAxis(enum PhysWorld worldIndex, const float* position, const float* axis[0x3], const float* velocity, const struct PhysPreset* physPreset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjCreate(enum PhysWorld worldIndex, const float* position, const float* quat, const float* velocity, const struct PhysPreset* physPreset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetOrientation(int id, const float* newPosition, const float* newRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetPosition(int id, const float* newPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBox(enum PhysWorld worldIndex, int id, const struct Bounds* bounds, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBoxRotated(enum PhysWorld worldIndex, int id, const struct Bounds* bounds, const float* orientation[0x3], bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomBrushModel(enum PhysWorld worldIndex, int id, unsigned short brushModel, const struct PhysMass* physMass, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjSetInertialTensor(int id, const struct PhysMass* physMass, float scaleCenterOfMassZ, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCollmap(enum PhysWorld worldIndex, int id, const struct PhysCollmap* collmap, float scaleCenterOfMassZ, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinder(enum PhysWorld worldIndex, int id, const struct Bounds* bounds, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinderDirection(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* centerOfMass, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCylinderRotated(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* center, const float* orientation[0x3], bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomCapsule(enum PhysWorld worldIndex, int id, const int direction, const float radius, const float halfHeight, const float* centerOfMass, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddGeomGlass(enum PhysWorld worldIndex, int id, const struct FxGlassSystem* glassSys, unsigned int pieceIndex, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetCollisionFromXModel(const struct XModel* model, enum PhysWorld worldIndex, int physId, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetCollisionFromDObj(const struct DObj* obj, enum PhysWorld worldIndex, int physId, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GetCenterOfMassFromDObj(const struct DObj* obj, float* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PhysObjSetCollisionFromModelIndex(int index, enum PhysWorld worldIndex, int physId, float scaleCenterOfMassZ, bool loadingSavegame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetAngularVelocityRaw(int id, float* outAngularVelocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetAngularVelocity(int id, const float* angularVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetAngularVelocityRaw(int id, const float* angularVel)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetVelocity(int id, const float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetVelocity(int id, float* velocity)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetPosition(int id, float* outPosition, float* outRotation[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetCenterOfMass(int id, float* outPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjDestroy(enum PhysWorld worldIndex, int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddRelativeTorque(int id, const float* torqueRelativeToBody)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddForce(int id, const float* worldPos, const float* force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjAddImpulse(enum PhysWorld worldIndex, int id, const float* worldPos, const float* impulse)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_TweakBulletImpact(float* worldPos, float* bulletDir, const float* centerOfMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjBulletImpact(enum PhysWorld worldIndex, int id, const float* worldPosRaw, const float* bulletDirRaw, float bulletSpeed, float scale)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_ObjGetEffectiveInverseMassAtPoint(int obj, const float* worldPos, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_ObjGetMomentumAtPoint(int obj, const float* worldPos, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_ObjGet2BodyImpulseAtPoint(int obj1, int obj2, const float* worldPos, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_GetContactCFM(unsigned int worldIndex, float objInvMass, struct dxBody* body0, struct dxBody* body1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_GetContactERP(unsigned int worldIndex, float timestep, struct dxBody* body0, struct dxBody* body1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float Phys_GetContactMCV(unsigned int worldIndex, float timestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_NearCallback(void* userData, struct dxGeom* geom1, struct dxGeom* geom2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DebugDrawCylinder(float radius, float halfHeight, const float* origin, const float* rotation[0x3], unsigned int cylAxis)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DebugDrawCollmap(enum PhysWorld worldIndex, struct dxGeom* geom, const float* bodyRotation[0x3], const float* bodyOrigin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjDraw(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_CheckIfAliveTooLong(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int Phys_DrawDebugTextForWorld(enum PhysWorld worldIndex, const char* worldText, float* x, float* y, float charHeight, const struct ScreenPlacement* scrPlace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_DrawDebugText(const struct ScreenPlacement* scrPlace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Phys_DoBodyOncePerFrame(unsigned int worldIndex, struct dxBody* body, float deltaT)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ContactEffects(struct dxWorld* world)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_RunFrame(enum PhysWorld worldIndex, float seconds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void dxPostProcessIslands(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_BodyGrabSnapshot(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GeomUserGetAAContainedBox(struct dxGeom* geom, struct Bounds* bounds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_ObjTunnelTrace(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_DoBodyOncePerRun(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_GetSnapshotTime(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_GetCurrentTime(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjGetSnapshot(enum PhysWorld worldIndex, int id, float* outPos, float* outMat[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RewindCurrentTime(enum PhysWorld worldIndex, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_GetPerformance(float* average, int* mintime, int* maxtime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_PerformanceEndFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_PerformanceAddTime(int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RunServerFrame(float timestep)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_LockWorld(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_UnlockWorld(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RunToTime(enum PhysWorld worldIndex, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RunToTimeDelayed(enum PhysWorld worldIndex, int timeNow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_RunToTimeCmd(struct PhysicsCmd* cmd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_EndFrame()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetInterpolatedState(enum PhysWorld worldIndex, int id, float* outPos, float* outQuat)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetMass(int id, float totalMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetFriction(int id, float friction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetBounce(int id, float bounce)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_ObjIsAsleep(int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSave(int id, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjLoad(enum PhysWorld worldIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct dxBody* Phys_BodyGetPrev(struct dxBody* body)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_SaveAllObjsInWorld(enum PhysWorld worldIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Phys_LoadAllObjsInWorld(enum PhysWorld worldIndex, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ArchiveState(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Phys_ObjGetSaveIndex(int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_ObjFromSaveIndex(enum PhysWorld worldIndex, unsigned int objSaveIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetHingeParams(enum PhysWorld worldIndex, int id, float motorSpeed, float motorMaxForce, float lowStop, float highStop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateHinge(enum PhysWorld worldIndex, int obj1, int obj2, const float* anchor, const float* axis, float motorSpeed, float motorMaxForce, float lowStop, float highStop)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateBallAndSocket(enum PhysWorld worldIndex, int obj1, int obj2, const float* anchor)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetAngularMotorParams(enum PhysWorld worldIndex, int id, const float* motorSpeeds, const float* motorFMaxs, const float* lowStops, const float* highStops)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateAngularMotor(enum PhysWorld worldIndex, int obj1, int obj2, int numAxes, const float* axes[0x3], const float* motorSpeeds, const float* motorFMaxs, const float* lowStops, const float* highStops)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreateOrientationConstraint(enum PhysWorld worldIndex, int obj, struct dxJoint* allocatedSpace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_CreatePathConstraint(enum PhysWorld worldIndex, int obj, struct dxJoint* allocatedSpace)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_JointDestroy(enum PhysWorld worldIndex, int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetCollisionCallback(enum PhysWorld worldIndex, function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetPostFrameCallback(enum PhysWorld worldIndex, function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetImpactCallback(enum PhysWorld worldIndex, function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetGlassCallback(enum PhysWorld worldIndex, function * callback)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_JointGetLimitAxis(enum PhysWorld worldIndex, int id, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_AddJitterRegion(enum PhysWorld worldIndex, const float* origin, float innerRadius, float outerRadius, float minDisplacement, float maxDisplacement)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetContactCentroid(int id, const float* worldPos)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetWorldUsesContactCentroids(enum PhysWorld world, bool useCentroids)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Phys_GetWorldUsesContactCentroids(enum PhysWorld world)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetWorldClipMask(enum PhysWorld worldIndex, int clipMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Phys_GetWorldClipMask(enum PhysWorld worldIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Phys_ObjGetFlags(int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetFlags(int id, unsigned int newFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetState(int id, enum physStuckState_t state)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum physStuckState_t Phys_ObjGetState(int id)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjGetPreviousCenterOfMass(int id, float* outPosition)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum PhysWorld Phys_ObjGetWorld(int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetDebugContacts(int id, bool debug)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetGravityDirClientWorlds(const float* down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_SetGravityDirServerWorlds(const float* down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjDisable(int obj)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Phys_PullJointTogether(int physJoint)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Phys_ObjSetAutoDisableFaster(int obj)
{

}

#endif // __UNIMPLEMENTED__
