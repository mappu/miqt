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

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCoreApplication* QCoreApplication_new(int* argc, char** argv) {
	return new QCoreApplication(static_cast<int&>(*argc), argv);
}

QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3) {
	return new QCoreApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QCoreApplication_MetaObject(QCoreApplication* self) {
	return (QMetaObject*) const_cast<const QCoreApplication*>(self)->metaObject();
}

void QCoreApplication_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_Arguments(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QCoreApplication::arguments();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QCoreApplication_SetAttribute(uintptr_t attribute) {
	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

bool QCoreApplication_TestAttribute(uintptr_t attribute) {
	return QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(attribute));
}

void QCoreApplication_SetOrganizationDomain(const char* orgDomain, size_t orgDomain_Strlen) {
	QString orgDomain_QString = QString::fromUtf8(orgDomain, orgDomain_Strlen);
	QCoreApplication::setOrganizationDomain(orgDomain_QString);
}

void QCoreApplication_OrganizationDomain(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::organizationDomain();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_SetOrganizationName(const char* orgName, size_t orgName_Strlen) {
	QString orgName_QString = QString::fromUtf8(orgName, orgName_Strlen);
	QCoreApplication::setOrganizationName(orgName_QString);
}

void QCoreApplication_OrganizationName(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::organizationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_SetApplicationName(const char* application, size_t application_Strlen) {
	QString application_QString = QString::fromUtf8(application, application_Strlen);
	QCoreApplication::setApplicationName(application_QString);
}

void QCoreApplication_ApplicationName(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::applicationName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_SetApplicationVersion(const char* version, size_t version_Strlen) {
	QString version_QString = QString::fromUtf8(version, version_Strlen);
	QCoreApplication::setApplicationVersion(version_QString);
}

void QCoreApplication_ApplicationVersion(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::applicationVersion();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QCoreApplication_ApplicationDirPath(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::applicationDirPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_ApplicationFilePath(char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::applicationFilePath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

long long QCoreApplication_ApplicationPid() {
	return QCoreApplication::applicationPid();
}

void QCoreApplication_SetLibraryPaths(char** libraryPaths, uint64_t* libraryPaths_Lengths, size_t libraryPaths_len) {
	QList<QString> libraryPaths_QList;
	libraryPaths_QList.reserve(libraryPaths_len);
	for(size_t i = 0; i < libraryPaths_len; ++i) {
		libraryPaths_QList.push_back(QString::fromUtf8(libraryPaths[i], libraryPaths_Lengths[i]));
	}
	QCoreApplication::setLibraryPaths(libraryPaths_QList);
}

void QCoreApplication_LibraryPaths(char*** _out, int** _out_Lengths, size_t* _out_len) {
	QStringList ret = QCoreApplication::libraryPaths();
	// Convert QStringList from C++ memory to manually-managed C memory
	char** __out = static_cast<char**>(malloc(sizeof(char*) * ret.length()));
	int* __out_Lengths = static_cast<int*>(malloc(sizeof(int) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray b = ret[i].toUtf8();
		__out[i] = static_cast<char*>(malloc(b.length()));
		memcpy(__out[i], b.data(), b.length());
		__out_Lengths[i] = b.length();
	}
	*_out = __out;
	*_out_Lengths = __out_Lengths;
	*_out_len = ret.length();
}

void QCoreApplication_AddLibraryPath(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QCoreApplication::addLibraryPath(param1_QString);
}

void QCoreApplication_RemoveLibraryPath(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
	QCoreApplication::removeLibraryPath(param1_QString);
}

bool QCoreApplication_InstallTranslator(QTranslator* messageFile) {
	return QCoreApplication::installTranslator(messageFile);
}

bool QCoreApplication_RemoveTranslator(QTranslator* messageFile) {
	return QCoreApplication::removeTranslator(messageFile);
}

void QCoreApplication_Translate(const char* context, const char* key, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::translate(context, key);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self) {
	self->organizationDomainChanged();
}

void QCoreApplication_connect_OrganizationDomainChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::organizationDomainChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCoreApplication_ApplicationNameChanged(QCoreApplication* self) {
	self->applicationNameChanged();
}

void QCoreApplication_connect_ApplicationNameChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationNameChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self) {
	self->applicationVersionChanged();
}

void QCoreApplication_connect_ApplicationVersionChanged(QCoreApplication* self, void* slot) {
	QCoreApplication::connect(self, static_cast<void (QCoreApplication::*)()>(&QCoreApplication::applicationVersionChanged), self, [=]() {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QCoreApplication_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
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

void QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::translate(context, key, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n, char** _out, int* _out_Strlen) {
	QString ret = QCoreApplication::translate(context, key, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QCoreApplication_Delete(QCoreApplication* self) {
	delete self;
}

