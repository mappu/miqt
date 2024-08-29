#include <QClipboard>
#include <QCursor>
#include <QEvent>
#include <QFont>
#include <QGuiApplication>
#include <QIcon>
#include <QInputMethod>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QScreen>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHints>
#include <QWindow>
#include "qguiapplication.h"

#include "gen_qguiapplication.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
	return new QGuiApplication(static_cast<int&>(*argc), argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
	return new QGuiApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QGuiApplication_MetaObject(QGuiApplication* self) {
	return (QMetaObject*) const_cast<const QGuiApplication*>(self)->metaObject();
}

void QGuiApplication_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_SetApplicationDisplayName(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QGuiApplication::setApplicationDisplayName(name_QString);
}

void QGuiApplication_ApplicationDisplayName(char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::applicationDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_SetDesktopFileName(const char* name, size_t name_Strlen) {
	QString name_QString = QString::fromUtf8(name, name_Strlen);
	QGuiApplication::setDesktopFileName(name_QString);
}

void QGuiApplication_DesktopFileName(char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::desktopFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_AllWindows(QWindow*** _out, size_t* _out_len) {
	QWindowList ret = QGuiApplication::allWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** __out = static_cast<QWindow**>(malloc(sizeof(QWindow*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

void QGuiApplication_TopLevelWindows(QWindow*** _out, size_t* _out_len) {
	QWindowList ret = QGuiApplication::topLevelWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** __out = static_cast<QWindow**>(malloc(sizeof(QWindow*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QWindow* QGuiApplication_TopLevelAt(QPoint* pos) {
	return QGuiApplication::topLevelAt(*pos);
}

void QGuiApplication_SetWindowIcon(QIcon* icon) {
	QGuiApplication::setWindowIcon(*icon);
}

QIcon* QGuiApplication_WindowIcon() {
	QIcon ret = QGuiApplication::windowIcon();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QIcon*>(new QIcon(ret));
}

void QGuiApplication_PlatformName(char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::platformName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QWindow* QGuiApplication_ModalWindow() {
	return QGuiApplication::modalWindow();
}

QWindow* QGuiApplication_FocusWindow() {
	return QGuiApplication::focusWindow();
}

QObject* QGuiApplication_FocusObject() {
	return QGuiApplication::focusObject();
}

QScreen* QGuiApplication_PrimaryScreen() {
	return QGuiApplication::primaryScreen();
}

void QGuiApplication_Screens(QScreen*** _out, size_t* _out_len) {
	QList<QScreen*> ret = QGuiApplication::screens();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** __out = static_cast<QScreen**>(malloc(sizeof(QScreen*) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = ret[i];
	}
	*_out = __out;
	*_out_len = ret.length();
}

QScreen* QGuiApplication_ScreenAt(QPoint* point) {
	return QGuiApplication::screenAt(*point);
}

double QGuiApplication_DevicePixelRatio(QGuiApplication* self) {
	return const_cast<const QGuiApplication*>(self)->devicePixelRatio();
}

QCursor* QGuiApplication_OverrideCursor() {
	return QGuiApplication::overrideCursor();
}

void QGuiApplication_SetOverrideCursor(QCursor* overrideCursor) {
	QGuiApplication::setOverrideCursor(*overrideCursor);
}

void QGuiApplication_ChangeOverrideCursor(QCursor* param1) {
	QGuiApplication::changeOverrideCursor(*param1);
}

void QGuiApplication_RestoreOverrideCursor() {
	QGuiApplication::restoreOverrideCursor();
}

QFont* QGuiApplication_Font() {
	QFont ret = QGuiApplication::font();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QFont*>(new QFont(ret));
}

void QGuiApplication_SetFont(QFont* font) {
	QGuiApplication::setFont(*font);
}

QClipboard* QGuiApplication_Clipboard() {
	return QGuiApplication::clipboard();
}

QPalette* QGuiApplication_Palette() {
	QPalette ret = QGuiApplication::palette();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QPalette*>(new QPalette(ret));
}

void QGuiApplication_SetPalette(QPalette* pal) {
	QGuiApplication::setPalette(*pal);
}

int QGuiApplication_KeyboardModifiers() {
	Qt::KeyboardModifiers ret = QGuiApplication::keyboardModifiers();
	return static_cast<int>(ret);
}

int QGuiApplication_QueryKeyboardModifiers() {
	Qt::KeyboardModifiers ret = QGuiApplication::queryKeyboardModifiers();
	return static_cast<int>(ret);
}

int QGuiApplication_MouseButtons() {
	Qt::MouseButtons ret = QGuiApplication::mouseButtons();
	return static_cast<int>(ret);
}

void QGuiApplication_SetLayoutDirection(uintptr_t direction) {
	QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

uintptr_t QGuiApplication_LayoutDirection() {
	Qt::LayoutDirection ret = QGuiApplication::layoutDirection();
	return static_cast<uintptr_t>(ret);
}

bool QGuiApplication_IsRightToLeft() {
	return QGuiApplication::isRightToLeft();
}

bool QGuiApplication_IsLeftToRight() {
	return QGuiApplication::isLeftToRight();
}

QStyleHints* QGuiApplication_StyleHints() {
	return QGuiApplication::styleHints();
}

void QGuiApplication_SetDesktopSettingsAware(bool on) {
	QGuiApplication::setDesktopSettingsAware(on);
}

bool QGuiApplication_DesktopSettingsAware() {
	return QGuiApplication::desktopSettingsAware();
}

QInputMethod* QGuiApplication_InputMethod() {
	return QGuiApplication::inputMethod();
}

void QGuiApplication_SetQuitOnLastWindowClosed(bool quit) {
	QGuiApplication::setQuitOnLastWindowClosed(quit);
}

bool QGuiApplication_QuitOnLastWindowClosed() {
	return QGuiApplication::quitOnLastWindowClosed();
}

uintptr_t QGuiApplication_ApplicationState() {
	Qt::ApplicationState ret = QGuiApplication::applicationState();
	return static_cast<uintptr_t>(ret);
}

void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(uintptr_t policy) {
	QGuiApplication::setHighDpiScaleFactorRoundingPolicy(static_cast<Qt::HighDpiScaleFactorRoundingPolicy>(policy));
}

uintptr_t QGuiApplication_HighDpiScaleFactorRoundingPolicy() {
	Qt::HighDpiScaleFactorRoundingPolicy ret = QGuiApplication::highDpiScaleFactorRoundingPolicy();
	return static_cast<uintptr_t>(ret);
}

int QGuiApplication_Exec() {
	return QGuiApplication::exec();
}

bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QGuiApplication_IsSessionRestored(QGuiApplication* self) {
	return const_cast<const QGuiApplication*>(self)->isSessionRestored();
}

void QGuiApplication_SessionId(QGuiApplication* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGuiApplication*>(self)->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_SessionKey(QGuiApplication* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QGuiApplication*>(self)->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

bool QGuiApplication_IsSavingSession(QGuiApplication* self) {
	return const_cast<const QGuiApplication*>(self)->isSavingSession();
}

bool QGuiApplication_IsFallbackSessionManagementEnabled() {
	return QGuiApplication::isFallbackSessionManagementEnabled();
}

void QGuiApplication_SetFallbackSessionManagementEnabled(bool fallbackSessionManagementEnabled) {
	QGuiApplication::setFallbackSessionManagementEnabled(fallbackSessionManagementEnabled);
}

void QGuiApplication_Sync() {
	QGuiApplication::sync();
}

void QGuiApplication_FontDatabaseChanged(QGuiApplication* self) {
	self->fontDatabaseChanged();
}

void QGuiApplication_connect_FontDatabaseChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
	self->screenAdded(screen);
}

void QGuiApplication_connect_ScreenAdded(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenAdded), self, [=](QScreen* screen) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
	self->screenRemoved(screen);
}

void QGuiApplication_connect_ScreenRemoved(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenRemoved), self, [=](QScreen* screen) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
	self->primaryScreenChanged(screen);
}

void QGuiApplication_connect_PrimaryScreenChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::primaryScreenChanged), self, [=](QScreen* screen) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
	self->lastWindowClosed();
}

void QGuiApplication_connect_LastWindowClosed(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
	self->focusObjectChanged(focusObject);
}

void QGuiApplication_connect_FocusObjectChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QObject*)>(&QGuiApplication::focusObjectChanged), self, [=](QObject* focusObject) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
	self->focusWindowChanged(focusWindow);
}

void QGuiApplication_connect_FocusWindowChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QWindow*)>(&QGuiApplication::focusWindowChanged), self, [=](QWindow* focusWindow) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, uintptr_t state) {
	self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_connect_ApplicationStateChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), self, [=](Qt::ApplicationState state) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, uintptr_t direction) {
	self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_connect_LayoutDirectionChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), self, [=](Qt::LayoutDirection direction) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->commitDataRequest(*sessionManager);
}

void QGuiApplication_connect_CommitDataRequest(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::commitDataRequest), self, [=](QSessionManager& sessionManager) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->saveStateRequest(*sessionManager);
}

void QGuiApplication_connect_SaveStateRequest(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::saveStateRequest), self, [=](QSessionManager& sessionManager) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_PaletteChanged(QGuiApplication* self, QPalette* pal) {
	self->paletteChanged(*pal);
}

void QGuiApplication_connect_PaletteChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QPalette&)>(&QGuiApplication::paletteChanged), self, [=](const QPalette& pal) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self) {
	self->applicationDisplayNameChanged();
}

void QGuiApplication_connect_ApplicationDisplayNameChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::applicationDisplayNameChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font) {
	self->fontChanged(*font);
}

void QGuiApplication_connect_FontChanged(QGuiApplication* self, void* slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QFont&)>(&QGuiApplication::fontChanged), self, [=](const QFont& font) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QGuiApplication_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QGuiApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QGuiApplication_Delete(QGuiApplication* self) {
	delete self;
}

