#pragma once
#ifndef MIQT_QT6_GEN_QEVENT_H
#define MIQT_QT6_GEN_QEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QActionEvent;
class QApplicationStateChangeEvent;
class QCloseEvent;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEnterEvent;
class QEvent;
class QEventPoint;
class QExposeEvent;
class QFile;
class QFileOpenEvent;
class QFocusEvent;
class QHelpEvent;
class QHideEvent;
class QHoverEvent;
class QIconDragEvent;
class QInputDevice;
class QInputEvent;
class QInputMethodEvent;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute)
typedef QInputMethodEvent::Attribute QInputMethodEvent__Attribute;
#else
class QInputMethodEvent__Attribute;
#endif
class QInputMethodQueryEvent;
class QKeyCombination;
class QKeyEvent;
class QKeySequence;
class QMimeData;
class QMouseEvent;
class QMoveEvent;
class QNativeGestureEvent;
class QObject;
class QPaintEvent;
class QPlatformSurfaceEvent;
class QPoint;
class QPointF;
class QPointerEvent;
class QPointingDevice;
class QRect;
class QRectF;
class QRegion;
class QResizeEvent;
class QScreen;
class QScreenOrientationChangeEvent;
class QScrollEvent;
class QScrollPrepareEvent;
class QShortcutEvent;
class QShowEvent;
class QSinglePointEvent;
class QSize;
class QSizeF;
class QStatusTipEvent;
class QTabletEvent;
class QToolBarChangeEvent;
class QTouchEvent;
class QUrl;
class QVariant;
class QWhatsThisClickedEvent;
class QWheelEvent;
class QWindowStateChangeEvent;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QApplicationStateChangeEvent QApplicationStateChangeEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QEventPoint QEventPoint;
typedef struct QExposeEvent QExposeEvent;
typedef struct QFile QFile;
typedef struct QFileOpenEvent QFileOpenEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QIconDragEvent QIconDragEvent;
typedef struct QInputDevice QInputDevice;
typedef struct QInputEvent QInputEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QInputMethodEvent__Attribute QInputMethodEvent__Attribute;
typedef struct QInputMethodQueryEvent QInputMethodQueryEvent;
typedef struct QKeyCombination QKeyCombination;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QNativeGestureEvent QNativeGestureEvent;
typedef struct QObject QObject;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPlatformSurfaceEvent QPlatformSurfaceEvent;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QScreenOrientationChangeEvent QScreenOrientationChangeEvent;
typedef struct QScrollEvent QScrollEvent;
typedef struct QScrollPrepareEvent QScrollPrepareEvent;
typedef struct QShortcutEvent QShortcutEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSinglePointEvent QSinglePointEvent;
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStatusTipEvent QStatusTipEvent;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBarChangeEvent QToolBarChangeEvent;
typedef struct QTouchEvent QTouchEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWhatsThisClickedEvent QWhatsThisClickedEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindowStateChangeEvent QWindowStateChangeEvent;
#endif

QInputEvent* QInputEvent_new(int type, QInputDevice* m_dev);
QInputEvent* QInputEvent_new2(int type, QInputDevice* m_dev, int modifiers);
void QInputEvent_virtbase(QInputEvent* src, QEvent** outptr_QEvent);
QInputEvent* QInputEvent_clone(const QInputEvent* self);
QInputDevice* QInputEvent_device(const QInputEvent* self);
int QInputEvent_deviceType(const QInputEvent* self);
int QInputEvent_modifiers(const QInputEvent* self);
void QInputEvent_setModifiers(QInputEvent* self, int modifiers);
unsigned long long QInputEvent_timestamp(const QInputEvent* self);
void QInputEvent_setTimestamp(QInputEvent* self, unsigned long long timestamp);

bool QInputEvent_override_virtual_clone(void* self, intptr_t slot);
QInputEvent* QInputEvent_virtualbase_clone(const void* self);
bool QInputEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QInputEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QInputEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QInputEvent_virtualbase_setAccepted(void* self, bool accepted);

void QInputEvent_delete(QInputEvent* self);

QPointerEvent* QPointerEvent_new(int type, QPointingDevice* dev);
QPointerEvent* QPointerEvent_new2(int type, QPointingDevice* dev, int modifiers);
QPointerEvent* QPointerEvent_new3(int type, QPointingDevice* dev, int modifiers, struct miqt_array /* of QEventPoint* */  points);
void QPointerEvent_virtbase(QPointerEvent* src, QInputEvent** outptr_QInputEvent);
QPointerEvent* QPointerEvent_clone(const QPointerEvent* self);
QPointingDevice* QPointerEvent_pointingDevice(const QPointerEvent* self);
int QPointerEvent_pointerType(const QPointerEvent* self);
void QPointerEvent_setTimestamp(QPointerEvent* self, unsigned long long timestamp);
ptrdiff_t QPointerEvent_pointCount(const QPointerEvent* self);
QEventPoint* QPointerEvent_point(QPointerEvent* self, ptrdiff_t i);
struct miqt_array /* of QEventPoint* */  QPointerEvent_points(const QPointerEvent* self);
QEventPoint* QPointerEvent_pointById(QPointerEvent* self, int id);
bool QPointerEvent_allPointsGrabbed(const QPointerEvent* self);
bool QPointerEvent_isBeginEvent(const QPointerEvent* self);
bool QPointerEvent_isUpdateEvent(const QPointerEvent* self);
bool QPointerEvent_isEndEvent(const QPointerEvent* self);
bool QPointerEvent_allPointsAccepted(const QPointerEvent* self);
void QPointerEvent_setAccepted(QPointerEvent* self, bool accepted);
QObject* QPointerEvent_exclusiveGrabber(const QPointerEvent* self, QEventPoint* point);
void QPointerEvent_setExclusiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber);
void QPointerEvent_clearPassiveGrabbers(QPointerEvent* self, QEventPoint* point);
bool QPointerEvent_addPassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);
bool QPointerEvent_removePassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);

