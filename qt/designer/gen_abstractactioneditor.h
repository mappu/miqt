#pragma once
#ifndef MIQT_QT_DESIGNER_GEN_ABSTRACTACTIONEDITOR_H
#define MIQT_QT_DESIGNER_GEN_ABSTRACTACTIONEDITOR_H

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
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDesignerActionEditorInterface;
class QDesignerFormEditorInterface;
class QDesignerFormWindowInterface;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
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
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDesignerActionEditorInterface QDesignerActionEditorInterface;
typedef struct QDesignerFormEditorInterface QDesignerFormEditorInterface;
typedef struct QDesignerFormWindowInterface QDesignerFormWindowInterface;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
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

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new(QWidget* parent);
QDesignerActionEditorInterface* QDesignerActionEditorInterface_new2(QWidget* parent, int flags);
void QDesignerActionEditorInterface_virtbase(QDesignerActionEditorInterface* src, QWidget** outptr_QWidget);
QMetaObject* QDesignerActionEditorInterface_metaObject(const QDesignerActionEditorInterface* self);
void* QDesignerActionEditorInterface_metacast(QDesignerActionEditorInterface* self, const char* param1);
struct miqt_string QDesignerActionEditorInterface_tr(const char* s);
struct miqt_string QDesignerActionEditorInterface_trUtf8(const char* s);
QDesignerFormEditorInterface* QDesignerActionEditorInterface_core(const QDesignerActionEditorInterface* self);
void QDesignerActionEditorInterface_manageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_unmanageAction(QDesignerActionEditorInterface* self, QAction* action);
void QDesignerActionEditorInterface_setFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow);
struct miqt_string QDesignerActionEditorInterface_tr2(const char* s, const char* c);
struct miqt_string QDesignerActionEditorInterface_tr3(const char* s, const char* c, int n);
struct miqt_string QDesignerActionEditorInterface_trUtf82(const char* s, const char* c);
struct miqt_string QDesignerActionEditorInterface_trUtf83(const char* s, const char* c, int n);

bool QDesignerActionEditorInterface_override_virtual_core(void* self, intptr_t slot);
QDesignerFormEditorInterface* QDesignerActionEditorInterface_virtualbase_core(const void* self);
bool QDesignerActionEditorInterface_override_virtual_manageAction(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_manageAction(void* self, QAction* action);
bool QDesignerActionEditorInterface_override_virtual_unmanageAction(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_unmanageAction(void* self, QAction* action);
bool QDesignerActionEditorInterface_override_virtual_setFormWindow(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_setFormWindow(void* self, QDesignerFormWindowInterface* formWindow);
bool QDesignerActionEditorInterface_override_virtual_devType(void* self, intptr_t slot);
int QDesignerActionEditorInterface_virtualbase_devType(const void* self);
bool QDesignerActionEditorInterface_override_virtual_setVisible(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_setVisible(void* self, bool visible);
bool QDesignerActionEditorInterface_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QDesignerActionEditorInterface_virtualbase_sizeHint(const void* self);
bool QDesignerActionEditorInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QDesignerActionEditorInterface_virtualbase_minimumSizeHint(const void* self);
bool QDesignerActionEditorInterface_override_virtual_heightForWidth(void* self, intptr_t slot);
int QDesignerActionEditorInterface_virtualbase_heightForWidth(const void* self, int param1);
bool QDesignerActionEditorInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QDesignerActionEditorInterface_virtualbase_hasHeightForWidth(const void* self);
bool QDesignerActionEditorInterface_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QDesignerActionEditorInterface_virtualbase_paintEngine(const void* self);
bool QDesignerActionEditorInterface_override_virtual_event(void* self, intptr_t slot);
bool QDesignerActionEditorInterface_virtualbase_event(void* self, QEvent* event);
bool QDesignerActionEditorInterface_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QDesignerActionEditorInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QDesignerActionEditorInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QDesignerActionEditorInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QDesignerActionEditorInterface_override_virtual_wheelEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QDesignerActionEditorInterface_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QDesignerActionEditorInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QDesignerActionEditorInterface_override_virtual_focusInEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QDesignerActionEditorInterface_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QDesignerActionEditorInterface_override_virtual_enterEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_enterEvent(void* self, QEvent* event);
bool QDesignerActionEditorInterface_override_virtual_leaveEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_leaveEvent(void* self, QEvent* event);
bool QDesignerActionEditorInterface_override_virtual_paintEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QDesignerActionEditorInterface_override_virtual_moveEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QDesignerActionEditorInterface_override_virtual_resizeEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QDesignerActionEditorInterface_override_virtual_closeEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QDesignerActionEditorInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QDesignerActionEditorInterface_override_virtual_tabletEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QDesignerActionEditorInterface_override_virtual_actionEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QDesignerActionEditorInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QDesignerActionEditorInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QDesignerActionEditorInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QDesignerActionEditorInterface_override_virtual_dropEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QDesignerActionEditorInterface_override_virtual_showEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_showEvent(void* self, QShowEvent* event);
bool QDesignerActionEditorInterface_override_virtual_hideEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QDesignerActionEditorInterface_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QDesignerActionEditorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QDesignerActionEditorInterface_override_virtual_changeEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_changeEvent(void* self, QEvent* param1);
bool QDesignerActionEditorInterface_override_virtual_metric(void* self, intptr_t slot);
int QDesignerActionEditorInterface_virtualbase_metric(const void* self, int param1);
bool QDesignerActionEditorInterface_override_virtual_initPainter(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_initPainter(const void* self, QPainter* painter);
bool QDesignerActionEditorInterface_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QDesignerActionEditorInterface_virtualbase_redirected(const void* self, QPoint* offset);
bool QDesignerActionEditorInterface_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QDesignerActionEditorInterface_virtualbase_sharedPainter(const void* self);
bool QDesignerActionEditorInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QDesignerActionEditorInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QDesignerActionEditorInterface_virtualbase_inputMethodQuery(const void* self, int param1);
bool QDesignerActionEditorInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QDesignerActionEditorInterface_virtualbase_focusNextPrevChild(void* self, bool next);
bool QDesignerActionEditorInterface_override_virtual_eventFilter(void* self, intptr_t slot);
bool QDesignerActionEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QDesignerActionEditorInterface_override_virtual_timerEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QDesignerActionEditorInterface_override_virtual_childEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event);
bool QDesignerActionEditorInterface_override_virtual_customEvent(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_customEvent(void* self, QEvent* event);
bool QDesignerActionEditorInterface_override_virtual_connectNotify(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QDesignerActionEditorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QDesignerActionEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QDesignerActionEditorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QDesignerActionEditorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QDesignerActionEditorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QDesignerActionEditorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QDesignerActionEditorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QDesignerActionEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QDesignerActionEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QDesignerActionEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QDesignerActionEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QDesignerActionEditorInterface_delete(QDesignerActionEditorInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
