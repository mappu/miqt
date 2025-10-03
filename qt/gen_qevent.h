#pragma once
#ifndef MIQT_QT_GEN_QEVENT_H
#define MIQT_QT_GEN_QEVENT_H

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
class QExposeEvent;
class QFile;
class QFileOpenEvent;
class QFocusEvent;
class QHelpEvent;
class QHideEvent;
class QHoverEvent;
class QIconDragEvent;
class QInputEvent;
class QInputMethodEvent;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QInputMethodEvent__Attribute)
typedef QInputMethodEvent::Attribute QInputMethodEvent__Attribute;
#else
class QInputMethodEvent__Attribute;
#endif
class QInputMethodQueryEvent;
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
class QPointingDeviceUniqueId;
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
class QSize;
class QSizeF;
class QStatusTipEvent;
class QTabletEvent;
class QToolBarChangeEvent;
class QTouchDevice;
class QTouchEvent;
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTouchEvent__TouchPoint)
typedef QTouchEvent::TouchPoint QTouchEvent__TouchPoint;
#else
class QTouchEvent__TouchPoint;
#endif
class QUrl;
class QVariant;
class QVector2D;
class QWhatsThisClickedEvent;
class QWheelEvent;
class QWindow;
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
typedef struct QExposeEvent QExposeEvent;
typedef struct QFile QFile;
typedef struct QFileOpenEvent QFileOpenEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QIconDragEvent QIconDragEvent;
typedef struct QInputEvent QInputEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QInputMethodEvent__Attribute QInputMethodEvent__Attribute;
typedef struct QInputMethodQueryEvent QInputMethodQueryEvent;
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
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
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
typedef struct QSize QSize;
typedef struct QSizeF QSizeF;
typedef struct QStatusTipEvent QStatusTipEvent;
typedef struct QTabletEvent QTabletEvent;
typedef struct QToolBarChangeEvent QToolBarChangeEvent;
typedef struct QTouchDevice QTouchDevice;
typedef struct QTouchEvent QTouchEvent;
typedef struct QTouchEvent__TouchPoint QTouchEvent__TouchPoint;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QVector2D QVector2D;
typedef struct QWhatsThisClickedEvent QWhatsThisClickedEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
typedef struct QWindowStateChangeEvent QWindowStateChangeEvent;
#endif

QInputEvent* QInputEvent_new(int type);
QInputEvent* QInputEvent_new2(QInputEvent* param1);
QInputEvent* QInputEvent_new3(int type, int modifiers);
void QInputEvent_virtbase(QInputEvent* src, QEvent** outptr_QEvent);
int QInputEvent_modifiers(const QInputEvent* self);
void QInputEvent_setModifiers(QInputEvent* self, int amodifiers);
unsigned long QInputEvent_timestamp(const QInputEvent* self);
void QInputEvent_setTimestamp(QInputEvent* self, unsigned long atimestamp);
void QInputEvent_operatorAssign(QInputEvent* self, QInputEvent* param1);

void QInputEvent_delete(QInputEvent* self);

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* windowPos, QPointF* screenPos);
QEnterEvent* QEnterEvent_new2(QEnterEvent* param1);
void QEnterEvent_virtbase(QEnterEvent* src, QEvent** outptr_QEvent);
QPoint* QEnterEvent_pos(const QEnterEvent* self);
QPoint* QEnterEvent_globalPos(const QEnterEvent* self);
int QEnterEvent_x(const QEnterEvent* self);
int QEnterEvent_y(const QEnterEvent* self);
int QEnterEvent_globalX(const QEnterEvent* self);
int QEnterEvent_globalY(const QEnterEvent* self);
QPointF* QEnterEvent_localPos(const QEnterEvent* self);
QPointF* QEnterEvent_windowPos(const QEnterEvent* self);
QPointF* QEnterEvent_screenPos(const QEnterEvent* self);
void QEnterEvent_operatorAssign(QEnterEvent* self, QEnterEvent* param1);

