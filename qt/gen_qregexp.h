#ifndef GEN_QREGEXP_H
#define GEN_QREGEXP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRegExp;
#else
typedef struct QRegExp QRegExp;
#endif

QRegExp* QRegExp_new();
QRegExp* QRegExp_new2(struct miqt_string* pattern);
QRegExp* QRegExp_new3(QRegExp* rx);
QRegExp* QRegExp_new4(struct miqt_string* pattern, uintptr_t cs);
QRegExp* QRegExp_new5(struct miqt_string* pattern, uintptr_t cs, uintptr_t syntax);
void QRegExp_OperatorAssign(QRegExp* self, QRegExp* rx);
void QRegExp_Swap(QRegExp* self, QRegExp* other);
bool QRegExp_OperatorEqual(const QRegExp* self, QRegExp* rx);
bool QRegExp_OperatorNotEqual(const QRegExp* self, QRegExp* rx);
bool QRegExp_IsEmpty(const QRegExp* self);
bool QRegExp_IsValid(const QRegExp* self);
struct miqt_string* QRegExp_Pattern(const QRegExp* self);
void QRegExp_SetPattern(QRegExp* self, struct miqt_string* pattern);
uintptr_t QRegExp_CaseSensitivity(const QRegExp* self);
void QRegExp_SetCaseSensitivity(QRegExp* self, uintptr_t cs);
uintptr_t QRegExp_PatternSyntax(const QRegExp* self);
void QRegExp_SetPatternSyntax(QRegExp* self, uintptr_t syntax);
bool QRegExp_IsMinimal(const QRegExp* self);
void QRegExp_SetMinimal(QRegExp* self, bool minimal);
bool QRegExp_ExactMatch(const QRegExp* self, struct miqt_string* str);
int QRegExp_IndexIn(const QRegExp* self, struct miqt_string* str);
int QRegExp_LastIndexIn(const QRegExp* self, struct miqt_string* str);
int QRegExp_MatchedLength(const QRegExp* self);
int QRegExp_CaptureCount(const QRegExp* self);
struct miqt_array* QRegExp_CapturedTexts(const QRegExp* self);
struct miqt_array* QRegExp_CapturedTexts2(QRegExp* self);
struct miqt_string* QRegExp_Cap(const QRegExp* self);
struct miqt_string* QRegExp_Cap2(QRegExp* self);
int QRegExp_Pos(const QRegExp* self);
int QRegExp_Pos2(QRegExp* self);
struct miqt_string* QRegExp_ErrorString(const QRegExp* self);
struct miqt_string* QRegExp_ErrorString2(QRegExp* self);
struct miqt_string* QRegExp_Escape(struct miqt_string* str);
int QRegExp_IndexIn2(const QRegExp* self, struct miqt_string* str, int offset);
int QRegExp_IndexIn3(const QRegExp* self, struct miqt_string* str, int offset, uintptr_t caretMode);
int QRegExp_LastIndexIn2(const QRegExp* self, struct miqt_string* str, int offset);
int QRegExp_LastIndexIn3(const QRegExp* self, struct miqt_string* str, int offset, uintptr_t caretMode);
struct miqt_string* QRegExp_Cap1(const QRegExp* self, int nth);
struct miqt_string* QRegExp_Cap1WithNth(QRegExp* self, int nth);
int QRegExp_Pos1(const QRegExp* self, int nth);
int QRegExp_Pos1WithNth(QRegExp* self, int nth);
void QRegExp_Delete(QRegExp* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
