//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void SV_InitPacketAnalysis()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_ClearPacketAnalysis()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackNumFieldsSkippedInPlayerstate(int numFieldsSkipped)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackNumFieldsSkippedInEntitystate(int numFieldsSkipped)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackNumFieldsSkippedInHudelem(int numFieldsSkipped)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackETypeBytes(int eType, int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSFieldDeltasBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSHudelemBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSStatsBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSAmmoBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPSObjectivesBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackFieldsChanged(int lc)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_DisablePacketData()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_EnablePacketData()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_PacketIsNetworkBound(const bool networkBound)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_IsPacketDataNetworkData(const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackOriginDeltaBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackOriginZDeltaBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackOriginZFullBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackOriginFullBits(int bits)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackMovementDirDelta(int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackAngleDeltaBits(int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackAngleFullSend()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackEventSeqFullSend(int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackEventSeqDeltaSend(int delta)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* SV_GetEntityTypeString(const int packetEntityType)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_AnalyzePacketData(const int clientNum, const struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_TrackPacketData(const int clientNum, const enum PacketDataType datatype, const int eType, const int entNum, const int bitsUsedPrev, const struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_SetNextEntityStart(const int eType, const int entNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_NewPacketAnalysisReady()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackFieldChange(const int clientNum, const int entityType, const int field)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_GetAnalyzeEntityFields(int analyzeEntityType, const struct NetField** stateFields, unsigned int* numFields)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int FindHowManyBlocksToJumpNSpaces(int numBitsPerJump, int numSpaces)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int TotalFieldJumpBitsUsedWithJumpSize(unsigned int* fieldSkippedData, int numFields, int bits, bool oneBitHack)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_WriteEntityFieldNumbers()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetClientSnapshotPing(const int clientNum, const int snapshotNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_GetRecentSnapshotData(int* numBuilt, int* numSent, int* bytesBuilt, int* bytesSent)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackSnapshotSize(const int size)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_TrackPacketCompression(const int clientNum, const int originalSize, const int compressedSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int SV_GetPacketCompressionForClient(const int clientNum)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void SV_ProfDraw(int y, const char* string, bool showHighlight)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool SV_KeyEvent(const int key, bool down)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void SV_Netchan_PrintProfileStats(int bPrintToConsole)
{

}

#endif // __UNIMPLEMENTED__
