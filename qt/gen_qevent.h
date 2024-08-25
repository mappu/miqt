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
class QFileOpenEvent;
class QFocusEvent;
class QHelpEvent;
class QHideEvent;
class QHoverEvent;
class QIconDragEvent;
class QInputEvent;
class QInputMethodEvent;
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
class QUrl;
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
typedef struct QFileOpenEvent QFileOpenEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHelpEvent QHelpEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QHoverEvent QHoverEvent;
typedef struct QIconDragEvent QIconDragEvent;
typedef struct QInputEvent QInputEvent;
typedef struct QInputMethodEvent QInputMethodEvent;
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
typedef struct QUrl QUrl;
typedef struct QWhatsThisClickedEvent QWhatsThisClickedEvent;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWindow QWindow;
typedef struct QWindowStateChangeEvent QWindowStateChangeEvent;
#endif

QInputEvent* QInputEvent_new(QInputEvent* param1);
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

QMouseEvent* QMouseEvent_new(QMouseEvent* param1);
QPoint* QMouseEvent_Pos(QMouseEvent* self);
QPoint* QMouseEvent_GlobalPos(QMouseEvent* self);
int QMouseEvent_X(QMouseEvent* self);
int QMouseEvent_Y(QMouseEvent* self);
int QMouseEvent_GlobalX(QMouseEvent* self);
int QMouseEvent_GlobalY(QMouseEvent* self);
QPointF* QMouseEvent_LocalPos(QMouseEvent* self);
QPointF* QMouseEvent_WindowPos(QMouseEvent* self);
QPointF* QMouseEvent_ScreenPos(QMouseEvent* self);
void QMouseEvent_SetLocalPos(QMouseEvent* self, QPointF* localPosition);
void QMouseEvent_Delete(QMouseEvent* self);

QHoverEvent* QHoverEvent_new(QHoverEvent* param1);
QPoint* QHoverEvent_Pos(QHoverEvent* self);
QPoint* QHoverEvent_OldPos(QHoverEvent* self);
QPointF* QHoverEvent_PosF(QHoverEvent* self);
QPointF* QHoverEvent_OldPosF(QHoverEvent* self);
void QHoverEvent_Delete(QHoverEvent* self);

QWheelEvent* QWheelEvent_new(QWheelEvent* param1);
QPoint* QWheelEvent_PixelDelta(QWheelEvent* self);
QPoint* QWheelEvent_AngleDelta(QWheelEvent* self);
int QWheelEvent_Delta(QWheelEvent* self);
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
bool QWheelEvent_Inverted(QWheelEvent* self);
void QWheelEvent_Delete(QWheelEvent* self);

QTabletEvent* QTabletEvent_new(QTabletEvent* param1);
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
int64_t QTabletEvent_UniqueId(QTabletEvent* self);
double QTabletEvent_Pressure(QTabletEvent* self);
int QTabletEvent_Z(QTabletEvent* self);
double QTabletEvent_TangentialPressure(QTabletEvent* self);
double QTabletEvent_Rotation(QTabletEvent* self);
int QTabletEvent_XTilt(QTabletEvent* self);
int QTabletEvent_YTilt(QTabletEvent* self);
void QTabletEvent_Delete(QTabletEvent* self);

