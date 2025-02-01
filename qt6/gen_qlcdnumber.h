#pragma once
#ifndef MIQT_QT6_GEN_QLCDNUMBER_H
#define MIQT_QT6_GEN_QLCDNUMBER_H

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
class QEnterEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QInputMethodEvent;
class QKeyEvent;
class QLCDNumber;
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
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLCDNumber QLCDNumber;
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
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QLCDNumber* QLCDNumber_new(QWidget* parent);
QLCDNumber* QLCDNumber_new2();
QLCDNumber* QLCDNumber_new3(unsigned int numDigits);
QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent);
void QLCDNumber_virtbase(QLCDNumber* src, QFrame** outptr_QFrame);
QMetaObject* QLCDNumber_metaObject(const QLCDNumber* self);
void* QLCDNumber_metacast(QLCDNumber* self, const char* param1);
struct miqt_string QLCDNumber_tr(const char* s);
bool QLCDNumber_smallDecimalPoint(const QLCDNumber* self);
int QLCDNumber_digitCount(const QLCDNumber* self);
void QLCDNumber_setDigitCount(QLCDNumber* self, int nDigits);
bool QLCDNumber_checkOverflow(const QLCDNumber* self, double num);
bool QLCDNumber_checkOverflowWithNum(const QLCDNumber* self, int num);
int QLCDNumber_mode(const QLCDNumber* self);
void QLCDNumber_setMode(QLCDNumber* self, int mode);
int QLCDNumber_segmentStyle(const QLCDNumber* self);
void QLCDNumber_setSegmentStyle(QLCDNumber* self, int segmentStyle);
double QLCDNumber_value(const QLCDNumber* self);
int QLCDNumber_intValue(const QLCDNumber* self);
QSize* QLCDNumber_sizeHint(const QLCDNumber* self);
void QLCDNumber_display(QLCDNumber* self, struct miqt_string str);
void QLCDNumber_displayWithNum(QLCDNumber* self, int num);
void QLCDNumber_display2(QLCDNumber* self, double num);
void QLCDNumber_setHexMode(QLCDNumber* self);
void QLCDNumber_setDecMode(QLCDNumber* self);
void QLCDNumber_setOctMode(QLCDNumber* self);
void QLCDNumber_setBinMode(QLCDNumber* self);
void QLCDNumber_setSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint);
void QLCDNumber_overflow(QLCDNumber* self);
void QLCDNumber_connect_overflow(QLCDNumber* self, intptr_t slot);
bool QLCDNumber_event(QLCDNumber* self, QEvent* e);
void QLCDNumber_paintEvent(QLCDNumber* self, QPaintEvent* param1);
struct miqt_string QLCDNumber_tr2(const char* s, const char* c);
struct miqt_string QLCDNumber_tr3(const char* s, const char* c, int n);
bool QLCDNumber_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QLCDNumber_virtualbase_sizeHint(const void* self);
bool QLCDNumber_override_virtual_event(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_event(void* self, QEvent* e);
bool QLCDNumber_override_virtual_paintEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_paintEvent(void* self, QPaintEvent* param1);
bool QLCDNumber_override_virtual_changeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_changeEvent(void* self, QEvent* param1);
bool QLCDNumber_override_virtual_initStyleOption(void* self, intptr_t slot);
void QLCDNumber_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);
bool QLCDNumber_override_virtual_devType(void* self, intptr_t slot);
int QLCDNumber_virtualbase_devType(const void* self);
bool QLCDNumber_override_virtual_setVisible(void* self, intptr_t slot);
void QLCDNumber_virtualbase_setVisible(void* self, bool visible);
bool QLCDNumber_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QLCDNumber_virtualbase_minimumSizeHint(const void* self);
bool QLCDNumber_override_virtual_heightForWidth(void* self, intptr_t slot);
int QLCDNumber_virtualbase_heightForWidth(const void* self, int param1);
bool QLCDNumber_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_hasHeightForWidth(const void* self);
bool QLCDNumber_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QLCDNumber_virtualbase_paintEngine(const void* self);
bool QLCDNumber_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_mousePressEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);
bool QLCDNumber_override_virtual_wheelEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_wheelEvent(void* self, QWheelEvent* event);
bool QLCDNumber_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_keyPressEvent(void* self, QKeyEvent* event);
bool QLCDNumber_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QLCDNumber_override_virtual_focusInEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_focusInEvent(void* self, QFocusEvent* event);
bool QLCDNumber_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_focusOutEvent(void* self, QFocusEvent* event);
bool QLCDNumber_override_virtual_enterEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_enterEvent(void* self, QEnterEvent* event);
bool QLCDNumber_override_virtual_leaveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_leaveEvent(void* self, QEvent* event);
bool QLCDNumber_override_virtual_moveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QLCDNumber_override_virtual_resizeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_resizeEvent(void* self, QResizeEvent* event);
bool QLCDNumber_override_virtual_closeEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QLCDNumber_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);
bool QLCDNumber_override_virtual_tabletEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QLCDNumber_override_virtual_actionEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QLCDNumber_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);
bool QLCDNumber_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);
bool QLCDNumber_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);
bool QLCDNumber_override_virtual_dropEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_dropEvent(void* self, QDropEvent* event);
bool QLCDNumber_override_virtual_showEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_showEvent(void* self, QShowEvent* event);
bool QLCDNumber_override_virtual_hideEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QLCDNumber_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);
bool QLCDNumber_override_virtual_metric(void* self, intptr_t slot);
int QLCDNumber_virtualbase_metric(const void* self, int param1);
bool QLCDNumber_override_virtual_initPainter(void* self, intptr_t slot);
void QLCDNumber_virtualbase_initPainter(const void* self, QPainter* painter);
bool QLCDNumber_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QLCDNumber_virtualbase_redirected(const void* self, QPoint* offset);
bool QLCDNumber_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QLCDNumber_virtualbase_sharedPainter(const void* self);
bool QLCDNumber_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);
bool QLCDNumber_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QLCDNumber_virtualbase_inputMethodQuery(const void* self, int param1);
bool QLCDNumber_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_focusNextPrevChild(void* self, bool next);
bool QLCDNumber_override_virtual_eventFilter(void* self, intptr_t slot);
bool QLCDNumber_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QLCDNumber_override_virtual_timerEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QLCDNumber_override_virtual_childEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_childEvent(void* self, QChildEvent* event);
bool QLCDNumber_override_virtual_customEvent(void* self, intptr_t slot);
void QLCDNumber_virtualbase_customEvent(void* self, QEvent* event);
bool QLCDNumber_override_virtual_connectNotify(void* self, intptr_t slot);
void QLCDNumber_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QLCDNumber_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QLCDNumber_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QLCDNumber_delete(QLCDNumber* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
