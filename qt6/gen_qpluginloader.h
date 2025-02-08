#pragma once
#ifndef MIQT_QT6_GEN_QPLUGINLOADER_H
#define MIQT_QT6_GEN_QPLUGINLOADER_H

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
class QJsonObject;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPluginLoader;
class QStaticPlugin;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJsonObject QJsonObject;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPluginLoader QPluginLoader;
typedef struct QStaticPlugin QStaticPlugin;
typedef struct QTimerEvent QTimerEvent;
#endif

QPluginLoader* QPluginLoader_new();
QPluginLoader* QPluginLoader_new2(struct miqt_string fileName);
QPluginLoader* QPluginLoader_new3(QObject* parent);
QPluginLoader* QPluginLoader_new4(struct miqt_string fileName, QObject* parent);
void QPluginLoader_virtbase(QPluginLoader* src, QObject** outptr_QObject);
QMetaObject* QPluginLoader_metaObject(const QPluginLoader* self);
void* QPluginLoader_metacast(QPluginLoader* self, const char* param1);
struct miqt_string QPluginLoader_tr(const char* s);
QObject* QPluginLoader_instance(QPluginLoader* self);
QJsonObject* QPluginLoader_metaData(const QPluginLoader* self);
struct miqt_array /* of QObject* */  QPluginLoader_staticInstances();
struct miqt_array /* of QStaticPlugin* */  QPluginLoader_staticPlugins();
bool QPluginLoader_load(QPluginLoader* self);
bool QPluginLoader_unload(QPluginLoader* self);
bool QPluginLoader_isLoaded(const QPluginLoader* self);
void QPluginLoader_setFileName(QPluginLoader* self, struct miqt_string fileName);
struct miqt_string QPluginLoader_fileName(const QPluginLoader* self);
struct miqt_string QPluginLoader_errorString(const QPluginLoader* self);
void QPluginLoader_setLoadHints(QPluginLoader* self, int loadHints);
int QPluginLoader_loadHints(const QPluginLoader* self);
struct miqt_string QPluginLoader_tr2(const char* s, const char* c);
struct miqt_string QPluginLoader_tr3(const char* s, const char* c, int n);
bool QPluginLoader_override_virtual_event(void* self, intptr_t slot);
bool QPluginLoader_virtualbase_event(void* self, QEvent* event);
bool QPluginLoader_override_virtual_eventFilter(void* self, intptr_t slot);
bool QPluginLoader_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QPluginLoader_override_virtual_timerEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QPluginLoader_override_virtual_childEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_childEvent(void* self, QChildEvent* event);
bool QPluginLoader_override_virtual_customEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_customEvent(void* self, QEvent* event);
bool QPluginLoader_override_virtual_connectNotify(void* self, intptr_t slot);
void QPluginLoader_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QPluginLoader_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QPluginLoader_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QPluginLoader_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QPluginLoader_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QPluginLoader_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QPluginLoader_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QPluginLoader_delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
