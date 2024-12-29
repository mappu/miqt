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

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQCoreApplication : public virtual QCoreApplication {
public:

	MiqtVirtualQCoreApplication(int& argc, char** argv): QCoreApplication(argc, argv) {};
	MiqtVirtualQCoreApplication(int& argc, char** argv, int param3): QCoreApplication(argc, argv, param3) {};

	virtual ~MiqtVirtualQCoreApplication() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Notify = 0;

	// Subclass to allow providing a Go implementation
	virtual bool notify(QObject* param1, QEvent* param2) override {
		if (handle__Notify == 0) {
			return QCoreApplication::notify(param1, param2);
		}
		
		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_Notify(this, handle__Notify, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Notify(QObject* param1, QEvent* param2) {

		return QCoreApplication::notify(param1, param2);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (handle__Event == 0) {
			return QCoreApplication::event(param1);
		}
		
		QEvent* sigval1 = param1;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_Event(this, handle__Event, sigval1);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_Event(QEvent* param1) {

		return QCoreApplication::event(param1);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QCoreApplication::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QCoreApplication_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* watched, QEvent* event) {

		return QCoreApplication::eventFilter(watched, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__TimerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__TimerEvent == 0) {
			QCoreApplication::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_TimerEvent(this, handle__TimerEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_TimerEvent(QTimerEvent* event) {

		QCoreApplication::timerEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ChildEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__ChildEvent == 0) {
			QCoreApplication::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_ChildEvent(this, handle__ChildEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ChildEvent(QChildEvent* event) {

		QCoreApplication::childEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CustomEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__CustomEvent == 0) {
			QCoreApplication::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QCoreApplication_CustomEvent(this, handle__CustomEvent, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_CustomEvent(QEvent* event) {

		QCoreApplication::customEvent(event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__ConnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__ConnectNotify == 0) {
			QCoreApplication::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCoreApplication_ConnectNotify(this, handle__ConnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_ConnectNotify(QMetaMethod* signal) {

		QCoreApplication::connectNotify(*signal);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DisconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__DisconnectNotify == 0) {
			QCoreApplication::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QCoreApplication_DisconnectNotify(this, handle__DisconnectNotify, sigval1);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DisconnectNotify(QMetaMethod* signal) {

		QCoreApplication::disconnectNotify(*signal);

	}

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

QMetaObject* QCoreApplication_MetaObject(const QCoreApplication* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCoreApplication_Metacast(QCoreApplication* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCoreApplication_Tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_TrUtf8(const char* s) {
	QString _ret = QCoreApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_Arguments() {
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

void QCoreApplication_SetAttribute(int attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_TestAttribute(int attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_SetOrganizationDomain(struct miqt_string orgDomain) {
	QString orgDomain_QString = QString::fromUtf8(orgDomain.data, orgDomain.len);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

struct miqt_string QCoreApplication_OrganizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_SetOrganizationName(struct miqt_string orgName) {
	QString orgName_QString = QString::fromUtf8(orgName.data, orgName.len);
	QCoreApplication::setOrganizationName(orgName_QString);
}

struct miqt_string QCoreApplication_OrganizationName() {
	QString _ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_SetApplicationName(struct miqt_string application) {
	QString application_QString = QString::fromUtf8(application.data, application.len);
	QCoreApplication::setApplicationName(application_QString);
}

struct miqt_string QCoreApplication_ApplicationName() {
	QString _ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_SetApplicationVersion(struct miqt_string version) {
	QString version_QString = QString::fromUtf8(version.data, version.len);
	QCoreApplication::setApplicationVersion(version_QString);
}

struct miqt_string QCoreApplication_ApplicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_SetSetuidAllowed(bool allow) {
	QCoreApplication::setSetuidAllowed(allow);
}

bool QCoreApplication_IsSetuidAllowed() {
	return QCoreApplication::isSetuidAllowed();
}

QCoreApplication* QCoreApplication_Instance() {
	return QCoreApplication::instance();
}

int QCoreApplication_Exec() {
	return QCoreApplication::exec();
}

void QCoreApplication_ProcessEvents() {
	QCoreApplication::processEvents();
}

void QCoreApplication_ProcessEvents2(int flags, int maxtime) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maxtime));
}

void QCoreApplication_Exit() {
	QCoreApplication::exit();
}

bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event) {
	return QCoreApplication::sendEvent(receiver, event);
}

void QCoreApplication_PostEvent(QObject* receiver, QEvent* event) {
	QCoreApplication::postEvent(receiver, event);
}

void QCoreApplication_SendPostedEvents() {
	QCoreApplication::sendPostedEvents();
}

void QCoreApplication_RemovePostedEvents(QObject* receiver) {
	QCoreApplication::removePostedEvents(receiver);
}

bool QCoreApplication_HasPendingEvents() {
	return QCoreApplication::hasPendingEvents();
}

QAbstractEventDispatcher* QCoreApplication_EventDispatcher() {
	return QCoreApplication::eventDispatcher();
}

void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher) {
	QCoreApplication::setEventDispatcher(eventDispatcher);
}

bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2) {
	return self->notify(param1, param2);
}

bool QCoreApplication_StartingUp() {
	return QCoreApplication::startingUp();
}

bool QCoreApplication_ClosingDown() {
	return QCoreApplication::closingDown();
}

struct miqt_string QCoreApplication_ApplicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_ApplicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QCoreApplication_ApplicationPid() {
	qint64 _ret = QCoreApplication::applicationPid();
	return static_cast<long long>(_ret);
}

void QCoreApplication_SetLibraryPaths(struct miqt_array /* of struct miqt_string */  libraryPaths) {
	QStringList libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths.len);
	struct miqt_string* libraryPaths_arr = static_cast<struct miqt_string*>(libraryPaths.data);
	for(size_t i = 0; i < libraryPaths.len; ++i) {
		QString libraryPaths_arr_i_QString = QString::fromUtf8(libraryPaths_arr[i].data, libraryPaths_arr[i].len);
		libraryPaths_QList.push_back(libraryPaths_arr_i_QString);
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

struct miqt_array /* of struct miqt_string */  QCoreApplication_LibraryPaths() {
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

void QCoreApplication_AddLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_RemoveLibraryPath(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_InstallTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_RemoveTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

struct miqt_string QCoreApplication_Translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_Flush() {
	QCoreApplication::flush();
}

void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->installNativeEventFilter(filterObj);
}

void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj) {
	self->removeNativeEventFilter(filterObj);
}

bool QCoreApplication_IsQuitLockEnabled() {
	return QCoreApplication::isQuitLockEnabled();
}

void QCoreApplication_SetQuitLockEnabled(bool enabled) {
	QCoreApplication::setQuitLockEnabled(enabled);
}

void QCoreApplication_Quit() {
	QCoreApplication::quit();
}

void QCoreApplication_OrganizationNameChanged(QCoreApplication* self) {
	self->organizationNameChanged();
}

void QCoreApplication_connect_OrganizationNameChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_OrganizationNameChanged(slot);
	});
}

void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_OrganizationDomainChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_OrganizationDomainChanged(slot);
	});
}

void QCoreApplication_ApplicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_ApplicationNameChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_ApplicationNameChanged(slot);
	});
}

void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_ApplicationVersionChanged(QCoreApplication* self, intptr_t slot) {
	MiqtVirtualQCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_ApplicationVersionChanged(slot);
	});
}

struct miqt_string QCoreApplication_Tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_TrUtf82(const char* s, const char* c) {
	QString _ret = QCoreApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_SetAttribute2(int attribute, bool on) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute), on);
}

void QCoreApplication_ProcessEvents1(int flags) {
	QCoreApplication::processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QCoreApplication_Exit1(int retcode) {
	QCoreApplication::exit(static_cast<int>(retcode));
}

void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority) {
	QCoreApplication::postEvent(receiver, event, static_cast<int>(priority));
}

void QCoreApplication_SendPostedEvents1(QObject* receiver) {
	QCoreApplication::sendPostedEvents(receiver);
}

void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type) {
	QCoreApplication::sendPostedEvents(receiver, static_cast<int>(event_type));
}

void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType) {
	QCoreApplication::removePostedEvents(receiver, static_cast<int>(eventType));
}

struct miqt_string QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCoreApplication_override_virtual_Notify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__Notify = slot;
}

bool QCoreApplication_virtualbase_Notify(void* self, QObject* param1, QEvent* param2) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_Notify(param1, param2);
}

void QCoreApplication_override_virtual_Event(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__Event = slot;
}

bool QCoreApplication_virtualbase_Event(void* self, QEvent* param1) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_Event(param1);
}

void QCoreApplication_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__EventFilter = slot;
}

bool QCoreApplication_virtualbase_EventFilter(void* self, QObject* watched, QEvent* event) {
	return ( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_EventFilter(watched, event);
}

void QCoreApplication_override_virtual_TimerEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__TimerEvent = slot;
}

void QCoreApplication_virtualbase_TimerEvent(void* self, QTimerEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_TimerEvent(event);
}

void QCoreApplication_override_virtual_ChildEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__ChildEvent = slot;
}

void QCoreApplication_virtualbase_ChildEvent(void* self, QChildEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_ChildEvent(event);
}

void QCoreApplication_override_virtual_CustomEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__CustomEvent = slot;
}

void QCoreApplication_virtualbase_CustomEvent(void* self, QEvent* event) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_CustomEvent(event);
}

void QCoreApplication_override_virtual_ConnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__ConnectNotify = slot;
}

void QCoreApplication_virtualbase_ConnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_ConnectNotify(signal);
}

void QCoreApplication_override_virtual_DisconnectNotify(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQCoreApplication*>( (QCoreApplication*)(self) )->handle__DisconnectNotify = slot;
}

void QCoreApplication_virtualbase_DisconnectNotify(void* self, QMetaMethod* signal) {
	( (MiqtVirtualQCoreApplication*)(self) )->virtualbase_DisconnectNotify(signal);
}

void QCoreApplication_Delete(QCoreApplication* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQCoreApplication*>( self );
	} else {
		delete self;
	}
}

