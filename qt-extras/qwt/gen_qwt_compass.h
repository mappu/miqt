#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_COMPASS_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_COMPASS_H

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
class QFont;
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
class QPalette;
class QPoint;
class QPointF;
class QRect;
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
class QwtCompass;
class QwtCompassRose;
class QwtCompassScaleDraw;
class QwtDial;
class QwtRoundScaleDraw;
class QwtText;
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
typedef struct QFont QFont;
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
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QRect QRect;
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
typedef struct QwtCompass QwtCompass;
typedef struct QwtCompassRose QwtCompassRose;
typedef struct QwtCompassScaleDraw QwtCompassScaleDraw;
typedef struct QwtDial QwtDial;
typedef struct QwtRoundScaleDraw QwtRoundScaleDraw;
typedef struct QwtText QwtText;
#endif

QwtCompassScaleDraw* QwtCompassScaleDraw_new();
QwtCompassScaleDraw* QwtCompassScaleDraw_new2(struct miqt_map /* of double to struct miqt_string */  map);
void QwtCompassScaleDraw_virtbase(QwtCompassScaleDraw* src, QwtRoundScaleDraw** outptr_QwtRoundScaleDraw);
void QwtCompassScaleDraw_setLabelMap(QwtCompassScaleDraw* self, struct miqt_map /* of double to struct miqt_string */  map);
struct miqt_map /* of double to struct miqt_string */  QwtCompassScaleDraw_labelMap(const QwtCompassScaleDraw* self);
QwtText* QwtCompassScaleDraw_label(const QwtCompassScaleDraw* self, double value);

bool QwtCompassScaleDraw_override_virtual_label(void* self, intptr_t slot);
QwtText* QwtCompassScaleDraw_virtualbase_label(const void* self, double value);
bool QwtCompassScaleDraw_override_virtual_extent(void* self, intptr_t slot);
double QwtCompassScaleDraw_virtualbase_extent(const void* self, QFont* param1);
bool QwtCompassScaleDraw_override_virtual_drawTick(void* self, intptr_t slot);
void QwtCompassScaleDraw_virtualbase_drawTick(const void* self, QPainter* param1, double value, double len);
bool QwtCompassScaleDraw_override_virtual_drawBackbone(void* self, intptr_t slot);
void QwtCompassScaleDraw_virtualbase_drawBackbone(const void* self, QPainter* param1);
bool QwtCompassScaleDraw_override_virtual_drawLabel(void* self, intptr_t slot);
void QwtCompassScaleDraw_virtualbase_drawLabel(const void* self, QPainter* param1, double val);
bool QwtCompassScaleDraw_override_virtual_draw(void* self, intptr_t slot);
void QwtCompassScaleDraw_virtualbase_draw(const void* self, QPainter* param1, QPalette* param2);

void QwtCompassScaleDraw_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
QwtText* QwtCompassScaleDraw_protectedbase_tickLabel(bool* _dynamic_cast_ok, const void* self, QFont* param1, double value);

void QwtCompassScaleDraw_delete(QwtCompassScaleDraw* self);

QwtCompass* QwtCompass_new(QWidget* parent);
QwtCompass* QwtCompass_new2();
void QwtCompass_virtbase(QwtCompass* src, QwtDial** outptr_QwtDial);
QMetaObject* QwtCompass_metaObject(const QwtCompass* self);
void* QwtCompass_metacast(QwtCompass* self, const char* param1);
struct miqt_string QwtCompass_tr(const char* s);
struct miqt_string QwtCompass_trUtf8(const char* s);
void QwtCompass_setRose(QwtCompass* self, QwtCompassRose* rose);
QwtCompassRose* QwtCompass_rose(const QwtCompass* self);
QwtCompassRose* QwtCompass_rose2(QwtCompass* self);
void QwtCompass_drawRose(const QwtCompass* self, QPainter* param1, QPointF* center, double radius, double north, int param5);
void QwtCompass_drawScaleContents(const QwtCompass* self, QPainter* param1, QPointF* center, double radius);
void QwtCompass_keyPressEvent(QwtCompass* self, QKeyEvent* param1);
struct miqt_string QwtCompass_tr2(const char* s, const char* c);
struct miqt_string QwtCompass_tr3(const char* s, const char* c, int n);
struct miqt_string QwtCompass_trUtf82(const char* s, const char* c);
struct miqt_string QwtCompass_trUtf83(const char* s, const char* c, int n);

