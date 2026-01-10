#pragma once
#ifndef MIQT_QT6_SCXML_GEN_QSCXMLNULLDATAMODEL_H
#define MIQT_QT6_SCXML_GEN_QSCXMLNULLDATAMODEL_H

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
class QScxmlNullDataModel;
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
typedef struct QScxmlNullDataModel QScxmlNullDataModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QScxmlNullDataModel* QScxmlNullDataModel_new();
QScxmlNullDataModel* QScxmlNullDataModel_new2(QObject* parent);
void QScxmlNullDataModel_virtbase(QScxmlNullDataModel* src, QScxmlDataModel** outptr_QScxmlDataModel);
QMetaObject* QScxmlNullDataModel_metaObject(const QScxmlNullDataModel* self);
void* QScxmlNullDataModel_metacast(QScxmlNullDataModel* self, const char* param1);
struct miqt_string QScxmlNullDataModel_tr(const char* s);
bool QScxmlNullDataModel_setup(QScxmlNullDataModel* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
struct miqt_string QScxmlNullDataModel_evaluateToString(QScxmlNullDataModel* self, int id, bool* ok);
bool QScxmlNullDataModel_evaluateToBool(QScxmlNullDataModel* self, int id, bool* ok);
QVariant* QScxmlNullDataModel_evaluateToVariant(QScxmlNullDataModel* self, int id, bool* ok);
void QScxmlNullDataModel_evaluateToVoid(QScxmlNullDataModel* self, int id, bool* ok);
void QScxmlNullDataModel_evaluateAssignment(QScxmlNullDataModel* self, int id, bool* ok);
void QScxmlNullDataModel_evaluateInitialization(QScxmlNullDataModel* self, int id, bool* ok);
void QScxmlNullDataModel_evaluateForeach(QScxmlNullDataModel* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
void QScxmlNullDataModel_setScxmlEvent(QScxmlNullDataModel* self, QScxmlEvent* event);
QVariant* QScxmlNullDataModel_scxmlProperty(const QScxmlNullDataModel* self, struct miqt_string name);
bool QScxmlNullDataModel_hasScxmlProperty(const QScxmlNullDataModel* self, struct miqt_string name);
bool QScxmlNullDataModel_setScxmlProperty(QScxmlNullDataModel* self, struct miqt_string name, QVariant* value, struct miqt_string context);
struct miqt_string QScxmlNullDataModel_tr2(const char* s, const char* c);
struct miqt_string QScxmlNullDataModel_tr3(const char* s, const char* c, int n);

bool QScxmlNullDataModel_override_virtual_setup(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_setup(void* self, struct miqt_map /* of struct miqt_string to QVariant* */  initialDataValues);
bool QScxmlNullDataModel_override_virtual_evaluateToString(void* self, intptr_t slot);
struct miqt_string QScxmlNullDataModel_virtualbase_evaluateToString(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateToBool(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_evaluateToBool(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateToVariant(void* self, intptr_t slot);
QVariant* QScxmlNullDataModel_virtualbase_evaluateToVariant(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateToVoid(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_evaluateToVoid(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateAssignment(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_evaluateAssignment(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateInitialization(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_evaluateInitialization(void* self, int id, bool* ok);
bool QScxmlNullDataModel_override_virtual_evaluateForeach(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_evaluateForeach(void* self, int id, bool* ok, QScxmlDataModel__ForeachLoopBody* body);
bool QScxmlNullDataModel_override_virtual_setScxmlEvent(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_setScxmlEvent(void* self, QScxmlEvent* event);
bool QScxmlNullDataModel_override_virtual_scxmlProperty(void* self, intptr_t slot);
QVariant* QScxmlNullDataModel_virtualbase_scxmlProperty(const void* self, struct miqt_string name);
bool QScxmlNullDataModel_override_virtual_hasScxmlProperty(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_hasScxmlProperty(const void* self, struct miqt_string name);
bool QScxmlNullDataModel_override_virtual_setScxmlProperty(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_setScxmlProperty(void* self, struct miqt_string name, QVariant* value, struct miqt_string context);
bool QScxmlNullDataModel_override_virtual_event(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_event(void* self, QEvent* event);
bool QScxmlNullDataModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QScxmlNullDataModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QScxmlNullDataModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QScxmlNullDataModel_override_virtual_childEvent(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QScxmlNullDataModel_override_virtual_customEvent(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_customEvent(void* self, QEvent* event);
bool QScxmlNullDataModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QScxmlNullDataModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QScxmlNullDataModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QScxmlNullDataModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QScxmlNullDataModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QScxmlNullDataModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QScxmlNullDataModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QScxmlNullDataModel_delete(QScxmlNullDataModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
