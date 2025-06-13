#pragma once
#ifndef MIQT_QT_GEN_QOBJECT_H
#define MIQT_QT_GEN_QOBJECT_H

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
class QMetaMethod;
class QMetaObject;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#else
class QMetaObject__Connection;
#endif
class QObject;
class QObjectData;
class QObjectUserData;
class QSignalBlocker;
class QThread;
class QTimerEvent;
class QVariant;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QObjectData QObjectData;
typedef struct QObjectUserData QObjectUserData;
typedef struct QSignalBlocker QSignalBlocker;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QMetaObject* QObjectData_dynamicMetaObject(const QObjectData* self);

void QObjectData_delete(QObjectData* self);

QObject* QObject_new();
QObject* QObject_new2(QObject* parent);
QMetaObject* QObject_metaObject(const QObject* self);
void* QObject_metacast(QObject* self, const char* param1);
struct miqt_string QObject_tr(const char* s);
struct miqt_string QObject_trUtf8(const char* s);
bool QObject_event(QObject* self, QEvent* event);
bool QObject_eventFilter(QObject* self, QObject* watched, QEvent* event);
struct miqt_string QObject_objectName(const QObject* self);
void QObject_setObjectName(QObject* self, struct miqt_string name);
bool QObject_isWidgetType(const QObject* self);
bool QObject_isWindowType(const QObject* self);
bool QObject_signalsBlocked(const QObject* self);
bool QObject_blockSignals(QObject* self, bool b);
QThread* QObject_thread(const QObject* self);
void QObject_moveToThread(QObject* self, QThread* thread);
int QObject_startTimer(QObject* self, int interval);
void QObject_killTimer(QObject* self, int id);
struct miqt_array /* of QObject* */  QObject_children(const QObject* self);
void QObject_setParent(QObject* self, QObject* parent);
void QObject_installEventFilter(QObject* self, QObject* filterObj);
void QObject_removeEventFilter(QObject* self, QObject* obj);
QMetaObject__Connection* QObject_connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method);
QMetaObject__Connection* QObject_connect2(const QObject* self, QObject* sender, const char* signal, const char* member);
bool QObject_disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member);
bool QObject_disconnectWithQMetaObjectConnection(QMetaObject__Connection* param1);
void QObject_dumpObjectTree(QObject* self);
void QObject_dumpObjectInfo(QObject* self);
void QObject_dumpObjectTree2(const QObject* self);
void QObject_dumpObjectInfo2(const QObject* self);
bool QObject_setProperty(QObject* self, const char* name, QVariant* value);
QVariant* QObject_property(const QObject* self, const char* name);
struct miqt_array /* of struct miqt_string */  QObject_dynamicPropertyNames(const QObject* self);
unsigned int QObject_registerUserData();
void QObject_setUserData(QObject* self, unsigned int id, QObjectUserData* data);
QObjectUserData* QObject_userData(const QObject* self, unsigned int id);
void QObject_destroyed(QObject* self);
void QObject_connect_destroyed(QObject* self, intptr_t slot);
QObject* QObject_parent(const QObject* self);
bool QObject_inherits(const QObject* self, const char* classname);
void QObject_deleteLater(QObject* self);
void QObject_timerEvent(QObject* self, QTimerEvent* event);
void QObject_childEvent(QObject* self, QChildEvent* event);
void QObject_customEvent(QObject* self, QEvent* event);
void QObject_connectNotify(QObject* self, QMetaMethod* signal);
void QObject_disconnectNotify(QObject* self, QMetaMethod* signal);
struct miqt_string QObject_tr2(const char* s, const char* c);
struct miqt_string QObject_tr3(const char* s, const char* c, int n);
struct miqt_string QObject_trUtf82(const char* s, const char* c);
struct miqt_string QObject_trUtf83(const char* s, const char* c, int n);
int QObject_startTimer2(QObject* self, int interval, int timerType);
QMetaObject__Connection* QObject_connect3(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, int type);
QMetaObject__Connection* QObject_connect4(const QObject* self, QObject* sender, const char* signal, const char* member, int type);
void QObject_destroyedWithQObject(QObject* self, QObject* param1);
void QObject_connect_destroyedWithQObject(QObject* self, intptr_t slot);

bool QObject_override_virtual_event(void* self, intptr_t slot);
bool QObject_virtualbase_event(void* self, QEvent* event);
bool QObject_override_virtual_eventFilter(void* self, intptr_t slot);
bool QObject_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QObject_override_virtual_timerEvent(void* self, intptr_t slot);
void QObject_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QObject_override_virtual_childEvent(void* self, intptr_t slot);
void QObject_virtualbase_childEvent(void* self, QChildEvent* event);
bool QObject_override_virtual_customEvent(void* self, intptr_t slot);
void QObject_virtualbase_customEvent(void* self, QEvent* event);
bool QObject_override_virtual_connectNotify(void* self, intptr_t slot);
void QObject_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QObject_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QObject_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

QObject* QObject_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QObject_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QObject_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QObject_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QObject_connect_objectNameChanged(QObject* self, intptr_t slot);

void QObject_delete(QObject* self);

QObjectUserData* QObjectUserData_new();
void QObjectUserData_delete(QObjectUserData* self);

QSignalBlocker* QSignalBlocker_new(QObject* o);
QSignalBlocker* QSignalBlocker_new2(QObject* o);
void QSignalBlocker_reblock(QSignalBlocker* self);
void QSignalBlocker_unblock(QSignalBlocker* self);

void QSignalBlocker_delete(QSignalBlocker* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
