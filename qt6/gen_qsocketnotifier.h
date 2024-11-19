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

void QSocketNotifier_new(int param1, QSocketNotifier** outptr_QSocketNotifier, QObject** outptr_QObject);
void QSocketNotifier_new2(intptr_t socket, int param2, QSocketNotifier** outptr_QSocketNotifier, QObject** outptr_QObject);
void QSocketNotifier_new3(int param1, QObject* parent, QSocketNotifier** outptr_QSocketNotifier, QObject** outptr_QObject);
void QSocketNotifier_new4(intptr_t socket, int param2, QObject* parent, QSocketNotifier** outptr_QSocketNotifier, QObject** outptr_QObject);
QMetaObject* QSocketNotifier_MetaObject(const QSocketNotifier* self);
void* QSocketNotifier_Metacast(QSocketNotifier* self, const char* param1);
struct miqt_string QSocketNotifier_Tr(const char* s);
void QSocketNotifier_SetSocket(QSocketNotifier* self, intptr_t socket);
intptr_t QSocketNotifier_Socket(const QSocketNotifier* self);
int QSocketNotifier_Type(const QSocketNotifier* self);
bool QSocketNotifier_IsValid(const QSocketNotifier* self);
bool QSocketNotifier_IsEnabled(const QSocketNotifier* self);
void QSocketNotifier_SetEnabled(QSocketNotifier* self, bool enabled);
bool QSocketNotifier_Event(QSocketNotifier* self, QEvent* param1);
struct miqt_string QSocketNotifier_Tr2(const char* s, const char* c);
struct miqt_string QSocketNotifier_Tr3(const char* s, const char* c, int n);
void QSocketNotifier_override_virtual_Event(void* self, intptr_t slot);
bool QSocketNotifier_virtualbase_Event(void* self, QEvent* param1);
void QSocketNotifier_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSocketNotifier_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSocketNotifier_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSocketNotifier_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSocketNotifier_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_CustomEvent(void* self, QEvent* event);
void QSocketNotifier_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSocketNotifier_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSocketNotifier_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSocketNotifier_Delete(QSocketNotifier* self, bool isSubclass);

void QSocketDescriptor_new(QSocketDescriptor** outptr_QSocketDescriptor);
void QSocketDescriptor_new2(QSocketDescriptor* param1, QSocketDescriptor** outptr_QSocketDescriptor);
void QSocketDescriptor_new3(int descriptor, QSocketDescriptor** outptr_QSocketDescriptor);
bool QSocketDescriptor_IsValid(const QSocketDescriptor* self);
void QSocketDescriptor_Delete(QSocketDescriptor* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
