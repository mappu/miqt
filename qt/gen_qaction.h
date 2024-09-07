#ifndef GEN_QACTION_H
#define GEN_QACTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionGroup;
class QFont;
class QGraphicsWidget;
class QIcon;
class QKeySequence;
class QMenu;
class QMetaObject;
class QObject;
class QVariant;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QFont QFont;
typedef struct QGraphicsWidget QGraphicsWidget;
typedef struct QIcon QIcon;
typedef struct QKeySequence QKeySequence;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QAction* QAction_new();
QAction* QAction_new2(const char* text, size_t text_Strlen);
QAction* QAction_new3(QIcon* icon, const char* text, size_t text_Strlen);
QAction* QAction_new4(QObject* parent);
QAction* QAction_new5(const char* text, size_t text_Strlen, QObject* parent);
QAction* QAction_new6(QIcon* icon, const char* text, size_t text_Strlen, QObject* parent);
QMetaObject* QAction_MetaObject(QAction* self);
void QAction_Tr(const char* s, char** _out, int* _out_Strlen);
void QAction_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QAction_SetActionGroup(QAction* self, QActionGroup* group);
QActionGroup* QAction_ActionGroup(QAction* self);
void QAction_SetIcon(QAction* self, QIcon* icon);
QIcon* QAction_Icon(QAction* self);
void QAction_SetText(QAction* self, const char* text, size_t text_Strlen);
void QAction_Text(QAction* self, char** _out, int* _out_Strlen);
void QAction_SetIconText(QAction* self, const char* text, size_t text_Strlen);
void QAction_IconText(QAction* self, char** _out, int* _out_Strlen);
void QAction_SetToolTip(QAction* self, const char* tip, size_t tip_Strlen);
void QAction_ToolTip(QAction* self, char** _out, int* _out_Strlen);
void QAction_SetStatusTip(QAction* self, const char* statusTip, size_t statusTip_Strlen);
void QAction_StatusTip(QAction* self, char** _out, int* _out_Strlen);
void QAction_SetWhatsThis(QAction* self, const char* what, size_t what_Strlen);
void QAction_WhatsThis(QAction* self, char** _out, int* _out_Strlen);
void QAction_SetPriority(QAction* self, uintptr_t priority);
uintptr_t QAction_Priority(QAction* self);
QMenu* QAction_Menu(QAction* self);
void QAction_SetMenu(QAction* self, QMenu* menu);
void QAction_SetSeparator(QAction* self, bool b);
bool QAction_IsSeparator(QAction* self);
void QAction_SetShortcut(QAction* self, QKeySequence* shortcut);
QKeySequence* QAction_Shortcut(QAction* self);
void QAction_SetShortcuts(QAction* self, QKeySequence** shortcuts, size_t shortcuts_len);
void QAction_SetShortcutsWithShortcuts(QAction* self, uintptr_t shortcuts);
void QAction_Shortcuts(QAction* self, QKeySequence*** _out, size_t* _out_len);
void QAction_SetShortcutContext(QAction* self, uintptr_t context);
uintptr_t QAction_ShortcutContext(QAction* self);
void QAction_SetAutoRepeat(QAction* self, bool autoRepeat);
bool QAction_AutoRepeat(QAction* self);
void QAction_SetFont(QAction* self, QFont* font);
QFont* QAction_Font(QAction* self);
void QAction_SetCheckable(QAction* self, bool checkable);
bool QAction_IsCheckable(QAction* self);
QVariant* QAction_Data(QAction* self);
void QAction_SetData(QAction* self, QVariant* varVal);
bool QAction_IsChecked(QAction* self);
bool QAction_IsEnabled(QAction* self);
bool QAction_IsVisible(QAction* self);
void QAction_Activate(QAction* self, uintptr_t event);
bool QAction_ShowStatusText(QAction* self);
void QAction_SetMenuRole(QAction* self, uintptr_t menuRole);
uintptr_t QAction_MenuRole(QAction* self);
void QAction_SetIconVisibleInMenu(QAction* self, bool visible);
bool QAction_IsIconVisibleInMenu(QAction* self);
void QAction_SetShortcutVisibleInContextMenu(QAction* self, bool show);
bool QAction_IsShortcutVisibleInContextMenu(QAction* self);
QWidget* QAction_ParentWidget(QAction* self);
void QAction_AssociatedWidgets(QAction* self, QWidget*** _out, size_t* _out_len);
void QAction_AssociatedGraphicsWidgets(QAction* self, QGraphicsWidget*** _out, size_t* _out_len);
void QAction_Trigger(QAction* self);
void QAction_Hover(QAction* self);
void QAction_SetChecked(QAction* self, bool checked);
void QAction_Toggle(QAction* self);
void QAction_SetEnabled(QAction* self, bool enabled);
void QAction_SetDisabled(QAction* self, bool b);
void QAction_SetVisible(QAction* self, bool visible);
void QAction_Changed(QAction* self);
void QAction_connect_Changed(QAction* self, void* slot);
void QAction_Triggered(QAction* self);
void QAction_connect_Triggered(QAction* self, void* slot);
void QAction_Hovered(QAction* self);
void QAction_connect_Hovered(QAction* self, void* slot);
void QAction_Toggled(QAction* self, bool param1);
void QAction_connect_Toggled(QAction* self, void* slot);
void QAction_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAction_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QAction_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QAction_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
bool QAction_ShowStatusText1(QAction* self, QWidget* widget);
void QAction_Triggered1(QAction* self, bool checked);
void QAction_connect_Triggered1(QAction* self, void* slot);
void QAction_Delete(QAction* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
