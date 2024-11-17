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
class QMetaObject;
class QVideoRendererControl;
#else
typedef struct QAbstractVideoSurface QAbstractVideoSurface;
typedef struct QMetaObject QMetaObject;
typedef struct QVideoRendererControl QVideoRendererControl;
#endif

QMetaObject* QVideoRendererControl_MetaObject(const QVideoRendererControl* self);
void* QVideoRendererControl_Metacast(QVideoRendererControl* self, const char* param1);
struct miqt_string QVideoRendererControl_Tr(const char* s);
struct miqt_string QVideoRendererControl_TrUtf8(const char* s);
QAbstractVideoSurface* QVideoRendererControl_Surface(const QVideoRendererControl* self);
void QVideoRendererControl_SetSurface(QVideoRendererControl* self, QAbstractVideoSurface* surface);
struct miqt_string QVideoRendererControl_Tr2(const char* s, const char* c);
struct miqt_string QVideoRendererControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QVideoRendererControl_TrUtf82(const char* s, const char* c);
struct miqt_string QVideoRendererControl_TrUtf83(const char* s, const char* c, int n);
void QVideoRendererControl_Delete(QVideoRendererControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
