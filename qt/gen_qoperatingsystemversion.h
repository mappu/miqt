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

QOperatingSystemVersion* QOperatingSystemVersion_new(uintptr_t osType, int vmajor);
QOperatingSystemVersion* QOperatingSystemVersion_new2(uintptr_t osType, int vmajor, int vminor);
QOperatingSystemVersion* QOperatingSystemVersion_new3(uintptr_t osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersion* QOperatingSystemVersion_Current();
uintptr_t QOperatingSystemVersion_CurrentType();
int QOperatingSystemVersion_MajorVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_MinorVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_MicroVersion(QOperatingSystemVersion* self);
int QOperatingSystemVersion_SegmentCount(QOperatingSystemVersion* self);
uintptr_t QOperatingSystemVersion_Type(QOperatingSystemVersion* self);
void QOperatingSystemVersion_Name(QOperatingSystemVersion* self, char** _out, int* _out_Strlen);
void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
