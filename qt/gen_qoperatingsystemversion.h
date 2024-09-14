#ifndef GEN_QOPERATINGSYSTEMVERSION_H
#define GEN_QOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
int QOperatingSystemVersion_MajorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_MinorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_MicroVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_SegmentCount(const QOperatingSystemVersion* self);
uintptr_t QOperatingSystemVersion_Type(const QOperatingSystemVersion* self);
struct miqt_string* QOperatingSystemVersion_Name(const QOperatingSystemVersion* self);
void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
