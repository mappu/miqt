#ifndef GEN_QAUDIOOUTPUT_H
#define GEN_QAUDIOOUTPUT_H

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
class QAudioOutput;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDevice QAudioDevice;
typedef struct QAudioOutput QAudioOutput;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioOutput* QAudioOutput_new();
QAudioOutput* QAudioOutput_new2(QAudioDevice* device);
QAudioOutput* QAudioOutput_new3(QObject* parent);
QAudioOutput* QAudioOutput_new4(QAudioDevice* device, QObject* parent);
QMetaObject* QAudioOutput_MetaObject(const QAudioOutput* self);
void* QAudioOutput_Metacast(QAudioOutput* self, const char* param1);
struct miqt_string QAudioOutput_Tr(const char* s);
QAudioDevice* QAudioOutput_Device(const QAudioOutput* self);
float QAudioOutput_Volume(const QAudioOutput* self);
bool QAudioOutput_IsMuted(const QAudioOutput* self);
void QAudioOutput_SetDevice(QAudioOutput* self, QAudioDevice* device);
void QAudioOutput_SetVolume(QAudioOutput* self, float volume);
void QAudioOutput_SetMuted(QAudioOutput* self, bool muted);
void QAudioOutput_DeviceChanged(QAudioOutput* self);
void QAudioOutput_connect_DeviceChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_VolumeChanged(QAudioOutput* self, float volume);
void QAudioOutput_connect_VolumeChanged(QAudioOutput* self, intptr_t slot);
void QAudioOutput_MutedChanged(QAudioOutput* self, bool muted);
void QAudioOutput_connect_MutedChanged(QAudioOutput* self, intptr_t slot);
struct miqt_string QAudioOutput_Tr2(const char* s, const char* c);
struct miqt_string QAudioOutput_Tr3(const char* s, const char* c, int n);
void QAudioOutput_Delete(QAudioOutput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
