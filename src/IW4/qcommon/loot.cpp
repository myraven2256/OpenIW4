//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static int GetLevel(const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IsAllRequiredLootUnlocked(const struct StructuredDataBuffer* buffer, const struct StringTable* unlockTable, const char* requiredLootList)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool CheckValidRequiredLootList(const struct StringTable* unlockTable, const char* requiredLootList, int originalRow)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool IsLootWeaponUnlocked(const struct StructuredDataBuffer* buffer, const struct StringTable* unlockTable, const char* lootItemName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool GetLootFromUnlockTable(const struct StringTable* unlockTable, int row, struct Loot* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool IsChallengeComplete(const struct StructuredDataBuffer* buffer, const char* challengeBaseName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_IsItemUnlockedFromTable(const struct StructuredDataBuffer* buffer, const struct StringTable* unlockTable, int row)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LiveStorage_IsItemUnlockedFromTable_LocalClient(int localClientNum, const struct StringTable* unlockTable, int row)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool CheckValidItem(const struct StringTable* unlockTable, int row)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Loot_CheckForErrors()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_InitItemsUnlocked(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_FindItemsUnlockedLastGame(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetNew(struct StructuredDataBuffer* buffer, const char* arrayName, const char* itemName, char* errBuf, int errBufSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetNew_LocalClient(int localClientNum, const char* arrayName, const char* itemName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetWeaponPartNew(struct StructuredDataBuffer* buffer, const char* arrayName, const char* weaponName, const char* partName, char* errBuf, int errBufSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetWeaponPartNew_FullName(struct StructuredDataBuffer* buffer, const char* arrayName, const char* itemName, char* errBuf, int errBufSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetWeaponPartNew_LocalClient(int localClientNum, const char* arrayName, const char* itemName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int GetChallengeTier(const char* challengeName, char* errBuf, int errBufSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool SetChallengeTierNew(struct StructuredDataBuffer* buffer, const char* challengeName, char* errBuf, int errBufSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SetChallengeTierNew_LocalClient(int localClientNum, const char* challengeName)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void CG_MarkUnlockedItemsNew(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Loot_DumpUnlockedItems(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Mail_LookupMailIndex(struct StructuredDataLookup* lookup, int mailIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Mail_LookupMailProperty(struct StructuredDataLookup* lookup, const char* propertyName, enum LookupResultDataType expectedResultType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Mail_Lookup(struct StructuredDataLookup* lookup, int mailIndex, const char* propertyName, enum LookupResultDataType expectedResultType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Mail_GetArrivalTime(int localClientNum, int mailIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Mail_CompareArrivalTime(const unsigned char& indexA, const unsigned char& indexB)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Mail_SortMailIndices(int localClientNum, unsigned char* begin, unsigned char* end)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Mail_GetMailArraySize()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Loot_Unlock(struct StructuredDataBuffer* buffer, const struct Loot* loot)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Mail_GetCurrentTime()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Mail_OpenSelected(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Mail_DeleteSelected(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Mail_DoLottery(int localClientNum, function * randomFunction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* GetLocalizedTimeString(unsigned int seconds)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_FeederItemText(const int localClientNum, int mailIndex, int column, struct Material** material)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetSelectedSubject(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetSelectedFrom(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetSelectedReceived(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetSelectedBody(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetSelectedLoot(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Mail_GetLootType(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Mail_SelectedGivesLoot(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Mail_SelectedRanLottery(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int Mail_GetTimeToFollowup(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Mail_AnyNewMail(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Loot_GetLotteryLootLocalized(int localClientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* Loot_GetRandomLoot(const struct StructuredDataBuffer* buffer, int lootTier, const char* mapName, const char* playlistLootGroup, function * randomFunction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool Mail_CreateLootMail(struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, const char* lootName, function * randomFunction)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Loot_RegisterDvars()
{

}

#endif // __UNIMPLEMENTED__
