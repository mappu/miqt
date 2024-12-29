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
QMetaObject* QGraphicsItemAnimation_MetaObject(const QGraphicsItemAnimation* self);
void* QGraphicsItemAnimation_Metacast(QGraphicsItemAnimation* self, const char* param1);
struct miqt_string QGraphicsItemAnimation_Tr(const char* s);
struct miqt_string QGraphicsItemAnimation_TrUtf8(const char* s);
QGraphicsItem* QGraphicsItemAnimation_Item(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetItem(QGraphicsItemAnimation* self, QGraphicsItem* item);
QTimeLine* QGraphicsItemAnimation_TimeLine(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTimeLine(QGraphicsItemAnimation* self, QTimeLine* timeLine);
QPointF* QGraphicsItemAnimation_PosAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_PosList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetPosAt(QGraphicsItemAnimation* self, double step, QPointF* pos);
QMatrix* QGraphicsItemAnimation_MatrixAt(const QGraphicsItemAnimation* self, double step);
QTransform* QGraphicsItemAnimation_TransformAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_RotationAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and double   */  QGraphicsItemAnimation_RotationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetRotationAt(QGraphicsItemAnimation* self, double step, double angle);
double QGraphicsItemAnimation_XTranslationAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_YTranslationAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_TranslationList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetTranslationAt(QGraphicsItemAnimation* self, double step, double dx, double dy);
double QGraphicsItemAnimation_VerticalScaleAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalScaleAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_ScaleList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetScaleAt(QGraphicsItemAnimation* self, double step, double sx, double sy);
double QGraphicsItemAnimation_VerticalShearAt(const QGraphicsItemAnimation* self, double step);
double QGraphicsItemAnimation_HorizontalShearAt(const QGraphicsItemAnimation* self, double step);
struct miqt_array /* of struct miqt_map  tuple of double and QPointF*   */  QGraphicsItemAnimation_ShearList(const QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetShearAt(QGraphicsItemAnimation* self, double step, double sh, double sv);
void QGraphicsItemAnimation_Clear(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_SetStep(QGraphicsItemAnimation* self, double x);
void QGraphicsItemAnimation_Reset(QGraphicsItemAnimation* self);
void QGraphicsItemAnimation_BeforeAnimationStep(QGraphicsItemAnimation* self, double step);
void QGraphicsItemAnimation_AfterAnimationStep(QGraphicsItemAnimation* self, double step);
struct miqt_string QGraphicsItemAnimation_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsItemAnimation_Tr3(const char* s, const char* c, int n);
struct miqt_string QGraphicsItemAnimation_TrUtf82(const char* s, const char* c);
struct miqt_string QGraphicsItemAnimation_TrUtf83(const char* s, const char* c, int n);
void QGraphicsItemAnimation_override_virtual_BeforeAnimationStep(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_BeforeAnimationStep(void* self, double step);
void QGraphicsItemAnimation_override_virtual_AfterAnimationStep(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_AfterAnimationStep(void* self, double step);
void QGraphicsItemAnimation_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsItemAnimation_virtualbase_Event(void* self, QEvent* event);
void QGraphicsItemAnimation_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsItemAnimation_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QGraphicsItemAnimation_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QGraphicsItemAnimation_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QGraphicsItemAnimation_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_CustomEvent(void* self, QEvent* event);
void QGraphicsItemAnimation_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QGraphicsItemAnimation_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsItemAnimation_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QGraphicsItemAnimation_Delete(QGraphicsItemAnimation* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
