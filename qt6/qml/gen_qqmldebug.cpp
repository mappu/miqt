#include <QList>
#include <QMap>
#include <QQmlDebuggingEnabler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qqmldebug.h>
#include "gen_qqmldebug.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new() {
	return new QQmlDebuggingEnabler();
}

QQmlDebuggingEnabler* QQmlDebuggingEnabler_new2(bool printWarning) {
	return new QQmlDebuggingEnabler(printWarning);
}

void QQmlDebuggingEnabler_enableDebugging(bool printWarning) {
	QQmlDebuggingEnabler::enableDebugging(printWarning);
}

struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_debuggerServices() {
	QStringList _ret = QQmlDebuggingEnabler::debuggerServices();
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

struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_inspectorServices() {
	QStringList _ret = QQmlDebuggingEnabler::inspectorServices();
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

struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_profilerServices() {
	QStringList _ret = QQmlDebuggingEnabler::profilerServices();
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

struct miqt_array /* of struct miqt_string */  QQmlDebuggingEnabler_nativeDebuggerServices() {
	QStringList _ret = QQmlDebuggingEnabler::nativeDebuggerServices();
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

void QQmlDebuggingEnabler_setServices(struct miqt_array /* of struct miqt_string */  services) {
	QStringList services_QList;
	services_QList.reserve(services.len);
	struct miqt_string* services_arr = static_cast<struct miqt_string*>(services.data);
	for(size_t i = 0; i < services.len; ++i) {
		QString services_arr_i_QString = QString::fromUtf8(services_arr[i].data, services_arr[i].len);
		services_QList.push_back(services_arr_i_QString);
	}
	QQmlDebuggingEnabler::setServices(services_QList);
}

bool QQmlDebuggingEnabler_startTcpDebugServer(int port) {
	return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port));
}

bool QQmlDebuggingEnabler_connectToLocalDebugger(struct miqt_string socketFileName) {
	QString socketFileName_QString = QString::fromUtf8(socketFileName.data, socketFileName.len);
	return QQmlDebuggingEnabler::connectToLocalDebugger(socketFileName_QString);
}

bool QQmlDebuggingEnabler_startDebugConnector(struct miqt_string pluginName) {
	QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
	return QQmlDebuggingEnabler::startDebugConnector(pluginName_QString);
}

bool QQmlDebuggingEnabler_startTcpDebugServer2(int port, int mode) {
	return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port), static_cast<QQmlDebuggingEnabler::StartMode>(mode));
}

bool QQmlDebuggingEnabler_startTcpDebugServer3(int port, int mode, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	return QQmlDebuggingEnabler::startTcpDebugServer(static_cast<int>(port), static_cast<QQmlDebuggingEnabler::StartMode>(mode), hostName_QString);
}

bool QQmlDebuggingEnabler_connectToLocalDebugger2(struct miqt_string socketFileName, int mode) {
	QString socketFileName_QString = QString::fromUtf8(socketFileName.data, socketFileName.len);
	return QQmlDebuggingEnabler::connectToLocalDebugger(socketFileName_QString, static_cast<QQmlDebuggingEnabler::StartMode>(mode));
}

bool QQmlDebuggingEnabler_startDebugConnector2(struct miqt_string pluginName, struct miqt_map /* of struct miqt_string to QVariant* */  configuration) {
	QString pluginName_QString = QString::fromUtf8(pluginName.data, pluginName.len);
	QVariantHash configuration_QMap;
	configuration_QMap.reserve(configuration.len);
	struct miqt_string* configuration_karr = static_cast<struct miqt_string*>(configuration.keys);
	QVariant** configuration_varr = static_cast<QVariant**>(configuration.values);
	for(size_t i = 0; i < configuration.len; ++i) {
		QString configuration_karr_i_QString = QString::fromUtf8(configuration_karr[i].data, configuration_karr[i].len);
		configuration_QMap[configuration_karr_i_QString] = *(configuration_varr[i]);
	}
	return QQmlDebuggingEnabler::startDebugConnector(pluginName_QString, configuration_QMap);
}

void QQmlDebuggingEnabler_delete(QQmlDebuggingEnabler* self) {
	delete self;
}

