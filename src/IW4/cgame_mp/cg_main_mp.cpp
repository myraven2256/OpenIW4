//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void CG_ClearSoundPlaybackTracking()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int CG_GetClientNumForLocalClient(int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_IsRagdollTrajectory(const struct trajectory_t* trajectory)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void TRACK_cg_main()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AllocateClientMemory(int maxLocalClients)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_FreeClientMemory()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_GetGameTime(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Frame(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetDObjOrientation(int localClientNum, int dobjHandle, float* axis[0x3], float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CopyEntityOrientation(int localClientNum, int entIndex, float* origin_out, float* axis_out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_CopySoundEntityOrientation(int localClientNum, int entIndex, float* origin_out, float* axis_out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GetSoundEntityOrientation(const union SndEntHandle sndEnt, float* origin_out, float* axis_out[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct playerState_s* CG_GetPredictedPlayerState(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_IsValidRemoteInputState(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_GameMessage(int localClientNum, const char* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_BoldGameMessage(int localClientNum, const char* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XAnim_s* CG_GetHelicopterAnims()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_RegisterGraphics(int localClientNum, const char* mapname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StartAmbient(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayClientSoundAlias(int localClientNum, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayClientSoundAliasByName(int localClientNum, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayEntitySoundAlias(int localClientNum, int entitynum, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayEntitySoundAliasFootstep(int localClientNum, const struct centity_s* cent, struct snd_alias_list_t* aliasList, bool isPlayerView)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlayEntitySoundAliasByName(int localClientNum, int entitynum, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopSoundAlias(const int localClientNum, const int entitynum, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopSoundsOnEnt(const int localClientNum, const int entitynum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopSoundAliasByName(int localClientNum, int entityNum, const char* aliasName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopClientSoundAliasByName(int localClientNum, const char* aliasName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CG_ShouldPlaySoundOnLocalClient(int localClientNum, int entitynum, const float* origin, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_SubtitlePrint(int msec, const struct snd_alias_t* alias)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_SubtitleSndLengthNotify(int msec, void* lengthNotifyData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_EntityCustomSndLengthNotify(int msec, void* lengthNotifyData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_AddFXSoundAlias(int localClientNum, const float* origin, struct snd_alias_list_t* aliasList, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_UpdateSoundPlaybackTracking(const int localClientNum, const int entitynum, const float* origin, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAliasScaled(int localClientNum, int entitynum, const float* origin, struct snd_alias_list_t* aliasList, float volumeScale, float pitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAlias(int localClientNum, int entitynum, const float* origin, struct snd_alias_list_t* aliasList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAliasAtTime(int localClientNum, int entitynum, const float* origin, struct snd_alias_list_t* aliasList, int msecWhenPlayed)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAliasWithPitch(int localClientNum, int entitynum, const float* origin, struct snd_alias_list_t* aliasList, float pitch)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAliasByName(int localClientNum, int entitynum, const float* origin, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_PlaySoundAliasAsMasterByName(int localClientNum, int entitynum, const float* origin, const char* aliasname)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_PlayBoltedFxFromConfigstring(const int localClientNum, const int dobjHandle, const int csIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_StopBoltedFxFromConfigstring(const int localClientNum, const int dobjHandle, const int csIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_RestartSmokeGrenades(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_LoadHudMenu(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_InitVote(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct XModel* CG_GetXModel(const char* modelName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short CG_GetWeaponAttachBone(struct clientInfo_t* ci, enum weapType_t weapType, enum PlayerHandIndex hand)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned short CG_AttachWeapon(struct DObjModel_s* dobjModels, unsigned short numModels, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj* CG_CreateDObj(struct DObjModel_s* dobjModels, unsigned short numModels, struct XAnimTree_s* tree, int handle, int localClientNum, int otherClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct DObj* CG_GetDObj(int handle, int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_LoadAnimTreeInstances(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_FreeAnimTreeInstances(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_InitViewDimensions(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_GetClientNum(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int CG_GetEntityType(int localClientNum, int entNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void CG_InitDof(struct GfxDepthOfField* dof)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Init(int localClientNum, int serverMessageNum, int serverCommandSequence, int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_FreeWeapons(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_Shutdown(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void* Hunk_AllocXAnimClient(int size)
{

}

#endif // __UNIMPLEMENTED__
