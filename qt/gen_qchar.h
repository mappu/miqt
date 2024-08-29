#ifndef GEN_QCHAR_H
#define GEN_QCHAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QLatin1Char;
#else
typedef struct QChar QChar;
typedef struct QLatin1Char QLatin1Char;
#endif

QLatin1Char* QLatin1Char_new(char c);
QLatin1Char* QLatin1Char_new2(QLatin1Char* param1);
char QLatin1Char_ToLatin1(QLatin1Char* self);
uint16_t QLatin1Char_Unicode(QLatin1Char* self);
void QLatin1Char_Delete(QLatin1Char* self);

QChar* QChar_new();
QChar* QChar_new2(uint16_t rc);
QChar* QChar_new3(unsigned char c, unsigned char r);
QChar* QChar_new4(int16_t rc);
QChar* QChar_new5(unsigned int rc);
QChar* QChar_new6(int rc);
QChar* QChar_new7(uintptr_t s);
QChar* QChar_new8(QLatin1Char* ch);
QChar* QChar_new9(char c);
QChar* QChar_new10(unsigned char c);
QChar* QChar_new11(QChar* param1);
uintptr_t QChar_Category(QChar* self);
uintptr_t QChar_Direction(QChar* self);
uintptr_t QChar_JoiningType(QChar* self);
uintptr_t QChar_Joining(QChar* self);
unsigned char QChar_CombiningClass(QChar* self);
QChar* QChar_MirroredChar(QChar* self);
bool QChar_HasMirrored(QChar* self);
void QChar_Decomposition(QChar* self, char** _out, int* _out_Strlen);
uintptr_t QChar_DecompositionTag(QChar* self);
int QChar_DigitValue(QChar* self);
QChar* QChar_ToLower(QChar* self);
QChar* QChar_ToUpper(QChar* self);
QChar* QChar_ToTitleCase(QChar* self);
QChar* QChar_ToCaseFolded(QChar* self);
uintptr_t QChar_Script(QChar* self);
uintptr_t QChar_UnicodeVersion(QChar* self);
char QChar_ToLatin1(QChar* self);
uint16_t QChar_Unicode(QChar* self);
QChar* QChar_FromLatin1(char c);
bool QChar_IsNull(QChar* self);
bool QChar_IsPrint(QChar* self);
bool QChar_IsSpace(QChar* self);
bool QChar_IsMark(QChar* self);
bool QChar_IsPunct(QChar* self);
bool QChar_IsSymbol(QChar* self);
bool QChar_IsLetter(QChar* self);
bool QChar_IsNumber(QChar* self);
bool QChar_IsLetterOrNumber(QChar* self);
bool QChar_IsDigit(QChar* self);
bool QChar_IsLower(QChar* self);
bool QChar_IsUpper(QChar* self);
bool QChar_IsTitleCase(QChar* self);
bool QChar_IsNonCharacter(QChar* self);
bool QChar_IsHighSurrogate(QChar* self);
bool QChar_IsLowSurrogate(QChar* self);
bool QChar_IsSurrogate(QChar* self);
unsigned char QChar_Cell(QChar* self);
unsigned char QChar_Row(QChar* self);
void QChar_SetCell(QChar* self, unsigned char acell);
void QChar_SetRow(QChar* self, unsigned char arow);
bool QChar_IsNonCharacterWithUcs4(unsigned int ucs4);
bool QChar_IsHighSurrogateWithUcs4(unsigned int ucs4);
bool QChar_IsLowSurrogateWithUcs4(unsigned int ucs4);
bool QChar_IsSurrogateWithUcs4(unsigned int ucs4);
bool QChar_RequiresSurrogates(unsigned int ucs4);
unsigned int QChar_SurrogateToUcs4(uint16_t high, uint16_t low);
unsigned int QChar_SurrogateToUcs42(QChar* high, QChar* low);
uint16_t QChar_HighSurrogate(unsigned int ucs4);
uint16_t QChar_LowSurrogate(unsigned int ucs4);
uintptr_t QChar_CategoryWithUcs4(unsigned int ucs4);
uintptr_t QChar_DirectionWithUcs4(unsigned int ucs4);
uintptr_t QChar_JoiningTypeWithUcs4(unsigned int ucs4);
uintptr_t QChar_JoiningWithUcs4(unsigned int ucs4);
unsigned char QChar_CombiningClassWithUcs4(unsigned int ucs4);
unsigned int QChar_MirroredCharWithUcs4(unsigned int ucs4);
bool QChar_HasMirroredWithUcs4(unsigned int ucs4);
void QChar_DecompositionWithUcs4(unsigned int ucs4, char** _out, int* _out_Strlen);
uintptr_t QChar_DecompositionTagWithUcs4(unsigned int ucs4);
int QChar_DigitValueWithUcs4(unsigned int ucs4);
unsigned int QChar_ToLowerWithUcs4(unsigned int ucs4);
unsigned int QChar_ToUpperWithUcs4(unsigned int ucs4);
unsigned int QChar_ToTitleCaseWithUcs4(unsigned int ucs4);
unsigned int QChar_ToCaseFoldedWithUcs4(unsigned int ucs4);
uintptr_t QChar_ScriptWithUcs4(unsigned int ucs4);
uintptr_t QChar_UnicodeVersionWithUcs4(unsigned int ucs4);
uintptr_t QChar_CurrentUnicodeVersion();
bool QChar_IsPrintWithUcs4(unsigned int ucs4);
bool QChar_IsSpaceWithUcs4(unsigned int ucs4);
bool QChar_IsMarkWithUcs4(unsigned int ucs4);
bool QChar_IsPunctWithUcs4(unsigned int ucs4);
bool QChar_IsSymbolWithUcs4(unsigned int ucs4);
bool QChar_IsLetterWithUcs4(unsigned int ucs4);
bool QChar_IsNumberWithUcs4(unsigned int ucs4);
bool QChar_IsLetterOrNumberWithUcs4(unsigned int ucs4);
bool QChar_IsDigitWithUcs4(unsigned int ucs4);
bool QChar_IsLowerWithUcs4(unsigned int ucs4);
bool QChar_IsUpperWithUcs4(unsigned int ucs4);
bool QChar_IsTitleCaseWithUcs4(unsigned int ucs4);
void QChar_Delete(QChar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
