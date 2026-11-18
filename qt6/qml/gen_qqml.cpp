#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QQmlContext>
#include <QQmlEngine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qqml.h>
#include "gen_qqml.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void miqt_QmlClearTypeRegistrations2() {

	qmlClearTypeRegistrations();
}

int miqt_QmlRegisterTypeNotAvailable2(const char* uri, int versionMajor, int versionMinor, const char* qmlName, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);

	return qmlRegisterTypeNotAvailable(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, message_QString);
}

int miqt_QmlRegisterUncreatableMetaObject2(QMetaObject* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, struct miqt_string reason) {
	QString reason_QString = QString::fromUtf8(reason.data, reason.len);

	return qmlRegisterUncreatableMetaObject(*staticMetaObject, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName, reason_QString);
}

void miqt_QmlExecuteDeferredWithQObject(QObject* param1) {

	qmlExecuteDeferred(param1);
}

QQmlContext* miqt_QmlContextWithQObject(QObject* param1) {

	return qmlContext(param1);
}

QQmlEngine* miqt_QmlEngineWithQObject(QObject* param1) {

	return qmlEngine(param1);
}

QObject* miqt_QmlExtendedObjectWithQObject(QObject* param1) {

	return qmlExtendedObject(param1);
}

bool miqt_QmlProtectModule2(const char* uri, int majVersion) {

	return qmlProtectModule(uri, static_cast<int>(majVersion));
}

void miqt_QmlRegisterModule2(const char* uri, int versionMajor, int versionMinor) {

	qmlRegisterModule(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor));
}

void miqt_QmlRegisterModuleImport2(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {

	qmlRegisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

void miqt_QmlUnregisterModuleImport2(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {

	qmlUnregisterModuleImport(uri, static_cast<int>(moduleMajor), import, static_cast<int>(importMajor), static_cast<int>(importMinor));
}

int miqt_QmlRegisterSingletonType3(QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {

	return qmlRegisterSingletonType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

int miqt_QmlRegisterType2(QUrl* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {

	return qmlRegisterType(*url, uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

void miqt_QmlRegisterNamespaceAndRevisions2(QMetaObject* metaObject, const char* uri, int versionMajor, struct miqt_array /* of int */  qmlTypeIds, QMetaObject* classInfoMetaObject, QMetaObject* extensionMetaObject) {
	QList<int> qmlTypeIds_QList;
	qmlTypeIds_QList.reserve(qmlTypeIds.len);
	int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
	for(size_t i = 0; i < qmlTypeIds.len; ++i) {
		qmlTypeIds_QList.push_back(static_cast<int>(qmlTypeIds_arr[i]));
	}

	qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), &qmlTypeIds_QList, classInfoMetaObject, extensionMetaObject);
}

void miqt_QmlRegisterNamespaceAndRevisions3(QMetaObject* metaObject, const char* uri, int versionMajor, struct miqt_array /* of int */  qmlTypeIds, QMetaObject* classInfoMetaObject) {
	QList<int> qmlTypeIds_QList;
	qmlTypeIds_QList.reserve(qmlTypeIds.len);
	int* qmlTypeIds_arr = static_cast<int*>(qmlTypeIds.data);
	for(size_t i = 0; i < qmlTypeIds.len; ++i) {
		qmlTypeIds_QList.push_back(static_cast<int>(qmlTypeIds_arr[i]));
	}

	qmlRegisterNamespaceAndRevisions(metaObject, uri, static_cast<int>(versionMajor), &qmlTypeIds_QList, classInfoMetaObject);
}

int miqt_QmlTypeId2(const char* uri, int versionMajor, int versionMinor, const char* qmlName) {

	return qmlTypeId(uri, static_cast<int>(versionMajor), static_cast<int>(versionMinor), qmlName);
}

