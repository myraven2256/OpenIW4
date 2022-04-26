//! @file
//! SPDX-License-Identifier: GPL-3.0-or-later


#ifdef    __UNIMPLEMENTED__

int StructuredData_GetVersion(const struct StructuredDataDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int StructuredData_GetFormatChecksum(const struct StructuredDataDef* def)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StructuredData_GetDataVersion(const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int StructuredData_GetDataFormatChecksum(const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_SetDataVersion(const struct StructuredDataDef* def, struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_InitializeLookup(struct StructuredDataDef* def, struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_LookupWithInt(struct StructuredDataLookup* lookup, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LookupStructProperty(struct StructuredDataLookup* lookup, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool LookupEnumEntryFromString(struct StructuredDataEnum* enumDef, const char* value, int* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int LookupEnumEntryFromIndex(struct StructuredDataEnum* enumDef, int index)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void LookupEnumArray(struct StructuredDataLookup* lookup, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_LookupWithString(struct StructuredDataLookup* lookup, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum LookupState StructuredData_GetLookupState(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum LookupError StructuredData_GetLookupError(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum LookupExpectation StructuredData_GetLookupExpectedType(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum LookupResultDataType StructuredData_GetLookupResultType(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredDataDefIntermediateType StructuredData_GetIntermediateType(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StructuredData_GetArraySize(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StructuredData_GetMaxStringSize(const struct StructuredDataLookup* lookup)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static int StructuredData_GetIntAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static unsigned char StructuredData_GetByteAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool StructuredData_GetBoolAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* StructuredData_GetEnumValueAtOffset(struct StructuredDataDef* def, struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static const char* StructuredData_GetStringAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static float StructuredData_GetFloatAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static short StructuredData_GetShortAtOffset(struct StructuredDataType* type, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

int StructuredData_GetInt(const struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_GetBool(const struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

const char* StructuredData_GetString(const struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

float StructuredData_GetFloat(const struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

short StructuredData_GetShort(const struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool ModifyByte(unsigned char* data, unsigned char* modifiedFlags, int byteIndex, unsigned char newValue)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetInt_FlagModified(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetBool_FlagModified(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, bool value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetString_FlagModified(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetFloat_FlagModified(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetShort_FlagModified(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags, short value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetInt(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, int value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetBool(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, bool value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetString(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, const char* value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetFloat(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, float value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

enum StructuredData_SetResult StructuredData_SetShort(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, short value)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_ClearStructOrArray(const struct StructuredDataLookup* lookup, struct StructuredDataBuffer* buffer, unsigned char* modifiedFlags)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static bool StructuredData_AnyBoolTrueInArray_r(struct StructuredDataDef* def, struct StructuredDataType* type, int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_AnyBoolTrueInArray(struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer, bool* result)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StructuredData_TranslateDefinition_r(unsigned int depth, const char* name, const struct StructuredDataLookup* lookupOld, const struct StructuredDataLookup* lookupNew, const struct StructuredDataBuffer* bufferOld, struct StructuredDataBuffer* bufferNew)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_TranslateDefinition(struct StructuredDataDef* oldDef, struct StructuredDataDef* newDef, struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_UpdateVersion(struct StructuredDataDefSet* defSet, struct StructuredDataBuffer* buffer, struct StructuredDataDef* matchingDef)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

static void StructuredData_PrintAllData_r(struct StructuredDataDef* def, struct StructuredDataType* type, const char* name, int depth, unsigned int offset, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_PrintAllData(struct StructuredDataDef* def, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct StructuredDataDefSet* StructuredDataDefSet_GetAsset(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

struct StructuredDataDef* StructuredDataDef_GetAsset(const char* filename, unsigned int maxSize)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

unsigned int StructuredDataDef_GetSize(const char* filename)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_NavigateFromCmd(struct StructuredDataDef* def, function * argc, function * argv, struct StructuredDataLookup* lookup, int* finalCmdIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

bool StructuredData_NavigateByStrings(struct StructuredDataLookup* lookup, const char* const* values, int valueCount, int* finalStringIndex)
{

}

#endif // __UNIMPLEMENTED__

#ifdef    __UNIMPLEMENTED__

void StructuredData_PrintLookup(struct StructuredDataLookup* lookup, const struct StructuredDataBuffer* buffer)
{

}

#endif // __UNIMPLEMENTED__
