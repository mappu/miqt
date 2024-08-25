#ifndef GEN_QWINDOW_H
#define GEN_QWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAccessibleInterface;
class QCursor;
class QIcon;
class QMargins;
class QMetaObject;
class QObject;
class QPoint;
class QRect;
class QRegion;
class QScreen;
class QSize;
class QSurfaceFormat;
class QWindow;
#else
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QCursor QCursor;
typedef struct QIcon QIcon;
typedef struct QMargins QMargins;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QScreen QScreen;
typedef struct QSize QSize;
typedef struct QSurfaceFormat QSurfaceFormat;
typedef struct QWindow QWindow;
#endif

QWindow* QWindow_new();
QWindow* QWindow_new2(QWindow* parent);
QWindow* QWindow_new3(QScreen* screen);
QMetaObject* QWindow_MetaObject(QWindow* self);
void QWindow_Tr(char* s, char** _out, int* _out_Strlen);
void QWindow_TrUtf8(char* s, char** _out, int* _out_Strlen);
bool QWindow_IsVisible(QWindow* self);
void QWindow_Create(QWindow* self);
uintptr_t QWindow_WinId(QWindow* self);
QWindow* QWindow_Parent(QWindow* self);
void QWindow_SetParent(QWindow* self, QWindow* parent);
bool QWindow_IsTopLevel(QWindow* self);
bool QWindow_IsModal(QWindow* self);
void QWindow_SetFormat(QWindow* self, QSurfaceFormat* format);
QSurfaceFormat* QWindow_Format(QWindow* self);
QSurfaceFormat* QWindow_RequestedFormat(QWindow* self);
void QWindow_Title(QWindow* self, char** _out, int* _out_Strlen);
void QWindow_SetOpacity(QWindow* self, double level);
double QWindow_Opacity(QWindow* self);
void QWindow_SetMask(QWindow* self, QRegion* region);
QRegion* QWindow_Mask(QWindow* self);
bool QWindow_IsActive(QWindow* self);
double QWindow_DevicePixelRatio(QWindow* self);
void QWindow_SetTransientParent(QWindow* self, QWindow* parent);
QWindow* QWindow_TransientParent(QWindow* self);
bool QWindow_IsExposed(QWindow* self);
int QWindow_MinimumWidth(QWindow* self);
int QWindow_MinimumHeight(QWindow* self);
int QWindow_MaximumWidth(QWindow* self);
int QWindow_MaximumHeight(QWindow* self);
QSize* QWindow_MinimumSize(QWindow* self);
QSize* QWindow_MaximumSize(QWindow* self);
QSize* QWindow_BaseSize(QWindow* self);
QSize* QWindow_SizeIncrement(QWindow* self);
void QWindow_SetMinimumSize(QWindow* self, QSize* size);
void QWindow_SetMaximumSize(QWindow* self, QSize* size);
void QWindow_SetBaseSize(QWindow* self, QSize* size);
void QWindow_SetSizeIncrement(QWindow* self, QSize* size);
QRect* QWindow_Geometry(QWindow* self);
QMargins* QWindow_FrameMargins(QWindow* self);
QRect* QWindow_FrameGeometry(QWindow* self);
QPoint* QWindow_FramePosition(QWindow* self);
void QWindow_SetFramePosition(QWindow* self, QPoint* point);
int QWindow_Width(QWindow* self);
int QWindow_Height(QWindow* self);
int QWindow_X(QWindow* self);
int QWindow_Y(QWindow* self);
QSize* QWindow_Size(QWindow* self);
QPoint* QWindow_Position(QWindow* self);
void QWindow_SetPosition(QWindow* self, QPoint* pt);
void QWindow_SetPosition2(QWindow* self, int posx, int posy);
void QWindow_Resize(QWindow* self, QSize* newSize);
void QWindow_Resize2(QWindow* self, int w, int h);
void QWindow_SetFilePath(QWindow* self, const char* filePath, size_t filePath_Strlen);
void QWindow_FilePath(QWindow* self, char** _out, int* _out_Strlen);
void QWindow_SetIcon(QWindow* self, QIcon* icon);
QIcon* QWindow_Icon(QWindow* self);
void QWindow_Destroy(QWindow* self);
bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab);
bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab);
QScreen* QWindow_Screen(QWindow* self);
void QWindow_SetScreen(QWindow* self, QScreen* screen);
QAccessibleInterface* QWindow_AccessibleRoot(QWindow* self);
QObject* QWindow_FocusObject(QWindow* self);
QPoint* QWindow_MapToGlobal(QWindow* self, QPoint* pos);
QPoint* QWindow_MapFromGlobal(QWindow* self, QPoint* pos);
QCursor* QWindow_Cursor(QWindow* self);
void QWindow_SetCursor(QWindow* self, QCursor* cursor);
void QWindow_UnsetCursor(QWindow* self);
QWindow* QWindow_FromWinId(uintptr_t id);
void QWindow_RequestActivate(QWindow* self);
void QWindow_SetVisible(QWindow* self, bool visible);
void QWindow_Show(QWindow* self);
void QWindow_Hide(QWindow* self);
void QWindow_ShowMinimized(QWindow* self);
void QWindow_ShowMaximized(QWindow* self);
void QWindow_ShowFullScreen(QWindow* self);
void QWindow_ShowNormal(QWindow* self);
bool QWindow_Close(QWindow* self);
void QWindow_Raise(QWindow* self);
void QWindow_Lower(QWindow* self);
bool QWindow_StartSystemMove(QWindow* self);
void QWindow_SetTitle(QWindow* self, const char* title, size_t title_Strlen);
void QWindow_SetX(QWindow* self, int arg);
void QWindow_SetY(QWindow* self, int arg);
void QWindow_SetWidth(QWindow* self, int arg);
void QWindow_SetHeight(QWindow* self, int arg);
void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h);
void QWindow_SetGeometryWithRect(QWindow* self, QRect* rect);
void QWindow_SetMinimumWidth(QWindow* self, int w);
void QWindow_SetMinimumHeight(QWindow* self, int h);
void QWindow_SetMaximumWidth(QWindow* self, int w);
void QWindow_SetMaximumHeight(QWindow* self, int h);
void QWindow_Alert(QWindow* self, int msec);
void QWindow_RequestUpdate(QWindow* self);
void QWindow_ScreenChanged(QWindow* self, QScreen* screen);
void QWindow_connect_ScreenChanged(QWindow* self, void* slot);
void QWindow_WindowTitleChanged(QWindow* self, const char* title, size_t title_Strlen);
void QWindow_connect_WindowTitleChanged(QWindow* self, void* slot);
void QWindow_XChanged(QWindow* self, int arg);
void QWindow_connect_XChanged(QWindow* self, void* slot);
void QWindow_YChanged(QWindow* self, int arg);
void QWindow_connect_YChanged(QWindow* self, void* slot);
void QWindow_WidthChanged(QWindow* self, int arg);
void QWindow_connect_WidthChanged(QWindow* self, void* slot);
void QWindow_HeightChanged(QWindow* self, int arg);
void QWindow_connect_HeightChanged(QWindow* self, void* slot);
void QWindow_MinimumWidthChanged(QWindow* self, int arg);
void QWindow_connect_MinimumWidthChanged(QWindow* self, void* slot);
void QWindow_MinimumHeightChanged(QWindow* self, int arg);
void QWindow_connect_MinimumHeightChanged(QWindow* self, void* slot);
void QWindow_MaximumWidthChanged(QWindow* self, int arg);
void QWindow_connect_MaximumWidthChanged(QWindow* self, void* slot);
void QWindow_MaximumHeightChanged(QWindow* self, int arg);
void QWindow_connect_MaximumHeightChanged(QWindow* self, void* slot);
void QWindow_VisibleChanged(QWindow* self, bool arg);
void QWindow_connect_VisibleChanged(QWindow* self, void* slot);
void QWindow_ActiveChanged(QWindow* self);
void QWindow_connect_ActiveChanged(QWindow* self, void* slot);
void QWindow_FocusObjectChanged(QWindow* self, QObject* object);
void QWindow_connect_FocusObjectChanged(QWindow* self, void* slot);
void QWindow_OpacityChanged(QWindow* self, double opacity);
void QWindow_connect_OpacityChanged(QWindow* self, void* slot);
void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent);
void QWindow_connect_TransientParentChanged(QWindow* self, void* slot);
void QWindow_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QWindow_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWindow_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QWindow_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QWindow_Delete(QWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
