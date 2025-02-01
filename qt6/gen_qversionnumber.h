#pragma once
#ifndef MIQT_QT6_GEN_QVERSIONNUMBER_H
#define MIQT_QT6_GEN_QVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QTypeRevision;
class QVersionNumber;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QTypeRevision QTypeRevision;
typedef struct QVersionNumber QVersionNumber;
#endif

QVersionNumber* QVersionNumber_new();
QVersionNumber* QVersionNumber_new2(struct miqt_array /* of int */  seg);
QVersionNumber* QVersionNumber_new3(int maj);
QVersionNumber* QVersionNumber_new4(int maj, int min);
QVersionNumber* QVersionNumber_new5(int maj, int min, int mic);
QVersionNumber* QVersionNumber_new6(QVersionNumber* param1);
bool QVersionNumber_isNull(const QVersionNumber* self);
bool QVersionNumber_isNormalized(const QVersionNumber* self);
int QVersionNumber_majorVersion(const QVersionNumber* self);
int QVersionNumber_minorVersion(const QVersionNumber* self);
int QVersionNumber_microVersion(const QVersionNumber* self);
QVersionNumber* QVersionNumber_normalized(const QVersionNumber* self);
struct miqt_array /* of int */  QVersionNumber_segments(const QVersionNumber* self);
int QVersionNumber_segmentAt(const QVersionNumber* self, ptrdiff_t index);
ptrdiff_t QVersionNumber_segmentCount(const QVersionNumber* self);
bool QVersionNumber_isPrefixOf(const QVersionNumber* self, QVersionNumber* other);
int QVersionNumber_compare(QVersionNumber* v1, QVersionNumber* v2);
QVersionNumber* QVersionNumber_commonPrefix(QVersionNumber* v1, QVersionNumber* v2);
struct miqt_string QVersionNumber_toString(const QVersionNumber* self);
QVersionNumber* QVersionNumber_fromString(QAnyStringView* string);
QVersionNumber* QVersionNumber_fromString2(QAnyStringView* string, ptrdiff_t* suffixIndex);
void QVersionNumber_delete(QVersionNumber* self);

QTypeRevision* QTypeRevision_new();
QTypeRevision* QTypeRevision_new2(QTypeRevision* param1);
QTypeRevision* QTypeRevision_zero();
bool QTypeRevision_hasMajorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_majorVersion(const QTypeRevision* self);
bool QTypeRevision_hasMinorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_minorVersion(const QTypeRevision* self);
bool QTypeRevision_isValid(const QTypeRevision* self);
void QTypeRevision_delete(QTypeRevision* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
