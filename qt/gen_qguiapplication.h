#ifndef GEN_QGUIAPPLICATION_H
#define GEN_QGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "binding.h"

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
QMetaObject* QGuiApplication_MetaObject(const QGuiApplication* self);
void* QGuiApplication_Metacast(QGuiApplication* self, const char* param1);
struct miqt_string* QGuiApplication_Tr(const char* s);
struct miqt_string* QGuiApplication_TrUtf8(const char* s);
void QGuiApplication_SetApplicationDisplayName(struct miqt_string* name);
struct miqt_string* QGuiApplication_ApplicationDisplayName();
void QGuiApplication_SetDesktopFileName(struct miqt_string* name);
struct miqt_string* QGuiApplication_DesktopFileName();
struct miqt_array* QGuiApplication_AllWindows();
struct miqt_array* QGuiApplication_TopLevelWindows();
QWindow* QGuiApplication_TopLevelAt(QPoint* pos);
void QGuiApplication_SetWindowIcon(QIcon* icon);
QIcon* QGuiApplication_WindowIcon();
struct miqt_string* QGuiApplication_PlatformName();
QWindow* QGuiApplication_ModalWindow();
QWindow* QGuiApplication_FocusWindow();
QObject* QGuiApplication_FocusObject();
QScreen* QGuiApplication_PrimaryScreen();
struct miqt_array* QGuiApplication_Screens();
QScreen* QGuiApplication_ScreenAt(QPoint* point);
double QGuiApplication_DevicePixelRatio(const QGuiApplication* self);
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
void QGuiApplication_SetLayoutDirection(int direction);
int QGuiApplication_LayoutDirection();
bool QGuiApplication_IsRightToLeft();
bool QGuiApplication_IsLeftToRight();
QStyleHints* QGuiApplication_StyleHints();
void QGuiApplication_SetDesktopSettingsAware(bool on);
bool QGuiApplication_DesktopSettingsAware();
QInputMethod* QGuiApplication_InputMethod();
void QGuiApplication_SetQuitOnLastWindowClosed(bool quit);
bool QGuiApplication_QuitOnLastWindowClosed();
int QGuiApplication_ApplicationState();
void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy);
int QGuiApplication_HighDpiScaleFactorRoundingPolicy();
int QGuiApplication_Exec();
bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2);
bool QGuiApplication_IsSessionRestored(const QGuiApplication* self);
struct miqt_string* QGuiApplication_SessionId(const QGuiApplication* self);
struct miqt_string* QGuiApplication_SessionKey(const QGuiApplication* self);
bool QGuiApplication_IsSavingSession(const QGuiApplication* self);
bool QGuiApplication_IsFallbackSessionManagementEnabled();
void QGuiApplication_SetFallbackSessionManagementEnabled(bool fallbackSessionManagementEnabled);
void QGuiApplication_Sync();
void QGuiApplication_FontDatabaseChanged(QGuiApplication* self);
void QGuiApplication_connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_ScreenAdded(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_ScreenRemoved(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LastWindowClosed(QGuiApplication* self);
void QGuiApplication_connect_LastWindowClosed(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject);
void QGuiApplication_connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow);
void QGuiApplication_connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state);
void QGuiApplication_connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction);
void QGuiApplication_connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_CommitDataRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_SaveStateRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PaletteChanged(QGuiApplication* self, QPalette* pal);
void QGuiApplication_connect_PaletteChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self);
void QGuiApplication_connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font);
void QGuiApplication_connect_FontChanged(QGuiApplication* self, intptr_t slot);
struct miqt_string* QGuiApplication_Tr2(const char* s, const char* c);
struct miqt_string* QGuiApplication_Tr3(const char* s, const char* c, int n);
struct miqt_string* QGuiApplication_TrUtf82(const char* s, const char* c);
struct miqt_string* QGuiApplication_TrUtf83(const char* s, const char* c, int n);
void QGuiApplication_Delete(QGuiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
