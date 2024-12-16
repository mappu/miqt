#pragma once
#ifndef MIQT_QT_WEBENGINE_GEN_QWEBENGINEVIEW_H
#define MIQT_QT_WEBENGINE_GEN_QWEBENGINEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QUrl;
class QVariant;
class QWebEngineHistory;
class QWebEngineHttpRequest;
class QWebEnginePage;
class QWebEngineSettings;
class QWebEngineView;
class QWheelEvent;
class QWidget;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
typedef struct QWebEnginePage QWebEnginePage;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineView QWebEngineView;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QWebEngineView* QWebEngineView_new(QWidget* parent);
QWebEngineView* QWebEngineView_new2();
void QWebEngineView_virtbase(QWebEngineView* src, QWidget** outptr_QWidget);
QMetaObject* QWebEngineView_MetaObject(const QWebEngineView* self);
void* QWebEngineView_Metacast(QWebEngineView* self, const char* param1);
struct miqt_string QWebEngineView_Tr(const char* s);
struct miqt_string QWebEngineView_TrUtf8(const char* s);
QWebEnginePage* QWebEngineView_Page(const QWebEngineView* self);
void QWebEngineView_SetPage(QWebEngineView* self, QWebEnginePage* page);
void QWebEngineView_Load(QWebEngineView* self, QUrl* url);
void QWebEngineView_LoadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request);
void QWebEngineView_SetHtml(QWebEngineView* self, struct miqt_string html);
void QWebEngineView_SetContent(QWebEngineView* self, struct miqt_string data);
QWebEngineHistory* QWebEngineView_History(const QWebEngineView* self);
struct miqt_string QWebEngineView_Title(const QWebEngineView* self);
void QWebEngineView_SetUrl(QWebEngineView* self, QUrl* url);
QUrl* QWebEngineView_Url(const QWebEngineView* self);
QUrl* QWebEngineView_IconUrl(const QWebEngineView* self);
QIcon* QWebEngineView_Icon(const QWebEngineView* self);
bool QWebEngineView_HasSelection(const QWebEngineView* self);
struct miqt_string QWebEngineView_SelectedText(const QWebEngineView* self);
QAction* QWebEngineView_PageAction(const QWebEngineView* self, int action);
void QWebEngineView_TriggerPageAction(QWebEngineView* self, int action);
double QWebEngineView_ZoomFactor(const QWebEngineView* self);
void QWebEngineView_SetZoomFactor(QWebEngineView* self, double factor);
void QWebEngineView_FindText(QWebEngineView* self, struct miqt_string subString);
QSize* QWebEngineView_SizeHint(const QWebEngineView* self);
QWebEngineSettings* QWebEngineView_Settings(const QWebEngineView* self);
void QWebEngineView_Stop(QWebEngineView* self);
void QWebEngineView_Back(QWebEngineView* self);
void QWebEngineView_Forward(QWebEngineView* self);
void QWebEngineView_Reload(QWebEngineView* self);
void QWebEngineView_LoadStarted(QWebEngineView* self);
void QWebEngineView_connect_LoadStarted(QWebEngineView* self, intptr_t slot);
void QWebEngineView_LoadProgress(QWebEngineView* self, int progress);
void QWebEngineView_connect_LoadProgress(QWebEngineView* self, intptr_t slot);
void QWebEngineView_LoadFinished(QWebEngineView* self, bool param1);
void QWebEngineView_connect_LoadFinished(QWebEngineView* self, intptr_t slot);
void QWebEngineView_TitleChanged(QWebEngineView* self, struct miqt_string title);
void QWebEngineView_connect_TitleChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_SelectionChanged(QWebEngineView* self);
void QWebEngineView_connect_SelectionChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_UrlChanged(QWebEngineView* self, QUrl* param1);
void QWebEngineView_connect_UrlChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_IconUrlChanged(QWebEngineView* self, QUrl* param1);
void QWebEngineView_connect_IconUrlChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_IconChanged(QWebEngineView* self, QIcon* param1);
void QWebEngineView_connect_IconChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_RenderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode);
void QWebEngineView_connect_RenderProcessTerminated(QWebEngineView* self, intptr_t slot);
QWebEngineView* QWebEngineView_CreateWindow(QWebEngineView* self, int typeVal);
void QWebEngineView_ContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1);
bool QWebEngineView_Event(QWebEngineView* self, QEvent* param1);
void QWebEngineView_ShowEvent(QWebEngineView* self, QShowEvent* param1);
void QWebEngineView_HideEvent(QWebEngineView* self, QHideEvent* param1);
void QWebEngineView_CloseEvent(QWebEngineView* self, QCloseEvent* param1);
void QWebEngineView_DragEnterEvent(QWebEngineView* self, QDragEnterEvent* e);
void QWebEngineView_DragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e);
void QWebEngineView_DragMoveEvent(QWebEngineView* self, QDragMoveEvent* e);
void QWebEngineView_DropEvent(QWebEngineView* self, QDropEvent* e);
struct miqt_string QWebEngineView_Tr2(const char* s, const char* c);
struct miqt_string QWebEngineView_Tr3(const char* s, const char* c, int n);
struct miqt_string QWebEngineView_TrUtf82(const char* s, const char* c);
struct miqt_string QWebEngineView_TrUtf83(const char* s, const char* c, int n);
void QWebEngineView_SetHtml2(QWebEngineView* self, struct miqt_string html, QUrl* baseUrl);
void QWebEngineView_SetContent2(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType);
void QWebEngineView_SetContent3(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl);
void QWebEngineView_TriggerPageAction2(QWebEngineView* self, int action, bool checked);
void QWebEngineView_FindText2(QWebEngineView* self, struct miqt_string subString, int options);
void QWebEngineView_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWebEngineView_virtualbase_SizeHint(const void* self);
void QWebEngineView_override_virtual_CreateWindow(void* self, intptr_t slot);
QWebEngineView* QWebEngineView_virtualbase_CreateWindow(void* self, int typeVal);
void QWebEngineView_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* param1);
void QWebEngineView_override_virtual_Event(void* self, intptr_t slot);
bool QWebEngineView_virtualbase_Event(void* self, QEvent* param1);
void QWebEngineView_override_virtual_ShowEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QWebEngineView_override_virtual_HideEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_HideEvent(void* self, QHideEvent* param1);
void QWebEngineView_override_virtual_CloseEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_CloseEvent(void* self, QCloseEvent* param1);
void QWebEngineView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e);
void QWebEngineView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
void QWebEngineView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
void QWebEngineView_override_virtual_DropEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_DropEvent(void* self, QDropEvent* e);
void QWebEngineView_override_virtual_DevType(void* self, intptr_t slot);
int QWebEngineView_virtualbase_DevType(const void* self);
void QWebEngineView_override_virtual_SetVisible(void* self, intptr_t slot);
void QWebEngineView_virtualbase_SetVisible(void* self, bool visible);
void QWebEngineView_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QWebEngineView_virtualbase_MinimumSizeHint(const void* self);
void QWebEngineView_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWebEngineView_virtualbase_HeightForWidth(const void* self, int param1);
void QWebEngineView_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWebEngineView_virtualbase_HasHeightForWidth(const void* self);
void QWebEngineView_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QWebEngineView_virtualbase_PaintEngine(const void* self);
void QWebEngineView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QWebEngineView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QWebEngineView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QWebEngineView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QWebEngineView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QWebEngineView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QWebEngineView_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QWebEngineView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QWebEngineView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QWebEngineView_override_virtual_EnterEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_EnterEvent(void* self, QEvent* event);
void QWebEngineView_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_LeaveEvent(void* self, QEvent* event);
void QWebEngineView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QWebEngineView_override_virtual_MoveEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QWebEngineView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QWebEngineView_override_virtual_TabletEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QWebEngineView_override_virtual_ActionEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QWebEngineView_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QWebEngineView_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QWebEngineView_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QWebEngineView_override_virtual_Metric(void* self, intptr_t slot);
int QWebEngineView_virtualbase_Metric(const void* self, int param1);
void QWebEngineView_override_virtual_InitPainter(void* self, intptr_t slot);
void QWebEngineView_virtualbase_InitPainter(const void* self, QPainter* painter);
void QWebEngineView_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QWebEngineView_virtualbase_Redirected(const void* self, QPoint* offset);
void QWebEngineView_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QWebEngineView_virtualbase_SharedPainter(const void* self);
void QWebEngineView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QWebEngineView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QWebEngineView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QWebEngineView_virtualbase_InputMethodQuery(const void* self, int param1);
void QWebEngineView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QWebEngineView_virtualbase_FocusNextPrevChild(void* self, bool next);
void QWebEngineView_Delete(QWebEngineView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif