#pragma once
#ifndef MIQT_QT6_GEN_QSYSTEMTRAYICON_H
#define MIQT_QT6_GEN_QSYSTEMTRAYICON_H

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
class QIcon;
class QMenu;
class QMetaMethod;
class QMetaObject;
class QObject;
class QRect;
class QSystemTrayIcon;
class QTimerEvent;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSystemTrayIcon QSystemTrayIcon;
typedef struct QTimerEvent QTimerEvent;
#endif

QSystemTrayIcon* QSystemTrayIcon_new();
QSystemTrayIcon* QSystemTrayIcon_new2(QIcon* icon);
QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent);
QSystemTrayIcon* QSystemTrayIcon_new4(QIcon* icon, QObject* parent);
void QSystemTrayIcon_virtbase(QSystemTrayIcon* src, QObject** outptr_QObject);
QMetaObject* QSystemTrayIcon_MetaObject(const QSystemTrayIcon* self);
void* QSystemTrayIcon_Metacast(QSystemTrayIcon* self, const char* param1);
struct miqt_string QSystemTrayIcon_Tr(const char* s);
void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu);
QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self);
QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, QIcon* icon);
struct miqt_string QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, struct miqt_string tip);
bool QSystemTrayIcon_IsSystemTrayAvailable();
bool QSystemTrayIcon_SupportsMessages();
QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self);
bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible);
void QSystemTrayIcon_Show(QSystemTrayIcon* self);
void QSystemTrayIcon_Hide(QSystemTrayIcon* self);
void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, QIcon* icon);
void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg);
void QSystemTrayIcon_Activated(QSystemTrayIcon* self, int reason);
void QSystemTrayIcon_connect_Activated(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self);
void QSystemTrayIcon_connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event);
struct miqt_string QSystemTrayIcon_Tr2(const char* s, const char* c);
struct miqt_string QSystemTrayIcon_Tr3(const char* s, const char* c, int n);
void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, QIcon* icon, int msecs);
void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon);
void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon, int msecs);
void QSystemTrayIcon_override_virtual_Event(void* self, intptr_t slot);
bool QSystemTrayIcon_virtualbase_Event(void* self, QEvent* event);
void QSystemTrayIcon_override_virtual_EventFilter(void* self, intptr_t slot);
bool QSystemTrayIcon_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QSystemTrayIcon_override_virtual_TimerEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QSystemTrayIcon_override_virtual_ChildEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QSystemTrayIcon_override_virtual_CustomEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_CustomEvent(void* self, QEvent* event);
void QSystemTrayIcon_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QSystemTrayIcon_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QSystemTrayIcon_Delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
