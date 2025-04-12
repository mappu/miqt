#pragma once
#ifndef MIQT_QT_GEN_QBYTEARRAYMATCHER_H
#define MIQT_QT_GEN_QBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArrayMatcher;
class QStaticByteArrayMatcherBase;
#else
typedef struct QByteArrayMatcher QByteArrayMatcher;
typedef struct QStaticByteArrayMatcherBase QStaticByteArrayMatcherBase;
#endif

QByteArrayMatcher* QByteArrayMatcher_new();
QByteArrayMatcher* QByteArrayMatcher_new2(struct miqt_string pattern);
QByteArrayMatcher* QByteArrayMatcher_new3(const char* pattern, int length);
QByteArrayMatcher* QByteArrayMatcher_new4(QByteArrayMatcher* other);
void QByteArrayMatcher_operatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other);
void QByteArrayMatcher_setPattern(QByteArrayMatcher* self, struct miqt_string pattern);
int QByteArrayMatcher_indexIn(const QByteArrayMatcher* self, struct miqt_string ba);
int QByteArrayMatcher_indexIn2(const QByteArrayMatcher* self, const char* str, int len);
struct miqt_string QByteArrayMatcher_pattern(const QByteArrayMatcher* self);
int QByteArrayMatcher_indexIn3(const QByteArrayMatcher* self, struct miqt_string ba, int from);
int QByteArrayMatcher_indexIn4(const QByteArrayMatcher* self, const char* str, int len, int from);
void QByteArrayMatcher_delete(QByteArrayMatcher* self);

void QStaticByteArrayMatcherBase_delete(QStaticByteArrayMatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
