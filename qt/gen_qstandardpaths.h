#ifndef GEN_QSTANDARDPATHS_H
#define GEN_QSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStandardPaths;
#else
typedef struct QStandardPaths QStandardPaths;
#endif

void QStandardPaths_WritableLocation(uintptr_t typeVal, char** _out, int* _out_Strlen);
void QStandardPaths_StandardLocations(uintptr_t typeVal, char*** _out, int** _out_Lengths, size_t* _out_len);
void QStandardPaths_Locate(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen);
void QStandardPaths_LocateAll(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, char*** _out, int** _out_Lengths, size_t* _out_len);
void QStandardPaths_DisplayName(uintptr_t typeVal, char** _out, int* _out_Strlen);
void QStandardPaths_FindExecutable(const char* executableName, size_t executableName_Strlen, char** _out, int* _out_Strlen);
void QStandardPaths_EnableTestMode(bool testMode);
void QStandardPaths_SetTestModeEnabled(bool testMode);
bool QStandardPaths_IsTestModeEnabled();
void QStandardPaths_Locate3(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, int options, char** _out, int* _out_Strlen);
void QStandardPaths_LocateAll3(uintptr_t typeVal, const char* fileName, size_t fileName_Strlen, int options, char*** _out, int** _out_Lengths, size_t* _out_len);
void QStandardPaths_FindExecutable2(const char* executableName, size_t executableName_Strlen, char** paths, uint64_t* paths_Lengths, size_t paths_len, char** _out, int* _out_Strlen);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
