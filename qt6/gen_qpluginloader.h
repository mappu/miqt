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
QMetaObject* QPluginLoader_MetaObject(const QPluginLoader* self);
void* QPluginLoader_Metacast(QPluginLoader* self, const char* param1);
struct miqt_string QPluginLoader_Tr(const char* s);
QObject* QPluginLoader_Instance(QPluginLoader* self);
QJsonObject* QPluginLoader_MetaData(const QPluginLoader* self);
struct miqt_array /* of QObject* */  QPluginLoader_StaticInstances();
struct miqt_array /* of QStaticPlugin* */  QPluginLoader_StaticPlugins();
bool QPluginLoader_Load(QPluginLoader* self);
bool QPluginLoader_Unload(QPluginLoader* self);
bool QPluginLoader_IsLoaded(const QPluginLoader* self);
void QPluginLoader_SetFileName(QPluginLoader* self, struct miqt_string fileName);
struct miqt_string QPluginLoader_FileName(const QPluginLoader* self);
struct miqt_string QPluginLoader_ErrorString(const QPluginLoader* self);
void QPluginLoader_SetLoadHints(QPluginLoader* self, int loadHints);
int QPluginLoader_LoadHints(const QPluginLoader* self);
struct miqt_string QPluginLoader_Tr2(const char* s, const char* c);
struct miqt_string QPluginLoader_Tr3(const char* s, const char* c, int n);
void QPluginLoader_override_virtual_Event(void* self, intptr_t slot);
bool QPluginLoader_virtualbase_Event(void* self, QEvent* event);
void QPluginLoader_override_virtual_EventFilter(void* self, intptr_t slot);
bool QPluginLoader_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QPluginLoader_override_virtual_TimerEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QPluginLoader_override_virtual_ChildEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QPluginLoader_override_virtual_CustomEvent(void* self, intptr_t slot);
void QPluginLoader_virtualbase_CustomEvent(void* self, QEvent* event);
void QPluginLoader_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QPluginLoader_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QPluginLoader_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QPluginLoader_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QPluginLoader_Delete(QPluginLoader* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
