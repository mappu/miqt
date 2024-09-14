#ifndef GEN_QLIBRARYINFO_H
#define GEN_QLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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

struct miqt_string* QLibraryInfo_Licensee();
struct miqt_string* QLibraryInfo_LicensedProducts();
QDate* QLibraryInfo_BuildDate();
const char* QLibraryInfo_Build();
bool QLibraryInfo_IsDebugBuild();
QVersionNumber* QLibraryInfo_Version();
struct miqt_string* QLibraryInfo_Location(uintptr_t param1);
struct miqt_array* QLibraryInfo_PlatformPluginArguments(struct miqt_string* platformName);
void QLibraryInfo_Delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
