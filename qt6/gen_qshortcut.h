#pragma once
#ifndef MIQT_QT6_GEN_QSHORTCUT_H
#define MIQT_QT6_GEN_QSHORTCUT_H

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
class QKeySequence;
class QMetaMethod;
class QMetaObject;
class QObject;
class QShortcut;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QShortcut QShortcut;
typedef struct QTimerEvent QTimerEvent;
#endif

QShortcut* QShortcut_new(QObject* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent);
QShortcut* QShortcut_new3(int key, QObject* parent);
QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member);
QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QShortcut* QShortcut_new7(int key, QObject* parent, const char* member);
QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context);
void QShortcut_virtbase(QShortcut* src, QObject** outptr_QObject);
QMetaObject* QShortcut_MetaObject(const QShortcut* self);
void* QShortcut_Metacast(QShortcut* self, const char* param1);
struct miqt_string QShortcut_Tr(const char* s);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(const QShortcut* self);
void QShortcut_SetKeys(QShortcut* self, int key);
void QShortcut_SetKeysWithKeys(QShortcut* self, struct miqt_array /* of QKeySequence* */  keys);
struct miqt_array /* of QKeySequence* */  QShortcut_Keys(const QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(const QShortcut* self);
void QShortcut_SetContext(QShortcut* self, int context);
int QShortcut_Context(const QShortcut* self);
void QShortcut_SetAutoRepeat(QShortcut* self, bool on);
bool QShortcut_AutoRepeat(const QShortcut* self);
int QShortcut_Id(const QShortcut* self);
void QShortcut_SetWhatsThis(QShortcut* self, struct miqt_string text);
struct miqt_string QShortcut_WhatsThis(const QShortcut* self);
void QShortcut_Activated(QShortcut* self);
void QShortcut_connect_Activated(QShortcut* self, intptr_t slot);
void QShortcut_ActivatedAmbiguously(QShortcut* self);
void QShortcut_connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot);
bool QShortcut_Event(QShortcut* self, QEvent* e);
struct miqt_string QShortcut_Tr2(const char* s, const char* c);
struct miqt_string QShortcut_Tr3(const char* s, const char* c, int n);
void QShortcut_override_virtual_Event(void* self, intptr_t slot);
bool QShortcut_virtualbase_Event(void* self, QEvent* e);
void QShortcut_override_virtual_EventFilter(void* self, intptr_t slot);
bool QShortcut_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QShortcut_override_virtual_TimerEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QShortcut_override_virtual_ChildEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QShortcut_override_virtual_CustomEvent(void* self, intptr_t slot);
void QShortcut_virtualbase_CustomEvent(void* self, QEvent* event);
void QShortcut_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QShortcut_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QShortcut_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QShortcut_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
