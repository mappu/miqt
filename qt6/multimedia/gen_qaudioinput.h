#ifndef GEN_QAUDIOINPUT_H
#define GEN_QAUDIOINPUT_H

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
class QAudioInput;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioInput QAudioInput;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(QAudioDevice* deviceInfo);
QAudioInput* QAudioInput_new3(QObject* parent);
QAudioInput* QAudioInput_new4(QAudioDevice* deviceInfo, QObject* parent);
QMetaObject* QAudioInput_MetaObject(const QAudioInput* self);
void* QAudioInput_Metacast(QAudioInput* self, const char* param1);
struct miqt_string QAudioInput_Tr(const char* s);
QAudioDevice* QAudioInput_Device(const QAudioInput* self);
float QAudioInput_Volume(const QAudioInput* self);
bool QAudioInput_IsMuted(const QAudioInput* self);
void QAudioInput_SetDevice(QAudioInput* self, QAudioDevice* device);
void QAudioInput_SetVolume(QAudioInput* self, float volume);
void QAudioInput_SetMuted(QAudioInput* self, bool muted);
void QAudioInput_DeviceChanged(QAudioInput* self);
void QAudioInput_connect_DeviceChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_VolumeChanged(QAudioInput* self, float volume);
void QAudioInput_connect_VolumeChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_MutedChanged(QAudioInput* self, bool muted);
void QAudioInput_connect_MutedChanged(QAudioInput* self, intptr_t slot);
struct miqt_string QAudioInput_Tr2(const char* s, const char* c);
struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
