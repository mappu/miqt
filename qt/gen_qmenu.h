#ifndef GEN_QMENU_H
#define GEN_QMENU_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QIcon;
class QMenu;
class QMetaObject;
class QPoint;
class QRect;
class QSize;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QMenu* QMenu_new();
QMenu* QMenu_new2(const char* title, size_t title_Strlen);
QMenu* QMenu_new3(QWidget* parent);
QMenu* QMenu_new4(const char* title, size_t title_Strlen, QWidget* parent);
QMetaObject* QMenu_MetaObject(QMenu* self);
void QMenu_Tr(const char* s, char** _out, int* _out_Strlen);
void QMenu_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QAction* QMenu_AddAction(QMenu* self, const char* text, size_t text_Strlen);
QAction* QMenu_AddAction2(QMenu* self, QIcon* icon, const char* text, size_t text_Strlen);
QAction* QMenu_AddMenu(QMenu* self, QMenu* menu);
QMenu* QMenu_AddMenuWithTitle(QMenu* self, const char* title, size_t title_Strlen);
QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, const char* title, size_t title_Strlen);
QAction* QMenu_AddSeparator(QMenu* self);
QAction* QMenu_AddSection(QMenu* self, const char* text, size_t text_Strlen);
QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, const char* text, size_t text_Strlen);
QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu);
QAction* QMenu_InsertSeparator(QMenu* self, QAction* before);
QAction* QMenu_InsertSection(QMenu* self, QAction* before, const char* text, size_t text_Strlen);
QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, const char* text, size_t text_Strlen);
bool QMenu_IsEmpty(QMenu* self);
void QMenu_Clear(QMenu* self);
void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled);
bool QMenu_IsTearOffEnabled(QMenu* self);
bool QMenu_IsTearOffMenuVisible(QMenu* self);
void QMenu_ShowTearOffMenu(QMenu* self);
void QMenu_ShowTearOffMenuWithPos(QMenu* self, QPoint* pos);
void QMenu_HideTearOffMenu(QMenu* self);
void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction);
QAction* QMenu_DefaultAction(QMenu* self);
void QMenu_SetActiveAction(QMenu* self, QAction* act);
QAction* QMenu_ActiveAction(QMenu* self);
void QMenu_Popup(QMenu* self, QPoint* pos);
QAction* QMenu_Exec(QMenu* self);
QAction* QMenu_ExecWithPos(QMenu* self, QPoint* pos);
QAction* QMenu_Exec2(QAction** actions, size_t actions_len, QPoint* pos);
QSize* QMenu_SizeHint(QMenu* self);
QRect* QMenu_ActionGeometry(QMenu* self, QAction* param1);
QAction* QMenu_ActionAt(QMenu* self, QPoint* param1);
QAction* QMenu_MenuAction(QMenu* self);
void QMenu_Title(QMenu* self, char** _out, int* _out_Strlen);
void QMenu_SetTitle(QMenu* self, const char* title, size_t title_Strlen);
QIcon* QMenu_Icon(QMenu* self);
void QMenu_SetIcon(QMenu* self, QIcon* icon);
void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget);
bool QMenu_SeparatorsCollapsible(QMenu* self);
void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse);
bool QMenu_ToolTipsVisible(QMenu* self);
void QMenu_SetToolTipsVisible(QMenu* self, bool visible);
void QMenu_AboutToShow(QMenu* self);
void QMenu_connect_AboutToShow(QMenu* self, void* slot);
void QMenu_AboutToHide(QMenu* self);
void QMenu_connect_AboutToHide(QMenu* self, void* slot);
void QMenu_Triggered(QMenu* self, QAction* action);
void QMenu_connect_Triggered(QMenu* self, void* slot);
void QMenu_Hovered(QMenu* self, QAction* action);
void QMenu_connect_Hovered(QMenu* self, void* slot);
void QMenu_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMenu_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMenu_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMenu_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec3(QAction** actions, size_t actions_len, QPoint* pos, QAction* at);
QAction* QMenu_Exec4(QAction** actions, size_t actions_len, QPoint* pos, QAction* at, QWidget* parent);
void QMenu_Delete(QMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
