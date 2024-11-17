#pragma once
#ifndef MIQT_QT6_GEN_QCHAR_H
#define MIQT_QT6_GEN_QCHAR_H

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

QLatin1Char* QLatin1Char_new(char c);
QLatin1Char* QLatin1Char_new2(QLatin1Char* param1);
char QLatin1Char_ToLatin1(const QLatin1Char* self);
void QLatin1Char_Delete(QLatin1Char* self);

QChar* QChar_new();
QChar* QChar_new2(uint16_t rc);
QChar* QChar_new3(unsigned char c, unsigned char r);
QChar* QChar_new4(int16_t rc);
QChar* QChar_new5(unsigned int rc);
QChar* QChar_new6(int rc);
QChar* QChar_new7(int s);
QChar* QChar_new8(QLatin1Char* ch);
QChar* QChar_new9(char c);
QChar* QChar_new10(unsigned char c);
QChar* QChar_new11(QChar* param1);
int QChar_Category(const QChar* self);
int QChar_Direction(const QChar* self);
int QChar_JoiningType(const QChar* self);
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
int QChar_CurrentUnicodeVersion();
void QChar_Delete(QChar* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
