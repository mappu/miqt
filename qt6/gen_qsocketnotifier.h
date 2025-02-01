#pragma once
#ifndef MIQT_QT6_GEN_QSOCKETNOTIFIER_H
#define MIQT_QT6_GEN_QSOCKETNOTIFIER_H

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
class QEvent;
class QMetaMethod;
class QMetaObject;
class QObject;
class QSocketDescriptor;
class QSocketNotifier;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSocketDescriptor QSocketDescriptor;
typedef struct QSocketNotifier QSocketNotifier;
typedef struct QTimerEvent QTimerEvent;
#endif

QSocketNotifier* QSocketNotifier_new(int param1);
QSocketNotifier* QSocketNotifier_new2(intptr_t socket, int param2);
QSocketNotifier* QSocketNotifier_new3(int param1, QObject* parent);
QSocketNotifier* QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent);
void QSocketNotifier_virtbase(QSocketNotifier* src, QObject** outptr_QObject);
QMetaObject* QSocketNotifier_metaObject(const QSocketNotifier* self);
void* QSocketNotifier_metacast(QSocketNotifier* self, const char* param1);
struct miqt_string QSocketNotifier_tr(const char* s);
void QSocketNotifier_setSocket(QSocketNotifier* self, intptr_t socket);
intptr_t QSocketNotifier_socket(const QSocketNotifier* self);
int QSocketNotifier_type(const QSocketNotifier* self);
bool QSocketNotifier_isValid(const QSocketNotifier* self);
bool QSocketNotifier_isEnabled(const QSocketNotifier* self);
void QSocketNotifier_setEnabled(QSocketNotifier* self, bool enabled);
bool QSocketNotifier_event(QSocketNotifier* self, QEvent* param1);
struct miqt_string QSocketNotifier_tr2(const char* s, const char* c);
struct miqt_string QSocketNotifier_tr3(const char* s, const char* c, int n);
bool QSocketNotifier_override_virtual_event(void* self, intptr_t slot);
bool QSocketNotifier_virtualbase_event(void* self, QEvent* param1);
bool QSocketNotifier_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSocketNotifier_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSocketNotifier_override_virtual_timerEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSocketNotifier_override_virtual_childEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSocketNotifier_override_virtual_customEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_customEvent(void* self, QEvent* event);
bool QSocketNotifier_override_virtual_connectNotify(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSocketNotifier_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QSocketNotifier_delete(QSocketNotifier* self);

QSocketDescriptor* QSocketDescriptor_new();
QSocketDescriptor* QSocketDescriptor_new2(QSocketDescriptor* param1);
QSocketDescriptor* QSocketDescriptor_new3(int descriptor);
int QSocketDescriptor_ToInt(const QSocketDescriptor* self);
bool QSocketDescriptor_isValid(const QSocketDescriptor* self);
void QSocketDescriptor_delete(QSocketDescriptor* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
