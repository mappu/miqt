#ifndef GEN_QGESTURE_H
#define GEN_QGESTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QGesture;
class QGestureEvent;
class QMetaObject;
class QObject;
class QPanGesture;
class QPinchGesture;
class QPointF;
class QSwipeGesture;
class QTapAndHoldGesture;
class QTapGesture;
class QWidget;
#else
typedef struct QGesture QGesture;
typedef struct QGestureEvent QGestureEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPanGesture QPanGesture;
typedef struct QPinchGesture QPinchGesture;
typedef struct QPointF QPointF;
typedef struct QSwipeGesture QSwipeGesture;
typedef struct QTapAndHoldGesture QTapAndHoldGesture;
typedef struct QTapGesture QTapGesture;
typedef struct QWidget QWidget;
#endif

QGesture* QGesture_new();
QGesture* QGesture_new2(QObject* parent);
QMetaObject* QGesture_MetaObject(const QGesture* self);
struct miqt_string* QGesture_Tr(const char* s);
struct miqt_string* QGesture_TrUtf8(const char* s);
int QGesture_GestureType(const QGesture* self);
int QGesture_State(const QGesture* self);
QPointF* QGesture_HotSpot(const QGesture* self);
void QGesture_SetHotSpot(QGesture* self, QPointF* value);
bool QGesture_HasHotSpot(const QGesture* self);
void QGesture_UnsetHotSpot(QGesture* self);
void QGesture_SetGestureCancelPolicy(QGesture* self, int policy);
int QGesture_GestureCancelPolicy(const QGesture* self);
struct miqt_string* QGesture_Tr2(const char* s, const char* c);
struct miqt_string* QGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QGesture_TrUtf83(const char* s, const char* c, int n);
void QGesture_Delete(QGesture* self);

QPanGesture* QPanGesture_new();
QPanGesture* QPanGesture_new2(QObject* parent);
QMetaObject* QPanGesture_MetaObject(const QPanGesture* self);
struct miqt_string* QPanGesture_Tr(const char* s);
struct miqt_string* QPanGesture_TrUtf8(const char* s);
QPointF* QPanGesture_LastOffset(const QPanGesture* self);
QPointF* QPanGesture_Offset(const QPanGesture* self);
QPointF* QPanGesture_Delta(const QPanGesture* self);
double QPanGesture_Acceleration(const QPanGesture* self);
void QPanGesture_SetLastOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetAcceleration(QPanGesture* self, double value);
struct miqt_string* QPanGesture_Tr2(const char* s, const char* c);
struct miqt_string* QPanGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QPanGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QPanGesture_TrUtf83(const char* s, const char* c, int n);
void QPanGesture_Delete(QPanGesture* self);

QPinchGesture* QPinchGesture_new();
QPinchGesture* QPinchGesture_new2(QObject* parent);
QMetaObject* QPinchGesture_MetaObject(const QPinchGesture* self);
struct miqt_string* QPinchGesture_Tr(const char* s);
struct miqt_string* QPinchGesture_TrUtf8(const char* s);
int QPinchGesture_TotalChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetTotalChangeFlags(QPinchGesture* self, int value);
int QPinchGesture_ChangeFlags(const QPinchGesture* self);
void QPinchGesture_SetChangeFlags(QPinchGesture* self, int value);
QPointF* QPinchGesture_StartCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_LastCenterPoint(const QPinchGesture* self);
QPointF* QPinchGesture_CenterPoint(const QPinchGesture* self);
void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetCenterPoint(QPinchGesture* self, QPointF* value);
double QPinchGesture_TotalScaleFactor(const QPinchGesture* self);
double QPinchGesture_LastScaleFactor(const QPinchGesture* self);
double QPinchGesture_ScaleFactor(const QPinchGesture* self);
void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value);
double QPinchGesture_TotalRotationAngle(const QPinchGesture* self);
double QPinchGesture_LastRotationAngle(const QPinchGesture* self);
double QPinchGesture_RotationAngle(const QPinchGesture* self);
void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value);
struct miqt_string* QPinchGesture_Tr2(const char* s, const char* c);
struct miqt_string* QPinchGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QPinchGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QPinchGesture_TrUtf83(const char* s, const char* c, int n);
void QPinchGesture_Delete(QPinchGesture* self);

