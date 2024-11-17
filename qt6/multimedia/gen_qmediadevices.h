#pragma once
#ifndef MIQT_QT6_MULTIMEDIA_GEN_QMEDIADEVICES_H
#define MIQT_QT6_MULTIMEDIA_GEN_QMEDIADEVICES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDevice;
class QCameraDevice;
class QMediaDevices;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QCameraDevice QCameraDevice;
typedef struct QMediaDevices QMediaDevices;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QMediaDevices* QMediaDevices_new();
QMediaDevices* QMediaDevices_new2(QObject* parent);
QMetaObject* QMediaDevices_MetaObject(const QMediaDevices* self);
void* QMediaDevices_Metacast(QMediaDevices* self, const char* param1);
struct miqt_string QMediaDevices_Tr(const char* s);
struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioInputs();
struct miqt_array /* of QAudioDevice* */  QMediaDevices_AudioOutputs();
struct miqt_array /* of QCameraDevice* */  QMediaDevices_VideoInputs();
QAudioDevice* QMediaDevices_DefaultAudioInput();
QAudioDevice* QMediaDevices_DefaultAudioOutput();
QCameraDevice* QMediaDevices_DefaultVideoInput();
void QMediaDevices_AudioInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_AudioInputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_AudioOutputsChanged(QMediaDevices* self);
void QMediaDevices_connect_AudioOutputsChanged(QMediaDevices* self, intptr_t slot);
void QMediaDevices_VideoInputsChanged(QMediaDevices* self);
void QMediaDevices_connect_VideoInputsChanged(QMediaDevices* self, intptr_t slot);
struct miqt_string QMediaDevices_Tr2(const char* s, const char* c);
struct miqt_string QMediaDevices_Tr3(const char* s, const char* c, int n);
void QMediaDevices_Delete(QMediaDevices* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
