#ifndef GEN_QLIBRARYINFO_H
#define GEN_QLIBRARYINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

void QLibraryInfo_Licensee(char** _out, int* _out_Strlen);
void QLibraryInfo_LicensedProducts(char** _out, int* _out_Strlen);
QDate* QLibraryInfo_BuildDate();
const char* QLibraryInfo_Build();
bool QLibraryInfo_IsDebugBuild();
QVersionNumber* QLibraryInfo_Version();
void QLibraryInfo_Location(uintptr_t param1, char** _out, int* _out_Strlen);
void QLibraryInfo_PlatformPluginArguments(const char* platformName, size_t platformName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QLibraryInfo_Delete(QLibraryInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
