#ifndef GEN_QMAINWINDOW_H
#define GEN_QMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QMainWindow* QMainWindow_new();
QMainWindow* QMainWindow_new2(QWidget* parent);
QMainWindow* QMainWindow_new3(QWidget* parent, int flags);
QMetaObject* QMainWindow_MetaObject(const QMainWindow* self);
void QMainWindow_Tr(const char* s, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QMainWindow_IconSize(const QMainWindow* self);
void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize);
uintptr_t QMainWindow_ToolButtonStyle(const QMainWindow* self);
void QMainWindow_SetToolButtonStyle(QMainWindow* self, uintptr_t toolButtonStyle);
bool QMainWindow_IsAnimated(const QMainWindow* self);
bool QMainWindow_IsDockNestingEnabled(const QMainWindow* self);
bool QMainWindow_DocumentMode(const QMainWindow* self);
void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled);
uintptr_t QMainWindow_TabShape(const QMainWindow* self);
void QMainWindow_SetTabShape(QMainWindow* self, uintptr_t tabShape);
uintptr_t QMainWindow_TabPosition(const QMainWindow* self, uintptr_t area);
void QMainWindow_SetTabPosition(QMainWindow* self, int areas, uintptr_t tabPosition);
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
void QMainWindow_SetCorner(QMainWindow* self, uintptr_t corner, uintptr_t area);
uintptr_t QMainWindow_Corner(const QMainWindow* self, uintptr_t corner);
void QMainWindow_AddToolBarBreak(QMainWindow* self);
void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before);
void QMainWindow_AddToolBar(QMainWindow* self, uintptr_t area, QToolBar* toolbar);
void QMainWindow_AddToolBarWithToolbar(QMainWindow* self, QToolBar* toolbar);
QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, const char* title, size_t title_Strlen);
void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar);
void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before);
bool QMainWindow_UnifiedTitleAndToolBarOnMac(const QMainWindow* self);
uintptr_t QMainWindow_ToolBarArea(const QMainWindow* self, QToolBar* toolbar);
bool QMainWindow_ToolBarBreak(const QMainWindow* self, QToolBar* toolbar);
void QMainWindow_AddDockWidget(QMainWindow* self, uintptr_t area, QDockWidget* dockwidget);
void QMainWindow_AddDockWidget2(QMainWindow* self, uintptr_t area, QDockWidget* dockwidget, uintptr_t orientation);
void QMainWindow_SplitDockWidget(QMainWindow* self, QDockWidget* after, QDockWidget* dockwidget, uintptr_t orientation);
void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second);
void QMainWindow_TabifiedDockWidgets(const QMainWindow* self, QDockWidget* dockwidget, QDockWidget*** _out, size_t* _out_len);
void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget);
bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget);
uintptr_t QMainWindow_DockWidgetArea(const QMainWindow* self, QDockWidget* dockwidget);
void QMainWindow_ResizeDocks(QMainWindow* self, QDockWidget** docks, size_t docks_len, int* sizes, size_t sizes_len, uintptr_t orientation);
QByteArray* QMainWindow_SaveState(const QMainWindow* self);
bool QMainWindow_RestoreState(QMainWindow* self, QByteArray* state);
QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self);
void QMainWindow_SetAnimated(QMainWindow* self, bool enabled);
void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled);
void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set);
void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize);
void QMainWindow_connect_IconSizeChanged(QMainWindow* self, void* slot);
void QMainWindow_ToolButtonStyleChanged(QMainWindow* self, uintptr_t toolButtonStyle);
void QMainWindow_connect_ToolButtonStyleChanged(QMainWindow* self, void* slot);
void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget);
void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, void* slot);
void QMainWindow_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMainWindow_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QMainWindow_AddToolBarBreak1(QMainWindow* self, uintptr_t area);
QByteArray* QMainWindow_SaveState1(const QMainWindow* self, int version);
bool QMainWindow_RestoreState2(QMainWindow* self, QByteArray* state, int version);
void QMainWindow_Delete(QMainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
