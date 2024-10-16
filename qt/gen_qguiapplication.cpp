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
#include <qguiapplication.h>
#include "gen_qguiapplication.h"
#include "_cgo_export.h"

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
	return new QGuiApplication(static_cast<int&>(*argc), argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
	return new QGuiApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QGuiApplication_MetaObject(const QGuiApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGuiApplication_Metacast(QGuiApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string* QGuiApplication_Tr(const char* s) {
	QString _ret = QGuiApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGuiApplication_TrUtf8(const char* s) {
	QString _ret = QGuiApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGuiApplication_SetApplicationDisplayName(struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QGuiApplication::setApplicationDisplayName(name_QString);
}

struct miqt_string* QGuiApplication_ApplicationDisplayName() {
	QString _ret = QGuiApplication::applicationDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGuiApplication_SetDesktopFileName(struct miqt_string* name) {
	QString name_QString = QString::fromUtf8(&name->data, name->len);
	QGuiApplication::setDesktopFileName(name_QString);
}

struct miqt_string* QGuiApplication_DesktopFileName() {
	QString _ret = QGuiApplication::desktopFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QGuiApplication_AllWindows() {
	QWindowList _ret = QGuiApplication::allWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array* QGuiApplication_TopLevelWindows() {
	QWindowList _ret = QGuiApplication::topLevelWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QWindow* QGuiApplication_TopLevelAt(QPoint* pos) {
	return QGuiApplication::topLevelAt(*pos);
}

void QGuiApplication_SetWindowIcon(QIcon* icon) {
	QGuiApplication::setWindowIcon(*icon);
}

QIcon* QGuiApplication_WindowIcon() {
	return new QIcon(QGuiApplication::windowIcon());
}

struct miqt_string* QGuiApplication_PlatformName() {
	QString _ret = QGuiApplication::platformName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_array* QGuiApplication_Screens() {
	QList<QScreen *> _ret = QGuiApplication::screens();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

QScreen* QGuiApplication_ScreenAt(QPoint* point) {
	return QGuiApplication::screenAt(*point);
}

double QGuiApplication_DevicePixelRatio(const QGuiApplication* self) {
	qreal _ret = self->devicePixelRatio();
	return static_cast<double>(_ret);
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
	return new QFont(QGuiApplication::font());
}

void QGuiApplication_SetFont(QFont* font) {
	QGuiApplication::setFont(*font);
}

QClipboard* QGuiApplication_Clipboard() {
	return QGuiApplication::clipboard();
}

QPalette* QGuiApplication_Palette() {
	return new QPalette(QGuiApplication::palette());
}

void QGuiApplication_SetPalette(QPalette* pal) {
	QGuiApplication::setPalette(*pal);
}

int QGuiApplication_KeyboardModifiers() {
	Qt::KeyboardModifiers _ret = QGuiApplication::keyboardModifiers();
	return static_cast<int>(_ret);
}

int QGuiApplication_QueryKeyboardModifiers() {
	Qt::KeyboardModifiers _ret = QGuiApplication::queryKeyboardModifiers();
	return static_cast<int>(_ret);
}

int QGuiApplication_MouseButtons() {
	Qt::MouseButtons _ret = QGuiApplication::mouseButtons();
	return static_cast<int>(_ret);
}

void QGuiApplication_SetLayoutDirection(int direction) {
	QGuiApplication::setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

int QGuiApplication_LayoutDirection() {
	Qt::LayoutDirection _ret = QGuiApplication::layoutDirection();
	return static_cast<int>(_ret);
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

int QGuiApplication_ApplicationState() {
	Qt::ApplicationState _ret = QGuiApplication::applicationState();
	return static_cast<int>(_ret);
}

void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy) {
	QGuiApplication::setHighDpiScaleFactorRoundingPolicy(static_cast<Qt::HighDpiScaleFactorRoundingPolicy>(policy));
}

int QGuiApplication_HighDpiScaleFactorRoundingPolicy() {
	Qt::HighDpiScaleFactorRoundingPolicy _ret = QGuiApplication::highDpiScaleFactorRoundingPolicy();
	return static_cast<int>(_ret);
}

int QGuiApplication_Exec() {
	return QGuiApplication::exec();
}

bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QGuiApplication_IsSessionRestored(const QGuiApplication* self) {
	return self->isSessionRestored();
}

struct miqt_string* QGuiApplication_SessionId(const QGuiApplication* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGuiApplication_SessionKey(const QGuiApplication* self) {
	QString _ret = self->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

bool QGuiApplication_IsSavingSession(const QGuiApplication* self) {
	return self->isSavingSession();
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

void QGuiApplication_connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_FontDatabaseChanged(slot);
	});
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
	self->screenAdded(screen);
}

void QGuiApplication_connect_ScreenAdded(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenAdded), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_ScreenAdded(slot, sigval1);
	});
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
	self->screenRemoved(screen);
}

void QGuiApplication_connect_ScreenRemoved(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenRemoved), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_ScreenRemoved(slot, sigval1);
	});
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
	self->primaryScreenChanged(screen);
}

void QGuiApplication_connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::primaryScreenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(slot, sigval1);
	});
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
	self->lastWindowClosed();
}

void QGuiApplication_connect_LastWindowClosed(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), self, [=]() {
		miqt_exec_callback_QGuiApplication_LastWindowClosed(slot);
	});
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
	self->focusObjectChanged(focusObject);
}

void QGuiApplication_connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QObject*)>(&QGuiApplication::focusObjectChanged), self, [=](QObject* focusObject) {
		QObject* sigval1 = focusObject;
		miqt_exec_callback_QGuiApplication_FocusObjectChanged(slot, sigval1);
	});
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
	self->focusWindowChanged(focusWindow);
}

