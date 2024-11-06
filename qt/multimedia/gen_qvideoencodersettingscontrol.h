#ifndef GEN_QVIDEOENCODERSETTINGSCONTROL_H
#define GEN_QVIDEOENCODERSETTINGSCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QSize;
class QVideoEncoderSettings;
class QVideoEncoderSettingsControl;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVideoEncoderSettings QVideoEncoderSettings;
typedef struct QVideoEncoderSettingsControl QVideoEncoderSettingsControl;
#endif

QMetaObject* QVideoEncoderSettingsControl_MetaObject(const QVideoEncoderSettingsControl* self);
void* QVideoEncoderSettingsControl_Metacast(QVideoEncoderSettingsControl* self, const char* param1);
struct miqt_string QVideoEncoderSettingsControl_Tr(const char* s);
struct miqt_string QVideoEncoderSettingsControl_TrUtf8(const char* s);
struct miqt_array QVideoEncoderSettingsControl_SupportedResolutions(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings);
struct miqt_array QVideoEncoderSettingsControl_SupportedFrameRates(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings);
struct miqt_array QVideoEncoderSettingsControl_SupportedVideoCodecs(const QVideoEncoderSettingsControl* self);
struct miqt_string QVideoEncoderSettingsControl_VideoCodecDescription(const QVideoEncoderSettingsControl* self, struct miqt_string codec);
QVideoEncoderSettings* QVideoEncoderSettingsControl_VideoSettings(const QVideoEncoderSettingsControl* self);
void QVideoEncoderSettingsControl_SetVideoSettings(QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings);
struct miqt_string QVideoEncoderSettingsControl_Tr2(const char* s, const char* c);
struct miqt_string QVideoEncoderSettingsControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoEncoderSettingsControl_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoEncoderSettingsControl_TrUtf83(const char* s, const char* c, int n);
struct miqt_array QVideoEncoderSettingsControl_SupportedResolutions2(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous);
struct miqt_array QVideoEncoderSettingsControl_SupportedFrameRates2(const QVideoEncoderSettingsControl* self, QVideoEncoderSettings* settings, bool* continuous);
void QVideoEncoderSettingsControl_Delete(QVideoEncoderSettingsControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
