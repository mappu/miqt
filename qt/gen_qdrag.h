#pragma once
#ifndef MIQT_QT_GEN_QDRAG_H
#define MIQT_QT_GEN_QDRAG_H

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
class QDrag;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QObject;
class QPixmap;
class QPoint;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QDrag QDrag;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QTimerEvent QTimerEvent;
#endif

QDrag* QDrag_new(QObject* dragSource);
void QDrag_virtbase(QDrag* src, QObject** outptr_QObject);
QMetaObject* QDrag_metaObject(const QDrag* self);
void* QDrag_metacast(QDrag* self, const char* param1);
struct miqt_string QDrag_tr(const char* s);
struct miqt_string QDrag_trUtf8(const char* s);
void QDrag_setMimeData(QDrag* self, QMimeData* data);
QMimeData* QDrag_mimeData(const QDrag* self);
void QDrag_setPixmap(QDrag* self, QPixmap* pixmap);
QPixmap* QDrag_pixmap(const QDrag* self);
void QDrag_setHotSpot(QDrag* self, QPoint* hotspot);
QPoint* QDrag_hotSpot(const QDrag* self);
QObject* QDrag_source(const QDrag* self);
QObject* QDrag_target(const QDrag* self);
int QDrag_start(QDrag* self);
int QDrag_exec(QDrag* self);
int QDrag_exec2(QDrag* self, int supportedActions, int defaultAction);
void QDrag_setDragCursor(QDrag* self, QPixmap* cursor, int action);
QPixmap* QDrag_dragCursor(const QDrag* self, int action);
int QDrag_supportedActions(const QDrag* self);
int QDrag_defaultAction(const QDrag* self);
void QDrag_cancel();
void QDrag_actionChanged(QDrag* self, int action);
void QDrag_connect_actionChanged(QDrag* self, intptr_t slot);
void QDrag_targetChanged(QDrag* self, QObject* newTarget);
void QDrag_connect_targetChanged(QDrag* self, intptr_t slot);
struct miqt_string QDrag_tr2(const char* s, const char* c);
struct miqt_string QDrag_tr3(const char* s, const char* c, int n);
struct miqt_string QDrag_trUtf82(const char* s, const char* c);
struct miqt_string QDrag_trUtf83(const char* s, const char* c, int n);
int QDrag_start1(QDrag* self, int supportedActions);
int QDrag_exec1(QDrag* self, int supportedActions);
bool QDrag_override_virtual_event(void* self, intptr_t slot);
bool QDrag_virtualbase_event(void* self, QEvent* event);
bool QDrag_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDrag_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDrag_override_virtual_timerEvent(void* self, intptr_t slot);
void QDrag_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDrag_override_virtual_childEvent(void* self, intptr_t slot);
void QDrag_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDrag_override_virtual_customEvent(void* self, intptr_t slot);
void QDrag_virtualbase_customEvent(void* self, QEvent* event);
bool QDrag_override_virtual_connectNotify(void* self, intptr_t slot);
void QDrag_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDrag_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDrag_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QDrag_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDrag_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDrag_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDrag_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QDrag_delete(QDrag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
