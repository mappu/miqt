#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOWINDOWCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOWINDOWCONTROL_H

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
class QRect;
class QSize;
class QVideoWindowControl;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QVideoWindowControl QVideoWindowControl;
#endif

void QVideoWindowControl_virtbase(QVideoWindowControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QVideoWindowControl_metaObject(const QVideoWindowControl* self);
void* QVideoWindowControl_metacast(QVideoWindowControl* self, const char* param1);
struct miqt_string QVideoWindowControl_tr(const char* s);
struct miqt_string QVideoWindowControl_trUtf8(const char* s);
uintptr_t QVideoWindowControl_winId(const QVideoWindowControl* self);
void QVideoWindowControl_setWinId(QVideoWindowControl* self, uintptr_t id);
QRect* QVideoWindowControl_displayRect(const QVideoWindowControl* self);
void QVideoWindowControl_setDisplayRect(QVideoWindowControl* self, QRect* rect);
bool QVideoWindowControl_isFullScreen(const QVideoWindowControl* self);
void QVideoWindowControl_setFullScreen(QVideoWindowControl* self, bool fullScreen);
void QVideoWindowControl_repaint(QVideoWindowControl* self);
QSize* QVideoWindowControl_nativeSize(const QVideoWindowControl* self);
int QVideoWindowControl_aspectRatioMode(const QVideoWindowControl* self);
void QVideoWindowControl_setAspectRatioMode(QVideoWindowControl* self, int mode);
int QVideoWindowControl_brightness(const QVideoWindowControl* self);
void QVideoWindowControl_setBrightness(QVideoWindowControl* self, int brightness);
int QVideoWindowControl_contrast(const QVideoWindowControl* self);
void QVideoWindowControl_setContrast(QVideoWindowControl* self, int contrast);
int QVideoWindowControl_hue(const QVideoWindowControl* self);
void QVideoWindowControl_setHue(QVideoWindowControl* self, int hue);
int QVideoWindowControl_saturation(const QVideoWindowControl* self);
void QVideoWindowControl_setSaturation(QVideoWindowControl* self, int saturation);
void QVideoWindowControl_fullScreenChanged(QVideoWindowControl* self, bool fullScreen);
void QVideoWindowControl_connect_fullScreenChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_brightnessChanged(QVideoWindowControl* self, int brightness);
void QVideoWindowControl_connect_brightnessChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_contrastChanged(QVideoWindowControl* self, int contrast);
void QVideoWindowControl_connect_contrastChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_hueChanged(QVideoWindowControl* self, int hue);
void QVideoWindowControl_connect_hueChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_saturationChanged(QVideoWindowControl* self, int saturation);
void QVideoWindowControl_connect_saturationChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_nativeSizeChanged(QVideoWindowControl* self);
void QVideoWindowControl_connect_nativeSizeChanged(QVideoWindowControl* self, intptr_t slot);
struct miqt_string QVideoWindowControl_tr2(const char* s, const char* c);
struct miqt_string QVideoWindowControl_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWindowControl_trUtf82(const char* s, const char* c);
struct miqt_string QVideoWindowControl_trUtf83(const char* s, const char* c, int n);
void QVideoWindowControl_delete(QVideoWindowControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
