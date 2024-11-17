#include <QList>
#include <QMediaNetworkAccessControl>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmedianetworkaccesscontrol.h>
#include "gen_qmedianetworkaccesscontrol.h"
#include "_cgo_export.h"

QMetaObject* QMediaNetworkAccessControl_MetaObject(const QMediaNetworkAccessControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaNetworkAccessControl_Metacast(QMediaNetworkAccessControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaNetworkAccessControl_Tr(const char* s) {
	QString _ret = QMediaNetworkAccessControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaNetworkAccessControl_TrUtf8(const char* s) {
	QString _ret = QMediaNetworkAccessControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaNetworkAccessControl_SetConfigurations(QMediaNetworkAccessControl* self, struct miqt_array /* of QNetworkConfiguration* */  configuration) {
	QList<QNetworkConfiguration> configuration_QList;
	configuration_QList.reserve(configuration.len);
	QNetworkConfiguration** configuration_arr = static_cast<QNetworkConfiguration**>(configuration.data);
	for(size_t i = 0; i < configuration.len; ++i) {
		configuration_QList.push_back(*(configuration_arr[i]));
	}
	self->setConfigurations(configuration_QList);
}

QNetworkConfiguration* QMediaNetworkAccessControl_CurrentConfiguration(const QMediaNetworkAccessControl* self) {
	return new QNetworkConfiguration(self->currentConfiguration());
}

void QMediaNetworkAccessControl_ConfigurationChanged(QMediaNetworkAccessControl* self, QNetworkConfiguration* configuration) {
	self->configurationChanged(*configuration);
}

void QMediaNetworkAccessControl_connect_ConfigurationChanged(QMediaNetworkAccessControl* self, intptr_t slot) {
	QMediaNetworkAccessControl::connect(self, static_cast<void (QMediaNetworkAccessControl::*)(const QNetworkConfiguration&)>(&QMediaNetworkAccessControl::configurationChanged), self, [=](const QNetworkConfiguration& configuration) {
		const QNetworkConfiguration& configuration_ret = configuration;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&configuration_ret);
		miqt_exec_callback_QMediaNetworkAccessControl_ConfigurationChanged(slot, sigval1);
	});
}

struct miqt_string QMediaNetworkAccessControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaNetworkAccessControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaNetworkAccessControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaNetworkAccessControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaNetworkAccessControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaNetworkAccessControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaNetworkAccessControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaNetworkAccessControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaNetworkAccessControl_Delete(QMediaNetworkAccessControl* self) {
	delete self;
}

