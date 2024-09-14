#ifndef GEN_QSTANDARDPATHS_H
#define GEN_QSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStandardPaths;
#else
typedef struct QStandardPaths QStandardPaths;
#endif

struct miqt_string* QStandardPaths_WritableLocation(uintptr_t typeVal);
struct miqt_array* QStandardPaths_StandardLocations(uintptr_t typeVal);
struct miqt_string* QStandardPaths_Locate(uintptr_t typeVal, struct miqt_string* fileName);
struct miqt_array* QStandardPaths_LocateAll(uintptr_t typeVal, struct miqt_string* fileName);
struct miqt_string* QStandardPaths_DisplayName(uintptr_t typeVal);
struct miqt_string* QStandardPaths_FindExecutable(struct miqt_string* executableName);
void QStandardPaths_EnableTestMode(bool testMode);
void QStandardPaths_SetTestModeEnabled(bool testMode);
bool QStandardPaths_IsTestModeEnabled();
struct miqt_string* QStandardPaths_Locate3(uintptr_t typeVal, struct miqt_string* fileName, int options);
struct miqt_array* QStandardPaths_LocateAll3(uintptr_t typeVal, struct miqt_string* fileName, int options);
struct miqt_string* QStandardPaths_FindExecutable2(struct miqt_string* executableName, struct miqt_array* /* of QString */ paths);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
