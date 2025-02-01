#pragma once
#ifndef MIQT_QT6_GEN_QGESTURE_H
#define MIQT_QT6_GEN_QGESTURE_H

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
class QGesture;
class QGestureEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPanGesture;
class QPinchGesture;
class QPointF;
class QSwipeGesture;
class QTapAndHoldGesture;
class QTapGesture;
class QTimerEvent;
class QWidget;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGesture QGesture;
typedef struct QGestureEvent QGestureEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPanGesture QPanGesture;
typedef struct QPinchGesture QPinchGesture;
typedef struct QPointF QPointF;
typedef struct QSwipeGesture QSwipeGesture;
typedef struct QTapAndHoldGesture QTapAndHoldGesture;
typedef struct QTapGesture QTapGesture;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

QGesture* QGesture_new();
QGesture* QGesture_new2(QObject* parent);
void QGesture_virtbase(QGesture* src, QObject** outptr_QObject);
QMetaObject* QGesture_metaObject(const QGesture* self);
void* QGesture_metacast(QGesture* self, const char* param1);
struct miqt_string QGesture_tr(const char* s);
int QGesture_gestureType(const QGesture* self);
int QGesture_state(const QGesture* self);
QPointF* QGesture_hotSpot(const QGesture* self);
void QGesture_setHotSpot(QGesture* self, QPointF* value);
bool QGesture_hasHotSpot(const QGesture* self);
void QGesture_unsetHotSpot(QGesture* self);
void QGesture_setGestureCancelPolicy(QGesture* self, int policy);
int QGesture_gestureCancelPolicy(const QGesture* self);
struct miqt_string QGesture_tr2(const char* s, const char* c);
struct miqt_string QGesture_tr3(const char* s, const char* c, int n);
bool QGesture_override_virtual_event(void* self, intptr_t slot);
bool QGesture_virtualbase_event(void* self, QEvent* event);
bool QGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QGesture_delete(QGesture* self);

QPanGesture* QPanGesture_new();
QPanGesture* QPanGesture_new2(QObject* parent);
void QPanGesture_virtbase(QPanGesture* src, QGesture** outptr_QGesture);
QMetaObject* QPanGesture_metaObject(const QPanGesture* self);
void* QPanGesture_metacast(QPanGesture* self, const char* param1);
struct miqt_string QPanGesture_tr(const char* s);
QPointF* QPanGesture_lastOffset(const QPanGesture* self);
QPointF* QPanGesture_offset(const QPanGesture* self);
QPointF* QPanGesture_delta(const QPanGesture* self);
double QPanGesture_acceleration(const QPanGesture* self);
void QPanGesture_setLastOffset(QPanGesture* self, QPointF* value);
void QPanGesture_setOffset(QPanGesture* self, QPointF* value);
void QPanGesture_setAcceleration(QPanGesture* self, double value);
struct miqt_string QPanGesture_tr2(const char* s, const char* c);
struct miqt_string QPanGesture_tr3(const char* s, const char* c, int n);
bool QPanGesture_override_virtual_event(void* self, intptr_t slot);
bool QPanGesture_virtualbase_event(void* self, QEvent* event);
bool QPanGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPanGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPanGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QPanGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPanGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QPanGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPanGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QPanGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QPanGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QPanGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPanGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPanGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPanGesture_delete(QPanGesture* self);

