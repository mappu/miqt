#pragma once
#ifndef MIQT_QT6_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H
#define MIQT_QT6_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H

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
class QQmlWebChannel;
class QTimerEvent;
class QVariant;
class QWebChannel;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlWebChannel QQmlWebChannel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWebChannel QWebChannel;
#endif

QQmlWebChannel* QQmlWebChannel_new();
QQmlWebChannel* QQmlWebChannel_new2(QObject* parent);
void QQmlWebChannel_virtbase(QQmlWebChannel* src, QWebChannel** outptr_QWebChannel);
QMetaObject* QQmlWebChannel_metaObject(const QQmlWebChannel* self);
void* QQmlWebChannel_metacast(QQmlWebChannel* self, const char* param1);
struct miqt_string QQmlWebChannel_tr(const char* s);
void QQmlWebChannel_registerObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects);
void QQmlWebChannel_connectTo(QQmlWebChannel* self, QObject* transport);
void QQmlWebChannel_disconnectFrom(QQmlWebChannel* self, QObject* transport);
struct miqt_string QQmlWebChannel_tr2(const char* s, const char* c);
struct miqt_string QQmlWebChannel_tr3(const char* s, const char* c, int n);
bool QQmlWebChannel_override_virtual_event(void* self, intptr_t slot);
bool QQmlWebChannel_virtualbase_event(void* self, QEvent* event);
bool QQmlWebChannel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlWebChannel_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlWebChannel_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlWebChannel_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlWebChannel_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlWebChannel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QQmlWebChannel_delete(QQmlWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
