//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int LB_XUserDataToInt(struct _XUSER_DATA* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_IntToXUserData(struct _XUSER_DATA* xdata, const int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_CompareXUserStatsRowRanks(const void* r1, const void* r2)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_Enumerate(int controllerIndex, struct Leaderboard* lb, void* hEnum, void* pvBuffer, unsigned long cbBuffer, const int taskType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_GetXUserStatsSpec(struct LeaderboardDef* lbDef, struct _XUSER_STATS_SPEC* spec)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetByRank(struct Leaderboard* lb, const int controllerIndex, const unsigned int topRank)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetByPlayer(struct Leaderboard* lb, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetFriendStats(const int controllerIndex, struct Leaderboard* lb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_GetFriends(struct Leaderboard* lb, const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_SortXUserStatsByRank(struct _XUSER_STATS_READ_RESULTS* stats)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_CalcPlayerIndex(const int localControllerIndex, struct _XUSER_STATS_READ_RESULTS* stats)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_ClearPlayerStats(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_UploadPlayersCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LB_FlushCmd()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_UploadPlayerDataComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_ReadLeaderboardComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static enum taskCompleteResults LB_GetFriendsComplete(const int slot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool LB_CalcOffset(const int offset, struct Leaderboard* lb)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct _XUSER_STATS_READ_RESULTS* LB_UpdateLeaderboard(const int localClientNum, const int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_Init_Platform()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int LB_FeederCount(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_OnSelect(const int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LB_GetXUserCol(struct _XUSER_STATS_ROW* row, int colId)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LB_UploadPlayerData_Platform(const int localControllerIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_CheckOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void LB_EndOngoingTasks()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* HandleNumber(struct LbColumnDef* lbColDef, struct _XUSER_STATS_ROW* row, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* HandleTime(struct LbColumnDef* lbColDef, struct _XUSER_STATS_ROW* row, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* HandleLevelDisplay(struct LbColumnDef* lbColDef, struct _XUSER_STATS_ROW* row, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* HandleLevelIcon(struct LbColumnDef* lbColDef, struct _XUSER_STATS_ROW* row, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static char* HandlePercent(struct LbColumnDef* lbColDef, struct _XUSER_STATS_ROW* row, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* LB_FeederItemText_Platform(const int localClientNum, int index, struct LbColumnDef* lbColDef, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LB_GetCol(const char* lbName, const char* colName, const unsigned __int64 xuid, struct LbGetColData* colData, struct overlappedTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum taskCompleteResults LB_GetColComplete(struct overlappedTask* task)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* LB_GetColString(struct LbGetColData* colData)
{

}

#endif // __UNIMPLEMENTED__