void QEnterEvent_delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(int type, QPointF* localPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(int type, QPointF* localPos, QPointF* screenPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, int button, int buttons, int modifiers, int source);
QMouseEvent* QMouseEvent_new5(QMouseEvent* param1);
void QMouseEvent_virtbase(QMouseEvent* src, QInputEvent** outptr_QInputEvent);
QPoint* QMouseEvent_pos(const QMouseEvent* self);
QPoint* QMouseEvent_globalPos(const QMouseEvent* self);
int QMouseEvent_x(const QMouseEvent* self);
int QMouseEvent_y(const QMouseEvent* self);
int QMouseEvent_globalX(const QMouseEvent* self);
int QMouseEvent_globalY(const QMouseEvent* self);
QPointF* QMouseEvent_localPos(const QMouseEvent* self);
QPointF* QMouseEvent_windowPos(const QMouseEvent* self);
QPointF* QMouseEvent_screenPos(const QMouseEvent* self);
int QMouseEvent_button(const QMouseEvent* self);
int QMouseEvent_buttons(const QMouseEvent* self);
void QMouseEvent_setLocalPos(QMouseEvent* self, QPointF* localPosition);
int QMouseEvent_source(const QMouseEvent* self);
int QMouseEvent_flags(const QMouseEvent* self);
void QMouseEvent_operatorAssign(QMouseEvent* self, QMouseEvent* param1);

void QMouseEvent_delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(int type, QPointF* pos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(QHoverEvent* param1);
QHoverEvent* QHoverEvent_new3(int type, QPointF* pos, QPointF* oldPos, int modifiers);
void QHoverEvent_virtbase(QHoverEvent* src, QInputEvent** outptr_QInputEvent);
QPoint* QHoverEvent_pos(const QHoverEvent* self);
QPoint* QHoverEvent_oldPos(const QHoverEvent* self);
QPointF* QHoverEvent_posF(const QHoverEvent* self);
QPointF* QHoverEvent_oldPosF(const QHoverEvent* self);
void QHoverEvent_operatorAssign(QHoverEvent* self, QHoverEvent* param1);

void QHoverEvent_delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QPointF* pos, int delta, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase);
QWheelEvent* QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source);
QWheelEvent* QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, int qt4Orientation, int buttons, int modifiers, int phase, int source, bool inverted);
QWheelEvent* QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted);
QWheelEvent* QWheelEvent_new8(QWheelEvent* param1);
QWheelEvent* QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, int orient);
QWheelEvent* QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, int orient);
QWheelEvent* QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source);
void QWheelEvent_virtbase(QWheelEvent* src, QInputEvent** outptr_QInputEvent);
QPoint* QWheelEvent_pixelDelta(const QWheelEvent* self);
QPoint* QWheelEvent_angleDelta(const QWheelEvent* self);
int QWheelEvent_delta(const QWheelEvent* self);
int QWheelEvent_orientation(const QWheelEvent* self);
QPoint* QWheelEvent_pos(const QWheelEvent* self);
QPoint* QWheelEvent_globalPos(const QWheelEvent* self);
int QWheelEvent_x(const QWheelEvent* self);
int QWheelEvent_y(const QWheelEvent* self);
int QWheelEvent_globalX(const QWheelEvent* self);
int QWheelEvent_globalY(const QWheelEvent* self);
QPointF* QWheelEvent_posF(const QWheelEvent* self);
QPointF* QWheelEvent_globalPosF(const QWheelEvent* self);
QPointF* QWheelEvent_position(const QWheelEvent* self);
QPointF* QWheelEvent_globalPosition(const QWheelEvent* self);
int QWheelEvent_buttons(const QWheelEvent* self);
int QWheelEvent_phase(const QWheelEvent* self);
bool QWheelEvent_inverted(const QWheelEvent* self);
int QWheelEvent_source(const QWheelEvent* self);
void QWheelEvent_operatorAssign(QWheelEvent* self, QWheelEvent* param1);

