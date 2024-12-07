#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDER_H
#define MIQT_QT_MULTIMEDIA_GEN_QCAMERAVIEWFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCameraViewfinder;
class QEvent;
class QHideEvent;
class QMediaBindableInterface;
class QMediaObject;
class QMetaObject;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QShowEvent;
class QSize;
class QVideoWidget;
class QWidget;
#else
typedef struct QCameraViewfinder QCameraViewfinder;
typedef struct QEvent QEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QMediaBindableInterface QMediaBindableInterface;
typedef struct QMediaObject QMediaObject;
typedef struct QMetaObject QMetaObject;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QVideoWidget QVideoWidget;
typedef struct QWidget QWidget;
#endif

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent);
QCameraViewfinder* QCameraViewfinder_new2();
void QCameraViewfinder_virtbase(QCameraViewfinder* src, QVideoWidget** outptr_QVideoWidget);
QMetaObject* QCameraViewfinder_MetaObject(const QCameraViewfinder* self);
void* QCameraViewfinder_Metacast(QCameraViewfinder* self, const char* param1);
struct miqt_string QCameraViewfinder_Tr(const char* s);
struct miqt_string QCameraViewfinder_TrUtf8(const char* s);
QMediaObject* QCameraViewfinder_MediaObject(const QCameraViewfinder* self);
bool QCameraViewfinder_SetMediaObject(QCameraViewfinder* self, QMediaObject* object);
struct miqt_string QCameraViewfinder_Tr2(const char* s, const char* c);
struct miqt_string QCameraViewfinder_Tr3(const char* s, const char* c, int n);
struct miqt_string QCameraViewfinder_TrUtf82(const char* s, const char* c);
struct miqt_string QCameraViewfinder_TrUtf83(const char* s, const char* c, int n);
void QCameraViewfinder_override_virtual_MediaObject(void* self, intptr_t slot);
QMediaObject* QCameraViewfinder_virtualbase_MediaObject(const void* self);
void QCameraViewfinder_override_virtual_SetMediaObject(void* self, intptr_t slot);
bool QCameraViewfinder_virtualbase_SetMediaObject(void* self, QMediaObject* object);
void QCameraViewfinder_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QCameraViewfinder_virtualbase_SizeHint(const void* self);
void QCameraViewfinder_override_virtual_Event(void* self, intptr_t slot);
bool QCameraViewfinder_virtualbase_Event(void* self, QEvent* event);
void QCameraViewfinder_override_virtual_ShowEvent(void* self, intptr_t slot);
void QCameraViewfinder_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QCameraViewfinder_override_virtual_HideEvent(void* self, intptr_t slot);
void QCameraViewfinder_virtualbase_HideEvent(void* self, QHideEvent* event);
void QCameraViewfinder_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QCameraViewfinder_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QCameraViewfinder_override_virtual_MoveEvent(void* self, intptr_t slot);
void QCameraViewfinder_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QCameraViewfinder_override_virtual_PaintEvent(void* self, intptr_t slot);
void QCameraViewfinder_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QCameraViewfinder_Delete(QCameraViewfinder* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
