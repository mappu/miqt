#pragma once
#ifndef MIQT_QT_GEN_QGRAPHICSITEMANIMATION_H
#define MIQT_QT_GEN_QGRAPHICSITEMANIMATION_H

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
class QGraphicsItem;
class QGraphicsItemAnimation;
class QMatrix;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPointF;
class QTimeLine;
class QTimerEvent;
class QTransform;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QGraphicsItem QGraphicsItem;
typedef struct QGraphicsItemAnimation QGraphicsItemAnimation;
typedef struct QMatrix QMatrix;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPointF QPointF;
typedef struct QTimeLine QTimeLine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QTransform QTransform;
#endif

QGraphicsItemAnimation* QGraphicsItemAnimation_new();
QGraphicsItemAnimation* QGraphicsItemAnimation_new2(QObject* parent);
void QGraphicsItemAnimation_virtbase(QGraphicsItemAnimation* src, QObject** outptr_QObject);
QMetaObject* QGraphicsItemAnimation_metaObject(const QGraphicsItemAnimation* self);
void* QGraphicsItemAnimation_metacast(QGraphicsItemAnimation* self, const char* param1);
struct miqt_string QGraphicsItemAnimation_tr(const char* s);
struct miqt_string QGraphicsItemAnimation_trUtf8(const char* s);
QGraphicsItem* QGraphicsItemAnimation_item(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setItem(QGraphicsItemAnimation* self, QGraphicsItem* item);
QTimeLine* QGraphicsItemAnimation_timeLine(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine);
QPointF* QGraphicsItemAnimation_posAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_posList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos);
QMatrix* QGraphicsItemAnimation_matrixAt(const QGraphicsItemAnimation* self, double step);
QTransform* QGraphicsItemAnimation_transformAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_rotationAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and double   */  QGraphicsItemAnimation_rotationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setRotationAt(QGraphicsItemAnimation* self, double step, double angle);
double QGraphicsItemAnimation_xTranslationAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_yTranslationAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_translationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy);
double QGraphicsItemAnimation_verticalScaleAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_horizontalScaleAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_scaleList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy);
double QGraphicsItemAnimation_verticalShearAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_horizontalShearAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_shearList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv);
void QGraphicsItemAnimation_clear(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_setStep(QGraphicsItemAnimation* self, double x);
void QGraphicsItemAnimation_reset(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_beforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_afterAnimationStep(QGraphicsItemAnimation* self, double step);
struct miqt_string QGraphicsItemAnimation_tr2(const char* s, const char* c);
struct miqt_string QGraphicsItemAnimation_tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsItemAnimation_trUtf82(const char* s, const char* c);
struct miqt_string QGraphicsItemAnimation_trUtf83(const char* s, const char* c, int n);

bool QGraphicsItemAnimation_override_virtual_beforeAnimationStep(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_beforeAnimationStep(void* self, double step);
bool QGraphicsItemAnimation_override_virtual_afterAnimationStep(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_afterAnimationStep(void* self, double step);
bool QGraphicsItemAnimation_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsItemAnimation_virtualbase_event(void* self, QEvent* event);
bool QGraphicsItemAnimation_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsItemAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsItemAnimation_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsItemAnimation_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsItemAnimation_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsItemAnimation_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsItemAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QGraphicsItemAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsItemAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsItemAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsItemAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsItemAnimation_delete(QGraphicsItemAnimation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
