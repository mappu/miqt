#pragma once
#ifndef MIQT_QT6_GEN_QRUNNABLE_H
#define MIQT_QT6_GEN_QRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QRunnable;
#else
typedef struct QRunnable QRunnable;
#endif

void QRunnable_Run(QRunnable* self);
bool QRunnable_AutoDelete(const QRunnable* self);
void QRunnable_SetAutoDelete(QRunnable* self, bool autoDelete);
void QRunnable_Delete(QRunnable* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
