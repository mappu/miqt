#pragma once
#ifndef MIQT_QT_GEN_QSTRINGMATCHER_H
#define MIQT_QT_GEN_QSTRINGMATCHER_H

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
QStringMatcher* QStringMatcher_new3(QChar* uc, int len);
QStringMatcher* QStringMatcher_new4(QStringMatcher* other);
QStringMatcher* QStringMatcher_new5(struct miqt_string pattern, int cs);
QStringMatcher* QStringMatcher_new6(QChar* uc, int len, int cs);
void QStringMatcher_operatorAssign(QStringMatcher* self, QStringMatcher* other);
void QStringMatcher_setPattern(QStringMatcher* self, struct miqt_string pattern);
void QStringMatcher_setCaseSensitivity(QStringMatcher* self, int cs);
int QStringMatcher_indexIn(const QStringMatcher* self, struct miqt_string str);
int QStringMatcher_indexIn2(const QStringMatcher* self, QChar* str, int length);
struct miqt_string QStringMatcher_pattern(const QStringMatcher* self);
int QStringMatcher_caseSensitivity(const QStringMatcher* self);
int QStringMatcher_indexIn3(const QStringMatcher* self, struct miqt_string str, int from);
int QStringMatcher_indexIn4(const QStringMatcher* self, QChar* str, int length, int from);

void QStringMatcher_delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
