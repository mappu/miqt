#ifndef GEN_QGESTURERECOGNIZER_H
#define GEN_QGESTURERECOGNIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGesture;
class QGestureRecognizer;
class QObject;
#else
typedef struct QGesture QGesture;
typedef struct QGestureRecognizer QGestureRecognizer;
typedef struct QObject QObject;
#endif

QGesture* QGestureRecognizer_Create(QGestureRecognizer* self, QObject* target);
void QGestureRecognizer_Reset(QGestureRecognizer* self, QGesture* state);
void QGestureRecognizer_OperatorAssign(QGestureRecognizer* self, QGestureRecognizer* param1);
void QGestureRecognizer_Delete(QGestureRecognizer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
