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
QMetaObject* QSystemTrayIcon_metaObject(const QSystemTrayIcon* self);
void* QSystemTrayIcon_metacast(QSystemTrayIcon* self, const char* param1);
struct miqt_string QSystemTrayIcon_tr(const char* s);
void QSystemTrayIcon_setContextMenu(QSystemTrayIcon* self, QMenu* menu);
QMenu* QSystemTrayIcon_contextMenu(const QSystemTrayIcon* self);
QIcon* QSystemTrayIcon_icon(const QSystemTrayIcon* self);
void QSystemTrayIcon_setIcon(QSystemTrayIcon* self, QIcon* icon);
struct miqt_string QSystemTrayIcon_toolTip(const QSystemTrayIcon* self);
void QSystemTrayIcon_setToolTip(QSystemTrayIcon* self, struct miqt_string tip);
bool QSystemTrayIcon_isSystemTrayAvailable();
bool QSystemTrayIcon_supportsMessages();
QRect* QSystemTrayIcon_geometry(const QSystemTrayIcon* self);
bool QSystemTrayIcon_isVisible(const QSystemTrayIcon* self);
void QSystemTrayIcon_setVisible(QSystemTrayIcon* self, bool visible);
void QSystemTrayIcon_show(QSystemTrayIcon* self);
void QSystemTrayIcon_hide(QSystemTrayIcon* self);
void QSystemTrayIcon_showMessage(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, QIcon* icon);
void QSystemTrayIcon_showMessage2(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg);
void QSystemTrayIcon_activated(QSystemTrayIcon* self, int reason);
void QSystemTrayIcon_connect_activated(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_messageClicked(QSystemTrayIcon* self);
void QSystemTrayIcon_connect_messageClicked(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_event(QSystemTrayIcon* self, QEvent* event);
struct miqt_string QSystemTrayIcon_tr2(const char* s, const char* c);
struct miqt_string QSystemTrayIcon_tr3(const char* s, const char* c, int n);
void QSystemTrayIcon_showMessage3(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, QIcon* icon, int msecs);
void QSystemTrayIcon_showMessage4(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon);
void QSystemTrayIcon_showMessage5(QSystemTrayIcon* self, struct miqt_string title, struct miqt_string msg, int icon, int msecs);
bool QSystemTrayIcon_override_virtual_event(void* self, intptr_t slot);
bool QSystemTrayIcon_virtualbase_event(void* self, QEvent* event);
bool QSystemTrayIcon_override_virtual_eventFilter(void* self, intptr_t slot);
bool QSystemTrayIcon_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QSystemTrayIcon_override_virtual_timerEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QSystemTrayIcon_override_virtual_childEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_childEvent(void* self, QChildEvent* event);
bool QSystemTrayIcon_override_virtual_customEvent(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_customEvent(void* self, QEvent* event);
bool QSystemTrayIcon_override_virtual_connectNotify(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QSystemTrayIcon_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QSystemTrayIcon_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QSystemTrayIcon_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QSystemTrayIcon_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QSystemTrayIcon_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QSystemTrayIcon_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QSystemTrayIcon_delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
