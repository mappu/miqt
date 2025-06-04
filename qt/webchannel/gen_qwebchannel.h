#pragma once
#ifndef MIQT_QT_WEBCHANNEL_GEN_QWEBCHANNEL_H
#define MIQT_QT_WEBCHANNEL_GEN_QWEBCHANNEL_H

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
QMetaObject* QWebChannel_metaObject(const QWebChannel* self);
void* QWebChannel_metacast(QWebChannel* self, const char* param1);
struct miqt_string QWebChannel_tr(const char* s);
struct miqt_string QWebChannel_trUtf8(const char* s);
void QWebChannel_registerObjects(QWebChannel* self, struct miqt_map /* of struct miqt_string to QObject* */  objects);
struct miqt_map /* of struct miqt_string to QObject* */  QWebChannel_registeredObjects(const QWebChannel* self);
void QWebChannel_registerObject(QWebChannel* self, struct miqt_string id, QObject* object);
void QWebChannel_deregisterObject(QWebChannel* self, QObject* object);
bool QWebChannel_blockUpdates(const QWebChannel* self);
void QWebChannel_setBlockUpdates(QWebChannel* self, bool block);
void QWebChannel_blockUpdatesChanged(QWebChannel* self, bool block);
void QWebChannel_connect_blockUpdatesChanged(QWebChannel* self, intptr_t slot);
void QWebChannel_connectTo(QWebChannel* self, QWebChannelAbstractTransport* transport);
void QWebChannel_disconnectFrom(QWebChannel* self, QWebChannelAbstractTransport* transport);
struct miqt_string QWebChannel_tr2(const char* s, const char* c);
struct miqt_string QWebChannel_tr3(const char* s, const char* c, int n);
struct miqt_string QWebChannel_trUtf82(const char* s, const char* c);
struct miqt_string QWebChannel_trUtf83(const char* s, const char* c, int n);

bool QWebChannel_override_virtual_event(void* self, intptr_t slot);
bool QWebChannel_virtualbase_event(void* self, QEvent* event);
bool QWebChannel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebChannel_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebChannel_override_virtual_childEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebChannel_override_virtual_customEvent(void* self, intptr_t slot);
void QWebChannel_virtualbase_customEvent(void* self, QEvent* event);
bool QWebChannel_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebChannel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebChannel_delete(QWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
