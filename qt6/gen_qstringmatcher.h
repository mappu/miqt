#pragma once
#ifndef MIQT_QT6_GEN_QSTRINGMATCHER_H
#define MIQT_QT6_GEN_QSTRINGMATCHER_H

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

void QStringMatcher_new(QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_new2(struct miqt_string pattern, QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_new3(QChar* uc, ptrdiff_t lenVal, QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_new4(QStringMatcher* other, QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_new5(struct miqt_string pattern, int cs, QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_new6(QChar* uc, ptrdiff_t lenVal, int cs, QStringMatcher** outptr_QStringMatcher);
void QStringMatcher_OperatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, struct miqt_string pattern);
void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs);
ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, struct miqt_string str);
ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, QChar* str, ptrdiff_t length);
struct miqt_string QStringMatcher_Pattern(const QStringMatcher* self);
int QStringMatcher_CaseSensitivity(const QStringMatcher* self);
ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, struct miqt_string str, ptrdiff_t from);
ptrdiff_t QStringMatcher_IndexIn3(const QStringMatcher* self, QChar* str, ptrdiff_t length, ptrdiff_t from);
void QStringMatcher_Delete(QStringMatcher* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
