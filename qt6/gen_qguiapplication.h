#pragma once
#ifndef MIQT_QT6_GEN_QGUIAPPLICATION_H
#define MIQT_QT6_GEN_QGUIAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QChildEvent;
class QClipboard;
class QCoreApplication;
class QCursor;
class QEvent;
class QFont;
class QGuiApplication;
class QIcon;
class QInputMethod;
class QMetaMethod;
class QMetaObject;
class QObject;
class QPalette;
class QPoint;
class QScreen;
class QSessionManager;
class QStyleHints;
class QTimerEvent;
class QWindow;
#else
typedef struct QChildEvent QChildEvent;
typedef struct QClipboard QClipboard;
typedef struct QCoreApplication QCoreApplication;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QGuiApplication QGuiApplication;
typedef struct QIcon QIcon;
typedef struct QInputMethod QInputMethod;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QSessionManager QSessionManager;
typedef struct QStyleHints QStyleHints;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWindow QWindow;
#endif

QGuiApplication* QGuiApplication_new(int* argc, char** argv);
QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3);
void QGuiApplication_virtbase(QGuiApplication* src, QCoreApplication** outptr_QCoreApplication);
QMetaObject* QGuiApplication_metaObject(const QGuiApplication* self);
void* QGuiApplication_metacast(QGuiApplication* self, const char* param1);
struct miqt_string QGuiApplication_tr(const char* s);
void QGuiApplication_setApplicationDisplayName(struct miqt_string name);
struct miqt_string QGuiApplication_applicationDisplayName();
void QGuiApplication_setDesktopFileName(struct miqt_string name);
struct miqt_string QGuiApplication_desktopFileName();
struct miqt_array /* of QWindow* */  QGuiApplication_allWindows();
struct miqt_array /* of QWindow* */  QGuiApplication_topLevelWindows();
QWindow* QGuiApplication_topLevelAt(QPoint* pos);
void QGuiApplication_setWindowIcon(QIcon* icon);
QIcon* QGuiApplication_windowIcon();
struct miqt_string QGuiApplication_platformName();
QWindow* QGuiApplication_modalWindow();
QWindow* QGuiApplication_focusWindow();
QObject* QGuiApplication_focusObject();
QScreen* QGuiApplication_primaryScreen();
struct miqt_array /* of QScreen* */  QGuiApplication_screens();
QScreen* QGuiApplication_screenAt(QPoint* point);
double QGuiApplication_devicePixelRatio(const QGuiApplication* self);
QCursor* QGuiApplication_overrideCursor();
void QGuiApplication_setOverrideCursor(QCursor* overrideCursor);
void QGuiApplication_changeOverrideCursor(QCursor* param1);
void QGuiApplication_restoreOverrideCursor();
QFont* QGuiApplication_font();
void QGuiApplication_setFont(QFont* font);
QClipboard* QGuiApplication_clipboard();
QPalette* QGuiApplication_palette();
void QGuiApplication_setPalette(QPalette* pal);
int QGuiApplication_keyboardModifiers();
int QGuiApplication_queryKeyboardModifiers();
int QGuiApplication_mouseButtons();
void QGuiApplication_setLayoutDirection(int direction);
int QGuiApplication_layoutDirection();
bool QGuiApplication_isRightToLeft();
bool QGuiApplication_isLeftToRight();
QStyleHints* QGuiApplication_styleHints();
void QGuiApplication_setDesktopSettingsAware(bool on);
bool QGuiApplication_desktopSettingsAware();
QInputMethod* QGuiApplication_inputMethod();
void QGuiApplication_setQuitOnLastWindowClosed(bool quit);
bool QGuiApplication_quitOnLastWindowClosed();
int QGuiApplication_applicationState();
void QGuiApplication_setHighDpiScaleFactorRoundingPolicy(int policy);
int QGuiApplication_highDpiScaleFactorRoundingPolicy();
int QGuiApplication_exec();
bool QGuiApplication_notify(QGuiApplication* self, QObject* param1, QEvent* param2);
bool QGuiApplication_isSessionRestored(const QGuiApplication* self);
struct miqt_string QGuiApplication_sessionId(const QGuiApplication* self);
struct miqt_string QGuiApplication_sessionKey(const QGuiApplication* self);
bool QGuiApplication_isSavingSession(const QGuiApplication* self);
void QGuiApplication_sync();
void QGuiApplication_fontDatabaseChanged(QGuiApplication* self);
void QGuiApplication_connect_fontDatabaseChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_screenAdded(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_screenAdded(QGuiApplication* self, intptr_t slot);
void QGuiApplication_screenRemoved(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_screenRemoved(QGuiApplication* self, intptr_t slot);
void QGuiApplication_primaryScreenChanged(QGuiApplication* self, QScreen* screen);
void QGuiApplication_connect_primaryScreenChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_lastWindowClosed(QGuiApplication* self);
void QGuiApplication_connect_lastWindowClosed(QGuiApplication* self, intptr_t slot);
void QGuiApplication_focusObjectChanged(QGuiApplication* self, QObject* focusObject);
void QGuiApplication_connect_focusObjectChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_focusWindowChanged(QGuiApplication* self, QWindow* focusWindow);
void QGuiApplication_connect_focusWindowChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_applicationStateChanged(QGuiApplication* self, int state);
void QGuiApplication_connect_applicationStateChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_layoutDirectionChanged(QGuiApplication* self, int direction);
void QGuiApplication_connect_layoutDirectionChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_commitDataRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_commitDataRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_saveStateRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_connect_saveStateRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_applicationDisplayNameChanged(QGuiApplication* self);
void QGuiApplication_connect_applicationDisplayNameChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_paletteChanged(QGuiApplication* self, QPalette* pal);
void QGuiApplication_connect_paletteChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_fontChanged(QGuiApplication* self, QFont* font);
void QGuiApplication_connect_fontChanged(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_event(QGuiApplication* self, QEvent* param1);
struct miqt_string QGuiApplication_tr2(const char* s, const char* c);
struct miqt_string QGuiApplication_tr3(const char* s, const char* c, int n);

bool QGuiApplication_override_virtual_notify(void* self, intptr_t slot);
bool QGuiApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2);
bool QGuiApplication_override_virtual_event(void* self, intptr_t slot);
bool QGuiApplication_virtualbase_event(void* self, QEvent* param1);
bool QGuiApplication_override_virtual_eventFilter(void* self, intptr_t slot);
bool QGuiApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QGuiApplication_override_virtual_timerEvent(void* self, intptr_t slot);
void QGuiApplication_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QGuiApplication_override_virtual_childEvent(void* self, intptr_t slot);
void QGuiApplication_virtualbase_childEvent(void* self, QChildEvent* event);
bool QGuiApplication_override_virtual_customEvent(void* self, intptr_t slot);
void QGuiApplication_virtualbase_customEvent(void* self, QEvent* event);
bool QGuiApplication_override_virtual_connectNotify(void* self, intptr_t slot);
void QGuiApplication_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QGuiApplication_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QGuiApplication_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

void* QGuiApplication_protectedbase_resolveInterface(bool* _dynamic_cast_ok, const void* self, const char* name, int revision);
QObject* QGuiApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QGuiApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QGuiApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QGuiApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);

void QGuiApplication_delete(QGuiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
