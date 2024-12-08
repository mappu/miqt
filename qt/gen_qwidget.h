#pragma once
#ifndef MIQT_QT_GEN_QWIDGET_H
#define MIQT_QT_GEN_QWIDGET_H

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
class QBackingStore;
class QBitmap;
class QChildEvent;
class QCloseEvent;
class QContextMenuEvent;
class QCursor;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFont;
class QFontInfo;
class QFontMetrics;
class QGraphicsEffect;
class QGraphicsProxyWidget;
class QHideEvent;
class QIcon;
class QInputMethodEvent;
class QKeyEvent;
class QKeySequence;
class QLayout;
class QLocale;
class QMargins;
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
class QPixmap;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QScreen;
class QShowEvent;
class QSize;
class QSizePolicy;
class QStyle;
class QTabletEvent;
class QTimerEvent;
class QVariant;
class QWheelEvent;
class QWidget;
class QWidgetData;
class QWindow;
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QBackingStore QBackingStore;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
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
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWidgetData QWidgetData;
typedef struct QWindow QWindow;
#endif

QWidgetData* QWidgetData_new(QWidgetData* param1);
void QWidgetData_OperatorAssign(QWidgetData* self, QWidgetData* param1);
void QWidgetData_Delete(QWidgetData* self, bool isSubclass);

