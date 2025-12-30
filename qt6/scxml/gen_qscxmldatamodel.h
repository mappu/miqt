#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLDATAMODEL_H
#define MIQT_QT6_SCXML_GEN_QSCXMLDATAMODEL_H

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
class QScxmlDataModel;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlDataModel__ForeachLoopBody)
typedef QScxmlDataModel::ForeachLoopBody QScxmlDataModel__ForeachLoopBody;
#else
class QScxmlDataModel__ForeachLoopBody;
#endif
class QScxmlEvent;
class QScxmlStateMachine;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScxmlDataModel QScxmlDataModel;
typedef struct QScxmlDataModel__ForeachLoopBody QScxmlDataModel__ForeachLoopBody;
typedef struct QScxmlEvent QScxmlEvent;
typedef struct QScxmlStateMachine QScxmlStateMachine;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QScxmlDataModel* QScxmlDataModel_new();
QScxmlDataModel* QScxmlDataModel_new2(QObject* parent);
void QScxmlDataModel_virtbase(QScxmlDataModel* src, QObject** outptr_QObject);
QMetaObject* QScxmlDataModel_metaObject(const QScxmlDataModel* self);
void* QScxmlDataModel_metacast(QScxmlDataModel* self, const char* param1);
struct miqt_string QScxmlDataModel_tr(const char* s);
QScxmlDataModel* QScxmlDataModel_createScxmlDataModel(struct miqt_string pluginKey);
void QScxmlDataModel_setStateMachine(QScxmlDataModel* self, QScxmlStateMachine* stateMachine);
QScxmlStateMachine* QScxmlDataModel_stateMachine(const QScxmlDataModel* self);
bool QScxmlDataModel_setup(QScxmlDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
struct miqt_string QScxmlDataModel_evaluateToString(QScxmlDataModel* self, int id, bool* ok);
bool QScxmlDataModel_evaluateToBool(QScxmlDataModel* self, int id, bool* ok);
QVariant* QScxmlDataModel_evaluateToVariant(QScxmlDataModel* self, int id, bool* ok);
void QScxmlDataModel_evaluateToVoid(QScxmlDataModel* self, int id, bool* ok);
void QScxmlDataModel_evaluateAssignment(QScxmlDataModel* self, int id, bool* ok);
void QScxmlDataModel_evaluateInitialization(QScxmlDataModel* self, int id, bool* ok);
void QScxmlDataModel_evaluateForeach(QScxmlDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
void QScxmlDataModel_setScxmlEvent(QScxmlDataModel* self, QScxmlEvent* event);
QVariant* QScxmlDataModel_scxmlProperty(const QScxmlDataModel* self, struct miqt_string name);
bool QScxmlDataModel_hasScxmlProperty(const QScxmlDataModel* self, struct miqt_string name);
bool QScxmlDataModel_setScxmlProperty(QScxmlDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context);
void QScxmlDataModel_stateMachineChanged(QScxmlDataModel* self, QScxmlStateMachine* stateMachine);
void QScxmlDataModel_connect_stateMachineChanged(QScxmlDataModel* self, intptr_t slot);
struct miqt_string QScxmlDataModel_tr2(const char* s, const char* c);
struct miqt_string QScxmlDataModel_tr3(const char* s, const char* c, int n);

bool QScxmlDataModel_override_virtual_setup(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
bool QScxmlDataModel_override_virtual_evaluateToString(void* self, intptr_t slot);
struct miqt_string QScxmlDataModel_virtualbase_evaluateToString(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_evaluateToBool(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot);
QVariant* QScxmlDataModel_virtualbase_evaluateToVariant(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_evaluateToVoid(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok);
bool QScxmlDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
bool QScxmlDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* event);
bool QScxmlDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot);
QVariant* QScxmlDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name);
bool QScxmlDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name);
bool QScxmlDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context);
bool QScxmlDataModel_override_virtual_event(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_event(void* self, QEvent* event);
bool QScxmlDataModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlDataModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlDataModel_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlDataModel_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlDataModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlDataModel_delete(QScxmlDataModel* self);

QScxmlDataModel__ForeachLoopBody* QScxmlDataModel__ForeachLoopBody_new();
void QScxmlDataModel__ForeachLoopBody_run(QScxmlDataModel__ForeachLoopBody* self, bool* ok);

bool QScxmlDataModel__ForeachLoopBody_override_virtual_run(void* self, intptr_t slot);
void QScxmlDataModel__ForeachLoopBody_virtualbase_run(void* self, bool* ok);

void QScxmlDataModel__ForeachLoopBody_delete(QScxmlDataModel__ForeachLoopBody* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
