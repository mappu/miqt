#pragma once
#ifndef MIQT_QT6_GEN_QSHAREDMEMORY_H
#define MIQT_QT6_GEN_QSHAREDMEMORY_H

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
class QSharedMemory;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QSharedMemory QSharedMemory;
typedef struct QTimerEvent QTimerEvent;
#endif

QSharedMemory* QSharedMemory_new();
QSharedMemory* QSharedMemory_new2(struct miqt_string key);
QSharedMemory* QSharedMemory_new3(QObject* parent);
QSharedMemory* QSharedMemory_new4(struct miqt_string key, QObject* parent);
void QSharedMemory_virtbase(QSharedMemory* src, QObject** outptr_QObject);
QMetaObject* QSharedMemory_MetaObject(const QSharedMemory* self);
void* QSharedMemory_Metacast(QSharedMemory* self, const char* param1);
struct miqt_string QSharedMemory_Tr(const char* s);
void QSharedMemory_SetKey(QSharedMemory* self, struct miqt_string key);
struct miqt_string QSharedMemory_Key(const QSharedMemory* self);
void QSharedMemory_SetNativeKey(QSharedMemory* self, struct miqt_string key);
struct miqt_string QSharedMemory_NativeKey(const QSharedMemory* self);
bool QSharedMemory_Create(QSharedMemory* self, ptrdiff_t size);
ptrdiff_t QSharedMemory_Size(const QSharedMemory* self);
bool QSharedMemory_Attach(QSharedMemory* self);
bool QSharedMemory_IsAttached(const QSharedMemory* self);
bool QSharedMemory_Detach(QSharedMemory* self);
void* QSharedMemory_Data(QSharedMemory* self);
const void* QSharedMemory_ConstData(const QSharedMemory* self);
const void* QSharedMemory_Data2(const QSharedMemory* self);
bool QSharedMemory_Lock(QSharedMemory* self);
bool QSharedMemory_Unlock(QSharedMemory* self);
int QSharedMemory_Error(const QSharedMemory* self);
struct miqt_string QSharedMemory_ErrorString(const QSharedMemory* self);
struct miqt_string QSharedMemory_Tr2(const char* s, const char* c);
struct miqt_string QSharedMemory_Tr3(const char* s, const char* c, int n);
bool QSharedMemory_Create2(QSharedMemory* self, ptrdiff_t size, int mode);
bool QSharedMemory_Attach1(QSharedMemory* self, int mode);
void QSharedMemory_override_virtual_Event(void* self, intptr_t slot);
bool QSharedMemory_virtualbase_Event(void* self, QEvent* event);
void QSharedMemory_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSharedMemory_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSharedMemory_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSharedMemory_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSharedMemory_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSharedMemory_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSharedMemory_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSharedMemory_virtualbase_CustomEvent(void* self, QEvent* event);
void QSharedMemory_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSharedMemory_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSharedMemory_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSharedMemory_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSharedMemory_Delete(QSharedMemory* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
