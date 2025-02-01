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

QStringMatcher* QStringMatcher_new();
QStringMatcher* QStringMatcher_new2(struct miqt_string pattern);
QStringMatcher* QStringMatcher_new3(QChar* uc, ptrdiff_t len);
QStringMatcher* QStringMatcher_new4(QStringMatcher* other);
QStringMatcher* QStringMatcher_new5(struct miqt_string pattern, int cs);
QStringMatcher* QStringMatcher_new6(QChar* uc, ptrdiff_t len, int cs);
void QStringMatcher_operatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_setPattern(QStringMatcher* self, struct miqt_string pattern);
void QStringMatcher_setCaseSensitivity(QStringMatcher* self, int cs);
ptrdiff_t QStringMatcher_indexIn(const QStringMatcher* self, struct miqt_string str);
ptrdiff_t QStringMatcher_indexIn2(const QStringMatcher* self, QChar* str, ptrdiff_t length);
struct miqt_string QStringMatcher_pattern(const QStringMatcher* self);
int QStringMatcher_caseSensitivity(const QStringMatcher* self);
ptrdiff_t QStringMatcher_indexIn22(const QStringMatcher* self, struct miqt_string str, ptrdiff_t from);
ptrdiff_t QStringMatcher_indexIn3(const QStringMatcher* self, QChar* str, ptrdiff_t length, ptrdiff_t from);
void QStringMatcher_delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
