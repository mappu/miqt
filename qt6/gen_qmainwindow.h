#ifndef GEN_QMAINWINDOW_H
#define GEN_QMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QByteArray;
class QDockWidget;
class QMainWindow;
class QMenu;
class QMenuBar;
class QMetaObject;
class QPoint;
class QSize;
class QStatusBar;
class QToolBar;
class QWidget;
#else
typedef struct QByteArray QByteArray;
typedef struct QDockWidget QDockWidget;
typedef struct QMainWindow QMainWindow;
typedef struct QMenu QMenu;
typedef struct QMenuBar QMenuBar;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QStatusBar QStatusBar;
typedef struct QToolBar QToolBar;
typedef struct QWidget QWidget;
#endif

QMainWindow* QMainWindow_new(QWidget* parent);
QMainWindow* QMainWindow_new2();
QMainWindow* QMainWindow_new3(QWidget* parent, int flags);
QMetaObject* QMainWindow_MetaObject(const QMainWindow* self);
void* QMainWindow_Metacast(QMainWindow* self, const char* param1);
struct miqt_string QMainWindow_Tr(const char* s);
QSize* QMainWindow_IconSize(const QMainWindow* self);
void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize);
int QMainWindow_ToolButtonStyle(const QMainWindow* self);
void QMainWindow_SetToolButtonStyle(QMainWindow* self, int toolButtonStyle);
bool QMainWindow_IsAnimated(const QMainWindow* self);
bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self);
bool QMainWindow_DocumentMode(const QMainWindow* self);
void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled);
int QMainWindow_TabShape(const QMainWindow* self);
void QMainWindow_SetTabShape(QMainWindow* self, int tabShape);
int QMainWindow_TabPosition(const QMainWindow* self, int area);
void QMainWindow_SetTabPosition(QMainWindow* self, int areas, int tabPosition);
void QMainWindow_SetDockOptions(QMainWindow* self, int options);
int QMainWindow_DockOptions(const QMainWindow* self);
bool QMainWindow_IsSeparator(const QMainWindow* self, QPoint* pos);
QMenuBar* QMainWindow_MenuBar(const QMainWindow* self);
void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar);
QWidget* QMainWindow_MenuWidget(const QMainWindow* self);
void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar);
QStatusBar* QMainWindow_StatusBar(const QMainWindow* self);
void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar);
QWidget* QMainWindow_CentralWidget(const QMainWindow* self);
void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget);
QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self);
void QMainWindow_SetCorner(QMainWindow* self, int corner, int area);
int QMainWindow_Corner(const QMainWindow* self, int corner);
void QMainWindow_AddToolBarBreak(QMainWindow* self);
void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before);
void QMainWindow_AddToolBar(QMainWindow* self, int area, QToolBar* toolbar);
void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar);
QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, struct miqt_string title);
void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar);
void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before);
bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self);
int QMainWindow_ToolBarArea(const QMainWindow* self, QToolBar* toolbar);
bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar);
void QMainWindow_AddDockWidget(QMainWindow* self, int area, QDockWidget* dockwidget);
void QMainWindow_AddDockWidget2(QMainWindow* self, int area, QDockWidget* dockwidget, int orientation);
void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, int orientation);
void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second);
struct miqt_array QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget);
bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget);
int QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_ResizeDocks(QMainWindow* self, struct miqt_array /* of QDockWidget* */ docks, struct miqt_array /* of int */ sizes, int orientation);
struct miqt_string QMainWindow_SaveState(const QMainWindow* self);
bool QMainWindow_RestoreState(QMainWindow* self, struct miqt_string state);
QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self);
void QMainWindow_SetAnimated(QMainWindow* self, bool enabled);
void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled);
void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set);
void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize);
void QMainWindow_connect_IconSizeChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, int toolButtonStyle);
void QMainWindow_connect_ToolButtonStyleChanged(QMainWindow* self, intptr_t slot);
void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget);
void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, intptr_t slot);
struct miqt_string QMainWindow_Tr2(const char* s, const char* c);
struct miqt_string QMainWindow_Tr3(const char* s, const char* c, int n);
void QMainWindow_AddToolBarBreak1(QMainWindow* self, int area);
struct miqt_string QMainWindow_SaveState1(const QMainWindow* self, int version);
bool QMainWindow_RestoreState2(QMainWindow* self, struct miqt_string state, int version);
void QMainWindow_Delete(QMainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
