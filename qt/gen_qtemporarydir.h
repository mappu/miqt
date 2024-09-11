#ifndef GEN_QTEMPORARYDIR_H
#define GEN_QTEMPORARYDIR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QTemporaryDir;
#else
typedef struct QTemporaryDir QTemporaryDir;
#endif

QTemporaryDir* QTemporaryDir_new();
QTemporaryDir* QTemporaryDir_new2(const char* templateName, size_t templateName_Strlen);
bool QTemporaryDir_IsValid(const QTemporaryDir* self);
void QTemporaryDir_ErrorString(const QTemporaryDir* self, char** _out, int* _out_Strlen);
bool QTemporaryDir_AutoRemove(const QTemporaryDir* self);
void QTemporaryDir_SetAutoRemove(QTemporaryDir* self, bool b);
bool QTemporaryDir_Remove(QTemporaryDir* self);
void QTemporaryDir_Path(const QTemporaryDir* self, char** _out, int* _out_Strlen);
void QTemporaryDir_FilePath(const QTemporaryDir* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen);
void QTemporaryDir_Delete(QTemporaryDir* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
