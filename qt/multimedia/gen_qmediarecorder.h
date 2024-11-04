#ifndef GEN_QMEDIARECORDER_H
#define GEN_QMEDIARECORDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioEncoderSettings;
class QMediaObject;
class QMediaRecorder;
class QMetaObject;
class QObject;
class QSize;
class QUrl;
class QVariant;
class QVideoEncoderSettings;
#else
typedef struct QAudioEncoderSettings QAudioEncoderSettings;
typedef struct QMediaObject QMediaObject;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QVideoEncoderSettings QVideoEncoderSettings;
#endif

QMediaRecorder* QMediaRecorder_new(QMediaObject* mediaObject);
QMediaRecorder* QMediaRecorder_new2(QMediaObject* mediaObject, QObject* parent);
QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self);
void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1);
struct miqt_string QMediaRecorder_Tr(const char* s);
struct miqt_string QMediaRecorder_TrUtf8(const char* s);
QMediaObject* QMediaRecorder_MediaObject(const QMediaRecorder* self);
bool QMediaRecorder_IsAvailable(const QMediaRecorder* self);
int QMediaRecorder_Availability(const QMediaRecorder* self);
QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self);
bool QMediaRecorder_SetOutputLocation(QMediaRecorder* self, QUrl* location);
QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self);
int QMediaRecorder_State(const QMediaRecorder* self);
int QMediaRecorder_Status(const QMediaRecorder* self);
int QMediaRecorder_Error(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self);
long long QMediaRecorder_Duration(const QMediaRecorder* self);
bool QMediaRecorder_IsMuted(const QMediaRecorder* self);
double QMediaRecorder_Volume(const QMediaRecorder* self);
struct miqt_array QMediaRecorder_SupportedContainers(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_ContainerDescription(const QMediaRecorder* self, struct miqt_string format);
struct miqt_array QMediaRecorder_SupportedAudioCodecs(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_AudioCodecDescription(const QMediaRecorder* self, struct miqt_string codecName);
struct miqt_array QMediaRecorder_SupportedAudioSampleRates(const QMediaRecorder* self);
struct miqt_array QMediaRecorder_SupportedVideoCodecs(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_VideoCodecDescription(const QMediaRecorder* self, struct miqt_string codecName);
struct miqt_array QMediaRecorder_SupportedResolutions(const QMediaRecorder* self);
struct miqt_array QMediaRecorder_SupportedFrameRates(const QMediaRecorder* self);
QAudioEncoderSettings* QMediaRecorder_AudioSettings(const QMediaRecorder* self);
QVideoEncoderSettings* QMediaRecorder_VideoSettings(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_ContainerFormat(const QMediaRecorder* self);
void QMediaRecorder_SetAudioSettings(QMediaRecorder* self, QAudioEncoderSettings* audioSettings);
void QMediaRecorder_SetVideoSettings(QMediaRecorder* self, QVideoEncoderSettings* videoSettings);
void QMediaRecorder_SetContainerFormat(QMediaRecorder* self, struct miqt_string container);
void QMediaRecorder_SetEncodingSettings(QMediaRecorder* self, QAudioEncoderSettings* audioSettings);
bool QMediaRecorder_IsMetaDataAvailable(const QMediaRecorder* self);
bool QMediaRecorder_IsMetaDataWritable(const QMediaRecorder* self);
QVariant* QMediaRecorder_MetaData(const QMediaRecorder* self, struct miqt_string key);
void QMediaRecorder_SetMetaData(QMediaRecorder* self, struct miqt_string key, QVariant* value);
struct miqt_array QMediaRecorder_AvailableMetaData(const QMediaRecorder* self);
void QMediaRecorder_Record(QMediaRecorder* self);
void QMediaRecorder_Pause(QMediaRecorder* self);
void QMediaRecorder_Stop(QMediaRecorder* self);
void QMediaRecorder_SetMuted(QMediaRecorder* self, bool muted);
void QMediaRecorder_SetVolume(QMediaRecorder* self, double volume);
void QMediaRecorder_StateChanged(QMediaRecorder* self, int state);
void QMediaRecorder_connect_StateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_StatusChanged(QMediaRecorder* self, int status);
void QMediaRecorder_connect_StatusChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration);
void QMediaRecorder_connect_DurationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MutedChanged(QMediaRecorder* self, bool muted);
void QMediaRecorder_connect_MutedChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VolumeChanged(QMediaRecorder* self, double volume);
void QMediaRecorder_connect_VolumeChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, QUrl* location);
void QMediaRecorder_connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorWithError(QMediaRecorder* self, int error);
void QMediaRecorder_connect_ErrorWithError(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataAvailableChanged(QMediaRecorder* self, bool available);
void QMediaRecorder_connect_MetaDataAvailableChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataWritableChanged(QMediaRecorder* self, bool writable);
void QMediaRecorder_connect_MetaDataWritableChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataChanged(QMediaRecorder* self);
void QMediaRecorder_connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataChanged2(QMediaRecorder* self, struct miqt_string key, QVariant* value);
void QMediaRecorder_connect_MetaDataChanged2(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AvailabilityChanged(QMediaRecorder* self, bool available);
void QMediaRecorder_connect_AvailabilityChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AvailabilityChangedWithAvailability(QMediaRecorder* self, int availability);
void QMediaRecorder_connect_AvailabilityChangedWithAvailability(QMediaRecorder* self, intptr_t slot);
struct miqt_string QMediaRecorder_Tr2(const char* s, const char* c);
struct miqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaRecorder_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaRecorder_TrUtf83(const char* s, const char* c, int n);
struct miqt_array QMediaRecorder_SupportedAudioSampleRates1(const QMediaRecorder* self, QAudioEncoderSettings* settings);
struct miqt_array QMediaRecorder_SupportedAudioSampleRates2(const QMediaRecorder* self, QAudioEncoderSettings* settings, bool* continuous);
struct miqt_array QMediaRecorder_SupportedResolutions1(const QMediaRecorder* self, QVideoEncoderSettings* settings);
struct miqt_array QMediaRecorder_SupportedResolutions2(const QMediaRecorder* self, QVideoEncoderSettings* settings, bool* continuous);
struct miqt_array QMediaRecorder_SupportedFrameRates1(const QMediaRecorder* self, QVideoEncoderSettings* settings);
struct miqt_array QMediaRecorder_SupportedFrameRates2(const QMediaRecorder* self, QVideoEncoderSettings* settings, bool* continuous);
void QMediaRecorder_SetEncodingSettings2(QMediaRecorder* self, QAudioEncoderSettings* audioSettings, QVideoEncoderSettings* videoSettings);
void QMediaRecorder_SetEncodingSettings3(QMediaRecorder* self, QAudioEncoderSettings* audioSettings, QVideoEncoderSettings* videoSettings, struct miqt_string containerMimeType);
void QMediaRecorder_Delete(QMediaRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
