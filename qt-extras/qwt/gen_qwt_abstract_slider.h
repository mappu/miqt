#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SLIDER_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_ABSTRACT_SLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

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
class QwtAbstractScale;
class QwtAbstractScaleDraw;
class QwtAbstractSlider;
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
typedef struct QwtAbstractScale QwtAbstractScale;
typedef struct QwtAbstractScaleDraw QwtAbstractScaleDraw;
typedef struct QwtAbstractSlider QwtAbstractSlider;
#endif

QwtAbstractSlider* QwtAbstractSlider_new(QWidget* parent);
QwtAbstractSlider* QwtAbstractSlider_new2();
void QwtAbstractSlider_virtbase(QwtAbstractSlider* src, QwtAbstractScale** outptr_QwtAbstractScale);
QMetaObject* QwtAbstractSlider_metaObject(const QwtAbstractSlider* self);
void* QwtAbstractSlider_metacast(QwtAbstractSlider* self, const char* param1);
struct miqt_string QwtAbstractSlider_tr(const char* s);
struct miqt_string QwtAbstractSlider_trUtf8(const char* s);
void QwtAbstractSlider_setValid(QwtAbstractSlider* self, bool valid);
bool QwtAbstractSlider_isValid(const QwtAbstractSlider* self);
double QwtAbstractSlider_value(const QwtAbstractSlider* self);
void QwtAbstractSlider_setWrapping(QwtAbstractSlider* self, bool wrapping);
bool QwtAbstractSlider_wrapping(const QwtAbstractSlider* self);
void QwtAbstractSlider_setTotalSteps(QwtAbstractSlider* self, unsigned int totalSteps);
unsigned int QwtAbstractSlider_totalSteps(const QwtAbstractSlider* self);
void QwtAbstractSlider_setSingleSteps(QwtAbstractSlider* self, unsigned int singleSteps);
unsigned int QwtAbstractSlider_singleSteps(const QwtAbstractSlider* self);
void QwtAbstractSlider_setPageSteps(QwtAbstractSlider* self, unsigned int pageSteps);
unsigned int QwtAbstractSlider_pageSteps(const QwtAbstractSlider* self);
void QwtAbstractSlider_setStepAlignment(QwtAbstractSlider* self, bool stepAlignment);
bool QwtAbstractSlider_stepAlignment(const QwtAbstractSlider* self);
void QwtAbstractSlider_setTracking(QwtAbstractSlider* self, bool tracking);
bool QwtAbstractSlider_isTracking(const QwtAbstractSlider* self);
void QwtAbstractSlider_setReadOnly(QwtAbstractSlider* self, bool readOnly);
bool QwtAbstractSlider_isReadOnly(const QwtAbstractSlider* self);
void QwtAbstractSlider_setInvertedControls(QwtAbstractSlider* self, bool invertedControls);
bool QwtAbstractSlider_invertedControls(const QwtAbstractSlider* self);
void QwtAbstractSlider_setValue(QwtAbstractSlider* self, double value);
void QwtAbstractSlider_valueChanged(QwtAbstractSlider* self, double value);
void QwtAbstractSlider_connect_valueChanged(QwtAbstractSlider* self, intptr_t slot);
void QwtAbstractSlider_sliderPressed(QwtAbstractSlider* self);
void QwtAbstractSlider_connect_sliderPressed(QwtAbstractSlider* self, intptr_t slot);
void QwtAbstractSlider_sliderReleased(QwtAbstractSlider* self);
void QwtAbstractSlider_connect_sliderReleased(QwtAbstractSlider* self, intptr_t slot);
void QwtAbstractSlider_sliderMoved(QwtAbstractSlider* self, double value);
void QwtAbstractSlider_connect_sliderMoved(QwtAbstractSlider* self, intptr_t slot);
void QwtAbstractSlider_mousePressEvent(QwtAbstractSlider* self, QMouseEvent* param1);
void QwtAbstractSlider_mouseReleaseEvent(QwtAbstractSlider* self, QMouseEvent* param1);
void QwtAbstractSlider_mouseMoveEvent(QwtAbstractSlider* self, QMouseEvent* param1);
void QwtAbstractSlider_keyPressEvent(QwtAbstractSlider* self, QKeyEvent* param1);
void QwtAbstractSlider_wheelEvent(QwtAbstractSlider* self, QWheelEvent* param1);
bool QwtAbstractSlider_isScrollPosition(const QwtAbstractSlider* self, QPoint* pos);
double QwtAbstractSlider_scrolledTo(const QwtAbstractSlider* self, QPoint* pos);
void QwtAbstractSlider_scaleChange(QwtAbstractSlider* self);
void QwtAbstractSlider_sliderChange(QwtAbstractSlider* self);
struct miqt_string QwtAbstractSlider_tr2(const char* s, const char* c);
struct miqt_string QwtAbstractSlider_tr3(const char* s, const char* c, int n);
struct miqt_string QwtAbstractSlider_trUtf82(const char* s, const char* c);
struct miqt_string QwtAbstractSlider_trUtf83(const char* s, const char* c, int n);

