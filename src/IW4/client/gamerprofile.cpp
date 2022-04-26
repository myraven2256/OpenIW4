//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void TRACK_xenon_gamerprofile()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct GamerSettingState* GamerProfile_GetProfileSettings(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool GamerProfile_IsProfileLoggedIn(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool GamerProfile_WasErrorOnRead(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GamerProfile_CheckForErrors(unsigned long error, int controllerIndex, char* ioMode)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void DebugReportProfileDVars(const char* headerMsg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static short GamerProfile_ReadShort(const char** const buf, unsigned int* const size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_WriteShort(char** const buf, unsigned int* const size, const short value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GamerProfile_ReadString(char* const dest, const unsigned int maxDestSize, const char** srcBuf, unsigned int* const srcSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_WriteString(const char* const src, char** const destBuf, unsigned int* const destSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GamerProfile_ParseBinaryProfile<GamerSettingExeConfig,GamerSettingExeConfigStrings>(int controllerIndex, const char* settingBuf, unsigned int size, struct GamerSettingExeConfig* config, struct GamerSettingExeConfigStrings* strings, const struct gpfield_t* stringFields, unsigned int fieldCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GamerProfile_ParseBinaryExeProfile(int controllerIndex, const char* settingBuf, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool GamerProfile_ParseBinaryCommonProfile(int controllerIndex, const char* settingBuf, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GamerProfile_CreateBindingsConfigEx(int controllerIndex, char* destBuf, unsigned int destSize, const void* const config, const unsigned int structSize, const void* strings, const struct gpfield_t* stringFields, unsigned int fieldCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GamerProfile_CreateExeBindingsConfig(int controllerIndex, char* buf, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned int GamerProfile_CreateCommonBindingsConfig(int controllerIndex, char* buf, unsigned int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_WriteSettings(int controllerIndex, const char* commonBuffer, unsigned int commonSize, const char* exeBuffer, unsigned int exeSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_SaveProfile(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ResetDvarsFromList(const struct GamerProfileSetting* gamerProfileSettingsList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ResetCommonDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ResetXProfileDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ResetMPDvars()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int GamerProfile_GetPlaylistNum(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_SetPlaylistNum(int controllerIndex, int playlistNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_ExecControllerBindings(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_UpdateDvarsFromProfile(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_UpdateProfilePlayTime(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int GamerProfile_GetPlayTimeSP(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int GamerProfile_GetPlayTimeSO(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int GamerProfile_GetPlayTimeMP(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_UpdateProfileFromDvars(int controllerIndex, enum profileWriteState_t profileWriteState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_UpdateCommand(int controllerIndex, bool force)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_SetPlayerHasPlayedBefore(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ApplySettingToProfile(int controllerIndex, unsigned long settingID, struct _XUSER_PROFILE_SETTING* profileSetting)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_UpdateMotd(int controllerIndex, const char* motd)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* GamerProfile_GetClanName(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ProcessReadResults(int controllerIndex, struct _XUSER_READ_PROFILE_SETTING_RESULT* readResults)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned long GamerProfile_ReadDelayedXProfileSettings(int controllerIndex, unsigned long* bytesRead, struct _XUSER_READ_PROFILE_SETTING_RESULT* readResults)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ReadXProfileSettings(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_LoadSettings(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void GamerProfile_ResetProfileDvars(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_InitAllProfiles()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_LogInProfile(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_LogOutProfile(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* GamerProfile_GetDvarValueFromList(const char* fieldName, const struct GamerProfileSetting* list)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* GamerProfile_GetDvarSettingByName(const char* settingName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum GamerProfileDataType GamerProfile_GetDataType(int dataIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int GamerProfile_GetDataIndexByName(const char* settingName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct GamerProfileData GamerProfile_GetDataByName(const int controllerIndex, const char* settingName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_SetData(const int controllerIndex, int dataIndex, struct GamerProfileData data)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void GamerProfile_DebugDrawFullscreenInfo()
{

}

#endif // __UNIMPLEMENTED__
