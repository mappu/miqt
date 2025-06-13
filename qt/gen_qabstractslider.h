#pragma once
#ifndef MIQT_QT_GEN_QABSTRACTSLIDER_H
#define MIQT_QT_GEN_QABSTRACTSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractSlider;
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
typedef struct QAbstractSlider QAbstractSlider;
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

QAbstractSlider* QAbstractSlider_new(QWidget* parent);
QAbstractSlider* QAbstractSlider_new2();
void QAbstractSlider_virtbase(QAbstractSlider* src, QWidget** outptr_QWidget);
QMetaObject* QAbstractSlider_metaObject(const QAbstractSlider* self);
void* QAbstractSlider_metacast(QAbstractSlider* self, const char* param1);
struct miqt_string QAbstractSlider_tr(const char* s);
struct miqt_string QAbstractSlider_trUtf8(const char* s);
int QAbstractSlider_orientation(const QAbstractSlider* self);
void QAbstractSlider_setMinimum(QAbstractSlider* self, int minimum);
int QAbstractSlider_minimum(const QAbstractSlider* self);
void QAbstractSlider_setMaximum(QAbstractSlider* self, int maximum);
int QAbstractSlider_maximum(const QAbstractSlider* self);
void QAbstractSlider_setSingleStep(QAbstractSlider* self, int singleStep);
int QAbstractSlider_singleStep(const QAbstractSlider* self);
void QAbstractSlider_setPageStep(QAbstractSlider* self, int pageStep);
int QAbstractSlider_pageStep(const QAbstractSlider* self);
void QAbstractSlider_setTracking(QAbstractSlider* self, bool enable);
bool QAbstractSlider_hasTracking(const QAbstractSlider* self);
void QAbstractSlider_setSliderDown(QAbstractSlider* self, bool sliderDown);
bool QAbstractSlider_isSliderDown(const QAbstractSlider* self);
void QAbstractSlider_setSliderPosition(QAbstractSlider* self, int sliderPosition);
int QAbstractSlider_sliderPosition(const QAbstractSlider* self);
void QAbstractSlider_setInvertedAppearance(QAbstractSlider* self, bool invertedAppearance);
bool QAbstractSlider_invertedAppearance(const QAbstractSlider* self);
void QAbstractSlider_setInvertedControls(QAbstractSlider* self, bool invertedControls);
bool QAbstractSlider_invertedControls(const QAbstractSlider* self);
int QAbstractSlider_value(const QAbstractSlider* self);
void QAbstractSlider_triggerAction(QAbstractSlider* self, int action);
void QAbstractSlider_setValue(QAbstractSlider* self, int value);
void QAbstractSlider_setOrientation(QAbstractSlider* self, int orientation);
void QAbstractSlider_setRange(QAbstractSlider* self, int min, int max);
void QAbstractSlider_valueChanged(QAbstractSlider* self, int value);
void QAbstractSlider_connect_valueChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_sliderPressed(QAbstractSlider* self);
void QAbstractSlider_connect_sliderPressed(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_sliderMoved(QAbstractSlider* self, int position);
void QAbstractSlider_connect_sliderMoved(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_sliderReleased(QAbstractSlider* self);
void QAbstractSlider_connect_sliderReleased(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_rangeChanged(QAbstractSlider* self, int min, int max);
void QAbstractSlider_connect_rangeChanged(QAbstractSlider* self, intptr_t slot);
void QAbstractSlider_actionTriggered(QAbstractSlider* self, int action);
void QAbstractSlider_connect_actionTriggered(QAbstractSlider* self, intptr_t slot);
bool QAbstractSlider_event(QAbstractSlider* self, QEvent* e);
void QAbstractSlider_sliderChange(QAbstractSlider* self, int change);
void QAbstractSlider_keyPressEvent(QAbstractSlider* self, QKeyEvent* ev);
void QAbstractSlider_timerEvent(QAbstractSlider* self, QTimerEvent* param1);
void QAbstractSlider_wheelEvent(QAbstractSlider* self, QWheelEvent* e);
void QAbstractSlider_changeEvent(QAbstractSlider* self, QEvent* e);
struct miqt_string QAbstractSlider_tr2(const char* s, const char* c);
struct miqt_string QAbstractSlider_tr3(const char* s, const char* c, int n);
struct miqt_string QAbstractSlider_trUtf82(const char* s, const char* c);
struct miqt_string QAbstractSlider_trUtf83(const char* s, const char* c, int n);

bool QAbstractSlider_override_virtual_event(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_event(void* self, QEvent* e);
bool QAbstractSlider_override_virtual_sliderChange(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_sliderChange(void* self, int change);
bool QAbstractSlider_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);
bool QAbstractSlider_override_virtual_timerEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1);
bool QAbstractSlider_override_virtual_wheelEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e);
bool QAbstractSlider_override_virtual_changeEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_changeEvent(void* self, QEvent* e);
bool QAbstractSlider_override_virtual_devType(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_devType(const void* self);
bool QAbstractSlider_override_virtual_setVisible(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_setVisible(void* self, bool visible);
bool QAbstractSlider_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QAbstractSlider_virtualbase_sizeHint(const void* self);
bool QAbstractSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QAbstractSlider_virtualbase_minimumSizeHint(const void* self);
bool QAbstractSlider_override_virtual_heightForWidth(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_heightForWidth(const void* self, int param1);
bool QAbstractSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_hasHeightForWidth(const void* self);
bool QAbstractSlider_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QAbstractSlider_virtualbase_paintEngine(const void* self);
bool QAbstractSlider_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QAbstractSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QAbstractSlider_override_virtual_focusInEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QAbstractSlider_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QAbstractSlider_override_virtual_enterEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_enterEvent(void* self, QEvent* event);
bool QAbstractSlider_override_virtual_leaveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event);
bool QAbstractSlider_override_virtual_paintEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QAbstractSlider_override_virtual_moveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QAbstractSlider_override_virtual_resizeEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QAbstractSlider_override_virtual_closeEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QAbstractSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QAbstractSlider_override_virtual_tabletEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QAbstractSlider_override_virtual_actionEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QAbstractSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QAbstractSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QAbstractSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QAbstractSlider_override_virtual_dropEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QAbstractSlider_override_virtual_showEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event);
bool QAbstractSlider_override_virtual_hideEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QAbstractSlider_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QAbstractSlider_override_virtual_metric(void* self, intptr_t slot);
int QAbstractSlider_virtualbase_metric(const void* self, int param1);
bool QAbstractSlider_override_virtual_initPainter(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter);
bool QAbstractSlider_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset);
bool QAbstractSlider_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QAbstractSlider_virtualbase_sharedPainter(const void* self);
bool QAbstractSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QAbstractSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1);
bool QAbstractSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next);
bool QAbstractSlider_override_virtual_eventFilter(void* self, intptr_t slot);
bool QAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QAbstractSlider_override_virtual_childEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event);
bool QAbstractSlider_override_virtual_customEvent(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_customEvent(void* self, QEvent* event);
bool QAbstractSlider_override_virtual_connectNotify(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QAbstractSlider_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QAbstractSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
int QAbstractSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
void QAbstractSlider_protectedbase_setRepeatAction2(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime);
void QAbstractSlider_protectedbase_setRepeatAction3(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime, int repeatTime);
void QAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QAbstractSlider_delete(QAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
