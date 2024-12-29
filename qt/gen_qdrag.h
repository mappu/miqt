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
QMetaObject* QDrag_MetaObject(const QDrag* self);
void* QDrag_Metacast(QDrag* self, const char* param1);
struct miqt_string QDrag_Tr(const char* s);
struct miqt_string QDrag_TrUtf8(const char* s);
void QDrag_SetMimeData(QDrag* self, QMimeData* data);
QMimeData* QDrag_MimeData(const QDrag* self);
void QDrag_SetPixmap(QDrag* self, QPixmap* pixmap);
QPixmap* QDrag_Pixmap(const QDrag* self);
void QDrag_SetHotSpot(QDrag* self, QPoint* hotspot);
QPoint* QDrag_HotSpot(const QDrag* self);
QObject* QDrag_Source(const QDrag* self);
QObject* QDrag_Target(const QDrag* self);
int QDrag_Start(QDrag* self);
int QDrag_Exec(QDrag* self);
int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction);
void QDrag_SetDragCursor(QDrag* self, QPixmap* cursor, int action);
QPixmap* QDrag_DragCursor(const QDrag* self, int action);
int QDrag_SupportedActions(const QDrag* self);
int QDrag_DefaultAction(const QDrag* self);
void QDrag_Cancel();
void QDrag_ActionChanged(QDrag* self, int action);
void QDrag_connect_ActionChanged(QDrag* self, intptr_t slot);
void QDrag_TargetChanged(QDrag* self, QObject* newTarget);
void QDrag_connect_TargetChanged(QDrag* self, intptr_t slot);
struct miqt_string QDrag_Tr2(const char* s, const char* c);
struct miqt_string QDrag_Tr3(const char* s, const char* c, int n);
struct miqt_string QDrag_TrUtf82(const char* s, const char* c);
struct miqt_string QDrag_TrUtf83(const char* s, const char* c, int n);
int QDrag_Start1(QDrag* self, int supportedActions);
int QDrag_Exec1(QDrag* self, int supportedActions);
void QDrag_override_virtual_Event(void* self, intptr_t slot);
bool QDrag_virtualbase_Event(void* self, QEvent* event);
void QDrag_override_virtual_EventFilter(void* self, intptr_t slot);
bool QDrag_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QDrag_override_virtual_TimerEvent(void* self, intptr_t slot);
void QDrag_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QDrag_override_virtual_ChildEvent(void* self, intptr_t slot);
void QDrag_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QDrag_override_virtual_CustomEvent(void* self, intptr_t slot);
void QDrag_virtualbase_CustomEvent(void* self, QEvent* event);
void QDrag_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QDrag_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QDrag_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QDrag_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QDrag_Delete(QDrag* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