void QWheelEvent_delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID);
QTabletEvent* QTabletEvent_new2(int t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, int button, int buttons);
QTabletEvent* QTabletEvent_new3(QTabletEvent* param1);
void QTabletEvent_virtbase(QTabletEvent* src, QInputEvent** outptr_QInputEvent);
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
int QTabletEvent_device(const QTabletEvent* self);
int QTabletEvent_deviceType(const QTabletEvent* self);
int QTabletEvent_pointerType(const QTabletEvent* self);
long long QTabletEvent_uniqueId(const QTabletEvent* self);
double QTabletEvent_pressure(const QTabletEvent* self);
int QTabletEvent_z(const QTabletEvent* self);
double QTabletEvent_tangentialPressure(const QTabletEvent* self);
double QTabletEvent_rotation(const QTabletEvent* self);
int QTabletEvent_xTilt(const QTabletEvent* self);
int QTabletEvent_yTilt(const QTabletEvent* self);
int QTabletEvent_button(const QTabletEvent* self);
int QTabletEvent_buttons(const QTabletEvent* self);
void QTabletEvent_operatorAssign(QTabletEvent* self, QTabletEvent* param1);

void QTabletEvent_delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(int type, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(int type, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new3(QNativeGestureEvent* param1);
void QNativeGestureEvent_virtbase(QNativeGestureEvent* src, QInputEvent** outptr_QInputEvent);
int QNativeGestureEvent_gestureType(const QNativeGestureEvent* self);
double QNativeGestureEvent_value(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_pos(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_globalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_localPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_windowPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_screenPos(const QNativeGestureEvent* self);
QTouchDevice* QNativeGestureEvent_device(const QNativeGestureEvent* self);
void QNativeGestureEvent_operatorAssign(QNativeGestureEvent* self, QNativeGestureEvent* param1);

void QNativeGestureEvent_delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(int type, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(QKeyEvent* param1);
QKeyEvent* QKeyEvent_new4(int type, int key, int modifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new5(int type, int key, int modifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new6(int type, int key, int modifiers, struct miqt_string text, bool autorep, unsigned short count);
QKeyEvent* QKeyEvent_new7(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new8(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new9(int type, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, unsigned short count);
void QKeyEvent_virtbase(QKeyEvent* src, QInputEvent** outptr_QInputEvent);
int QKeyEvent_key(const QKeyEvent* self);
bool QKeyEvent_matches(const QKeyEvent* self, int key);
int QKeyEvent_modifiers(const QKeyEvent* self);
struct miqt_string QKeyEvent_text(const QKeyEvent* self);
bool QKeyEvent_isAutoRepeat(const QKeyEvent* self);
int QKeyEvent_count(const QKeyEvent* self);
unsigned int QKeyEvent_nativeScanCode(const QKeyEvent* self);
unsigned int QKeyEvent_nativeVirtualKey(const QKeyEvent* self);
unsigned int QKeyEvent_nativeModifiers(const QKeyEvent* self);
void QKeyEvent_operatorAssign(QKeyEvent* self, QKeyEvent* param1);

void QKeyEvent_delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(int type);
QFocusEvent* QFocusEvent_new2(QFocusEvent* param1);
QFocusEvent* QFocusEvent_new3(int type, int reason);
void QFocusEvent_virtbase(QFocusEvent* src, QEvent** outptr_QEvent);
bool QFocusEvent_gotFocus(const QFocusEvent* self);
bool QFocusEvent_lostFocus(const QFocusEvent* self);
int QFocusEvent_reason(const QFocusEvent* self);
void QFocusEvent_operatorAssign(QFocusEvent* self, QFocusEvent* param1);

void QFocusEvent_delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(QRect* paintRect);
QPaintEvent* QPaintEvent_new3(QPaintEvent* param1);
void QPaintEvent_virtbase(QPaintEvent* src, QEvent** outptr_QEvent);
QRect* QPaintEvent_rect(const QPaintEvent* self);
QRegion* QPaintEvent_region(const QPaintEvent* self);
void QPaintEvent_operatorAssign(QPaintEvent* self, QPaintEvent* param1);

void QPaintEvent_delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos);
QMoveEvent* QMoveEvent_new2(QMoveEvent* param1);
void QMoveEvent_virtbase(QMoveEvent* src, QEvent** outptr_QEvent);
QPoint* QMoveEvent_pos(const QMoveEvent* self);
QPoint* QMoveEvent_oldPos(const QMoveEvent* self);
void QMoveEvent_operatorAssign(QMoveEvent* self, QMoveEvent* param1);

void QMoveEvent_delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(QRegion* rgn);
QExposeEvent* QExposeEvent_new2(QExposeEvent* param1);
void QExposeEvent_virtbase(QExposeEvent* src, QEvent** outptr_QEvent);
QRegion* QExposeEvent_region(const QExposeEvent* self);
void QExposeEvent_operatorAssign(QExposeEvent* self, QExposeEvent* param1);

void QExposeEvent_delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1);
void QPlatformSurfaceEvent_virtbase(QPlatformSurfaceEvent* src, QEvent** outptr_QEvent);
int QPlatformSurfaceEvent_surfaceEventType(const QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_operatorAssign(QPlatformSurfaceEvent* self, QPlatformSurfaceEvent* param1);

void QPlatformSurfaceEvent_delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize);
QResizeEvent* QResizeEvent_new2(QResizeEvent* param1);
void QResizeEvent_virtbase(QResizeEvent* src, QEvent** outptr_QEvent);
QSize* QResizeEvent_size(const QResizeEvent* self);
QSize* QResizeEvent_oldSize(const QResizeEvent* self);
void QResizeEvent_operatorAssign(QResizeEvent* self, QResizeEvent* param1);

void QResizeEvent_delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
QCloseEvent* QCloseEvent_new2(QCloseEvent* param1);
void QCloseEvent_virtbase(QCloseEvent* src, QEvent** outptr_QEvent);
void QCloseEvent_operatorAssign(QCloseEvent* self, QCloseEvent* param1);

void QCloseEvent_delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
QIconDragEvent* QIconDragEvent_new2(QIconDragEvent* param1);
void QIconDragEvent_virtbase(QIconDragEvent* src, QEvent** outptr_QEvent);
void QIconDragEvent_operatorAssign(QIconDragEvent* self, QIconDragEvent* param1);

void QIconDragEvent_delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
QShowEvent* QShowEvent_new2(QShowEvent* param1);
void QShowEvent_virtbase(QShowEvent* src, QEvent** outptr_QEvent);
void QShowEvent_operatorAssign(QShowEvent* self, QShowEvent* param1);

void QShowEvent_delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
QHideEvent* QHideEvent_new2(QHideEvent* param1);
void QHideEvent_virtbase(QHideEvent* src, QEvent** outptr_QEvent);
void QHideEvent_operatorAssign(QHideEvent* self, QHideEvent* param1);

void QHideEvent_delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos, int modifiers);
QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos, QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new4(QContextMenuEvent* param1);
void QContextMenuEvent_virtbase(QContextMenuEvent* src, QInputEvent** outptr_QInputEvent);
int QContextMenuEvent_x(const QContextMenuEvent* self);
int QContextMenuEvent_y(const QContextMenuEvent* self);
int QContextMenuEvent_globalX(const QContextMenuEvent* self);
int QContextMenuEvent_globalY(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_pos(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_globalPos(const QContextMenuEvent* self);
int QContextMenuEvent_reason(const QContextMenuEvent* self);
void QContextMenuEvent_operatorAssign(QContextMenuEvent* self, QContextMenuEvent* param1);

void QContextMenuEvent_delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes);
QInputMethodEvent* QInputMethodEvent_new3(QInputMethodEvent* other);
void QInputMethodEvent_virtbase(QInputMethodEvent* src, QEvent** outptr_QEvent);
void QInputMethodEvent_setCommitString(QInputMethodEvent* self, struct miqt_string commitString);
struct miqt_array /* of QInputMethodEvent__Attribute* */  QInputMethodEvent_attributes(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_preeditString(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_commitString(const QInputMethodEvent* self);
int QInputMethodEvent_replacementStart(const QInputMethodEvent* self);
int QInputMethodEvent_replacementLength(const QInputMethodEvent* self);
void QInputMethodEvent_operatorAssign(QInputMethodEvent* self, QInputMethodEvent* param1);
void QInputMethodEvent_setCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom);
void QInputMethodEvent_setCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength);

void QInputMethodEvent_delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
QInputMethodQueryEvent* QInputMethodQueryEvent_new2(QInputMethodQueryEvent* param1);
void QInputMethodQueryEvent_virtbase(QInputMethodQueryEvent* src, QEvent** outptr_QEvent);
int QInputMethodQueryEvent_queries(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_setValue(QInputMethodQueryEvent* self, int query, QVariant* value);
QVariant* QInputMethodQueryEvent_value(const QInputMethodQueryEvent* self, int query);
void QInputMethodQueryEvent_operatorAssign(QInputMethodQueryEvent* self, QInputMethodQueryEvent* param1);

void QInputMethodQueryEvent_delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(QDropEvent* param1);
QDropEvent* QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int type);
void QDropEvent_virtbase(QDropEvent* src, QEvent** outptr_QEvent);
QPoint* QDropEvent_pos(const QDropEvent* self);
QPointF* QDropEvent_posF(const QDropEvent* self);
int QDropEvent_mouseButtons(const QDropEvent* self);
int QDropEvent_keyboardModifiers(const QDropEvent* self);
int QDropEvent_possibleActions(const QDropEvent* self);
int QDropEvent_proposedAction(const QDropEvent* self);
void QDropEvent_acceptProposedAction(QDropEvent* self);
int QDropEvent_dropAction(const QDropEvent* self);
void QDropEvent_setDropAction(QDropEvent* self, int action);
QObject* QDropEvent_source(const QDropEvent* self);
QMimeData* QDropEvent_mimeData(const QDropEvent* self);
void QDropEvent_operatorAssign(QDropEvent* self, QDropEvent* param1);

void QDropEvent_delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(QDragMoveEvent* param1);
QDragMoveEvent* QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int type);
void QDragMoveEvent_virtbase(QDragMoveEvent* src, QDropEvent** outptr_QDropEvent);
QRect* QDragMoveEvent_answerRect(const QDragMoveEvent* self);
void QDragMoveEvent_accept(QDragMoveEvent* self);
void QDragMoveEvent_ignore(QDragMoveEvent* self);
void QDragMoveEvent_acceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_ignoreWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_operatorAssign(QDragMoveEvent* self, QDragMoveEvent* param1);

void QDragMoveEvent_delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragEnterEvent* QDragEnterEvent_new2(QDragEnterEvent* param1);
void QDragEnterEvent_virtbase(QDragEnterEvent* src, QDragMoveEvent** outptr_QDragMoveEvent);
void QDragEnterEvent_operatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1);

void QDragEnterEvent_delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
QDragLeaveEvent* QDragLeaveEvent_new2(QDragLeaveEvent* param1);
void QDragLeaveEvent_virtbase(QDragLeaveEvent* src, QEvent** outptr_QEvent);
void QDragLeaveEvent_operatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1);

void QDragLeaveEvent_delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(int type, QPoint* pos, QPoint* globalPos);
QHelpEvent* QHelpEvent_new2(QHelpEvent* param1);
void QHelpEvent_virtbase(QHelpEvent* src, QEvent** outptr_QEvent);
int QHelpEvent_x(const QHelpEvent* self);
int QHelpEvent_y(const QHelpEvent* self);
int QHelpEvent_globalX(const QHelpEvent* self);
int QHelpEvent_globalY(const QHelpEvent* self);
QPoint* QHelpEvent_pos(const QHelpEvent* self);
QPoint* QHelpEvent_globalPos(const QHelpEvent* self);
void QHelpEvent_operatorAssign(QHelpEvent* self, QHelpEvent* param1);

void QHelpEvent_delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string tip);
QStatusTipEvent* QStatusTipEvent_new2(QStatusTipEvent* param1);
void QStatusTipEvent_virtbase(QStatusTipEvent* src, QEvent** outptr_QEvent);
struct miqt_string QStatusTipEvent_tip(const QStatusTipEvent* self);
void QStatusTipEvent_operatorAssign(QStatusTipEvent* self, QStatusTipEvent* param1);

void QStatusTipEvent_delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string href);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1);
void QWhatsThisClickedEvent_virtbase(QWhatsThisClickedEvent* src, QEvent** outptr_QEvent);
struct miqt_string QWhatsThisClickedEvent_href(const QWhatsThisClickedEvent* self);
void QWhatsThisClickedEvent_operatorAssign(QWhatsThisClickedEvent* self, QWhatsThisClickedEvent* param1);

void QWhatsThisClickedEvent_delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int type, QAction* action);
QActionEvent* QActionEvent_new2(QActionEvent* param1);
QActionEvent* QActionEvent_new3(int type, QAction* action, QAction* before);
void QActionEvent_virtbase(QActionEvent* src, QEvent** outptr_QEvent);
QAction* QActionEvent_action(const QActionEvent* self);
QAction* QActionEvent_before(const QActionEvent* self);
void QActionEvent_operatorAssign(QActionEvent* self, QActionEvent* param1);

