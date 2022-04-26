//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

void G_InitGlass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_ShutdownGlass()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const unsigned short* G_Glass_GetIndicesFromName(unsigned int name, unsigned int* count)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_Glass_IsIndexValid(unsigned int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_GetPieceOrigin(unsigned int index, float* origin)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static struct G_GlassPiece* G_GlassPieceFromIndex(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum GlassPieceState G_Glass_GetPieceState(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool G_Glass_IsPieceSolid(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char PackFloat(float x)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_Glass_PieceStateChanged(unsigned int pieceIndex, enum GlassPieceState oldState, const float* damagePos, const float* damageDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_DamagePiece(unsigned int pieceIndex, int damage, const float* damagePos, const float* damageDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_DestroyPiece(unsigned int pieceIndex, const float* damagePos, const float* damageDir)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_DeletePiece(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_RadiusDamage(const float* origin, float radius, float coneAngleCos, float* coneDirection, float innerDamage, float outerDamage)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_Update()
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned short G_Glass_TempDestroyPiece(unsigned int pieceIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_RestorePiece(unsigned int pieceIndex, unsigned short damageTaken)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_WriteEndOfGlassMarker(struct msg_t* msg)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void G_Glass_WriteImpactInfo(struct msg_t* msg, struct G_GlassPiece* piece, int time)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_Glass_WriteChanges(struct msg_t* msg, int sinceTime)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_SaveGlass(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_LoadGlass(struct MemoryFile* memFile)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void G_PhysBreakGlass(const float* origin, const float* normal)
{

}

#endif // __UNIMPLEMENTED__
