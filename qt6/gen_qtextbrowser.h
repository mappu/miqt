#pragma once
#ifndef MIQT_QT6_GEN_QTEXTBROWSER_H
#define MIQT_QT6_GEN_QTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QInputMethodEvent;
class QKeyEvent;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QResizeEvent;
class QShowEvent;
class QTextBrowser;
class QTextCursor;
class QTextEdit;
class QTimerEvent;
class QUrl;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QTextBrowser QTextBrowser;
typedef struct QTextCursor QTextCursor;
typedef struct QTextEdit QTextEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

void QTextBrowser_new(QWidget* parent, QTextBrowser** outptr_QTextBrowser, QTextEdit** outptr_QTextEdit, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
void QTextBrowser_new2(QTextBrowser** outptr_QTextBrowser, QTextEdit** outptr_QTextEdit, QAbstractScrollArea** outptr_QAbstractScrollArea, QFrame** outptr_QFrame, QWidget** outptr_QWidget, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self);
void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1);
struct miqt_string QTextBrowser_Tr(const char* s);
QUrl* QTextBrowser_Source(const QTextBrowser* self);
int QTextBrowser_SourceType(const QTextBrowser* self);
struct miqt_array /* of struct miqt_string */  QTextBrowser_SearchPaths(const QTextBrowser* self);
void QTextBrowser_SetSearchPaths(QTextBrowser* self, struct miqt_array /* of struct miqt_string */  paths);
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name);
bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self);
bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self);
void QTextBrowser_ClearHistory(QTextBrowser* self);
struct miqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1);
QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1);
int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self);
int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self);
bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_OpenLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name);
void QTextBrowser_Backward(QTextBrowser* self);
void QTextBrowser_Forward(QTextBrowser* self);
void QTextBrowser_Home(QTextBrowser* self);
void QTextBrowser_Reload(QTextBrowser* self);
void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_BackwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_connect_ForwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_HistoryChanged(QTextBrowser* self);
void QTextBrowser_connect_HistoryChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_SourceChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_Highlighted(QTextBrowser* self, intptr_t slot);
void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1);
void QTextBrowser_connect_AnchorClicked(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e);
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e);
void QTextBrowser_DoSetSource(QTextBrowser* self, QUrl* name, int typeVal);
struct miqt_string QTextBrowser_Tr2(const char* s, const char* c);
struct miqt_string QTextBrowser_Tr3(const char* s, const char* c, int n);
void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, int typeVal);
void QTextBrowser_override_virtual_LoadResource(void* self, intptr_t slot);
QVariant* QTextBrowser_virtualbase_LoadResource(void* self, int typeVal, QUrl* name);
void QTextBrowser_override_virtual_Backward(void* self, intptr_t slot);
void QTextBrowser_virtualbase_Backward(void* self);
void QTextBrowser_override_virtual_Forward(void* self, intptr_t slot);
void QTextBrowser_virtualbase_Forward(void* self);
void QTextBrowser_override_virtual_Home(void* self, intptr_t slot);
void QTextBrowser_virtualbase_Home(void* self);
void QTextBrowser_override_virtual_Reload(void* self, intptr_t slot);
void QTextBrowser_virtualbase_Reload(void* self);
void QTextBrowser_override_virtual_Event(void* self, intptr_t slot);
bool QTextBrowser_virtualbase_Event(void* self, QEvent* e);
void QTextBrowser_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
void QTextBrowser_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev);
void QTextBrowser_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_MousePressEvent(void* self, QMouseEvent* ev);
void QTextBrowser_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev);
void QTextBrowser_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev);
void QTextBrowser_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QTextBrowser_virtualbase_FocusNextPrevChild(void* self, bool next);
void QTextBrowser_override_virtual_PaintEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QTextBrowser_override_virtual_DoSetSource(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DoSetSource(void* self, QUrl* name, int typeVal);
void QTextBrowser_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QTextBrowser_virtualbase_InputMethodQuery(const void* self, int property);
void QTextBrowser_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QTextBrowser_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* e);
void QTextBrowser_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
void QTextBrowser_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e);
void QTextBrowser_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e);
void QTextBrowser_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e);
void QTextBrowser_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
void QTextBrowser_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
void QTextBrowser_override_virtual_DropEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DropEvent(void* self, QDropEvent* e);
void QTextBrowser_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
void QTextBrowser_override_virtual_ShowEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_ShowEvent(void* self, QShowEvent* param1);
void QTextBrowser_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_ChangeEvent(void* self, QEvent* e);
void QTextBrowser_override_virtual_WheelEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_WheelEvent(void* self, QWheelEvent* e);
void QTextBrowser_override_virtual_CreateMimeDataFromSelection(void* self, intptr_t slot);
QMimeData* QTextBrowser_virtualbase_CreateMimeDataFromSelection(const void* self);
void QTextBrowser_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot);
bool QTextBrowser_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source);
void QTextBrowser_override_virtual_InsertFromMimeData(void* self, intptr_t slot);
void QTextBrowser_virtualbase_InsertFromMimeData(void* self, QMimeData* source);
void QTextBrowser_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QTextBrowser_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QTextBrowser_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QTextBrowser_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QTextBrowser_override_virtual_DoSetTextCursor(void* self, intptr_t slot);
void QTextBrowser_virtualbase_DoSetTextCursor(void* self, QTextCursor* cursor);
void QTextBrowser_Delete(QTextBrowser* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
