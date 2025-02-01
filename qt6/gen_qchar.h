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
char QLatin1Char_toLatin1(const QLatin1Char* self);
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
int QChar_currentUnicodeVersion();
void QChar_delete(QChar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