QNativeGestureEvent* QNativeGestureEvent_new(QNativeGestureEvent* param1);
double QNativeGestureEvent_Value(QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_Pos(QNativeGestureEvent* self);
QPoint* QNativeGestureEvent_GlobalPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_LocalPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_WindowPos(QNativeGestureEvent* self);
QPointF* QNativeGestureEvent_ScreenPos(QNativeGestureEvent* self);
QTouchDevice* QNativeGestureEvent_Device(QNativeGestureEvent* self);
void QNativeGestureEvent_Delete(QNativeGestureEvent* self);

QKeyEvent* QKeyEvent_new(QKeyEvent* param1);
int QKeyEvent_Key(QKeyEvent* self);
void QKeyEvent_Text(QKeyEvent* self, char** _out, int* _out_Strlen);
bool QKeyEvent_IsAutoRepeat(QKeyEvent* self);
int QKeyEvent_Count(QKeyEvent* self);
uint32_t QKeyEvent_NativeScanCode(QKeyEvent* self);
uint32_t QKeyEvent_NativeVirtualKey(QKeyEvent* self);
uint32_t QKeyEvent_NativeModifiers(QKeyEvent* self);
void QKeyEvent_Delete(QKeyEvent* self);

QFocusEvent* QFocusEvent_new(QFocusEvent* param1);
bool QFocusEvent_GotFocus(QFocusEvent* self);
bool QFocusEvent_LostFocus(QFocusEvent* self);
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

QPlatformSurfaceEvent* QPlatformSurfaceEvent_new(QPlatformSurfaceEvent* param1);
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

QContextMenuEvent* QContextMenuEvent_new(QContextMenuEvent* param1);
int QContextMenuEvent_X(QContextMenuEvent* self);
int QContextMenuEvent_Y(QContextMenuEvent* self);
int QContextMenuEvent_GlobalX(QContextMenuEvent* self);
int QContextMenuEvent_GlobalY(QContextMenuEvent* self);
QPoint* QContextMenuEvent_Pos(QContextMenuEvent* self);
QPoint* QContextMenuEvent_GlobalPos(QContextMenuEvent* self);
void QContextMenuEvent_Delete(QContextMenuEvent* self);

QInputMethodEvent* QInputMethodEvent_new();
QInputMethodEvent* QInputMethodEvent_new2(QInputMethodEvent* other);
void QInputMethodEvent_SetCommitString(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen);
void QInputMethodEvent_PreeditString(QInputMethodEvent* self, char** _out, int* _out_Strlen);
void QInputMethodEvent_CommitString(QInputMethodEvent* self, char** _out, int* _out_Strlen);
int QInputMethodEvent_ReplacementStart(QInputMethodEvent* self);
int QInputMethodEvent_ReplacementLength(QInputMethodEvent* self);
void QInputMethodEvent_SetCommitString2(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom);
void QInputMethodEvent_SetCommitString3(QInputMethodEvent* self, const char* commitString, size_t commitString_Strlen, int replaceFrom, int replaceLength);
void QInputMethodEvent_Delete(QInputMethodEvent* self);

QInputMethodQueryEvent* QInputMethodQueryEvent_new(QInputMethodQueryEvent* param1);
void QInputMethodQueryEvent_Delete(QInputMethodQueryEvent* self);

QDropEvent* QDropEvent_new(QDropEvent* param1);
QPoint* QDropEvent_Pos(QDropEvent* self);
QPointF* QDropEvent_PosF(QDropEvent* self);
void QDropEvent_AcceptProposedAction(QDropEvent* self);
QObject* QDropEvent_Source(QDropEvent* self);
QMimeData* QDropEvent_MimeData(QDropEvent* self);
void QDropEvent_Delete(QDropEvent* self);

QDragMoveEvent* QDragMoveEvent_new(QDragMoveEvent* param1);
QRect* QDragMoveEvent_AnswerRect(QDragMoveEvent* self);
void QDragMoveEvent_Accept(QDragMoveEvent* self);
void QDragMoveEvent_Ignore(QDragMoveEvent* self);
void QDragMoveEvent_AcceptWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_IgnoreWithQRect(QDragMoveEvent* self, QRect* r);
void QDragMoveEvent_Delete(QDragMoveEvent* self);

QDragEnterEvent* QDragEnterEvent_new(QDragEnterEvent* param1);
void QDragEnterEvent_OperatorAssign(QDragEnterEvent* self, QDragEnterEvent* param1);
void QDragEnterEvent_Delete(QDragEnterEvent* self);

QDragLeaveEvent* QDragLeaveEvent_new();
QDragLeaveEvent* QDragLeaveEvent_new2(QDragLeaveEvent* param1);
void QDragLeaveEvent_OperatorAssign(QDragLeaveEvent* self, QDragLeaveEvent* param1);
void QDragLeaveEvent_Delete(QDragLeaveEvent* self);

QHelpEvent* QHelpEvent_new(QHelpEvent* param1);
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

QWindowStateChangeEvent* QWindowStateChangeEvent_new(QWindowStateChangeEvent* param1);
bool QWindowStateChangeEvent_IsOverride(QWindowStateChangeEvent* self);
void QWindowStateChangeEvent_Delete(QWindowStateChangeEvent* self);

QPointingDeviceUniqueId* QPointingDeviceUniqueId_new();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* param1);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(int64_t id);
bool QPointingDeviceUniqueId_IsValid(QPointingDeviceUniqueId* self);
int64_t QPointingDeviceUniqueId_NumericId(QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self);

QTouchEvent* QTouchEvent_new(QTouchEvent* param1);
QWindow* QTouchEvent_Window(QTouchEvent* self);
QObject* QTouchEvent_Target(QTouchEvent* self);
QTouchDevice* QTouchEvent_Device(QTouchEvent* self);
void QTouchEvent_SetWindow(QTouchEvent* self, QWindow* awindow);
void QTouchEvent_SetTarget(QTouchEvent* self, QObject* atarget);
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

QScrollEvent* QScrollEvent_new(QScrollEvent* param1);
QPointF* QScrollEvent_ContentPos(QScrollEvent* self);
QPointF* QScrollEvent_OvershootDistance(QScrollEvent* self);
void QScrollEvent_Delete(QScrollEvent* self);

QScreenOrientationChangeEvent* QScreenOrientationChangeEvent_new(QScreenOrientationChangeEvent* param1);
QScreen* QScreenOrientationChangeEvent_Screen(QScreenOrientationChangeEvent* self);
void QScreenOrientationChangeEvent_Delete(QScreenOrientationChangeEvent* self);

QApplicationStateChangeEvent* QApplicationStateChangeEvent_new(QApplicationStateChangeEvent* param1);
void QApplicationStateChangeEvent_Delete(QApplicationStateChangeEvent* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