QWidget* QWidget_new(QWidget* parent);
QWidget* QWidget_new2();
QWidget* QWidget_new3(QWidget* parent, int f);
void QWidget_virtbase(QWidget* src, QObject** outptr_QObject, QPaintDevice** outptr_QPaintDevice);
QMetaObject* QWidget_MetaObject(const QWidget* self);
void* QWidget_Metacast(QWidget* self, const char* param1);
struct miqt_string QWidget_Tr(const char* s);
struct miqt_string QWidget_TrUtf8(const char* s);
int QWidget_DevType(const QWidget* self);
uintptr_t QWidget_WinId(const QWidget* self);
void QWidget_CreateWinId(QWidget* self);
uintptr_t QWidget_InternalWinId(const QWidget* self);
uintptr_t QWidget_EffectiveWinId(const QWidget* self);
QStyle* QWidget_Style(const QWidget* self);
void QWidget_SetStyle(QWidget* self, QStyle* style);
bool QWidget_IsTopLevel(const QWidget* self);
bool QWidget_IsWindow(const QWidget* self);
bool QWidget_IsModal(const QWidget* self);
int QWidget_WindowModality(const QWidget* self);
void QWidget_SetWindowModality(QWidget* self, int windowModality);
bool QWidget_IsEnabled(const QWidget* self);
bool QWidget_IsEnabledTo(const QWidget* self, QWidget* param1);
bool QWidget_IsEnabledToTLW(const QWidget* self);
void QWidget_SetEnabled(QWidget* self, bool enabled);
void QWidget_SetDisabled(QWidget* self, bool disabled);
void QWidget_SetWindowModified(QWidget* self, bool windowModified);
QRect* QWidget_FrameGeometry(const QWidget* self);
QRect* QWidget_Geometry(const QWidget* self);
QRect* QWidget_NormalGeometry(const QWidget* self);
int QWidget_X(const QWidget* self);
int QWidget_Y(const QWidget* self);
QPoint* QWidget_Pos(const QWidget* self);
QSize* QWidget_FrameSize(const QWidget* self);
QSize* QWidget_Size(const QWidget* self);
int QWidget_Width(const QWidget* self);
int QWidget_Height(const QWidget* self);
QRect* QWidget_Rect(const QWidget* self);
QRect* QWidget_ChildrenRect(const QWidget* self);
QRegion* QWidget_ChildrenRegion(const QWidget* self);
QSize* QWidget_MinimumSize(const QWidget* self);
QSize* QWidget_MaximumSize(const QWidget* self);
int QWidget_MinimumWidth(const QWidget* self);
int QWidget_MinimumHeight(const QWidget* self);
int QWidget_MaximumWidth(const QWidget* self);
int QWidget_MaximumHeight(const QWidget* self);
void QWidget_SetMinimumSize(QWidget* self, QSize* minimumSize);
void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh);
void QWidget_SetMaximumSize(QWidget* self, QSize* maximumSize);
void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh);
void QWidget_SetMinimumWidth(QWidget* self, int minw);
void QWidget_SetMinimumHeight(QWidget* self, int minh);
void QWidget_SetMaximumWidth(QWidget* self, int maxw);
void QWidget_SetMaximumHeight(QWidget* self, int maxh);
QSize* QWidget_SizeIncrement(const QWidget* self);
void QWidget_SetSizeIncrement(QWidget* self, QSize* sizeIncrement);
void QWidget_SetSizeIncrement2(QWidget* self, int w, int h);
QSize* QWidget_BaseSize(const QWidget* self);
void QWidget_SetBaseSize(QWidget* self, QSize* baseSize);
void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh);
void QWidget_SetFixedSize(QWidget* self, QSize* fixedSize);
void QWidget_SetFixedSize2(QWidget* self, int w, int h);
void QWidget_SetFixedWidth(QWidget* self, int w);
void QWidget_SetFixedHeight(QWidget* self, int h);
QPoint* QWidget_MapToGlobal(const QWidget* self, QPoint* param1);
QPoint* QWidget_MapFromGlobal(const QWidget* self, QPoint* param1);
QPoint* QWidget_MapToParent(const QWidget* self, QPoint* param1);
QPoint* QWidget_MapFromParent(const QWidget* self, QPoint* param1);
QPoint* QWidget_MapTo(const QWidget* self, QWidget* param1, QPoint* param2);
QPoint* QWidget_MapFrom(const QWidget* self, QWidget* param1, QPoint* param2);
QWidget* QWidget_Window(const QWidget* self);
QWidget* QWidget_NativeParentWidget(const QWidget* self);
QWidget* QWidget_TopLevelWidget(const QWidget* self);
QPalette* QWidget_Palette(const QWidget* self);
void QWidget_SetPalette(QWidget* self, QPalette* palette);
void QWidget_SetBackgroundRole(QWidget* self, int backgroundRole);
int QWidget_BackgroundRole(const QWidget* self);
void QWidget_SetForegroundRole(QWidget* self, int foregroundRole);
int QWidget_ForegroundRole(const QWidget* self);
QFont* QWidget_Font(const QWidget* self);
void QWidget_SetFont(QWidget* self, QFont* font);
QFontMetrics* QWidget_FontMetrics(const QWidget* self);
QFontInfo* QWidget_FontInfo(const QWidget* self);
QCursor* QWidget_Cursor(const QWidget* self);
void QWidget_SetCursor(QWidget* self, QCursor* cursor);
void QWidget_UnsetCursor(QWidget* self);
void QWidget_SetMouseTracking(QWidget* self, bool enable);
bool QWidget_HasMouseTracking(const QWidget* self);
bool QWidget_UnderMouse(const QWidget* self);
void QWidget_SetTabletTracking(QWidget* self, bool enable);
bool QWidget_HasTabletTracking(const QWidget* self);
void QWidget_SetMask(QWidget* self, QBitmap* mask);
void QWidget_SetMaskWithMask(QWidget* self, QRegion* mask);
QRegion* QWidget_Mask(const QWidget* self);
void QWidget_ClearMask(QWidget* self);
void QWidget_Render(QWidget* self, QPaintDevice* target);
void QWidget_RenderWithPainter(QWidget* self, QPainter* painter);
QPixmap* QWidget_Grab(QWidget* self);
QGraphicsEffect* QWidget_GraphicsEffect(const QWidget* self);
void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect);
void QWidget_GrabGesture(QWidget* self, int typeVal);
void QWidget_UngrabGesture(QWidget* self, int typeVal);
void QWidget_SetWindowTitle(QWidget* self, struct miqt_string windowTitle);
void QWidget_SetStyleSheet(QWidget* self, struct miqt_string styleSheet);
struct miqt_string QWidget_StyleSheet(const QWidget* self);
struct miqt_string QWidget_WindowTitle(const QWidget* self);
void QWidget_SetWindowIcon(QWidget* self, QIcon* icon);
QIcon* QWidget_WindowIcon(const QWidget* self);
void QWidget_SetWindowIconText(QWidget* self, struct miqt_string windowIconText);
struct miqt_string QWidget_WindowIconText(const QWidget* self);
void QWidget_SetWindowRole(QWidget* self, struct miqt_string windowRole);
struct miqt_string QWidget_WindowRole(const QWidget* self);
void QWidget_SetWindowFilePath(QWidget* self, struct miqt_string filePath);
struct miqt_string QWidget_WindowFilePath(const QWidget* self);
void QWidget_SetWindowOpacity(QWidget* self, double level);
double QWidget_WindowOpacity(const QWidget* self);
bool QWidget_IsWindowModified(const QWidget* self);
void QWidget_SetToolTip(QWidget* self, struct miqt_string toolTip);
struct miqt_string QWidget_ToolTip(const QWidget* self);
void QWidget_SetToolTipDuration(QWidget* self, int msec);
int QWidget_ToolTipDuration(const QWidget* self);
void QWidget_SetStatusTip(QWidget* self, struct miqt_string statusTip);
struct miqt_string QWidget_StatusTip(const QWidget* self);
void QWidget_SetWhatsThis(QWidget* self, struct miqt_string whatsThis);
struct miqt_string QWidget_WhatsThis(const QWidget* self);
struct miqt_string QWidget_AccessibleName(const QWidget* self);
void QWidget_SetAccessibleName(QWidget* self, struct miqt_string name);
struct miqt_string QWidget_AccessibleDescription(const QWidget* self);
void QWidget_SetAccessibleDescription(QWidget* self, struct miqt_string description);
void QWidget_SetLayoutDirection(QWidget* self, int direction);
int QWidget_LayoutDirection(const QWidget* self);
void QWidget_UnsetLayoutDirection(QWidget* self);
void QWidget_SetLocale(QWidget* self, QLocale* locale);
QLocale* QWidget_Locale(const QWidget* self);
void QWidget_UnsetLocale(QWidget* self);
bool QWidget_IsRightToLeft(const QWidget* self);
bool QWidget_IsLeftToRight(const QWidget* self);
void QWidget_SetFocus(QWidget* self);
bool QWidget_IsActiveWindow(const QWidget* self);
void QWidget_ActivateWindow(QWidget* self);
void QWidget_ClearFocus(QWidget* self);
void QWidget_SetFocusWithReason(QWidget* self, int reason);
int QWidget_FocusPolicy(const QWidget* self);
void QWidget_SetFocusPolicy(QWidget* self, int policy);
bool QWidget_HasFocus(const QWidget* self);
void QWidget_SetTabOrder(QWidget* param1, QWidget* param2);
void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy);
QWidget* QWidget_FocusProxy(const QWidget* self);
int QWidget_ContextMenuPolicy(const QWidget* self);
void QWidget_SetContextMenuPolicy(QWidget* self, int policy);
void QWidget_GrabMouse(QWidget* self);
void QWidget_GrabMouseWithQCursor(QWidget* self, QCursor* param1);
void QWidget_ReleaseMouse(QWidget* self);
void QWidget_GrabKeyboard(QWidget* self);
void QWidget_ReleaseKeyboard(QWidget* self);
int QWidget_GrabShortcut(QWidget* self, QKeySequence* key);
void QWidget_ReleaseShortcut(QWidget* self, int id);
void QWidget_SetShortcutEnabled(QWidget* self, int id);
void QWidget_SetShortcutAutoRepeat(QWidget* self, int id);
QWidget* QWidget_MouseGrabber();
QWidget* QWidget_KeyboardGrabber();
bool QWidget_UpdatesEnabled(const QWidget* self);
void QWidget_SetUpdatesEnabled(QWidget* self, bool enable);
QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(const QWidget* self);
void QWidget_Update(QWidget* self);
void QWidget_Repaint(QWidget* self);
void QWidget_Update2(QWidget* self, int x, int y, int w, int h);
void QWidget_UpdateWithQRect(QWidget* self, QRect* param1);
void QWidget_UpdateWithQRegion(QWidget* self, QRegion* param1);
void QWidget_Repaint2(QWidget* self, int x, int y, int w, int h);
void QWidget_RepaintWithQRect(QWidget* self, QRect* param1);
void QWidget_RepaintWithQRegion(QWidget* self, QRegion* param1);
void QWidget_SetVisible(QWidget* self, bool visible);
void QWidget_SetHidden(QWidget* self, bool hidden);
void QWidget_Show(QWidget* self);
void QWidget_Hide(QWidget* self);
void QWidget_ShowMinimized(QWidget* self);
void QWidget_ShowMaximized(QWidget* self);
void QWidget_ShowFullScreen(QWidget* self);
void QWidget_ShowNormal(QWidget* self);
bool QWidget_Close(QWidget* self);
void QWidget_Raise(QWidget* self);
void QWidget_Lower(QWidget* self);
void QWidget_StackUnder(QWidget* self, QWidget* param1);
void QWidget_Move(QWidget* self, int x, int y);
void QWidget_MoveWithQPoint(QWidget* self, QPoint* param1);
void QWidget_Resize(QWidget* self, int w, int h);
void QWidget_ResizeWithQSize(QWidget* self, QSize* param1);
void QWidget_SetGeometry(QWidget* self, int x, int y, int w, int h);
void QWidget_SetGeometryWithGeometry(QWidget* self, QRect* geometry);
struct miqt_string QWidget_SaveGeometry(const QWidget* self);
bool QWidget_RestoreGeometry(QWidget* self, struct miqt_string geometry);
void QWidget_AdjustSize(QWidget* self);
bool QWidget_IsVisible(const QWidget* self);
bool QWidget_IsVisibleTo(const QWidget* self, QWidget* param1);
bool QWidget_IsHidden(const QWidget* self);
bool QWidget_IsMinimized(const QWidget* self);
bool QWidget_IsMaximized(const QWidget* self);
bool QWidget_IsFullScreen(const QWidget* self);
int QWidget_WindowState(const QWidget* self);
void QWidget_SetWindowState(QWidget* self, int state);
void QWidget_OverrideWindowState(QWidget* self, int state);
QSize* QWidget_SizeHint(const QWidget* self);
QSize* QWidget_MinimumSizeHint(const QWidget* self);
QSizePolicy* QWidget_SizePolicy(const QWidget* self);
void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy);
void QWidget_SetSizePolicy2(QWidget* self, int horizontal, int vertical);
int QWidget_HeightForWidth(const QWidget* self, int param1);
bool QWidget_HasHeightForWidth(const QWidget* self);
QRegion* QWidget_VisibleRegion(const QWidget* self);
void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom);
void QWidget_SetContentsMarginsWithMargins(QWidget* self, QMargins* margins);
void QWidget_GetContentsMargins(const QWidget* self, int* left, int* top, int* right, int* bottom);
QMargins* QWidget_ContentsMargins(const QWidget* self);
QRect* QWidget_ContentsRect(const QWidget* self);
QLayout* QWidget_Layout(const QWidget* self);
void QWidget_SetLayout(QWidget* self, QLayout* layout);
void QWidget_UpdateGeometry(QWidget* self);
void QWidget_SetParent(QWidget* self, QWidget* parent);
void QWidget_SetParent2(QWidget* self, QWidget* parent, int f);
void QWidget_Scroll(QWidget* self, int dx, int dy);
void QWidget_Scroll2(QWidget* self, int dx, int dy, QRect* param3);
QWidget* QWidget_FocusWidget(const QWidget* self);
QWidget* QWidget_NextInFocusChain(const QWidget* self);
QWidget* QWidget_PreviousInFocusChain(const QWidget* self);
bool QWidget_AcceptDrops(const QWidget* self);
void QWidget_SetAcceptDrops(QWidget* self, bool on);
void QWidget_AddAction(QWidget* self, QAction* action);
void QWidget_AddActions(QWidget* self, struct miqt_array /* of QAction* */  actions);
void QWidget_InsertActions(QWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions);
void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action);
void QWidget_RemoveAction(QWidget* self, QAction* action);
struct miqt_array /* of QAction* */  QWidget_Actions(const QWidget* self);
QWidget* QWidget_ParentWidget(const QWidget* self);
void QWidget_SetWindowFlags(QWidget* self, int typeVal);
int QWidget_WindowFlags(const QWidget* self);
void QWidget_SetWindowFlag(QWidget* self, int param1);
void QWidget_OverrideWindowFlags(QWidget* self, int typeVal);
int QWidget_WindowType(const QWidget* self);
QWidget* QWidget_Find(uintptr_t param1);
QWidget* QWidget_ChildAt(const QWidget* self, int x, int y);
QWidget* QWidget_ChildAtWithQPoint(const QWidget* self, QPoint* p);
void QWidget_SetAttribute(QWidget* self, int param1);
bool QWidget_TestAttribute(const QWidget* self, int param1);
QPaintEngine* QWidget_PaintEngine(const QWidget* self);
void QWidget_EnsurePolished(const QWidget* self);
bool QWidget_IsAncestorOf(const QWidget* self, QWidget* child);
bool QWidget_AutoFillBackground(const QWidget* self);
void QWidget_SetAutoFillBackground(QWidget* self, bool enabled);
QBackingStore* QWidget_BackingStore(const QWidget* self);
QWindow* QWidget_WindowHandle(const QWidget* self);
QScreen* QWidget_Screen(const QWidget* self);
QWidget* QWidget_CreateWindowContainer(QWindow* window);
void QWidget_WindowTitleChanged(QWidget* self, struct miqt_string title);
void QWidget_connect_WindowTitleChanged(QWidget* self, intptr_t slot);
void QWidget_WindowIconChanged(QWidget* self, QIcon* icon);
void QWidget_connect_WindowIconChanged(QWidget* self, intptr_t slot);
void QWidget_WindowIconTextChanged(QWidget* self, struct miqt_string iconText);
void QWidget_connect_WindowIconTextChanged(QWidget* self, intptr_t slot);
void QWidget_CustomContextMenuRequested(QWidget* self, QPoint* pos);
void QWidget_connect_CustomContextMenuRequested(QWidget* self, intptr_t slot);
bool QWidget_Event(QWidget* self, QEvent* event);
void QWidget_MousePressEvent(QWidget* self, QMouseEvent* event);
void QWidget_MouseReleaseEvent(QWidget* self, QMouseEvent* event);
void QWidget_MouseDoubleClickEvent(QWidget* self, QMouseEvent* event);
void QWidget_MouseMoveEvent(QWidget* self, QMouseEvent* event);
void QWidget_WheelEvent(QWidget* self, QWheelEvent* event);
void QWidget_KeyPressEvent(QWidget* self, QKeyEvent* event);
void QWidget_KeyReleaseEvent(QWidget* self, QKeyEvent* event);
void QWidget_FocusInEvent(QWidget* self, QFocusEvent* event);
void QWidget_FocusOutEvent(QWidget* self, QFocusEvent* event);
void QWidget_EnterEvent(QWidget* self, QEvent* event);
void QWidget_LeaveEvent(QWidget* self, QEvent* event);
void QWidget_PaintEvent(QWidget* self, QPaintEvent* event);
void QWidget_MoveEvent(QWidget* self, QMoveEvent* event);
void QWidget_ResizeEvent(QWidget* self, QResizeEvent* event);
void QWidget_CloseEvent(QWidget* self, QCloseEvent* event);
void QWidget_ContextMenuEvent(QWidget* self, QContextMenuEvent* event);
void QWidget_TabletEvent(QWidget* self, QTabletEvent* event);
void QWidget_ActionEvent(QWidget* self, QActionEvent* event);
void QWidget_DragEnterEvent(QWidget* self, QDragEnterEvent* event);
void QWidget_DragMoveEvent(QWidget* self, QDragMoveEvent* event);
void QWidget_DragLeaveEvent(QWidget* self, QDragLeaveEvent* event);
void QWidget_DropEvent(QWidget* self, QDropEvent* event);
void QWidget_ShowEvent(QWidget* self, QShowEvent* event);
void QWidget_HideEvent(QWidget* self, QHideEvent* event);
bool QWidget_NativeEvent(QWidget* self, struct miqt_string eventType, void* message, long* result);
void QWidget_ChangeEvent(QWidget* self, QEvent* param1);
int QWidget_Metric(const QWidget* self, int param1);
void QWidget_InitPainter(const QWidget* self, QPainter* painter);
QPaintDevice* QWidget_Redirected(const QWidget* self, QPoint* offset);
QPainter* QWidget_SharedPainter(const QWidget* self);
void QWidget_InputMethodEvent(QWidget* self, QInputMethodEvent* param1);
QVariant* QWidget_InputMethodQuery(const QWidget* self, int param1);
int QWidget_InputMethodHints(const QWidget* self);
void QWidget_SetInputMethodHints(QWidget* self, int hints);
bool QWidget_FocusNextPrevChild(QWidget* self, bool next);
struct miqt_string QWidget_Tr2(const char* s, const char* c);
struct miqt_string QWidget_Tr3(const char* s, const char* c, int n);
struct miqt_string QWidget_TrUtf82(const char* s, const char* c);
struct miqt_string QWidget_TrUtf83(const char* s, const char* c, int n);
void QWidget_Render2(QWidget* self, QPaintDevice* target, QPoint* targetOffset);
void QWidget_Render3(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion);
void QWidget_Render4(QWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags);
void QWidget_Render22(QWidget* self, QPainter* painter, QPoint* targetOffset);
void QWidget_Render32(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion);
void QWidget_Render42(QWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags);
QPixmap* QWidget_Grab1(QWidget* self, QRect* rectangle);
void QWidget_GrabGesture2(QWidget* self, int typeVal, int flags);
int QWidget_GrabShortcut2(QWidget* self, QKeySequence* key, int context);
void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable);
void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable);
void QWidget_SetWindowFlag2(QWidget* self, int param1, bool on);
void QWidget_SetAttribute2(QWidget* self, int param1, bool on);
QWidget* QWidget_CreateWindowContainer2(QWindow* window, QWidget* parent);
QWidget* QWidget_CreateWindowContainer3(QWindow* window, QWidget* parent, int flags);
void QWidget_override_virtual_DevType(void* self, intptr_t slot);
int QWidget_virtualbase_DevType(const void* self);
void QWidget_override_virtual_SetVisible(void* self, intptr_t slot);
void QWidget_virtualbase_SetVisible(void* self, bool visible);
void QWidget_override_virtual_SizeHint(void* self, intptr_t slot);
QSize* QWidget_virtualbase_SizeHint(const void* self);
void QWidget_override_virtual_MinimumSizeHint(void* self, intptr_t slot);
QSize* QWidget_virtualbase_MinimumSizeHint(const void* self);
void QWidget_override_virtual_HeightForWidth(void* self, intptr_t slot);
int QWidget_virtualbase_HeightForWidth(const void* self, int param1);
void QWidget_override_virtual_HasHeightForWidth(void* self, intptr_t slot);
bool QWidget_virtualbase_HasHeightForWidth(const void* self);
void QWidget_override_virtual_PaintEngine(void* self, intptr_t slot);
QPaintEngine* QWidget_virtualbase_PaintEngine(const void* self);
void QWidget_override_virtual_Event(void* self, intptr_t slot);
bool QWidget_virtualbase_Event(void* self, QEvent* event);
void QWidget_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QWidget_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QWidget_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QWidget_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QWidget_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QWidget_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QWidget_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QWidget_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QWidget_override_virtual_WheelEvent(void* self, intptr_t slot);
void QWidget_virtualbase_WheelEvent(void* self, QWheelEvent* event);
void QWidget_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QWidget_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QWidget_override_virtual_KeyReleaseEvent(void* self, intptr_t slot);
void QWidget_virtualbase_KeyReleaseEvent(void* self, QKeyEvent* event);
void QWidget_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QWidget_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QWidget_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QWidget_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QWidget_override_virtual_EnterEvent(void* self, intptr_t slot);
void QWidget_virtualbase_EnterEvent(void* self, QEvent* event);
void QWidget_override_virtual_LeaveEvent(void* self, intptr_t slot);
void QWidget_virtualbase_LeaveEvent(void* self, QEvent* event);
void QWidget_override_virtual_PaintEvent(void* self, intptr_t slot);
void QWidget_virtualbase_PaintEvent(void* self, QPaintEvent* event);
void QWidget_override_virtual_MoveEvent(void* self, intptr_t slot);
void QWidget_virtualbase_MoveEvent(void* self, QMoveEvent* event);
void QWidget_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QWidget_override_virtual_CloseEvent(void* self, intptr_t slot);
void QWidget_virtualbase_CloseEvent(void* self, QCloseEvent* event);
void QWidget_override_virtual_ContextMenuEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ContextMenuEvent(void* self, QContextMenuEvent* event);
void QWidget_override_virtual_TabletEvent(void* self, intptr_t slot);
void QWidget_virtualbase_TabletEvent(void* self, QTabletEvent* event);
void QWidget_override_virtual_ActionEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ActionEvent(void* self, QActionEvent* event);
void QWidget_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QWidget_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QWidget_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QWidget_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QWidget_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QWidget_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QWidget_override_virtual_DropEvent(void* self, intptr_t slot);
void QWidget_virtualbase_DropEvent(void* self, QDropEvent* event);
void QWidget_override_virtual_ShowEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ShowEvent(void* self, QShowEvent* event);
void QWidget_override_virtual_HideEvent(void* self, intptr_t slot);
void QWidget_virtualbase_HideEvent(void* self, QHideEvent* event);
void QWidget_override_virtual_NativeEvent(void* self, intptr_t slot);
bool QWidget_virtualbase_NativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
void QWidget_override_virtual_ChangeEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ChangeEvent(void* self, QEvent* param1);
void QWidget_override_virtual_Metric(void* self, intptr_t slot);
int QWidget_virtualbase_Metric(const void* self, int param1);
void QWidget_override_virtual_InitPainter(void* self, intptr_t slot);
void QWidget_virtualbase_InitPainter(const void* self, QPainter* painter);
void QWidget_override_virtual_Redirected(void* self, intptr_t slot);
QPaintDevice* QWidget_virtualbase_Redirected(const void* self, QPoint* offset);
void QWidget_override_virtual_SharedPainter(void* self, intptr_t slot);
QPainter* QWidget_virtualbase_SharedPainter(const void* self);
void QWidget_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QWidget_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* param1);
void QWidget_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QWidget_virtualbase_InputMethodQuery(const void* self, int param1);
void QWidget_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QWidget_virtualbase_FocusNextPrevChild(void* self, bool next);
void QWidget_override_virtual_EventFilter(void* self, intptr_t slot);
bool QWidget_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event);
void QWidget_override_virtual_TimerEvent(void* self, intptr_t slot);
void QWidget_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QWidget_override_virtual_ChildEvent(void* self, intptr_t slot);
void QWidget_virtualbase_ChildEvent(void* self, QChildEvent* event);
void QWidget_override_virtual_CustomEvent(void* self, intptr_t slot);
void QWidget_virtualbase_CustomEvent(void* self, QEvent* event);
void QWidget_override_virtual_ConnectNotify(void* self, intptr_t slot);
void QWidget_virtualbase_ConnectNotify(void* self, QMetaMethod* signal);
void QWidget_override_virtual_DisconnectNotify(void* self, intptr_t slot);
void QWidget_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal);
void QWidget_Delete(QWidget* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
