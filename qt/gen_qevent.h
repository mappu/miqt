#ifndef GEN_QEVENT_H
#define GEN_QEVENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QInputEvent* QInputEvent_new(uintptr_t typeVal);
QInputEvent* QInputEvent_new2(QInputEvent* param1);
QInputEvent* QInputEvent_new3(uintptr_t typeVal, int modifiers);
int QInputEvent_Modifiers(QInputEvent* self);
void QInputEvent_SetModifiers(QInputEvent* self, int amodifiers);
unsigned long QInputEvent_Timestamp(QInputEvent* self);
void QInputEvent_SetTimestamp(QInputEvent* self, unsigned long atimestamp);
void QInputEvent_Delete(QInputEvent* self);

QEnterEvent* QEnterEvent_new(QPointF* localPos, QPointF* windowPos, QPointF* screenPos);
QEnterEvent* QEnterEvent_new2(QEnterEvent* param1);
QPoint* QEnterEvent_Pos(QEnterEvent* self);
QPoint* QEnterEvent_GlobalPos(QEnterEvent* self);
int QEnterEvent_X(QEnterEvent* self);
int QEnterEvent_Y(QEnterEvent* self);
int QEnterEvent_GlobalX(QEnterEvent* self);
int QEnterEvent_GlobalY(QEnterEvent* self);
QPointF* QEnterEvent_LocalPos(QEnterEvent* self);
QPointF* QEnterEvent_WindowPos(QEnterEvent* self);
QPointF* QEnterEvent_ScreenPos(QEnterEvent* self);
void QEnterEvent_Delete(QEnterEvent* self);

