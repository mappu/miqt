#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCISCINTILLABASE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA6_GEN_QSCISCINTILLABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QColor;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QImage;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPixmap;
class QPoint;
class QRect;
class QResizeEvent;
class QScrollBar;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QUrl;
class QVariant;
class QWheelEvent;
class QWidget;
class QsciScintillaBase;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QImage QImage;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent);
QsciScintillaBase* QsciScintillaBase_new2();
void QsciScintillaBase_virtbase(QsciScintillaBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self);
void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1);
struct miqt_string QsciScintillaBase_Tr(const char* s);
QsciScintillaBase* QsciScintillaBase_Pool();
void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg);
long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam);
long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam);
long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam);
long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam);
long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam);
long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam);
long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText);
long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col);
long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col);
long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax);
long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam);
long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam);
void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg);
int QsciScintillaBase_CommandKey(int qt_key, int* modifiers);
void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes);
void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction);
void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded);
void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers);
void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3);
void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);
void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2);
void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position);
void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url);
void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated);
void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot);
bool QsciScintillaBase_CanInsertFromMimeData(const QsciScintillaBase* self, QMimeData* source);
struct miqt_string QsciScintillaBase_FromMimeData(const QsciScintillaBase* self, QMimeData* source, bool* rectangular);
QMimeData* QsciScintillaBase_ToMimeData(const QsciScintillaBase* self, struct miqt_string text, bool rectangular);
void QsciScintillaBase_ChangeEvent(QsciScintillaBase* self, QEvent* e);
void QsciScintillaBase_ContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e);
void QsciScintillaBase_DragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e);
void QsciScintillaBase_DragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e);
void QsciScintillaBase_DragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e);
void QsciScintillaBase_DropEvent(QsciScintillaBase* self, QDropEvent* e);
void QsciScintillaBase_FocusInEvent(QsciScintillaBase* self, QFocusEvent* e);
void QsciScintillaBase_FocusOutEvent(QsciScintillaBase* self, QFocusEvent* e);
bool QsciScintillaBase_FocusNextPrevChild(QsciScintillaBase* self, bool next);
void QsciScintillaBase_KeyPressEvent(QsciScintillaBase* self, QKeyEvent* e);
void QsciScintillaBase_InputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event);
QVariant* QsciScintillaBase_InputMethodQuery(const QsciScintillaBase* self, int query);
void QsciScintillaBase_MouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_MouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_MousePressEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_MouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_PaintEvent(QsciScintillaBase* self, QPaintEvent* e);
void QsciScintillaBase_ResizeEvent(QsciScintillaBase* self, QResizeEvent* e);
void QsciScintillaBase_ScrollContentsBy(QsciScintillaBase* self, int dx, int dy);
struct miqt_string QsciScintillaBase_Tr2(const char* s, const char* c);
struct miqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n);
long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam);
long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam);
bool QsciScintillaBase_override_virtual_CanInsertFromMimeData(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_CanInsertFromMimeData(const void* self, QMimeData* source);
bool QsciScintillaBase_override_virtual_FromMimeData(void* self, intptr_t slot);
struct miqt_string QsciScintillaBase_virtualbase_FromMimeData(const void* self, QMimeData* source, bool* rectangular);
bool QsciScintillaBase_override_virtual_ToMimeData(void* self, intptr_t slot);
QMimeData* QsciScintillaBase_virtualbase_ToMimeData(const void* self, struct miqt_string text, bool rectangular);
bool QsciScintillaBase_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ChangeEvent(void* self, QEvent* e);
bool QsciScintillaBase_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* e);
bool QsciScintillaBase_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* e);
bool QsciScintillaBase_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
bool QsciScintillaBase_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
bool QsciScintillaBase_override_virtual_DropEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_DropEvent(void* self, QDropEvent* e);
bool QsciScintillaBase_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_FocusInEvent(void* self, QFocusEvent* e);
bool QsciScintillaBase_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_FocusOutEvent(void* self, QFocusEvent* e);
bool QsciScintillaBase_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_FocusNextPrevChild(void* self, bool next);
bool QsciScintillaBase_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_KeyPressEvent(void* self, QKeyEvent* e);
bool QsciScintillaBase_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
bool QsciScintillaBase_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QsciScintillaBase_virtualbase_InputMethodQuery(const void* self, int query);
bool QsciScintillaBase_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_MousePressEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_PaintEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_PaintEvent(void* self, QPaintEvent* e);
bool QsciScintillaBase_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
bool QsciScintillaBase_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
bool QsciScintillaBase_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_MinimumSizeHint(const void* self);
bool QsciScintillaBase_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_SizeHint(const void* self);
bool QsciScintillaBase_override_virtual_SetupViewport(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_SetupViewport(void* self, QWidget* viewport);
bool QsciScintillaBase_override_virtual_EventFilter(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_EventFilter(void* self, QObject* param1, QEvent* param2);
bool QsciScintillaBase_override_virtual_Event(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_Event(void* self, QEvent* param1);
bool QsciScintillaBase_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_ViewportEvent(void* self, QEvent* param1);
bool QsciScintillaBase_override_virtual_WheelEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_WheelEvent(void* self, QWheelEvent* param1);
bool QsciScintillaBase_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_ViewportSizeHint(const void* self);
bool QsciScintillaBase_override_virtual_InitStyleOption(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_InitStyleOption(const void* self, QStyleOptionFrame* option);
bool QsciScintillaBase_override_virtual_DevType(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_DevType(const void* self);
bool QsciScintillaBase_override_virtual_SetVisible(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_SetVisible(void* self, bool visible);
bool QsciScintillaBase_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_HeightForWidth(const void* self, int param1);
bool QsciScintillaBase_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_HasHeightForWidth(const void* self);
bool QsciScintillaBase_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QsciScintillaBase_virtualbase_PaintEngine(const void* self);
bool QsciScintillaBase_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
bool QsciScintillaBase_override_virtual_EnterEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_EnterEvent(void* self, QEnterEvent* event);
bool QsciScintillaBase_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_LeaveEvent(void* self, QEvent* event);
bool QsciScintillaBase_override_virtual_MoveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_MoveEvent(void* self, QMoveEvent* event);
bool QsciScintillaBase_override_virtual_CloseEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_CloseEvent(void* self, QCloseEvent* event);
bool QsciScintillaBase_override_virtual_TabletEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_TabletEvent(void* self, QTabletEvent* event);
bool QsciScintillaBase_override_virtual_ActionEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ActionEvent(void* self, QActionEvent* event);
bool QsciScintillaBase_override_virtual_ShowEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ShowEvent(void* self, QShowEvent* event);
bool QsciScintillaBase_override_virtual_HideEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_HideEvent(void* self, QHideEvent* event);
bool QsciScintillaBase_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QsciScintillaBase_override_virtual_Metric(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_Metric(const void* self, int param1);
bool QsciScintillaBase_override_virtual_InitPainter(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_InitPainter(const void* self, QPainter* painter);
bool QsciScintillaBase_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QsciScintillaBase_virtualbase_Redirected(const void* self, QPoint* offset);
bool QsciScintillaBase_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QsciScintillaBase_virtualbase_SharedPainter(const void* self);
bool QsciScintillaBase_override_virtual_TimerEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_TimerEvent(void* self, QTimerEvent* event);
bool QsciScintillaBase_override_virtual_ChildEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ChildEvent(void* self, QChildEvent* event);
bool QsciScintillaBase_override_virtual_CustomEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_CustomEvent(void* self, QEvent* event);
bool QsciScintillaBase_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
bool QsciScintillaBase_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QsciScintillaBase_Delete(QsciScintillaBase* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
