#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOENCODERSETTINGSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOENCODERSETTINGSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaControl;
class QMetaObject;
class QObject;
class QSize;
class QVideoEncoderSettings;
class QVideoEncoderSettingsControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QVideoEncoderSettings QVideoEncoderSettings;
typedef struct QVideoEncoderSettingsControl QVideoEncoderSettingsControl;
#endif

void QVideoEncoderSettingsControl_virtbase(QVideoEncoderSettingsControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QVideoEncoderSettingsControl_metaObject(const QVideoEncoderSettingsControl* self);
void* QVideoEncoderSettingsControl_metacast(QVideoEncoderSettingsControl* self, const char* param1);
struct miqt_string QVideoEncoderSettingsControl_tr(const char* s);
struct miqt_string QVideoEncoderSettingsControl_trUtf8(const char* s);
struct miqt_array /* of QSize* */  QVideoEncoderSettingsControl_supportedResolutions(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous);
struct miqt_array /* of double */  QVideoEncoderSettingsControl_supportedFrameRates(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous);
struct miqt_array /* of struct miqt_string */  QVideoEncoderSettingsControl_supportedVideoCodecs(const QVideoEncoderSettingsControl* self);
struct miqt_string QVideoEncoderSettingsControl_videoCodecDescription(const QVideoEncoderSettingsControl* self, struct miqt_string codec);
QVideoEncoderSettings* QVideoEncoderSettingsControl_videoSettings(const QVideoEncoderSettingsControl* self);
void QVideoEncoderSettingsControl_setVideoSettings(QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings);
struct miqt_string QVideoEncoderSettingsControl_tr2(const char* s, const char* c);
struct miqt_string QVideoEncoderSettingsControl_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoEncoderSettingsControl_trUtf82(const char* s, const char* c);
struct miqt_string QVideoEncoderSettingsControl_trUtf83(const char* s, const char* c, int n);
void QVideoEncoderSettingsControl_delete(QVideoEncoderSettingsControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
