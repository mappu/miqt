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
class QStyleOptionFrame;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
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
QMetaObject* QLabel_metaObject(const QLabel* self);
void* QLabel_metacast(QLabel* self, const char* param1);
struct miqt_string QLabel_tr(const char* s);
struct miqt_string QLabel_trUtf8(const char* s);
struct miqt_string QLabel_text(const QLabel* self);
QPixmap* QLabel_pixmap(const QLabel* self);
QPixmap* QLabel_pixmapWithQtReturnByValueConstant(const QLabel* self, int param1);
QPicture* QLabel_picture(const QLabel* self);
QPicture* QLabel_pictureWithQtReturnByValueConstant(const QLabel* self, int param1);
QMovie* QLabel_movie(const QLabel* self);
int QLabel_textFormat(const QLabel* self);
void QLabel_setTextFormat(QLabel* self, int textFormat);
int QLabel_alignment(const QLabel* self);
void QLabel_setAlignment(QLabel* self, int alignment);
void QLabel_setWordWrap(QLabel* self, bool on);
bool QLabel_wordWrap(const QLabel* self);
int QLabel_indent(const QLabel* self);
void QLabel_setIndent(QLabel* self, int indent);
int QLabel_margin(const QLabel* self);
void QLabel_setMargin(QLabel* self, int margin);
bool QLabel_hasScaledContents(const QLabel* self);
void QLabel_setScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_sizeHint(const QLabel* self);
QSize* QLabel_minimumSizeHint(const QLabel* self);
void QLabel_setBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_buddy(const QLabel* self);
int QLabel_heightForWidth(const QLabel* self, int param1);
bool QLabel_openExternalLinks(const QLabel* self);
void QLabel_setOpenExternalLinks(QLabel* self, bool open);
void QLabel_setTextInteractionFlags(QLabel* self, int flags);
int QLabel_textInteractionFlags(const QLabel* self);
void QLabel_setSelection(QLabel* self, int param1, int param2);
bool QLabel_hasSelectedText(const QLabel* self);
struct miqt_string QLabel_selectedText(const QLabel* self);
int QLabel_selectionStart(const QLabel* self);
void QLabel_setText(QLabel* self, struct miqt_string text);
void QLabel_setPixmap(QLabel* self, QPixmap* pixmap);
void QLabel_setPicture(QLabel* self, QPicture* picture);
void QLabel_setMovie(QLabel* self, QMovie* movie);
void QLabel_setNum(QLabel* self, int num);
void QLabel_setNumWithNum(QLabel* self, double num);
void QLabel_clear(QLabel* self);
void QLabel_linkActivated(QLabel* self, struct miqt_string link);
void QLabel_connect_linkActivated(QLabel* self, intptr_t slot);
void QLabel_linkHovered(QLabel* self, struct miqt_string link);
void QLabel_connect_linkHovered(QLabel* self, intptr_t slot);
bool QLabel_event(QLabel* self, QEvent* e);
void QLabel_keyPressEvent(QLabel* self, QKeyEvent* ev);
void QLabel_paintEvent(QLabel* self, QPaintEvent* param1);
void QLabel_changeEvent(QLabel* self, QEvent* param1);
void QLabel_mousePressEvent(QLabel* self, QMouseEvent* ev);
void QLabel_mouseMoveEvent(QLabel* self, QMouseEvent* ev);
void QLabel_mouseReleaseEvent(QLabel* self, QMouseEvent* ev);
void QLabel_contextMenuEvent(QLabel* self, QContextMenuEvent* ev);
void QLabel_focusInEvent(QLabel* self, QFocusEvent* ev);
void QLabel_focusOutEvent(QLabel* self, QFocusEvent* ev);
bool QLabel_focusNextPrevChild(QLabel* self, bool next);
struct miqt_string QLabel_tr2(const char* s, const char* c);
struct miqt_string QLabel_tr3(const char* s, const char* c, int n);
struct miqt_string QLabel_trUtf82(const char* s, const char* c);
struct miqt_string QLabel_trUtf83(const char* s, const char* c, int n);

bool QLabel_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_sizeHint(const void* self);
bool QLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QLabel_virtualbase_minimumSizeHint(const void* self);
bool QLabel_override_virtual_heightForWidth(void* self, intptr_t slot);
int QLabel_virtualbase_heightForWidth(const void* self, int param1);
bool QLabel_override_virtual_event(void* self, intptr_t slot);
bool QLabel_virtualbase_event(void* self, QEvent* e);
bool QLabel_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);
bool QLabel_override_virtual_paintEvent(void* self, intptr_t slot);
void QLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QLabel_override_virtual_changeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_changeEvent(void* self, QEvent* param1);
bool QLabel_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* ev);
bool QLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* ev);
bool QLabel_override_virtual_focusInEvent(void* self, intptr_t slot);
void QLabel_virtualbase_focusInEvent(void* self, QFocusEvent* ev);
bool QLabel_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* ev);
bool QLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QLabel_virtualbase_focusNextPrevChild(void* self, bool next);
bool QLabel_override_virtual_devType(void* self, intptr_t slot);
int QLabel_virtualbase_devType(const void* self);
bool QLabel_override_virtual_setVisible(void* self, intptr_t slot);
void QLabel_virtualbase_setVisible(void* self, bool visible);
bool QLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QLabel_virtualbase_hasHeightForWidth(const void* self);
bool QLabel_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QLabel_virtualbase_paintEngine(const void* self);
bool QLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QLabel_override_virtual_wheelEvent(void* self, intptr_t slot);
void QLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QLabel_override_virtual_enterEvent(void* self, intptr_t slot);
void QLabel_virtualbase_enterEvent(void* self, QEvent* event);
bool QLabel_override_virtual_leaveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_leaveEvent(void* self, QEvent* event);
bool QLabel_override_virtual_moveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QLabel_override_virtual_resizeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QLabel_override_virtual_closeEvent(void* self, intptr_t slot);
void QLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QLabel_override_virtual_tabletEvent(void* self, intptr_t slot);
void QLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QLabel_override_virtual_actionEvent(void* self, intptr_t slot);
void QLabel_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QLabel_override_virtual_dropEvent(void* self, intptr_t slot);
void QLabel_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QLabel_override_virtual_showEvent(void* self, intptr_t slot);
void QLabel_virtualbase_showEvent(void* self, QShowEvent* event);
bool QLabel_override_virtual_hideEvent(void* self, intptr_t slot);
void QLabel_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QLabel_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QLabel_override_virtual_metric(void* self, intptr_t slot);
int QLabel_virtualbase_metric(const void* self, int param1);
bool QLabel_override_virtual_initPainter(void* self, intptr_t slot);
void QLabel_virtualbase_initPainter(const void* self, QPainter* painter);
bool QLabel_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QLabel_virtualbase_redirected(const void* self, QPoint* offset);
bool QLabel_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QLabel_virtualbase_sharedPainter(const void* self);
bool QLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QLabel_virtualbase_inputMethodQuery(const void* self, int param1);
bool QLabel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLabel_override_virtual_timerEvent(void* self, intptr_t slot);
void QLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLabel_override_virtual_childEvent(void* self, intptr_t slot);
void QLabel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLabel_override_virtual_customEvent(void* self, intptr_t slot);
void QLabel_virtualbase_customEvent(void* self, QEvent* event);
bool QLabel_override_virtual_connectNotify(void* self, intptr_t slot);
void QLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLabel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QLabel_delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