QMouseEvent* QMouseEvent_new(uintptr_t typeVal, QPointF* localPos, uintptr_t button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new2(uintptr_t typeVal, QPointF* localPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new3(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers);
QMouseEvent* QMouseEvent_new4(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, uintptr_t button, int buttons, int modifiers, uintptr_t source);
QMouseEvent* QMouseEvent_new5(QMouseEvent* param1);
QPoint* QMouseEvent_Pos(QMouseEvent* self);
QPoint* QMouseEvent_GlobalPos(QMouseEvent* self);
int QMouseEvent_X(QMouseEvent* self);
int QMouseEvent_Y(QMouseEvent* self);
int QMouseEvent_GlobalX(QMouseEvent* self);
int QMouseEvent_GlobalY(QMouseEvent* self);
QPointF* QMouseEvent_LocalPos(QMouseEvent* self);
QPointF* QMouseEvent_WindowPos(QMouseEvent* self);
QPointF* QMouseEvent_ScreenPos(QMouseEvent* self);
uintptr_t QMouseEvent_Button(QMouseEvent* self);
int QMouseEvent_Buttons(QMouseEvent* self);
void QMouseEvent_SetLocalPos(QMouseEvent* self, QPointF* localPosition);
uintptr_t QMouseEvent_Source(QMouseEvent* self);
int QMouseEvent_Flags(QMouseEvent* self);
void QMouseEvent_Delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(uintptr_t typeVal, QPointF* pos, QPointF* oldPos);
QHoverEvent* QHoverEvent_new2(QHoverEvent* param1);
QHoverEvent* QHoverEvent_new3(uintptr_t typeVal, QPointF* pos, QPointF* oldPos, int modifiers);
QPoint* QHoverEvent_Pos(QHoverEvent* self);
QPoint* QHoverEvent_OldPos(QHoverEvent* self);
QPointF* QHoverEvent_PosF(QHoverEvent* self);
QPointF* QHoverEvent_OldPosF(QHoverEvent* self);
void QHoverEvent_Delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QPointF* pos, int delta, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new2(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new3(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers);
QWheelEvent* QWheelEvent_new4(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase);
QWheelEvent* QWheelEvent_new5(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase, uintptr_t source);
QWheelEvent* QWheelEvent_new6(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int qt4Delta, uintptr_t qt4Orientation, int buttons, int modifiers, uintptr_t phase, uintptr_t source, bool inverted);
QWheelEvent* QWheelEvent_new7(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, uintptr_t phase, bool inverted);
QWheelEvent* QWheelEvent_new8(QWheelEvent* param1);
QWheelEvent* QWheelEvent_new9(QPointF* pos, int delta, int buttons, int modifiers, uintptr_t orient);
QWheelEvent* QWheelEvent_new10(QPointF* pos, QPointF* globalPos, int delta, int buttons, int modifiers, uintptr_t orient);
QWheelEvent* QWheelEvent_new11(QPointF* pos, QPointF* globalPos, QPoint* pixelDelta, QPoint* angleDelta, int buttons, int modifiers, uintptr_t phase, bool inverted, uintptr_t source);
QPoint* QWheelEvent_PixelDelta(QWheelEvent* self);
QPoint* QWheelEvent_AngleDelta(QWheelEvent* self);
int QWheelEvent_Delta(QWheelEvent* self);
uintptr_t QWheelEvent_Orientation(QWheelEvent* self);
QPoint* QWheelEvent_Pos(QWheelEvent* self);
QPoint* QWheelEvent_GlobalPos(QWheelEvent* self);
int QWheelEvent_X(QWheelEvent* self);
int QWheelEvent_Y(QWheelEvent* self);
int QWheelEvent_GlobalX(QWheelEvent* self);
int QWheelEvent_GlobalY(QWheelEvent* self);
QPointF* QWheelEvent_PosF(QWheelEvent* self);
QPointF* QWheelEvent_GlobalPosF(QWheelEvent* self);
QPointF* QWheelEvent_Position(QWheelEvent* self);
QPointF* QWheelEvent_GlobalPosition(QWheelEvent* self);
int QWheelEvent_Buttons(QWheelEvent* self);
uintptr_t QWheelEvent_Phase(QWheelEvent* self);
bool QWheelEvent_Inverted(QWheelEvent* self);
uintptr_t QWheelEvent_Source(QWheelEvent* self);
void QWheelEvent_Delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(uintptr_t t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID);
QTabletEvent* QTabletEvent_new2(uintptr_t t, QPointF* pos, QPointF* globalPos, int device, int pointerType, double pressure, int xTilt, int yTilt, double tangentialPressure, double rotation, int z, int keyState, long long uniqueID, uintptr_t button, int buttons);
QTabletEvent* QTabletEvent_new3(QTabletEvent* param1);
QPoint* QTabletEvent_Pos(QTabletEvent* self);
QPoint* QTabletEvent_GlobalPos(QTabletEvent* self);
QPointF* QTabletEvent_PosF(QTabletEvent* self);
QPointF* QTabletEvent_GlobalPosF(QTabletEvent* self);
int QTabletEvent_X(QTabletEvent* self);
int QTabletEvent_Y(QTabletEvent* self);
int QTabletEvent_GlobalX(QTabletEvent* self);
int QTabletEvent_GlobalY(QTabletEvent* self);
double QTabletEvent_HiResGlobalX(QTabletEvent* self);
double QTabletEvent_HiResGlobalY(QTabletEvent* self);
uintptr_t QTabletEvent_Device(QTabletEvent* self);
uintptr_t QTabletEvent_DeviceType(QTabletEvent* self);
uintptr_t QTabletEvent_PointerType(QTabletEvent* self);
long long QTabletEvent_UniqueId(QTabletEvent* self);
double QTabletEvent_Pressure(QTabletEvent* self);
int QTabletEvent_Z(QTabletEvent* self);
double QTabletEvent_TangentialPressure(QTabletEvent* self);
double QTabletEvent_Rotation(QTabletEvent* self);
int QTabletEvent_XTilt(QTabletEvent* self);
int QTabletEvent_YTilt(QTabletEvent* self);
uintptr_t QTabletEvent_Button(QTabletEvent* self);
int QTabletEvent_Buttons(QTabletEvent* self);
void QTabletEvent_Delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(uintptr_t typeVal, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new2(uintptr_t typeVal, QTouchDevice* dev, QPointF* localPos, QPointF* windowPos, QPointF* screenPos, double value, unsigned long sequenceId, unsigned long long intArgument);
QNativeGestureEvent* QNativeGestureEvent_new3(QNativeGestureEvent* param1);
uintptr_t QNativeGestureEvent_GestureType(QNativeGestureEvent* self);
double QNativeGestureEvent_Value(QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_Pos(QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_GlobalPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_LocalPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_WindowPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_ScreenPos(QNativeGestureEvent* self);
QTouchDevice* QNativeGestureEvent_Device(QNativeGestureEvent* self);
void QNativeGestureEvent_Delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(uintptr_t typeVal, int key, int modifiers);
QKeyEvent* QKeyEvent_new2(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers);
QKeyEvent* QKeyEvent_new3(QKeyEvent* param1);
QKeyEvent* QKeyEvent_new4(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen);
QKeyEvent* QKeyEvent_new5(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen, bool autorep);
QKeyEvent* QKeyEvent_new6(uintptr_t typeVal, int key, int modifiers, const char* text, size_t text_Strlen, bool autorep, uint16_t count);
QKeyEvent* QKeyEvent_new7(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen);
QKeyEvent* QKeyEvent_new8(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen, bool autorep);
QKeyEvent* QKeyEvent_new9(uintptr_t typeVal, int key, int modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const char* text, size_t text_Strlen, bool autorep, uint16_t count);
int QKeyEvent_Key(QKeyEvent* self);
bool QKeyEvent_Matches(QKeyEvent* self, uintptr_t key);
int QKeyEvent_Modifiers(QKeyEvent* self);
void QKeyEvent_Text(QKeyEvent* self, char** _out, int* _out_Strlen);
bool QKeyEvent_IsAutoRepeat(QKeyEvent* self);
int QKeyEvent_Count(QKeyEvent* self);
unsigned int QKeyEvent_NativeScanCode(QKeyEvent* self);
unsigned int QKeyEvent_NativeVirtualKey(QKeyEvent* self);
unsigned int QKeyEvent_NativeModifiers(QKeyEvent* self);
void QKeyEvent_Delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(uintptr_t typeVal);
QFocusEvent* QFocusEvent_new2(QFocusEvent* param1);
QFocusEvent* QFocusEvent_new3(uintptr_t typeVal, uintptr_t reason);
bool QFocusEvent_GotFocus(QFocusEvent* self);
bool QFocusEvent_LostFocus(QFocusEvent* self);
uintptr_t QFocusEvent_Reason(QFocusEvent* self);
void QFocusEvent_Delete(QFocusEvent* self);

QPaintEvent* QPaintEvent_new(QRegion* paintRegion);
QPaintEvent* QPaintEvent_new2(QRect* paintRect);
QPaintEvent* QPaintEvent_new3(QPaintEvent* param1);
QRect* QPaintEvent_Rect(QPaintEvent* self);
QRegion* QPaintEvent_Region(QPaintEvent* self);
void QPaintEvent_Delete(QPaintEvent* self);

QMoveEvent* QMoveEvent_new(QPoint* pos, QPoint* oldPos);
QMoveEvent* QMoveEvent_new2(QMoveEvent* param1);
QPoint* QMoveEvent_Pos(QMoveEvent* self);
QPoint* QMoveEvent_OldPos(QMoveEvent* self);
void QMoveEvent_Delete(QMoveEvent* self);

QExposeEvent* QExposeEvent_new(QRegion* rgn);
QExposeEvent* QExposeEvent_new2(QExposeEvent* param1);
QRegion* QExposeEvent_Region(QExposeEvent* self);
void QExposeEvent_Delete(QExposeEvent* self);

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(uintptr_t surfaceEventType);
QPlatformSurfaceEvent* QPlatformSurfaceEvent_new2(QPlatformSurfaceEvent* param1);
uintptr_t QPlatformSurfaceEvent_SurfaceEventType(QPlatformSurfaceEvent* self);
void QPlatformSurfaceEvent_Delete(QPlatformSurfaceEvent* self);

QResizeEvent* QResizeEvent_new(QSize* size, QSize* oldSize);
QResizeEvent* QResizeEvent_new2(QResizeEvent* param1);
QSize* QResizeEvent_Size(QResizeEvent* self);
QSize* QResizeEvent_OldSize(QResizeEvent* self);
void QResizeEvent_Delete(QResizeEvent* self);

QCloseEvent* QCloseEvent_new();
QCloseEvent* QCloseEvent_new2(QCloseEvent* param1);
void QCloseEvent_OperatorAssign(QCloseEvent* self, QCloseEvent* param1);
void QCloseEvent_Delete(QCloseEvent* self);

QIconDragEvent* QIconDragEvent_new();
QIconDragEvent* QIconDragEvent_new2(QIconDragEvent* param1);
void QIconDragEvent_OperatorAssign(QIconDragEvent* self, QIconDragEvent* param1);
void QIconDragEvent_Delete(QIconDragEvent* self);

QShowEvent* QShowEvent_new();
QShowEvent* QShowEvent_new2(QShowEvent* param1);
void QShowEvent_OperatorAssign(QShowEvent* self, QShowEvent* param1);
void QShowEvent_Delete(QShowEvent* self);

QHideEvent* QHideEvent_new();
QHideEvent* QHideEvent_new2(QHideEvent* param1);
void QHideEvent_OperatorAssign(QHideEvent* self, QHideEvent* param1);
void QHideEvent_Delete(QHideEvent* self);

QContextMenuEvent* QContextMenuEvent_new(uintptr_t reason, QPoint* pos, QPoint* globalPos, int modifiers);
QContextMenuEvent* QContextMenuEvent_new2(uintptr_t reason, QPoint* pos, QPoint* globalPos);
QContextMenuEvent* QContextMenuEvent_new3(uintptr_t reason, QPoint* pos);
QContextMenuEvent* QContextMenuEvent_new4(QContextMenuEvent* param1);
int QContextMenuEvent_X(QContextMenuEvent* self);
int QContextMenuEvent_Y(QContextMenuEvent* self);
int QContextMenuEvent_GlobalX(QContextMenuEvent* self);
int QContextMenuEvent_GlobalY(QContextMenuEvent* self);
QPoint* QContextMenuEvent_Pos(QContextMenuEvent* self);
QPoint* QContextMenuEvent_GlobalPos(QContextMenuEvent* self);
uintptr_t QContextMenuEvent_Reason(QContextMenuEvent* self);
void QContextMenuEvent_Delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(const char* preeditText, size_t preeditText_Strlen, QInputMethodEvent__Attribute** attributes, size_t attributes_len);
QInputMethodEvent* QInputMethodEvent_new3(QInputMethodEvent* other);
void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen);
void QInputMethodEvent_PreeditString(QInputMethodEvent* self, char** _out, int* _out_Strlen);
void QInputMethodEvent_CommitString(QInputMethodEvent* self, char** _out, int* _out_Strlen);
int QInputMethodEvent_ReplacementStart(QInputMethodEvent* self);
int QInputMethodEvent_ReplacementLength(QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom);
void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom, int replaceLength);
void QInputMethodEvent_Delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(int queries);
QInputMethodQueryEvent* QInputMethodQueryEvent_new2(QInputMethodQueryEvent* param1);
int QInputMethodQueryEvent_Queries(QInputMethodQueryEvent* self);
void QInputMethodQueryEvent_SetValue(QInputMethodQueryEvent* self, uintptr_t query, QVariant* value);
QVariant* QInputMethodQueryEvent_Value(QInputMethodQueryEvent* self, uintptr_t query);
void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDropEvent* QDropEvent_new2(QDropEvent* param1);
QDropEvent* QDropEvent_new3(QPointF* pos, int actions, QMimeData* data, int buttons, int modifiers, uintptr_t typeVal);
QPoint* QDropEvent_Pos(QDropEvent* self);
QPointF* QDropEvent_PosF(QDropEvent* self);
int QDropEvent_MouseButtons(QDropEvent* self);
int QDropEvent_KeyboardModifiers(QDropEvent* self);
int QDropEvent_PossibleActions(QDropEvent* self);
uintptr_t QDropEvent_ProposedAction(QDropEvent* self);
void QDropEvent_AcceptProposedAction(QDropEvent* self);
uintptr_t QDropEvent_DropAction(QDropEvent* self);
void QDropEvent_SetDropAction(QDropEvent* self, uintptr_t action);
QObject* QDropEvent_Source(QDropEvent* self);
QMimeData* QDropEvent_MimeData(QDropEvent* self);
void QDropEvent_Delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragMoveEvent* QDragMoveEvent_new2(QDragMoveEvent* param1);
QDragMoveEvent* QDragMoveEvent_new3(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers, uintptr_t typeVal);
QRect* QDragMoveEvent_AnswerRect(QDragMoveEvent* self);
void QDragMoveEvent_Accept(QDragMoveEvent* self);
void QDragMoveEvent_Ignore(QDragMoveEvent* self);
void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_Delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QPoint* pos, int actions, QMimeData* data, int buttons, int modifiers);
QDragEnterEvent* QDragEnterEvent_new2(QDragEnterEvent* param1);
void QDragEnterEvent_OperatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1);
void QDragEnterEvent_Delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
QDragLeaveEvent* QDragLeaveEvent_new2(QDragLeaveEvent* param1);
void QDragLeaveEvent_OperatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1);
void QDragLeaveEvent_Delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(uintptr_t typeVal, QPoint* pos, QPoint* globalPos);
QHelpEvent* QHelpEvent_new2(QHelpEvent* param1);
int QHelpEvent_X(QHelpEvent* self);
int QHelpEvent_Y(QHelpEvent* self);
int QHelpEvent_GlobalX(QHelpEvent* self);
int QHelpEvent_GlobalY(QHelpEvent* self);
QPoint* QHelpEvent_Pos(QHelpEvent* self);
QPoint* QHelpEvent_GlobalPos(QHelpEvent* self);
void QHelpEvent_Delete(QHelpEvent* self);

QStatusTipEvent* QStatusTipEvent_new(const char* tip, size_t tip_Strlen);
QStatusTipEvent* QStatusTipEvent_new2(QStatusTipEvent* param1);
void QStatusTipEvent_Tip(QStatusTipEvent* self, char** _out, int* _out_Strlen);
void QStatusTipEvent_Delete(QStatusTipEvent* self);

QWhatsThisClickedEvent* QWhatsThisClickedEvent_new(const char* href, size_t href_Strlen);
QWhatsThisClickedEvent* QWhatsThisClickedEvent_new2(QWhatsThisClickedEvent* param1);
void QWhatsThisClickedEvent_Href(QWhatsThisClickedEvent* self, char** _out, int* _out_Strlen);
void QWhatsThisClickedEvent_Delete(QWhatsThisClickedEvent* self);

QActionEvent* QActionEvent_new(int typeVal, QAction* action);
QActionEvent* QActionEvent_new2(QActionEvent* param1);
QActionEvent* QActionEvent_new3(int typeVal, QAction* action, QAction* before);
QAction* QActionEvent_Action(QActionEvent* self);
QAction* QActionEvent_Before(QActionEvent* self);
void QActionEvent_OperatorAssign(QActionEvent* self, QActionEvent* param1);
void QActionEvent_Delete(QActionEvent* self);

QFileOpenEvent* QFileOpenEvent_new(const char* file, size_t file_Strlen);
QFileOpenEvent* QFileOpenEvent_new2(QUrl* url);
QFileOpenEvent* QFileOpenEvent_new3(QFileOpenEvent* param1);
void QFileOpenEvent_File(QFileOpenEvent* self, char** _out, int* _out_Strlen);
QUrl* QFileOpenEvent_Url(QFileOpenEvent* self);
bool QFileOpenEvent_OpenFile(QFileOpenEvent* self, QFile* file, int flags);
void QFileOpenEvent_Delete(QFileOpenEvent* self);

QToolBarChangeEvent* QToolBarChangeEvent_new(bool t);
QToolBarChangeEvent* QToolBarChangeEvent_new2(QToolBarChangeEvent* param1);
bool QToolBarChangeEvent_Toggle(QToolBarChangeEvent* self);
void QToolBarChangeEvent_Delete(QToolBarChangeEvent* self);

QShortcutEvent* QShortcutEvent_new(QKeySequence* key, int id);
QShortcutEvent* QShortcutEvent_new2(QShortcutEvent* param1);
QShortcutEvent* QShortcutEvent_new3(QKeySequence* key, int id, bool ambiguous);
QKeySequence* QShortcutEvent_Key(QShortcutEvent* self);
int QShortcutEvent_ShortcutId(QShortcutEvent* self);
bool QShortcutEvent_IsAmbiguous(QShortcutEvent* self);
void QShortcutEvent_Delete(QShortcutEvent* self);

QWindowStateChangeEvent* QWindowStateChangeEvent_new(int aOldState);
QWindowStateChangeEvent* QWindowStateChangeEvent_new2(QWindowStateChangeEvent* param1);
QWindowStateChangeEvent* QWindowStateChangeEvent_new3(int aOldState, bool isOverride);
int QWindowStateChangeEvent_OldState(QWindowStateChangeEvent* self);
bool QWindowStateChangeEvent_IsOverride(QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self);

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id);
bool QPointingDeviceUniqueId_IsValid(QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_NumericId(QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self);

QTouchEvent* QTouchEvent_new(uintptr_t eventType);
QTouchEvent* QTouchEvent_new2(QTouchEvent* param1);
QTouchEvent* QTouchEvent_new3(uintptr_t eventType, QTouchDevice* device);
QTouchEvent* QTouchEvent_new4(uintptr_t eventType, QTouchDevice* device, int modifiers);
QTouchEvent* QTouchEvent_new5(uintptr_t eventType, QTouchDevice* device, int modifiers, int touchPointStates);
QTouchEvent* QTouchEvent_new6(uintptr_t eventType, QTouchDevice* device, int modifiers, int touchPointStates, QTouchEvent__TouchPoint** touchPoints, size_t touchPoints_len);
QWindow* QTouchEvent_Window(QTouchEvent* self);
QObject* QTouchEvent_Target(QTouchEvent* self);
int QTouchEvent_TouchPointStates(QTouchEvent* self);
QTouchDevice* QTouchEvent_Device(QTouchEvent* self);
void QTouchEvent_SetWindow(QTouchEvent* self, QWindow* awindow);
void QTouchEvent_SetTarget(QTouchEvent* self, QObject* atarget);
void QTouchEvent_SetTouchPointStates(QTouchEvent* self, int aTouchPointStates);
void QTouchEvent_SetTouchPoints(QTouchEvent* self, QTouchEvent__TouchPoint** atouchPoints, size_t atouchPoints_len);
void QTouchEvent_SetDevice(QTouchEvent* self, QTouchDevice* adevice);
void QTouchEvent_Delete(QTouchEvent* self);

QScrollPrepareEvent* QScrollPrepareEvent_new(QPointF* startPos);
QScrollPrepareEvent* QScrollPrepareEvent_new2(QScrollPrepareEvent* param1);
QPointF* QScrollPrepareEvent_StartPos(QScrollPrepareEvent* self);
QSizeF* QScrollPrepareEvent_ViewportSize(QScrollPrepareEvent* self);
QRectF* QScrollPrepareEvent_ContentPosRange(QScrollPrepareEvent* self);
QPointF* QScrollPrepareEvent_ContentPos(QScrollPrepareEvent* self);
void QScrollPrepareEvent_SetViewportSize(QScrollPrepareEvent* self, QSizeF* size);
void QScrollPrepareEvent_SetContentPosRange(QScrollPrepareEvent* self, QRectF* rect);
void QScrollPrepareEvent_SetContentPos(QScrollPrepareEvent* self, QPointF* pos);
void QScrollPrepareEvent_Delete(QScrollPrepareEvent* self);

QScrollEvent* QScrollEvent_new(QPointF* contentPos, QPointF* overshoot, uintptr_t scrollState);
QScrollEvent* QScrollEvent_new2(QScrollEvent* param1);
QPointF* QScrollEvent_ContentPos(QScrollEvent* self);
QPointF* QScrollEvent_OvershootDistance(QScrollEvent* self);
uintptr_t QScrollEvent_ScrollState(QScrollEvent* self);
void QScrollEvent_Delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreen* screen, uintptr_t orientation);
QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new2(QScreenOrientationChangeEvent* param1);
QScreen* QScreenOrientationChangeEvent_Screen(QScreenOrientationChangeEvent* self);
uintptr_t QScreenOrientationChangeEvent_Orientation(QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(uintptr_t state);
QApplicationStateChangeEvent* QApplicationStateChangeEvent_new2(QApplicationStateChangeEvent* param1);
uintptr_t QApplicationStateChangeEvent_ApplicationState(QApplicationStateChangeEvent* self);
void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self);

QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new(uintptr_t typ, int s, int l, QVariant* val);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new2(uintptr_t typ, int s, int l);
QInputMethodEvent__Attribute* QInputMethodEvent__Attribute_new3(QInputMethodEvent__Attribute* param1);
void QInputMethodEvent__Attribute_Delete(QInputMethodEvent__Attribute* self);

QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new();
QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new2(QTouchEvent__TouchPoint* other);
QTouchEvent__TouchPoint* QTouchEvent__TouchPoint_new3(int id);
void QTouchEvent__TouchPoint_Swap(QTouchEvent__TouchPoint* self, QTouchEvent__TouchPoint* other);
int QTouchEvent__TouchPoint_Id(QTouchEvent__TouchPoint* self);
QPointingDeviceUniqueId* QTouchEvent__TouchPoint_UniqueId(QTouchEvent__TouchPoint* self);
uintptr_t QTouchEvent__TouchPoint_State(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_Pos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_StartPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_LastPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_ScenePos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_StartScenePos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_LastScenePos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_ScreenPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_StartScreenPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_LastScreenPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_NormalizedPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_StartNormalizedPos(QTouchEvent__TouchPoint* self);
QPointF* QTouchEvent__TouchPoint_LastNormalizedPos(QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_Rect(QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_SceneRect(QTouchEvent__TouchPoint* self);
QRectF* QTouchEvent__TouchPoint_ScreenRect(QTouchEvent__TouchPoint* self);
void QTouchEvent__TouchPoint_SetRect(QTouchEvent__TouchPoint* self, QRectF* rect);
void QTouchEvent__TouchPoint_SetSceneRect(QTouchEvent__TouchPoint* self, QRectF* sceneRect);
void QTouchEvent__TouchPoint_SetScreenRect(QTouchEvent__TouchPoint* self, QRectF* screenRect);
double QTouchEvent__TouchPoint_Pressure(QTouchEvent__TouchPoint* self);
double QTouchEvent__TouchPoint_Rotation(QTouchEvent__TouchPoint* self);
QSizeF* QTouchEvent__TouchPoint_EllipseDiameters(QTouchEvent__TouchPoint* self);
QVector2D* QTouchEvent__TouchPoint_Velocity(QTouchEvent__TouchPoint* self);
int QTouchEvent__TouchPoint_Flags(QTouchEvent__TouchPoint* self);
void QTouchEvent__TouchPoint_RawScreenPositions(QTouchEvent__TouchPoint* self, QPointF*** _out, size_t* _out_len);
void QTouchEvent__TouchPoint_SetId(QTouchEvent__TouchPoint* self, int id);
void QTouchEvent__TouchPoint_SetUniqueId(QTouchEvent__TouchPoint* self, long long uid);
void QTouchEvent__TouchPoint_SetState(QTouchEvent__TouchPoint* self, int state);
void QTouchEvent__TouchPoint_SetPos(QTouchEvent__TouchPoint* self, QPointF* pos);
void QTouchEvent__TouchPoint_SetScenePos(QTouchEvent__TouchPoint* self, QPointF* scenePos);
void QTouchEvent__TouchPoint_SetScreenPos(QTouchEvent__TouchPoint* self, QPointF* screenPos);
void QTouchEvent__TouchPoint_SetNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* normalizedPos);
void QTouchEvent__TouchPoint_SetStartPos(QTouchEvent__TouchPoint* self, QPointF* startPos);
void QTouchEvent__TouchPoint_SetStartScenePos(QTouchEvent__TouchPoint* self, QPointF* startScenePos);
void QTouchEvent__TouchPoint_SetStartScreenPos(QTouchEvent__TouchPoint* self, QPointF* startScreenPos);
void QTouchEvent__TouchPoint_SetStartNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* startNormalizedPos);
void QTouchEvent__TouchPoint_SetLastPos(QTouchEvent__TouchPoint* self, QPointF* lastPos);
void QTouchEvent__TouchPoint_SetLastScenePos(QTouchEvent__TouchPoint* self, QPointF* lastScenePos);
void QTouchEvent__TouchPoint_SetLastScreenPos(QTouchEvent__TouchPoint* self, QPointF* lastScreenPos);
void QTouchEvent__TouchPoint_SetLastNormalizedPos(QTouchEvent__TouchPoint* self, QPointF* lastNormalizedPos);
void QTouchEvent__TouchPoint_SetPressure(QTouchEvent__TouchPoint* self, double pressure);
void QTouchEvent__TouchPoint_SetRotation(QTouchEvent__TouchPoint* self, double angle);
void QTouchEvent__TouchPoint_SetEllipseDiameters(QTouchEvent__TouchPoint* self, QSizeF* dia);
void QTouchEvent__TouchPoint_SetVelocity(QTouchEvent__TouchPoint* self, QVector2D* v);
void QTouchEvent__TouchPoint_SetFlags(QTouchEvent__TouchPoint* self, int flags);
void QTouchEvent__TouchPoint_SetRawScreenPositions(QTouchEvent__TouchPoint* self, QPointF** positions, size_t positions_len);
void QTouchEvent__TouchPoint_Delete(QTouchEvent__TouchPoint* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
