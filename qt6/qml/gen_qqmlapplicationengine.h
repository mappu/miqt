#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLAPPLICATIONENGINE_H
#define MIQT_QT6_QML_GEN_QQMLAPPLICATIONENGINE_H

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
class QJSEngine;
class QMetaMethod;
class QMetaObject;
class QObject;
class QQmlApplicationEngine;
class QQmlEngine;
class QTimerEvent;
class QUrl;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSEngine QJSEngine;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlApplicationEngine QQmlApplicationEngine;
typedef struct QQmlEngine QQmlEngine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlApplicationEngine* QQmlApplicationEngine_new();
QQmlApplicationEngine* QQmlApplicationEngine_new2(QUrl* url);
QQmlApplicationEngine* QQmlApplicationEngine_new3(struct miqt_string filePath);
QQmlApplicationEngine* QQmlApplicationEngine_new4(QObject* parent);
QQmlApplicationEngine* QQmlApplicationEngine_new5(QUrl* url, QObject* parent);
QQmlApplicationEngine* QQmlApplicationEngine_new6(struct miqt_string filePath, QObject* parent);
void QQmlApplicationEngine_virtbase(QQmlApplicationEngine* src, QQmlEngine** outptr_QQmlEngine);
QMetaObject* QQmlApplicationEngine_metaObject(const QQmlApplicationEngine* self);
void* QQmlApplicationEngine_metacast(QQmlApplicationEngine* self, const char* param1);
struct miqt_string QQmlApplicationEngine_tr(const char* s);
struct miqt_array /* of QObject* */  QQmlApplicationEngine_rootObjects(const QQmlApplicationEngine* self);
void QQmlApplicationEngine_load(QQmlApplicationEngine* self, QUrl* url);
void QQmlApplicationEngine_loadWithFilePath(QQmlApplicationEngine* self, struct miqt_string filePath);
void QQmlApplicationEngine_setInitialProperties(QQmlApplicationEngine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties);
void QQmlApplicationEngine_setExtraFileSelectors(QQmlApplicationEngine* self, struct miqt_array /* of struct miqt_string */  extraFileSelectors);
void QQmlApplicationEngine_loadData(QQmlApplicationEngine* self, struct miqt_string data);
void QQmlApplicationEngine_objectCreated(QQmlApplicationEngine* self, QObject* object, QUrl* url);
void QQmlApplicationEngine_connect_objectCreated(QQmlApplicationEngine* self, intptr_t slot);
void QQmlApplicationEngine_objectCreationFailed(QQmlApplicationEngine* self, QUrl* url);
void QQmlApplicationEngine_connect_objectCreationFailed(QQmlApplicationEngine* self, intptr_t slot);
struct miqt_string QQmlApplicationEngine_tr2(const char* s, const char* c);
struct miqt_string QQmlApplicationEngine_tr3(const char* s, const char* c, int n);
void QQmlApplicationEngine_loadData2(QQmlApplicationEngine* self, struct miqt_string data, QUrl* url);
bool QQmlApplicationEngine_override_virtual_event(void* self, intptr_t slot);
bool QQmlApplicationEngine_virtualbase_event(void* self, QEvent* param1);
bool QQmlApplicationEngine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlApplicationEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlApplicationEngine_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlApplicationEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlApplicationEngine_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlApplicationEngine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlApplicationEngine_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlApplicationEngine_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlApplicationEngine_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlApplicationEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlApplicationEngine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlApplicationEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlApplicationEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlApplicationEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlApplicationEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlApplicationEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlApplicationEngine_delete(QQmlApplicationEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
