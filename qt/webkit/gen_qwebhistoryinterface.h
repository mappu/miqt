#pragma once
#ifndef MIQT_QT_WEBKIT_GEN_QWEBHISTORYINTERFACE_H
#define MIQT_QT_WEBKIT_GEN_QWEBHISTORYINTERFACE_H

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
class QWebHistoryInterface;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWebHistoryInterface QWebHistoryInterface;
#endif

QWebHistoryInterface* QWebHistoryInterface_new();
QWebHistoryInterface* QWebHistoryInterface_new2(QObject* parent);
void QWebHistoryInterface_virtbase(QWebHistoryInterface* src, QObject** outptr_QObject);
QMetaObject* QWebHistoryInterface_MetaObject(const QWebHistoryInterface* self);
void* QWebHistoryInterface_Metacast(QWebHistoryInterface* self, const char* param1);
struct miqt_string QWebHistoryInterface_Tr(const char* s);
struct miqt_string QWebHistoryInterface_TrUtf8(const char* s);
void QWebHistoryInterface_SetDefaultInterface(QWebHistoryInterface* defaultInterface);
QWebHistoryInterface* QWebHistoryInterface_DefaultInterface();
bool QWebHistoryInterface_HistoryContains(const QWebHistoryInterface* self, struct miqt_string url);
void QWebHistoryInterface_AddHistoryEntry(QWebHistoryInterface* self, struct miqt_string url);
struct miqt_string QWebHistoryInterface_Tr2(const char* s, const char* c);
struct miqt_string QWebHistoryInterface_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebHistoryInterface_TrUtf82(const char* s, const char* c);
struct miqt_string QWebHistoryInterface_TrUtf83(const char* s, const char* c, int n);
bool QWebHistoryInterface_override_virtual_HistoryContains(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_HistoryContains(const void* self, struct miqt_string url);
bool QWebHistoryInterface_override_virtual_AddHistoryEntry(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_AddHistoryEntry(void* self, struct miqt_string url);
bool QWebHistoryInterface_override_virtual_Event(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_Event(void* self, QEvent* event);
bool QWebHistoryInterface_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QWebHistoryInterface_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QWebHistoryInterface_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QWebHistoryInterface_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_CustomEvent(void* self, QEvent* event);
bool QWebHistoryInterface_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QWebHistoryInterface_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWebHistoryInterface_Delete(QWebHistoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
