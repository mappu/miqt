#ifndef GEN_QAUDIOLISTENER_H
#define GEN_QAUDIOLISTENER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioEngine;
class QAudioListener;
class QQuaternion;
class QVector3D;
#else
typedef struct QAudioEngine QAudioEngine;
typedef struct QAudioListener QAudioListener;
typedef struct QQuaternion QQuaternion;
typedef struct QVector3D QVector3D;
#endif

QAudioListener* QAudioListener_new(QAudioEngine* engine);
void QAudioListener_SetPosition(QAudioListener* self, QVector3D* pos);
QVector3D* QAudioListener_Position(const QAudioListener* self);
void QAudioListener_SetRotation(QAudioListener* self, QQuaternion* q);
QQuaternion* QAudioListener_Rotation(const QAudioListener* self);
QAudioEngine* QAudioListener_Engine(const QAudioListener* self);
void QAudioListener_Delete(QAudioListener* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
