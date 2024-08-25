#ifndef GEN_QOPERATINGSYSTEMVERSION_H
#define GEN_QOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QOperatingSystemVersion;
#else
typedef struct QOperatingSystemVersion QOperatingSystemVersion;
#endif

QOperatingSystemVersion* QOperatingSystemVersion_Current();
int QOperatingSystemVersion_MajorVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_MinorVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_MicroVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_SegmentCount(QOperatingSystemVersion* self);
void QOperatingSystemVersion_Name(QOperatingSystemVersion* self, char** _out, int* _out_Strlen);
void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
