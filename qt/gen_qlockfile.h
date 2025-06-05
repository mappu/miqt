#pragma once
#ifndef MIQT_QT_GEN_QLOCKFILE_H
#define MIQT_QT_GEN_QLOCKFILE_H

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

QLockFile* QLockFile_new(struct miqt_string fileName);
bool QLockFile_lock(QLockFile* self);
bool QLockFile_tryLock(QLockFile* self);
void QLockFile_unlock(QLockFile* self);
void QLockFile_setStaleLockTime(QLockFile* self, int staleLockTime);
int QLockFile_staleLockTime(const QLockFile* self);
bool QLockFile_isLocked(const QLockFile* self);
bool QLockFile_removeStaleLockFile(QLockFile* self);
int QLockFile_error(const QLockFile* self);
bool QLockFile_tryLockWithTimeout(QLockFile* self, int timeout);

void QLockFile_delete(QLockFile* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
