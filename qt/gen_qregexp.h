#ifndef GEN_QREGEXP_H
#define GEN_QREGEXP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRegExp;
#else
typedef struct QRegExp QRegExp;
#endif

QRegExp* QRegExp_new();
QRegExp* QRegExp_new2(const char* pattern, size_t pattern_Strlen);
QRegExp* QRegExp_new3(QRegExp* rx);
QRegExp* QRegExp_new4(const char* pattern, size_t pattern_Strlen, uintptr_t cs);
QRegExp* QRegExp_new5(const char* pattern, size_t pattern_Strlen, uintptr_t cs, uintptr_t syntax);
void QRegExp_OperatorAssign(QRegExp* self, QRegExp* rx);
void QRegExp_Swap(QRegExp* self, QRegExp* other);
bool QRegExp_OperatorEqual(QRegExp* self, QRegExp* rx);
bool QRegExp_OperatorNotEqual(QRegExp* self, QRegExp* rx);
bool QRegExp_IsEmpty(QRegExp* self);
bool QRegExp_IsValid(QRegExp* self);
void QRegExp_Pattern(QRegExp* self, char** _out, int* _out_Strlen);
void QRegExp_SetPattern(QRegExp* self, const char* pattern, size_t pattern_Strlen);
uintptr_t QRegExp_CaseSensitivity(QRegExp* self);
void QRegExp_SetCaseSensitivity(QRegExp* self, uintptr_t cs);
uintptr_t QRegExp_PatternSyntax(QRegExp* self);
void QRegExp_SetPatternSyntax(QRegExp* self, uintptr_t syntax);
bool QRegExp_IsMinimal(QRegExp* self);
void QRegExp_SetMinimal(QRegExp* self, bool minimal);
bool QRegExp_ExactMatch(QRegExp* self, const char* str, size_t str_Strlen);
int QRegExp_IndexIn(QRegExp* self, const char* str, size_t str_Strlen);
int QRegExp_LastIndexIn(QRegExp* self, const char* str, size_t str_Strlen);
int QRegExp_MatchedLength(QRegExp* self);
int QRegExp_CaptureCount(QRegExp* self);
void QRegExp_CapturedTexts(QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QRegExp_CapturedTexts2(QRegExp* self, char*** _out, int** _out_Lengths, size_t* _out_len);
void QRegExp_Cap(QRegExp* self, char** _out, int* _out_Strlen);
void QRegExp_Cap2(QRegExp* self, char** _out, int* _out_Strlen);
int QRegExp_Pos(QRegExp* self);
int QRegExp_Pos2(QRegExp* self);
void QRegExp_ErrorString(QRegExp* self, char** _out, int* _out_Strlen);
void QRegExp_ErrorString2(QRegExp* self, char** _out, int* _out_Strlen);
void QRegExp_Escape(const char* str, size_t str_Strlen, char** _out, int* _out_Strlen);
int QRegExp_IndexIn2(QRegExp* self, const char* str, size_t str_Strlen, int offset);
int QRegExp_IndexIn3(QRegExp* self, const char* str, size_t str_Strlen, int offset, uintptr_t caretMode);
int QRegExp_LastIndexIn2(QRegExp* self, const char* str, size_t str_Strlen, int offset);
int QRegExp_LastIndexIn3(QRegExp* self, const char* str, size_t str_Strlen, int offset, uintptr_t caretMode);
void QRegExp_Cap1(QRegExp* self, int nth, char** _out, int* _out_Strlen);
void QRegExp_Cap1WithNth(QRegExp* self, int nth, char** _out, int* _out_Strlen);
int QRegExp_Pos1(QRegExp* self, int nth);
int QRegExp_Pos1WithNth(QRegExp* self, int nth);
void QRegExp_Delete(QRegExp* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