QPinchGesture* QPinchGesture_new();
QPinchGesture* QPinchGesture_new2(QObject* parent);
void QPinchGesture_virtbase(QPinchGesture* src, QGesture** outptr_QGesture);
QMetaObject* QPinchGesture_metaObject(const QPinchGesture* self);
void* QPinchGesture_metacast(QPinchGesture* self, const char* param1);
struct miqt_string QPinchGesture_tr(const char* s);
int QPinchGesture_totalChangeFlags(const QPinchGesture* self);
void QPinchGesture_setTotalChangeFlags(QPinchGesture* self, int value);
int QPinchGesture_changeFlags(const QPinchGesture* self);
void QPinchGesture_setChangeFlags(QPinchGesture* self, int value);
QPointF* QPinchGesture_startCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_lastCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_centerPoint(const QPinchGesture* self);
void QPinchGesture_setStartCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_setLastCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_setCenterPoint(QPinchGesture* self, QPointF* value);
double QPinchGesture_totalScaleFactor(const QPinchGesture* self);
double QPinchGesture_lastScaleFactor(const QPinchGesture* self);
double QPinchGesture_scaleFactor(const QPinchGesture* self);
void QPinchGesture_setTotalScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_setLastScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_setScaleFactor(QPinchGesture* self, double value);
double QPinchGesture_totalRotationAngle(const QPinchGesture* self);
double QPinchGesture_lastRotationAngle(const QPinchGesture* self);
double QPinchGesture_rotationAngle(const QPinchGesture* self);
void QPinchGesture_setTotalRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_setLastRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_setRotationAngle(QPinchGesture* self, double value);
struct miqt_string QPinchGesture_tr2(const char* s, const char* c);
struct miqt_string QPinchGesture_tr3(const char* s, const char* c, int n);
bool QPinchGesture_override_virtual_event(void* self, intptr_t slot);
bool QPinchGesture_virtualbase_event(void* self, QEvent* event);
bool QPinchGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPinchGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPinchGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QPinchGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPinchGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QPinchGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPinchGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QPinchGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QPinchGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QPinchGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPinchGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPinchGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QPinchGesture_delete(QPinchGesture* self);

QSwipeGesture* QSwipeGesture_new();
QSwipeGesture* QSwipeGesture_new2(QObject* parent);
void QSwipeGesture_virtbase(QSwipeGesture* src, QGesture** outptr_QGesture);
QMetaObject* QSwipeGesture_metaObject(const QSwipeGesture* self);
void* QSwipeGesture_metacast(QSwipeGesture* self, const char* param1);
struct miqt_string QSwipeGesture_tr(const char* s);
int QSwipeGesture_horizontalDirection(const QSwipeGesture* self);
int QSwipeGesture_verticalDirection(const QSwipeGesture* self);
double QSwipeGesture_swipeAngle(const QSwipeGesture* self);
void QSwipeGesture_setSwipeAngle(QSwipeGesture* self, double value);
struct miqt_string QSwipeGesture_tr2(const char* s, const char* c);
struct miqt_string QSwipeGesture_tr3(const char* s, const char* c, int n);
bool QSwipeGesture_override_virtual_event(void* self, intptr_t slot);
bool QSwipeGesture_virtualbase_event(void* self, QEvent* event);
bool QSwipeGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSwipeGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSwipeGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QSwipeGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSwipeGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QSwipeGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSwipeGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QSwipeGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QSwipeGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QSwipeGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSwipeGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSwipeGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSwipeGesture_delete(QSwipeGesture* self);

QTapGesture* QTapGesture_new();
QTapGesture* QTapGesture_new2(QObject* parent);
void QTapGesture_virtbase(QTapGesture* src, QGesture** outptr_QGesture);
QMetaObject* QTapGesture_metaObject(const QTapGesture* self);
void* QTapGesture_metacast(QTapGesture* self, const char* param1);
struct miqt_string QTapGesture_tr(const char* s);
QPointF* QTapGesture_position(const QTapGesture* self);
void QTapGesture_setPosition(QTapGesture* self, QPointF* pos);
struct miqt_string QTapGesture_tr2(const char* s, const char* c);
struct miqt_string QTapGesture_tr3(const char* s, const char* c, int n);
bool QTapGesture_override_virtual_event(void* self, intptr_t slot);
bool QTapGesture_virtualbase_event(void* self, QEvent* event);
bool QTapGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTapGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTapGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QTapGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTapGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QTapGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTapGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QTapGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QTapGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QTapGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTapGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTapGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTapGesture_delete(QTapGesture* self);

