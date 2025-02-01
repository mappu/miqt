#pragma once
#ifndef MIQT_QT_GEN_QGROUPBOX_H
#define MIQT_QT_GEN_QGROUPBOX_H

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
class QGroupBox;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QMetaMethod;
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
typedef struct QGroupBox QGroupBox;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaMethod QMetaMethod;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QGroupBox* QGroupBox_new(QWidget* parent);
QGroupBox* QGroupBox_new2();
QGroupBox* QGroupBox_new3(struct miqt_string title);
QGroupBox* QGroupBox_new4(struct miqt_string title, QWidget* parent);
void QGroupBox_virtbase(QGroupBox* src, QWidget** outptr_QWidget);
QMetaObject* QGroupBox_metaObject(const QGroupBox* self);
void* QGroupBox_metacast(QGroupBox* self, const char* param1);
struct miqt_string QGroupBox_tr(const char* s);
struct miqt_string QGroupBox_trUtf8(const char* s);
struct miqt_string QGroupBox_title(const QGroupBox* self);
void QGroupBox_setTitle(QGroupBox* self, struct miqt_string title);
int QGroupBox_alignment(const QGroupBox* self);
void QGroupBox_setAlignment(QGroupBox* self, int alignment);
QSize* QGroupBox_minimumSizeHint(const QGroupBox* self);
bool QGroupBox_isFlat(const QGroupBox* self);
void QGroupBox_setFlat(QGroupBox* self, bool flat);
bool QGroupBox_isCheckable(const QGroupBox* self);
void QGroupBox_setCheckable(QGroupBox* self, bool checkable);
bool QGroupBox_isChecked(const QGroupBox* self);
void QGroupBox_setChecked(QGroupBox* self, bool checked);
void QGroupBox_clicked(QGroupBox* self);
void QGroupBox_connect_clicked(QGroupBox* self, intptr_t slot);
void QGroupBox_toggled(QGroupBox* self, bool param1);
void QGroupBox_connect_toggled(QGroupBox* self, intptr_t slot);
bool QGroupBox_event(QGroupBox* self, QEvent* event);
void QGroupBox_childEvent(QGroupBox* self, QChildEvent* event);
void QGroupBox_resizeEvent(QGroupBox* self, QResizeEvent* event);
void QGroupBox_paintEvent(QGroupBox* self, QPaintEvent* event);
void QGroupBox_focusInEvent(QGroupBox* self, QFocusEvent* event);
void QGroupBox_changeEvent(QGroupBox* self, QEvent* event);
void QGroupBox_mousePressEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_mouseMoveEvent(QGroupBox* self, QMouseEvent* event);
void QGroupBox_mouseReleaseEvent(QGroupBox* self, QMouseEvent* event);
struct miqt_string QGroupBox_tr2(const char* s, const char* c);
struct miqt_string QGroupBox_tr3(const char* s, const char* c, int n);
struct miqt_string QGroupBox_trUtf82(const char* s, const char* c);
struct miqt_string QGroupBox_trUtf83(const char* s, const char* c, int n);
void QGroupBox_clicked1(QGroupBox* self, bool checked);
void QGroupBox_connect_clicked1(QGroupBox* self, intptr_t slot);
bool QGroupBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QGroupBox_virtualbase_minimumSizeHint(const void* self);
bool QGroupBox_override_virtual_event(void* self, intptr_t slot);
bool QGroupBox_virtualbase_event(void* self, QEvent* event);
bool QGroupBox_override_virtual_childEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGroupBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QGroupBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QGroupBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QGroupBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_changeEvent(void* self, QEvent* event);
bool QGroupBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QGroupBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QGroupBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QGroupBox_override_virtual_devType(void* self, intptr_t slot);
int QGroupBox_virtualbase_devType(const void* self);
bool QGroupBox_override_virtual_setVisible(void* self, intptr_t slot);
void QGroupBox_virtualbase_setVisible(void* self, bool visible);
bool QGroupBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QGroupBox_virtualbase_sizeHint(const void* self);
bool QGroupBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QGroupBox_virtualbase_heightForWidth(const void* self, int param1);
bool QGroupBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QGroupBox_virtualbase_hasHeightForWidth(const void* self);
bool QGroupBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QGroupBox_virtualbase_paintEngine(const void* self);
bool QGroupBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QGroupBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QGroupBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QGroupBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QGroupBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QGroupBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_enterEvent(void* self, QEvent* event);
bool QGroupBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QGroupBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QGroupBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QGroupBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QGroupBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QGroupBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QGroupBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QGroupBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QGroupBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QGroupBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QGroupBox_override_virtual_showEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_showEvent(void* self, QShowEvent* event);
bool QGroupBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QGroupBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QGroupBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QGroupBox_override_virtual_metric(void* self, intptr_t slot);
int QGroupBox_virtualbase_metric(const void* self, int param1);
bool QGroupBox_override_virtual_initPainter(void* self, intptr_t slot);
void QGroupBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QGroupBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QGroupBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QGroupBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QGroupBox_virtualbase_sharedPainter(const void* self);
bool QGroupBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QGroupBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QGroupBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QGroupBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QGroupBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QGroupBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGroupBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGroupBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGroupBox_override_virtual_customEvent(void* self, intptr_t slot);
void QGroupBox_virtualbase_customEvent(void* self, QEvent* event);
bool QGroupBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QGroupBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGroupBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGroupBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QGroupBox_delete(QGroupBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
