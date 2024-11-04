#ifndef GEN_QVIDEOWIDGET_H
#define GEN_QVIDEOWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractVideoSurface;
class QMediaObject;
class QMetaObject;
class QSize;
class QVideoWidget;
class QWidget;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWidget QWidget;
#endif

QVideoWidget* QVideoWidget_new(QWidget* parent);
QVideoWidget* QVideoWidget_new2();
QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self);
void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1);
struct miqt_string QVideoWidget_Tr(const char* s);
struct miqt_string QVideoWidget_TrUtf8(const char* s);
QMediaObject* QVideoWidget_MediaObject(const QVideoWidget* self);
QAbstractVideoSurface* QVideoWidget_VideoSurface(const QVideoWidget* self);
int QVideoWidget_AspectRatioMode(const QVideoWidget* self);
int QVideoWidget_Brightness(const QVideoWidget* self);
int QVideoWidget_Contrast(const QVideoWidget* self);
int QVideoWidget_Hue(const QVideoWidget* self);
int QVideoWidget_Saturation(const QVideoWidget* self);
QSize* QVideoWidget_SizeHint(const QVideoWidget* self);
void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen);
void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode);
void QVideoWidget_SetBrightness(QVideoWidget* self, int brightness);
void QVideoWidget_SetContrast(QVideoWidget* self, int contrast);
void QVideoWidget_SetHue(QVideoWidget* self, int hue);
void QVideoWidget_SetSaturation(QVideoWidget* self, int saturation);
void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen);
void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_BrightnessChanged(QVideoWidget* self, int brightness);
void QVideoWidget_connect_BrightnessChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_ContrastChanged(QVideoWidget* self, int contrast);
void QVideoWidget_connect_ContrastChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_HueChanged(QVideoWidget* self, int hue);
void QVideoWidget_connect_HueChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_SaturationChanged(QVideoWidget* self, int saturation);
void QVideoWidget_connect_SaturationChanged(QVideoWidget* self, intptr_t slot);
struct miqt_string QVideoWidget_Tr2(const char* s, const char* c);
struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoWidget_TrUtf83(const char* s, const char* c, int n);
void QVideoWidget_Delete(QVideoWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
