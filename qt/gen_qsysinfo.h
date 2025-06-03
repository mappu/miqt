#pragma once
#ifndef MIQT_QT_GEN_QSYSINFO_H
#define MIQT_QT_GEN_QSYSINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSysInfo;
#else
typedef struct QSysInfo QSysInfo;
#endif

int QSysInfo_windowsVersion();
int QSysInfo_macVersion();
struct miqt_string QSysInfo_buildCpuArchitecture();
struct miqt_string QSysInfo_currentCpuArchitecture();
struct miqt_string QSysInfo_buildAbi();
struct miqt_string QSysInfo_kernelType();
struct miqt_string QSysInfo_kernelVersion();
struct miqt_string QSysInfo_productType();
struct miqt_string QSysInfo_productVersion();
struct miqt_string QSysInfo_prettyProductName();
struct miqt_string QSysInfo_machineHostName();
struct miqt_string QSysInfo_machineUniqueId();
struct miqt_string QSysInfo_bootUniqueId();
void QSysInfo_delete(QSysInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
