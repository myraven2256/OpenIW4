//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_cl_parse()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SHOWNET(struct msg_t* msg, char* s)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SavePredictedOriginForServerTime(struct clientActive_t* cl, const int serverTime, const float* predictedOrigin, const float* predictedVelocity, const float* viewangles, int bobCycle, int movementDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_GetClientArchiveIndexForServerTime(struct clientActive_t* cl, const int serverTime, int* resultIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetPredictedOriginForServerTime(struct clientActive_t* cl, const int serverTime, float* predictedOrigin, float* predictedVelocity, int* bobCycle, int* movementDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetPredictedViewangleForServerTime(struct clientActive_t* cl, const int serverTime, float* viewangles)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetSelectedLocationForServerTime(struct clientActive_t* cl, const int serverTime, float* selectedLocation)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CL_GetSelectedLocationAngleForServerTime(struct clientActive_t* cl, const int serverTime, float* selectedLocationAngle)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_DeltaEntity(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* frame, int newnum, struct entityState_s* old)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_CopyOldEntity(struct clientActive_t* cl, struct clSnapshot_t* frame, struct entityState_s* old)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_DeltaClient(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* frame, int newnum, struct clientState_s* old, int unchanged)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CL_ParsePacketEntities(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* oldframe, struct clSnapshot_t* newframe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ParsePacketClients(struct clientActive_t* cl, struct msg_t* msg, const int time, struct clSnapshot_t* oldframe, struct clSnapshot_t* newframe)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ReadOverlayBits(struct msg_t* msg, int numChangedEnts)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ParseSnapshot(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ServerIdChanged(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_SystemInfoChanged(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ParseMapCenter(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ParseGamestate(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ParseCommandString(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CL_ParseMatchData(const int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CL_ParseServerMessage(int localClientNum, struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__
