#pragma once
#ifndef MIQT_QT_MULTIMEDIA_GEN_QVIDEORENDERERCONTROL_H
#define MIQT_QT_MULTIMEDIA_GEN_QVIDEORENDERERCONTROL_H

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
class QMediaControl;
class QMetaMethod;
class QMetaObject;
class QObject;
class QVideoRendererControl;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QMediaControl QMediaControl;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVideoRendererControl QVideoRendererControl;
#endif

void QVideoRendererControl_virtbase(QVideoRendererControl* src, QMediaControl** outptr_QMediaControl);
QMetaObject* QVideoRendererControl_metaObject(const QVideoRendererControl* self);
void* QVideoRendererControl_metacast(QVideoRendererControl* self, const char* param1);
struct miqt_string QVideoRendererControl_tr(const char* s);
struct miqt_string QVideoRendererControl_trUtf8(const char* s);
QAbstractVideoSurface* QVideoRendererControl_surface(const QVideoRendererControl* self);
void QVideoRendererControl_setSurface(QVideoRendererControl* self, QAbstractVideoSurface* surface);
struct miqt_string QVideoRendererControl_tr2(const char* s, const char* c);
struct miqt_string QVideoRendererControl_tr3(const char* s, const char* c, int n);
struct miqt_string QVideoRendererControl_trUtf82(const char* s, const char* c);
struct miqt_string QVideoRendererControl_trUtf83(const char* s, const char* c, int n);

void QVideoRendererControl_delete(QVideoRendererControl* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
