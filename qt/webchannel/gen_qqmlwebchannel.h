#pragma once
#ifndef MIQT_QT_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H
#define MIQT_QT_WEBCHANNEL_GEN_QQMLWEBCHANNEL_H

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
QMetaObject* QQmlWebChannel_MetaObject(const QQmlWebChannel* self);
void* QQmlWebChannel_Metacast(QQmlWebChannel* self, const char* param1);
struct miqt_string QQmlWebChannel_Tr(const char* s);
struct miqt_string QQmlWebChannel_TrUtf8(const char* s);
void QQmlWebChannel_RegisterObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects);
void QQmlWebChannel_ConnectTo(QQmlWebChannel* self, QObject* transport);
void QQmlWebChannel_DisconnectFrom(QQmlWebChannel* self, QObject* transport);
struct miqt_string QQmlWebChannel_Tr2(const char* s, const char* c);
struct miqt_string QQmlWebChannel_Tr3(const char* s, const char* c, int n);
struct miqt_string QQmlWebChannel_TrUtf82(const char* s, const char* c);
struct miqt_string QQmlWebChannel_TrUtf83(const char* s, const char* c, int n);
bool QQmlWebChannel_override_virtual_Event(void* self, intptr_t slot);
bool QQmlWebChannel_virtualbase_Event(void* self, QEvent* event);
bool QQmlWebChannel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QQmlWebChannel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlWebChannel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QQmlWebChannel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QQmlWebChannel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QQmlWebChannel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QQmlWebChannel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QQmlWebChannel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QQmlWebChannel_Delete(QQmlWebChannel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
