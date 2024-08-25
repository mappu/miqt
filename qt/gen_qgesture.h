#ifndef GEN_QGESTURE_H
#define GEN_QGESTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QMetaObject* QGesture_MetaObject(QGesture* self);
void QGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPointF* QGesture_HotSpot(QGesture* self);
void QGesture_SetHotSpot(QGesture* self, QPointF* value);
bool QGesture_HasHotSpot(QGesture* self);
void QGesture_UnsetHotSpot(QGesture* self);
void QGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QGesture_Delete(QGesture* self);

QPanGesture* QPanGesture_new();
QPanGesture* QPanGesture_new2(QObject* parent);
QMetaObject* QPanGesture_MetaObject(QPanGesture* self);
void QPanGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QPanGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPointF* QPanGesture_LastOffset(QPanGesture* self);
QPointF* QPanGesture_Offset(QPanGesture* self);
QPointF* QPanGesture_Delta(QPanGesture* self);
double QPanGesture_Acceleration(QPanGesture* self);
void QPanGesture_SetLastOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetOffset(QPanGesture* self, QPointF* value);
void QPanGesture_SetAcceleration(QPanGesture* self, double value);
void QPanGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QPanGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPanGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QPanGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPanGesture_Delete(QPanGesture* self);

QPinchGesture* QPinchGesture_new();
QPinchGesture* QPinchGesture_new2(QObject* parent);
QMetaObject* QPinchGesture_MetaObject(QPinchGesture* self);
void QPinchGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QPinchGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPointF* QPinchGesture_StartCenterPoint(QPinchGesture* self);
QPointF* QPinchGesture_LastCenterPoint(QPinchGesture* self);
QPointF* QPinchGesture_CenterPoint(QPinchGesture* self);
void QPinchGesture_SetStartCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetLastCenterPoint(QPinchGesture* self, QPointF* value);
void QPinchGesture_SetCenterPoint(QPinchGesture* self, QPointF* value);
double QPinchGesture_TotalScaleFactor(QPinchGesture* self);
double QPinchGesture_LastScaleFactor(QPinchGesture* self);
double QPinchGesture_ScaleFactor(QPinchGesture* self);
void QPinchGesture_SetTotalScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetLastScaleFactor(QPinchGesture* self, double value);
void QPinchGesture_SetScaleFactor(QPinchGesture* self, double value);
double QPinchGesture_TotalRotationAngle(QPinchGesture* self);
double QPinchGesture_LastRotationAngle(QPinchGesture* self);
double QPinchGesture_RotationAngle(QPinchGesture* self);
void QPinchGesture_SetTotalRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetLastRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_SetRotationAngle(QPinchGesture* self, double value);
void QPinchGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QPinchGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPinchGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QPinchGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QPinchGesture_Delete(QPinchGesture* self);

QSwipeGesture* QSwipeGesture_new();
QSwipeGesture* QSwipeGesture_new2(QObject* parent);
QMetaObject* QSwipeGesture_MetaObject(QSwipeGesture* self);
void QSwipeGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QSwipeGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
double QSwipeGesture_SwipeAngle(QSwipeGesture* self);
void QSwipeGesture_SetSwipeAngle(QSwipeGesture* self, double value);
void QSwipeGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QSwipeGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSwipeGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QSwipeGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QSwipeGesture_Delete(QSwipeGesture* self);

QTapGesture* QTapGesture_new();
QTapGesture* QTapGesture_new2(QObject* parent);
QMetaObject* QTapGesture_MetaObject(QTapGesture* self);
void QTapGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QTapGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPointF* QTapGesture_Position(QTapGesture* self);
void QTapGesture_SetPosition(QTapGesture* self, QPointF* pos);
void QTapGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTapGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTapGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTapGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTapGesture_Delete(QTapGesture* self);

QTapAndHoldGesture* QTapAndHoldGesture_new();
QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent);
QMetaObject* QTapAndHoldGesture_MetaObject(QTapAndHoldGesture* self);
void QTapAndHoldGesture_Tr(char* s, char** _out, int* _out_Strlen);
void QTapAndHoldGesture_TrUtf8(char* s, char** _out, int* _out_Strlen);
QPointF* QTapAndHoldGesture_Position(QTapAndHoldGesture* self);
void QTapAndHoldGesture_SetPosition(QTapAndHoldGesture* self, QPointF* pos);
void QTapAndHoldGesture_SetTimeout(int msecs);
int QTapAndHoldGesture_Timeout();
void QTapAndHoldGesture_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QTapAndHoldGesture_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTapAndHoldGesture_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QTapAndHoldGesture_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QTapAndHoldGesture_Delete(QTapAndHoldGesture* self);

QGestureEvent* QGestureEvent_new(QGesture** gestures, size_t gestures_len);
QGestureEvent* QGestureEvent_new2(QGestureEvent* param1);
void QGestureEvent_Gestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len);
void QGestureEvent_ActiveGestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len);
void QGestureEvent_CanceledGestures(QGestureEvent* self, QGesture*** _out, size_t* _out_len);
void QGestureEvent_SetAccepted(QGestureEvent* self, QGesture* param1, bool param2);
void QGestureEvent_Accept(QGestureEvent* self, QGesture* param1);
void QGestureEvent_Ignore(QGestureEvent* self, QGesture* param1);
bool QGestureEvent_IsAccepted(QGestureEvent* self, QGesture* param1);
void QGestureEvent_SetWidget(QGestureEvent* self, QWidget* widget);
QWidget* QGestureEvent_Widget(QGestureEvent* self);
QPointF* QGestureEvent_MapToGraphicsScene(QGestureEvent* self, QPointF* gesturePoint);
void QGestureEvent_Delete(QGestureEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
