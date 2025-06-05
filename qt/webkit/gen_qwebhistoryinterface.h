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
QMetaObject* QWebHistoryInterface_metaObject(const QWebHistoryInterface* self);
void* QWebHistoryInterface_metacast(QWebHistoryInterface* self, const char* param1);
struct miqt_string QWebHistoryInterface_tr(const char* s);
struct miqt_string QWebHistoryInterface_trUtf8(const char* s);
void QWebHistoryInterface_setDefaultInterface(QWebHistoryInterface* defaultInterface);
QWebHistoryInterface* QWebHistoryInterface_defaultInterface();
bool QWebHistoryInterface_historyContains(const QWebHistoryInterface* self, struct miqt_string url);
void QWebHistoryInterface_addHistoryEntry(QWebHistoryInterface* self, struct miqt_string url);
struct miqt_string QWebHistoryInterface_tr2(const char* s, const char* c);
struct miqt_string QWebHistoryInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QWebHistoryInterface_trUtf82(const char* s, const char* c);
struct miqt_string QWebHistoryInterface_trUtf83(const char* s, const char* c, int n);

bool QWebHistoryInterface_override_virtual_historyContains(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_historyContains(const void* self, struct miqt_string url);
bool QWebHistoryInterface_override_virtual_addHistoryEntry(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_addHistoryEntry(void* self, struct miqt_string url);
bool QWebHistoryInterface_override_virtual_event(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_event(void* self, QEvent* event);
bool QWebHistoryInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QWebHistoryInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QWebHistoryInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QWebHistoryInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QWebHistoryInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QWebHistoryInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QWebHistoryInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QWebHistoryInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QWebHistoryInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QWebHistoryInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QWebHistoryInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QWebHistoryInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QWebHistoryInterface_delete(QWebHistoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
