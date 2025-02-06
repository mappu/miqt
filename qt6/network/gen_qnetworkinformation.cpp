#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkInformation>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qnetworkinformation.h>
#include "gen_qnetworkinformation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_QNetworkInformation_reachabilityChanged(intptr_t, int);
void miqt_exec_callback_QNetworkInformation_isBehindCaptivePortalChanged(intptr_t, bool);
void miqt_exec_callback_QNetworkInformation_transportMediumChanged(intptr_t, int);
void miqt_exec_callback_QNetworkInformation_isMeteredChanged(intptr_t, bool);
#ifdef __cplusplus
} /* extern C */
#endif

void QNetworkInformation_virtbase(QNetworkInformation* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QNetworkInformation_metaObject(const QNetworkInformation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkInformation_metacast(QNetworkInformation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkInformation_tr(const char* s) {
	QString _ret = QNetworkInformation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNetworkInformation_reachability(const QNetworkInformation* self) {
	QNetworkInformation::Reachability _ret = self->reachability();
	return static_cast<int>(_ret);
}

bool QNetworkInformation_isBehindCaptivePortal(const QNetworkInformation* self) {
	return self->isBehindCaptivePortal();
}

int QNetworkInformation_transportMedium(const QNetworkInformation* self) {
	QNetworkInformation::TransportMedium _ret = self->transportMedium();
	return static_cast<int>(_ret);
}

bool QNetworkInformation_isMetered(const QNetworkInformation* self) {
	return self->isMetered();
}

struct miqt_string QNetworkInformation_backendName(const QNetworkInformation* self) {
	QString _ret = self->backendName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNetworkInformation_supports(const QNetworkInformation* self, int features) {
	return self->supports(static_cast<QNetworkInformation::Features>(features));
}

int QNetworkInformation_supportedFeatures(const QNetworkInformation* self) {
	QNetworkInformation::Features _ret = self->supportedFeatures();
	return static_cast<int>(_ret);
}

bool QNetworkInformation_loadDefaultBackend() {
	return QNetworkInformation::loadDefaultBackend();
}

bool QNetworkInformation_loadBackendByFeatures(int features) {
	return QNetworkInformation::loadBackendByFeatures(static_cast<QNetworkInformation::Features>(features));
}

bool QNetworkInformation_loadWithFeatures(int features) {
	return QNetworkInformation::load(static_cast<QNetworkInformation::Features>(features));
}

struct miqt_array /* of struct miqt_string */  QNetworkInformation_availableBackends() {
	QStringList _ret = QNetworkInformation::availableBackends();
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

QNetworkInformation* QNetworkInformation_instance() {
	return QNetworkInformation::instance();
}

void QNetworkInformation_reachabilityChanged(QNetworkInformation* self, int newReachability) {
	self->reachabilityChanged(static_cast<QNetworkInformation::Reachability>(newReachability));
}

void QNetworkInformation_connect_reachabilityChanged(QNetworkInformation* self, intptr_t slot) {
	QNetworkInformation::connect(self, static_cast<void (QNetworkInformation::*)(QNetworkInformation::Reachability)>(&QNetworkInformation::reachabilityChanged), self, [=](QNetworkInformation::Reachability newReachability) {
		QNetworkInformation::Reachability newReachability_ret = newReachability;
		int sigval1 = static_cast<int>(newReachability_ret);
		miqt_exec_callback_QNetworkInformation_reachabilityChanged(slot, sigval1);
	});
}

void QNetworkInformation_isBehindCaptivePortalChanged(QNetworkInformation* self, bool state) {
	self->isBehindCaptivePortalChanged(state);
}

void QNetworkInformation_connect_isBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot) {
	QNetworkInformation::connect(self, static_cast<void (QNetworkInformation::*)(bool)>(&QNetworkInformation::isBehindCaptivePortalChanged), self, [=](bool state) {
		bool sigval1 = state;
		miqt_exec_callback_QNetworkInformation_isBehindCaptivePortalChanged(slot, sigval1);
	});
}

void QNetworkInformation_transportMediumChanged(QNetworkInformation* self, int current) {
	self->transportMediumChanged(static_cast<QNetworkInformation::TransportMedium>(current));
}

void QNetworkInformation_connect_transportMediumChanged(QNetworkInformation* self, intptr_t slot) {
	QNetworkInformation::connect(self, static_cast<void (QNetworkInformation::*)(QNetworkInformation::TransportMedium)>(&QNetworkInformation::transportMediumChanged), self, [=](QNetworkInformation::TransportMedium current) {
		QNetworkInformation::TransportMedium current_ret = current;
		int sigval1 = static_cast<int>(current_ret);
		miqt_exec_callback_QNetworkInformation_transportMediumChanged(slot, sigval1);
	});
}

void QNetworkInformation_isMeteredChanged(QNetworkInformation* self, bool isMetered) {
	self->isMeteredChanged(isMetered);
}

void QNetworkInformation_connect_isMeteredChanged(QNetworkInformation* self, intptr_t slot) {
	QNetworkInformation::connect(self, static_cast<void (QNetworkInformation::*)(bool)>(&QNetworkInformation::isMeteredChanged), self, [=](bool isMetered) {
		bool sigval1 = isMetered;
		miqt_exec_callback_QNetworkInformation_isMeteredChanged(slot, sigval1);
	});
}

struct miqt_string QNetworkInformation_tr2(const char* s, const char* c) {
	QString _ret = QNetworkInformation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkInformation_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkInformation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

