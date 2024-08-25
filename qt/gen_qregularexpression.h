#ifndef GEN_QREGULAREXPRESSION_H
#define GEN_QREGULAREXPRESSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QRegularExpression* QRegularExpression_new2(QRegularExpression* re);
void QRegularExpression_OperatorAssign(QRegularExpression* self, QRegularExpression* re);
void QRegularExpression_Swap(QRegularExpression* self, QRegularExpression* other);
void QRegularExpression_Pattern(QRegularExpression* self, char** _out, int* _out_Strlen);
void QRegularExpression_SetPattern(QRegularExpression* self, const char* pattern, size_t pattern_Strlen);
bool QRegularExpression_IsValid(QRegularExpression* self);
int QRegularExpression_PatternErrorOffset(QRegularExpression* self);
void QRegularExpression_ErrorString(QRegularExpression* self, char** _out, int* _out_Strlen);
int QRegularExpression_CaptureCount(QRegularExpression* self);
void QRegularExpression_NamedCaptureGroups(QRegularExpression* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QRegularExpression_Optimize(QRegularExpression* self);
void QRegularExpression_Escape(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QRegularExpression_WildcardToRegularExpression(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
void QRegularExpression_AnchoredPattern(const char* expression, size_t expression_Strlen, char** _out, int* _out_Strlen);
bool QRegularExpression_OperatorEqual(QRegularExpression* self, QRegularExpression* re);
bool QRegularExpression_OperatorNotEqual(QRegularExpression* self, QRegularExpression* re);
void QRegularExpression_Delete(QRegularExpression* self);

QRegularExpressionMatch* QRegularExpressionMatch_new();
QRegularExpressionMatch* QRegularExpressionMatch_new2(QRegularExpressionMatch* match);
void QRegularExpressionMatch_OperatorAssign(QRegularExpressionMatch* self, QRegularExpressionMatch* match);
void QRegularExpressionMatch_Swap(QRegularExpressionMatch* self, QRegularExpressionMatch* other);
QRegularExpression* QRegularExpressionMatch_RegularExpression(QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasMatch(QRegularExpressionMatch* self);
bool QRegularExpressionMatch_HasPartialMatch(QRegularExpressionMatch* self);
bool QRegularExpressionMatch_IsValid(QRegularExpressionMatch* self);
int QRegularExpressionMatch_LastCapturedIndex(QRegularExpressionMatch* self);
void QRegularExpressionMatch_Captured(QRegularExpressionMatch* self, char** _out, int* _out_Strlen);
void QRegularExpressionMatch_CapturedWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen, char** _out, int* _out_Strlen);
void QRegularExpressionMatch_CapturedTexts(QRegularExpressionMatch* self, char*** _out, int** _out_Lengths, size_t* _out_len);
int QRegularExpressionMatch_CapturedStart(QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedLength(QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedEnd(QRegularExpressionMatch* self);
int QRegularExpressionMatch_CapturedStartWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen);
int QRegularExpressionMatch_CapturedLengthWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen);
int QRegularExpressionMatch_CapturedEndWithName(QRegularExpressionMatch* self, const char* name, size_t name_Strlen);
void QRegularExpressionMatch_Captured1(QRegularExpressionMatch* self, int nth, char** _out, int* _out_Strlen);
int QRegularExpressionMatch_CapturedStart1(QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_CapturedLength1(QRegularExpressionMatch* self, int nth);
int QRegularExpressionMatch_CapturedEnd1(QRegularExpressionMatch* self, int nth);
void QRegularExpressionMatch_Delete(QRegularExpressionMatch* self);

QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new();
QRegularExpressionMatchIterator* QRegularExpressionMatchIterator_new2(QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_OperatorAssign(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* iterator);
void QRegularExpressionMatchIterator_Swap(QRegularExpressionMatchIterator* self, QRegularExpressionMatchIterator* other);
bool QRegularExpressionMatchIterator_IsValid(QRegularExpressionMatchIterator* self);
bool QRegularExpressionMatchIterator_HasNext(QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_Next(QRegularExpressionMatchIterator* self);
QRegularExpressionMatch* QRegularExpressionMatchIterator_PeekNext(QRegularExpressionMatchIterator* self);
QRegularExpression* QRegularExpressionMatchIterator_RegularExpression(QRegularExpressionMatchIterator* self);
void QRegularExpressionMatchIterator_Delete(QRegularExpressionMatchIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
