//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

static float Glass_AccumInertiaTensorForTriangleWedge(struct FxGlassInertiaTensor* tensor, const float* v0, const float* v1, float halfThickness)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_GetInertiaTensor(struct FxGlassInertiaTensor* tensor, const union FxGlassGeometryData* geoData, unsigned int vertCount, float halfThickness, float totalMass)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Glass_GetConvexHullMask(const struct FxGlassSystem* glassSys, const struct FxGlassPieceState* pieceState)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int Glass_AllocPiece(struct FxGlassSystem* glassSys, unsigned char vertCount, unsigned char holeDataCount, unsigned char crackDataCount, unsigned char fanDataCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_FreePiece(struct FxGlassSystem* glassSys, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_AddPiecePhysicsObject(struct FxGlassSystem* glassSys, unsigned int pieceIndex, const struct FxGlassDef* def, bool loadingSaveGame)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_FreePiecePhysicsObject(struct FxGlassPieceDynamics* pieceDynamics)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_FreePiecePhysicsJoint(struct FxGlassPieceDynamics* pieceDynamics)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool Glass_CompareGeoDataStart(const struct FxGlassPieceState* state0, const struct FxGlassPieceState* state1)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_CompactGeoData(struct FxGlassSystem* glassSys, unsigned int dstIndex, unsigned int srcIndex, unsigned int moveCount)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_AddActivePiece(struct FxGlassSystem* glassSys, struct FxGlassActiveList* active, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_CompactData(struct FxGlassSystem* glassSys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_FreeActivePiece(struct FxGlassSystem* glassSys, unsigned int unused, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_FreeAllPieces()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_Shutdown()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SetInitialState(struct FxGlassSystem* glassSys)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_Init()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_SetupPriority(struct FxGlassSystem* glassSys, struct RemovePiecesData* data, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeRoomForNewPieces_DeletePiece(struct FxGlassSystem* glassSys, struct RemovePiecesData* data, unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

public bool PartitionPriorityPred::operator()(const struct PiecePriority& piecePriority)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeRoomForNewPieces_r(struct FxGlassSystem* glassSys, struct RemovePiecesData* data, int beginIndex, int endIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_MakeRoomForNewPieces(struct Glass_BreakData* breakData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_PlayEffect(const struct FxEffectDef* fx, const float* origin, const float* normal)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DamagePiece(struct FxGlassSystem* glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DamageInitialPiece(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DeletePieceIfIndexMatches(struct FxGlassSystem* glassSys, unsigned int initialPieceIndex, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DeleteInitialPiece(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_FindInitialPiece(struct FxGlassSystem* glassSys, struct FindInitialPieceData* data, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int Glass_GetPieceIndexForInitialPiece(unsigned int initialPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DestroyInitialPiece(unsigned int initialPieceIndex, float* impactPos, float* impactDir, struct Glass_BreakData* breakData)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_GetInitialPieceCenter(unsigned int initialPieceIndex, float* center)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_GetInitialPieceAxis(unsigned int initialPieceIndex, float* axis[0x3])
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float Glass_GetInitialPieceAreaX2(unsigned int initialPieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void Glass_DrawDebugPiece(struct FxGlassSystem* glassSys, const float* playerOrigin, unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void Glass_DrawDebug(const float* playerOrigin)
{

}

#endif // __UNIMPLEMENTED__
