#pragma once
#ifndef MIQT_QT6_GEN_QFILESYSTEMWATCHER_H
#define MIQT_QT6_GEN_QFILESYSTEMWATCHER_H

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
class QFileSystemWatcher;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFileSystemWatcher QFileSystemWatcher;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QFileSystemWatcher* QFileSystemWatcher_new();
QFileSystemWatcher* QFileSystemWatcher_new2(struct miqt_array /* of struct miqt_string */  paths);
QFileSystemWatcher* QFileSystemWatcher_new3(QObject* parent);
QFileSystemWatcher* QFileSystemWatcher_new4(struct miqt_array /* of struct miqt_string */  paths, QObject* parent);
void QFileSystemWatcher_virtbase(QFileSystemWatcher* src, QObject** outptr_QObject);
QMetaObject* QFileSystemWatcher_MetaObject(const QFileSystemWatcher* self);
void* QFileSystemWatcher_Metacast(QFileSystemWatcher* self, const char* param1);
struct miqt_string QFileSystemWatcher_Tr(const char* s);
bool QFileSystemWatcher_AddPath(QFileSystemWatcher* self, struct miqt_string file);
struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_AddPaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */  files);
bool QFileSystemWatcher_RemovePath(QFileSystemWatcher* self, struct miqt_string file);
struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_RemovePaths(QFileSystemWatcher* self, struct miqt_array /* of struct miqt_string */  files);
struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_Files(const QFileSystemWatcher* self);
struct miqt_array /* of struct miqt_string */  QFileSystemWatcher_Directories(const QFileSystemWatcher* self);
struct miqt_string QFileSystemWatcher_Tr2(const char* s, const char* c);
struct miqt_string QFileSystemWatcher_Tr3(const char* s, const char* c, int n);
void QFileSystemWatcher_override_virtual_Event(void* self, intptr_t slot);
bool QFileSystemWatcher_virtualbase_Event(void* self, QEvent* event);
void QFileSystemWatcher_override_virtual_EventFilter(void* self, intptr_t slot);
bool QFileSystemWatcher_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QFileSystemWatcher_override_virtual_TimerEvent(void* self, intptr_t slot);
void QFileSystemWatcher_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QFileSystemWatcher_override_virtual_ChildEvent(void* self, intptr_t slot);
void QFileSystemWatcher_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QFileSystemWatcher_override_virtual_CustomEvent(void* self, intptr_t slot);
void QFileSystemWatcher_virtualbase_CustomEvent(void* self, QEvent* event);
void QFileSystemWatcher_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QFileSystemWatcher_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QFileSystemWatcher_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QFileSystemWatcher_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QFileSystemWatcher_Delete(QFileSystemWatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
