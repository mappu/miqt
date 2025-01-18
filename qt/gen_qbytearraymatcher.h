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
void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other);
void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, struct miqt_string pattern);
int QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, struct miqt_string ba);
int QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, const char* str, int lenVal);
struct miqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self);
int QByteArrayMatcher_IndexIn22(const QByteArrayMatcher* self, struct miqt_string ba, int from);
int QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, int lenVal, int from);
void QByteArrayMatcher_Delete(QByteArrayMatcher* self);

void QStaticByteArrayMatcherBase_Delete(QStaticByteArrayMatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
