//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_vehicle_path()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_DebugLine(const float* start, const float* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_PathDebugLine(const float* start, const float* end, int forceDraw)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_SetScriptVariable(const char* key, const char* value, struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_ParseField(const char* key, const char* value, struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_ParseAllFields(struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_ZeroNode(struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_ClearNode(struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_InitNode(struct VehiclePathNode* node, short nodeIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_CopyNode(const struct VehiclePathNode* src, struct VehiclePathNode* dst)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static short VehPath_GetNodeIndex(unsigned short name, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VehPath_CalcNodeSpeed(short nodeIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VehPath_CalcNodeLookAhead(short nodeIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_CalcNodeAngles(short nodeIdx, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VehPath_GetSpeed(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VehPath_GetLookAhead(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_GetAngles(const struct VehiclePathPos* vpp, float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_GetForwardLookAheadOrigin(const struct VehiclePathPos* vpp, float* lookXYZ, float lookAheadOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_GetReverseLookAheadOrigin(const struct VehiclePathPos* vpp, float* lookXYZ, float lookAheadOffset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_AdvancePathPosForward(struct VehiclePathPos* vpp, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_AdvancePathPosReverse(struct VehiclePathPos* vpp, const float* dir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_AdvanceAnimPathPosForward(struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_AdvanceAnimPathPosReverse(struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_BeginSwitchNode(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_EndSwitchNode(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_DrawPath(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_Free()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_Setup()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_DrawDebug()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_InitPathPos(struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_FreePathPos(struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool VehPath_AttachPathPos(struct VehiclePathPos* vpp, short nodeIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_StartPathPos(struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool VehPath_IsEndOfPath(const struct VehiclePathPos* vpp)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_UpdatePathPos(struct VehiclePathPos* vpp, enum VehiclePathDir pathDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_UpdatePathPosAnimated(struct VehiclePathPos* vpp, const float* origin, const float* angles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_UpdatePathPosPhysics(struct VehiclePathPos* vpp, const float* origin, const float* angles, enum VehiclePathDir pathDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_UpdatePathPosLookAhead(struct VehiclePathPos* vpp, float lookAheadOffset, enum VehiclePathDir pathDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float VehPath_GetNotifyFraction(const struct VehiclePathNode* node)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VehPath_ProcessNotify(short nodeIndex, int entIndex, const float* origin, enum VehiclePathNotifyMode notifyMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool VehPath_UpdatePathPosNotifies(const struct VehiclePathPos* prevVpp, const struct VehiclePathPos* nextVpp, int entIndex, short waitNode, enum VehiclePathNotifyMode notifyMode, enum VehiclePathDir pathDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_SetPathPosSwitchNode(struct VehiclePathPos* vpp, short srcNodeIdx, short dstNodeIdx)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPath_SpawnNode(const char* className)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathScr_FreeScriptInfo()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

short VehPathScr_GetNodeIndex(unsigned int scriptParamIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathScr_AddFieldsForNode()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathScr_GetNodeField(int nodeIndex, int offset)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathCmd_GetNode()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathCmd_GetNodeArray()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void VehPathCmd_GetAllNodes()
{

}

#endif // __UNIMPLEMENTED__
