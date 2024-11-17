#include <QList>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QNetworkConfigurationManager>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkconfigmanager.h>
#include "gen_qnetworkconfigmanager.h"
#include "_cgo_export.h"

QNetworkConfigurationManager* QNetworkConfigurationManager_new() {
	return new QNetworkConfigurationManager();
}

QNetworkConfigurationManager* QNetworkConfigurationManager_new2(QObject* parent) {
	return new QNetworkConfigurationManager(parent);
}

QMetaObject* QNetworkConfigurationManager_MetaObject(const QNetworkConfigurationManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkConfigurationManager_Metacast(QNetworkConfigurationManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkConfigurationManager_Tr(const char* s) {
	QString _ret = QNetworkConfigurationManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_TrUtf8(const char* s) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNetworkConfigurationManager_Capabilities(const QNetworkConfigurationManager* self) {
	QNetworkConfigurationManager::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

QNetworkConfiguration* QNetworkConfigurationManager_DefaultConfiguration(const QNetworkConfigurationManager* self) {
	return new QNetworkConfiguration(self->defaultConfiguration());
}

struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_AllConfigurations(const QNetworkConfigurationManager* self) {
	QList<QNetworkConfiguration> _ret = self->allConfigurations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkConfiguration** _arr = static_cast<QNetworkConfiguration**>(malloc(sizeof(QNetworkConfiguration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkConfiguration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QNetworkConfiguration* QNetworkConfigurationManager_ConfigurationFromIdentifier(const QNetworkConfigurationManager* self, struct miqt_string identifier) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	return new QNetworkConfiguration(self->configurationFromIdentifier(identifier_QString));
}

bool QNetworkConfigurationManager_IsOnline(const QNetworkConfigurationManager* self) {
	return self->isOnline();
}

void QNetworkConfigurationManager_UpdateConfigurations(QNetworkConfigurationManager* self) {
	self->updateConfigurations();
}

void QNetworkConfigurationManager_ConfigurationAdded(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationAdded(*config);
}

void QNetworkConfigurationManager_connect_ConfigurationAdded(QNetworkConfigurationManager* self, intptr_t slot) {
	QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationAdded), self, [=](const QNetworkConfiguration& config) {
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_ConfigurationAdded(slot, sigval1);
	});
}

void QNetworkConfigurationManager_ConfigurationRemoved(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationRemoved(*config);
}

void QNetworkConfigurationManager_connect_ConfigurationRemoved(QNetworkConfigurationManager* self, intptr_t slot) {
	QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationRemoved), self, [=](const QNetworkConfiguration& config) {
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_ConfigurationRemoved(slot, sigval1);
	});
}

void QNetworkConfigurationManager_ConfigurationChanged(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationChanged(*config);
}

void QNetworkConfigurationManager_connect_ConfigurationChanged(QNetworkConfigurationManager* self, intptr_t slot) {
	QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationChanged), self, [=](const QNetworkConfiguration& config) {
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_ConfigurationChanged(slot, sigval1);
	});
}

void QNetworkConfigurationManager_OnlineStateChanged(QNetworkConfigurationManager* self, bool isOnline) {
	self->onlineStateChanged(isOnline);
}

void QNetworkConfigurationManager_connect_OnlineStateChanged(QNetworkConfigurationManager* self, intptr_t slot) {
	QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(bool)>(&QNetworkConfigurationManager::onlineStateChanged), self, [=](bool isOnline) {
		bool sigval1 = isOnline;
		miqt_exec_callback_QNetworkConfigurationManager_OnlineStateChanged(slot, sigval1);
	});
}

void QNetworkConfigurationManager_UpdateCompleted(QNetworkConfigurationManager* self) {
	self->updateCompleted();
}

void QNetworkConfigurationManager_connect_UpdateCompleted(QNetworkConfigurationManager* self, intptr_t slot) {
	QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)()>(&QNetworkConfigurationManager::updateCompleted), self, [=]() {
		miqt_exec_callback_QNetworkConfigurationManager_UpdateCompleted(slot);
	});
}

struct miqt_string QNetworkConfigurationManager_Tr2(const char* s, const char* c) {
	QString _ret = QNetworkConfigurationManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_Tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkConfigurationManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_TrUtf82(const char* s, const char* c) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_AllConfigurations1(const QNetworkConfigurationManager* self, int flags) {
	QList<QNetworkConfiguration> _ret = self->allConfigurations(static_cast<QNetworkConfiguration::StateFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkConfiguration** _arr = static_cast<QNetworkConfiguration**>(malloc(sizeof(QNetworkConfiguration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkConfiguration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QNetworkConfigurationManager_Delete(QNetworkConfigurationManager* self) {
	delete self;
}

