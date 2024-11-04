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
class QMetaObject;
class QSize;
class QVideoSink;
class QVideoWidget;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QVideoSink QVideoSink;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWidget QWidget;
#endif

QVideoWidget* QVideoWidget_new(QWidget* parent);
QVideoWidget* QVideoWidget_new2();
QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self);
void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1);
struct miqt_string QVideoWidget_Tr(const char* s);
QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self);
int QVideoWidget_AspectRatioMode(const QVideoWidget* self);
QSize* QVideoWidget_SizeHint(const QVideoWidget* self);
void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen);
void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode);
void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen);
void QVideoWidget_connect_FullScreenChanged(QVideoWidget* self, intptr_t slot);
void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode);
void QVideoWidget_connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot);
struct miqt_string QVideoWidget_Tr2(const char* s, const char* c);
struct miqt_string QVideoWidget_Tr3(const char* s, const char* c, int n);
void QVideoWidget_Delete(QVideoWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
