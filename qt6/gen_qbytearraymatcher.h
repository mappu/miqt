#pragma once
#ifndef MIQT_QT6_GEN_QBYTEARRAYMATCHER_H
#define MIQT_QT6_GEN_QBYTEARRAYMATCHER_H

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
class QByteArrayView;
class QStaticByteArrayMatcherBase;
#else
typedef struct QByteArrayMatcher QByteArrayMatcher;
typedef struct QByteArrayView QByteArrayView;
typedef struct QStaticByteArrayMatcherBase QStaticByteArrayMatcherBase;
#endif

QByteArrayMatcher* QByteArrayMatcher_new();
QByteArrayMatcher* QByteArrayMatcher_new2(struct miqt_string pattern);
QByteArrayMatcher* QByteArrayMatcher_new3(QByteArrayView* pattern);
QByteArrayMatcher* QByteArrayMatcher_new4(const char* pattern);
QByteArrayMatcher* QByteArrayMatcher_new5(QByteArrayMatcher* other);
QByteArrayMatcher* QByteArrayMatcher_new6(const char* pattern, ptrdiff_t length);
void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other);
void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, struct miqt_string pattern);
ptrdiff_t QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal);
ptrdiff_t QByteArrayMatcher_IndexInWithData(const QByteArrayMatcher* self, QByteArrayView* data);
struct miqt_string QByteArrayMatcher_Pattern(const QByteArrayMatcher* self);
ptrdiff_t QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, ptrdiff_t lenVal, ptrdiff_t from);
ptrdiff_t QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, QByteArrayView* data, ptrdiff_t from);
void QByteArrayMatcher_Delete(QByteArrayMatcher* self);


#ifdef __cplusplus
} /* extern C */
#endif 

#endif
