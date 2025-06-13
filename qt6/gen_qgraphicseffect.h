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
class QPixmap;
class QPoint;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRectF QRectF;
typedef struct QTimerEvent QTimerEvent;
#endif

QGraphicsEffect* QGraphicsEffect_new();
QGraphicsEffect* QGraphicsEffect_new2(QObject* parent);
void QGraphicsEffect_virtbase(QGraphicsEffect* src, QObject** outptr_QObject);
QMetaObject* QGraphicsEffect_metaObject(const QGraphicsEffect* self);
void* QGraphicsEffect_metacast(QGraphicsEffect* self, const char* param1);
struct miqt_string QGraphicsEffect_tr(const char* s);
QRectF* QGraphicsEffect_boundingRectFor(const QGraphicsEffect* self, QRectF* sourceRect);
QRectF* QGraphicsEffect_boundingRect(const QGraphicsEffect* self);
bool QGraphicsEffect_isEnabled(const QGraphicsEffect* self);
void QGraphicsEffect_setEnabled(QGraphicsEffect* self, bool enable);
void QGraphicsEffect_update(QGraphicsEffect* self);
void QGraphicsEffect_enabledChanged(QGraphicsEffect* self, bool enabled);
void QGraphicsEffect_connect_enabledChanged(QGraphicsEffect* self, intptr_t slot);
void QGraphicsEffect_draw(QGraphicsEffect* self, QPainter* painter);
void QGraphicsEffect_sourceChanged(QGraphicsEffect* self, int flags);
struct miqt_string QGraphicsEffect_tr2(const char* s, const char* c);
struct miqt_string QGraphicsEffect_tr3(const char* s, const char* c, int n);

