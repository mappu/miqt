#ifndef GEN_QSYSTEMSEMAPHORE_H
#define GEN_QSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QSystemSemaphore;
#else
typedef struct QSystemSemaphore QSystemSemaphore;
#endif

QSystemSemaphore* QSystemSemaphore_new(const char* key, size_t key_Strlen);
QSystemSemaphore* QSystemSemaphore_new2(const char* key, size_t key_Strlen, int initialValue);
QSystemSemaphore* QSystemSemaphore_new3(const char* key, size_t key_Strlen, int initialValue, uintptr_t mode);
void QSystemSemaphore_SetKey(QSystemSemaphore* self, const char* key, size_t key_Strlen);
void QSystemSemaphore_Key(QSystemSemaphore* self, char** _out, int* _out_Strlen);
bool QSystemSemaphore_Acquire(QSystemSemaphore* self);
bool QSystemSemaphore_Release(QSystemSemaphore* self);
uintptr_t QSystemSemaphore_Error(QSystemSemaphore* self);
void QSystemSemaphore_ErrorString(QSystemSemaphore* self, char** _out, int* _out_Strlen);
void QSystemSemaphore_SetKey2(QSystemSemaphore* self, const char* key, size_t key_Strlen, int initialValue);
void QSystemSemaphore_SetKey3(QSystemSemaphore* self, const char* key, size_t key_Strlen, int initialValue, uintptr_t mode);
bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n);
void QSystemSemaphore_Delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
