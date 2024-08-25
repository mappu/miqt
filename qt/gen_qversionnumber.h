#ifndef GEN_QVERSIONNUMBER_H
#define GEN_QVERSIONNUMBER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QVersionNumber;
#else
typedef struct QVersionNumber QVersionNumber;
#endif

QVersionNumber* QVersionNumber_new();
QVersionNumber* QVersionNumber_new2(int* seg, size_t seg_len);
QVersionNumber* QVersionNumber_new3(int maj);
QVersionNumber* QVersionNumber_new4(int maj, int min);
QVersionNumber* QVersionNumber_new5(int maj, int min, int mic);
bool QVersionNumber_IsNull(QVersionNumber* self);
bool QVersionNumber_IsNormalized(QVersionNumber* self);
int QVersionNumber_MajorVersion(QVersionNumber* self);
int QVersionNumber_MinorVersion(QVersionNumber* self);
int QVersionNumber_MicroVersion(QVersionNumber* self);
QVersionNumber* QVersionNumber_Normalized(QVersionNumber* self);
void QVersionNumber_Segments(QVersionNumber* self, int** _out, size_t* _out_len);
int QVersionNumber_SegmentAt(QVersionNumber* self, int index);
int QVersionNumber_SegmentCount(QVersionNumber* self);
bool QVersionNumber_IsPrefixOf(QVersionNumber* self, QVersionNumber* other);
int QVersionNumber_Compare(QVersionNumber* v1, QVersionNumber* v2);
QVersionNumber* QVersionNumber_CommonPrefix(QVersionNumber* v1, QVersionNumber* v2);
void QVersionNumber_ToString(QVersionNumber* self, char** _out, int* _out_Strlen);
QVersionNumber* QVersionNumber_FromString(const char* stringVal, size_t stringVal_Strlen);
QVersionNumber* QVersionNumber_FromString2(const char* stringVal, size_t stringVal_Strlen, int* suffixIndex);
void QVersionNumber_Delete(QVersionNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
