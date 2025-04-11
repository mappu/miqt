#pragma once
#ifndef MIQT_QT6_QML_GEN_QQMLEXPRESSION_H
#define MIQT_QT6_QML_GEN_QQMLEXPRESSION_H

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
class QQmlContext;
class QQmlEngine;
class QQmlError;
class QQmlExpression;
class QQmlScriptString;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QQmlContext QQmlContext;
typedef struct QQmlEngine QQmlEngine;
typedef struct QQmlError QQmlError;
typedef struct QQmlExpression QQmlExpression;
typedef struct QQmlScriptString QQmlScriptString;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QQmlExpression* QQmlExpression_new();
QQmlExpression* QQmlExpression_new2(QQmlContext* param1, QObject* param2, struct miqt_string param3);
QQmlExpression* QQmlExpression_new3(QQmlScriptString* param1);
QQmlExpression* QQmlExpression_new4(QQmlContext* param1, QObject* param2, struct miqt_string param3, QObject* param4);
QQmlExpression* QQmlExpression_new5(QQmlScriptString* param1, QQmlContext* param2);
QQmlExpression* QQmlExpression_new6(QQmlScriptString* param1, QQmlContext* param2, QObject* param3);
QQmlExpression* QQmlExpression_new7(QQmlScriptString* param1, QQmlContext* param2, QObject* param3, QObject* param4);
void QQmlExpression_virtbase(QQmlExpression* src, QObject** outptr_QObject);
QMetaObject* QQmlExpression_metaObject(const QQmlExpression* self);
void* QQmlExpression_metacast(QQmlExpression* self, const char* param1);
struct miqt_string QQmlExpression_tr(const char* s);
QQmlEngine* QQmlExpression_engine(const QQmlExpression* self);
QQmlContext* QQmlExpression_context(const QQmlExpression* self);
struct miqt_string QQmlExpression_expression(const QQmlExpression* self);
void QQmlExpression_setExpression(QQmlExpression* self, struct miqt_string expression);
bool QQmlExpression_notifyOnValueChanged(const QQmlExpression* self);
void QQmlExpression_setNotifyOnValueChanged(QQmlExpression* self, bool notifyOnValueChanged);
struct miqt_string QQmlExpression_sourceFile(const QQmlExpression* self);
int QQmlExpression_lineNumber(const QQmlExpression* self);
int QQmlExpression_columnNumber(const QQmlExpression* self);
void QQmlExpression_setSourceLocation(QQmlExpression* self, struct miqt_string fileName, int line);
QObject* QQmlExpression_scopeObject(const QQmlExpression* self);
bool QQmlExpression_hasError(const QQmlExpression* self);
void QQmlExpression_clearError(QQmlExpression* self);
QQmlError* QQmlExpression_error(const QQmlExpression* self);
QVariant* QQmlExpression_evaluate(QQmlExpression* self);
void QQmlExpression_valueChanged(QQmlExpression* self);
void QQmlExpression_connect_valueChanged(QQmlExpression* self, intptr_t slot);
struct miqt_string QQmlExpression_tr2(const char* s, const char* c);
struct miqt_string QQmlExpression_tr3(const char* s, const char* c, int n);
void QQmlExpression_setSourceLocation2(QQmlExpression* self, struct miqt_string fileName, int line, int column);
QVariant* QQmlExpression_evaluateWithValueIsUndefined(QQmlExpression* self, bool* valueIsUndefined);
bool QQmlExpression_override_virtual_event(void* self, intptr_t slot);
bool QQmlExpression_virtualbase_event(void* self, QEvent* event);
bool QQmlExpression_override_virtual_eventFilter(void* self, intptr_t slot);
bool QQmlExpression_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QQmlExpression_override_virtual_timerEvent(void* self, intptr_t slot);
void QQmlExpression_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QQmlExpression_override_virtual_childEvent(void* self, intptr_t slot);
void QQmlExpression_virtualbase_childEvent(void* self, QChildEvent* event);
bool QQmlExpression_override_virtual_customEvent(void* self, intptr_t slot);
void QQmlExpression_virtualbase_customEvent(void* self, QEvent* event);
bool QQmlExpression_override_virtual_connectNotify(void* self, intptr_t slot);
void QQmlExpression_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QQmlExpression_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QQmlExpression_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QQmlExpression_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QQmlExpression_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QQmlExpression_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QQmlExpression_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QQmlExpression_delete(QQmlExpression* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
