#pragma once
#ifndef MIQT_QT_GEN_QSCROLLER_H
#define MIQT_QT_GEN_QSCROLLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointF;
class QRectF;
class QScroller;
class QScrollerProperties;
#else
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QScroller QScroller;
typedef struct QScrollerProperties QScrollerProperties;
#endif

void QScroller_virtbase(QScroller* src, QObject** outptr_QObject);
QMetaObject* QScroller_metaObject(const QScroller* self);
void* QScroller_metacast(QScroller* self, const char* param1);
struct miqt_string QScroller_tr(const char* s);
struct miqt_string QScroller_trUtf8(const char* s);
bool QScroller_hasScroller(QObject* target);
QScroller* QScroller_scroller(QObject* target);
QScroller* QScroller_scrollerWithTarget(QObject* target);
int QScroller_grabGesture(QObject* target);
int QScroller_grabbedGesture(QObject* target);
void QScroller_ungrabGesture(QObject* target);
struct miqt_array /* of QScroller* */  QScroller_activeScrollers();
QObject* QScroller_target(const QScroller* self);
int QScroller_state(const QScroller* self);
bool QScroller_handleInput(QScroller* self, int input, QPointF* position);
void QScroller_stop(QScroller* self);
QPointF* QScroller_velocity(const QScroller* self);
QPointF* QScroller_finalPosition(const QScroller* self);
QPointF* QScroller_pixelPerMeter(const QScroller* self);
QScrollerProperties* QScroller_scrollerProperties(const QScroller* self);
void QScroller_setSnapPositionsX(QScroller* self, struct miqt_array /* of double */  positions);
void QScroller_setSnapPositionsX2(QScroller* self, double first, double interval);
void QScroller_setSnapPositionsY(QScroller* self, struct miqt_array /* of double */  positions);
void QScroller_setSnapPositionsY2(QScroller* self, double first, double interval);
void QScroller_setScrollerProperties(QScroller* self, QScrollerProperties* prop);
void QScroller_scrollTo(QScroller* self, QPointF* pos);
void QScroller_scrollTo2(QScroller* self, QPointF* pos, int scrollTime);
void QScroller_ensureVisible(QScroller* self, QRectF* rect, double xmargin, double ymargin);
void QScroller_ensureVisible2(QScroller* self, QRectF* rect, double xmargin, double ymargin, int scrollTime);
void QScroller_resendPrepareEvent(QScroller* self);
void QScroller_stateChanged(QScroller* self, int newstate);
void QScroller_connect_stateChanged(QScroller* self, intptr_t slot);
void QScroller_scrollerPropertiesChanged(QScroller* self, QScrollerProperties* param1);
void QScroller_connect_scrollerPropertiesChanged(QScroller* self, intptr_t slot);
struct miqt_string QScroller_tr2(const char* s, const char* c);
struct miqt_string QScroller_tr3(const char* s, const char* c, int n);
struct miqt_string QScroller_trUtf82(const char* s, const char* c);
struct miqt_string QScroller_trUtf83(const char* s, const char* c, int n);
int QScroller_grabGesture2(QObject* target, int gestureType);
bool QScroller_handleInput2(QScroller* self, int input, QPointF* position, long long timestamp);


#ifdef __cplusplus
} /* extern C */
#endif

#endif
