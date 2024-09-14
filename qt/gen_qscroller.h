#ifndef GEN_QSCROLLER_H
#define GEN_QSCROLLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QPointF;
class QRectF;
class QScroller;
class QScrollerProperties;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QScroller QScroller;
typedef struct QScrollerProperties QScrollerProperties;
#endif

QMetaObject* QScroller_MetaObject(const QScroller* self);
struct miqt_string* QScroller_Tr(const char* s);
struct miqt_string* QScroller_TrUtf8(const char* s);
bool QScroller_HasScroller(QObject* target);
QScroller* QScroller_Scroller(QObject* target);
QScroller* QScroller_ScrollerWithTarget(QObject* target);
uintptr_t QScroller_GrabGesture(QObject* target);
uintptr_t QScroller_GrabbedGesture(QObject* target);
void QScroller_UngrabGesture(QObject* target);
struct miqt_array* QScroller_ActiveScrollers();
QObject* QScroller_Target(const QScroller* self);
uintptr_t QScroller_State(const QScroller* self);
bool QScroller_HandleInput(QScroller* self, uintptr_t input, QPointF* position);
void QScroller_Stop(QScroller* self);
QPointF* QScroller_Velocity(const QScroller* self);
QPointF* QScroller_FinalPosition(const QScroller* self);
QPointF* QScroller_PixelPerMeter(const QScroller* self);
QScrollerProperties* QScroller_ScrollerProperties(const QScroller* self);
void QScroller_SetSnapPositionsX(QScroller* self, struct miqt_array* /* of double */ positions);
void QScroller_SetSnapPositionsX2(QScroller* self, double first, double interval);
void QScroller_SetSnapPositionsY(QScroller* self, struct miqt_array* /* of double */ positions);
void QScroller_SetSnapPositionsY2(QScroller* self, double first, double interval);
void QScroller_SetScrollerProperties(QScroller* self, QScrollerProperties* prop);
void QScroller_ScrollTo(QScroller* self, QPointF* pos);
void QScroller_ScrollTo2(QScroller* self, QPointF* pos, int scrollTime);
void QScroller_EnsureVisible(QScroller* self, QRectF* rect, double xmargin, double ymargin);
void QScroller_EnsureVisible2(QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime);
void QScroller_ResendPrepareEvent(QScroller* self);
void QScroller_StateChanged(QScroller* self, uintptr_t newstate);
void QScroller_connect_StateChanged(QScroller* self, void* slot);
void QScroller_ScrollerPropertiesChanged(QScroller* self, QScrollerProperties* param1);
void QScroller_connect_ScrollerPropertiesChanged(QScroller* self, void* slot);
struct miqt_string* QScroller_Tr2(const char* s, const char* c);
struct miqt_string* QScroller_Tr3(const char* s, const char* c, int n);
struct miqt_string* QScroller_TrUtf82(const char* s, const char* c);
struct miqt_string* QScroller_TrUtf83(const char* s, const char* c, int n);
uintptr_t QScroller_GrabGesture2(QObject* target, uintptr_t gestureType);
bool QScroller_HandleInput3(QScroller* self, uintptr_t input, QPointF* position, long long timestamp);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
