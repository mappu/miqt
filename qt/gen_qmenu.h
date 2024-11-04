#ifndef GEN_QMENU_H
#define GEN_QMENU_H

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

QMenu* QMenu_new(QWidget* parent);
QMenu* QMenu_new2();
QMenu* QMenu_new3(struct miqt_string title);
QMenu* QMenu_new4(struct miqt_string title, QWidget* parent);
QMetaObject* QMenu_MetaObject(const QMenu* self);
void* QMenu_Metacast(QMenu* self, const char* param1);
struct miqt_string QMenu_Tr(const char* s);
struct miqt_string QMenu_TrUtf8(const char* s);
QAction* QMenu_AddAction(QMenu* self, struct miqt_string text);
QAction* QMenu_AddAction2(QMenu* self, QIcon* icon, struct miqt_string text);
QAction* QMenu_AddMenu(QMenu* self, QMenu* menu);
QMenu* QMenu_AddMenuWithTitle(QMenu* self, struct miqt_string title);
QMenu* QMenu_AddMenu2(QMenu* self, QIcon* icon, struct miqt_string title);
QAction* QMenu_AddSeparator(QMenu* self);
QAction* QMenu_AddSection(QMenu* self, struct miqt_string text);
QAction* QMenu_AddSection2(QMenu* self, QIcon* icon, struct miqt_string text);
QAction* QMenu_InsertMenu(QMenu* self, QAction* before, QMenu* menu);
QAction* QMenu_InsertSeparator(QMenu* self, QAction* before);
QAction* QMenu_InsertSection(QMenu* self, QAction* before, struct miqt_string text);
QAction* QMenu_InsertSection2(QMenu* self, QAction* before, QIcon* icon, struct miqt_string text);
bool QMenu_IsEmpty(const QMenu* self);
void QMenu_Clear(QMenu* self);
void QMenu_SetTearOffEnabled(QMenu* self, bool tearOffEnabled);
bool QMenu_IsTearOffEnabled(const QMenu* self);
bool QMenu_IsTearOffMenuVisible(const QMenu* self);
void QMenu_ShowTearOffMenu(QMenu* self);
void QMenu_ShowTearOffMenuWithPos(QMenu* self, QPoint* pos);
void QMenu_HideTearOffMenu(QMenu* self);
void QMenu_SetDefaultAction(QMenu* self, QAction* defaultAction);
QAction* QMenu_DefaultAction(const QMenu* self);
void QMenu_SetActiveAction(QMenu* self, QAction* act);
QAction* QMenu_ActiveAction(const QMenu* self);
void QMenu_Popup(QMenu* self, QPoint* pos);
QAction* QMenu_Exec(QMenu* self);
QAction* QMenu_ExecWithPos(QMenu* self, QPoint* pos);
QAction* QMenu_Exec2(struct miqt_array /* of QAction* */ actions, QPoint* pos);
QSize* QMenu_SizeHint(const QMenu* self);
QRect* QMenu_ActionGeometry(const QMenu* self, QAction* param1);
QAction* QMenu_ActionAt(const QMenu* self, QPoint* param1);
QAction* QMenu_MenuAction(const QMenu* self);
struct miqt_string QMenu_Title(const QMenu* self);
void QMenu_SetTitle(QMenu* self, struct miqt_string title);
QIcon* QMenu_Icon(const QMenu* self);
void QMenu_SetIcon(QMenu* self, QIcon* icon);
void QMenu_SetNoReplayFor(QMenu* self, QWidget* widget);
bool QMenu_SeparatorsCollapsible(const QMenu* self);
void QMenu_SetSeparatorsCollapsible(QMenu* self, bool collapse);
bool QMenu_ToolTipsVisible(const QMenu* self);
void QMenu_SetToolTipsVisible(QMenu* self, bool visible);
void QMenu_AboutToShow(QMenu* self);
void QMenu_connect_AboutToShow(QMenu* self, intptr_t slot);
void QMenu_AboutToHide(QMenu* self);
void QMenu_connect_AboutToHide(QMenu* self, intptr_t slot);
void QMenu_Triggered(QMenu* self, QAction* action);
void QMenu_connect_Triggered(QMenu* self, intptr_t slot);
void QMenu_Hovered(QMenu* self, QAction* action);
void QMenu_connect_Hovered(QMenu* self, intptr_t slot);
struct miqt_string QMenu_Tr2(const char* s, const char* c);
struct miqt_string QMenu_Tr3(const char* s, const char* c, int n);
struct miqt_string QMenu_TrUtf82(const char* s, const char* c);
struct miqt_string QMenu_TrUtf83(const char* s, const char* c, int n);
void QMenu_Popup2(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec22(QMenu* self, QPoint* pos, QAction* at);
QAction* QMenu_Exec3(struct miqt_array /* of QAction* */ actions, QPoint* pos, QAction* at);
QAction* QMenu_Exec4(struct miqt_array /* of QAction* */ actions, QPoint* pos, QAction* at, QWidget* parent);
void QMenu_Delete(QMenu* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