void QGuiApplication_connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QWindow*)>(&QGuiApplication::focusWindowChanged), self, [=](QWindow* focusWindow) {
		QWindow* sigval1 = focusWindow;
		miqt_exec_callback_QGuiApplication_FocusWindowChanged(slot, sigval1);
	});
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state) {
	self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), self, [=](Qt::ApplicationState state) {
		Qt::ApplicationState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QGuiApplication_ApplicationStateChanged(slot, sigval1);
	});
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction) {
	self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), self, [=](Qt::LayoutDirection direction) {
		Qt::LayoutDirection direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(slot, sigval1);
	});
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->commitDataRequest(*sessionManager);
}

void QGuiApplication_connect_CommitDataRequest(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::commitDataRequest), self, [=](QSessionManager& sessionManager) {
		QSessionManager& sessionManager_ret = sessionManager;
		// Cast returned reference into pointer
		QSessionManager* sigval1 = &sessionManager_ret;
		miqt_exec_callback_QGuiApplication_CommitDataRequest(slot, sigval1);
	});
}

void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->saveStateRequest(*sessionManager);
}

void QGuiApplication_connect_SaveStateRequest(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::saveStateRequest), self, [=](QSessionManager& sessionManager) {
		QSessionManager& sessionManager_ret = sessionManager;
		// Cast returned reference into pointer
		QSessionManager* sigval1 = &sessionManager_ret;
		miqt_exec_callback_QGuiApplication_SaveStateRequest(slot, sigval1);
	});
}

void QGuiApplication_PaletteChanged(QGuiApplication* self, QPalette* pal) {
	self->paletteChanged(*pal);
}

void QGuiApplication_connect_PaletteChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QPalette&)>(&QGuiApplication::paletteChanged), self, [=](const QPalette& pal) {
		const QPalette& pal_ret = pal;
		// Cast returned reference into pointer
		QPalette* sigval1 = const_cast<QPalette*>(&pal_ret);
		miqt_exec_callback_QGuiApplication_PaletteChanged(slot, sigval1);
	});
}

void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self) {
	self->applicationDisplayNameChanged();
}

void QGuiApplication_connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::applicationDisplayNameChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(slot);
	});
}

void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font) {
	self->fontChanged(*font);
}

void QGuiApplication_connect_FontChanged(QGuiApplication* self, intptr_t slot) {
	QGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QFont&)>(&QGuiApplication::fontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QGuiApplication_FontChanged(slot, sigval1);
	});
}

struct miqt_string* QGuiApplication_Tr2(const char* s, const char* c) {
	QString _ret = QGuiApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGuiApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGuiApplication_TrUtf82(const char* s, const char* c) {
	QString _ret = QGuiApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QGuiApplication_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QGuiApplication_Delete(QGuiApplication* self) {
	delete self;
}

