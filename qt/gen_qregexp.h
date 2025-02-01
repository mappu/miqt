#pragma once
#ifndef MIQT_QT_GEN_QREGEXP_H
#define MIQT_QT_GEN_QREGEXP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRegExp;
#else
typedef struct QRegExp QRegExp;
#endif

QRegExp* QRegExp_new();
QRegExp* QRegExp_new2(struct miqt_string pattern);
QRegExp* QRegExp_new3(QRegExp* rx);
QRegExp* QRegExp_new4(struct miqt_string pattern, int cs);
QRegExp* QRegExp_new5(struct miqt_string pattern, int cs, int syntax);
void QRegExp_operatorAssign(QRegExp* self, QRegExp* rx);
void QRegExp_swap(QRegExp* self, QRegExp* other);
bool QRegExp_operatorEqual(const QRegExp* self, QRegExp* rx);
bool QRegExp_operatorNotEqual(const QRegExp* self, QRegExp* rx);
bool QRegExp_isEmpty(const QRegExp* self);
bool QRegExp_isValid(const QRegExp* self);
struct miqt_string QRegExp_pattern(const QRegExp* self);
void QRegExp_setPattern(QRegExp* self, struct miqt_string pattern);
int QRegExp_caseSensitivity(const QRegExp* self);
void QRegExp_setCaseSensitivity(QRegExp* self, int cs);
int QRegExp_patternSyntax(const QRegExp* self);
void QRegExp_setPatternSyntax(QRegExp* self, int syntax);
bool QRegExp_isMinimal(const QRegExp* self);
void QRegExp_setMinimal(QRegExp* self, bool minimal);
bool QRegExp_exactMatch(const QRegExp* self, struct miqt_string str);
int QRegExp_indexIn(const QRegExp* self, struct miqt_string str);
int QRegExp_lastIndexIn(const QRegExp* self, struct miqt_string str);
int QRegExp_matchedLength(const QRegExp* self);
int QRegExp_captureCount(const QRegExp* self);
struct miqt_array /* of struct miqt_string */  QRegExp_capturedTexts(const QRegExp* self);
struct miqt_array /* of struct miqt_string */  QRegExp_capturedTexts2(QRegExp* self);
struct miqt_string QRegExp_cap(const QRegExp* self);
struct miqt_string QRegExp_cap2(QRegExp* self);
int QRegExp_pos(const QRegExp* self);
int QRegExp_pos2(QRegExp* self);
struct miqt_string QRegExp_errorString(const QRegExp* self);
struct miqt_string QRegExp_errorString2(QRegExp* self);
struct miqt_string QRegExp_escape(struct miqt_string str);
int QRegExp_indexIn2(const QRegExp* self, struct miqt_string str, int offset);
int QRegExp_indexIn3(const QRegExp* self, struct miqt_string str, int offset, int caretMode);
int QRegExp_lastIndexIn2(const QRegExp* self, struct miqt_string str, int offset);
int QRegExp_lastIndexIn3(const QRegExp* self, struct miqt_string str, int offset, int caretMode);
struct miqt_string QRegExp_cap1(const QRegExp* self, int nth);
struct miqt_string QRegExp_cap1WithNth(QRegExp* self, int nth);
int QRegExp_pos1(const QRegExp* self, int nth);
int QRegExp_pos1WithNth(QRegExp* self, int nth);
void QRegExp_delete(QRegExp* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
