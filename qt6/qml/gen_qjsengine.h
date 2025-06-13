#pragma once
#ifndef MIQT_QT6_QML_GEN_QJSENGINE_H
#define MIQT_QT6_QML_GEN_QJSENGINE_H

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
class QJSValue;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QJSEngine QJSEngine;
typedef struct QJSValue QJSValue;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QJSEngine* QJSEngine_new();
QJSEngine* QJSEngine_new2(QObject* parent);
void QJSEngine_virtbase(QJSEngine* src, QObject** outptr_QObject);
QMetaObject* QJSEngine_metaObject(const QJSEngine* self);
void* QJSEngine_metacast(QJSEngine* self, const char* param1);
struct miqt_string QJSEngine_tr(const char* s);
QJSValue* QJSEngine_globalObject(const QJSEngine* self);
QJSValue* QJSEngine_evaluate(QJSEngine* self, struct miqt_string program);
QJSValue* QJSEngine_importModule(QJSEngine* self, struct miqt_string fileName);
bool QJSEngine_registerModule(QJSEngine* self, struct miqt_string moduleName, QJSValue* value);
QJSValue* QJSEngine_newObject(QJSEngine* self);
QJSValue* QJSEngine_newSymbol(QJSEngine* self, struct miqt_string name);
QJSValue* QJSEngine_newArray(QJSEngine* self);
QJSValue* QJSEngine_newQObject(QJSEngine* self, QObject* object);
QJSValue* QJSEngine_newQMetaObject(QJSEngine* self, QMetaObject* metaObject);
QJSValue* QJSEngine_newErrorObject(QJSEngine* self, int errorType);
void QJSEngine_collectGarbage(QJSEngine* self);
void QJSEngine_setObjectOwnership(QObject* param1, int param2);
int QJSEngine_objectOwnership(QObject* param1);
void QJSEngine_installExtensions(QJSEngine* self, int extensions);
void QJSEngine_setInterrupted(QJSEngine* self, bool interrupted);
bool QJSEngine_isInterrupted(const QJSEngine* self);
void QJSEngine_throwError(QJSEngine* self, struct miqt_string message);
void QJSEngine_throwErrorWithErrorType(QJSEngine* self, int errorType);
void QJSEngine_throwErrorWithError(QJSEngine* self, QJSValue* error);
bool QJSEngine_hasError(const QJSEngine* self);
QJSValue* QJSEngine_catchError(QJSEngine* self);
struct miqt_string QJSEngine_uiLanguage(const QJSEngine* self);
void QJSEngine_setUiLanguage(QJSEngine* self, struct miqt_string language);
void QJSEngine_uiLanguageChanged(QJSEngine* self);
void QJSEngine_connect_uiLanguageChanged(QJSEngine* self, intptr_t slot);
struct miqt_string QJSEngine_tr2(const char* s, const char* c);
struct miqt_string QJSEngine_tr3(const char* s, const char* c, int n);
QJSValue* QJSEngine_evaluate2(QJSEngine* self, struct miqt_string program, struct miqt_string fileName);
QJSValue* QJSEngine_evaluate3(QJSEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber);
QJSValue* QJSEngine_evaluate4(QJSEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber, struct miqt_array /* of struct miqt_string */  exceptionStackTrace);
QJSValue* QJSEngine_newArrayWithLength(QJSEngine* self, unsigned int length);
QJSValue* QJSEngine_newErrorObject2(QJSEngine* self, int errorType, struct miqt_string message);
void QJSEngine_installExtensions2(QJSEngine* self, int extensions, QJSValue* object);
void QJSEngine_throwError2(QJSEngine* self, int errorType, struct miqt_string message);

bool QJSEngine_override_virtual_event(void* self, intptr_t slot);
bool QJSEngine_virtualbase_event(void* self, QEvent* event);
bool QJSEngine_override_virtual_eventFilter(void* self, intptr_t slot);
bool QJSEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QJSEngine_override_virtual_timerEvent(void* self, intptr_t slot);
void QJSEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QJSEngine_override_virtual_childEvent(void* self, intptr_t slot);
void QJSEngine_virtualbase_childEvent(void* self, QChildEvent* event);
bool QJSEngine_override_virtual_customEvent(void* self, intptr_t slot);
void QJSEngine_virtualbase_customEvent(void* self, QEvent* event);
bool QJSEngine_override_virtual_connectNotify(void* self, intptr_t slot);
void QJSEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QJSEngine_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QJSEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QJSEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QJSEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QJSEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QJSEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QJSEngine_delete(QJSEngine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
