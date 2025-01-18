#pragma once
#ifndef MIQT_QT6_GEN_QGRAPHICSEFFECT_H
#define MIQT_QT6_GEN_QGRAPHICSEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QChildEvent;
class QColor;
class QEvent;
class QGraphicsBlurEffect;
class QGraphicsColorizeEffect;
class QGraphicsDropShadowEffect;
class QGraphicsEffect;
class QGraphicsOpacityEffect;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPainter;
class QPointF;
class QRectF;
class QTimerEvent;
#else
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QGraphicsBlurEffect QGraphicsBlurEffect;
typedef struct QGraphicsColorizeEffect QGraphicsColorizeEffect;
typedef struct QGraphicsDropShadowEffect QGraphicsDropShadowEffect;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsOpacityEffect QGraphicsOpacityEffect;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPainter QPainter;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QTimerEvent QTimerEvent;
#endif

QGraphicsEffect* QGraphicsEffect_new();
QGraphicsEffect* QGraphicsEffect_new2(QObject* parent);
void QGraphicsEffect_virtbase(QGraphicsEffect* src, QObject** outptr_QObject);
QMetaObject* QGraphicsEffect_MetaObject(const QGraphicsEffect* self);
void* QGraphicsEffect_Metacast(QGraphicsEffect* self, const char* param1);
struct miqt_string QGraphicsEffect_Tr(const char* s);
QRectF* QGraphicsEffect_BoundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect);
QRectF* QGraphicsEffect_BoundingRect(const QGraphicsEffect* self);
bool QGraphicsEffect_IsEnabled(const QGraphicsEffect* self);
void QGraphicsEffect_SetEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_Update(QGraphicsEffect* self);
void QGraphicsEffect_EnabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_connect_EnabledChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags);
struct miqt_string QGraphicsEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect);
void QGraphicsEffect_override_virtual_Draw(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_Draw(void* self, QPainter* painter);
void QGraphicsEffect_override_virtual_SourceChanged(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_SourceChanged(void* self, int flags);
void QGraphicsEffect_override_virtual_Event(void* self, intptr_t slot);
bool QGraphicsEffect_virtualbase_Event(void* self, QEvent* event);
void QGraphicsEffect_override_virtual_EventFilter(void* self, intptr_t slot);
bool QGraphicsEffect_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QGraphicsEffect_override_virtual_TimerEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QGraphicsEffect_override_virtual_ChildEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QGraphicsEffect_override_virtual_CustomEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_CustomEvent(void* self, QEvent* event);
void QGraphicsEffect_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QGraphicsEffect_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QGraphicsEffect_Delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
void QGraphicsColorizeEffect_virtbase(QGraphicsColorizeEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsColorizeEffect_MetaObject(const QGraphicsColorizeEffect* self);
void* QGraphicsColorizeEffect_Metacast(QGraphicsColorizeEffect* self, const char* param1);
struct miqt_string QGraphicsColorizeEffect_Tr(const char* s);
QColor* QGraphicsColorizeEffect_Color(const QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_Strength(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_SetColor(QGraphicsColorizeEffect* self, QColor* c);
void QGraphicsColorizeEffect_SetStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_ColorChanged(QGraphicsColorizeEffect* self, QColor* color);
void QGraphicsColorizeEffect_connect_ColorChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_StrengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_connect_StrengthChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter);
struct miqt_string QGraphicsColorizeEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsColorizeEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsColorizeEffect_override_virtual_Draw(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_Draw(void* self, QPainter* painter);
void QGraphicsColorizeEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsColorizeEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect);
void QGraphicsColorizeEffect_override_virtual_SourceChanged(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_SourceChanged(void* self, int flags);
void QGraphicsColorizeEffect_Delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
void QGraphicsBlurEffect_virtbase(QGraphicsBlurEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsBlurEffect_MetaObject(const QGraphicsBlurEffect* self);
void* QGraphicsBlurEffect_Metacast(QGraphicsBlurEffect* self, const char* param1);
struct miqt_string QGraphicsBlurEffect_Tr(const char* s);
QRectF* QGraphicsBlurEffect_BoundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect);
double QGraphicsBlurEffect_BlurRadius(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_BlurHints(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_SetBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_SetBlurHints(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_BlurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_connect_BlurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_BlurHintsChanged(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_connect_BlurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter);
struct miqt_string QGraphicsBlurEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsBlurEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsBlurEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsBlurEffect_virtualbase_BoundingRectFor(const void* self, QRectF* rect);
void QGraphicsBlurEffect_override_virtual_Draw(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_Draw(void* self, QPainter* painter);
void QGraphicsBlurEffect_override_virtual_SourceChanged(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_SourceChanged(void* self, int flags);
void QGraphicsBlurEffect_Delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
void QGraphicsDropShadowEffect_virtbase(QGraphicsDropShadowEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsDropShadowEffect_MetaObject(const QGraphicsDropShadowEffect* self);
void* QGraphicsDropShadowEffect_Metacast(QGraphicsDropShadowEffect* self, const char* param1);
struct miqt_string QGraphicsDropShadowEffect_Tr(const char* s);
QRectF* QGraphicsDropShadowEffect_BoundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect);
QPointF* QGraphicsDropShadowEffect_Offset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_XOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_YOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_BlurRadius(const QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_Color(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_SetOffset(QGraphicsDropShadowEffect* self, QPointF* ofs);
void QGraphicsDropShadowEffect_SetOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_SetOffsetWithQreal(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_SetXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_SetYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_SetBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_SetColor(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_OffsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset);
void QGraphicsDropShadowEffect_connect_OffsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_connect_BlurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_ColorChanged(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_connect_ColorChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter);
struct miqt_string QGraphicsDropShadowEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsDropShadowEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsDropShadowEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsDropShadowEffect_virtualbase_BoundingRectFor(const void* self, QRectF* rect);
void QGraphicsDropShadowEffect_override_virtual_Draw(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_Draw(void* self, QPainter* painter);
void QGraphicsDropShadowEffect_override_virtual_SourceChanged(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_SourceChanged(void* self, int flags);
void QGraphicsDropShadowEffect_Delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
void QGraphicsOpacityEffect_virtbase(QGraphicsOpacityEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsOpacityEffect_MetaObject(const QGraphicsOpacityEffect* self);
void* QGraphicsOpacityEffect_Metacast(QGraphicsOpacityEffect* self, const char* param1);
struct miqt_string QGraphicsOpacityEffect_Tr(const char* s);
double QGraphicsOpacityEffect_Opacity(const QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_OpacityMask(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_SetOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_SetOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_OpacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_connect_OpacityChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_OpacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_connect_OpacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter);
struct miqt_string QGraphicsOpacityEffect_Tr2(const char* s, const char* c);
struct miqt_string QGraphicsOpacityEffect_Tr3(const char* s, const char* c, int n);
void QGraphicsOpacityEffect_override_virtual_Draw(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_Draw(void* self, QPainter* painter);
void QGraphicsOpacityEffect_override_virtual_BoundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsOpacityEffect_virtualbase_BoundingRectFor(const void* self, QRectF* sourceRect);
void QGraphicsOpacityEffect_override_virtual_SourceChanged(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_SourceChanged(void* self, int flags);
void QGraphicsOpacityEffect_Delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
