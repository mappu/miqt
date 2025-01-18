#pragma once
#ifndef MIQT_QT6_WEBCHANNEL_GEN_QWEBCHANNEL_H
#define MIQT_QT6_WEBCHANNEL_GEN_QWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QWebChannel;
class QWebChannelAbstractTransport;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebChannel QWebChannel;
typedef struct QWebChannelAbstractTransport QWebChannelAbstractTransport;
#endif

QWebChannel* QWebChannel_new();
QWebChannel* QWebChannel_new2(QObject* parent);
void QWebChannel_virtbase(QWebChannel* src, QObject** outptr_QObject);
QMetaObject* QWebChannel_MetaObject(const QWebChannel* self);
void* QWebChannel_Metacast(QWebChannel* self, const char* param1);
struct miqt_string QWebChannel_Tr(const char* s);
void QWebChannel_RegisterObjects(QWebChannel* self, struct miqt_map /* of struct miqt_string to QObject* */  objects);
struct miqt_map /* of struct miqt_string to QObject* */  QWebChannel_RegisteredObjects(const QWebChannel* self);
void QWebChannel_RegisterObject(QWebChannel* self, struct miqt_string id, QObject* object);
void QWebChannel_DeregisterObject(QWebChannel* self, QObject* object);
bool QWebChannel_BlockUpdates(const QWebChannel* self);
void QWebChannel_SetBlockUpdates(QWebChannel* self, bool block);
int QWebChannel_PropertyUpdateInterval(const QWebChannel* self);
void QWebChannel_SetPropertyUpdateInterval(QWebChannel* self, int ms);
void QWebChannel_BlockUpdatesChanged(QWebChannel* self, bool block);
void QWebChannel_connect_BlockUpdatesChanged(QWebChannel* self, intptr_t slot);
void QWebChannel_ConnectTo(QWebChannel* self, QWebChannelAbstractTransport* transport);
void QWebChannel_DisconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport);
struct miqt_string QWebChannel_Tr2(const char* s, const char* c);
struct miqt_string QWebChannel_Tr3(const char* s, const char* c, int n);
bool QWebChannel_override_virtual_Event(void* self, intptr_t slot);
bool QWebChannel_virtualbase_Event(void* self, QEvent* event);
bool QWebChannel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebChannel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QWebChannel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QWebChannel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QWebChannel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QWebChannel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebChannel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QWebChannel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebChannel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebChannel_Delete(QWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
