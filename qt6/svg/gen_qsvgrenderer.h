#pragma once
#ifndef MIQT_QT6_SVG_GEN_QSVGRENDERER_H
#define MIQT_QT6_SVG_GEN_QSVGRENDERER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QRect;
class QRectF;
class QSize;
class QSvgRenderer;
class QTimerEvent;
class QTransform;
class QXmlStreamReader;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
typedef struct QXmlStreamReader QXmlStreamReader;
#endif

QSvgRenderer* QSvgRenderer_new();
QSvgRenderer* QSvgRenderer_new2(struct miqt_string filename);
QSvgRenderer* QSvgRenderer_new3(struct miqt_string contents);
QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents);
QSvgRenderer* QSvgRenderer_new5(QObject* parent);
QSvgRenderer* QSvgRenderer_new6(struct miqt_string filename, QObject* parent);
QSvgRenderer* QSvgRenderer_new7(struct miqt_string contents, QObject* parent);
QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent);
void QSvgRenderer_virtbase(QSvgRenderer* src, QObject** outptr_QObject);
QMetaObject* QSvgRenderer_MetaObject(const QSvgRenderer* self);
void* QSvgRenderer_Metacast(QSvgRenderer* self, const char* param1);
struct miqt_string QSvgRenderer_Tr(const char* s);
bool QSvgRenderer_IsValid(const QSvgRenderer* self);
QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self);
QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self);
QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self);
void QSvgRenderer_SetViewBox(QSvgRenderer* self, QRect* viewbox);
void QSvgRenderer_SetViewBoxWithViewbox(QSvgRenderer* self, QRectF* viewbox);
int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self);
void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode);
bool QSvgRenderer_Animated(const QSvgRenderer* self);
int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self);
void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num);
int QSvgRenderer_CurrentFrame(const QSvgRenderer* self);
void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame);
int QSvgRenderer_AnimationDuration(const QSvgRenderer* self);
QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, struct miqt_string id);
bool QSvgRenderer_ElementExists(const QSvgRenderer* self, struct miqt_string id);
QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, struct miqt_string id);
bool QSvgRenderer_Load(QSvgRenderer* self, struct miqt_string filename);
bool QSvgRenderer_LoadWithContents(QSvgRenderer* self, struct miqt_string contents);
bool QSvgRenderer_Load2(QSvgRenderer* self, QXmlStreamReader* contents);
void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p);
void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, QRectF* bounds);
void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, struct miqt_string elementId);
void QSvgRenderer_RepaintNeeded(QSvgRenderer* self);
void QSvgRenderer_connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot);
struct miqt_string QSvgRenderer_Tr2(const char* s, const char* c);
struct miqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n);
void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, struct miqt_string elementId, QRectF* bounds);
void QSvgRenderer_override_virtual_Event(void* self, intptr_t slot);
bool QSvgRenderer_virtualbase_Event(void* self, QEvent* event);
void QSvgRenderer_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSvgRenderer_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSvgRenderer_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSvgRenderer_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSvgRenderer_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSvgRenderer_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSvgRenderer_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSvgRenderer_virtualbase_CustomEvent(void* self, QEvent* event);
void QSvgRenderer_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSvgRenderer_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSvgRenderer_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSvgRenderer_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSvgRenderer_Delete(QSvgRenderer* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
