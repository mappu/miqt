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

void QSystemSemaphore_Key(QSystemSemaphore* self, char** _out, int* _out_Strlen);
bool QSystemSemaphore_Acquire(QSystemSemaphore* self);
bool QSystemSemaphore_Release(QSystemSemaphore* self);
void QSystemSemaphore_ErrorString(QSystemSemaphore* self, char** _out, int* _out_Strlen);
bool QSystemSemaphore_Release1(QSystemSemaphore* self, int n);
void QSystemSemaphore_Delete(QSystemSemaphore* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
