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
class QMetaObject;
class QVideoWidgetControl;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QVideoWidgetControl QVideoWidgetControl;
typedef struct QWidget QWidget;
#endif

QMetaObject* QVideoWidgetControl_MetaObject(const QVideoWidgetControl* self);
void* QVideoWidgetControl_Metacast(QVideoWidgetControl* self, const char* param1);
struct miqt_string QVideoWidgetControl_Tr(const char* s);
struct miqt_string QVideoWidgetControl_TrUtf8(const char* s);
QWidget* QVideoWidgetControl_VideoWidget(QVideoWidgetControl* self);
int QVideoWidgetControl_AspectRatioMode(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetAspectRatioMode(QVideoWidgetControl* self, int mode);
bool QVideoWidgetControl_IsFullScreen(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetFullScreen(QVideoWidgetControl* self, bool fullScreen);
int QVideoWidgetControl_Brightness(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetBrightness(QVideoWidgetControl* self, int brightness);
int QVideoWidgetControl_Contrast(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetContrast(QVideoWidgetControl* self, int contrast);
int QVideoWidgetControl_Hue(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetHue(QVideoWidgetControl* self, int hue);
int QVideoWidgetControl_Saturation(const QVideoWidgetControl* self);
void QVideoWidgetControl_SetSaturation(QVideoWidgetControl* self, int saturation);
void QVideoWidgetControl_FullScreenChanged(QVideoWidgetControl* self, bool fullScreen);
void QVideoWidgetControl_connect_FullScreenChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_BrightnessChanged(QVideoWidgetControl* self, int brightness);
void QVideoWidgetControl_connect_BrightnessChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_ContrastChanged(QVideoWidgetControl* self, int contrast);
void QVideoWidgetControl_connect_ContrastChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_HueChanged(QVideoWidgetControl* self, int hue);
void QVideoWidgetControl_connect_HueChanged(QVideoWidgetControl* self, intptr_t slot);
void QVideoWidgetControl_SaturationChanged(QVideoWidgetControl* self, int saturation);
void QVideoWidgetControl_connect_SaturationChanged(QVideoWidgetControl* self, intptr_t slot);
struct miqt_string QVideoWidgetControl_Tr2(const char* s, const char* c);
struct miqt_string QVideoWidgetControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWidgetControl_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoWidgetControl_TrUtf83(const char* s, const char* c, int n);
void QVideoWidgetControl_Delete(QVideoWidgetControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
