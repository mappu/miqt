#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEOWIDGETCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEOWIDGETCONTROL_H

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
class QMetaMethod;
class QMetaObject;
class QObject;
class QVideoWidgetControl;
class QWidget;
#else
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoWidgetControl QVideoWidgetControl;
typedef struct QWidget QWidget;
#endif

void QVideoWidgetControl_virtbase(QVideoWidgetControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QVideoWidgetControl_metaObject(const QVideoWidgetControl* self);
void* QVideoWidgetControl_metacast(QVideoWidgetControl* self, const char* param1);
struct miqt_string QVideoWidgetControl_tr(const char* s);
struct miqt_string QVideoWidgetControl_trUtf8(const char* s);
QWidget* QVideoWidgetControl_videoWidget(QVideoWidgetControl* self);
int QVideoWidgetControl_aspectRatioMode(const QVideoWidgetControl* self);
void QVideoWidgetControl_setAspectRatioMode(QVideoWidgetControl* self, int mode);
bool QVideoWidgetControl_isFullScreen(const QVideoWidgetControl* self);
void QVideoWidgetControl_setFullScreen(QVideoWidgetControl* self, bool fullScreen);
int QVideoWidgetControl_brightness(const QVideoWidgetControl* self);
void QVideoWidgetControl_setBrightness(QVideoWidgetControl* self, int brightness);
int QVideoWidgetControl_contrast(const QVideoWidgetControl* self);
void QVideoWidgetControl_setContrast(QVideoWidgetControl* self, int contrast);
int QVideoWidgetControl_hue(const QVideoWidgetControl* self);
void QVideoWidgetControl_setHue(QVideoWidgetControl* self, int hue);
int QVideoWidgetControl_saturation(const QVideoWidgetControl* self);
void QVideoWidgetControl_setSaturation(QVideoWidgetControl* self, int saturation);
void QVideoWidgetControl_fullScreenChanged(QVideoWidgetControl* self, bool fullScreen);
void QVideoWidgetControl_connect_fullScreenChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_brightnessChanged(QVideoWidgetControl* self, int brightness);
void QVideoWidgetControl_connect_brightnessChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_contrastChanged(QVideoWidgetControl* self, int contrast);
void QVideoWidgetControl_connect_contrastChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_hueChanged(QVideoWidgetControl* self, int hue);
void QVideoWidgetControl_connect_hueChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_saturationChanged(QVideoWidgetControl* self, int saturation);
void QVideoWidgetControl_connect_saturationChanged(QVideoWidgetControl* self, intptr_t slot);
struct miqt_string QVideoWidgetControl_tr2(const char* s, const char* c);
struct miqt_string QVideoWidgetControl_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWidgetControl_trUtf82(const char* s, const char* c);
struct miqt_string QVideoWidgetControl_trUtf83(const char* s, const char* c, int n);

void QVideoWidgetControl_delete(QVideoWidgetControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
