#ifndef GEN_QOBJECT_H
#define GEN_QOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
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
class QObjectUserData;
class QSignalBlocker;
class QThread;
class QVariant;
#else
typedef struct QByteArray QByteArray;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QObjectData QObjectData;
typedef struct QObjectUserData QObjectUserData;
typedef struct QSignalBlocker QSignalBlocker;
typedef struct QThread QThread;
typedef struct QVariant QVariant;
#endif

QMetaObject* QObjectData_DynamicMetaObject(QObjectData* self);
void QObjectData_Delete(QObjectData* self);

QObject* QObject_new();
QObject* QObject_new2(QObject* parent);
QMetaObject* QObject_MetaObject(QObject* self);
void QObject_Tr(const char* s, char** _out, int* _out_Strlen);
void QObject_TrUtf8(const char* s, char** _out, int* _out_Strlen);
bool QObject_Event(QObject* self, QEvent* event);
bool QObject_EventFilter(QObject* self, QObject* watched, QEvent* event);
void QObject_ObjectName(QObject* self, char** _out, int* _out_Strlen);
void QObject_SetObjectName(QObject* self, const char* name, size_t name_Strlen);
bool QObject_IsWidgetType(QObject* self);
bool QObject_IsWindowType(QObject* self);
bool QObject_SignalsBlocked(QObject* self);
bool QObject_BlockSignals(QObject* self, bool b);
QThread* QObject_Thread(QObject* self);
void QObject_MoveToThread(QObject* self, QThread* thread);
int QObject_StartTimer(QObject* self, int interval);
void QObject_KillTimer(QObject* self, int id);
void QObject_Children(QObject* self, QObject*** _out, size_t* _out_len);
void QObject_SetParent(QObject* self, QObject* parent);
void QObject_InstallEventFilter(QObject* self, QObject* filterObj);
void QObject_RemoveEventFilter(QObject* self, QObject* obj);
QMetaObject__Connection* QObject_Connect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method);
QMetaObject__Connection* QObject_Connect2(QObject* self, QObject* sender, const char* signal, const char* member);
bool QObject_Disconnect(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member);
bool QObject_DisconnectWithQMetaObjectConnection(QMetaObject__Connection* param1);
void QObject_DumpObjectTree(QObject* self);
void QObject_DumpObjectInfo(QObject* self);
void QObject_DumpObjectTree2(QObject* self);
void QObject_DumpObjectInfo2(QObject* self);
bool QObject_SetProperty(QObject* self, const char* name, QVariant* value);
QVariant* QObject_Property(QObject* self, const char* name);
void QObject_DynamicPropertyNames(QObject* self, QByteArray*** _out, size_t* _out_len);
unsigned int QObject_RegisterUserData();
void QObject_SetUserData(QObject* self, unsigned int id, QObjectUserData* data);
QObjectUserData* QObject_UserData(QObject* self, unsigned int id);
void QObject_Destroyed(QObject* self);
QObject* QObject_Parent(QObject* self);
bool QObject_Inherits(QObject* self, const char* classname);
void QObject_DeleteLater(QObject* self);
void QObject_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QObject_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QObject_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QObject_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
int QObject_StartTimer2(QObject* self, int interval, uintptr_t timerType);
QMetaObject__Connection* QObject_Connect5(QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, uintptr_t typeVal);
QMetaObject__Connection* QObject_Connect4(QObject* self, QObject* sender, const char* signal, const char* member, uintptr_t typeVal);
void QObject_Destroyed1(QObject* self, QObject* param1);
void QObject_connect_Destroyed1(QObject* self, void* slot);
void QObject_Delete(QObject* self);

QObjectUserData* QObjectUserData_new();
void QObjectUserData_Delete(QObjectUserData* self);

QSignalBlocker* QSignalBlocker_new(QObject* o);
QSignalBlocker* QSignalBlocker_new2(QObject* o);
void QSignalBlocker_Reblock(QSignalBlocker* self);
void QSignalBlocker_Unblock(QSignalBlocker* self);
void QSignalBlocker_Delete(QSignalBlocker* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
