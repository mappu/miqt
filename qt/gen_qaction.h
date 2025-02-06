#pragma once
#ifndef MIQT_QT_GEN_QACTION_H
#define MIQT_QT_GEN_QACTION_H

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
class QFont;
class QGraphicsWidget;
class QIcon;
class QKeySequence;
class QMenu;
class QMetaMethod;
class QMetaObject;
class QObject;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QIcon QIcon;
typedef struct QKeySequence QKeySequence;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAction* QAction_new();
QAction* QAction_new2(struct miqt_string text);
QAction* QAction_new3(QIcon* icon, struct miqt_string text);
QAction* QAction_new4(QObject* parent);
QAction* QAction_new5(struct miqt_string text, QObject* parent);
QAction* QAction_new6(QIcon* icon, struct miqt_string text, QObject* parent);
void QAction_virtbase(QAction* src, QObject** outptr_QObject);
QMetaObject* QAction_metaObject(const QAction* self);
void* QAction_metacast(QAction* self, const char* param1);
struct miqt_string QAction_tr(const char* s);
struct miqt_string QAction_trUtf8(const char* s);
void QAction_setActionGroup(QAction* self, QActionGroup* group);
QActionGroup* QAction_actionGroup(const QAction* self);
void QAction_setIcon(QAction* self, QIcon* icon);
QIcon* QAction_icon(const QAction* self);
void QAction_setText(QAction* self, struct miqt_string text);
struct miqt_string QAction_text(const QAction* self);
void QAction_setIconText(QAction* self, struct miqt_string text);
struct miqt_string QAction_iconText(const QAction* self);
void QAction_setToolTip(QAction* self, struct miqt_string tip);
struct miqt_string QAction_toolTip(const QAction* self);
void QAction_setStatusTip(QAction* self, struct miqt_string statusTip);
struct miqt_string QAction_statusTip(const QAction* self);
void QAction_setWhatsThis(QAction* self, struct miqt_string what);
struct miqt_string QAction_whatsThis(const QAction* self);
void QAction_setPriority(QAction* self, int priority);
int QAction_priority(const QAction* self);
QMenu* QAction_menu(const QAction* self);
void QAction_setMenu(QAction* self, QMenu* menu);
void QAction_setSeparator(QAction* self, bool b);
bool QAction_isSeparator(const QAction* self);
void QAction_setShortcut(QAction* self, QKeySequence* shortcut);
QKeySequence* QAction_shortcut(const QAction* self);
void QAction_setShortcuts(QAction* self, struct miqt_array /* of QKeySequence* */  shortcuts);
void QAction_setShortcutsWithShortcuts(QAction* self, int shortcuts);
struct miqt_array /* of QKeySequence* */  QAction_shortcuts(const QAction* self);
void QAction_setShortcutContext(QAction* self, int context);
int QAction_shortcutContext(const QAction* self);
void QAction_setAutoRepeat(QAction* self, bool autoRepeat);
bool QAction_autoRepeat(const QAction* self);
void QAction_setFont(QAction* self, QFont* font);
QFont* QAction_font(const QAction* self);
void QAction_setCheckable(QAction* self, bool checkable);
bool QAction_isCheckable(const QAction* self);
QVariant* QAction_data(const QAction* self);
void QAction_setData(QAction* self, QVariant* var);
bool QAction_isChecked(const QAction* self);
bool QAction_isEnabled(const QAction* self);
bool QAction_isVisible(const QAction* self);
void QAction_activate(QAction* self, int event);
bool QAction_showStatusText(QAction* self);
void QAction_setMenuRole(QAction* self, int menuRole);
int QAction_menuRole(const QAction* self);
void QAction_setIconVisibleInMenu(QAction* self, bool visible);
bool QAction_isIconVisibleInMenu(const QAction* self);
void QAction_setShortcutVisibleInContextMenu(QAction* self, bool show);
bool QAction_isShortcutVisibleInContextMenu(const QAction* self);
QWidget* QAction_parentWidget(const QAction* self);
struct miqt_array /* of QWidget* */  QAction_associatedWidgets(const QAction* self);
struct miqt_array /* of QGraphicsWidget* */  QAction_associatedGraphicsWidgets(const QAction* self);
bool QAction_event(QAction* self, QEvent* param1);
void QAction_trigger(QAction* self);
void QAction_hover(QAction* self);
void QAction_setChecked(QAction* self, bool checked);
void QAction_toggle(QAction* self);
void QAction_setEnabled(QAction* self, bool enabled);
void QAction_setDisabled(QAction* self, bool b);
void QAction_setVisible(QAction* self, bool visible);
void QAction_changed(QAction* self);
void QAction_connect_changed(QAction* self, intptr_t slot);
void QAction_triggered(QAction* self);
void QAction_connect_triggered(QAction* self, intptr_t slot);
void QAction_hovered(QAction* self);
void QAction_connect_hovered(QAction* self, intptr_t slot);
void QAction_toggled(QAction* self, bool param1);
void QAction_connect_toggled(QAction* self, intptr_t slot);
struct miqt_string QAction_tr2(const char* s, const char* c);
struct miqt_string QAction_tr3(const char* s, const char* c, int n);
struct miqt_string QAction_trUtf82(const char* s, const char* c);
struct miqt_string QAction_trUtf83(const char* s, const char* c, int n);
bool QAction_showStatusText1(QAction* self, QWidget* widget);
void QAction_triggered1(QAction* self, bool checked);
void QAction_connect_triggered1(QAction* self, intptr_t slot);
bool QAction_override_virtual_event(void* self, intptr_t slot);
bool QAction_virtualbase_event(void* self, QEvent* param1);
bool QAction_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAction_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAction_override_virtual_timerEvent(void* self, intptr_t slot);
void QAction_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAction_override_virtual_childEvent(void* self, intptr_t slot);
void QAction_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAction_override_virtual_customEvent(void* self, intptr_t slot);
void QAction_virtualbase_customEvent(void* self, QEvent* event);
bool QAction_override_virtual_connectNotify(void* self, intptr_t slot);
void QAction_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAction_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAction_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
QObject* QAction_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAction_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAction_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAction_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QAction_delete(QAction* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
