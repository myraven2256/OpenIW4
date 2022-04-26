//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void LiveStorage_ShowResetStatsError(int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStatsWithConfirmation(int controllerIndex, enum StatsSource statsSource, enum ResetStatsReason reason)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStatsCancel(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStatsConfirm(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_DiscardStats(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_FinalizeStatsRead(const int controllerIndex, enum StatsSource statsSource, struct StructuredDataDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_SetCustomClassNames(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_PrestigeResetForCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LiveStorage_GetRankForCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_PersistentDataEnabled()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_GetPlayerUnlockDataBuffer(struct StructuredDataBuffer* result, const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StatsSource LiveStorage_GetActiveStatsSource(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_ShouldReadOnlineStats(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_ShouldReadOfflineStats(int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_ClientUsingOnlineStatsOffline(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_EnsureWeHaveStats_Online(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_EnsureWeHaveStats_Offline(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_EnsureWeHaveStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetActiveStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStats_SetStatsSource(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStats_ClearStatsSource(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_CheckNotResettingStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_WriteChecksumToBuffer(unsigned char* buffer, const int len)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ResetStats(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_SaveStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_OpenPlayerDataRead(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_FinalizeStatsReadCommon(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_StatPrestigeResetCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const struct CaCItem* Script_FindCacItem(int itemIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Script_ValidateSlotItem(int itemIndex, const int level, unsigned int typeMask)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Script_CaCHasOverkill(const int controllerIndex, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ValidateCaCStat(const int controllerIndex, int index, const int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ValidateSetStatCmd(int index, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_StatsInit(const int controllerIndex, bool clear)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_StatsInitCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult LiveStorage_SetLookedUpDataFromString(struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_MaySetPersistentData(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_DoWeHaveStatsForSource(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_DoWeHaveStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_MaySetPersistentData_ControllerIndex(int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_EnsureMaySetPersistentData(int localClientNum, const char* debugInfo)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void PrintArgs()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_DataSetCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_DataGetCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DataDumpCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DumpUnlockedItemsCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DataSetPrintStrings(const char* const* navStrings, int navStringCount, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DataGetPrintStrings(const char* const* navStrings, int navStringCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DataSetInternalString(const char* const* navStrings, int navStringCount, const char* value, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_DataSetInternalInt(const char* const* navStrings, int navStringCount, int value, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_DataSetInternalIntByName(const char* name, int value, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_PlayerDataSetIntByName(const int controllerIndex, const char* name, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_DataGetInternalLookup(struct StructuredDataLookup* lookup, const char* const* navStrings, int navStringCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* LiveStorage_DataGetInternalString(const char* const* navStrings, int navStringCount, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_DataGetInternalInt(const char* const* navStrings, int navStringCount, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_DataGetInternalIntByName(const char* name, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void ShowPopupGettingData(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_ShowPopupGettingDataIfNeeded(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* LiveStorage_PlayerDataGetString(const int controllerIndex, const char* const* navStrings, int navStringCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* LiveStorage_PlayerDataGetStringByName(const int controllerIndex, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_PlayerDataGetInt(const int controllerIndex, const char* const* navStrings, int navStringCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_PlayerDataGetIntByName(const int controllerIndex, const char* name)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct StructuredDataDef* LiveStorage_ReadPlayerDataDef(unsigned char* buffer, int bufsize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_WritePlayerDataDef(unsigned char* buffer, int bufsize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* GetStringForStat(int stat, const struct StatStringPair* pairs, int pairCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetStatForString(const char* string, const struct StatStringPair* pairs, int pairCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetStructuredDataForStat(int index, struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_SetStructuredDataForStat(int index, const int value, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetStat(const int controllerIndex, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_SetStat(const int controllerIndex, int index, const int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_UpdatePersistentDataVersion(const int controllerIndex, enum StatsSource statsSource, struct StructuredDataDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_SetPersistentDataVersion(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetPersistentDataVersion(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetPersistentDataDefVersion()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int LiveStorage_GetPersistentDataDefFormatChecksum()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_NewUser_Common(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_RecordPlayTime(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int LiveStorage_GetAndResetLastPlayTime(struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_EndGame(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_BeginGame(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const unsigned char* LiveStorage_GetStatBuffer(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const unsigned char* LiveStorage_GetStableStatBuffer(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char* LiveStorage_GetPersistentDataBufferForSource(const int controllerIndex, enum StatsSource statsSource)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned char* LiveStorage_GetPersistentDataBuffer(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_StatsWriteNeeded(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_StatsWriteNotNeeded(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_GettingStats(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_WaitForWriteStatsBuffer(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_NewUser(const int controllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetStatForCmd(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LiveStorage_GetControllerForCmd(int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_TrySetStatForCmd(int index, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_StatSetCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_StatGetCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_StatGetInDvarCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_UploadStatsCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LiveStorage_ReadStatsCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void InitRequiredTask(struct RequiredTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_InitCommon()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LiveStorage_Shutdown()
{

}

#endif // __UNIMPLEMENTED__
