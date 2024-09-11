#ifndef GEN_QBYTEARRAYMATCHER_H
#define GEN_QBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QByteArrayMatcher;
class QStaticByteArrayMatcherBase;
#else
typedef struct QByteArray QByteArray;
typedef struct QByteArrayMatcher QByteArrayMatcher;
typedef struct QStaticByteArrayMatcherBase QStaticByteArrayMatcherBase;
#endif

QByteArrayMatcher* QByteArrayMatcher_new();
QByteArrayMatcher* QByteArrayMatcher_new2(QByteArray* pattern);
QByteArrayMatcher* QByteArrayMatcher_new3(const char* pattern, int length);
QByteArrayMatcher* QByteArrayMatcher_new4(QByteArrayMatcher* other);
void QByteArrayMatcher_OperatorAssign(QByteArrayMatcher* self, QByteArrayMatcher* other);
void QByteArrayMatcher_SetPattern(QByteArrayMatcher* self, QByteArray* pattern);
int QByteArrayMatcher_IndexIn(const QByteArrayMatcher* self, QByteArray* ba);
int QByteArrayMatcher_IndexIn2(const QByteArrayMatcher* self, const char* str, int lenVal);
QByteArray* QByteArrayMatcher_Pattern(const QByteArrayMatcher* self);
int QByteArrayMatcher_IndexIn22(const QByteArrayMatcher* self, QByteArray* ba, int from);
int QByteArrayMatcher_IndexIn3(const QByteArrayMatcher* self, const char* str, int lenVal, int from);
void QByteArrayMatcher_Delete(QByteArrayMatcher* self);

void QStaticByteArrayMatcherBase_Delete(QStaticByteArrayMatcherBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
