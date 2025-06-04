#pragma once
#ifndef MIQT_QT6_GEN_QGESTURERECOGNIZER_H
#define MIQT_QT6_GEN_QGESTURERECOGNIZER_H

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

QGestureRecognizer* QGestureRecognizer_new();
QGesture* QGestureRecognizer_create(QGestureRecognizer* self, QObject* target);
int QGestureRecognizer_recognize(QGestureRecognizer* self, QGesture* state, QObject* watched, QEvent* event);
void QGestureRecognizer_reset(QGestureRecognizer* self, QGesture* state);
int QGestureRecognizer_registerRecognizer(QGestureRecognizer* recognizer);
void QGestureRecognizer_unregisterRecognizer(int type);
void QGestureRecognizer_operatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1);

bool QGestureRecognizer_override_virtual_create(void* self, intptr_t slot);
QGesture* QGestureRecognizer_virtualbase_create(void* self, QObject* target);
bool QGestureRecognizer_override_virtual_recognize(void* self, intptr_t slot);
int QGestureRecognizer_virtualbase_recognize(void* self, QGesture* state, QObject* watched, QEvent* event);
bool QGestureRecognizer_override_virtual_reset(void* self, intptr_t slot);
void QGestureRecognizer_virtualbase_reset(void* self, QGesture* state);

void QGestureRecognizer_delete(QGestureRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
