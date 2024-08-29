#ifndef GEN_QLOCKFILE_H
#define GEN_QLOCKFILE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QLockFile;
#else
typedef struct QLockFile QLockFile;
#endif

QLockFile* QLockFile_new(const char* fileName, size_t fileName_Strlen);
bool QLockFile_Lock(QLockFile* self);
bool QLockFile_TryLock(QLockFile* self);
void QLockFile_Unlock(QLockFile* self);
void QLockFile_SetStaleLockTime(QLockFile* self, int staleLockTime);
int QLockFile_StaleLockTime(QLockFile* self);
bool QLockFile_IsLocked(QLockFile* self);
bool QLockFile_RemoveStaleLockFile(QLockFile* self);
uintptr_t QLockFile_Error(QLockFile* self);
bool QLockFile_TryLock1(QLockFile* self, int timeout);
void QLockFile_Delete(QLockFile* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
