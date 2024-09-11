#ifndef GEN_QSTRINGMATCHER_H
#define GEN_QSTRINGMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChar;
class QStringMatcher;
#else
typedef struct QChar QChar;
typedef struct QStringMatcher QStringMatcher;
#endif

QStringMatcher* QStringMatcher_new();
QStringMatcher* QStringMatcher_new2(const char* pattern, size_t pattern_Strlen);
QStringMatcher* QStringMatcher_new3(QChar* uc, int lenVal);
QStringMatcher* QStringMatcher_new4(QStringMatcher* other);
QStringMatcher* QStringMatcher_new5(const char* pattern, size_t pattern_Strlen, uintptr_t cs);
QStringMatcher* QStringMatcher_new6(QChar* uc, int lenVal, uintptr_t cs);
void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, const char* pattern, size_t pattern_Strlen);
void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, uintptr_t cs);
int QStringMatcher_IndexIn(const QStringMatcher* self, const char* str, size_t str_Strlen);
int QStringMatcher_IndexIn2(const QStringMatcher* self, QChar* str, int length);
void QStringMatcher_Pattern(const QStringMatcher* self, char** _out, int* _out_Strlen);
uintptr_t QStringMatcher_CaseSensitivity(const QStringMatcher* self);
int QStringMatcher_IndexIn22(const QStringMatcher* self, const char* str, size_t str_Strlen, int from);
int QStringMatcher_IndexIn3(const QStringMatcher* self, QChar* str, int length, int from);
void QStringMatcher_Delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
