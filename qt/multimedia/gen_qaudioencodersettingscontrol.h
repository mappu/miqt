#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QAUDIOENCODERSETTINGSCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QAUDIOENCODERSETTINGSCONTROL_H

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
class QAudioEncoderSettingsControl;
class QMediaControl;
class QMetaObject;
class QObject;
#else
typedef struct QAudioEncoderSettings QAudioEncoderSettings;
typedef struct QAudioEncoderSettingsControl QAudioEncoderSettingsControl;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

void QAudioEncoderSettingsControl_virtbase(QAudioEncoderSettingsControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QAudioEncoderSettingsControl_metaObject(const QAudioEncoderSettingsControl* self);
void* QAudioEncoderSettingsControl_metacast(QAudioEncoderSettingsControl* self, const char* param1);
struct miqt_string QAudioEncoderSettingsControl_tr(const char* s);
struct miqt_string QAudioEncoderSettingsControl_trUtf8(const char* s);
struct miqt_array /* of struct miqt_string */  QAudioEncoderSettingsControl_supportedAudioCodecs(const QAudioEncoderSettingsControl* self);
struct miqt_string QAudioEncoderSettingsControl_codecDescription(const QAudioEncoderSettingsControl* self, struct miqt_string codecName);
struct miqt_array /* of int */  QAudioEncoderSettingsControl_supportedSampleRates(const QAudioEncoderSettingsControl* self, QAudioEncoderSettings* settings, bool* continuous);
QAudioEncoderSettings* QAudioEncoderSettingsControl_audioSettings(const QAudioEncoderSettingsControl* self);
void QAudioEncoderSettingsControl_setAudioSettings(QAudioEncoderSettingsControl* self, QAudioEncoderSettings* settings);
struct miqt_string QAudioEncoderSettingsControl_tr2(const char* s, const char* c);
struct miqt_string QAudioEncoderSettingsControl_tr3(const char* s, const char* c, int n);
struct miqt_string QAudioEncoderSettingsControl_trUtf82(const char* s, const char* c);
struct miqt_string QAudioEncoderSettingsControl_trUtf83(const char* s, const char* c, int n);
void QAudioEncoderSettingsControl_delete(QAudioEncoderSettingsControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
