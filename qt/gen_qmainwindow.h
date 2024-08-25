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

QMetaObject* QMainWindow_MetaObject(QMainWindow* self);
void QMainWindow_Tr(char* s, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf8(char* s, char** _out, int* _out_Strlen);
QSize* QMainWindow_IconSize(QMainWindow* self);
void QMainWindow_SetIconSize(QMainWindow* self, QSize* iconSize);
bool QMainWindow_IsAnimated(QMainWindow* self);
bool QMainWindow_IsDockNestingEnabled(QMainWindow* self);
bool QMainWindow_DocumentMode(QMainWindow* self);
void QMainWindow_SetDocumentMode(QMainWindow* self, bool enabled);
bool QMainWindow_IsSeparator(QMainWindow* self, QPoint* pos);
QMenuBar* QMainWindow_MenuBar(QMainWindow* self);
void QMainWindow_SetMenuBar(QMainWindow* self, QMenuBar* menubar);
QWidget* QMainWindow_MenuWidget(QMainWindow* self);
void QMainWindow_SetMenuWidget(QMainWindow* self, QWidget* menubar);
QStatusBar* QMainWindow_StatusBar(QMainWindow* self);
void QMainWindow_SetStatusBar(QMainWindow* self, QStatusBar* statusbar);
QWidget* QMainWindow_CentralWidget(QMainWindow* self);
void QMainWindow_SetCentralWidget(QMainWindow* self, QWidget* widget);
QWidget* QMainWindow_TakeCentralWidget(QMainWindow* self);
void QMainWindow_InsertToolBarBreak(QMainWindow* self, QToolBar* before);
void QMainWindow_AddToolBar(QMainWindow* self, QToolBar* toolbar);
QToolBar* QMainWindow_AddToolBarWithTitle(QMainWindow* self, const char* title, size_t title_Strlen);
void QMainWindow_InsertToolBar(QMainWindow* self, QToolBar* before, QToolBar* toolbar);
void QMainWindow_RemoveToolBar(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_RemoveToolBarBreak(QMainWindow* self, QToolBar* before);
bool QMainWindow_UnifiedTitleAndToolBarOnMac(QMainWindow* self);
bool QMainWindow_ToolBarBreak(QMainWindow* self, QToolBar* toolbar);
void QMainWindow_TabifyDockWidget(QMainWindow* self, QDockWidget* first, QDockWidget* second);
void QMainWindow_TabifiedDockWidgets(QMainWindow* self, QDockWidget* dockwidget, QDockWidget*** _out, size_t* _out_len);
void QMainWindow_RemoveDockWidget(QMainWindow* self, QDockWidget* dockwidget);
bool QMainWindow_RestoreDockWidget(QMainWindow* self, QDockWidget* dockwidget);
QByteArray* QMainWindow_SaveState(QMainWindow* self);
bool QMainWindow_RestoreState(QMainWindow* self, QByteArray* state);
QMenu* QMainWindow_CreatePopupMenu(QMainWindow* self);
void QMainWindow_SetAnimated(QMainWindow* self, bool enabled);
void QMainWindow_SetDockNestingEnabled(QMainWindow* self, bool enabled);
void QMainWindow_SetUnifiedTitleAndToolBarOnMac(QMainWindow* self, bool set);
void QMainWindow_IconSizeChanged(QMainWindow* self, QSize* iconSize);
void QMainWindow_connect_IconSizeChanged(QMainWindow* self, void* slot);
void QMainWindow_TabifiedDockWidgetActivated(QMainWindow* self, QDockWidget* dockWidget);
void QMainWindow_connect_TabifiedDockWidgetActivated(QMainWindow* self, void* slot);
void QMainWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QMainWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QMainWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QByteArray* QMainWindow_SaveState1(QMainWindow* self, int version);
bool QMainWindow_RestoreState2(QMainWindow* self, QByteArray* state, int version);
void QMainWindow_Delete(QMainWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
