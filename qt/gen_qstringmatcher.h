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
QStringMatcher* QStringMatcher_new2(QStringMatcher* other);
void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, const char* pattern, size_t pattern_Strlen);
int QStringMatcher_IndexIn(QStringMatcher* self, const char* str, size_t str_Strlen);
int QStringMatcher_IndexIn2(QStringMatcher* self, QChar* str, int length);
void QStringMatcher_Pattern(QStringMatcher* self, char** _out, int* _out_Strlen);
int QStringMatcher_IndexIn22(QStringMatcher* self, const char* str, size_t str_Strlen, int from);
int QStringMatcher_IndexIn3(QStringMatcher* self, QChar* str, int length, int from);
void QStringMatcher_Delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
