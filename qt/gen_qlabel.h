#pragma once
#ifndef MIQT_QT_GEN_QLABEL_H
#define MIQT_QT_GEN_QLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLabel;
class QMetaMethod;
class QMetaObject;
class QMouseEvent;
class QMoveEvent;
class QMovie;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPicture;
class QPixmap;
class QPoint;
class QResizeEvent;
class QShowEvent;
class QSize;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLabel QLabel;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QMovie QMovie;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QLabel* QLabel_new(QWidget* parent);
QLabel* QLabel_new2();
QLabel* QLabel_new3(struct miqt_string text);
QLabel* QLabel_new4(QWidget* parent, int f);
QLabel* QLabel_new5(struct miqt_string text, QWidget* parent);
QLabel* QLabel_new6(struct miqt_string text, QWidget* parent, int f);
void QLabel_virtbase(QLabel* src, QFrame** outptr_QFrame);
QMetaObject* QLabel_MetaObject(const QLabel* self);
void* QLabel_Metacast(QLabel* self, const char* param1);
struct miqt_string QLabel_Tr(const char* s);
struct miqt_string QLabel_TrUtf8(const char* s);
struct miqt_string QLabel_Text(const QLabel* self);
QPixmap* QLabel_Pixmap(const QLabel* self);
QPixmap* QLabel_PixmapWithQtReturnByValueConstant(const QLabel* self, int param1);
QPicture* QLabel_Picture(const QLabel* self);
QPicture* QLabel_PictureWithQtReturnByValueConstant(const QLabel* self, int param1);
QMovie* QLabel_Movie(const QLabel* self);
int QLabel_TextFormat(const QLabel* self);
void QLabel_SetTextFormat(QLabel* self, int textFormat);
int QLabel_Alignment(const QLabel* self);
void QLabel_SetAlignment(QLabel* self, int alignment);
void QLabel_SetWordWrap(QLabel* self, bool on);
bool QLabel_WordWrap(const QLabel* self);
int QLabel_Indent(const QLabel* self);
void QLabel_SetIndent(QLabel* self, int indent);
int QLabel_Margin(const QLabel* self);
void QLabel_SetMargin(QLabel* self, int margin);
bool QLabel_HasScaledContents(const QLabel* self);
void QLabel_SetScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_SizeHint(const QLabel* self);
QSize* QLabel_MinimumSizeHint(const QLabel* self);
void QLabel_SetBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_Buddy(const QLabel* self);
int QLabel_HeightForWidth(const QLabel* self, int param1);
bool QLabel_OpenExternalLinks(const QLabel* self);
void QLabel_SetOpenExternalLinks(QLabel* self, bool open);
void QLabel_SetTextInteractionFlags(QLabel* self, int flags);
int QLabel_TextInteractionFlags(const QLabel* self);
void QLabel_SetSelection(QLabel* self, int param1, int param2);
bool QLabel_HasSelectedText(const QLabel* self);
struct miqt_string QLabel_SelectedText(const QLabel* self);
int QLabel_SelectionStart(const QLabel* self);
void QLabel_SetText(QLabel* self, struct miqt_string text);
void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap);
void QLabel_SetPicture(QLabel* self, QPicture* picture);
void QLabel_SetMovie(QLabel* self, QMovie* movie);
void QLabel_SetNum(QLabel* self, int num);
void QLabel_SetNumWithNum(QLabel* self, double num);
void QLabel_Clear(QLabel* self);
void QLabel_LinkActivated(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkActivated(QLabel* self, intptr_t slot);
void QLabel_LinkHovered(QLabel* self, struct miqt_string link);
void QLabel_connect_LinkHovered(QLabel* self, intptr_t slot);
bool QLabel_Event(QLabel* self, QEvent* e);
void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev);
void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1);
void QLabel_ChangeEvent(QLabel* self, QEvent* param1);
void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev);
void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev);
void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev);
bool QLabel_FocusNextPrevChild(QLabel* self, bool next);
struct miqt_string QLabel_Tr2(const char* s, const char* c);
struct miqt_string QLabel_Tr3(const char* s, const char* c, int n);
struct miqt_string QLabel_TrUtf82(const char* s, const char* c);
struct miqt_string QLabel_TrUtf83(const char* s, const char* c, int n);
bool QLabel_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_SizeHint(const void* self);
bool QLabel_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_MinimumSizeHint(const void* self);
bool QLabel_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QLabel_virtualbase_HeightForWidth(const void* self, int param1);
bool QLabel_override_virtual_Event(void* self, intptr_t slot);
bool QLabel_virtualbase_Event(void* self, QEvent* e);
bool QLabel_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_KeyPressEvent(void* self, QKeyEvent* ev);
bool QLabel_override_virtual_PaintEvent(void* self, intptr_t slot);
void QLabel_virtualbase_PaintEvent(void* self, QPaintEvent* param1);
bool QLabel_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ChangeEvent(void* self, QEvent* param1);
bool QLabel_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MousePressEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MouseMoveEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* ev);
bool QLabel_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QLabel_virtualbase_FocusInEvent(void* self, QFocusEvent* ev);
bool QLabel_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QLabel_virtualbase_FocusOutEvent(void* self, QFocusEvent* ev);
bool QLabel_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QLabel_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QLabel_override_virtual_DevType(void* self, intptr_t slot);
int QLabel_virtualbase_DevType(const void* self);
bool QLabel_override_virtual_SetVisible(void* self, intptr_t slot);
void QLabel_virtualbase_SetVisible(void* self, bool visible);
bool QLabel_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QLabel_virtualbase_HasHeightForWidth(const void* self);
bool QLabel_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QLabel_virtualbase_PaintEngine(const void* self);
bool QLabel_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QLabel_override_virtual_WheelEvent(void* self, intptr_t slot);
void QLabel_virtualbase_WheelEvent(void* self, QWheelEvent* event);
bool QLabel_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QLabel_override_virtual_EnterEvent(void* self, intptr_t slot);
void QLabel_virtualbase_EnterEvent(void* self, QEvent* event);
bool QLabel_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QLabel_override_virtual_MoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QLabel_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
bool QLabel_override_virtual_CloseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QLabel_override_virtual_TabletEvent(void* self, intptr_t slot);
void QLabel_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QLabel_override_virtual_ActionEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QLabel_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QLabel_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
bool QLabel_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
bool QLabel_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QLabel_override_virtual_DropEvent(void* self, intptr_t slot);
void QLabel_virtualbase_DropEvent(void* self, QDropEvent* event);
bool QLabel_override_virtual_ShowEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QLabel_override_virtual_HideEvent(void* self, intptr_t slot);
void QLabel_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QLabel_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QLabel_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QLabel_override_virtual_Metric(void* self, intptr_t slot);
int QLabel_virtualbase_Metric(const void* self, int param1);
bool QLabel_override_virtual_InitPainter(void* self, intptr_t slot);
void QLabel_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QLabel_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QLabel_virtualbase_Redirected(const void* self, QPoint* offset);
bool QLabel_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QLabel_virtualbase_SharedPainter(const void* self);
bool QLabel_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QLabel_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
bool QLabel_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QLabel_virtualbase_InputMethodQuery(const void* self, int param1);
bool QLabel_override_virtual_EventFilter(void* self, intptr_t slot);
bool QLabel_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
bool QLabel_override_virtual_TimerEvent(void* self, intptr_t slot);
void QLabel_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QLabel_override_virtual_ChildEvent(void* self, intptr_t slot);
void QLabel_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QLabel_override_virtual_CustomEvent(void* self, intptr_t slot);
void QLabel_virtualbase_CustomEvent(void* self, QEvent* event);
bool QLabel_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QLabel_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QLabel_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QLabel_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QLabel_Delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
