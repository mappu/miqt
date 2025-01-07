#include <QClipboard>
#include <QCoreApplication>
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

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QGuiApplication_FontDatabaseChanged(intptr_t);
void miqt_exec_callback_QGuiApplication_ScreenAdded(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_ScreenRemoved(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(intptr_t, QScreen*);
void miqt_exec_callback_QGuiApplication_LastWindowClosed(intptr_t);
void miqt_exec_callback_QGuiApplication_FocusObjectChanged(intptr_t, QObject*);
void miqt_exec_callback_QGuiApplication_FocusWindowChanged(intptr_t, QWindow*);
void miqt_exec_callback_QGuiApplication_ApplicationStateChanged(intptr_t, int);
void miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(intptr_t, int);
void miqt_exec_callback_QGuiApplication_CommitDataRequest(intptr_t, QSessionManager*);
void miqt_exec_callback_QGuiApplication_SaveStateRequest(intptr_t, QSessionManager*);
void miqt_exec_callback_QGuiApplication_PaletteChanged(intptr_t, QPalette*);
void miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(intptr_t);
void miqt_exec_callback_QGuiApplication_FontChanged(intptr_t, QFont*);
bool miqt_exec_callback_QGuiApplication_Notify(void*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QGuiApplication_Event(void*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGuiApplication : public virtual QGuiApplication {
public:

	MiqtVirtualQGuiApplication(int& argc, char** argv): QGuiApplication(argc, argv) {};
	MiqtVirtualQGuiApplication(int& argc, char** argv, int param3): QGuiApplication(argc, argv, param3) {};

	virtual ~MiqtVirtualQGuiApplication() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__Notify == 0) {
			return QGuiApplication::notify(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QGuiApplication_Notify(this, handle__Notify, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Notify(QObject* param1, QEvent* param2) {

		return QGuiApplication::notify(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QGuiApplication::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QGuiApplication_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QGuiApplication::event(param1);

	}

};

QGuiApplication* QGuiApplication_new(int* argc, char** argv) {
	return new MiqtVirtualQGuiApplication(static_cast<int&>(*argc), argv);
}

QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3) {
	return new MiqtVirtualQGuiApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

void QGuiApplication_virtbase(QGuiApplication* src, QCoreApplication** outptr_QCoreApplication) {
	*outptr_QCoreApplication = static_cast<QCoreApplication*>(src);
}

QMetaObject* QGuiApplication_MetaObject(const QGuiApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGuiApplication_Metacast(QGuiApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGuiApplication_Tr(const char* s) {
	QString _ret = QGuiApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_TrUtf8(const char* s) {
	QString _ret = QGuiApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGuiApplication_SetApplicationDisplayName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QGuiApplication::setApplicationDisplayName(name_QString);
}

struct miqt_string QGuiApplication_ApplicationDisplayName() {
	QString _ret = QGuiApplication::applicationDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGuiApplication_SetDesktopFileName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QGuiApplication::setDesktopFileName(name_QString);
}

struct miqt_string QGuiApplication_DesktopFileName() {
	QString _ret = QGuiApplication::desktopFileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QWindow* */  QGuiApplication_AllWindows() {
	QWindowList _ret = QGuiApplication::allWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QWindow* */  QGuiApplication_TopLevelWindows() {
	QWindowList _ret = QGuiApplication::topLevelWindows();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWindow** _arr = static_cast<QWindow**>(malloc(sizeof(QWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

struct miqt_string QGuiApplication_PlatformName() {
	QString _ret = QGuiApplication::platformName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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

struct miqt_array /* of QScreen* */  QGuiApplication_Screens() {
	QList<QScreen *> _ret = QGuiApplication::screens();
	// Convert QList<> from C++ memory to manually-managed C memory
	QScreen** _arr = static_cast<QScreen**>(malloc(sizeof(QScreen*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
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

struct miqt_string QGuiApplication_SessionId(const QGuiApplication* self) {
	QString _ret = self->sessionId();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_SessionKey(const QGuiApplication* self) {
	QString _ret = self->sessionKey();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
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
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::fontDatabaseChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_FontDatabaseChanged(slot);
	});
}

void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen) {
	self->screenAdded(screen);
}

void QGuiApplication_connect_ScreenAdded(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenAdded), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_ScreenAdded(slot, sigval1);
	});
}

void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen) {
	self->screenRemoved(screen);
}

void QGuiApplication_connect_ScreenRemoved(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::screenRemoved), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_ScreenRemoved(slot, sigval1);
	});
}

void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen) {
	self->primaryScreenChanged(screen);
}

void QGuiApplication_connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QScreen*)>(&QGuiApplication::primaryScreenChanged), self, [=](QScreen* screen) {
		QScreen* sigval1 = screen;
		miqt_exec_callback_QGuiApplication_PrimaryScreenChanged(slot, sigval1);
	});
}

void QGuiApplication_LastWindowClosed(QGuiApplication* self) {
	self->lastWindowClosed();
}

void QGuiApplication_connect_LastWindowClosed(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::lastWindowClosed), self, [=]() {
		miqt_exec_callback_QGuiApplication_LastWindowClosed(slot);
	});
}

void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject) {
	self->focusObjectChanged(focusObject);
}

void QGuiApplication_connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QObject*)>(&QGuiApplication::focusObjectChanged), self, [=](QObject* focusObject) {
		QObject* sigval1 = focusObject;
		miqt_exec_callback_QGuiApplication_FocusObjectChanged(slot, sigval1);
	});
}

void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow) {
	self->focusWindowChanged(focusWindow);
}

void QGuiApplication_connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QWindow*)>(&QGuiApplication::focusWindowChanged), self, [=](QWindow* focusWindow) {
		QWindow* sigval1 = focusWindow;
		miqt_exec_callback_QGuiApplication_FocusWindowChanged(slot, sigval1);
	});
}

