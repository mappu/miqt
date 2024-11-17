#pragma once
#ifndef MIQT_QT_GEN_QGESTURERECOGNIZER_H
#define MIQT_QT_GEN_QGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QEvent;
class QGesture;
class QGestureRecognizer;
class QObject;
#else
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureRecognizer QGestureRecognizer;
typedef struct QObject QObject;
#endif

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target);
int QGestureRecognizer_Recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event);
void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state);
int QGestureRecognizer_RegisterRecognizer(QGestureRecognizer* recognizer);
void QGestureRecognizer_UnregisterRecognizer(int typeVal);
void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1);
void QGestureRecognizer_Delete(QGestureRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
