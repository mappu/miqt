#pragma once
#ifndef MIQT_QT6_GEN_QSTANDARDPATHS_H
#define MIQT_QT6_GEN_QSTANDARDPATHS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStandardPaths;
#else
typedef struct QStandardPaths QStandardPaths;
#endif

struct miqt_string QStandardPaths_WritableLocation(int typeVal);
struct miqt_array /* of struct miqt_string */  QStandardPaths_StandardLocations(int typeVal);
struct miqt_string QStandardPaths_Locate(int typeVal, struct miqt_string fileName);
struct miqt_array /* of struct miqt_string */  QStandardPaths_LocateAll(int typeVal, struct miqt_string fileName);
struct miqt_string QStandardPaths_DisplayName(int typeVal);
struct miqt_string QStandardPaths_FindExecutable(struct miqt_string executableName);
void QStandardPaths_SetTestModeEnabled(bool testMode);
bool QStandardPaths_IsTestModeEnabled();
struct miqt_string QStandardPaths_Locate3(int typeVal, struct miqt_string fileName, int options);
struct miqt_array /* of struct miqt_string */  QStandardPaths_LocateAll3(int typeVal, struct miqt_string fileName, int options);
struct miqt_string QStandardPaths_FindExecutable2(struct miqt_string executableName, struct miqt_array /* of struct miqt_string */  paths);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
