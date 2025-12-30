#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLINVOKABLESERVICE_H
#define MIQT_QT6_SCXML_GEN_QSCXMLINVOKABLESERVICE_H

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
class QScxmlDynamicScxmlServiceFactory;
class QScxmlEvent;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__InvokeInfo)
typedef QScxmlExecutableContent::InvokeInfo QScxmlExecutableContent__InvokeInfo;
#else
class QScxmlExecutableContent__InvokeInfo;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlExecutableContent__ParameterInfo)
typedef QScxmlExecutableContent::ParameterInfo QScxmlExecutableContent__ParameterInfo;
#else
class QScxmlExecutableContent__ParameterInfo;
#endif
class QScxmlInvokableService;
class QScxmlInvokableServiceFactory;
class QScxmlStateMachine;
class QScxmlStaticScxmlServiceFactory;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScxmlDynamicScxmlServiceFactory QScxmlDynamicScxmlServiceFactory;
typedef struct QScxmlEvent QScxmlEvent;
typedef struct QScxmlExecutableContent__InvokeInfo QScxmlExecutableContent__InvokeInfo;
typedef struct QScxmlExecutableContent__ParameterInfo QScxmlExecutableContent__ParameterInfo;
typedef struct QScxmlInvokableService QScxmlInvokableService;
typedef struct QScxmlInvokableServiceFactory QScxmlInvokableServiceFactory;
typedef struct QScxmlStateMachine QScxmlStateMachine;
typedef struct QScxmlStaticScxmlServiceFactory QScxmlStaticScxmlServiceFactory;
typedef struct QTimerEvent QTimerEvent;
#endif

QScxmlInvokableService* QScxmlInvokableService_new(QScxmlStateMachine* parentStateMachine, QScxmlInvokableServiceFactory* parent);
void QScxmlInvokableService_virtbase(QScxmlInvokableService* src, QObject** outptr_QObject);
QMetaObject* QScxmlInvokableService_metaObject(const QScxmlInvokableService* self);
void* QScxmlInvokableService_metacast(QScxmlInvokableService* self, const char* param1);
struct miqt_string QScxmlInvokableService_tr(const char* s);
QScxmlStateMachine* QScxmlInvokableService_parentStateMachine(const QScxmlInvokableService* self);
bool QScxmlInvokableService_start(QScxmlInvokableService* self);
struct miqt_string QScxmlInvokableService_id(const QScxmlInvokableService* self);
struct miqt_string QScxmlInvokableService_name(const QScxmlInvokableService* self);
void QScxmlInvokableService_postEvent(QScxmlInvokableService* self, QScxmlEvent* event);
struct miqt_string QScxmlInvokableService_tr2(const char* s, const char* c);
struct miqt_string QScxmlInvokableService_tr3(const char* s, const char* c, int n);

bool QScxmlInvokableService_override_virtual_start(void* self, intptr_t slot);
bool QScxmlInvokableService_virtualbase_start(void* self);
bool QScxmlInvokableService_override_virtual_id(void* self, intptr_t slot);
struct miqt_string QScxmlInvokableService_virtualbase_id(const void* self);
bool QScxmlInvokableService_override_virtual_name(void* self, intptr_t slot);
struct miqt_string QScxmlInvokableService_virtualbase_name(const void* self);
bool QScxmlInvokableService_override_virtual_postEvent(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_postEvent(void* self, QScxmlEvent* event);
bool QScxmlInvokableService_override_virtual_event(void* self, intptr_t slot);
bool QScxmlInvokableService_virtualbase_event(void* self, QEvent* event);
bool QScxmlInvokableService_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlInvokableService_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlInvokableService_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlInvokableService_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlInvokableService_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlInvokableService_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlInvokableService_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlInvokableService_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlInvokableService_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlInvokableService_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlInvokableService_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlInvokableService_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlInvokableService_delete(QScxmlInvokableService* self);

QScxmlInvokableServiceFactory* QScxmlInvokableServiceFactory_new(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters);
QScxmlInvokableServiceFactory* QScxmlInvokableServiceFactory_new2(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent);
void QScxmlInvokableServiceFactory_virtbase(QScxmlInvokableServiceFactory* src, QObject** outptr_QObject);
QMetaObject* QScxmlInvokableServiceFactory_metaObject(const QScxmlInvokableServiceFactory* self);
void* QScxmlInvokableServiceFactory_metacast(QScxmlInvokableServiceFactory* self, const char* param1);
struct miqt_string QScxmlInvokableServiceFactory_tr(const char* s);
QScxmlInvokableService* QScxmlInvokableServiceFactory_invoke(QScxmlInvokableServiceFactory* self, QScxmlStateMachine* parentStateMachine);
QScxmlExecutableContent__InvokeInfo* QScxmlInvokableServiceFactory_invokeInfo(const QScxmlInvokableServiceFactory* self);
struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  QScxmlInvokableServiceFactory_parameters(const QScxmlInvokableServiceFactory* self);
struct miqt_array /* of int */  QScxmlInvokableServiceFactory_names(const QScxmlInvokableServiceFactory* self);
struct miqt_string QScxmlInvokableServiceFactory_tr2(const char* s, const char* c);
struct miqt_string QScxmlInvokableServiceFactory_tr3(const char* s, const char* c, int n);

bool QScxmlInvokableServiceFactory_override_virtual_invoke(void* self, intptr_t slot);
QScxmlInvokableService* QScxmlInvokableServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine);
bool QScxmlInvokableServiceFactory_override_virtual_event(void* self, intptr_t slot);
bool QScxmlInvokableServiceFactory_virtualbase_event(void* self, QEvent* event);
bool QScxmlInvokableServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlInvokableServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlInvokableServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlInvokableServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlInvokableServiceFactory_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlInvokableServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlInvokableServiceFactory_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlInvokableServiceFactory_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlInvokableServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlInvokableServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlInvokableServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlInvokableServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlInvokableServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlInvokableServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlInvokableServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlInvokableServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlInvokableServiceFactory_delete(QScxmlInvokableServiceFactory* self);