bool QPointerEvent_override_virtual_clone(void* self, intptr_t slot);
QPointerEvent* QPointerEvent_virtualbase_clone(const void* self);
bool QPointerEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QPointerEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QPointerEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QPointerEvent_virtualbase_isBeginEvent(const void* self);
bool QPointerEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QPointerEvent_virtualbase_isUpdateEvent(const void* self);
bool QPointerEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QPointerEvent_virtualbase_isEndEvent(const void* self);
bool QPointerEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QPointerEvent_virtualbase_setAccepted(void* self, bool accepted);

void QPointerEvent_delete(QPointerEvent* self);

void QSinglePointEvent_virtbase(QSinglePointEvent* src, QPointerEvent** outptr_QPointerEvent);
QSinglePointEvent* QSinglePointEvent_clone(const QSinglePointEvent* self);
int QSinglePointEvent_button(const QSinglePointEvent* self);
int QSinglePointEvent_buttons(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_position(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_scenePosition(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_globalPosition(const QSinglePointEvent* self);
bool QSinglePointEvent_isBeginEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_isUpdateEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_isEndEvent(const QSinglePointEvent* self);
QObject* QSinglePointEvent_exclusivePointGrabber(const QSinglePointEvent* self);
void QSinglePointEvent_setExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber);

void QSinglePointEvent_delete(QSinglePointEvent* self);

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos);
QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device);
void QEnterEvent_virtbase(QEnterEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QEnterEvent* QEnterEvent_clone(const QEnterEvent* self);
QPoint* QEnterEvent_pos(const QEnterEvent* self);
QPoint* QEnterEvent_globalPos(const QEnterEvent* self);
int QEnterEvent_x(const QEnterEvent* self);
int QEnterEvent_y(const QEnterEvent* self);
int QEnterEvent_globalX(const QEnterEvent* self);
int QEnterEvent_globalY(const QEnterEvent* self);
QPointF* QEnterEvent_localPos(const QEnterEvent* self);
QPointF* QEnterEvent_windowPos(const QEnterEvent* self);
QPointF* QEnterEvent_screenPos(const QEnterEvent* self);

bool QEnterEvent_override_virtual_clone(void* self, intptr_t slot);
QEnterEvent* QEnterEvent_virtualbase_clone(const void* self);
bool QEnterEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QEnterEvent_virtualbase_isBeginEvent(const void* self);
bool QEnterEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QEnterEvent_virtualbase_isUpdateEvent(const void* self);
bool QEnterEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QEnterEvent_virtualbase_isEndEvent(const void* self);
bool QEnterEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QEnterEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QEnterEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QEnterEvent_virtualbase_setAccepted(void* self, bool accepted);

void QEnterEvent_delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(int type, QPointF* localPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(int type, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(int type, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(int type, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source);
QMouseEvent* QMouseEvent_new5(int type, QPointF* localPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new6(int type, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new7(int type, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new8(int type, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source, QPointingDevice* device);
void QMouseEvent_virtbase(QMouseEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QMouseEvent* QMouseEvent_clone(const QMouseEvent* self);
QPoint* QMouseEvent_pos(const QMouseEvent* self);
QPoint* QMouseEvent_globalPos(const QMouseEvent* self);
int QMouseEvent_x(const QMouseEvent* self);
int QMouseEvent_y(const QMouseEvent* self);
int QMouseEvent_globalX(const QMouseEvent* self);
int QMouseEvent_globalY(const QMouseEvent* self);
QPointF* QMouseEvent_localPos(const QMouseEvent* self);
QPointF* QMouseEvent_windowPos(const QMouseEvent* self);
QPointF* QMouseEvent_screenPos(const QMouseEvent* self);
int QMouseEvent_source(const QMouseEvent* self);
int QMouseEvent_flags(const QMouseEvent* self);

bool QMouseEvent_override_virtual_clone(void* self, intptr_t slot);
QMouseEvent* QMouseEvent_virtualbase_clone(const void* self);
bool QMouseEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QMouseEvent_virtualbase_isBeginEvent(const void* self);
bool QMouseEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QMouseEvent_virtualbase_isUpdateEvent(const void* self);
bool QMouseEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QMouseEvent_virtualbase_isEndEvent(const void* self);
bool QMouseEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QMouseEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QMouseEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QMouseEvent_virtualbase_setAccepted(void* self, bool accepted);

void QMouseEvent_delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(int type, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(int type, QPointF* pos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new3(int type, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new4(int type, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device);
QHoverEvent* QHoverEvent_new5(int type, QPointF* pos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new6(int type, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device);
void QHoverEvent_virtbase(QHoverEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QHoverEvent* QHoverEvent_clone(const QHoverEvent* self);
QPoint* QHoverEvent_pos(const QHoverEvent* self);
QPointF* QHoverEvent_posF(const QHoverEvent* self);
bool QHoverEvent_isUpdateEvent(const QHoverEvent* self);
QPoint* QHoverEvent_oldPos(const QHoverEvent* self);
QPointF* QHoverEvent_oldPosF(const QHoverEvent* self);

bool QHoverEvent_override_virtual_clone(void* self, intptr_t slot);
QHoverEvent* QHoverEvent_virtualbase_clone(const void* self);
bool QHoverEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QHoverEvent_virtualbase_isUpdateEvent(const void* self);
bool QHoverEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QHoverEvent_virtualbase_isBeginEvent(const void* self);
bool QHoverEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QHoverEvent_virtualbase_isEndEvent(const void* self);
bool QHoverEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QHoverEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QHoverEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QHoverEvent_virtualbase_setAccepted(void* self, bool accepted);

void QHoverEvent_delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted);
QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source);
QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device);
void QWheelEvent_virtbase(QWheelEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QWheelEvent* QWheelEvent_clone(const QWheelEvent* self);
QPoint* QWheelEvent_pixelDelta(const QWheelEvent* self);
QPoint* QWheelEvent_angleDelta(const QWheelEvent* self);
int QWheelEvent_phase(const QWheelEvent* self);
bool QWheelEvent_inverted(const QWheelEvent* self);
bool QWheelEvent_isInverted(const QWheelEvent* self);
bool QWheelEvent_hasPixelDelta(const QWheelEvent* self);
bool QWheelEvent_isBeginEvent(const QWheelEvent* self);
bool QWheelEvent_isUpdateEvent(const QWheelEvent* self);
bool QWheelEvent_isEndEvent(const QWheelEvent* self);
int QWheelEvent_source(const QWheelEvent* self);

bool QWheelEvent_override_virtual_clone(void* self, intptr_t slot);
QWheelEvent* QWheelEvent_virtualbase_clone(const void* self);
bool QWheelEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QWheelEvent_virtualbase_isBeginEvent(const void* self);
bool QWheelEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QWheelEvent_virtualbase_isUpdateEvent(const void* self);
bool QWheelEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QWheelEvent_virtualbase_isEndEvent(const void* self);
bool QWheelEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QWheelEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QWheelEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QWheelEvent_virtualbase_setAccepted(void* self, bool accepted);

void QWheelEvent_delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(int t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons);
void QTabletEvent_virtbase(QTabletEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QTabletEvent* QTabletEvent_clone(const QTabletEvent* self);
QPoint* QTabletEvent_pos(const QTabletEvent* self);
QPoint* QTabletEvent_globalPos(const QTabletEvent* self);
QPointF* QTabletEvent_posF(const QTabletEvent* self);
QPointF* QTabletEvent_globalPosF(const QTabletEvent* self);
int QTabletEvent_x(const QTabletEvent* self);
int QTabletEvent_y(const QTabletEvent* self);
int QTabletEvent_globalX(const QTabletEvent* self);
int QTabletEvent_globalY(const QTabletEvent* self);
double QTabletEvent_hiResGlobalX(const QTabletEvent* self);
double QTabletEvent_hiResGlobalY(const QTabletEvent* self);
long long QTabletEvent_uniqueId(const QTabletEvent* self);
double QTabletEvent_pressure(const QTabletEvent* self);
double QTabletEvent_rotation(const QTabletEvent* self);
double QTabletEvent_z(const QTabletEvent* self);
double QTabletEvent_tangentialPressure(const QTabletEvent* self);
double QTabletEvent_xTilt(const QTabletEvent* self);
double QTabletEvent_yTilt(const QTabletEvent* self);

bool QTabletEvent_override_virtual_clone(void* self, intptr_t slot);
QTabletEvent* QTabletEvent_virtualbase_clone(const void* self);
bool QTabletEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QTabletEvent_virtualbase_isBeginEvent(const void* self);
bool QTabletEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QTabletEvent_virtualbase_isUpdateEvent(const void* self);
bool QTabletEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QTabletEvent_virtualbase_isEndEvent(const void* self);
bool QTabletEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QTabletEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QTabletEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QTabletEvent_virtualbase_setAccepted(void* self, bool accepted);

void QTabletEvent_delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(int type, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(int type, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta);
QNativeGestureEvent* QNativeGestureEvent_new3(int type, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, unsigned long long sequenceId);
void QNativeGestureEvent_virtbase(QNativeGestureEvent* src, QSinglePointEvent** outptr_QSinglePointEvent);
QNativeGestureEvent* QNativeGestureEvent_clone(const QNativeGestureEvent* self);
int QNativeGestureEvent_gestureType(const QNativeGestureEvent* self);
int QNativeGestureEvent_fingerCount(const QNativeGestureEvent* self);
double QNativeGestureEvent_value(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_delta(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_pos(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_globalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_localPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_windowPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_screenPos(const QNativeGestureEvent* self);

bool QNativeGestureEvent_override_virtual_clone(void* self, intptr_t slot);
QNativeGestureEvent* QNativeGestureEvent_virtualbase_clone(const void* self);
bool QNativeGestureEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QNativeGestureEvent_virtualbase_isBeginEvent(const void* self);
bool QNativeGestureEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QNativeGestureEvent_virtualbase_isUpdateEvent(const void* self);
bool QNativeGestureEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QNativeGestureEvent_virtualbase_isEndEvent(const void* self);
bool QNativeGestureEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QNativeGestureEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QNativeGestureEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QNativeGestureEvent_virtualbase_setAccepted(void* self, bool accepted);

void QNativeGestureEvent_delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(int type, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(int type, int key, int modifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new4(int type, int key, int modifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new5(int type, int key, int modifiers, struct miqt_string text, bool autorep, unsigned short count);
QKeyEvent* QKeyEvent_new6(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new7(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new8(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, unsigned short count);
QKeyEvent* QKeyEvent_new9(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, unsigned short count, QInputDevice* device);
void QKeyEvent_virtbase(QKeyEvent* src, QInputEvent** outptr_QInputEvent);
QKeyEvent* QKeyEvent_clone(const QKeyEvent* self);
int QKeyEvent_key(const QKeyEvent* self);
bool QKeyEvent_matches(const QKeyEvent* self, int key);
int QKeyEvent_modifiers(const QKeyEvent* self);
QKeyCombination* QKeyEvent_keyCombination(const QKeyEvent* self);
struct miqt_string QKeyEvent_text(const QKeyEvent* self);
bool QKeyEvent_isAutoRepeat(const QKeyEvent* self);
int QKeyEvent_count(const QKeyEvent* self);
unsigned int QKeyEvent_nativeScanCode(const QKeyEvent* self);
unsigned int QKeyEvent_nativeVirtualKey(const QKeyEvent* self);
unsigned int QKeyEvent_nativeModifiers(const QKeyEvent* self);

bool QKeyEvent_override_virtual_clone(void* self, intptr_t slot);
QKeyEvent* QKeyEvent_virtualbase_clone(const void* self);
bool QKeyEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QKeyEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QKeyEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QKeyEvent_virtualbase_setAccepted(void* self, bool accepted);

void QKeyEvent_delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(int type);
QFocusEvent* QFocusEvent_new2(int type, int reason);
void QFocusEvent_virtbase(QFocusEvent* src, QEvent** outptr_QEvent);
QFocusEvent* QFocusEvent_clone(const QFocusEvent* self);
bool QFocusEvent_gotFocus(const QFocusEvent* self);
bool QFocusEvent_lostFocus(const QFocusEvent* self);
int QFocusEvent_reason(const QFocusEvent* self);

bool QFocusEvent_override_virtual_clone(void* self, intptr_t slot);
QFocusEvent* QFocusEvent_virtualbase_clone(const void* self);
bool QFocusEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QFocusEvent_virtualbase_setAccepted(void* self, bool accepted);

void QFocusEvent_delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(QRect* paintRect);
void QPaintEvent_virtbase(QPaintEvent* src, QEvent** outptr_QEvent);
QPaintEvent* QPaintEvent_clone(const QPaintEvent* self);
QRect* QPaintEvent_rect(const QPaintEvent* self);
QRegion* QPaintEvent_region(const QPaintEvent* self);

bool QPaintEvent_override_virtual_clone(void* self, intptr_t slot);
QPaintEvent* QPaintEvent_virtualbase_clone(const void* self);
bool QPaintEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QPaintEvent_virtualbase_setAccepted(void* self, bool accepted);

void QPaintEvent_delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos);
void QMoveEvent_virtbase(QMoveEvent* src, QEvent** outptr_QEvent);
QMoveEvent* QMoveEvent_clone(const QMoveEvent* self);
QPoint* QMoveEvent_pos(const QMoveEvent* self);
QPoint* QMoveEvent_oldPos(const QMoveEvent* self);

bool QMoveEvent_override_virtual_clone(void* self, intptr_t slot);
QMoveEvent* QMoveEvent_virtualbase_clone(const void* self);
bool QMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QMoveEvent_virtualbase_setAccepted(void* self, bool accepted);

void QMoveEvent_delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(QRegion* m_region);
void QExposeEvent_virtbase(QExposeEvent* src, QEvent** outptr_QEvent);
QExposeEvent* QExposeEvent_clone(const QExposeEvent* self);
QRegion* QExposeEvent_region(const QExposeEvent* self);

bool QExposeEvent_override_virtual_clone(void* self, intptr_t slot);
QExposeEvent* QExposeEvent_virtualbase_clone(const void* self);
bool QExposeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QExposeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QExposeEvent_delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType);
void QPlatformSurfaceEvent_virtbase(QPlatformSurfaceEvent* src, QEvent** outptr_QEvent);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_clone(const QPlatformSurfaceEvent* self);
int QPlatformSurfaceEvent_surfaceEventType(const QPlatformSurfaceEvent* self);

bool QPlatformSurfaceEvent_override_virtual_clone(void* self, intptr_t slot);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_virtualbase_clone(const void* self);
bool QPlatformSurfaceEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QPlatformSurfaceEvent_virtualbase_setAccepted(void* self, bool accepted);

void QPlatformSurfaceEvent_delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize);
void QResizeEvent_virtbase(QResizeEvent* src, QEvent** outptr_QEvent);
QResizeEvent* QResizeEvent_clone(const QResizeEvent* self);
QSize* QResizeEvent_size(const QResizeEvent* self);
QSize* QResizeEvent_oldSize(const QResizeEvent* self);

bool QResizeEvent_override_virtual_clone(void* self, intptr_t slot);
QResizeEvent* QResizeEvent_virtualbase_clone(const void* self);
bool QResizeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QResizeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QResizeEvent_delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
void QCloseEvent_virtbase(QCloseEvent* src, QEvent** outptr_QEvent);
QCloseEvent* QCloseEvent_clone(const QCloseEvent* self);

bool QCloseEvent_override_virtual_clone(void* self, intptr_t slot);
QCloseEvent* QCloseEvent_virtualbase_clone(const void* self);
bool QCloseEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QCloseEvent_virtualbase_setAccepted(void* self, bool accepted);

void QCloseEvent_delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
void QIconDragEvent_virtbase(QIconDragEvent* src, QEvent** outptr_QEvent);
QIconDragEvent* QIconDragEvent_clone(const QIconDragEvent* self);

bool QIconDragEvent_override_virtual_clone(void* self, intptr_t slot);
QIconDragEvent* QIconDragEvent_virtualbase_clone(const void* self);
bool QIconDragEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QIconDragEvent_virtualbase_setAccepted(void* self, bool accepted);

void QIconDragEvent_delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
void QShowEvent_virtbase(QShowEvent* src, QEvent** outptr_QEvent);
QShowEvent* QShowEvent_clone(const QShowEvent* self);

bool QShowEvent_override_virtual_clone(void* self, intptr_t slot);
QShowEvent* QShowEvent_virtualbase_clone(const void* self);
bool QShowEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QShowEvent_virtualbase_setAccepted(void* self, bool accepted);

void QShowEvent_delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
void QHideEvent_virtbase(QHideEvent* src, QEvent** outptr_QEvent);
QHideEvent* QHideEvent_clone(const QHideEvent* self);

bool QHideEvent_override_virtual_clone(void* self, intptr_t slot);
QHideEvent* QHideEvent_virtualbase_clone(const void* self);
bool QHideEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QHideEvent_virtualbase_setAccepted(void* self, bool accepted);

void QHideEvent_delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers);
void QContextMenuEvent_virtbase(QContextMenuEvent* src, QInputEvent** outptr_QInputEvent);
QContextMenuEvent* QContextMenuEvent_clone(const QContextMenuEvent* self);
int QContextMenuEvent_x(const QContextMenuEvent* self);
int QContextMenuEvent_y(const QContextMenuEvent* self);
int QContextMenuEvent_globalX(const QContextMenuEvent* self);
int QContextMenuEvent_globalY(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_pos(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_globalPos(const QContextMenuEvent* self);
int QContextMenuEvent_reason(const QContextMenuEvent* self);

bool QContextMenuEvent_override_virtual_clone(void* self, intptr_t slot);
QContextMenuEvent* QContextMenuEvent_virtualbase_clone(const void* self);
bool QContextMenuEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QContextMenuEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QContextMenuEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QContextMenuEvent_virtualbase_setAccepted(void* self, bool accepted);

void QContextMenuEvent_delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes);
void QInputMethodEvent_virtbase(QInputMethodEvent* src, QEvent** outptr_QEvent);
QInputMethodEvent* QInputMethodEvent_clone(const QInputMethodEvent* self);
void QInputMethodEvent_setCommitString(QInputMethodEvent* self, struct miqt_string commitString);
struct miqt_array /* of QInputMethodEvent__Attribute* */  QInputMethodEvent_attributes(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_preeditString(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_commitString(const QInputMethodEvent* self);
int QInputMethodEvent_replacementStart(const QInputMethodEvent* self);
int QInputMethodEvent_replacementLength(const QInputMethodEvent* self);
void QInputMethodEvent_setCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom);
void QInputMethodEvent_setCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength);

bool QInputMethodEvent_override_virtual_clone(void* self, intptr_t slot);
QInputMethodEvent* QInputMethodEvent_virtualbase_clone(const void* self);
bool QInputMethodEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QInputMethodEvent_virtualbase_setAccepted(void* self, bool accepted);

void QInputMethodEvent_delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
void QInputMethodQueryEvent_virtbase(QInputMethodQueryEvent* src, QEvent** outptr_QEvent);
QInputMethodQueryEvent* QInputMethodQueryEvent_clone(const QInputMethodQueryEvent* self);
int QInputMethodQueryEvent_queries(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_setValue(QInputMethodQueryEvent* self, int query, QVariant* value);
QVariant* QInputMethodQueryEvent_value(const QInputMethodQueryEvent* self, int query);

bool QInputMethodQueryEvent_override_virtual_clone(void* self, intptr_t slot);
QInputMethodQueryEvent* QInputMethodQueryEvent_virtualbase_clone(const void* self);
bool QInputMethodQueryEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QInputMethodQueryEvent_virtualbase_setAccepted(void* self, bool accepted);

void QInputMethodQueryEvent_delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int type);
void QDropEvent_virtbase(QDropEvent* src, QEvent** outptr_QEvent);
QDropEvent* QDropEvent_clone(const QDropEvent* self);
QPoint* QDropEvent_pos(const QDropEvent* self);
QPointF* QDropEvent_posF(const QDropEvent* self);
int QDropEvent_mouseButtons(const QDropEvent* self);
int QDropEvent_keyboardModifiers(const QDropEvent* self);
QPointF* QDropEvent_position(const QDropEvent* self);
int QDropEvent_buttons(const QDropEvent* self);
int QDropEvent_modifiers(const QDropEvent* self);
int QDropEvent_possibleActions(const QDropEvent* self);
int QDropEvent_proposedAction(const QDropEvent* self);
void QDropEvent_acceptProposedAction(QDropEvent* self);
int QDropEvent_dropAction(const QDropEvent* self);
void QDropEvent_setDropAction(QDropEvent* self, int action);
QObject* QDropEvent_source(const QDropEvent* self);
QMimeData* QDropEvent_mimeData(const QDropEvent* self);

bool QDropEvent_override_virtual_clone(void* self, intptr_t slot);
QDropEvent* QDropEvent_virtualbase_clone(const void* self);
bool QDropEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QDropEvent_virtualbase_setAccepted(void* self, bool accepted);

void QDropEvent_delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int type);
void QDragMoveEvent_virtbase(QDragMoveEvent* src, QDropEvent** outptr_QDropEvent);
QDragMoveEvent* QDragMoveEvent_clone(const QDragMoveEvent* self);
QRect* QDragMoveEvent_answerRect(const QDragMoveEvent* self);
void QDragMoveEvent_accept(QDragMoveEvent* self);
void QDragMoveEvent_ignore(QDragMoveEvent* self);
void QDragMoveEvent_acceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_ignoreWithQRect(QDragMoveEvent* self, QRect* r);

bool QDragMoveEvent_override_virtual_clone(void* self, intptr_t slot);
QDragMoveEvent* QDragMoveEvent_virtualbase_clone(const void* self);
bool QDragMoveEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QDragMoveEvent_virtualbase_setAccepted(void* self, bool accepted);

void QDragMoveEvent_delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
void QDragEnterEvent_virtbase(QDragEnterEvent* src, QDragMoveEvent** outptr_QDragMoveEvent);
QDragEnterEvent* QDragEnterEvent_clone(const QDragEnterEvent* self);

bool QDragEnterEvent_override_virtual_clone(void* self, intptr_t slot);
QDragEnterEvent* QDragEnterEvent_virtualbase_clone(const void* self);
bool QDragEnterEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QDragEnterEvent_virtualbase_setAccepted(void* self, bool accepted);

void QDragEnterEvent_delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
void QDragLeaveEvent_virtbase(QDragLeaveEvent* src, QEvent** outptr_QEvent);
QDragLeaveEvent* QDragLeaveEvent_clone(const QDragLeaveEvent* self);

bool QDragLeaveEvent_override_virtual_clone(void* self, intptr_t slot);
QDragLeaveEvent* QDragLeaveEvent_virtualbase_clone(const void* self);
bool QDragLeaveEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QDragLeaveEvent_virtualbase_setAccepted(void* self, bool accepted);

void QDragLeaveEvent_delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(int type, QPoint* pos, QPoint* globalPos);
void QHelpEvent_virtbase(QHelpEvent* src, QEvent** outptr_QEvent);
QHelpEvent* QHelpEvent_clone(const QHelpEvent* self);
int QHelpEvent_x(const QHelpEvent* self);
int QHelpEvent_y(const QHelpEvent* self);
int QHelpEvent_globalX(const QHelpEvent* self);
int QHelpEvent_globalY(const QHelpEvent* self);
QPoint* QHelpEvent_pos(const QHelpEvent* self);
QPoint* QHelpEvent_globalPos(const QHelpEvent* self);

bool QHelpEvent_override_virtual_clone(void* self, intptr_t slot);
QHelpEvent* QHelpEvent_virtualbase_clone(const void* self);
bool QHelpEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QHelpEvent_virtualbase_setAccepted(void* self, bool accepted);

void QHelpEvent_delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string tip);
void QStatusTipEvent_virtbase(QStatusTipEvent* src, QEvent** outptr_QEvent);
QStatusTipEvent* QStatusTipEvent_clone(const QStatusTipEvent* self);
struct miqt_string QStatusTipEvent_tip(const QStatusTipEvent* self);

bool QStatusTipEvent_override_virtual_clone(void* self, intptr_t slot);
QStatusTipEvent* QStatusTipEvent_virtualbase_clone(const void* self);
bool QStatusTipEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QStatusTipEvent_virtualbase_setAccepted(void* self, bool accepted);

void QStatusTipEvent_delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string href);
void QWhatsThisClickedEvent_virtbase(QWhatsThisClickedEvent* src, QEvent** outptr_QEvent);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_clone(const QWhatsThisClickedEvent* self);
struct miqt_string QWhatsThisClickedEvent_href(const QWhatsThisClickedEvent* self);

bool QWhatsThisClickedEvent_override_virtual_clone(void* self, intptr_t slot);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_virtualbase_clone(const void* self);
bool QWhatsThisClickedEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QWhatsThisClickedEvent_virtualbase_setAccepted(void* self, bool accepted);

void QWhatsThisClickedEvent_delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int type, QAction* action);
QActionEvent* QActionEvent_new2(int type, QAction* action, QAction* before);
void QActionEvent_virtbase(QActionEvent* src, QEvent** outptr_QEvent);
QActionEvent* QActionEvent_clone(const QActionEvent* self);
QAction* QActionEvent_action(const QActionEvent* self);
QAction* QActionEvent_before(const QActionEvent* self);

bool QActionEvent_override_virtual_clone(void* self, intptr_t slot);
QActionEvent* QActionEvent_virtualbase_clone(const void* self);
bool QActionEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QActionEvent_virtualbase_setAccepted(void* self, bool accepted);

void QActionEvent_delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string file);
QFileOpenEvent* QFileOpenEvent_new2(QUrl* url);
void QFileOpenEvent_virtbase(QFileOpenEvent* src, QEvent** outptr_QEvent);
QFileOpenEvent* QFileOpenEvent_clone(const QFileOpenEvent* self);
struct miqt_string QFileOpenEvent_file(const QFileOpenEvent* self);
QUrl* QFileOpenEvent_url(const QFileOpenEvent* self);
bool QFileOpenEvent_openFile(const QFileOpenEvent* self, QFile* file, int flags);

bool QFileOpenEvent_override_virtual_clone(void* self, intptr_t slot);
QFileOpenEvent* QFileOpenEvent_virtualbase_clone(const void* self);
bool QFileOpenEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QFileOpenEvent_virtualbase_setAccepted(void* self, bool accepted);

void QFileOpenEvent_delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
void QToolBarChangeEvent_virtbase(QToolBarChangeEvent* src, QEvent** outptr_QEvent);
QToolBarChangeEvent* QToolBarChangeEvent_clone(const QToolBarChangeEvent* self);
bool QToolBarChangeEvent_toggle(const QToolBarChangeEvent* self);

bool QToolBarChangeEvent_override_virtual_clone(void* self, intptr_t slot);
QToolBarChangeEvent* QToolBarChangeEvent_virtualbase_clone(const void* self);
bool QToolBarChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QToolBarChangeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QToolBarChangeEvent_delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(QKeySequence* key, int id, bool ambiguous);
void QShortcutEvent_virtbase(QShortcutEvent* src, QEvent** outptr_QEvent);
QShortcutEvent* QShortcutEvent_clone(const QShortcutEvent* self);
QKeySequence* QShortcutEvent_key(const QShortcutEvent* self);
int QShortcutEvent_shortcutId(const QShortcutEvent* self);
bool QShortcutEvent_isAmbiguous(const QShortcutEvent* self);

bool QShortcutEvent_override_virtual_clone(void* self, intptr_t slot);
QShortcutEvent* QShortcutEvent_virtualbase_clone(const void* self);
bool QShortcutEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QShortcutEvent_virtualbase_setAccepted(void* self, bool accepted);

void QShortcutEvent_delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride);
void QWindowStateChangeEvent_virtbase(QWindowStateChangeEvent* src, QEvent** outptr_QEvent);
QWindowStateChangeEvent* QWindowStateChangeEvent_clone(const QWindowStateChangeEvent* self);
int QWindowStateChangeEvent_oldState(const QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_isOverride(const QWindowStateChangeEvent* self);

bool QWindowStateChangeEvent_override_virtual_clone(void* self, intptr_t slot);
QWindowStateChangeEvent* QWindowStateChangeEvent_virtualbase_clone(const void* self);
bool QWindowStateChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QWindowStateChangeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QWindowStateChangeEvent_delete(QWindowStateChangeEvent* self);

QTouchEvent* QTouchEvent_new(int eventType);
QTouchEvent* QTouchEvent_new2(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates);
QTouchEvent* QTouchEvent_new3(int eventType, QPointingDevice* device);
QTouchEvent* QTouchEvent_new4(int eventType, QPointingDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(int eventType, QPointingDevice* device, int modifiers, struct miqt_array /* of QEventPoint* */  touchPoints);
QTouchEvent* QTouchEvent_new6(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates, struct miqt_array /* of QEventPoint* */  touchPoints);
void QTouchEvent_virtbase(QTouchEvent* src, QPointerEvent** outptr_QPointerEvent);
QTouchEvent* QTouchEvent_clone(const QTouchEvent* self);
QObject* QTouchEvent_target(const QTouchEvent* self);
uint8_t QTouchEvent_touchPointStates(const QTouchEvent* self);
struct miqt_array /* of QEventPoint* */  QTouchEvent_touchPoints(const QTouchEvent* self);
bool QTouchEvent_isBeginEvent(const QTouchEvent* self);
bool QTouchEvent_isUpdateEvent(const QTouchEvent* self);
bool QTouchEvent_isEndEvent(const QTouchEvent* self);

bool QTouchEvent_override_virtual_clone(void* self, intptr_t slot);
QTouchEvent* QTouchEvent_virtualbase_clone(const void* self);
bool QTouchEvent_override_virtual_isBeginEvent(void* self, intptr_t slot);
bool QTouchEvent_virtualbase_isBeginEvent(const void* self);
bool QTouchEvent_override_virtual_isUpdateEvent(void* self, intptr_t slot);
bool QTouchEvent_virtualbase_isUpdateEvent(const void* self);
bool QTouchEvent_override_virtual_isEndEvent(void* self, intptr_t slot);
bool QTouchEvent_virtualbase_isEndEvent(const void* self);
bool QTouchEvent_override_virtual_setTimestamp(void* self, intptr_t slot);
void QTouchEvent_virtualbase_setTimestamp(void* self, unsigned long long timestamp);
bool QTouchEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QTouchEvent_virtualbase_setAccepted(void* self, bool accepted);

void QTouchEvent_delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos);
void QScrollPrepareEvent_virtbase(QScrollPrepareEvent* src, QEvent** outptr_QEvent);
QScrollPrepareEvent* QScrollPrepareEvent_clone(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_startPos(const QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_viewportSize(const QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_contentPosRange(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_contentPos(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_setViewportSize(QScrollPrepareEvent* self, QSizeF* size);
void QScrollPrepareEvent_setContentPosRange(QScrollPrepareEvent* self, QRectF* rect);
void QScrollPrepareEvent_setContentPos(QScrollPrepareEvent* self, QPointF* pos);

bool QScrollPrepareEvent_override_virtual_clone(void* self, intptr_t slot);
QScrollPrepareEvent* QScrollPrepareEvent_virtualbase_clone(const void* self);
bool QScrollPrepareEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QScrollPrepareEvent_virtualbase_setAccepted(void* self, bool accepted);

void QScrollPrepareEvent_delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState);
void QScrollEvent_virtbase(QScrollEvent* src, QEvent** outptr_QEvent);
QScrollEvent* QScrollEvent_clone(const QScrollEvent* self);
QPointF* QScrollEvent_contentPos(const QScrollEvent* self);
QPointF* QScrollEvent_overshootDistance(const QScrollEvent* self);
int QScrollEvent_scrollState(const QScrollEvent* self);

bool QScrollEvent_override_virtual_clone(void* self, intptr_t slot);
QScrollEvent* QScrollEvent_virtualbase_clone(const void* self);
bool QScrollEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QScrollEvent_virtualbase_setAccepted(void* self, bool accepted);

void QScrollEvent_delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation);
void QScreenOrientationChangeEvent_virtbase(QScreenOrientationChangeEvent* src, QEvent** outptr_QEvent);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_clone(const QScreenOrientationChangeEvent* self);
QScreen* QScreenOrientationChangeEvent_screen(const QScreenOrientationChangeEvent* self);
int QScreenOrientationChangeEvent_orientation(const QScreenOrientationChangeEvent* self);

bool QScreenOrientationChangeEvent_override_virtual_clone(void* self, intptr_t slot);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_virtualbase_clone(const void* self);
bool QScreenOrientationChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QScreenOrientationChangeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QScreenOrientationChangeEvent_delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state);
void QApplicationStateChangeEvent_virtbase(QApplicationStateChangeEvent* src, QEvent** outptr_QEvent);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_clone(const QApplicationStateChangeEvent* self);
int QApplicationStateChangeEvent_applicationState(const QApplicationStateChangeEvent* self);

bool QApplicationStateChangeEvent_override_virtual_clone(void* self, intptr_t slot);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_virtualbase_clone(const void* self);
bool QApplicationStateChangeEvent_override_virtual_setAccepted(void* self, intptr_t slot);
void QApplicationStateChangeEvent_virtualbase_setAccepted(void* self, bool accepted);

void QApplicationStateChangeEvent_delete(QApplicationStateChangeEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_operatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1);

void QInputMethodEvent__Attribute_delete(QInputMethodEvent__Attribute* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
