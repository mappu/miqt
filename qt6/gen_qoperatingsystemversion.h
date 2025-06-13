#pragma once
#ifndef MIQT_QT6_GEN_QOPERATINGSYSTEMVERSION_H
#define MIQT_QT6_GEN_QOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QOperatingSystemVersion;
class QOperatingSystemVersionBase;
class QVersionNumber;
#else
typedef struct QOperatingSystemVersion QOperatingSystemVersion;
typedef struct QOperatingSystemVersionBase QOperatingSystemVersionBase;
typedef struct QVersionNumber QVersionNumber;
#endif

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(QOperatingSystemVersionBase* param1);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersionBase* QOperatingSystemVersionBase_current();
struct miqt_string QOperatingSystemVersionBase_name(QOperatingSystemVersionBase* osversion);
int QOperatingSystemVersionBase_currentType();
QVersionNumber* QOperatingSystemVersionBase_version(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_majorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_minorVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_microVersion(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_segmentCount(const QOperatingSystemVersionBase* self);
int QOperatingSystemVersionBase_type(const QOperatingSystemVersionBase* self);
struct miqt_string QOperatingSystemVersionBase_name2(const QOperatingSystemVersionBase* self);

void QOperatingSystemVersionBase_delete(QOperatingSystemVersionBase* self);

QOperatingSystemVersion* QOperatingSystemVersion_new(QOperatingSystemVersionBase* osversion);
QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor);
QOperatingSystemVersion* QOperatingSystemVersion_new3(QOperatingSystemVersion* param1);
QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor);
QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro);
void QOperatingSystemVersion_virtbase(QOperatingSystemVersion* src, QOperatingSystemVersionBase** outptr_QOperatingSystemVersionBase);
QOperatingSystemVersion* QOperatingSystemVersion_current();
int QOperatingSystemVersion_currentType();
QVersionNumber* QOperatingSystemVersion_version(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_majorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_minorVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_microVersion(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_segmentCount(const QOperatingSystemVersion* self);
int QOperatingSystemVersion_type(const QOperatingSystemVersion* self);
struct miqt_string QOperatingSystemVersion_name(const QOperatingSystemVersion* self);

void QOperatingSystemVersion_delete(QOperatingSystemVersion* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
