#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QChildEvent>
#include <QCoreApplication>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QTranslator>
#include <qcoreapplication.h>
#include "gen_qcoreapplication.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QCoreApplication_organizationNameChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_organizationDomainChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_applicationNameChanged(intptr_t);
void miqt_exec_callback_QCoreApplication_applicationVersionChanged(intptr_t);
bool miqt_exec_callback_QCoreApplication_notify(QCoreApplication*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QCoreApplication_event(QCoreApplication*, intptr_t, QEvent*);
bool miqt_exec_callback_QCoreApplication_eventFilter(QCoreApplication*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCoreApplication_timerEvent(QCoreApplication*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCoreApplication_childEvent(QCoreApplication*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCoreApplication_customEvent(QCoreApplication*, intptr_t, QEvent*);
void miqt_exec_callback_QCoreApplication_connectNotify(QCoreApplication*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCoreApplication_disconnectNotify(QCoreApplication*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCoreApplication final : public QCoreApplication {
public:

	MiqtVirtualQCoreApplication(int& argc, char** argv): QCoreApplication(argc, argv) {};
	MiqtVirtualQCoreApplication(int& argc, char** argv, int param3): QCoreApplication(argc, argv, param3) {};

	virtual ~MiqtVirtualQCoreApplication() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__notify == 0) {
			return QCoreApplication::notify(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_notify(this, handle__notify, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_notify(QObject* param1, QEvent* param2) {

		return QCoreApplication::notify(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__event == 0) {
			return QCoreApplication::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_event(QEvent* param1) {

		return QCoreApplication::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QCoreApplication::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_eventFilter(QObject* watched, QEvent* event) {

		return QCoreApplication::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QCoreApplication::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_timerEvent(QTimerEvent* event) {

		QCoreApplication::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QCoreApplication::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_childEvent(this, handle__childEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_childEvent(QChildEvent* event) {

		QCoreApplication::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QCoreApplication::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_customEvent(this, handle__customEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_customEvent(QEvent* event) {

		QCoreApplication::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QCoreApplication::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCoreApplication_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_connectNotify(QMetaMethod* signal) {

		QCoreApplication::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QCoreApplication::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCoreApplication_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_disconnectNotify(QMetaMethod* signal) {

		QCoreApplication::disconnectNotify(*signal);

	}

	// Wrappers to allow calling protected methods:
	friend QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
	return new MiqtVirtualQCoreApplication(static_cast<int&>(*argc), argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
	return new MiqtVirtualQCoreApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

void QCoreApplication_virtbase(QCoreApplication* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QCoreApplication_metaObject(const QCoreApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCoreApplication_metacast(QCoreApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCoreApplication_tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf8(const char* s) {
	QString _ret = QCoreApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_arguments() {
	QStringList _ret = QCoreApplication::arguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_setAttribute(int attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_testAttribute(int attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_setOrganizationDomain(struct miqt_string orgDomain) {
	QString orgDomain_QString = QString::fromUtf8(orgDomain.data, orgDomain.len);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

struct miqt_string QCoreApplication_organizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setOrganizationName(struct miqt_string orgName) {
	QString orgName_QString = QString::fromUtf8(orgName.data, orgName.len);
	QCoreApplication::setOrganizationName(orgName_QString);
}

struct miqt_string QCoreApplication_organizationName() {
	QString _ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationName(struct miqt_string application) {
	QString application_QString = QString::fromUtf8(application.data, application.len);
	QCoreApplication::setApplicationName(application_QString);
}

struct miqt_string QCoreApplication_applicationName() {
	QString _ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setApplicationVersion(struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	QCoreApplication::setApplicationVersion(version_QString);
}

struct miqt_string QCoreApplication_applicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setSetuidAllowed(bool allow) {
	QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_isSetuidAllowed() {
	return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_instance() {
	return QCoreApplication::instance();
}

int QCoreApplication_exec() {
	return QCoreApplication::exec();
}

void QCoreApplication_processEvents() {
	QCoreApplication::processEvents();
}

void QCoreApplication_processEvents2(int flags, int maxtime) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maxtime));
}

void QCoreApplication_exit() {
	QCoreApplication::exit();
}

bool QCoreApplication_sendEvent(QObject* receiver, QEvent* event) {
	return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_postEvent(QObject* receiver, QEvent* event) {
	QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_sendPostedEvents() {
	QCoreApplication::sendPostedEvents();
}

void QCoreApplication_removePostedEvents(QObject* receiver) {
	QCoreApplication::removePostedEvents(receiver);
}

bool QCoreApplication_hasPendingEvents() {
	return QCoreApplication::hasPendingEvents();
}

QAbstractEventDispatcher* QCoreApplication_eventDispatcher() {
	return QCoreApplication::eventDispatcher();
}

void QCoreApplication_setEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
	QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QCoreApplication_startingUp() {
	return QCoreApplication::startingUp();
}

bool QCoreApplication_closingDown() {
	return QCoreApplication::closingDown();
}

struct miqt_string QCoreApplication_applicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_applicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QCoreApplication_applicationPid() {
	qint64 _ret = QCoreApplication::applicationPid();
	return static_cast<long long>(_ret);
}

void QCoreApplication_setLibraryPaths(struct miqt_array /* of struct miqt_string */  libraryPaths) {
	QStringList libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths.len);
	struct miqt_string* libraryPaths_arr = static_cast<struct miqt_string*>(libraryPaths.data);
	for(size_t i = 0; i < libraryPaths.len; ++i) {
		QString libraryPaths_arr_i_QString = QString::fromUtf8(libraryPaths_arr[i].data, libraryPaths_arr[i].len);
		libraryPaths_QList.push_back(libraryPaths_arr_i_QString);
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_libraryPaths() {
	QStringList _ret = QCoreApplication::libraryPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_addLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_removeLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_installTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_removeTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

struct miqt_string QCoreApplication_translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_flush() {
	QCoreApplication::flush();
}

void QCoreApplication_installNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QCoreApplication_removeNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QCoreApplication_isQuitLockEnabled() {
	return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_setQuitLockEnabled(bool enabled) {
	QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_quit() {
	QCoreApplication::quit();
}

void QCoreApplication_organizationNameChanged(QCoreApplication* self) {
	self->organizationNameChanged();
}

void QCoreApplication_connect_organizationNameChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_organizationNameChanged(slot);
	});
}

void QCoreApplication_organizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_organizationDomainChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_organizationDomainChanged(slot);
	});
}

void QCoreApplication_applicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_applicationNameChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_applicationNameChanged(slot);
	});
}

void QCoreApplication_applicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_applicationVersionChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_applicationVersionChanged(slot);
	});
}

struct miqt_string QCoreApplication_tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf82(const char* s, const char* c) {
	QString _ret = QCoreApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_setAttribute2(int attribute, bool on) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_processEvents1(int flags) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QCoreApplication_exit1(int retcode) {
	QCoreApplication::exit(static_cast<int>(retcode));
}

void QCoreApplication_postEvent3(QObject* receiver, QEvent* event, int priority) {
	QCoreApplication::postEvent(receiver, event, static_cast<int>(priority));
}

void QCoreApplication_sendPostedEvents1(QObject* receiver) {
	QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_sendPostedEvents2(QObject* receiver, int event_type) {
	QCoreApplication::sendPostedEvents(receiver, static_cast<int>(event_type));
}

void QCoreApplication_removePostedEvents2(QObject* receiver, int eventType) {
	QCoreApplication::removePostedEvents(receiver, static_cast<int>(eventType));
}

struct miqt_string QCoreApplication_translate3(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_translate4(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCoreApplication_override_virtual_notify(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__notify = slot;
	return true;
}

bool QCoreApplication_virtualbase_notify(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_notify(param1, param2);
}

bool QCoreApplication_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QCoreApplication_virtualbase_event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_event(param1);
}

bool QCoreApplication_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QCoreApplication_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_eventFilter(watched, event);
}

bool QCoreApplication_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QCoreApplication_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_timerEvent(event);
}

bool QCoreApplication_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QCoreApplication_virtualbase_childEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_childEvent(event);
}

bool QCoreApplication_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QCoreApplication_virtualbase_customEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_customEvent(event);
}

bool QCoreApplication_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QCoreApplication_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_connectNotify(signal);
}

bool QCoreApplication_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QCoreApplication_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_disconnectNotify(signal);
}

QObject* QCoreApplication_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QCoreApplication_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QCoreApplication_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QCoreApplication_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCoreApplication* self_cast = dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QCoreApplication_delete(QCoreApplication* self) {
	delete self;
}