QTapAndHoldGesture* QTapAndHoldGesture_new();
QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent);
void QTapAndHoldGesture_virtbase(QTapAndHoldGesture* src, QGesture** outptr_QGesture);
QMetaObject* QTapAndHoldGesture_metaObject(const QTapAndHoldGesture* self);
void* QTapAndHoldGesture_metacast(QTapAndHoldGesture* self, const char* param1);
struct miqt_string QTapAndHoldGesture_tr(const char* s);
QPointF* QTapAndHoldGesture_position(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_setPosition(QTapAndHoldGesture* self, QPointF* pos);
void QTapAndHoldGesture_setTimeout(int msecs);
int QTapAndHoldGesture_timeout();
struct miqt_string QTapAndHoldGesture_tr2(const char* s, const char* c);
struct miqt_string QTapAndHoldGesture_tr3(const char* s, const char* c, int n);
bool QTapAndHoldGesture_override_virtual_event(void* self, intptr_t slot);
bool QTapAndHoldGesture_virtualbase_event(void* self, QEvent* event);
bool QTapAndHoldGesture_override_virtual_eventFilter(void* self, intptr_t slot);
bool QTapAndHoldGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QTapAndHoldGesture_override_virtual_timerEvent(void* self, intptr_t slot);
void QTapAndHoldGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QTapAndHoldGesture_override_virtual_childEvent(void* self, intptr_t slot);
void QTapAndHoldGesture_virtualbase_childEvent(void* self, QChildEvent* event);
bool QTapAndHoldGesture_override_virtual_customEvent(void* self, intptr_t slot);
void QTapAndHoldGesture_virtualbase_customEvent(void* self, QEvent* event);
bool QTapAndHoldGesture_override_virtual_connectNotify(void* self, intptr_t slot);
void QTapAndHoldGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QTapAndHoldGesture_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QTapAndHoldGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QTapAndHoldGesture_delete(QTapAndHoldGesture* self);

QGestureEvent* QGestureEvent_new(struct miqt_array /* of QGesture* */  gestures);
QGestureEvent* QGestureEvent_new2(QGestureEvent* param1);
void QGestureEvent_virtbase(QGestureEvent* src, QEvent** outptr_QEvent);
struct miqt_array /* of QGesture* */  QGestureEvent_gestures(const QGestureEvent* self);
QGesture* QGestureEvent_gesture(const QGestureEvent* self, int type);
struct miqt_array /* of QGesture* */  QGestureEvent_activeGestures(const QGestureEvent* self);
struct miqt_array /* of QGesture* */  QGestureEvent_canceledGestures(const QGestureEvent* self);
void QGestureEvent_setAccepted(QGestureEvent* self, QGesture* param1, bool param2);
void QGestureEvent_accept(QGestureEvent* self, QGesture* param1);
void QGestureEvent_ignore(QGestureEvent* self, QGesture* param1);
bool QGestureEvent_isAccepted(const QGestureEvent* self, QGesture* param1);
void QGestureEvent_setAccepted2(QGestureEvent* self, int param1, bool param2);
void QGestureEvent_acceptWithQtGestureType(QGestureEvent* self, int param1);
void QGestureEvent_ignoreWithQtGestureType(QGestureEvent* self, int param1);
bool QGestureEvent_isAcceptedWithQtGestureType(const QGestureEvent* self, int param1);
void QGestureEvent_setWidget(QGestureEvent* self, QWidget* widget);
QWidget* QGestureEvent_widget(const QGestureEvent* self);
QPointF* QGestureEvent_mapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint);
bool QGestureEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QGestureEvent_virtualbase_setAccepted(void* self, bool accepted);
bool QGestureEvent_override_virtual_clone(void* self, intptr_t slot);
QEvent* QGestureEvent_virtualbase_clone(const void* self);
void QGestureEvent_delete(QGestureEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
