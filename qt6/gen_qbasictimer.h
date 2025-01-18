#pragma once
#ifndef MIQT_QT6_GEN_QBASICTIMER_H
#define MIQT_QT6_GEN_QBASICTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBasicTimer;
class QObject;
#else
typedef struct QBasicTimer QBasicTimer;
typedef struct QObject QObject;
#endif

QBasicTimer* QBasicTimer_new();
void QBasicTimer_Swap(QBasicTimer* self, QBasicTimer* other);
bool QBasicTimer_IsActive(const QBasicTimer* self);
int QBasicTimer_TimerId(const QBasicTimer* self);
void QBasicTimer_Start(QBasicTimer* self, int msec, QObject* obj);
void QBasicTimer_Start2(QBasicTimer* self, int msec, int timerType, QObject* obj);
void QBasicTimer_Stop(QBasicTimer* self);
void QBasicTimer_Delete(QBasicTimer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
