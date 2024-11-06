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
class QMediaCaptureSession;
class QMediaFormat;
class QMediaMetaData;
class QMediaRecorder;
class QMetaObject;
class QObject;
class QSize;
class QUrl;
#else
typedef struct QMediaCaptureSession QMediaCaptureSession;
typedef struct QMediaFormat QMediaFormat;
typedef struct QMediaMetaData QMediaMetaData;
typedef struct QMediaRecorder QMediaRecorder;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QUrl QUrl;
#endif

QMediaRecorder* QMediaRecorder_new();
QMediaRecorder* QMediaRecorder_new2(QObject* parent);
QMetaObject* QMediaRecorder_MetaObject(const QMediaRecorder* self);
void* QMediaRecorder_Metacast(QMediaRecorder* self, const char* param1);
struct miqt_string QMediaRecorder_Tr(const char* s);
bool QMediaRecorder_IsAvailable(const QMediaRecorder* self);
QUrl* QMediaRecorder_OutputLocation(const QMediaRecorder* self);
void QMediaRecorder_SetOutputLocation(QMediaRecorder* self, QUrl* location);
QUrl* QMediaRecorder_ActualLocation(const QMediaRecorder* self);
int QMediaRecorder_RecorderState(const QMediaRecorder* self);
int QMediaRecorder_Error(const QMediaRecorder* self);
struct miqt_string QMediaRecorder_ErrorString(const QMediaRecorder* self);
long long QMediaRecorder_Duration(const QMediaRecorder* self);
QMediaFormat* QMediaRecorder_MediaFormat(const QMediaRecorder* self);
void QMediaRecorder_SetMediaFormat(QMediaRecorder* self, QMediaFormat* format);
int QMediaRecorder_EncodingMode(const QMediaRecorder* self);
void QMediaRecorder_SetEncodingMode(QMediaRecorder* self, int encodingMode);
int QMediaRecorder_Quality(const QMediaRecorder* self);
void QMediaRecorder_SetQuality(QMediaRecorder* self, int quality);
QSize* QMediaRecorder_VideoResolution(const QMediaRecorder* self);
void QMediaRecorder_SetVideoResolution(QMediaRecorder* self, QSize* videoResolution);
void QMediaRecorder_SetVideoResolution2(QMediaRecorder* self, int width, int height);
double QMediaRecorder_VideoFrameRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoFrameRate(QMediaRecorder* self, double frameRate);
int QMediaRecorder_VideoBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetVideoBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioBitRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioBitRate(QMediaRecorder* self, int bitRate);
int QMediaRecorder_AudioChannelCount(const QMediaRecorder* self);
void QMediaRecorder_SetAudioChannelCount(QMediaRecorder* self, int channels);
int QMediaRecorder_AudioSampleRate(const QMediaRecorder* self);
void QMediaRecorder_SetAudioSampleRate(QMediaRecorder* self, int sampleRate);
QMediaMetaData* QMediaRecorder_MetaData(const QMediaRecorder* self);
void QMediaRecorder_SetMetaData(QMediaRecorder* self, QMediaMetaData* metaData);
void QMediaRecorder_AddMetaData(QMediaRecorder* self, QMediaMetaData* metaData);
QMediaCaptureSession* QMediaRecorder_CaptureSession(const QMediaRecorder* self);
void QMediaRecorder_Record(QMediaRecorder* self);
void QMediaRecorder_Pause(QMediaRecorder* self);
void QMediaRecorder_Stop(QMediaRecorder* self);
void QMediaRecorder_RecorderStateChanged(QMediaRecorder* self, int state);
void QMediaRecorder_connect_RecorderStateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_DurationChanged(QMediaRecorder* self, long long duration);
void QMediaRecorder_connect_DurationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ActualLocationChanged(QMediaRecorder* self, QUrl* location);
void QMediaRecorder_connect_ActualLocationChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncoderSettingsChanged(QMediaRecorder* self);
void QMediaRecorder_connect_EncoderSettingsChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorOccurred(QMediaRecorder* self, int error, struct miqt_string errorString);
void QMediaRecorder_connect_ErrorOccurred(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_ErrorChanged(QMediaRecorder* self);
void QMediaRecorder_connect_ErrorChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MetaDataChanged(QMediaRecorder* self);
void QMediaRecorder_connect_MetaDataChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_MediaFormatChanged(QMediaRecorder* self);
void QMediaRecorder_connect_MediaFormatChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_EncodingModeChanged(QMediaRecorder* self);
void QMediaRecorder_connect_EncodingModeChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_QualityChanged(QMediaRecorder* self);
void QMediaRecorder_connect_QualityChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoResolutionChanged(QMediaRecorder* self);
void QMediaRecorder_connect_VideoResolutionChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoFrameRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_VideoFrameRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_VideoBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_VideoBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioBitRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_AudioBitRateChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioChannelCountChanged(QMediaRecorder* self);
void QMediaRecorder_connect_AudioChannelCountChanged(QMediaRecorder* self, intptr_t slot);
void QMediaRecorder_AudioSampleRateChanged(QMediaRecorder* self);
void QMediaRecorder_connect_AudioSampleRateChanged(QMediaRecorder* self, intptr_t slot);
struct miqt_string QMediaRecorder_Tr2(const char* s, const char* c);
struct miqt_string QMediaRecorder_Tr3(const char* s, const char* c, int n);
void QMediaRecorder_Delete(QMediaRecorder* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
