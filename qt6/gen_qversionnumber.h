#ifndef GEN_QVERSIONNUMBER_H
#define GEN_QVERSIONNUMBER_H

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
QVersionNumber* QVersionNumber_new2(struct miqt_array /* of int */ seg);
QVersionNumber* QVersionNumber_new3(int maj);
QVersionNumber* QVersionNumber_new4(int maj, int min);
QVersionNumber* QVersionNumber_new5(int maj, int min, int mic);
QVersionNumber* QVersionNumber_new6(QVersionNumber* param1);
bool QVersionNumber_IsNull(const QVersionNumber* self);
bool QVersionNumber_IsNormalized(const QVersionNumber* self);
int QVersionNumber_MajorVersion(const QVersionNumber* self);
int QVersionNumber_MinorVersion(const QVersionNumber* self);
int QVersionNumber_MicroVersion(const QVersionNumber* self);
QVersionNumber* QVersionNumber_Normalized(const QVersionNumber* self);
struct miqt_array QVersionNumber_Segments(const QVersionNumber* self);
int QVersionNumber_SegmentAt(const QVersionNumber* self, ptrdiff_t index);
ptrdiff_t QVersionNumber_SegmentCount(const QVersionNumber* self);
bool QVersionNumber_IsPrefixOf(const QVersionNumber* self, QVersionNumber* other);
int QVersionNumber_Compare(QVersionNumber* v1, QVersionNumber* v2);
QVersionNumber* QVersionNumber_CommonPrefix(QVersionNumber* v1, QVersionNumber* v2);
struct miqt_string QVersionNumber_ToString(const QVersionNumber* self);
QVersionNumber* QVersionNumber_FromString(QAnyStringView* stringVal);
QVersionNumber* QVersionNumber_FromString2(QAnyStringView* stringVal, ptrdiff_t* suffixIndex);
void QVersionNumber_Delete(QVersionNumber* self);

QTypeRevision* QTypeRevision_new();
QTypeRevision* QTypeRevision_new2(QTypeRevision* param1);
QTypeRevision* QTypeRevision_Zero();
bool QTypeRevision_HasMajorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_MajorVersion(const QTypeRevision* self);
bool QTypeRevision_HasMinorVersion(const QTypeRevision* self);
unsigned char QTypeRevision_MinorVersion(const QTypeRevision* self);
bool QTypeRevision_IsValid(const QTypeRevision* self);
void QTypeRevision_Delete(QTypeRevision* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
