#pragma once
#ifndef MIQT_QT_GEN_QCHAR_H
#define MIQT_QT_GEN_QCHAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

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

void QLatin1Char_new(char c, QLatin1Char** outptr_QLatin1Char);
void QLatin1Char_new2(QLatin1Char* param1, QLatin1Char** outptr_QLatin1Char);
char QLatin1Char_ToLatin1(const QLatin1Char* self);
uint16_t QLatin1Char_Unicode(const QLatin1Char* self);
void QLatin1Char_Delete(QLatin1Char* self, bool isSubclass);

void QChar_new(QChar** outptr_QChar);
void QChar_new2(uint16_t rc, QChar** outptr_QChar);
void QChar_new3(unsigned char c, unsigned char r, QChar** outptr_QChar);
void QChar_new4(int16_t rc, QChar** outptr_QChar);
void QChar_new5(unsigned int rc, QChar** outptr_QChar);
void QChar_new6(int rc, QChar** outptr_QChar);
void QChar_new7(int s, QChar** outptr_QChar);
void QChar_new8(QLatin1Char* ch, QChar** outptr_QChar);
void QChar_new9(char c, QChar** outptr_QChar);
void QChar_new10(unsigned char c, QChar** outptr_QChar);
void QChar_new11(QChar* param1, QChar** outptr_QChar);
int QChar_Category(const QChar* self);
int QChar_Direction(const QChar* self);
int QChar_JoiningType(const QChar* self);
int QChar_Joining(const QChar* self);
unsigned char QChar_CombiningClass(const QChar* self);
QChar* QChar_MirroredChar(const QChar* self);
bool QChar_HasMirrored(const QChar* self);
struct miqt_string QChar_Decomposition(const QChar* self);
int QChar_DecompositionTag(const QChar* self);
int QChar_DigitValue(const QChar* self);
QChar* QChar_ToLower(const QChar* self);
QChar* QChar_ToUpper(const QChar* self);
QChar* QChar_ToTitleCase(const QChar* self);
QChar* QChar_ToCaseFolded(const QChar* self);
int QChar_Script(const QChar* self);
int QChar_UnicodeVersion(const QChar* self);
char QChar_ToLatin1(const QChar* self);
uint16_t QChar_Unicode(const QChar* self);
QChar* QChar_FromLatin1(char c);
bool QChar_IsNull(const QChar* self);
bool QChar_IsPrint(const QChar* self);
bool QChar_IsSpace(const QChar* self);
bool QChar_IsMark(const QChar* self);
bool QChar_IsPunct(const QChar* self);
bool QChar_IsSymbol(const QChar* self);
bool QChar_IsLetter(const QChar* self);
bool QChar_IsNumber(const QChar* self);
bool QChar_IsLetterOrNumber(const QChar* self);
bool QChar_IsDigit(const QChar* self);
bool QChar_IsLower(const QChar* self);
bool QChar_IsUpper(const QChar* self);
bool QChar_IsTitleCase(const QChar* self);
bool QChar_IsNonCharacter(const QChar* self);
bool QChar_IsHighSurrogate(const QChar* self);
bool QChar_IsLowSurrogate(const QChar* self);
bool QChar_IsSurrogate(const QChar* self);
unsigned char QChar_Cell(const QChar* self);
unsigned char QChar_Row(const QChar* self);
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
int QChar_CategoryWithUcs4(unsigned int ucs4);
int QChar_DirectionWithUcs4(unsigned int ucs4);
int QChar_JoiningTypeWithUcs4(unsigned int ucs4);
int QChar_JoiningWithUcs4(unsigned int ucs4);
unsigned char QChar_CombiningClassWithUcs4(unsigned int ucs4);
unsigned int QChar_MirroredCharWithUcs4(unsigned int ucs4);
bool QChar_HasMirroredWithUcs4(unsigned int ucs4);
struct miqt_string QChar_DecompositionWithUcs4(unsigned int ucs4);
int QChar_DecompositionTagWithUcs4(unsigned int ucs4);
int QChar_DigitValueWithUcs4(unsigned int ucs4);
unsigned int QChar_ToLowerWithUcs4(unsigned int ucs4);
unsigned int QChar_ToUpperWithUcs4(unsigned int ucs4);
unsigned int QChar_ToTitleCaseWithUcs4(unsigned int ucs4);
unsigned int QChar_ToCaseFoldedWithUcs4(unsigned int ucs4);
int QChar_ScriptWithUcs4(unsigned int ucs4);
int QChar_UnicodeVersionWithUcs4(unsigned int ucs4);
int QChar_CurrentUnicodeVersion();
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
void QChar_Delete(QChar* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
