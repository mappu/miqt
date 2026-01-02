#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_DEFAULT_EXTENSIONFACTORY_H
#define MIQT_QT_DESIGNER_GEN_DEFAULT_EXTENSIONFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractExtensionFactory;
class QChildEvent;
class QEvent;
class QExtensionFactory;
class QExtensionManager;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAbstractExtensionFactory QAbstractExtensionFactory;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QExtensionFactory QExtensionFactory;
typedef struct QExtensionManager QExtensionManager;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QExtensionFactory* QExtensionFactory_new();
QExtensionFactory* QExtensionFactory_new2(QExtensionManager* parent);
void QExtensionFactory_virtbase(QExtensionFactory* src, QObject** outptr_QObject, QAbstractExtensionFactory** outptr_QAbstractExtensionFactory);
QMetaObject* QExtensionFactory_metaObject(const QExtensionFactory* self);
void* QExtensionFactory_metacast(QExtensionFactory* self, const char* param1);
struct miqt_string QExtensionFactory_tr(const char* s);
struct miqt_string QExtensionFactory_trUtf8(const char* s);
QObject* QExtensionFactory_extension(const QExtensionFactory* self, QObject* object, struct miqt_string iid);
QExtensionManager* QExtensionFactory_extensionManager(const QExtensionFactory* self);
QObject* QExtensionFactory_createExtension(const QExtensionFactory* self, QObject* object, struct miqt_string iid, QObject* parent);
struct miqt_string QExtensionFactory_tr2(const char* s, const char* c);
struct miqt_string QExtensionFactory_tr3(const char* s, const char* c, int n);
struct miqt_string QExtensionFactory_trUtf82(const char* s, const char* c);
struct miqt_string QExtensionFactory_trUtf83(const char* s, const char* c, int n);

bool QExtensionFactory_override_virtual_extension(void* self, intptr_t slot);
QObject* QExtensionFactory_virtualbase_extension(const void* self, QObject* object, struct miqt_string iid);
bool QExtensionFactory_override_virtual_createExtension(void* self, intptr_t slot);
QObject* QExtensionFactory_virtualbase_createExtension(const void* self, QObject* object, struct miqt_string iid, QObject* parent);
bool QExtensionFactory_override_virtual_event(void* self, intptr_t slot);
bool QExtensionFactory_virtualbase_event(void* self, QEvent* event);
bool QExtensionFactory_override_virtual_eventFilter(void* self, intptr_t slot);
bool QExtensionFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QExtensionFactory_override_virtual_timerEvent(void* self, intptr_t slot);
void QExtensionFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QExtensionFactory_override_virtual_childEvent(void* self, intptr_t slot);
void QExtensionFactory_virtualbase_childEvent(void* self, QChildEvent* event);
bool QExtensionFactory_override_virtual_customEvent(void* self, intptr_t slot);
void QExtensionFactory_virtualbase_customEvent(void* self, QEvent* event);
bool QExtensionFactory_override_virtual_connectNotify(void* self, intptr_t slot);
void QExtensionFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QExtensionFactory_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QExtensionFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QExtensionFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QExtensionFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QExtensionFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QExtensionFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QExtensionFactory_delete(QExtensionFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