bool QwtCompass_override_virtual_drawRose(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawRose(const void* self, QPainter* param1, QPointF* center, double radius, double north, int param5);
bool QwtCompass_override_virtual_drawScaleContents(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawScaleContents(const void* self, QPainter* param1, QPointF* center, double radius);
bool QwtCompass_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);
bool QwtCompass_override_virtual_setOrigin(void* self, intptr_t slot);
void QwtCompass_virtualbase_setOrigin(void* self, double origin);
bool QwtCompass_override_virtual_scaleInnerRect(void* self, intptr_t slot);
QRect* QwtCompass_virtualbase_scaleInnerRect(const void* self);
bool QwtCompass_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QwtCompass_virtualbase_sizeHint(const void* self);
bool QwtCompass_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QwtCompass_virtualbase_minimumSizeHint(const void* self);
bool QwtCompass_override_virtual_wheelEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QwtCompass_override_virtual_paintEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QwtCompass_override_virtual_changeEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_changeEvent(void* self, QEvent* param1);
bool QwtCompass_override_virtual_drawFrame(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawFrame(void* self, QPainter* param1);
bool QwtCompass_override_virtual_drawContents(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawContents(const void* self, QPainter* param1);
bool QwtCompass_override_virtual_drawFocusIndicator(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);
bool QwtCompass_override_virtual_drawScale(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);
bool QwtCompass_override_virtual_drawNeedle(void* self, intptr_t slot);
void QwtCompass_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);
bool QwtCompass_override_virtual_scrolledTo(void* self, intptr_t slot);
double QwtCompass_virtualbase_scrolledTo(const void* self, QPoint* param1);
bool QwtCompass_override_virtual_isScrollPosition(void* self, intptr_t slot);
bool QwtCompass_virtualbase_isScrollPosition(const void* self, QPoint* param1);
bool QwtCompass_override_virtual_sliderChange(void* self, intptr_t slot);
void QwtCompass_virtualbase_sliderChange(void* self);
bool QwtCompass_override_virtual_scaleChange(void* self, intptr_t slot);
void QwtCompass_virtualbase_scaleChange(void* self);
bool QwtCompass_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);
bool QwtCompass_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);
bool QwtCompass_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);
bool QwtCompass_override_virtual_devType(void* self, intptr_t slot);
int QwtCompass_virtualbase_devType(const void* self);
bool QwtCompass_override_virtual_setVisible(void* self, intptr_t slot);
void QwtCompass_virtualbase_setVisible(void* self, bool visible);
bool QwtCompass_override_virtual_heightForWidth(void* self, intptr_t slot);
int QwtCompass_virtualbase_heightForWidth(const void* self, int param1);
bool QwtCompass_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QwtCompass_virtualbase_hasHeightForWidth(const void* self);
bool QwtCompass_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QwtCompass_virtualbase_paintEngine(const void* self);
bool QwtCompass_override_virtual_event(void* self, intptr_t slot);
bool QwtCompass_virtualbase_event(void* self, QEvent* event);
bool QwtCompass_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QwtCompass_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QwtCompass_override_virtual_focusInEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QwtCompass_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QwtCompass_override_virtual_enterEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_enterEvent(void* self, QEvent* event);
bool QwtCompass_override_virtual_leaveEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_leaveEvent(void* self, QEvent* event);
bool QwtCompass_override_virtual_moveEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QwtCompass_override_virtual_resizeEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QwtCompass_override_virtual_closeEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QwtCompass_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QwtCompass_override_virtual_tabletEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QwtCompass_override_virtual_actionEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QwtCompass_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QwtCompass_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QwtCompass_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QwtCompass_override_virtual_dropEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QwtCompass_override_virtual_showEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_showEvent(void* self, QShowEvent* event);
bool QwtCompass_override_virtual_hideEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QwtCompass_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QwtCompass_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QwtCompass_override_virtual_metric(void* self, intptr_t slot);
int QwtCompass_virtualbase_metric(const void* self, int param1);
bool QwtCompass_override_virtual_initPainter(void* self, intptr_t slot);
void QwtCompass_virtualbase_initPainter(const void* self, QPainter* painter);
bool QwtCompass_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QwtCompass_virtualbase_redirected(const void* self, QPoint* offset);
bool QwtCompass_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QwtCompass_virtualbase_sharedPainter(const void* self);
bool QwtCompass_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QwtCompass_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QwtCompass_virtualbase_inputMethodQuery(const void* self, int param1);
bool QwtCompass_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QwtCompass_virtualbase_focusNextPrevChild(void* self, bool next);
bool QwtCompass_override_virtual_eventFilter(void* self, intptr_t slot);
bool QwtCompass_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QwtCompass_override_virtual_timerEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QwtCompass_override_virtual_childEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_childEvent(void* self, QChildEvent* event);
bool QwtCompass_override_virtual_customEvent(void* self, intptr_t slot);
void QwtCompass_virtualbase_customEvent(void* self, QEvent* event);
bool QwtCompass_override_virtual_connectNotify(void* self, intptr_t slot);
void QwtCompass_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QwtCompass_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QwtCompass_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void QwtCompass_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
void QwtCompass_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
double QwtCompass_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
void QwtCompass_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
void QwtCompass_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
QwtAbstractScaleDraw* QwtCompass_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
void QwtCompass_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QwtCompass_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QwtCompass_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QwtCompass_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QwtCompass_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QwtCompass_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QwtCompass_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QwtCompass_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QwtCompass_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QwtCompass_delete(QwtCompass* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
