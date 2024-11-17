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

QInputEvent* QInputEvent_new(int typeVal, QInputDevice* m_dev);
QInputEvent* QInputEvent_new2(int typeVal, QInputDevice* m_dev, int modifiers);
QInputEvent* QInputEvent_Clone(const QInputEvent* self);
QInputDevice* QInputEvent_Device(const QInputEvent* self);
int QInputEvent_DeviceType(const QInputEvent* self);
int QInputEvent_Modifiers(const QInputEvent* self);
void QInputEvent_SetModifiers(QInputEvent* self, int modifiers);
unsigned long long QInputEvent_Timestamp(const QInputEvent* self);
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long long timestamp);
void QInputEvent_Delete(QInputEvent* self);

QPointerEvent* QPointerEvent_new(int typeVal, QPointingDevice* dev);
QPointerEvent* QPointerEvent_new2(int typeVal, QPointingDevice* dev, int modifiers);
QPointerEvent* QPointerEvent_new3(int typeVal, QPointingDevice* dev, int modifiers, struct miqt_array /* of QEventPoint* */  points);
QPointerEvent* QPointerEvent_Clone(const QPointerEvent* self);
QPointingDevice* QPointerEvent_PointingDevice(const QPointerEvent* self);
int QPointerEvent_PointerType(const QPointerEvent* self);
void QPointerEvent_SetTimestamp(QPointerEvent* self, unsigned long long timestamp);
ptrdiff_t QPointerEvent_PointCount(const QPointerEvent* self);
QEventPoint* QPointerEvent_Point(QPointerEvent* self, ptrdiff_t i);
struct miqt_array /* of QEventPoint* */  QPointerEvent_Points(const QPointerEvent* self);
QEventPoint* QPointerEvent_PointById(QPointerEvent* self, int id);
bool QPointerEvent_AllPointsGrabbed(const QPointerEvent* self);
bool QPointerEvent_IsBeginEvent(const QPointerEvent* self);
bool QPointerEvent_IsUpdateEvent(const QPointerEvent* self);
bool QPointerEvent_IsEndEvent(const QPointerEvent* self);
bool QPointerEvent_AllPointsAccepted(const QPointerEvent* self);
void QPointerEvent_SetAccepted(QPointerEvent* self, bool accepted);
QObject* QPointerEvent_ExclusiveGrabber(const QPointerEvent* self, QEventPoint* point);
void QPointerEvent_SetExclusiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* exclusiveGrabber);
void QPointerEvent_ClearPassiveGrabbers(QPointerEvent* self, QEventPoint* point);
bool QPointerEvent_AddPassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);
bool QPointerEvent_RemovePassiveGrabber(QPointerEvent* self, QEventPoint* point, QObject* grabber);
void QPointerEvent_Delete(QPointerEvent* self);

