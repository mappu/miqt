#pragma once
#ifndef MIQT_QT6_GEN_QACTIONGROUP_H
#define MIQT_QT6_GEN_QACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionGroup;
class QChildEvent;
class QEvent;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
#endif

QActionGroup* QActionGroup_new(QObject* parent);
void QActionGroup_virtbase(QActionGroup* src, QObject** outptr_QObject);
QMetaObject* QActionGroup_MetaObject(const QActionGroup* self);
void* QActionGroup_Metacast(QActionGroup* self, const char* param1);
struct miqt_string QActionGroup_Tr(const char* s);
QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a);
QAction* QActionGroup_AddActionWithText(QActionGroup* self, struct miqt_string text);
QAction* QActionGroup_AddAction2(QActionGroup* self, QIcon* icon, struct miqt_string text);
void QActionGroup_RemoveAction(QActionGroup* self, QAction* a);
struct miqt_array /* of QAction* */  QActionGroup_Actions(const QActionGroup* self);
QAction* QActionGroup_CheckedAction(const QActionGroup* self);
bool QActionGroup_IsExclusive(const QActionGroup* self);
bool QActionGroup_IsEnabled(const QActionGroup* self);
bool QActionGroup_IsVisible(const QActionGroup* self);
int QActionGroup_ExclusionPolicy(const QActionGroup* self);
void QActionGroup_SetEnabled(QActionGroup* self, bool enabled);
void QActionGroup_SetDisabled(QActionGroup* self, bool b);
void QActionGroup_SetVisible(QActionGroup* self, bool visible);
void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive);
void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy);
void QActionGroup_Triggered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Triggered(QActionGroup* self, intptr_t slot);
void QActionGroup_Hovered(QActionGroup* self, QAction* param1);
void QActionGroup_connect_Hovered(QActionGroup* self, intptr_t slot);
struct miqt_string QActionGroup_Tr2(const char* s, const char* c);
struct miqt_string QActionGroup_Tr3(const char* s, const char* c, int n);
bool QActionGroup_override_virtual_Event(void* self, intptr_t slot);
bool QActionGroup_virtualbase_Event(void* self, QEvent* event);
bool QActionGroup_override_virtual_EventFilter(void* self, intptr_t slot);
bool QActionGroup_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QActionGroup_override_virtual_TimerEvent(void* self, intptr_t slot);
void QActionGroup_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QActionGroup_override_virtual_ChildEvent(void* self, intptr_t slot);
void QActionGroup_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QActionGroup_override_virtual_CustomEvent(void* self, intptr_t slot);
void QActionGroup_virtualbase_CustomEvent(void* self, QEvent* event);
bool QActionGroup_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QActionGroup_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QActionGroup_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QActionGroup_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QActionGroup_Delete(QActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