QScxmlStaticScxmlServiceFactory* QScxmlStaticScxmlServiceFactory_new(QMetaObject* metaObject, QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  nameList, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters);
QScxmlStaticScxmlServiceFactory* QScxmlStaticScxmlServiceFactory_new2(QMetaObject* metaObject, QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  nameList, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent);
void QScxmlStaticScxmlServiceFactory_virtbase(QScxmlStaticScxmlServiceFactory* src, QScxmlInvokableServiceFactory** outptr_QScxmlInvokableServiceFactory);
QMetaObject* QScxmlStaticScxmlServiceFactory_metaObject(const QScxmlStaticScxmlServiceFactory* self);
void* QScxmlStaticScxmlServiceFactory_metacast(QScxmlStaticScxmlServiceFactory* self, const char* param1);
struct miqt_string QScxmlStaticScxmlServiceFactory_tr(const char* s);
QScxmlInvokableService* QScxmlStaticScxmlServiceFactory_invoke(QScxmlStaticScxmlServiceFactory* self, QScxmlStateMachine* parentStateMachine);
struct miqt_string QScxmlStaticScxmlServiceFactory_tr2(const char* s, const char* c);
struct miqt_string QScxmlStaticScxmlServiceFactory_tr3(const char* s, const char* c, int n);

bool QScxmlStaticScxmlServiceFactory_override_virtual_invoke(void* self, intptr_t slot);
QScxmlInvokableService* QScxmlStaticScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine);
bool QScxmlStaticScxmlServiceFactory_override_virtual_event(void* self, intptr_t slot);
bool QScxmlStaticScxmlServiceFactory_virtualbase_event(void* self, QEvent* event);
bool QScxmlStaticScxmlServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlStaticScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlStaticScxmlServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlStaticScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlStaticScxmlServiceFactory_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlStaticScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlStaticScxmlServiceFactory_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlStaticScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlStaticScxmlServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlStaticScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlStaticScxmlServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlStaticScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlStaticScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlStaticScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlStaticScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlStaticScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlStaticScxmlServiceFactory_delete(QScxmlStaticScxmlServiceFactory* self);

QScxmlDynamicScxmlServiceFactory* QScxmlDynamicScxmlServiceFactory_new(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters);
QScxmlDynamicScxmlServiceFactory* QScxmlDynamicScxmlServiceFactory_new2(QScxmlExecutableContent__InvokeInfo* invokeInfo, struct miqt_array /* of int */  names, struct miqt_array /* of QScxmlExecutableContent__ParameterInfo* */  parameters, QObject* parent);
void QScxmlDynamicScxmlServiceFactory_virtbase(QScxmlDynamicScxmlServiceFactory* src, QScxmlInvokableServiceFactory** outptr_QScxmlInvokableServiceFactory);
QMetaObject* QScxmlDynamicScxmlServiceFactory_metaObject(const QScxmlDynamicScxmlServiceFactory* self);
void* QScxmlDynamicScxmlServiceFactory_metacast(QScxmlDynamicScxmlServiceFactory* self, const char* param1);
struct miqt_string QScxmlDynamicScxmlServiceFactory_tr(const char* s);
QScxmlInvokableService* QScxmlDynamicScxmlServiceFactory_invoke(QScxmlDynamicScxmlServiceFactory* self, QScxmlStateMachine* parentStateMachine);
struct miqt_string QScxmlDynamicScxmlServiceFactory_tr2(const char* s, const char* c);
struct miqt_string QScxmlDynamicScxmlServiceFactory_tr3(const char* s, const char* c, int n);

bool QScxmlDynamicScxmlServiceFactory_override_virtual_invoke(void* self, intptr_t slot);
QScxmlInvokableService* QScxmlDynamicScxmlServiceFactory_virtualbase_invoke(void* self, QScxmlStateMachine* parentStateMachine);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_event(void* self, intptr_t slot);
bool QScxmlDynamicScxmlServiceFactory_virtualbase_event(void* self, QEvent* event);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlDynamicScxmlServiceFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlDynamicScxmlServiceFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlDynamicScxmlServiceFactory_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlDynamicScxmlServiceFactory_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlDynamicScxmlServiceFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlDynamicScxmlServiceFactory_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlDynamicScxmlServiceFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlDynamicScxmlServiceFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlDynamicScxmlServiceFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlDynamicScxmlServiceFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlDynamicScxmlServiceFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlDynamicScxmlServiceFactory_delete(QScxmlDynamicScxmlServiceFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