void QActionEvent_delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string file);
QFileOpenEvent* QFileOpenEvent_new2(QUrl* url);
QFileOpenEvent* QFileOpenEvent_new3(QFileOpenEvent* param1);
void QFileOpenEvent_virtbase(QFileOpenEvent* src, QEvent** outptr_QEvent);
struct miqt_string QFileOpenEvent_file(const QFileOpenEvent* self);
QUrl* QFileOpenEvent_url(const QFileOpenEvent* self);
bool QFileOpenEvent_openFile(const QFileOpenEvent* self, QFile* file, int flags);
void QFileOpenEvent_operatorAssign(QFileOpenEvent* self, QFileOpenEvent* param1);

void QFileOpenEvent_delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
QToolBarChangeEvent* QToolBarChangeEvent_new2(QToolBarChangeEvent* param1);
void QToolBarChangeEvent_virtbase(QToolBarChangeEvent* src, QEvent** outptr_QEvent);
bool QToolBarChangeEvent_toggle(const QToolBarChangeEvent* self);
void QToolBarChangeEvent_operatorAssign(QToolBarChangeEvent* self, QToolBarChangeEvent* param1);

void QToolBarChangeEvent_delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(QShortcutEvent* param1);
QShortcutEvent* QShortcutEvent_new3(QKeySequence* key, int id, bool ambiguous);
void QShortcutEvent_virtbase(QShortcutEvent* src, QEvent** outptr_QEvent);
QKeySequence* QShortcutEvent_key(const QShortcutEvent* self);
int QShortcutEvent_shortcutId(const QShortcutEvent* self);
bool QShortcutEvent_isAmbiguous(const QShortcutEvent* self);
void QShortcutEvent_operatorAssign(QShortcutEvent* self, QShortcutEvent* param1);

