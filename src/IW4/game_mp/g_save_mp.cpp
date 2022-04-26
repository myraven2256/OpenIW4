//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static void SV_SaveConfigstrings(const int first, const int count, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_LoadConfigstrings(const int first, const int count, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SaveWeapons(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LoadWeapons(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WriteEntity(struct gentity_s* ent, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReadEntity(struct gentity_s* ent, struct SaveGame* save)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WriteClient(const int clientNum, struct gclient_s* client, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReadClient(struct gclient_s* client, struct SaveGame* save)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WriteTurretInfo(struct Turret* turret, struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReadTurretInfo(struct Turret* turret, struct SaveGame* save)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SavePlayerCorpses(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LoadPlayerCorpses(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WriteLerpFrame(struct MemoryFile* memFile, struct lerpFrame_t* lerpFrame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReadLerpFrame(struct MemoryFile* memFile, struct lerpFrame_t* lerpFrame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void WriteClientInfo(struct MemoryFile* memFile, struct clientInfo_t* ci)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void ReadClientInfo(struct MemoryFile* memFile, const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_SaveInitState(struct MemoryFile* memFile, int restart, int scriptRunning)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LoadInitState(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_LoadLevelState(struct SaveGame* save)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_SaveLevelState(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_SaveMainState(struct MemoryFile* memFile, int demoSave, int fullState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_LoadMainState(struct SaveGame* save, int scriptRunning, int demoSave)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SaveState(struct MemoryFile* memFile, int isDemo, int restart, int scriptRunning)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LoadGame(int checksum, struct SaveGame* save, int scriptRunning, int demoSave)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LoadMigrationFromDevice(struct SaveGame* saveGame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void VerifySaveGame(struct SaveGame* saveGame, struct SaveHeader* header)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PreLoadGame(struct SaveGame** saveGame, int* levelTime)
{

}

#endif // __UNIMPLEMENTED__
