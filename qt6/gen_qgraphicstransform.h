#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSTRANSFORM_H
#define MIQT_QT6_GEN_QGRAPHICSTRANSFORM_H

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
QMetaObject* QGraphicsTransform_metaObject(const QGraphicsTransform* self);
void* QGraphicsTransform_metacast(QGraphicsTransform* self, const char* param1);
struct miqt_string QGraphicsTransform_tr(const char* s);
void QGraphicsTransform_applyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
struct miqt_string QGraphicsTransform_tr2(const char* s, const char* c);
struct miqt_string QGraphicsTransform_tr3(const char* s, const char* c, int n);

bool QGraphicsTransform_override_virtual_applyTo(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_applyTo(const void* self, QMatrix4x4* matrix);
bool QGraphicsTransform_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsTransform_virtualbase_event(void* self, QEvent* event);
bool QGraphicsTransform_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsTransform_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsTransform_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsTransform_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsTransform_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsTransform_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsTransform_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsTransform_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsTransform_protectedbase_update(bool* _dynamic_cast_ok, void* self);
QObject* QGraphicsTransform_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsTransform_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsTransform_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsTransform_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsTransform_delete(QGraphicsTransform* self);

QGraphicsScale* QGraphicsScale_new();
QGraphicsScale* QGraphicsScale_new2(QObject* parent);
void QGraphicsScale_virtbase(QGraphicsScale* src, QGraphicsTransform** outptr_QGraphicsTransform);
QMetaObject* QGraphicsScale_metaObject(const QGraphicsScale* self);
void* QGraphicsScale_metacast(QGraphicsScale* self, const char* param1);
struct miqt_string QGraphicsScale_tr(const char* s);
QVector3D* QGraphicsScale_origin(const QGraphicsScale* self);
void QGraphicsScale_setOrigin(QGraphicsScale* self, QVector3D* point);
double QGraphicsScale_xScale(const QGraphicsScale* self);
void QGraphicsScale_setXScale(QGraphicsScale* self, double xScale);
double QGraphicsScale_yScale(const QGraphicsScale* self);
void QGraphicsScale_setYScale(QGraphicsScale* self, double yScale);
double QGraphicsScale_zScale(const QGraphicsScale* self);
void QGraphicsScale_setZScale(QGraphicsScale* self, double zScale);
void QGraphicsScale_applyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_originChanged(QGraphicsScale* self);
void QGraphicsScale_connect_originChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_xScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_xScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_yScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_yScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_zScaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_zScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_scaleChanged(QGraphicsScale* self);
void QGraphicsScale_connect_scaleChanged(QGraphicsScale* self, intptr_t slot);
struct miqt_string QGraphicsScale_tr2(const char* s, const char* c);
struct miqt_string QGraphicsScale_tr3(const char* s, const char* c, int n);

bool QGraphicsScale_override_virtual_applyTo(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_applyTo(const void* self, QMatrix4x4* matrix);
bool QGraphicsScale_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsScale_virtualbase_event(void* self, QEvent* event);
bool QGraphicsScale_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsScale_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsScale_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsScale_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsScale_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsScale_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsScale_protectedbase_update(bool* _dynamic_cast_ok, void* self);
QObject* QGraphicsScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsScale_delete(QGraphicsScale* self);

QGraphicsRotation* QGraphicsRotation_new();
QGraphicsRotation* QGraphicsRotation_new2(QObject* parent);
void QGraphicsRotation_virtbase(QGraphicsRotation* src, QGraphicsTransform** outptr_QGraphicsTransform);
QMetaObject* QGraphicsRotation_metaObject(const QGraphicsRotation* self);
void* QGraphicsRotation_metacast(QGraphicsRotation* self, const char* param1);
struct miqt_string QGraphicsRotation_tr(const char* s);
QVector3D* QGraphicsRotation_origin(const QGraphicsRotation* self);
void QGraphicsRotation_setOrigin(QGraphicsRotation* self, QVector3D* point);
double QGraphicsRotation_angle(const QGraphicsRotation* self);
void QGraphicsRotation_setAngle(QGraphicsRotation* self, double angle);
QVector3D* QGraphicsRotation_axis(const QGraphicsRotation* self);
void QGraphicsRotation_setAxis(QGraphicsRotation* self, QVector3D* axis);
void QGraphicsRotation_setAxisWithAxis(QGraphicsRotation* self, int axis);
void QGraphicsRotation_applyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_originChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_originChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_angleChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_angleChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_axisChanged(QGraphicsRotation* self);
void QGraphicsRotation_connect_axisChanged(QGraphicsRotation* self, intptr_t slot);
struct miqt_string QGraphicsRotation_tr2(const char* s, const char* c);
struct miqt_string QGraphicsRotation_tr3(const char* s, const char* c, int n);

bool QGraphicsRotation_override_virtual_applyTo(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_applyTo(const void* self, QMatrix4x4* matrix);
bool QGraphicsRotation_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsRotation_virtualbase_event(void* self, QEvent* event);
bool QGraphicsRotation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsRotation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsRotation_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsRotation_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsRotation_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsRotation_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsRotation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsRotation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsRotation_protectedbase_update(bool* _dynamic_cast_ok, void* self);
QObject* QGraphicsRotation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsRotation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsRotation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsRotation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsRotation_delete(QGraphicsRotation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
