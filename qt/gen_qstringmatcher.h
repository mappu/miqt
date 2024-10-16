#ifndef GEN_QSTRINGMATCHER_H
#define GEN_QSTRINGMATCHER_H

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
class QStringMatcher;
#else
typedef struct QChar QChar;
typedef struct QStringMatcher QStringMatcher;
#endif

QStringMatcher* QStringMatcher_new();
QStringMatcher* QStringMatcher_new2(struct miqt_string* pattern);
QStringMatcher* QStringMatcher_new3(QChar* uc, int lenVal);
QStringMatcher* QStringMatcher_new4(QStringMatcher* other);
QStringMatcher* QStringMatcher_new5(struct miqt_string* pattern, int cs);
QStringMatcher* QStringMatcher_new6(QChar* uc, int lenVal, int cs);
void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, struct miqt_string* pattern);
void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs);
int QStringMatcher_IndexIn(const QStringMatcher* self, struct miqt_string* str);
int QStringMatcher_IndexIn2(const QStringMatcher* self, QChar* str, int length);
struct miqt_string* QStringMatcher_Pattern(const QStringMatcher* self);
int QStringMatcher_CaseSensitivity(const QStringMatcher* self);
int QStringMatcher_IndexIn22(const QStringMatcher* self, struct miqt_string* str, int from);
int QStringMatcher_IndexIn3(const QStringMatcher* self, QChar* str, int length, int from);
void QStringMatcher_Delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
