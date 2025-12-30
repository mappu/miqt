#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLSTATEMACHINE_H
#define MIQT_QT6_SCXML_GEN_QSCXMLSTATEMACHINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIODevice;
class QMetaMethod;
class QMetaObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#else
class QMetaObject__Connection;
#endif
class QObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlCompiler__Loader)
typedef QScxmlCompiler::Loader QScxmlCompiler__Loader;
#else
class QScxmlCompiler__Loader;
#endif
class QScxmlDataModel;
class QScxmlError;
class QScxmlEvent;
class QScxmlInvokableService;
class QScxmlStateMachine;
class QScxmlTableData;
class QVariant;
#else
typedef struct QIODevice QIODevice;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QScxmlCompiler__Loader QScxmlCompiler__Loader;
typedef struct QScxmlDataModel QScxmlDataModel;
typedef struct QScxmlError QScxmlError;
typedef struct QScxmlEvent QScxmlEvent;
typedef struct QScxmlInvokableService QScxmlInvokableService;
typedef struct QScxmlStateMachine QScxmlStateMachine;
typedef struct QScxmlTableData QScxmlTableData;
typedef struct QVariant QVariant;
#endif

void QScxmlStateMachine_virtbase(QScxmlStateMachine* src, QObject** outptr_QObject);
QMetaObject* QScxmlStateMachine_metaObject(const QScxmlStateMachine* self);
void* QScxmlStateMachine_metacast(QScxmlStateMachine* self, const char* param1);
struct miqt_string QScxmlStateMachine_tr(const char* s);
QScxmlStateMachine* QScxmlStateMachine_fromFile(struct miqt_string fileName);
QScxmlStateMachine* QScxmlStateMachine_fromData(QIODevice* data);
struct miqt_array /* of QScxmlError* */  QScxmlStateMachine_parseErrors(const QScxmlStateMachine* self);
struct miqt_string QScxmlStateMachine_sessionId(const QScxmlStateMachine* self);
bool QScxmlStateMachine_isInvoked(const QScxmlStateMachine* self);
bool QScxmlStateMachine_isInitialized(const QScxmlStateMachine* self);
void QScxmlStateMachine_setDataModel(QScxmlStateMachine* self, QScxmlDataModel* model);
QScxmlDataModel* QScxmlStateMachine_dataModel(const QScxmlStateMachine* self);
void QScxmlStateMachine_setLoader(QScxmlStateMachine* self, QScxmlCompiler__Loader* loader);
QScxmlCompiler__Loader* QScxmlStateMachine_loader(const QScxmlStateMachine* self);
bool QScxmlStateMachine_isRunning(const QScxmlStateMachine* self);
void QScxmlStateMachine_setRunning(QScxmlStateMachine* self, bool running);
struct miqt_map /* of struct miqt_string to QVariant* */  QScxmlStateMachine_initialValues(QScxmlStateMachine* self);
void QScxmlStateMachine_setInitialValues(QScxmlStateMachine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialValues);
struct miqt_string QScxmlStateMachine_name(const QScxmlStateMachine* self);
struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_stateNames(const QScxmlStateMachine* self);
struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_activeStateNames(const QScxmlStateMachine* self);
bool QScxmlStateMachine_isActive(const QScxmlStateMachine* self, struct miqt_string scxmlStateName);
QMetaObject__Connection* QScxmlStateMachine_connectToState(QScxmlStateMachine* self, struct miqt_string scxmlStateName, QObject* receiver, const char* method);
QMetaObject__Connection* QScxmlStateMachine_connectToEvent(QScxmlStateMachine* self, struct miqt_string scxmlEventSpec, QObject* receiver, const char* method);
void QScxmlStateMachine_submitEvent(QScxmlStateMachine* self, QScxmlEvent* event);
void QScxmlStateMachine_submitEventWithEventName(QScxmlStateMachine* self, struct miqt_string eventName);
void QScxmlStateMachine_submitEvent2(QScxmlStateMachine* self, struct miqt_string eventName, QVariant* data);
void QScxmlStateMachine_cancelDelayedEvent(QScxmlStateMachine* self, struct miqt_string sendId);
bool QScxmlStateMachine_isDispatchableTarget(const QScxmlStateMachine* self, struct miqt_string target);
struct miqt_array /* of QScxmlInvokableService* */  QScxmlStateMachine_invokedServices(const QScxmlStateMachine* self);
QScxmlTableData* QScxmlStateMachine_tableData(const QScxmlStateMachine* self);
void QScxmlStateMachine_setTableData(QScxmlStateMachine* self, QScxmlTableData* tableData);
void QScxmlStateMachine_runningChanged(QScxmlStateMachine* self, bool running);
void QScxmlStateMachine_connect_runningChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_invokedServicesChanged(QScxmlStateMachine* self, struct miqt_array /* of QScxmlInvokableService* */  invokedServices);
void QScxmlStateMachine_connect_invokedServicesChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_log(QScxmlStateMachine* self, struct miqt_string label, struct miqt_string msg);
void QScxmlStateMachine_connect_log(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_reachedStableState(QScxmlStateMachine* self);
void QScxmlStateMachine_connect_reachedStableState(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_finished(QScxmlStateMachine* self);
void QScxmlStateMachine_connect_finished(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_dataModelChanged(QScxmlStateMachine* self, QScxmlDataModel* model);
void QScxmlStateMachine_connect_dataModelChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_initialValuesChanged(QScxmlStateMachine* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialValues);
void QScxmlStateMachine_connect_initialValuesChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_initializedChanged(QScxmlStateMachine* self, bool initialized);
void QScxmlStateMachine_connect_initializedChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_loaderChanged(QScxmlStateMachine* self, QScxmlCompiler__Loader* loader);
void QScxmlStateMachine_connect_loaderChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_tableDataChanged(QScxmlStateMachine* self, QScxmlTableData* tableData);
void QScxmlStateMachine_connect_tableDataChanged(QScxmlStateMachine* self, intptr_t slot);
void QScxmlStateMachine_start(QScxmlStateMachine* self);
void QScxmlStateMachine_stop(QScxmlStateMachine* self);
bool QScxmlStateMachine_init(QScxmlStateMachine* self);
struct miqt_string QScxmlStateMachine_tr2(const char* s, const char* c);
struct miqt_string QScxmlStateMachine_tr3(const char* s, const char* c, int n);
QScxmlStateMachine* QScxmlStateMachine_fromData2(QIODevice* data, struct miqt_string fileName);
struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_stateNamesWithCompress(const QScxmlStateMachine* self, bool compress);
struct miqt_array /* of struct miqt_string */  QScxmlStateMachine_activeStateNamesWithCompress(const QScxmlStateMachine* self, bool compress);
QMetaObject__Connection* QScxmlStateMachine_connectToState2(QScxmlStateMachine* self, struct miqt_string scxmlStateName, QObject* receiver, const char* method, int type);
QMetaObject__Connection* QScxmlStateMachine_connectToEvent2(QScxmlStateMachine* self, struct miqt_string scxmlEventSpec, QObject* receiver, const char* method, int type);

void QScxmlStateMachine_delete(QScxmlStateMachine* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
