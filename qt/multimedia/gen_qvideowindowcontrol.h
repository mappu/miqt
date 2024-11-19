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

QMetaObject* QVideoWindowControl_MetaObject(const QVideoWindowControl* self);
void* QVideoWindowControl_Metacast(QVideoWindowControl* self, const char* param1);
struct miqt_string QVideoWindowControl_Tr(const char* s);
struct miqt_string QVideoWindowControl_TrUtf8(const char* s);
uintptr_t QVideoWindowControl_WinId(const QVideoWindowControl* self);
void QVideoWindowControl_SetWinId(QVideoWindowControl* self, uintptr_t id);
QRect* QVideoWindowControl_DisplayRect(const QVideoWindowControl* self);
void QVideoWindowControl_SetDisplayRect(QVideoWindowControl* self, QRect* rect);
bool QVideoWindowControl_IsFullScreen(const QVideoWindowControl* self);
void QVideoWindowControl_SetFullScreen(QVideoWindowControl* self, bool fullScreen);
void QVideoWindowControl_Repaint(QVideoWindowControl* self);
QSize* QVideoWindowControl_NativeSize(const QVideoWindowControl* self);
int QVideoWindowControl_AspectRatioMode(const QVideoWindowControl* self);
void QVideoWindowControl_SetAspectRatioMode(QVideoWindowControl* self, int mode);
int QVideoWindowControl_Brightness(const QVideoWindowControl* self);
void QVideoWindowControl_SetBrightness(QVideoWindowControl* self, int brightness);
int QVideoWindowControl_Contrast(const QVideoWindowControl* self);
void QVideoWindowControl_SetContrast(QVideoWindowControl* self, int contrast);
int QVideoWindowControl_Hue(const QVideoWindowControl* self);
void QVideoWindowControl_SetHue(QVideoWindowControl* self, int hue);
int QVideoWindowControl_Saturation(const QVideoWindowControl* self);
void QVideoWindowControl_SetSaturation(QVideoWindowControl* self, int saturation);
void QVideoWindowControl_FullScreenChanged(QVideoWindowControl* self, bool fullScreen);
void QVideoWindowControl_connect_FullScreenChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_BrightnessChanged(QVideoWindowControl* self, int brightness);
void QVideoWindowControl_connect_BrightnessChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_ContrastChanged(QVideoWindowControl* self, int contrast);
void QVideoWindowControl_connect_ContrastChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_HueChanged(QVideoWindowControl* self, int hue);
void QVideoWindowControl_connect_HueChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_SaturationChanged(QVideoWindowControl* self, int saturation);
void QVideoWindowControl_connect_SaturationChanged(QVideoWindowControl* self, intptr_t slot);
void QVideoWindowControl_NativeSizeChanged(QVideoWindowControl* self);
void QVideoWindowControl_connect_NativeSizeChanged(QVideoWindowControl* self, intptr_t slot);
struct miqt_string QVideoWindowControl_Tr2(const char* s, const char* c);
struct miqt_string QVideoWindowControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWindowControl_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoWindowControl_TrUtf83(const char* s, const char* c, int n);
void QVideoWindowControl_Delete(QVideoWindowControl* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
