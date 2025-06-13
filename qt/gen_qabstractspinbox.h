#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTSPINBOX_H
#define MIQT_QT_GEN_QABSTRACTSPINBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSpinBox;
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
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLineEdit;
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
class QStyleOptionSpinBox;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
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
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
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
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent);
QAbstractSpinBox* QAbstractSpinBox_new2();
void QAbstractSpinBox_virtbase(QAbstractSpinBox* src, QWidget** outptr_QWidget);
QMetaObject* QAbstractSpinBox_metaObject(const QAbstractSpinBox* self);
void* QAbstractSpinBox_metacast(QAbstractSpinBox* self, const char* param1);
struct miqt_string QAbstractSpinBox_tr(const char* s);
struct miqt_string QAbstractSpinBox_trUtf8(const char* s);
int QAbstractSpinBox_buttonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_setButtonSymbols(QAbstractSpinBox* self, int bs);
void QAbstractSpinBox_setCorrectionMode(QAbstractSpinBox* self, int cm);
int QAbstractSpinBox_correctionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_hasAcceptableInput(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_text(const QAbstractSpinBox* self);
struct miqt_string QAbstractSpinBox_specialValueText(const QAbstractSpinBox* self);
void QAbstractSpinBox_setSpecialValueText(QAbstractSpinBox* self, struct miqt_string txt);
bool QAbstractSpinBox_wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_setWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_setReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_isReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_setKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_keyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_setAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_setFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_hasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_setAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_isAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_setGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_isGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_sizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_minimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_interpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_event(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_inputMethodQuery(const QAbstractSpinBox* self, int param1);
int QAbstractSpinBox_validate(const QAbstractSpinBox* self, struct miqt_string input, int* pos);
void QAbstractSpinBox_fixup(const QAbstractSpinBox* self, struct miqt_string input);
void QAbstractSpinBox_stepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_stepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_stepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_selectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_clear(QAbstractSpinBox* self);
void QAbstractSpinBox_resizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_keyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_keyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_wheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_focusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_focusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_contextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_changeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_closeEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_hideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_mousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_mouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_mouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_timerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_paintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_showEvent(QAbstractSpinBox* self, QShowEvent* event);
int QAbstractSpinBox_stepEnabled(const QAbstractSpinBox* self);
void QAbstractSpinBox_editingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_connect_editingFinished(QAbstractSpinBox* self, intptr_t slot);
struct miqt_string QAbstractSpinBox_tr2(const char* s, const char* c);
struct miqt_string QAbstractSpinBox_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractSpinBox_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractSpinBox_trUtf83(const char* s, const char* c, int n);

bool QAbstractSpinBox_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractSpinBox_virtualbase_sizeHint(const void* self);
bool QAbstractSpinBox_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractSpinBox_virtualbase_minimumSizeHint(const void* self);
bool QAbstractSpinBox_override_virtual_event(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_event(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractSpinBox_virtualbase_inputMethodQuery(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_validate(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_validate(const void* self, struct miqt_string input, int* pos);
bool QAbstractSpinBox_override_virtual_fixup(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_fixup(const void* self, struct miqt_string input);
bool QAbstractSpinBox_override_virtual_stepBy(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_stepBy(void* self, int steps);
bool QAbstractSpinBox_override_virtual_clear(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_clear(void* self);
bool QAbstractSpinBox_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QAbstractSpinBox_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QAbstractSpinBox_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractSpinBox_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QAbstractSpinBox_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QAbstractSpinBox_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QAbstractSpinBox_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QAbstractSpinBox_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_changeEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QAbstractSpinBox_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractSpinBox_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QAbstractSpinBox_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QAbstractSpinBox_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_showEvent(void* self, QShowEvent* event);
bool QAbstractSpinBox_override_virtual_stepEnabled(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_stepEnabled(const void* self);
bool QAbstractSpinBox_override_virtual_devType(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_devType(const void* self);
bool QAbstractSpinBox_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_setVisible(void* self, bool visible);
bool QAbstractSpinBox_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractSpinBox_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractSpinBox_virtualbase_paintEngine(const void* self);
bool QAbstractSpinBox_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractSpinBox_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_enterEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractSpinBox_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractSpinBox_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractSpinBox_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractSpinBox_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractSpinBox_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractSpinBox_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QAbstractSpinBox_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QAbstractSpinBox_override_virtual_metric(void* self, intptr_t slot);
int QAbstractSpinBox_virtualbase_metric(const void* self, int param1);
bool QAbstractSpinBox_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractSpinBox_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractSpinBox_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractSpinBox_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractSpinBox_virtualbase_sharedPainter(const void* self);
bool QAbstractSpinBox_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractSpinBox_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractSpinBox_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractSpinBox_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractSpinBox_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractSpinBox_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractSpinBox_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractSpinBox_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractSpinBox_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QAbstractSpinBox_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionSpinBox* option);
QLineEdit* QAbstractSpinBox_protectedbase_lineEdit(bool* _dynamic_cast_ok, const void* self);
void QAbstractSpinBox_protectedbase_setLineEdit(bool* _dynamic_cast_ok, void* self, QLineEdit* edit);
void QAbstractSpinBox_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QAbstractSpinBox_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QAbstractSpinBox_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QAbstractSpinBox_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QAbstractSpinBox_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QAbstractSpinBox_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractSpinBox_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractSpinBox_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractSpinBox_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAbstractSpinBox_delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
