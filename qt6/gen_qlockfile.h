#pragma once
#ifndef MIQT_QT6_GEN_QLOCKFILE_H
#define MIQT_QT6_GEN_QLOCKFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLockFile;
#else
typedef struct QLockFile QLockFile;
#endif

void QLockFile_new(struct miqt_string fileName, QLockFile** outptr_QLockFile);
struct miqt_string QLockFile_FileName(const QLockFile* self);
bool QLockFile_Lock(QLockFile* self);
bool QLockFile_TryLock(QLockFile* self);
void QLockFile_Unlock(QLockFile* self);
void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime);
int QLockFile_StaleLockTime(const QLockFile* self);
bool QLockFile_IsLocked(const QLockFile* self);
bool QLockFile_RemoveStaleLockFile(QLockFile* self);
int QLockFile_Error(const QLockFile* self);
bool QLockFile_TryLock1(QLockFile* self, int timeout);
void QLockFile_Delete(QLockFile* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
