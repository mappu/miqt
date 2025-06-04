#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLCOMPONENT_H
#define MIQT_QT6_QML_GEN_QQMLCOMPONENT_H

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
class QQmlComponent;
class QQmlContext;
class QQmlEngine;
class QQmlError;
class QQmlIncubator;
class QTimerEvent;
class QUrl;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlComponent QQmlComponent;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlIncubator QQmlIncubator;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
#endif

QQmlComponent* QQmlComponent_new();
QQmlComponent* QQmlComponent_new2(QQmlEngine* param1);
QQmlComponent* QQmlComponent_new3(QQmlEngine* param1, struct miqt_string fileName);
QQmlComponent* QQmlComponent_new4(QQmlEngine* param1, struct miqt_string fileName, int mode);
QQmlComponent* QQmlComponent_new5(QQmlEngine* param1, QUrl* url);
QQmlComponent* QQmlComponent_new6(QQmlEngine* param1, QUrl* url, int mode);
QQmlComponent* QQmlComponent_new7(QObject* parent);
QQmlComponent* QQmlComponent_new8(QQmlEngine* param1, QObject* parent);
QQmlComponent* QQmlComponent_new9(QQmlEngine* param1, struct miqt_string fileName, QObject* parent);
QQmlComponent* QQmlComponent_new10(QQmlEngine* param1, struct miqt_string fileName, int mode, QObject* parent);
QQmlComponent* QQmlComponent_new11(QQmlEngine* param1, QUrl* url, QObject* parent);
QQmlComponent* QQmlComponent_new12(QQmlEngine* param1, QUrl* url, int mode, QObject* parent);
void QQmlComponent_virtbase(QQmlComponent* src, QObject** outptr_QObject);
QMetaObject* QQmlComponent_metaObject(const QQmlComponent* self);
void* QQmlComponent_metacast(QQmlComponent* self, const char* param1);
struct miqt_string QQmlComponent_tr(const char* s);
int QQmlComponent_status(const QQmlComponent* self);
bool QQmlComponent_isNull(const QQmlComponent* self);
bool QQmlComponent_isReady(const QQmlComponent* self);
bool QQmlComponent_isError(const QQmlComponent* self);
bool QQmlComponent_isLoading(const QQmlComponent* self);
bool QQmlComponent_isBound(const QQmlComponent* self);
struct miqt_array /* of QQmlError* */  QQmlComponent_errors(const QQmlComponent* self);
struct miqt_string QQmlComponent_errorString(const QQmlComponent* self);
double QQmlComponent_progress(const QQmlComponent* self);
QUrl* QQmlComponent_url(const QQmlComponent* self);
QObject* QQmlComponent_create(QQmlComponent* self, QQmlContext* context);
QObject* QQmlComponent_createWithInitialProperties(QQmlComponent* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties);
void QQmlComponent_setInitialProperties(QQmlComponent* self, QObject* component, struct miqt_map /* of struct miqt_string to QVariant* */  properties);
QObject* QQmlComponent_beginCreate(QQmlComponent* self, QQmlContext* param1);
void QQmlComponent_completeCreate(QQmlComponent* self);
void QQmlComponent_createWithQQmlIncubator(QQmlComponent* self, QQmlIncubator* param1);
QQmlContext* QQmlComponent_creationContext(const QQmlComponent* self);
QQmlEngine* QQmlComponent_engine(const QQmlComponent* self);
void QQmlComponent_loadUrl(QQmlComponent* self, QUrl* url);
void QQmlComponent_loadUrl2(QQmlComponent* self, QUrl* url, int mode);
void QQmlComponent_setData(QQmlComponent* self, struct miqt_string param1, QUrl* baseUrl);
void QQmlComponent_statusChanged(QQmlComponent* self, int param1);
void QQmlComponent_connect_statusChanged(QQmlComponent* self, intptr_t slot);
void QQmlComponent_progressChanged(QQmlComponent* self, double param1);
void QQmlComponent_connect_progressChanged(QQmlComponent* self, intptr_t slot);
struct miqt_string QQmlComponent_tr2(const char* s, const char* c);
struct miqt_string QQmlComponent_tr3(const char* s, const char* c, int n);
QObject* QQmlComponent_createWithInitialProperties2(QQmlComponent* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialProperties, QQmlContext* context);
void QQmlComponent_create2(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context);
void QQmlComponent_create3(QQmlComponent* self, QQmlIncubator* param1, QQmlContext* context, QQmlContext* forContext);

bool QQmlComponent_override_virtual_create(void* self, intptr_t slot);
QObject* QQmlComponent_virtualbase_create(void* self, QQmlContext* context);
bool QQmlComponent_override_virtual_beginCreate(void* self, intptr_t slot);
QObject* QQmlComponent_virtualbase_beginCreate(void* self, QQmlContext* param1);
bool QQmlComponent_override_virtual_completeCreate(void* self, intptr_t slot);
void QQmlComponent_virtualbase_completeCreate(void* self);
bool QQmlComponent_override_virtual_event(void* self, intptr_t slot);
bool QQmlComponent_virtualbase_event(void* self, QEvent* event);
bool QQmlComponent_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlComponent_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlComponent_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlComponent_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlComponent_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlComponent_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlComponent_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlComponent_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlComponent_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlComponent_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlComponent_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlComponent_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QQmlComponent_protectedbase_createObject2(bool* _dynamic_cast_ok, void* self);
QObject* QQmlComponent_protectedbase_createObjectWithParent(bool* _dynamic_cast_ok, void* self, QObject* parent);
QObject* QQmlComponent_protectedbase_createObject3(bool* _dynamic_cast_ok, void* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  properties);
QObject* QQmlComponent_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlComponent_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlComponent_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlComponent_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QQmlComponent_delete(QQmlComponent* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