QSinglePointEvent* QSinglePointEvent_Clone(const QSinglePointEvent* self);
int QSinglePointEvent_Button(const QSinglePointEvent* self);
int QSinglePointEvent_Buttons(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_Position(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_ScenePosition(const QSinglePointEvent* self);
QPointF* QSinglePointEvent_GlobalPosition(const QSinglePointEvent* self);
bool QSinglePointEvent_IsBeginEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsUpdateEvent(const QSinglePointEvent* self);
bool QSinglePointEvent_IsEndEvent(const QSinglePointEvent* self);
QObject* QSinglePointEvent_ExclusivePointGrabber(const QSinglePointEvent* self);
void QSinglePointEvent_SetExclusivePointGrabber(QSinglePointEvent* self, QObject* exclusiveGrabber);
void QSinglePointEvent_Delete(QSinglePointEvent* self);

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* scenePos, QPointF* globalPos);
QEnterEvent* QEnterEvent_new2(QPointF* localPos, QPointF* scenePos, QPointF* globalPos, QPointingDevice* device);
QEnterEvent* QEnterEvent_Clone(const QEnterEvent* self);
QPoint* QEnterEvent_Pos(const QEnterEvent* self);
QPoint* QEnterEvent_GlobalPos(const QEnterEvent* self);
int QEnterEvent_X(const QEnterEvent* self);
int QEnterEvent_Y(const QEnterEvent* self);
int QEnterEvent_GlobalX(const QEnterEvent* self);
int QEnterEvent_GlobalY(const QEnterEvent* self);
QPointF* QEnterEvent_LocalPos(const QEnterEvent* self);
QPointF* QEnterEvent_WindowPos(const QEnterEvent* self);
QPointF* QEnterEvent_ScreenPos(const QEnterEvent* self);
void QEnterEvent_Delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(int typeVal, QPointF* localPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source);
QMouseEvent* QMouseEvent_new5(int typeVal, QPointF* localPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new6(int typeVal, QPointF* localPos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new7(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, QPointingDevice* device);
QMouseEvent* QMouseEvent_new8(int typeVal, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, int button, int buttons, int modifiers, int source, QPointingDevice* device);
QMouseEvent* QMouseEvent_Clone(const QMouseEvent* self);
QPoint* QMouseEvent_Pos(const QMouseEvent* self);
QPoint* QMouseEvent_GlobalPos(const QMouseEvent* self);
int QMouseEvent_X(const QMouseEvent* self);
int QMouseEvent_Y(const QMouseEvent* self);
int QMouseEvent_GlobalX(const QMouseEvent* self);
int QMouseEvent_GlobalY(const QMouseEvent* self);
QPointF* QMouseEvent_LocalPos(const QMouseEvent* self);
QPointF* QMouseEvent_WindowPos(const QMouseEvent* self);
QPointF* QMouseEvent_ScreenPos(const QMouseEvent* self);
int QMouseEvent_Source(const QMouseEvent* self);
int QMouseEvent_Flags(const QMouseEvent* self);
void QMouseEvent_Delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(int typeVal, QPointF* pos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new3(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new4(int typeVal, QPointF* scenePos, QPointF* globalPos, QPointF* oldPos, int modifiers, QPointingDevice* device);
QHoverEvent* QHoverEvent_new5(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers);
QHoverEvent* QHoverEvent_new6(int typeVal, QPointF* pos, QPointF* oldPos, int modifiers, QPointingDevice* device);
QHoverEvent* QHoverEvent_Clone(const QHoverEvent* self);
QPoint* QHoverEvent_Pos(const QHoverEvent* self);
QPointF* QHoverEvent_PosF(const QHoverEvent* self);
bool QHoverEvent_IsUpdateEvent(const QHoverEvent* self);
QPoint* QHoverEvent_OldPos(const QHoverEvent* self);
QPointF* QHoverEvent_OldPosF(const QHoverEvent* self);
void QHoverEvent_Delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted);
QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source);
QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, int phase, bool inverted, int source, QPointingDevice* device);
QWheelEvent* QWheelEvent_Clone(const QWheelEvent* self);
QPoint* QWheelEvent_PixelDelta(const QWheelEvent* self);
QPoint* QWheelEvent_AngleDelta(const QWheelEvent* self);
int QWheelEvent_Phase(const QWheelEvent* self);
bool QWheelEvent_Inverted(const QWheelEvent* self);
bool QWheelEvent_IsInverted(const QWheelEvent* self);
bool QWheelEvent_HasPixelDelta(const QWheelEvent* self);
bool QWheelEvent_IsBeginEvent(const QWheelEvent* self);
bool QWheelEvent_IsUpdateEvent(const QWheelEvent* self);
bool QWheelEvent_IsEndEvent(const QWheelEvent* self);
int QWheelEvent_Source(const QWheelEvent* self);
void QWheelEvent_Delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(int t, QPointingDevice* device, QPointF* pos, QPointF* globalPos, double pressure, float xTilt, float yTilt, float tangentialPressure, double rotation, float z, int keyState, int button, int buttons);
QTabletEvent* QTabletEvent_Clone(const QTabletEvent* self);
QPoint* QTabletEvent_Pos(const QTabletEvent* self);
QPoint* QTabletEvent_GlobalPos(const QTabletEvent* self);
QPointF* QTabletEvent_PosF(const QTabletEvent* self);
QPointF* QTabletEvent_GlobalPosF(const QTabletEvent* self);
int QTabletEvent_X(const QTabletEvent* self);
int QTabletEvent_Y(const QTabletEvent* self);
int QTabletEvent_GlobalX(const QTabletEvent* self);
int QTabletEvent_GlobalY(const QTabletEvent* self);
double QTabletEvent_HiResGlobalX(const QTabletEvent* self);
double QTabletEvent_HiResGlobalY(const QTabletEvent* self);
long long QTabletEvent_UniqueId(const QTabletEvent* self);
double QTabletEvent_Pressure(const QTabletEvent* self);
double QTabletEvent_Rotation(const QTabletEvent* self);
double QTabletEvent_Z(const QTabletEvent* self);
double QTabletEvent_TangentialPressure(const QTabletEvent* self);
double QTabletEvent_XTilt(const QTabletEvent* self);
double QTabletEvent_YTilt(const QTabletEvent* self);
void QTabletEvent_Delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(int typeVal, QPointingDevice* dev, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, unsigned long long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta);
QNativeGestureEvent* QNativeGestureEvent_new3(int typeVal, QPointingDevice* dev, int fingerCount, QPointF* localPos, QPointF* scenePos, QPointF* globalPos, double value, QPointF* delta, unsigned long long sequenceId);
QNativeGestureEvent* QNativeGestureEvent_Clone(const QNativeGestureEvent* self);
int QNativeGestureEvent_GestureType(const QNativeGestureEvent* self);
int QNativeGestureEvent_FingerCount(const QNativeGestureEvent* self);
double QNativeGestureEvent_Value(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_Delta(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_Pos(const QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_GlobalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_LocalPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_WindowPos(const QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_ScreenPos(const QNativeGestureEvent* self);
void QNativeGestureEvent_Delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(int typeVal, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(int typeVal, int key, int modifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new4(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new5(int typeVal, int key, int modifiers, struct miqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new6(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text);
QKeyEvent* QKeyEvent_new7(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep);
QKeyEvent* QKeyEvent_new8(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new9(int typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, struct miqt_string text, bool autorep, uint16_t count, QInputDevice* device);
QKeyEvent* QKeyEvent_Clone(const QKeyEvent* self);
int QKeyEvent_Key(const QKeyEvent* self);
bool QKeyEvent_Matches(const QKeyEvent* self, int key);
int QKeyEvent_Modifiers(const QKeyEvent* self);
QKeyCombination* QKeyEvent_KeyCombination(const QKeyEvent* self);
struct miqt_string QKeyEvent_Text(const QKeyEvent* self);
bool QKeyEvent_IsAutoRepeat(const QKeyEvent* self);
int QKeyEvent_Count(const QKeyEvent* self);
unsigned int QKeyEvent_NativeScanCode(const QKeyEvent* self);
unsigned int QKeyEvent_NativeVirtualKey(const QKeyEvent* self);
unsigned int QKeyEvent_NativeModifiers(const QKeyEvent* self);
void QKeyEvent_Delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(int typeVal);
QFocusEvent* QFocusEvent_new2(int typeVal, int reason);
QFocusEvent* QFocusEvent_Clone(const QFocusEvent* self);
bool QFocusEvent_GotFocus(const QFocusEvent* self);
bool QFocusEvent_LostFocus(const QFocusEvent* self);
int QFocusEvent_Reason(const QFocusEvent* self);
void QFocusEvent_Delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(QRect* paintRect);
QPaintEvent* QPaintEvent_Clone(const QPaintEvent* self);
QRect* QPaintEvent_Rect(const QPaintEvent* self);
QRegion* QPaintEvent_Region(const QPaintEvent* self);
void QPaintEvent_Delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos);
QMoveEvent* QMoveEvent_Clone(const QMoveEvent* self);
QPoint* QMoveEvent_Pos(const QMoveEvent* self);
QPoint* QMoveEvent_OldPos(const QMoveEvent* self);
void QMoveEvent_Delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(QRegion* m_region);
QExposeEvent* QExposeEvent_Clone(const QExposeEvent* self);
QRegion* QExposeEvent_Region(const QExposeEvent* self);
void QExposeEvent_Delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(int surfaceEventType);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_Clone(const QPlatformSurfaceEvent* self);
int QPlatformSurfaceEvent_SurfaceEventType(const QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize);
QResizeEvent* QResizeEvent_Clone(const QResizeEvent* self);
QSize* QResizeEvent_Size(const QResizeEvent* self);
QSize* QResizeEvent_OldSize(const QResizeEvent* self);
void QResizeEvent_Delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
QCloseEvent* QCloseEvent_Clone(const QCloseEvent* self);
void QCloseEvent_Delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
QIconDragEvent* QIconDragEvent_Clone(const QIconDragEvent* self);
void QIconDragEvent_Delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
QShowEvent* QShowEvent_Clone(const QShowEvent* self);
void QShowEvent_Delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
QHideEvent* QHideEvent_Clone(const QHideEvent* self);
void QHideEvent_Delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(int reason, QPoint* pos, QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new2(int reason, QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new3(int reason, QPoint* pos, QPoint* globalPos, int modifiers);
QContextMenuEvent* QContextMenuEvent_Clone(const QContextMenuEvent* self);
int QContextMenuEvent_X(const QContextMenuEvent* self);
int QContextMenuEvent_Y(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalX(const QContextMenuEvent* self);
int QContextMenuEvent_GlobalY(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_Pos(const QContextMenuEvent* self);
QPoint* QContextMenuEvent_GlobalPos(const QContextMenuEvent* self);
int QContextMenuEvent_Reason(const QContextMenuEvent* self);
void QContextMenuEvent_Delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(struct miqt_string preeditText, struct miqt_array /* of QInputMethodEvent__Attribute* */  attributes);
QInputMethodEvent* QInputMethodEvent_Clone(const QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, struct miqt_string commitString);
struct miqt_array /* of QInputMethodEvent__Attribute* */  QInputMethodEvent_Attributes(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_PreeditString(const QInputMethodEvent* self);
struct miqt_string QInputMethodEvent_CommitString(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementStart(const QInputMethodEvent* self);
int QInputMethodEvent_ReplacementLength(const QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom);
void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, struct miqt_string commitString, int replaceFrom, int replaceLength);
void QInputMethodEvent_Delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
QInputMethodQueryEvent* QInputMethodQueryEvent_Clone(const QInputMethodQueryEvent* self);
int QInputMethodQueryEvent_Queries(const QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, int query, QVariant* value);
QVariant* QInputMethodQueryEvent_Value(const QInputMethodQueryEvent* self, int query);
void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal);
QDropEvent* QDropEvent_Clone(const QDropEvent* self);
QPoint* QDropEvent_Pos(const QDropEvent* self);
QPointF* QDropEvent_PosF(const QDropEvent* self);
int QDropEvent_MouseButtons(const QDropEvent* self);
int QDropEvent_KeyboardModifiers(const QDropEvent* self);
QPointF* QDropEvent_Position(const QDropEvent* self);
int QDropEvent_Buttons(const QDropEvent* self);
int QDropEvent_Modifiers(const QDropEvent* self);
int QDropEvent_PossibleActions(const QDropEvent* self);
int QDropEvent_ProposedAction(const QDropEvent* self);
void QDropEvent_AcceptProposedAction(QDropEvent* self);
int QDropEvent_DropAction(const QDropEvent* self);
void QDropEvent_SetDropAction(QDropEvent* self, int action);
QObject* QDropEvent_Source(const QDropEvent* self);
QMimeData* QDropEvent_MimeData(const QDropEvent* self);
void QDropEvent_Delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, int typeVal);
QDragMoveEvent* QDragMoveEvent_Clone(const QDragMoveEvent* self);
QRect* QDragMoveEvent_AnswerRect(const QDragMoveEvent* self);
void QDragMoveEvent_Accept(QDragMoveEvent* self);
void QDragMoveEvent_Ignore(QDragMoveEvent* self);
void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_Delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragEnterEvent* QDragEnterEvent_Clone(const QDragEnterEvent* self);
void QDragEnterEvent_Delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
QDragLeaveEvent* QDragLeaveEvent_Clone(const QDragLeaveEvent* self);
void QDragLeaveEvent_Delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(int typeVal, QPoint* pos, QPoint* globalPos);
QHelpEvent* QHelpEvent_Clone(const QHelpEvent* self);
int QHelpEvent_X(const QHelpEvent* self);
int QHelpEvent_Y(const QHelpEvent* self);
int QHelpEvent_GlobalX(const QHelpEvent* self);
int QHelpEvent_GlobalY(const QHelpEvent* self);
QPoint* QHelpEvent_Pos(const QHelpEvent* self);
QPoint* QHelpEvent_GlobalPos(const QHelpEvent* self);
void QHelpEvent_Delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(struct miqt_string tip);
QStatusTipEvent* QStatusTipEvent_Clone(const QStatusTipEvent* self);
struct miqt_string QStatusTipEvent_Tip(const QStatusTipEvent* self);
void QStatusTipEvent_Delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(struct miqt_string href);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_Clone(const QWhatsThisClickedEvent* self);
struct miqt_string QWhatsThisClickedEvent_Href(const QWhatsThisClickedEvent* self);
void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int typeVal, QAction* action);
QActionEvent* QActionEvent_new2(int typeVal, QAction* action, QAction* before);
QActionEvent* QActionEvent_Clone(const QActionEvent* self);
QAction* QActionEvent_Action(const QActionEvent* self);
QAction* QActionEvent_Before(const QActionEvent* self);
void QActionEvent_Delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(struct miqt_string file);
QFileOpenEvent* QFileOpenEvent_new2(QUrl* url);
QFileOpenEvent* QFileOpenEvent_Clone(const QFileOpenEvent* self);
struct miqt_string QFileOpenEvent_File(const QFileOpenEvent* self);
QUrl* QFileOpenEvent_Url(const QFileOpenEvent* self);
bool QFileOpenEvent_OpenFile(const QFileOpenEvent* self, QFile* file, int flags);
void QFileOpenEvent_Delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
QToolBarChangeEvent* QToolBarChangeEvent_Clone(const QToolBarChangeEvent* self);
bool QToolBarChangeEvent_Toggle(const QToolBarChangeEvent* self);
void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(QKeySequence* key, int id, bool ambiguous);
QShortcutEvent* QShortcutEvent_Clone(const QShortcutEvent* self);
QKeySequence* QShortcutEvent_Key(const QShortcutEvent* self);
int QShortcutEvent_ShortcutId(const QShortcutEvent* self);
bool QShortcutEvent_IsAmbiguous(const QShortcutEvent* self);
void QShortcutEvent_Delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int oldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(int oldState, bool isOverride);
QWindowStateChangeEvent* QWindowStateChangeEvent_Clone(const QWindowStateChangeEvent* self);
int QWindowStateChangeEvent_OldState(const QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_IsOverride(const QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self);

QTouchEvent* QTouchEvent_new(int eventType);
QTouchEvent* QTouchEvent_new2(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates);
QTouchEvent* QTouchEvent_new3(int eventType, QPointingDevice* device);
QTouchEvent* QTouchEvent_new4(int eventType, QPointingDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(int eventType, QPointingDevice* device, int modifiers, struct miqt_array /* of QEventPoint* */  touchPoints);
QTouchEvent* QTouchEvent_new6(int eventType, QPointingDevice* device, int modifiers, uint8_t touchPointStates, struct miqt_array /* of QEventPoint* */  touchPoints);
QTouchEvent* QTouchEvent_Clone(const QTouchEvent* self);
QObject* QTouchEvent_Target(const QTouchEvent* self);
uint8_t QTouchEvent_TouchPointStates(const QTouchEvent* self);
struct miqt_array /* of QEventPoint* */  QTouchEvent_TouchPoints(const QTouchEvent* self);
bool QTouchEvent_IsBeginEvent(const QTouchEvent* self);
bool QTouchEvent_IsUpdateEvent(const QTouchEvent* self);
bool QTouchEvent_IsEndEvent(const QTouchEvent* self);
void QTouchEvent_Delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos);
QScrollPrepareEvent* QScrollPrepareEvent_Clone(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_StartPos(const QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_ViewportSize(const QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_ContentPosRange(const QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_ContentPos(const QScrollPrepareEvent* self);
void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, QSizeF* size);
void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, QRectF* rect);
void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, QPointF* pos);
void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, int scrollState);
QScrollEvent* QScrollEvent_Clone(const QScrollEvent* self);
QPointF* QScrollEvent_ContentPos(const QScrollEvent* self);
QPointF* QScrollEvent_OvershootDistance(const QScrollEvent* self);
int QScrollEvent_ScrollState(const QScrollEvent* self);
void QScrollEvent_Delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, int orientation);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_Clone(const QScreenOrientationChangeEvent* self);
QScreen* QScreenOrientationChangeEvent_Screen(const QScreenOrientationChangeEvent* self);
int QScreenOrientationChangeEvent_Orientation(const QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(int state);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_Clone(const QApplicationStateChangeEvent* self);
int QApplicationStateChangeEvent_ApplicationState(const QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(int typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(int typ, int s, int l);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_OperatorAssign(QInputMethodEvent__Attribute* self, QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