void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state) {
	self->applicationStateChanged(static_cast<Qt::ApplicationState>(state));
}

void QGuiApplication_connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::ApplicationState)>(&QGuiApplication::applicationStateChanged), self, [=](Qt::ApplicationState state) {
		Qt::ApplicationState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QGuiApplication_ApplicationStateChanged(slot, sigval1);
	});
}

void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction) {
	self->layoutDirectionChanged(static_cast<Qt::LayoutDirection>(direction));
}

void QGuiApplication_connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(Qt::LayoutDirection)>(&QGuiApplication::layoutDirectionChanged), self, [=](Qt::LayoutDirection direction) {
		Qt::LayoutDirection direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QGuiApplication_LayoutDirectionChanged(slot, sigval1);
	});
}

void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager) {
	self->commitDataRequest(*sessionManager);
}

void QGuiApplication_connect_CommitDataRequest(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::commitDataRequest), self, [=](QSessionManager& sessionManager) {
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
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(QSessionManager&)>(&QGuiApplication::saveStateRequest), self, [=](QSessionManager& sessionManager) {
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
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QPalette&)>(&QGuiApplication::paletteChanged), self, [=](const QPalette& pal) {
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
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)()>(&QGuiApplication::applicationDisplayNameChanged), self, [=]() {
		miqt_exec_callback_QGuiApplication_ApplicationDisplayNameChanged(slot);
	});
}

void QGuiApplication_FontChanged(QGuiApplication* self, QFont* font) {
	self->fontChanged(*font);
}

void QGuiApplication_connect_FontChanged(QGuiApplication* self, intptr_t slot) {
	MiqtVirtualQGuiApplication::connect(self, static_cast<void (QGuiApplication::*)(const QFont&)>(&QGuiApplication::fontChanged), self, [=](const QFont& font) {
		const QFont& font_ret = font;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&font_ret);
		miqt_exec_callback_QGuiApplication_FontChanged(slot, sigval1);
	});
}

struct miqt_string QGuiApplication_Tr2(const char* s, const char* c) {
	QString _ret = QGuiApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_TrUtf82(const char* s, const char* c) {
	QString _ret = QGuiApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGuiApplication_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QGuiApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGuiApplication_override_virtual_Notify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) )->handle__Notify = slot;
}

bool QGuiApplication_virtualbase_Notify(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQGuiApplication*)(self) )->virtualbase_Notify(param1, param2);
}

void QGuiApplication_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQGuiApplication*>( (QGuiApplication*)(self) )->handle__Event = slot;
}

bool QGuiApplication_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQGuiApplication*)(self) )->virtualbase_Event(param1);
}

void QGuiApplication_Delete(QGuiApplication* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQGuiApplication*>( self );
	} else {
		delete self;
	}
}

