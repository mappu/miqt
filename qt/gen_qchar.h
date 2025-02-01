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

QLatin1Char* QLatin1Char_new(char c);
QLatin1Char* QLatin1Char_new2(QLatin1Char* param1);
char QLatin1Char_toLatin1(const QLatin1Char* self);
uint16_t QLatin1Char_unicode(const QLatin1Char* self);
void QLatin1Char_delete(QLatin1Char* self);

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
int QChar_category(const QChar* self);
int QChar_direction(const QChar* self);
int QChar_joiningType(const QChar* self);
int QChar_joining(const QChar* self);
unsigned char QChar_combiningClass(const QChar* self);
QChar* QChar_mirroredChar(const QChar* self);
bool QChar_hasMirrored(const QChar* self);
struct miqt_string QChar_decomposition(const QChar* self);
int QChar_decompositionTag(const QChar* self);
int QChar_digitValue(const QChar* self);
QChar* QChar_toLower(const QChar* self);
QChar* QChar_toUpper(const QChar* self);
QChar* QChar_toTitleCase(const QChar* self);
QChar* QChar_toCaseFolded(const QChar* self);
int QChar_script(const QChar* self);
int QChar_unicodeVersion(const QChar* self);
char QChar_toLatin1(const QChar* self);
uint16_t QChar_unicode(const QChar* self);
QChar* QChar_fromLatin1(char c);
bool QChar_isNull(const QChar* self);
bool QChar_isPrint(const QChar* self);
bool QChar_isSpace(const QChar* self);
bool QChar_isMark(const QChar* self);
bool QChar_isPunct(const QChar* self);
bool QChar_isSymbol(const QChar* self);
bool QChar_isLetter(const QChar* self);
bool QChar_isNumber(const QChar* self);
bool QChar_isLetterOrNumber(const QChar* self);
bool QChar_isDigit(const QChar* self);
bool QChar_isLower(const QChar* self);
bool QChar_isUpper(const QChar* self);
bool QChar_isTitleCase(const QChar* self);
bool QChar_isNonCharacter(const QChar* self);
bool QChar_isHighSurrogate(const QChar* self);
bool QChar_isLowSurrogate(const QChar* self);
bool QChar_isSurrogate(const QChar* self);
unsigned char QChar_cell(const QChar* self);
unsigned char QChar_row(const QChar* self);
void QChar_setCell(QChar* self, unsigned char acell);
void QChar_setRow(QChar* self, unsigned char arow);
bool QChar_isNonCharacterWithUcs4(unsigned int ucs4);
bool QChar_isHighSurrogateWithUcs4(unsigned int ucs4);
bool QChar_isLowSurrogateWithUcs4(unsigned int ucs4);
bool QChar_isSurrogateWithUcs4(unsigned int ucs4);
bool QChar_requiresSurrogates(unsigned int ucs4);
unsigned int QChar_surrogateToUcs4(uint16_t high, uint16_t low);
unsigned int QChar_surrogateToUcs42(QChar* high, QChar* low);
uint16_t QChar_highSurrogate(unsigned int ucs4);
uint16_t QChar_lowSurrogate(unsigned int ucs4);
int QChar_categoryWithUcs4(unsigned int ucs4);
int QChar_directionWithUcs4(unsigned int ucs4);
int QChar_joiningTypeWithUcs4(unsigned int ucs4);
int QChar_joiningWithUcs4(unsigned int ucs4);
unsigned char QChar_combiningClassWithUcs4(unsigned int ucs4);
unsigned int QChar_mirroredCharWithUcs4(unsigned int ucs4);
bool QChar_hasMirroredWithUcs4(unsigned int ucs4);
struct miqt_string QChar_decompositionWithUcs4(unsigned int ucs4);
int QChar_decompositionTagWithUcs4(unsigned int ucs4);
int QChar_digitValueWithUcs4(unsigned int ucs4);
unsigned int QChar_toLowerWithUcs4(unsigned int ucs4);
unsigned int QChar_toUpperWithUcs4(unsigned int ucs4);
unsigned int QChar_toTitleCaseWithUcs4(unsigned int ucs4);
unsigned int QChar_toCaseFoldedWithUcs4(unsigned int ucs4);
int QChar_scriptWithUcs4(unsigned int ucs4);
int QChar_unicodeVersionWithUcs4(unsigned int ucs4);
int QChar_currentUnicodeVersion();
bool QChar_isPrintWithUcs4(unsigned int ucs4);
bool QChar_isSpaceWithUcs4(unsigned int ucs4);
bool QChar_isMarkWithUcs4(unsigned int ucs4);
bool QChar_isPunctWithUcs4(unsigned int ucs4);
bool QChar_isSymbolWithUcs4(unsigned int ucs4);
bool QChar_isLetterWithUcs4(unsigned int ucs4);
bool QChar_isNumberWithUcs4(unsigned int ucs4);
bool QChar_isLetterOrNumberWithUcs4(unsigned int ucs4);
bool QChar_isDigitWithUcs4(unsigned int ucs4);
bool QChar_isLowerWithUcs4(unsigned int ucs4);
bool QChar_isUpperWithUcs4(unsigned int ucs4);
bool QChar_isTitleCaseWithUcs4(unsigned int ucs4);
void QChar_delete(QChar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
