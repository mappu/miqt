#ifndef GEN_QACTION_H
#define GEN_QACTION_H

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
class QFont;
class QIcon;
class QKeySequence;
class QMetaObject;
class QObject;
class QVariant;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QKeySequence QKeySequence;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
#endif

QAction* QAction_new();
QAction* QAction_new2(struct miqt_string text);
QAction* QAction_new3(QIcon* icon, struct miqt_string text);
QAction* QAction_new4(QObject* parent);
QAction* QAction_new5(struct miqt_string text, QObject* parent);
QAction* QAction_new6(QIcon* icon, struct miqt_string text, QObject* parent);
QMetaObject* QAction_MetaObject(const QAction* self);
void* QAction_Metacast(QAction* self, const char* param1);
struct miqt_string QAction_Tr(const char* s);
struct miqt_array QAction_AssociatedObjects(const QAction* self);
void QAction_SetActionGroup(QAction* self, QActionGroup* group);
QActionGroup* QAction_ActionGroup(const QAction* self);
void QAction_SetIcon(QAction* self, QIcon* icon);
QIcon* QAction_Icon(const QAction* self);
void QAction_SetText(QAction* self, struct miqt_string text);
struct miqt_string QAction_Text(const QAction* self);
void QAction_SetIconText(QAction* self, struct miqt_string text);
struct miqt_string QAction_IconText(const QAction* self);
void QAction_SetToolTip(QAction* self, struct miqt_string tip);
struct miqt_string QAction_ToolTip(const QAction* self);
void QAction_SetStatusTip(QAction* self, struct miqt_string statusTip);
struct miqt_string QAction_StatusTip(const QAction* self);
void QAction_SetWhatsThis(QAction* self, struct miqt_string what);
struct miqt_string QAction_WhatsThis(const QAction* self);
void QAction_SetPriority(QAction* self, int priority);
int QAction_Priority(const QAction* self);
void QAction_SetSeparator(QAction* self, bool b);
bool QAction_IsSeparator(const QAction* self);
void QAction_SetShortcut(QAction* self, QKeySequence* shortcut);
QKeySequence* QAction_Shortcut(const QAction* self);
void QAction_SetShortcuts(QAction* self, struct miqt_array /* of QKeySequence* */ shortcuts);
void QAction_SetShortcutsWithShortcuts(QAction* self, int shortcuts);
struct miqt_array QAction_Shortcuts(const QAction* self);
void QAction_SetShortcutContext(QAction* self, int context);
int QAction_ShortcutContext(const QAction* self);
void QAction_SetAutoRepeat(QAction* self, bool autoRepeat);
bool QAction_AutoRepeat(const QAction* self);
void QAction_SetFont(QAction* self, QFont* font);
QFont* QAction_Font(const QAction* self);
void QAction_SetCheckable(QAction* self, bool checkable);
bool QAction_IsCheckable(const QAction* self);
QVariant* QAction_Data(const QAction* self);
void QAction_SetData(QAction* self, QVariant* varVal);
bool QAction_IsChecked(const QAction* self);
bool QAction_IsEnabled(const QAction* self);
bool QAction_IsVisible(const QAction* self);
void QAction_Activate(QAction* self, int event);
void QAction_SetMenuRole(QAction* self, int menuRole);
int QAction_MenuRole(const QAction* self);
void QAction_SetIconVisibleInMenu(QAction* self, bool visible);
bool QAction_IsIconVisibleInMenu(const QAction* self);
void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show);
bool QAction_IsShortcutVisibleInContextMenu(const QAction* self);
bool QAction_ShowStatusText(QAction* self);
void QAction_Trigger(QAction* self);
void QAction_Hover(QAction* self);
void QAction_SetChecked(QAction* self, bool checked);
void QAction_Toggle(QAction* self);
void QAction_SetEnabled(QAction* self, bool enabled);
void QAction_ResetEnabled(QAction* self);
void QAction_SetDisabled(QAction* self, bool b);
void QAction_SetVisible(QAction* self, bool visible);
void QAction_Changed(QAction* self);
void QAction_connect_Changed(QAction* self, intptr_t slot);
void QAction_EnabledChanged(QAction* self, bool enabled);
void QAction_connect_EnabledChanged(QAction* self, intptr_t slot);
void QAction_CheckableChanged(QAction* self, bool checkable);
void QAction_connect_CheckableChanged(QAction* self, intptr_t slot);
void QAction_VisibleChanged(QAction* self);
void QAction_connect_VisibleChanged(QAction* self, intptr_t slot);
void QAction_Triggered(QAction* self);
void QAction_connect_Triggered(QAction* self, intptr_t slot);
void QAction_Hovered(QAction* self);
void QAction_connect_Hovered(QAction* self, intptr_t slot);
void QAction_Toggled(QAction* self, bool param1);
void QAction_connect_Toggled(QAction* self, intptr_t slot);
struct miqt_string QAction_Tr2(const char* s, const char* c);
struct miqt_string QAction_Tr3(const char* s, const char* c, int n);
bool QAction_ShowStatusText1(QAction* self, QObject* object);
void QAction_Triggered1(QAction* self, bool checked);
void QAction_connect_Triggered1(QAction* self, intptr_t slot);
void QAction_Delete(QAction* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
