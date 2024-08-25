#ifndef GEN_QRUNNABLE_H
#define GEN_QRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRunnable;
#else
typedef struct QRunnable QRunnable;
#endif

void QRunnable_Run(QRunnable* self);
bool QRunnable_AutoDelete(QRunnable* self);
void QRunnable_SetAutoDelete(QRunnable* self, bool _autoDelete);
void QRunnable_OperatorAssign(QRunnable* self, QRunnable* param1);
void QRunnable_Delete(QRunnable* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