bool QGraphicsEffect_override_virtual_boundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect);
bool QGraphicsEffect_override_virtual_draw(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_draw(void* self, QPainter* painter);
bool QGraphicsEffect_override_virtual_sourceChanged(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_sourceChanged(void* self, int flags);
bool QGraphicsEffect_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsEffect_virtualbase_event(void* self, QEvent* event);
bool QGraphicsEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
bool QGraphicsEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
void QGraphicsEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
QPixmap* QGraphicsEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsEffect_protectedbase_sourceBoundingRectWithSystem(bool* _dynamic_cast_ok, const void* self, int system);
QPixmap* QGraphicsEffect_protectedbase_sourcePixmapWithSystem(bool* _dynamic_cast_ok, const void* self, int system);
QPixmap* QGraphicsEffect_protectedbase_sourcePixmap2(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset);
QPixmap* QGraphicsEffect_protectedbase_sourcePixmap3(bool* _dynamic_cast_ok, const void* self, int system, QPoint* offset, int mode);
QObject* QGraphicsEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsEffect_delete(QGraphicsEffect* self);

QGraphicsColorizeEffect* QGraphicsColorizeEffect_new();
QGraphicsColorizeEffect* QGraphicsColorizeEffect_new2(QObject* parent);
void QGraphicsColorizeEffect_virtbase(QGraphicsColorizeEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsColorizeEffect_metaObject(const QGraphicsColorizeEffect* self);
void* QGraphicsColorizeEffect_metacast(QGraphicsColorizeEffect* self, const char* param1);
struct miqt_string QGraphicsColorizeEffect_tr(const char* s);
QColor* QGraphicsColorizeEffect_color(const QGraphicsColorizeEffect* self);
double QGraphicsColorizeEffect_strength(const QGraphicsColorizeEffect* self);
void QGraphicsColorizeEffect_setColor(QGraphicsColorizeEffect* self, QColor* c);
void QGraphicsColorizeEffect_setStrength(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_colorChanged(QGraphicsColorizeEffect* self, QColor* color);
void QGraphicsColorizeEffect_connect_colorChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_strengthChanged(QGraphicsColorizeEffect* self, double strength);
void QGraphicsColorizeEffect_connect_strengthChanged(QGraphicsColorizeEffect* self, intptr_t slot);
void QGraphicsColorizeEffect_draw(QGraphicsColorizeEffect* self, QPainter* painter);
struct miqt_string QGraphicsColorizeEffect_tr2(const char* s, const char* c);
struct miqt_string QGraphicsColorizeEffect_tr3(const char* s, const char* c, int n);

bool QGraphicsColorizeEffect_override_virtual_draw(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_draw(void* self, QPainter* painter);
bool QGraphicsColorizeEffect_override_virtual_boundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsColorizeEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect);
bool QGraphicsColorizeEffect_override_virtual_sourceChanged(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_sourceChanged(void* self, int flags);
bool QGraphicsColorizeEffect_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsColorizeEffect_virtualbase_event(void* self, QEvent* event);
bool QGraphicsColorizeEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsColorizeEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsColorizeEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsColorizeEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsColorizeEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsColorizeEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsColorizeEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsColorizeEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsColorizeEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
bool QGraphicsColorizeEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsColorizeEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
void QGraphicsColorizeEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
QPixmap* QGraphicsColorizeEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
QObject* QGraphicsColorizeEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsColorizeEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsColorizeEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsColorizeEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsColorizeEffect_delete(QGraphicsColorizeEffect* self);

QGraphicsBlurEffect* QGraphicsBlurEffect_new();
QGraphicsBlurEffect* QGraphicsBlurEffect_new2(QObject* parent);
void QGraphicsBlurEffect_virtbase(QGraphicsBlurEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsBlurEffect_metaObject(const QGraphicsBlurEffect* self);
void* QGraphicsBlurEffect_metacast(QGraphicsBlurEffect* self, const char* param1);
struct miqt_string QGraphicsBlurEffect_tr(const char* s);
QRectF* QGraphicsBlurEffect_boundingRectFor(const QGraphicsBlurEffect* self, QRectF* rect);
double QGraphicsBlurEffect_blurRadius(const QGraphicsBlurEffect* self);
int QGraphicsBlurEffect_blurHints(const QGraphicsBlurEffect* self);
void QGraphicsBlurEffect_setBlurRadius(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_setBlurHints(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_blurRadiusChanged(QGraphicsBlurEffect* self, double blurRadius);
void QGraphicsBlurEffect_connect_blurRadiusChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_blurHintsChanged(QGraphicsBlurEffect* self, int hints);
void QGraphicsBlurEffect_connect_blurHintsChanged(QGraphicsBlurEffect* self, intptr_t slot);
void QGraphicsBlurEffect_draw(QGraphicsBlurEffect* self, QPainter* painter);
struct miqt_string QGraphicsBlurEffect_tr2(const char* s, const char* c);
struct miqt_string QGraphicsBlurEffect_tr3(const char* s, const char* c, int n);

bool QGraphicsBlurEffect_override_virtual_boundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsBlurEffect_virtualbase_boundingRectFor(const void* self, QRectF* rect);
bool QGraphicsBlurEffect_override_virtual_draw(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_draw(void* self, QPainter* painter);
bool QGraphicsBlurEffect_override_virtual_sourceChanged(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_sourceChanged(void* self, int flags);
bool QGraphicsBlurEffect_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsBlurEffect_virtualbase_event(void* self, QEvent* event);
bool QGraphicsBlurEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsBlurEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsBlurEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsBlurEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsBlurEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsBlurEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsBlurEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsBlurEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsBlurEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
bool QGraphicsBlurEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsBlurEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
void QGraphicsBlurEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
QPixmap* QGraphicsBlurEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
QObject* QGraphicsBlurEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsBlurEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsBlurEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsBlurEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsBlurEffect_delete(QGraphicsBlurEffect* self);

QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new();
QGraphicsDropShadowEffect* QGraphicsDropShadowEffect_new2(QObject* parent);
void QGraphicsDropShadowEffect_virtbase(QGraphicsDropShadowEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsDropShadowEffect_metaObject(const QGraphicsDropShadowEffect* self);
void* QGraphicsDropShadowEffect_metacast(QGraphicsDropShadowEffect* self, const char* param1);
struct miqt_string QGraphicsDropShadowEffect_tr(const char* s);
QRectF* QGraphicsDropShadowEffect_boundingRectFor(const QGraphicsDropShadowEffect* self, QRectF* rect);
QPointF* QGraphicsDropShadowEffect_offset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_xOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_yOffset(const QGraphicsDropShadowEffect* self);
double QGraphicsDropShadowEffect_blurRadius(const QGraphicsDropShadowEffect* self);
QColor* QGraphicsDropShadowEffect_color(const QGraphicsDropShadowEffect* self);
void QGraphicsDropShadowEffect_setOffset(QGraphicsDropShadowEffect* self, QPointF* ofs);
void QGraphicsDropShadowEffect_setOffset2(QGraphicsDropShadowEffect* self, double dx, double dy);
void QGraphicsDropShadowEffect_setOffsetWithQreal(QGraphicsDropShadowEffect* self, double d);
void QGraphicsDropShadowEffect_setXOffset(QGraphicsDropShadowEffect* self, double dx);
void QGraphicsDropShadowEffect_setYOffset(QGraphicsDropShadowEffect* self, double dy);
void QGraphicsDropShadowEffect_setBlurRadius(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_setColor(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_offsetChanged(QGraphicsDropShadowEffect* self, QPointF* offset);
void QGraphicsDropShadowEffect_connect_offsetChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_blurRadiusChanged(QGraphicsDropShadowEffect* self, double blurRadius);
void QGraphicsDropShadowEffect_connect_blurRadiusChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_colorChanged(QGraphicsDropShadowEffect* self, QColor* color);
void QGraphicsDropShadowEffect_connect_colorChanged(QGraphicsDropShadowEffect* self, intptr_t slot);
void QGraphicsDropShadowEffect_draw(QGraphicsDropShadowEffect* self, QPainter* painter);
struct miqt_string QGraphicsDropShadowEffect_tr2(const char* s, const char* c);
struct miqt_string QGraphicsDropShadowEffect_tr3(const char* s, const char* c, int n);

bool QGraphicsDropShadowEffect_override_virtual_boundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsDropShadowEffect_virtualbase_boundingRectFor(const void* self, QRectF* rect);
bool QGraphicsDropShadowEffect_override_virtual_draw(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_draw(void* self, QPainter* painter);
bool QGraphicsDropShadowEffect_override_virtual_sourceChanged(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_sourceChanged(void* self, int flags);
bool QGraphicsDropShadowEffect_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsDropShadowEffect_virtualbase_event(void* self, QEvent* event);
bool QGraphicsDropShadowEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsDropShadowEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsDropShadowEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsDropShadowEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsDropShadowEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsDropShadowEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsDropShadowEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsDropShadowEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsDropShadowEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
bool QGraphicsDropShadowEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsDropShadowEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
void QGraphicsDropShadowEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
QPixmap* QGraphicsDropShadowEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
QObject* QGraphicsDropShadowEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsDropShadowEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsDropShadowEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsDropShadowEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsDropShadowEffect_delete(QGraphicsDropShadowEffect* self);

QGraphicsOpacityEffect* QGraphicsOpacityEffect_new();
QGraphicsOpacityEffect* QGraphicsOpacityEffect_new2(QObject* parent);
void QGraphicsOpacityEffect_virtbase(QGraphicsOpacityEffect* src, QGraphicsEffect** outptr_QGraphicsEffect);
QMetaObject* QGraphicsOpacityEffect_metaObject(const QGraphicsOpacityEffect* self);
void* QGraphicsOpacityEffect_metacast(QGraphicsOpacityEffect* self, const char* param1);
struct miqt_string QGraphicsOpacityEffect_tr(const char* s);
double QGraphicsOpacityEffect_opacity(const QGraphicsOpacityEffect* self);
QBrush* QGraphicsOpacityEffect_opacityMask(const QGraphicsOpacityEffect* self);
void QGraphicsOpacityEffect_setOpacity(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_setOpacityMask(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_opacityChanged(QGraphicsOpacityEffect* self, double opacity);
void QGraphicsOpacityEffect_connect_opacityChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_opacityMaskChanged(QGraphicsOpacityEffect* self, QBrush* mask);
void QGraphicsOpacityEffect_connect_opacityMaskChanged(QGraphicsOpacityEffect* self, intptr_t slot);
void QGraphicsOpacityEffect_draw(QGraphicsOpacityEffect* self, QPainter* painter);
struct miqt_string QGraphicsOpacityEffect_tr2(const char* s, const char* c);
struct miqt_string QGraphicsOpacityEffect_tr3(const char* s, const char* c, int n);

bool QGraphicsOpacityEffect_override_virtual_draw(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_draw(void* self, QPainter* painter);
bool QGraphicsOpacityEffect_override_virtual_boundingRectFor(void* self, intptr_t slot);
QRectF* QGraphicsOpacityEffect_virtualbase_boundingRectFor(const void* self, QRectF* sourceRect);
bool QGraphicsOpacityEffect_override_virtual_sourceChanged(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_sourceChanged(void* self, int flags);
bool QGraphicsOpacityEffect_override_virtual_event(void* self, intptr_t slot);
bool QGraphicsOpacityEffect_virtualbase_event(void* self, QEvent* event);
bool QGraphicsOpacityEffect_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGraphicsOpacityEffect_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGraphicsOpacityEffect_override_virtual_timerEvent(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGraphicsOpacityEffect_override_virtual_childEvent(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGraphicsOpacityEffect_override_virtual_customEvent(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_customEvent(void* self, QEvent* event);
bool QGraphicsOpacityEffect_override_virtual_connectNotify(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGraphicsOpacityEffect_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGraphicsOpacityEffect_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QGraphicsOpacityEffect_protectedbase_updateBoundingRect(bool* _dynamic_cast_ok, void* self);
bool QGraphicsOpacityEffect_protectedbase_sourceIsPixmap(bool* _dynamic_cast_ok, const void* self);
QRectF* QGraphicsOpacityEffect_protectedbase_sourceBoundingRect(bool* _dynamic_cast_ok, const void* self);
void QGraphicsOpacityEffect_protectedbase_drawSource(bool* _dynamic_cast_ok, void* self, QPainter* painter);
QPixmap* QGraphicsOpacityEffect_protectedbase_sourcePixmap(bool* _dynamic_cast_ok, const void* self);
QObject* QGraphicsOpacityEffect_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGraphicsOpacityEffect_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGraphicsOpacityEffect_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGraphicsOpacityEffect_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGraphicsOpacityEffect_delete(QGraphicsOpacityEffect* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
