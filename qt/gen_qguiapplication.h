#ifndef GEN_QGUIAPPLICATION_H
#define GEN_QGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QClipboard;
class QCursor;
class QEvent;
class QFont;
class QGuiApplication;
class QIcon;
class QInputMethod;
class QMetaObject;
class QObject;
class QPalette;
class QPoint;
class QScreen;
class QSessionManager;
class QStyleHints;
class QWindow;
#else
typedef struct QClipboard QClipboard;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QGuiApplication QGuiApplication;
typedef struct QIcon QIcon;
typedef struct QInputMethod QInputMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QSessionManager QSessionManager;
typedef struct QStyleHints QStyleHints;
typedef struct QWindow QWindow;
#endif

QGuiApplication* QGuiApplication_new(int* argc, char** argv);
QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3);
QMetaObject* QGuiApplication_MetaObject(QGuiApplication* self);
void QGuiApplication_Tr(const char* s, char** _out, int* _out_Strlen);
void QGuiApplication_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QGuiApplication_SetApplicationDisplayName(const char* name, size_t name_Strlen);
void QGuiApplication_ApplicationDisplayName(char** _out, int* _out_Strlen);
void QGuiApplication_SetDesktopFileName(const char* name, size_t name_Strlen);
void QGuiApplication_DesktopFileName(char** _out, int* _out_Strlen);
void QGuiApplication_AllWindows(QWindow*** _out, size_t* _out_len);
void QGuiApplication_TopLevelWindows(QWindow*** _out, size_t* _out_len);
QWindow* QGuiApplication_TopLevelAt(QPoint* pos);
void QGuiApplication_SetWindowIcon(QIcon* icon);
QIcon* QGuiApplication_WindowIcon();
void QGuiApplication_PlatformName(char** _out, int* _out_Strlen);
QWindow* QGuiApplication_ModalWindow();
QWindow* QGuiApplication_FocusWindow();
QObject* QGuiApplication_FocusObject();
QScreen* QGuiApplication_PrimaryScreen();
void QGuiApplication_Screens(QScreen*** _out, size_t* _out_len);
QScreen* QGuiApplication_ScreenAt(QPoint* point);
double QGuiApplication_DevicePixelRatio(QGuiApplication* self);
QCursor* QGuiApplication_OverrideCursor();
void QGuiApplication_SetOverrideCursor(QCursor* overrideCursor);
void QGuiApplication_ChangeOverrideCursor(QCursor* param1);
void QGuiApplication_RestoreOverrideCursor();
QFont* QGuiApplication_Font();
void QGuiApplication_SetFont(QFont* font);
QClipboard* QGuiApplication_Clipboard();
QPalette* QGuiApplication_Palette();
void QGuiApplication_SetPalette(QPalette* pal);
int QGuiApplication_KeyboardModifiers();
int QGuiApplication_QueryKeyboardModifiers();
int QGuiApplication_MouseButtons();
void QGuiApplication_SetLayoutDirection(uintptr_t direction);
uintptr_t QGuiApplication_LayoutDirection();
bool QGuiApplication_IsRightToLeft();
bool QGuiApplication_IsLeftToRight();
QStyleHints* QGuiApplication_StyleHints();
void QGuiApplication_SetDesktopSettingsAware(bool on);
bool QGuiApplication_DesktopSettingsAware();
QInputMethod* QGuiApplication_InputMethod();
void QGuiApplication_SetQuitOnLastWindowClosed(bool quit);
bool QGuiApplication_QuitOnLastWindowClosed();
uintptr_t QGuiApplication_ApplicationState();
void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(uintptr_t policy);
uintptr_t QGuiApplication_HighDpiScaleFactorRoundingPolicy();
int QGuiApplication_Exec();
bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2);
bool QGuiApplication_IsSessionRestored(QGuiApplication* self);
void QGuiApplication_SessionId(QGuiApplication* self, char** _out, int* _out_Strlen);
void QGuiApplication_SessionKey(QGuiApplication* self, char** _out, int* _out_Strlen);
bool QGuiApplication_IsSavingSession(QGuiApplication* self);
bool QGuiApplication_IsFallbackSessionManagementEnabled();
void QGuiApplication_SetFallbackSessionManagementEnabled(bool fallbackSessionManagementEnabled);
void QGuiApplication_Sync();
void QGuiApplication_FontDatabaseChanged(QGuiApplication* self);
void QGuiApplication_connect_FontDatabaseChanged(QGuiApplication* self, void* slot);
void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_ScreenAdded(QGuiApplication* self, void* slot);
void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_ScreenRemoved(QGuiApplication* self, void* slot);
void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_PrimaryScreenChanged(QGuiApplication* self, void* slot);
void QGuiApplication_LastWindowClosed(QGuiApplication* self);
void QGuiApplication_connect_LastWindowClosed(QGuiApplication* self, void* slot);
void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject);
void QGuiApplication_connect_FocusObjectChanged(QGuiApplication* self, void* slot);
void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow);
void QGuiApplication_connect_FocusWindowChanged(QGuiApplication* self, void* slot);
void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, uintptr_t state);
void QGuiApplication_connect_ApplicationStateChanged(QGuiApplication* self, void* slot);
void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, uintptr_t direction);
void QGuiApplication_connect_LayoutDirectionChanged(QGuiApplication* self, void* slot);
void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_CommitDataRequest(QGuiApplication* self, void* slot);
void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_SaveStateRequest(QGuiApplication* self, void* slot);
void QGuiApplication_PaletteChanged(QGuiApplication* self, QPalette* pal);
void QGuiApplication_connect_PaletteChanged(QGuiApplication* self, void* slot);
void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self);
void QGuiApplication_connect_ApplicationDisplayNameChanged(QGuiApplication* self, void* slot);
void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font);
void QGuiApplication_connect_FontChanged(QGuiApplication* self, void* slot);
void QGuiApplication_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGuiApplication_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGuiApplication_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QGuiApplication_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QGuiApplication_Delete(QGuiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