void QShortcutEvent_delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int aOldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(QWindowStateChangeEvent* param1);
QWindowStateChangeEvent* QWindowStateChangeEvent_new3(int aOldState, bool isOverride);
void QWindowStateChangeEvent_virtbase(QWindowStateChangeEvent* src, QEvent** outptr_QEvent);
int QWindowStateChangeEvent_oldState(const QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_isOverride(const QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_operatorAssign(QWindowStateChangeEvent* self, QWindowStateChangeEvent* param1);

void QWindowStateChangeEvent_delete(QWindowStateChangeEvent* self);

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_fromNumericId(long long id);
bool QPointingDeviceUniqueId_isValid(const QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_numericId(const QPointingDeviceUniqueId* self);

void QPointingDeviceUniqueId_delete(QPointingDeviceUniqueId* self);

QTouchEvent* QTouchEvent_new(int eventType);
QTouchEvent* QTouchEvent_new2(QTouchEvent* param1);
QTouchEvent* QTouchEvent_new3(int eventType, QTouchDevice* device);
QTouchEvent* QTouchEvent_new4(int eventType, QTouchDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(int eventType, QTouchDevice* device, int modifiers, int touchPointStates);
QTouchEvent* QTouchEvent_new6(int eventType, QTouchDevice* device, int modifiers, int touchPointStates, struct miqt_array /* of QTouchEvent__TouchPoint* */  touchPoints);
void QTouchEvent_virtbase(QTouchEvent* src, QInputEvent** outptr_QInputEvent);
QWindow* QTouchEvent_window(const QTouchEvent* self);
QObject* QTouchEvent_target(const QTouchEvent* self);
int QTouchEvent_touchPointStates(const QTouchEvent* self);
struct miqt_array /* of QTouchEvent__TouchPoint* */  QTouchEvent_touchPoints(const QTouchEvent* self);
QTouchDevice* QTouchEvent_device(const QTouchEvent* self);
void QTouchEvent_setWindow(QTouchEvent* self, QWindow* awindow);
void QTouchEvent_setTarget(QTouchEvent* self, QObject* atarget);
void QTouchEvent_setTouchPointStates(QTouchEvent* self, int aTouchPointStates);
void QTouchEvent_setTouchPoints(QTouchEvent* self, struct miqt_array /* of QTouchEvent__TouchPoint* */  atouchPoints);
void QTouchEvent_setDevice(QTouchEvent* self, QTouchDevice* adevice);
void QTouchEvent_operatorAssign(QTouchEvent* self, QTouchEvent* param1);

void QTouchEvent_delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos);
QScrollPrepareEvent* QScrollPrepareEvent_new2(QScrollPrepareEvent* param1);
void QScrollPrepareEvent_virtbase(QScrollPrepareEvent* src, QEvent** outptr_QEvent);
QPointF* QScrollPrepareEvent_startPos(const QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_viewportSize(const QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_contentPosRange(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_contentPos(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_setViewportSize(QScrollPrepareEvent* self, QSizeF* size);
void QScrollPrepareEvent_setContentPosRange(QScrollPrepareEvent* self, QRectF* rect);
void QScrollPrepareEvent_setContentPos(QScrollPrepareEvent* self, QPointF* pos);
void QScrollPrepareEvent_operatorAssign(QScrollPrepareEvent* self, QScrollPrepareEvent* param1);

void QScrollPrepareEvent_delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState);
QScrollEvent* QScrollEvent_new2(QScrollEvent* param1);
void QScrollEvent_virtbase(QScrollEvent* src, QEvent** outptr_QEvent);
QPointF* QScrollEvent_contentPos(const QScrollEvent* self);
QPointF* QScrollEvent_overshootDistance(const QScrollEvent* self);
int QScrollEvent_scrollState(const QScrollEvent* self);
void QScrollEvent_operatorAssign(QScrollEvent* self, QScrollEvent* param1);

void QScrollEvent_delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1);
void QScreenOrientationChangeEvent_virtbase(QScreenOrientationChangeEvent* src, QEvent** outptr_QEvent);
QScreen* QScreenOrientationChangeEvent_screen(const QScreenOrientationChangeEvent* self);
int QScreenOrientationChangeEvent_orientation(const QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_operatorAssign(QScreenOrientationChangeEvent* self, QScreenOrientationChangeEvent* param1);

void QScreenOrientationChangeEvent_delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1);
void QApplicationStateChangeEvent_virtbase(QApplicationStateChangeEvent* src, QEvent** outptr_QEvent);
int QApplicationStateChangeEvent_applicationState(const QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_operatorAssign(QApplicationStateChangeEvent* self, QApplicationStateChangeEvent* param1);

void QApplicationStateChangeEvent_delete(QApplicationStateChangeEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_operatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1);

void QInputMethodEvent__Attribute_delete(QInputMethodEvent__Attribute* self);

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new();
QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new2(QTouchEvent__TouchPoint* other);
QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new3(int id);
void QTouchEvent__TouchPoint_operatorAssign(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other);
void QTouchEvent__TouchPoint_swap(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other);
int QTouchEvent__TouchPoint_id(const QTouchEvent__TouchPoint* self);
QPointingDeviceUniqueId* QTouchEvent__TouchPoint_uniqueId(const QTouchEvent__TouchPoint* self);
int QTouchEvent__TouchPoint_state(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_pos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_startPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_lastPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_scenePos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_startScenePos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_lastScenePos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_screenPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_startScreenPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_lastScreenPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_normalizedPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_startNormalizedPos(const QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_lastNormalizedPos(const QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_rect(const QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_sceneRect(const QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_screenRect(const QTouchEvent__TouchPoint* self);
void QTouchEvent__TouchPoint_setRect(QTouchEvent__TouchPoint* self, QRectF* rect);
void QTouchEvent__TouchPoint_setSceneRect(QTouchEvent__TouchPoint* self, QRectF* sceneRect);
void QTouchEvent__TouchPoint_setScreenRect(QTouchEvent__TouchPoint* self, QRectF* screenRect);
double QTouchEvent__TouchPoint_pressure(const QTouchEvent__TouchPoint* self);
double QTouchEvent__TouchPoint_rotation(const QTouchEvent__TouchPoint* self);
QSizeF* QTouchEvent__TouchPoint_ellipseDiameters(const QTouchEvent__TouchPoint* self);
QVector2D* QTouchEvent__TouchPoint_velocity(const QTouchEvent__TouchPoint* self);
int QTouchEvent__TouchPoint_flags(const QTouchEvent__TouchPoint* self);
struct miqt_array /* of QPointF* */  QTouchEvent__TouchPoint_rawScreenPositions(const QTouchEvent__TouchPoint* self);
void QTouchEvent__TouchPoint_setId(QTouchEvent__TouchPoint* self, int id);
void QTouchEvent__TouchPoint_setUniqueId(QTouchEvent__TouchPoint* self, long long uid);
void QTouchEvent__TouchPoint_setState(QTouchEvent__TouchPoint* self, int state);
void QTouchEvent__TouchPoint_setPos(QTouchEvent__TouchPoint* self, QPointF* pos);
void QTouchEvent__TouchPoint_setScenePos(QTouchEvent__TouchPoint* self, QPointF* scenePos);
void QTouchEvent__TouchPoint_setScreenPos(QTouchEvent__TouchPoint* self, QPointF* screenPos);
void QTouchEvent__TouchPoint_setNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* normalizedPos);
void QTouchEvent__TouchPoint_setStartPos(QTouchEvent__TouchPoint* self, QPointF* startPos);
void QTouchEvent__TouchPoint_setStartScenePos(QTouchEvent__TouchPoint* self, QPointF* startScenePos);
void QTouchEvent__TouchPoint_setStartScreenPos(QTouchEvent__TouchPoint* self, QPointF* startScreenPos);
void QTouchEvent__TouchPoint_setStartNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* startNormalizedPos);
void QTouchEvent__TouchPoint_setLastPos(QTouchEvent__TouchPoint* self, QPointF* lastPos);
void QTouchEvent__TouchPoint_setLastScenePos(QTouchEvent__TouchPoint* self, QPointF* lastScenePos);
void QTouchEvent__TouchPoint_setLastScreenPos(QTouchEvent__TouchPoint* self, QPointF* lastScreenPos);
void QTouchEvent__TouchPoint_setLastNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* lastNormalizedPos);
void QTouchEvent__TouchPoint_setPressure(QTouchEvent__TouchPoint* self, double pressure);
void QTouchEvent__TouchPoint_setRotation(QTouchEvent__TouchPoint* self, double angle);
void QTouchEvent__TouchPoint_setEllipseDiameters(QTouchEvent__TouchPoint* self, QSizeF* dia);
void QTouchEvent__TouchPoint_setVelocity(QTouchEvent__TouchPoint* self, QVector2D* v);
void QTouchEvent__TouchPoint_setFlags(QTouchEvent__TouchPoint* self, int flags);
void QTouchEvent__TouchPoint_setRawScreenPositions(QTouchEvent__TouchPoint* self, struct miqt_array /* of QPointF* */  positions);

void QTouchEvent__TouchPoint_delete(QTouchEvent__TouchPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