bool QwtAbstractSlider_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtAbstractSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtAbstractSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtAbstractSlider_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtAbstractSlider_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QwtAbstractSlider_override_virtual_isScrollPosition(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_isScrollPosition(const void* self, QPoint* pos);
bool QwtAbstractSlider_override_virtual_scrolledTo(void* self, intptr_t slot);
double QwtAbstractSlider_virtualbase_scrolledTo(const void* self, QPoint* pos);
bool QwtAbstractSlider_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_scaleChange(void* self);
bool QwtAbstractSlider_override_virtual_sliderChange(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_sliderChange(void* self);
bool QwtAbstractSlider_override_virtual_devType(void* self, intptr_t slot);
int QwtAbstractSlider_virtualbase_devType(const void* self);
bool QwtAbstractSlider_override_virtual_setVisible(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_setVisible(void* self, bool visible);
bool QwtAbstractSlider_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtAbstractSlider_virtualbase_sizeHint(const void* self);
bool QwtAbstractSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtAbstractSlider_virtualbase_minimumSizeHint(const void* self);
bool QwtAbstractSlider_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtAbstractSlider_virtualbase_heightForWidth(const void* self, int param1);
bool QwtAbstractSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_hasHeightForWidth(const void* self);
bool QwtAbstractSlider_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtAbstractSlider_virtualbase_paintEngine(const void* self);
bool QwtAbstractSlider_override_virtual_event(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_event(void* self, QEvent* event);
bool QwtAbstractSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtAbstractSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtAbstractSlider_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtAbstractSlider_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtAbstractSlider_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtAbstractSlider_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtAbstractSlider_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event);
bool QwtAbstractSlider_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtAbstractSlider_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtAbstractSlider_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtAbstractSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtAbstractSlider_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtAbstractSlider_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtAbstractSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtAbstractSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtAbstractSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtAbstractSlider_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtAbstractSlider_override_virtual_showEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtAbstractSlider_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtAbstractSlider_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtAbstractSlider_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtAbstractSlider_override_virtual_metric(void* self, intptr_t slot);
int QwtAbstractSlider_virtualbase_metric(const void* self, int param1);
bool QwtAbstractSlider_override_virtual_initPainter(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtAbstractSlider_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtAbstractSlider_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtAbstractSlider_virtualbase_sharedPainter(const void* self);
bool QwtAbstractSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtAbstractSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtAbstractSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtAbstractSlider_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtAbstractSlider_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtAbstractSlider_override_virtual_childEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtAbstractSlider_override_virtual_customEvent(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_customEvent(void* self, QEvent* event);
bool QwtAbstractSlider_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtAbstractSlider_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtAbstractSlider_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
double QwtAbstractSlider_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
void QwtAbstractSlider_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtAbstractSlider_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtAbstractSlider_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
void QwtAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtAbstractSlider_delete(QwtAbstractSlider* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
