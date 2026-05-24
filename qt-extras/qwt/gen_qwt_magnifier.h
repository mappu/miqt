#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_MAGNIFIER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_MAGNIFIER_H

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
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QObject;
class QTimerEvent;
class QWheelEvent;
class QWidget;
class QwtMagnifier;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QwtMagnifier QwtMagnifier;
#endif

QwtMagnifier* QwtMagnifier_new(QWidget* param1);
void QwtMagnifier_virtbase(QwtMagnifier* src, QObject** outptr_QObject);
QMetaObject* QwtMagnifier_metaObject(const QwtMagnifier* self);
void* QwtMagnifier_metacast(QwtMagnifier* self, const char* param1);
struct miqt_string QwtMagnifier_tr(const char* s);
struct miqt_string QwtMagnifier_trUtf8(const char* s);
QWidget* QwtMagnifier_parentWidget(QwtMagnifier* self);
QWidget* QwtMagnifier_parentWidget2(const QwtMagnifier* self);
void QwtMagnifier_setEnabled(QwtMagnifier* self, bool enabled);
bool QwtMagnifier_isEnabled(const QwtMagnifier* self);
void QwtMagnifier_setMouseFactor(QwtMagnifier* self, double mouseFactor);
double QwtMagnifier_mouseFactor(const QwtMagnifier* self);
void QwtMagnifier_setMouseButton(QwtMagnifier* self, int param1);
void QwtMagnifier_getMouseButton(const QwtMagnifier* self, int* param1, int* param2);
void QwtMagnifier_setWheelFactor(QwtMagnifier* self, double wheelFactor);
double QwtMagnifier_wheelFactor(const QwtMagnifier* self);
void QwtMagnifier_setWheelModifiers(QwtMagnifier* self, int wheelModifiers);
int QwtMagnifier_wheelModifiers(const QwtMagnifier* self);
void QwtMagnifier_setKeyFactor(QwtMagnifier* self, double keyFactor);
double QwtMagnifier_keyFactor(const QwtMagnifier* self);
void QwtMagnifier_setZoomInKey(QwtMagnifier* self, int key);
void QwtMagnifier_getZoomInKey(const QwtMagnifier* self, int* key, int* param2);
void QwtMagnifier_setZoomOutKey(QwtMagnifier* self, int key);
void QwtMagnifier_getZoomOutKey(const QwtMagnifier* self, int* key, int* param2);
bool QwtMagnifier_eventFilter(QwtMagnifier* self, QObject* param1, QEvent* param2);
void QwtMagnifier_rescale(QwtMagnifier* self, double factor);
void QwtMagnifier_widgetMousePressEvent(QwtMagnifier* self, QMouseEvent* param1);
void QwtMagnifier_widgetMouseReleaseEvent(QwtMagnifier* self, QMouseEvent* param1);
void QwtMagnifier_widgetMouseMoveEvent(QwtMagnifier* self, QMouseEvent* param1);
void QwtMagnifier_widgetWheelEvent(QwtMagnifier* self, QWheelEvent* param1);
void QwtMagnifier_widgetKeyPressEvent(QwtMagnifier* self, QKeyEvent* param1);
void QwtMagnifier_widgetKeyReleaseEvent(QwtMagnifier* self, QKeyEvent* param1);
struct miqt_string QwtMagnifier_tr2(const char* s, const char* c);
struct miqt_string QwtMagnifier_tr3(const char* s, const char* c, int n);
struct miqt_string QwtMagnifier_trUtf82(const char* s, const char* c);
struct miqt_string QwtMagnifier_trUtf83(const char* s, const char* c, int n);
void QwtMagnifier_setMouseButton2(QwtMagnifier* self, int param1, int param2);
void QwtMagnifier_setZoomInKey2(QwtMagnifier* self, int key, int param2);
void QwtMagnifier_setZoomOutKey2(QwtMagnifier* self, int key, int param2);

bool QwtMagnifier_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtMagnifier_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QwtMagnifier_override_virtual_rescale(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_rescale(void* self, double factor);
bool QwtMagnifier_override_virtual_widgetMousePressEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);
bool QwtMagnifier_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtMagnifier_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtMagnifier_override_virtual_widgetWheelEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);
bool QwtMagnifier_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);
bool QwtMagnifier_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);
bool QwtMagnifier_override_virtual_event(void* self, intptr_t slot);
bool QwtMagnifier_virtualbase_event(void* self, QEvent* event);
bool QwtMagnifier_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtMagnifier_override_virtual_childEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtMagnifier_override_virtual_customEvent(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_customEvent(void* self, QEvent* event);
bool QwtMagnifier_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtMagnifier_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtMagnifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QwtMagnifier_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtMagnifier_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtMagnifier_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtMagnifier_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtMagnifier_delete(QwtMagnifier* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
