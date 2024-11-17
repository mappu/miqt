#pragma once
#ifndef MIQT_QT6_GEN_QLIBRARYINFO_H
#define MIQT_QT6_GEN_QLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLibraryInfo;
class QVersionNumber;
#else
typedef struct QLibraryInfo QLibraryInfo;
typedef struct QVersionNumber QVersionNumber;
#endif

const char* QLibraryInfo_Build();
bool QLibraryInfo_IsDebugBuild();
QVersionNumber* QLibraryInfo_Version();
struct miqt_string QLibraryInfo_Path(int p);
struct miqt_string QLibraryInfo_Location(int location);
struct miqt_array /* of struct miqt_string */  QLibraryInfo_PlatformPluginArguments(struct miqt_string platformName);
void QLibraryInfo_Delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
