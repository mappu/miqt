#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLCPPDATAMODEL_H
#define MIQT_QT6_SCXML_GEN_QSCXMLCPPDATAMODEL_H

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
class QScxmlCppDataModel;
class QScxmlDataModel;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QScxmlDataModel__ForeachLoopBody)
typedef QScxmlDataModel::ForeachLoopBody QScxmlDataModel__ForeachLoopBody;
#else
class QScxmlDataModel__ForeachLoopBody;
#endif
class QScxmlEvent;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QScxmlCppDataModel QScxmlCppDataModel;
typedef struct QScxmlDataModel QScxmlDataModel;
typedef struct QScxmlDataModel__ForeachLoopBody QScxmlDataModel__ForeachLoopBody;
typedef struct QScxmlEvent QScxmlEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QScxmlCppDataModel* QScxmlCppDataModel_new();
QScxmlCppDataModel* QScxmlCppDataModel_new2(QObject* parent);
void QScxmlCppDataModel_virtbase(QScxmlCppDataModel* src, QScxmlDataModel** outptr_QScxmlDataModel);
QMetaObject* QScxmlCppDataModel_metaObject(const QScxmlCppDataModel* self);
void* QScxmlCppDataModel_metacast(QScxmlCppDataModel* self, const char* param1);
struct miqt_string QScxmlCppDataModel_tr(const char* s);
bool QScxmlCppDataModel_setup(QScxmlCppDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
void QScxmlCppDataModel_evaluateAssignment(QScxmlCppDataModel* self, int id, bool* ok);
void QScxmlCppDataModel_evaluateInitialization(QScxmlCppDataModel* self, int id, bool* ok);
void QScxmlCppDataModel_evaluateForeach(QScxmlCppDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
void QScxmlCppDataModel_setScxmlEvent(QScxmlCppDataModel* self, QScxmlEvent* scxmlEvent);
QScxmlEvent* QScxmlCppDataModel_scxmlEvent(const QScxmlCppDataModel* self);
QVariant* QScxmlCppDataModel_scxmlProperty(const QScxmlCppDataModel* self, struct miqt_string name);
bool QScxmlCppDataModel_hasScxmlProperty(const QScxmlCppDataModel* self, struct miqt_string name);
bool QScxmlCppDataModel_setScxmlProperty(QScxmlCppDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context);
bool QScxmlCppDataModel_inState(const QScxmlCppDataModel* self, struct miqt_string stateName);
struct miqt_string QScxmlCppDataModel_tr2(const char* s, const char* c);
struct miqt_string QScxmlCppDataModel_tr3(const char* s, const char* c, int n);

bool QScxmlCppDataModel_override_virtual_setup(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
bool QScxmlCppDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
bool QScxmlCppDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* scxmlEvent);
bool QScxmlCppDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot);
QVariant* QScxmlCppDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name);
bool QScxmlCppDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name);
bool QScxmlCppDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context);
bool QScxmlCppDataModel_override_virtual_evaluateToString(void* self, intptr_t slot);
struct miqt_string QScxmlCppDataModel_virtualbase_evaluateToString(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_evaluateToBool(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot);
QVariant* QScxmlCppDataModel_virtualbase_evaluateToVariant(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_evaluateToVoid(void* self, int id, bool* ok);
bool QScxmlCppDataModel_override_virtual_event(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_event(void* self, QEvent* event);
bool QScxmlCppDataModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlCppDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlCppDataModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlCppDataModel_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlCppDataModel_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlCppDataModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlCppDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlCppDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlCppDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlCppDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlCppDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlCppDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlCppDataModel_delete(QScxmlCppDataModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
