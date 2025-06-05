#pragma once
#ifndef MIQT_QT_GEN_QFONTCOMBOBOX_H
#define MIQT_QT_GEN_QFONTCOMBOBOX_H

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
class QComboBox;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFontComboBox;
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
class QStyleOptionComboBox;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QComboBox QComboBox;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontComboBox QFontComboBox;
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
typedef struct QStyleOptionComboBox QStyleOptionComboBox;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QFontComboBox* QFontComboBox_new(QWidget* parent);
QFontComboBox* QFontComboBox_new2();
void QFontComboBox_virtbase(QFontComboBox* src, QComboBox** outptr_QComboBox);
QMetaObject* QFontComboBox_metaObject(const QFontComboBox* self);
void* QFontComboBox_metacast(QFontComboBox* self, const char* param1);
struct miqt_string QFontComboBox_tr(const char* s);
struct miqt_string QFontComboBox_trUtf8(const char* s);
void QFontComboBox_setWritingSystem(QFontComboBox* self, int writingSystem);
int QFontComboBox_writingSystem(const QFontComboBox* self);
void QFontComboBox_setFontFilters(QFontComboBox* self, int filters);
int QFontComboBox_fontFilters(const QFontComboBox* self);
QFont* QFontComboBox_currentFont(const QFontComboBox* self);
QSize* QFontComboBox_sizeHint(const QFontComboBox* self);
void QFontComboBox_setCurrentFont(QFontComboBox* self, QFont* f);
void QFontComboBox_currentFontChanged(QFontComboBox* self, QFont* f);
void QFontComboBox_connect_currentFontChanged(QFontComboBox* self, intptr_t slot);
bool QFontComboBox_event(QFontComboBox* self, QEvent* e);
struct miqt_string QFontComboBox_tr2(const char* s, const char* c);
struct miqt_string QFontComboBox_tr3(const char* s, const char* c, int n);
struct miqt_string QFontComboBox_trUtf82(const char* s, const char* c);
struct miqt_string QFontComboBox_trUtf83(const char* s, const char* c, int n);

bool QFontComboBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_sizeHint(const void* self);
bool QFontComboBox_override_virtual_event(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_event(void* self, QEvent* e);
bool QFontComboBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QFontComboBox_virtualbase_minimumSizeHint(const void* self);
bool QFontComboBox_override_virtual_showPopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_showPopup(void* self);
bool QFontComboBox_override_virtual_hidePopup(void* self, intptr_t slot);
void QFontComboBox_virtualbase_hidePopup(void* self);
bool QFontComboBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QFontComboBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QFontComboBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_focusInEvent(void* self, QFocusEvent* e);
bool QFontComboBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
bool QFontComboBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_changeEvent(void* self, QEvent* e);
bool QFontComboBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_resizeEvent(void* self, QResizeEvent* e);
bool QFontComboBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_paintEvent(void* self, QPaintEvent* e);
bool QFontComboBox_override_virtual_showEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_showEvent(void* self, QShowEvent* e);
bool QFontComboBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_hideEvent(void* self, QHideEvent* e);
bool QFontComboBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QFontComboBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QFontComboBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool QFontComboBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);
bool QFontComboBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_wheelEvent(void* self, QWheelEvent* e);
bool QFontComboBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);
bool QFontComboBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QFontComboBox_override_virtual_devType(void* self, intptr_t slot);
int QFontComboBox_virtualbase_devType(const void* self);
bool QFontComboBox_override_virtual_setVisible(void* self, intptr_t slot);
void QFontComboBox_virtualbase_setVisible(void* self, bool visible);
bool QFontComboBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QFontComboBox_virtualbase_heightForWidth(const void* self, int param1);
bool QFontComboBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_hasHeightForWidth(const void* self);
bool QFontComboBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QFontComboBox_virtualbase_paintEngine(const void* self);
bool QFontComboBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QFontComboBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QFontComboBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_enterEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QFontComboBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QFontComboBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QFontComboBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QFontComboBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QFontComboBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QFontComboBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QFontComboBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QFontComboBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QFontComboBox_override_virtual_metric(void* self, intptr_t slot);
int QFontComboBox_virtualbase_metric(const void* self, int param1);
bool QFontComboBox_override_virtual_initPainter(void* self, intptr_t slot);
void QFontComboBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QFontComboBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QFontComboBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QFontComboBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QFontComboBox_virtualbase_sharedPainter(const void* self);
bool QFontComboBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QFontComboBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QFontComboBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QFontComboBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QFontComboBox_override_virtual_childEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QFontComboBox_override_virtual_customEvent(void* self, intptr_t slot);
void QFontComboBox_virtualbase_customEvent(void* self, QEvent* event);
bool QFontComboBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QFontComboBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QFontComboBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QFontComboBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QFontComboBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionComboBox* option);
void QFontComboBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QFontComboBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QFontComboBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QFontComboBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QFontComboBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QFontComboBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QFontComboBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QFontComboBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QFontComboBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QFontComboBox_delete(QFontComboBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
