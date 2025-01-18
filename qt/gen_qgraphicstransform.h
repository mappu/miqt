#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSTRANSFORM_H
#define MIQT_QT_GEN_QGRAPHICSTRANSFORM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QGraphicsRotation;
class QGraphicsScale;
class QGraphicsTransform;
class QMatrix4x4;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVector3D;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGraphicsRotation QGraphicsRotation;
typedef struct QGraphicsScale QGraphicsScale;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVector3D QVector3D;
#endif

QGraphicsTransform* QGraphicsTransform_new();
QGraphicsTransform* QGraphicsTransform_new2(QObject* parent);
void QGraphicsTransform_virtbase(QGraphicsTransform* src, QObject** outptr_QObject);
QMetaObject* QGraphicsTransform_MetaObject(const QGraphicsTransform* self);
void* QGraphicsTransform_Metacast(QGraphicsTransform* self, const char* param1);
struct miqt_string QGraphicsTransform_Tr(const char* s);
struct miqt_string QGraphicsTransform_TrUtf8(const char* s);
void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
struct miqt_string QGraphicsTransform_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsTransform_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsTransform_TrUtf83(const char* s, const char* c, int n);
void QGraphicsTransform_override_virtual_ApplyTo(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_ApplyTo(const void* self, QMatrix4x4* matrix);
void QGraphicsTransform_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsTransform_virtualbase_Event(void* self, QEvent* event);
void QGraphicsTransform_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsTransform_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QGraphicsTransform_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QGraphicsTransform_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QGraphicsTransform_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_CustomEvent(void* self, QEvent* event);
void QGraphicsTransform_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QGraphicsTransform_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QGraphicsTransform_Delete(QGraphicsTransform* self);

QGraphicsScale* QGraphicsScale_new();
QGraphicsScale* QGraphicsScale_new2(QObject* parent);
void QGraphicsScale_virtbase(QGraphicsScale* src, QGraphicsTransform** outptr_QGraphicsTransform);
QMetaObject* QGraphicsScale_MetaObject(const QGraphicsScale* self);
void* QGraphicsScale_Metacast(QGraphicsScale* self, const char* param1);
struct miqt_string QGraphicsScale_Tr(const char* s);
struct miqt_string QGraphicsScale_TrUtf8(const char* s);
QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self);
void QGraphicsScale_SetOrigin(QGraphicsScale* self, QVector3D* point);
double QGraphicsScale_XScale(const QGraphicsScale* self);
void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale);
double QGraphicsScale_YScale(const QGraphicsScale* self);
void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale);
double QGraphicsScale_ZScale(const QGraphicsScale* self);
void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale);
void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_OriginChanged(QGraphicsScale* self);
void QGraphicsScale_connect_OriginChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_XScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_XScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_YScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_YScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ZScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_ScaleChanged(QGraphicsScale* self, intptr_t slot);
struct miqt_string QGraphicsScale_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsScale_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsScale_TrUtf83(const char* s, const char* c, int n);
void QGraphicsScale_override_virtual_ApplyTo(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_ApplyTo(const void* self, QMatrix4x4* matrix);
void QGraphicsScale_Delete(QGraphicsScale* self);

QGraphicsRotation* QGraphicsRotation_new();
QGraphicsRotation* QGraphicsRotation_new2(QObject* parent);
void QGraphicsRotation_virtbase(QGraphicsRotation* src, QGraphicsTransform** outptr_QGraphicsTransform);
QMetaObject* QGraphicsRotation_MetaObject(const QGraphicsRotation* self);
void* QGraphicsRotation_Metacast(QGraphicsRotation* self, const char* param1);
struct miqt_string QGraphicsRotation_Tr(const char* s);
struct miqt_string QGraphicsRotation_TrUtf8(const char* s);
QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self);
void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, QVector3D* point);
double QGraphicsRotation_Angle(const QGraphicsRotation* self);
void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle);
QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self);
void QGraphicsRotation_SetAxis(QGraphicsRotation* self, QVector3D* axis);
void QGraphicsRotation_SetAxisWithAxis(QGraphicsRotation* self, int axis);
void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_OriginChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_OriginChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AngleChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_AngleChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AxisChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_AxisChanged(QGraphicsRotation* self, intptr_t slot);
struct miqt_string QGraphicsRotation_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsRotation_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsRotation_TrUtf83(const char* s, const char* c, int n);
void QGraphicsRotation_override_virtual_ApplyTo(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_ApplyTo(const void* self, QMatrix4x4* matrix);
void QGraphicsRotation_Delete(QGraphicsRotation* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
