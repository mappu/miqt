#pragma once
#ifndef MIQT_QT_GEN_QLIBRARYINFO_H
#define MIQT_QT_GEN_QLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QDate;
class QLibraryInfo;
class QVersionNumber;
#else
typedef struct QDate QDate;
typedef struct QLibraryInfo QLibraryInfo;
typedef struct QVersionNumber QVersionNumber;
#endif

struct miqt_string QLibraryInfo_licensee();
struct miqt_string QLibraryInfo_licensedProducts();
QDate* QLibraryInfo_buildDate();
const char* QLibraryInfo_build();
bool QLibraryInfo_isDebugBuild();
QVersionNumber* QLibraryInfo_version();
struct miqt_string QLibraryInfo_location(int param1);
struct miqt_array /* of struct miqt_string */  QLibraryInfo_platformPluginArguments(struct miqt_string platformName);
void QLibraryInfo_delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
