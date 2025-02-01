#include <QByteArray>
#include <QList>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslDiffieHellmanParameters>
#include <QSslEllipticCurve>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslconfiguration.h>
#include "gen_qsslconfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslConfiguration* QSslConfiguration_new() {
	return new QSslConfiguration();
}

QSslConfiguration* QSslConfiguration_new2(QSslConfiguration* other) {
	return new QSslConfiguration(*other);
}

void QSslConfiguration_operatorAssign(QSslConfiguration* self, QSslConfiguration* other) {
	self->operator=(*other);
}

void QSslConfiguration_swap(QSslConfiguration* self, QSslConfiguration* other) {
	self->swap(*other);
}

bool QSslConfiguration_operatorEqual(const QSslConfiguration* self, QSslConfiguration* other) {
	return (*self == *other);
}

bool QSslConfiguration_operatorNotEqual(const QSslConfiguration* self, QSslConfiguration* other) {
	return (*self != *other);
}

bool QSslConfiguration_isNull(const QSslConfiguration* self) {
	return self->isNull();
}

int QSslConfiguration_protocol(const QSslConfiguration* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslConfiguration_setProtocol(QSslConfiguration* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslConfiguration_peerVerifyMode(const QSslConfiguration* self) {
	QSslSocket::PeerVerifyMode _ret = self->peerVerifyMode();
	return static_cast<int>(_ret);
}

void QSslConfiguration_setPeerVerifyMode(QSslConfiguration* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslConfiguration_peerVerifyDepth(const QSslConfiguration* self) {
	return self->peerVerifyDepth();
}

void QSslConfiguration_setPeerVerifyDepth(QSslConfiguration* self, int depth) {
	self->setPeerVerifyDepth(static_cast<int>(depth));
}

struct miqt_array /* of QSslCertificate* */  QSslConfiguration_localCertificateChain(const QSslConfiguration* self) {
	QList<QSslCertificate> _ret = self->localCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslConfiguration_setLocalCertificateChain(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  localChain) {
	QList<QSslCertificate> localChain_QList;
	localChain_QList.reserve(localChain.len);
	QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
	for(size_t i = 0; i < localChain.len; ++i) {
		localChain_QList.push_back(*(localChain_arr[i]));
	}
	self->setLocalCertificateChain(localChain_QList);
}

QSslCertificate* QSslConfiguration_localCertificate(const QSslConfiguration* self) {
	return new QSslCertificate(self->localCertificate());
}

void QSslConfiguration_setLocalCertificate(QSslConfiguration* self, QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

QSslCertificate* QSslConfiguration_peerCertificate(const QSslConfiguration* self) {
	return new QSslCertificate(self->peerCertificate());
}

struct miqt_array /* of QSslCertificate* */  QSslConfiguration_peerCertificateChain(const QSslConfiguration* self) {
	QList<QSslCertificate> _ret = self->peerCertificateChain();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QSslCipher* QSslConfiguration_sessionCipher(const QSslConfiguration* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslConfiguration_sessionProtocol(const QSslConfiguration* self) {
	QSsl::SslProtocol _ret = self->sessionProtocol();
	return static_cast<int>(_ret);
}

QSslKey* QSslConfiguration_privateKey(const QSslConfiguration* self) {
	return new QSslKey(self->privateKey());
}

void QSslConfiguration_setPrivateKey(QSslConfiguration* self, QSslKey* key) {
	self->setPrivateKey(*key);
}

struct miqt_array /* of QSslCipher* */  QSslConfiguration_ciphers(const QSslConfiguration* self) {
	QList<QSslCipher> _ret = self->ciphers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCipher(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslConfiguration_setCiphers(QSslConfiguration* self, struct miqt_array /* of QSslCipher* */  ciphers) {
	QList<QSslCipher> ciphers_QList;
	ciphers_QList.reserve(ciphers.len);
	QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
	for(size_t i = 0; i < ciphers.len; ++i) {
		ciphers_QList.push_back(*(ciphers_arr[i]));
	}
	self->setCiphers(ciphers_QList);
}

struct miqt_array /* of QSslCipher* */  QSslConfiguration_supportedCiphers() {
	QList<QSslCipher> _ret = QSslConfiguration::supportedCiphers();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCipher** _arr = static_cast<QSslCipher**>(malloc(sizeof(QSslCipher*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCipher(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QSslCertificate* */  QSslConfiguration_caCertificates(const QSslConfiguration* self) {
	QList<QSslCertificate> _ret = self->caCertificates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslConfiguration_setCaCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->setCaCertificates(certificates_QList);
}

bool QSslConfiguration_addCaCertificates(QSslConfiguration* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString);
}

void QSslConfiguration_addCaCertificate(QSslConfiguration* self, QSslCertificate* certificate) {
	self->addCaCertificate(*certificate);
}

void QSslConfiguration_addCaCertificatesWithCertificates(QSslConfiguration* self, struct miqt_array /* of QSslCertificate* */  certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->addCaCertificates(certificates_QList);
}

struct miqt_array /* of QSslCertificate* */  QSslConfiguration_systemCaCertificates() {
	QList<QSslCertificate> _ret = QSslConfiguration::systemCaCertificates();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificate** _arr = static_cast<QSslCertificate**>(malloc(sizeof(QSslCertificate*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificate(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslConfiguration_setSslOption(QSslConfiguration* self, int option, bool on) {
	self->setSslOption(static_cast<QSsl::SslOption>(option), on);
}

bool QSslConfiguration_testSslOption(const QSslConfiguration* self, int option) {
	return self->testSslOption(static_cast<QSsl::SslOption>(option));
}

struct miqt_string QSslConfiguration_sessionTicket(const QSslConfiguration* self) {
	QByteArray _qb = self->sessionTicket();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslConfiguration_setSessionTicket(QSslConfiguration* self, struct miqt_string sessionTicket) {
	QByteArray sessionTicket_QByteArray(sessionTicket.data, sessionTicket.len);
	self->setSessionTicket(sessionTicket_QByteArray);
}

int QSslConfiguration_sessionTicketLifeTimeHint(const QSslConfiguration* self) {
	return self->sessionTicketLifeTimeHint();
}

QSslKey* QSslConfiguration_ephemeralServerKey(const QSslConfiguration* self) {
	return new QSslKey(self->ephemeralServerKey());
}

struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_ellipticCurves(const QSslConfiguration* self) {
	QVector<QSslEllipticCurve> _ret = self->ellipticCurves();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslEllipticCurve** _arr = static_cast<QSslEllipticCurve**>(malloc(sizeof(QSslEllipticCurve*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslEllipticCurve(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslConfiguration_setEllipticCurves(QSslConfiguration* self, struct miqt_array /* of QSslEllipticCurve* */  curves) {
	QVector<QSslEllipticCurve> curves_QList;
	curves_QList.reserve(curves.len);
	QSslEllipticCurve** curves_arr = static_cast<QSslEllipticCurve**>(curves.data);
	for(size_t i = 0; i < curves.len; ++i) {
		curves_QList.push_back(*(curves_arr[i]));
	}
	self->setEllipticCurves(curves_QList);
}

struct miqt_array /* of QSslEllipticCurve* */  QSslConfiguration_supportedEllipticCurves() {
	QVector<QSslEllipticCurve> _ret = QSslConfiguration::supportedEllipticCurves();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslEllipticCurve** _arr = static_cast<QSslEllipticCurve**>(malloc(sizeof(QSslEllipticCurve*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslEllipticCurve(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QSslConfiguration_preSharedKeyIdentityHint(const QSslConfiguration* self) {
	QByteArray _qb = self->preSharedKeyIdentityHint();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QSslConfiguration_setPreSharedKeyIdentityHint(QSslConfiguration* self, struct miqt_string hint) {
	QByteArray hint_QByteArray(hint.data, hint.len);
	self->setPreSharedKeyIdentityHint(hint_QByteArray);
}

QSslDiffieHellmanParameters* QSslConfiguration_diffieHellmanParameters(const QSslConfiguration* self) {
	return new QSslDiffieHellmanParameters(self->diffieHellmanParameters());
}

void QSslConfiguration_setDiffieHellmanParameters(QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams) {
	self->setDiffieHellmanParameters(*dhparams);
}

void QSslConfiguration_setBackendConfigurationOption(QSslConfiguration* self, struct miqt_string name, QVariant* value) {
	QByteArray name_QByteArray(name.data, name.len);
	self->setBackendConfigurationOption(name_QByteArray, *value);
}

void QSslConfiguration_setBackendConfiguration(QSslConfiguration* self) {
	self->setBackendConfiguration();
}

QSslConfiguration* QSslConfiguration_defaultConfiguration() {
	return new QSslConfiguration(QSslConfiguration::defaultConfiguration());
}

void QSslConfiguration_setDefaultConfiguration(QSslConfiguration* configuration) {
	QSslConfiguration::setDefaultConfiguration(*configuration);
}

bool QSslConfiguration_dtlsCookieVerificationEnabled(const QSslConfiguration* self) {
	return self->dtlsCookieVerificationEnabled();
}

void QSslConfiguration_setDtlsCookieVerificationEnabled(QSslConfiguration* self, bool enable) {
	self->setDtlsCookieVerificationEnabled(enable);
}

QSslConfiguration* QSslConfiguration_defaultDtlsConfiguration() {
	return new QSslConfiguration(QSslConfiguration::defaultDtlsConfiguration());
}

void QSslConfiguration_setDefaultDtlsConfiguration(QSslConfiguration* configuration) {
	QSslConfiguration::setDefaultDtlsConfiguration(*configuration);
}

void QSslConfiguration_setOcspStaplingEnabled(QSslConfiguration* self, bool enable) {
	self->setOcspStaplingEnabled(enable);
}

bool QSslConfiguration_ocspStaplingEnabled(const QSslConfiguration* self) {
	return self->ocspStaplingEnabled();
}

void QSslConfiguration_setAllowedNextProtocols(QSslConfiguration* self, struct miqt_array /* of struct miqt_string */  protocols) {
	QList<QByteArray> protocols_QList;
	protocols_QList.reserve(protocols.len);
	struct miqt_string* protocols_arr = static_cast<struct miqt_string*>(protocols.data);
	for(size_t i = 0; i < protocols.len; ++i) {
		QByteArray protocols_arr_i_QByteArray(protocols_arr[i].data, protocols_arr[i].len);
		protocols_QList.push_back(protocols_arr_i_QByteArray);
	}
	self->setAllowedNextProtocols(protocols_QList);
}

struct miqt_array /* of struct miqt_string */  QSslConfiguration_allowedNextProtocols(const QSslConfiguration* self) {
	QList<QByteArray> _ret = self->allowedNextProtocols();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QByteArray _lv_qb = _ret[i];
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_qb.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_qb.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QSslConfiguration_nextNegotiatedProtocol(const QSslConfiguration* self) {
	QByteArray _qb = self->nextNegotiatedProtocol();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QSslConfiguration_nextProtocolNegotiationStatus(const QSslConfiguration* self) {
	QSslConfiguration::NextProtocolNegotiationStatus _ret = self->nextProtocolNegotiationStatus();
	return static_cast<int>(_ret);
}

bool QSslConfiguration_addCaCertificates2(QSslConfiguration* self, struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslConfiguration_addCaCertificates3(QSslConfiguration* self, struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
}

void QSslConfiguration_delete(QSslConfiguration* self) {
	delete self;
}

