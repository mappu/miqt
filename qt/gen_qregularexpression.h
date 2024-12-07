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
int QRegularExpression_PatternOptions(const QRegularExpression* self);
void QRegularExpression_SetPatternOptions(QRegularExpression* self, int options);
void QRegularExpression_OperatorAssign(QRegularExpression* self, QRegularExpression* re);
void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other);
struct miqt_string QRegularExpression_Pattern(const QRegularExpression* self);
void QRegularExpression_SetPattern(QRegularExpression* self, struct miqt_string pattern);
bool QRegularExpression_IsValid(const QRegularExpression* self);
int QRegularExpression_PatternErrorOffset(const QRegularExpression* self);
struct miqt_string QRegularExpression_ErrorString(const QRegularExpression* self);
int QRegularExpression_CaptureCount(const QRegularExpression* self);
struct miqt_array /* of struct miqt_string */  QRegularExpression_NamedCaptureGroups(const QRegularExpression* self);
QRegularExpressionMatch* QRegularExpression_Match(const QRegularExpression* self, struct miqt_string subject);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch(const QRegularExpression* self, struct miqt_string subject);
void QRegularExpression_Optimize(const QRegularExpression* self);
struct miqt_string QRegularExpression_Escape(struct miqt_string str);
struct miqt_string QRegularExpression_WildcardToRegularExpression(struct miqt_string str);
struct miqt_string QRegularExpression_AnchoredPattern(struct miqt_string expression);
bool QRegularExpression_OperatorEqual(const QRegularExpression* self, QRegularExpression* re);
bool QRegularExpression_OperatorNotEqual(const QRegularExpression* self, QRegularExpression* re);
QRegularExpressionMatch* QRegularExpression_Match2(const QRegularExpression* self, struct miqt_string subject, int offset);
QRegularExpressionMatch* QRegularExpression_Match3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType);
QRegularExpressionMatch* QRegularExpression_Match4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch2(const QRegularExpression* self, struct miqt_string subject, int offset);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch3(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType);
QRegularExpressionMatchIterator* QRegularExpression_GlobalMatch4(const QRegularExpression* self, struct miqt_string subject, int offset, int matchType, int matchOptions);
void QRegularExpression_Delete(QRegularExpression* self, bool isSubclass);

QRegularExpressionMatch* QRegularExpressionMatch_new();
QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match);
void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match);
void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
QRegularExpression* QRegularExpressionMatch_RegularExpression(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchType(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_MatchOptions(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasPartialMatch(const QRegularExpressionMatch* self);
bool QRegularExpressionMatch_IsValid(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_LastCapturedIndex(const QRegularExpressionMatch* self);
struct miqt_string QRegularExpressionMatch_Captured(const QRegularExpressionMatch* self);
struct miqt_string QRegularExpressionMatch_CapturedWithName(const QRegularExpressionMatch* self, struct miqt_string name);
struct miqt_array /* of struct miqt_string */  QRegularExpressionMatch_CapturedTexts(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedStart(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedLength(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedEnd(const QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedStartWithName(const QRegularExpressionMatch* self, struct miqt_string name);
int QRegularExpressionMatch_CapturedLengthWithName(const QRegularExpressionMatch* self, struct miqt_string name);
int QRegularExpressionMatch_CapturedEndWithName(const QRegularExpressionMatch* self, struct miqt_string name);
struct miqt_string QRegularExpressionMatch_Captured1(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_CapturedStart1(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_CapturedLength1(const QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_CapturedEnd1(const QRegularExpressionMatch* self, int nth);
void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self, bool isSubclass);

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new();
QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_OperatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_Swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other);
bool QRegularExpressionMatchIterator_IsValid(const QRegularExpressionMatchIterator* self);
bool QRegularExpressionMatchIterator_HasNext(const QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(const QRegularExpressionMatchIterator* self);
QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_MatchType(const QRegularExpressionMatchIterator* self);
int QRegularExpressionMatchIterator_MatchOptions(const QRegularExpressionMatchIterator* self);
void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