QSwipeGesture* QSwipeGesture_new();
QSwipeGesture* QSwipeGesture_new2(QObject* parent);
QMetaObject* QSwipeGesture_MetaObject(const QSwipeGesture* self);
struct miqt_string* QSwipeGesture_Tr(const char* s);
struct miqt_string* QSwipeGesture_TrUtf8(const char* s);
int QSwipeGesture_HorizontalDirection(const QSwipeGesture* self);
int QSwipeGesture_VerticalDirection(const QSwipeGesture* self);
double QSwipeGesture_SwipeAngle(const QSwipeGesture* self);
void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value);
struct miqt_string* QSwipeGesture_Tr2(const char* s, const char* c);
struct miqt_string* QSwipeGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QSwipeGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QSwipeGesture_TrUtf83(const char* s, const char* c, int n);
void QSwipeGesture_Delete(QSwipeGesture* self);

QTapGesture* QTapGesture_new();
QTapGesture* QTapGesture_new2(QObject* parent);
QMetaObject* QTapGesture_MetaObject(const QTapGesture* self);
struct miqt_string* QTapGesture_Tr(const char* s);
struct miqt_string* QTapGesture_TrUtf8(const char* s);
QPointF* QTapGesture_Position(const QTapGesture* self);
void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos);
struct miqt_string* QTapGesture_Tr2(const char* s, const char* c);
struct miqt_string* QTapGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTapGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QTapGesture_TrUtf83(const char* s, const char* c, int n);
void QTapGesture_Delete(QTapGesture* self);

QTapAndHoldGesture* QTapAndHoldGesture_new();
QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent);
QMetaObject* QTapAndHoldGesture_MetaObject(const QTapAndHoldGesture* self);
struct miqt_string* QTapAndHoldGesture_Tr(const char* s);
struct miqt_string* QTapAndHoldGesture_TrUtf8(const char* s);
QPointF* QTapAndHoldGesture_Position(const QTapAndHoldGesture* self);
void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, QPointF* pos);
void QTapAndHoldGesture_SetTimeout(int msecs);
int QTapAndHoldGesture_Timeout();
struct miqt_string* QTapAndHoldGesture_Tr2(const char* s, const char* c);
struct miqt_string* QTapAndHoldGesture_Tr3(const char* s, const char* c, int n);
struct miqt_string* QTapAndHoldGesture_TrUtf82(const char* s, const char* c);
struct miqt_string* QTapAndHoldGesture_TrUtf83(const char* s, const char* c, int n);
void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self);

QGestureEvent* QGestureEvent_new(struct miqt_array* /* of QGesture* */ gestures);
QGestureEvent* QGestureEvent_new2(QGestureEvent* param1);
struct miqt_array* QGestureEvent_Gestures(const QGestureEvent* self);
QGesture* QGestureEvent_Gesture(const QGestureEvent* self, int typeVal);
struct miqt_array* QGestureEvent_ActiveGestures(const QGestureEvent* self);
struct miqt_array* QGestureEvent_CanceledGestures(const QGestureEvent* self);
void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2);
void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1);
void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1);
bool QGestureEvent_IsAccepted(const QGestureEvent* self, QGesture* param1);
void QGestureEvent_SetAccepted2(QGestureEvent* self, int param1, bool param2);
void QGestureEvent_AcceptWithQtGestureType(QGestureEvent* self, int param1);
void QGestureEvent_IgnoreWithQtGestureType(QGestureEvent* self, int param1);
bool QGestureEvent_IsAcceptedWithQtGestureType(const QGestureEvent* self, int param1);
void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget);
QWidget* QGestureEvent_Widget(const QGestureEvent* self);
QPointF* QGestureEvent_MapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint);
void QGestureEvent_Delete(QGestureEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
