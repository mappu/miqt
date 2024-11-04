#ifndef GEN_QOBJECT_H
#define GEN_QOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAnyStringView;
class QBindingStorage;
class QByteArray;
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
class QSignalBlocker;
class QThread;
class QVariant;
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QByteArray QByteArray;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QObjectData QObjectData;
typedef struct QSignalBlocker QSignalBlocker;
typedef struct QThread QThread;
typedef struct QVariant QVariant;
#endif

QMetaObject* QObjectData_DynamicMetaObject(const QObjectData* self);
void QObjectData_Delete(QObjectData* self);

QObject* QObject_new();
QObject* QObject_new2(QObject* parent);
QMetaObject* QObject_MetaObject(const QObject* self);
void* QObject_Metacast(QObject* self, const char* param1);
struct miqt_string QObject_Tr(const char* s);
bool QObject_Event(QObject* self, QEvent* event);
bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event);
struct miqt_string QObject_ObjectName(const QObject* self);
void QObject_SetObjectName(QObject* self, QAnyStringView* name);
bool QObject_IsWidgetType(const QObject* self);
bool QObject_IsWindowType(const QObject* self);
bool QObject_IsQuickItemType(const QObject* self);
bool QObject_SignalsBlocked(const QObject* self);
bool QObject_BlockSignals(QObject* self, bool b);
QThread* QObject_Thread(const QObject* self);
void QObject_MoveToThread(QObject* self, QThread* thread);
int QObject_StartTimer(QObject* self, int interval);
void QObject_KillTimer(QObject* self, int id);
struct miqt_array QObject_Children(const QObject* self);
void QObject_SetParent(QObject* self, QObject* parent);
void QObject_InstallEventFilter(QObject* self, QObject* filterObj);
void QObject_RemoveEventFilter(QObject* self, QObject* obj);
QMetaObject__Connection* QObject_Connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method);
QMetaObject__Connection* QObject_Connect2(const QObject* self, QObject* sender, const char* signal, const char* member);
bool QObject_Disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member);
bool QObject_DisconnectWithQMetaObjectConnection(QMetaObject__Connection* param1);
void QObject_DumpObjectTree(const QObject* self);
void QObject_DumpObjectInfo(const QObject* self);
bool QObject_SetProperty(QObject* self, const char* name, QVariant* value);
QVariant* QObject_Property(const QObject* self, const char* name);
struct miqt_array QObject_DynamicPropertyNames(const QObject* self);
QBindingStorage* QObject_BindingStorage(QObject* self);
QBindingStorage* QObject_BindingStorage2(const QObject* self);
void QObject_Destroyed(QObject* self);
void QObject_connect_Destroyed(QObject* self, intptr_t slot);
QObject* QObject_Parent(const QObject* self);
bool QObject_Inherits(const QObject* self, const char* classname);
void QObject_DeleteLater(QObject* self);
struct miqt_string QObject_Tr2(const char* s, const char* c);
struct miqt_string QObject_Tr3(const char* s, const char* c, int n);
int QObject_StartTimer2(QObject* self, int interval, int timerType);
QMetaObject__Connection* QObject_Connect5(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, int typeVal);
QMetaObject__Connection* QObject_Connect4(const QObject* self, QObject* sender, const char* signal, const char* member, int typeVal);
void QObject_Destroyed1(QObject* self, QObject* param1);
void QObject_connect_Destroyed1(QObject* self, intptr_t slot);
void QObject_Delete(QObject* self);

QSignalBlocker* QSignalBlocker_new(QObject* o);
QSignalBlocker* QSignalBlocker_new2(QObject* o);
void QSignalBlocker_Reblock(QSignalBlocker* self);
void QSignalBlocker_Unblock(QSignalBlocker* self);
void QSignalBlocker_Delete(QSignalBlocker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
