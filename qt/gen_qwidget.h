#ifndef GEN_QWIDGET_H
#define GEN_QWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAction;
class QBackingStore;
class QBitmap;
class QByteArray;
class QCursor;
class QFont;
class QFontInfo;
class QFontMetrics;
class QGraphicsEffect;
class QGraphicsProxyWidget;
class QIcon;
class QLayout;
class QLocale;
class QMargins;
class QMetaObject;
class QPaintEngine;
class QPalette;
class QPixmap;
class QPoint;
class QRect;
class QRegion;
class QScreen;
class QSize;
class QSizePolicy;
class QStyle;
class QWidget;
class QWidgetData;
class QWindow;
#else
typedef struct QAction QAction;
typedef struct QBackingStore QBackingStore;
typedef struct QBitmap QBitmap;
typedef struct QByteArray QByteArray;
typedef struct QCursor QCursor;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QIcon QIcon;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMetaObject QMetaObject;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QWidget QWidget;
typedef struct QWidgetData QWidgetData;
typedef struct QWindow QWindow;
#endif

QWidgetData* QWidgetData_new(QWidgetData* param1);
void QWidgetData_OperatorAssign(QWidgetData* self, QWidgetData* param1);
void QWidgetData_Delete(QWidgetData* self);

QMetaObject* QWidget_MetaObject(QWidget* self);
void QWidget_Tr(char* s, char** _out, int* _out_Strlen);
void QWidget_TrUtf8(char* s, char** _out, int* _out_Strlen);
int QWidget_DevType(QWidget* self);
uintptr_t QWidget_WinId(QWidget* self);
void QWidget_CreateWinId(QWidget* self);
uintptr_t QWidget_InternalWinId(QWidget* self);
uintptr_t QWidget_EffectiveWinId(QWidget* self);
QStyle* QWidget_Style(QWidget* self);
void QWidget_SetStyle(QWidget* self, QStyle* style);
bool QWidget_IsTopLevel(QWidget* self);
bool QWidget_IsWindow(QWidget* self);
bool QWidget_IsModal(QWidget* self);
bool QWidget_IsEnabled(QWidget* self);
bool QWidget_IsEnabledTo(QWidget* self, QWidget* param1);
bool QWidget_IsEnabledToTLW(QWidget* self);
void QWidget_SetEnabled(QWidget* self, bool enabled);
void QWidget_SetDisabled(QWidget* self, bool disabled);
void QWidget_SetWindowModified(QWidget* self, bool windowModified);
QRect* QWidget_FrameGeometry(QWidget* self);
QRect* QWidget_Geometry(QWidget* self);
QRect* QWidget_NormalGeometry(QWidget* self);
int QWidget_X(QWidget* self);
int QWidget_Y(QWidget* self);
QPoint* QWidget_Pos(QWidget* self);
QSize* QWidget_FrameSize(QWidget* self);
QSize* QWidget_Size(QWidget* self);
int QWidget_Width(QWidget* self);
int QWidget_Height(QWidget* self);
QRect* QWidget_Rect(QWidget* self);
QRect* QWidget_ChildrenRect(QWidget* self);
QRegion* QWidget_ChildrenRegion(QWidget* self);
QSize* QWidget_MinimumSize(QWidget* self);
QSize* QWidget_MaximumSize(QWidget* self);
int QWidget_MinimumWidth(QWidget* self);
int QWidget_MinimumHeight(QWidget* self);
int QWidget_MaximumWidth(QWidget* self);
int QWidget_MaximumHeight(QWidget* self);
void QWidget_SetMinimumSize(QWidget* self, QSize* minimumSize);
void QWidget_SetMinimumSize2(QWidget* self, int minw, int minh);
void QWidget_SetMaximumSize(QWidget* self, QSize* maximumSize);
void QWidget_SetMaximumSize2(QWidget* self, int maxw, int maxh);
void QWidget_SetMinimumWidth(QWidget* self, int minw);
void QWidget_SetMinimumHeight(QWidget* self, int minh);
void QWidget_SetMaximumWidth(QWidget* self, int maxw);
void QWidget_SetMaximumHeight(QWidget* self, int maxh);
QSize* QWidget_SizeIncrement(QWidget* self);
void QWidget_SetSizeIncrement(QWidget* self, QSize* sizeIncrement);
void QWidget_SetSizeIncrement2(QWidget* self, int w, int h);
QSize* QWidget_BaseSize(QWidget* self);
void QWidget_SetBaseSize(QWidget* self, QSize* baseSize);
void QWidget_SetBaseSize2(QWidget* self, int basew, int baseh);
void QWidget_SetFixedSize(QWidget* self, QSize* fixedSize);
void QWidget_SetFixedSize2(QWidget* self, int w, int h);
void QWidget_SetFixedWidth(QWidget* self, int w);
void QWidget_SetFixedHeight(QWidget* self, int h);
QPoint* QWidget_MapToGlobal(QWidget* self, QPoint* param1);
QPoint* QWidget_MapFromGlobal(QWidget* self, QPoint* param1);
QPoint* QWidget_MapToParent(QWidget* self, QPoint* param1);
QPoint* QWidget_MapFromParent(QWidget* self, QPoint* param1);
QPoint* QWidget_MapTo(QWidget* self, QWidget* param1, QPoint* param2);
QPoint* QWidget_MapFrom(QWidget* self, QWidget* param1, QPoint* param2);
QWidget* QWidget_Window(QWidget* self);
QWidget* QWidget_NativeParentWidget(QWidget* self);
QWidget* QWidget_TopLevelWidget(QWidget* self);
QPalette* QWidget_Palette(QWidget* self);
void QWidget_SetPalette(QWidget* self, QPalette* palette);
QFont* QWidget_Font(QWidget* self);
void QWidget_SetFont(QWidget* self, QFont* font);
QFontMetrics* QWidget_FontMetrics(QWidget* self);
QFontInfo* QWidget_FontInfo(QWidget* self);
QCursor* QWidget_Cursor(QWidget* self);
void QWidget_SetCursor(QWidget* self, QCursor* cursor);
void QWidget_UnsetCursor(QWidget* self);
void QWidget_SetMouseTracking(QWidget* self, bool enable);
bool QWidget_HasMouseTracking(QWidget* self);
bool QWidget_UnderMouse(QWidget* self);
void QWidget_SetTabletTracking(QWidget* self, bool enable);
bool QWidget_HasTabletTracking(QWidget* self);
void QWidget_SetMask(QWidget* self, QBitmap* mask);
void QWidget_SetMaskWithMask(QWidget* self, QRegion* mask);
QRegion* QWidget_Mask(QWidget* self);
void QWidget_ClearMask(QWidget* self);
QPixmap* QWidget_Grab(QWidget* self);
QGraphicsEffect* QWidget_GraphicsEffect(QWidget* self);
void QWidget_SetGraphicsEffect(QWidget* self, QGraphicsEffect* effect);
void QWidget_SetWindowTitle(QWidget* self, const char* windowTitle, size_t windowTitle_Strlen);
void QWidget_SetStyleSheet(QWidget* self, const char* styleSheet, size_t styleSheet_Strlen);
void QWidget_StyleSheet(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_WindowTitle(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetWindowIcon(QWidget* self, QIcon* icon);
QIcon* QWidget_WindowIcon(QWidget* self);
void QWidget_SetWindowIconText(QWidget* self, const char* windowIconText, size_t windowIconText_Strlen);
void QWidget_WindowIconText(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetWindowRole(QWidget* self, const char* windowRole, size_t windowRole_Strlen);
void QWidget_WindowRole(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetWindowFilePath(QWidget* self, const char* filePath, size_t filePath_Strlen);
void QWidget_WindowFilePath(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetWindowOpacity(QWidget* self, double level);
double QWidget_WindowOpacity(QWidget* self);
bool QWidget_IsWindowModified(QWidget* self);
void QWidget_SetToolTip(QWidget* self, const char* toolTip, size_t toolTip_Strlen);
void QWidget_ToolTip(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetToolTipDuration(QWidget* self, int msec);
int QWidget_ToolTipDuration(QWidget* self);
void QWidget_SetStatusTip(QWidget* self, const char* statusTip, size_t statusTip_Strlen);
void QWidget_StatusTip(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetWhatsThis(QWidget* self, const char* whatsThis, size_t whatsThis_Strlen);
void QWidget_WhatsThis(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_AccessibleName(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetAccessibleName(QWidget* self, const char* name, size_t name_Strlen);
void QWidget_AccessibleDescription(QWidget* self, char** _out, int* _out_Strlen);
void QWidget_SetAccessibleDescription(QWidget* self, const char* description, size_t description_Strlen);
void QWidget_UnsetLayoutDirection(QWidget* self);
void QWidget_SetLocale(QWidget* self, QLocale* locale);
QLocale* QWidget_Locale(QWidget* self);
void QWidget_UnsetLocale(QWidget* self);
bool QWidget_IsRightToLeft(QWidget* self);
bool QWidget_IsLeftToRight(QWidget* self);
void QWidget_SetFocus(QWidget* self);
bool QWidget_IsActiveWindow(QWidget* self);
void QWidget_ActivateWindow(QWidget* self);
void QWidget_ClearFocus(QWidget* self);
bool QWidget_HasFocus(QWidget* self);
void QWidget_SetTabOrder(QWidget* param1, QWidget* param2);
void QWidget_SetFocusProxy(QWidget* self, QWidget* focusProxy);
QWidget* QWidget_FocusProxy(QWidget* self);
void QWidget_GrabMouse(QWidget* self);
void QWidget_GrabMouseWithQCursor(QWidget* self, QCursor* param1);
void QWidget_ReleaseMouse(QWidget* self);
void QWidget_GrabKeyboard(QWidget* self);
void QWidget_ReleaseKeyboard(QWidget* self);
void QWidget_ReleaseShortcut(QWidget* self, int id);
void QWidget_SetShortcutEnabled(QWidget* self, int id);
void QWidget_SetShortcutAutoRepeat(QWidget* self, int id);
QWidget* QWidget_MouseGrabber();
QWidget* QWidget_KeyboardGrabber();
bool QWidget_UpdatesEnabled(QWidget* self);
void QWidget_SetUpdatesEnabled(QWidget* self, bool enable);
QGraphicsProxyWidget* QWidget_GraphicsProxyWidget(QWidget* self);
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
QByteArray* QWidget_SaveGeometry(QWidget* self);
bool QWidget_RestoreGeometry(QWidget* self, QByteArray* geometry);
void QWidget_AdjustSize(QWidget* self);
bool QWidget_IsVisible(QWidget* self);
bool QWidget_IsVisibleTo(QWidget* self, QWidget* param1);
bool QWidget_IsHidden(QWidget* self);
bool QWidget_IsMinimized(QWidget* self);
bool QWidget_IsMaximized(QWidget* self);
bool QWidget_IsFullScreen(QWidget* self);
QSize* QWidget_SizeHint(QWidget* self);
QSize* QWidget_MinimumSizeHint(QWidget* self);
QSizePolicy* QWidget_SizePolicy(QWidget* self);
void QWidget_SetSizePolicy(QWidget* self, QSizePolicy* sizePolicy);
int QWidget_HeightForWidth(QWidget* self, int param1);
bool QWidget_HasHeightForWidth(QWidget* self);
QRegion* QWidget_VisibleRegion(QWidget* self);
void QWidget_SetContentsMargins(QWidget* self, int left, int top, int right, int bottom);
void QWidget_SetContentsMarginsWithMargins(QWidget* self, QMargins* margins);
void QWidget_GetContentsMargins(QWidget* self, int* left, int* top, int* right, int* bottom);
QMargins* QWidget_ContentsMargins(QWidget* self);
QRect* QWidget_ContentsRect(QWidget* self);
QLayout* QWidget_Layout(QWidget* self);
void QWidget_SetLayout(QWidget* self, QLayout* layout);
void QWidget_UpdateGeometry(QWidget* self);
void QWidget_SetParent(QWidget* self, QWidget* parent);
void QWidget_Scroll(QWidget* self, int dx, int dy);
void QWidget_Scroll2(QWidget* self, int dx, int dy, QRect* param3);
QWidget* QWidget_FocusWidget(QWidget* self);
QWidget* QWidget_NextInFocusChain(QWidget* self);
QWidget* QWidget_PreviousInFocusChain(QWidget* self);
bool QWidget_AcceptDrops(QWidget* self);
void QWidget_SetAcceptDrops(QWidget* self, bool on);
void QWidget_AddAction(QWidget* self, QAction* action);
void QWidget_AddActions(QWidget* self, QAction** actions, size_t actions_len);
void QWidget_InsertActions(QWidget* self, QAction* before, QAction** actions, size_t actions_len);
void QWidget_InsertAction(QWidget* self, QAction* before, QAction* action);
void QWidget_RemoveAction(QWidget* self, QAction* action);
void QWidget_Actions(QWidget* self, QAction*** _out, size_t* _out_len);
QWidget* QWidget_ParentWidget(QWidget* self);
QWidget* QWidget_Find(uintptr_t param1);
QWidget* QWidget_ChildAt(QWidget* self, int x, int y);
QWidget* QWidget_ChildAtWithQPoint(QWidget* self, QPoint* p);
QPaintEngine* QWidget_PaintEngine(QWidget* self);
void QWidget_EnsurePolished(QWidget* self);
bool QWidget_IsAncestorOf(QWidget* self, QWidget* child);
bool QWidget_AutoFillBackground(QWidget* self);
void QWidget_SetAutoFillBackground(QWidget* self, bool enabled);
QBackingStore* QWidget_BackingStore(QWidget* self);
QWindow* QWidget_WindowHandle(QWidget* self);
QScreen* QWidget_Screen(QWidget* self);
void QWidget_WindowTitleChanged(QWidget* self, const char* title, size_t title_Strlen);
void QWidget_connect_WindowTitleChanged(QWidget* self, void* slot);
void QWidget_WindowIconChanged(QWidget* self, QIcon* icon);
void QWidget_connect_WindowIconChanged(QWidget* self, void* slot);
void QWidget_WindowIconTextChanged(QWidget* self, const char* iconText, size_t iconText_Strlen);
void QWidget_connect_WindowIconTextChanged(QWidget* self, void* slot);
void QWidget_CustomContextMenuRequested(QWidget* self, QPoint* pos);
void QWidget_connect_CustomContextMenuRequested(QWidget* self, void* slot);
void QWidget_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QWidget_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWidget_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QWidget_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
QPixmap* QWidget_Grab1(QWidget* self, QRect* rectangle);
void QWidget_SetShortcutEnabled2(QWidget* self, int id, bool enable);
void QWidget_SetShortcutAutoRepeat2(QWidget* self, int id, bool enable);
void QWidget_Delete(QWidget* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif