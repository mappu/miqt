#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QCoreApplication>
#include <QEvent>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTranslator>
#include "qcoreapplication.h"
#include "gen_qcoreapplication.h"
#include "_cgo_export.h"

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
	return new QCoreApplication(static_cast<int&>(*argc), argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
	return new QCoreApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QCoreApplication_MetaObject(const QCoreApplication* self) {
	return (QMetaObject*) self->metaObject();
}

struct miqt_string* QCoreApplication_Tr(const char* s) {
	QString _ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_TrUtf8(const char* s) {
	QString _ret = QCoreApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_array* QCoreApplication_Arguments() {
	QStringList _ret = QCoreApplication::arguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_SetAttribute(uintptr_t attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_TestAttribute(uintptr_t attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_SetOrganizationDomain(struct miqt_string* orgDomain) {
	QString orgDomain_QString = QString::fromUtf8(&orgDomain->data, orgDomain->len);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

struct miqt_string* QCoreApplication_OrganizationDomain() {
	QString _ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCoreApplication_SetOrganizationName(struct miqt_string* orgName) {
	QString orgName_QString = QString::fromUtf8(&orgName->data, orgName->len);
	QCoreApplication::setOrganizationName(orgName_QString);
}

struct miqt_string* QCoreApplication_OrganizationName() {
	QString _ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCoreApplication_SetApplicationName(struct miqt_string* application) {
	QString application_QString = QString::fromUtf8(&application->data, application->len);
	QCoreApplication::setApplicationName(application_QString);
}

struct miqt_string* QCoreApplication_ApplicationName() {
	QString _ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCoreApplication_SetApplicationVersion(struct miqt_string* version) {
	QString version_QString = QString::fromUtf8(&version->data, version->len);
	QCoreApplication::setApplicationVersion(version_QString);
}

struct miqt_string* QCoreApplication_ApplicationVersion() {
	QString _ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

struct miqt_string* QCoreApplication_ApplicationDirPath() {
	QString _ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_ApplicationFilePath() {
	QString _ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

long long QCoreApplication_ApplicationPid() {
	return QCoreApplication::applicationPid();
}

void QCoreApplication_SetLibraryPaths(struct miqt_array* /* of struct miqt_string* */ libraryPaths) {
	QList<QString> libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths->len);
	miqt_string** libraryPaths_arr = static_cast<miqt_string**>(libraryPaths->data);
	for(size_t i = 0; i < libraryPaths->len; ++i) {
		libraryPaths_QList.push_back(QString::fromUtf8(& libraryPaths_arr[i]->data, libraryPaths_arr[i]->len));
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

struct miqt_array* QCoreApplication_LibraryPaths() {
	QStringList _ret = QCoreApplication::libraryPaths();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string** _arr = static_cast<struct miqt_string**>(malloc(sizeof(struct miqt_string*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		_arr[i] = miqt_strdup(_lv_b.data(), _lv_b.length());
	}
	struct miqt_array* _out = static_cast<struct miqt_array*>(malloc(sizeof(struct miqt_array)));
	_out->len = _ret.length();
	_out->data = static_cast<void*>(_arr);
	return _out;
}

void QCoreApplication_AddLibraryPath(struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_RemoveLibraryPath(struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_InstallTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_RemoveTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

struct miqt_string* QCoreApplication_Translate(const char* context, const char* key) {
	QString _ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
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

void QCoreApplication_connect_OrganizationNameChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_OrganizationNameChanged(slot);
	});
}

void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_OrganizationDomainChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_OrganizationDomainChanged(slot);
	});
}

void QCoreApplication_ApplicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_ApplicationNameChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_ApplicationNameChanged(slot);
	});
}

void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_ApplicationVersionChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, [=]() {
		miqt_exec_callback_QCoreApplication_ApplicationVersionChanged(slot);
	});
}

struct miqt_string* QCoreApplication_Tr2(const char* s, const char* c) {
	QString _ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_TrUtf82(const char* s, const char* c) {
	QString _ret = QCoreApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCoreApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCoreApplication_SetAttribute2(uintptr_t attribute, bool on) {
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

struct miqt_string* QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n) {
	QString _ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCoreApplication_Delete(QCoreApplication* self) {
	delete self;
}

