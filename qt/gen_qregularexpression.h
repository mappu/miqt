#pragma once
#ifndef MIQT_QT_GEN_QREGULAREXPRESSION_H
#define MIQT_QT_GEN_QREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRegularExpression;
class QRegularExpressionMatch;
class QRegularExpressionMatchIterator;
#else
typedef struct QRegularExpression QRegularExpression;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QRegularExpressionMatchIterator QRegularExpressionMatchIterator;
#endif

QRegularExpression* QRegularExpression_new();
QRegularExpression* QRegularExpression_new2(struct miqt_string pattern);
QRegularExpression* QRegularExpression_new3(QRegularExpression* re);
QRegularExpression* QRegularExpression_new4(struct miqt_string pattern, int options);
int QRegularExpression_patternOptions(const QRegularExpression* self);
void QRegularExpression_setPatternOptions(QRegularExpression* self, int options);
void QRegularExpression_operatorAssign(QRegularExpression* self, QRegularExpression* re);
void QRegularExpression_swap(QRegularExpression* self, QRegularExpression* other);
struct miqt_string QRegularExpression_pattern(const QRegularExpression* self);
void QRegularExpression_setPattern(QRegularExpression* self, struct miqt_string pattern);
bool QRegularExpression_isValid(const QRegularExpression* self);
int QRegularExpression_patternErrorOffset(const QRegularExpression* self);
struct miqt_string QRegularExpression_errorString(const QRegularExpression* self);
int QRegularExpression_captureCount(const QRegularExpression* self);
struct miqt_array /* of struct miqt_string */  QRegularExpression_namedCaptureGroups(const QRegularExpression* self);
QRegularExpressionMatch* QRegularExpression_match(const QRegularExpression* self, struct miqt_string subject);
QRegularExpressionMatchIterator* QRegularExpression_globalMatch(const QRegularExpression* self, struct miqt_string subject);
void QRegularExpression_optimize(const QRegularExpression* self);
struct miqt_string QRegularExpression_escape(struct miqt_string str);
struct miqt_string QRegularExpression_wildcardToRegularExpression(struct miqt_string str);
struct miqt_string QRegularExpression_anchoredPattern(struct miqt_string expression);
bool QRegularExpression_operatorEqual(const QRegularExpression* self, QRegularExpression* re);
bool QRegularExpression_operatorNotEqual(const QRegularExpression* self, QRegularExpression* re);
QRegularExpressionMatch* QRegularExpression_match2(const QRegularExpression* self, struct miqt_string subject, int offset);
QRegularExpressionMatch* QRegularExpression_match3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType);
QRegularExpressionMatch* QRegularExpression_match4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions);
QRegularExpressionMatchIterator* QRegularExpression_globalMatch2(const QRegularExpression* self, struct miqt_string subject, int offset);
QRegularExpressionMatchIterator* QRegularExpression_globalMatch3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType);
QRegularExpressionMatchIterator* QRegularExpression_globalMatch4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions);
void QRegularExpression_delete(QRegularExpression* self);

QRegularExpressionMatch* QRegularExpressionMatch_new();
QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match);
void QRegularExpressionMatch_operatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match);
void QRegularExpressionMatch_swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
QRegularExpression* QRegularExpressionMatch_regularExpression(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_matchType(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_matchOptions(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_hasMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_hasPartialMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_isValid(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_lastCapturedIndex(const QRegularExpressionMatch* self);
struct miqt_string QRegularExpressionMatch_captured(const QRegularExpressionMatch* self);
struct miqt_string QRegularExpressionMatch_capturedWithName(const QRegularExpressionMatch* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QRegularExpressionMatch_capturedTexts(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_capturedStart(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_capturedLength(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_capturedEnd(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_capturedStartWithName(const QRegularExpressionMatch* self, struct miqt_string name);
int QRegularExpressionMatch_capturedLengthWithName(const QRegularExpressionMatch* self, struct miqt_string name);
int QRegularExpressionMatch_capturedEndWithName(const QRegularExpressionMatch* self, struct miqt_string name);
struct miqt_string QRegularExpressionMatch_capturedWithNth(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_capturedStartWithNth(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_capturedLengthWithNth(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_capturedEndWithNth(const QRegularExpressionMatch* self, int nth);
void QRegularExpressionMatch_delete(QRegularExpressionMatch* self);

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new();
QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_operatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other);
bool QRegularExpressionMatchIterator_isValid(const QRegularExpressionMatchIterator* self);
bool QRegularExpressionMatchIterator_hasNext(const QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_next(QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_peekNext(const QRegularExpressionMatchIterator* self);
QRegularExpression* QRegularExpressionMatchIterator_regularExpression(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_matchType(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_matchOptions(const QRegularExpressionMatchIterator* self);
void QRegularExpressionMatchIterator_delete(QRegularExpressionMatchIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
