#pragma once
#ifndef MIQT_QT_GEN_QSYSTEMTRAYICON_H
#define MIQT_QT_GEN_QSYSTEMTRAYICON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMenu;
class QMetaObject;
class QObject;
class QRect;
class QSystemTrayIcon;
#else
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSystemTrayIcon QSystemTrayIcon;
#endif

QSystemTrayIcon* QSystemTrayIcon_new();
QSystemTrayIcon* QSystemTrayIcon_new2(QIcon* icon);
QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent);
QSystemTrayIcon* QSystemTrayIcon_new4(QIcon* icon, QObject* parent);
QMetaObject* QSystemTrayIcon_MetaObject(const QSystemTrayIcon* self);
void* QSystemTrayIcon_Metacast(QSystemTrayIcon* self, const char* param1);
struct miqt_string QSystemTrayIcon_Tr(const char* s);
struct miqt_string QSystemTrayIcon_TrUtf8(const char* s);
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
struct miqt_string QSystemTrayIcon_Tr2(const char* s, const char* c);
struct miqt_string QSystemTrayIcon_Tr3(const char* s, const char* c, int n);
struct miqt_string QSystemTrayIcon_TrUtf82(const char* s, const char* c);
struct miqt_string QSystemTrayIcon_TrUtf83(const char* s, const char* c, int n);
void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, QIcon* icon, int msecs);
void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon);
void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon, int msecs);
void QSystemTrayIcon_Delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
