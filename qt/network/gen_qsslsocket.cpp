#include <QByteArray>
#include <QList>
#include <QMetaObject>
#include <QObject>
#include <QOcspResponse>
#include <QSslCertificate>
#include <QSslCipher>
#include <QSslConfiguration>
#include <QSslError>
#include <QSslKey>
#include <QSslPreSharedKeyAuthenticator>
#include <QSslSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsslsocket.h>
#include "gen_qsslsocket.h"
#include "_cgo_export.h"

QSslSocket* QSslSocket_new() {
	return new QSslSocket();
}

QSslSocket* QSslSocket_new2(QObject* parent) {
	return new QSslSocket(parent);
}

QMetaObject* QSslSocket_MetaObject(const QSslSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSslSocket_Metacast(QSslSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSslSocket_Tr(const char* s) {
	QString _ret = QSslSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf8(const char* s) {
	QString _ret = QSslSocket::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_Resume(QSslSocket* self) {
	self->resume();
}

void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port));
}

void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString);
}

bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor));
}

void QSslSocket_ConnectToHost(QSslSocket* self, struct miqt_string hostName, uint16_t port) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port));
}

void QSslSocket_DisconnectFromHost(QSslSocket* self) {
	self->disconnectFromHost();
}

void QSslSocket_SetSocketOption(QSslSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QSslSocket_SocketOption(QSslSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QSslSocket_Mode(const QSslSocket* self) {
	QSslSocket::SslMode _ret = self->mode();
	return static_cast<int>(_ret);
}

bool QSslSocket_IsEncrypted(const QSslSocket* self) {
	return self->isEncrypted();
}

int QSslSocket_Protocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->protocol();
	return static_cast<int>(_ret);
}

void QSslSocket_SetProtocol(QSslSocket* self, int protocol) {
	self->setProtocol(static_cast<QSsl::SslProtocol>(protocol));
}

int QSslSocket_PeerVerifyMode(const QSslSocket* self) {
	QSslSocket::PeerVerifyMode _ret = self->peerVerifyMode();
	return static_cast<int>(_ret);
}

void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode) {
	self->setPeerVerifyMode(static_cast<QSslSocket::PeerVerifyMode>(mode));
}

int QSslSocket_PeerVerifyDepth(const QSslSocket* self) {
	return self->peerVerifyDepth();
}

void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth) {
	self->setPeerVerifyDepth(static_cast<int>(depth));
}

struct miqt_string QSslSocket_PeerVerifyName(const QSslSocket* self) {
	QString _ret = self->peerVerifyName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_SetPeerVerifyName(QSslSocket* self, struct miqt_string hostName) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->setPeerVerifyName(hostName_QString);
}

long long QSslSocket_BytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_BytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QSslSocket_CanReadLine(const QSslSocket* self) {
	return self->canReadLine();
}

void QSslSocket_Close(QSslSocket* self) {
	self->close();
}

bool QSslSocket_AtEnd(const QSslSocket* self) {
	return self->atEnd();
}

bool QSslSocket_Flush(QSslSocket* self) {
	return self->flush();
}

void QSslSocket_Abort(QSslSocket* self) {
	self->abort();
}

void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesAvailable();
	return static_cast<long long>(_ret);
}

long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self) {
	qint64 _ret = self->encryptedBytesToWrite();
	return static_cast<long long>(_ret);
}

QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self) {
	return new QSslConfiguration(self->sslConfiguration());
}

void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config) {
	self->setSslConfiguration(*config);
}

void QSslSocket_SetLocalCertificateChain(QSslSocket* self, struct miqt_array /* of QSslCertificate* */ localChain) {
	QList<QSslCertificate> localChain_QList;
	localChain_QList.reserve(localChain.len);
	QSslCertificate** localChain_arr = static_cast<QSslCertificate**>(localChain.data);
	for(size_t i = 0; i < localChain.len; ++i) {
		localChain_QList.push_back(*(localChain_arr[i]));
	}
	self->setLocalCertificateChain(localChain_QList);
}

struct miqt_array QSslSocket_LocalCertificateChain(const QSslSocket* self) {
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

void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate) {
	self->setLocalCertificate(*certificate);
}

void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString);
}

QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->localCertificate());
}

QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self) {
	return new QSslCertificate(self->peerCertificate());
}

struct miqt_array QSslSocket_PeerCertificateChain(const QSslSocket* self) {
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

QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self) {
	return new QSslCipher(self->sessionCipher());
}

int QSslSocket_SessionProtocol(const QSslSocket* self) {
	QSsl::SslProtocol _ret = self->sessionProtocol();
	return static_cast<int>(_ret);
}

struct miqt_array QSslSocket_OcspResponses(const QSslSocket* self) {
	QVector<QOcspResponse> _ret = self->ocspResponses();
	// Convert QList<> from C++ memory to manually-managed C memory
	QOcspResponse** _arr = static_cast<QOcspResponse**>(malloc(sizeof(QOcspResponse*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QOcspResponse(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key) {
	self->setPrivateKey(*key);
}

void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString);
}

QSslKey* QSslSocket_PrivateKey(const QSslSocket* self) {
	return new QSslKey(self->privateKey());
}

struct miqt_array QSslSocket_Ciphers(const QSslSocket* self) {
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

void QSslSocket_SetCiphers(QSslSocket* self, struct miqt_array /* of QSslCipher* */ ciphers) {
	QList<QSslCipher> ciphers_QList;
	ciphers_QList.reserve(ciphers.len);
	QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
	for(size_t i = 0; i < ciphers.len; ++i) {
		ciphers_QList.push_back(*(ciphers_arr[i]));
	}
	self->setCiphers(ciphers_QList);
}

void QSslSocket_SetCiphersWithCiphers(QSslSocket* self, struct miqt_string ciphers) {
	QString ciphers_QString = QString::fromUtf8(ciphers.data, ciphers.len);
	self->setCiphers(ciphers_QString);
}

void QSslSocket_SetDefaultCiphers(struct miqt_array /* of QSslCipher* */ ciphers) {
	QList<QSslCipher> ciphers_QList;
	ciphers_QList.reserve(ciphers.len);
	QSslCipher** ciphers_arr = static_cast<QSslCipher**>(ciphers.data);
	for(size_t i = 0; i < ciphers.len; ++i) {
		ciphers_QList.push_back(*(ciphers_arr[i]));
	}
	QSslSocket::setDefaultCiphers(ciphers_QList);
}

struct miqt_array QSslSocket_DefaultCiphers() {
	QList<QSslCipher> _ret = QSslSocket::defaultCiphers();
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

struct miqt_array QSslSocket_SupportedCiphers() {
	QList<QSslCipher> _ret = QSslSocket::supportedCiphers();
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

bool QSslSocket_AddCaCertificates(QSslSocket* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString);
}

void QSslSocket_AddCaCertificate(QSslSocket* self, QSslCertificate* certificate) {
	self->addCaCertificate(*certificate);
}

void QSslSocket_AddCaCertificatesWithCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */ certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->addCaCertificates(certificates_QList);
}

void QSslSocket_SetCaCertificates(QSslSocket* self, struct miqt_array /* of QSslCertificate* */ certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	self->setCaCertificates(certificates_QList);
}

struct miqt_array QSslSocket_CaCertificates(const QSslSocket* self) {
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

bool QSslSocket_AddDefaultCaCertificates(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString);
}

void QSslSocket_AddDefaultCaCertificate(QSslCertificate* certificate) {
	QSslSocket::addDefaultCaCertificate(*certificate);
}

void QSslSocket_AddDefaultCaCertificatesWithCertificates(struct miqt_array /* of QSslCertificate* */ certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	QSslSocket::addDefaultCaCertificates(certificates_QList);
}

void QSslSocket_SetDefaultCaCertificates(struct miqt_array /* of QSslCertificate* */ certificates) {
	QList<QSslCertificate> certificates_QList;
	certificates_QList.reserve(certificates.len);
	QSslCertificate** certificates_arr = static_cast<QSslCertificate**>(certificates.data);
	for(size_t i = 0; i < certificates.len; ++i) {
		certificates_QList.push_back(*(certificates_arr[i]));
	}
	QSslSocket::setDefaultCaCertificates(certificates_QList);
}

struct miqt_array QSslSocket_DefaultCaCertificates() {
	QList<QSslCertificate> _ret = QSslSocket::defaultCaCertificates();
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

struct miqt_array QSslSocket_SystemCaCertificates() {
	QList<QSslCertificate> _ret = QSslSocket::systemCaCertificates();
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

bool QSslSocket_WaitForConnected(QSslSocket* self) {
	return self->waitForConnected();
}

bool QSslSocket_WaitForEncrypted(QSslSocket* self) {
	return self->waitForEncrypted();
}

bool QSslSocket_WaitForReadyRead(QSslSocket* self) {
	return self->waitForReadyRead();
}

bool QSslSocket_WaitForBytesWritten(QSslSocket* self) {
	return self->waitForBytesWritten();
}

bool QSslSocket_WaitForDisconnected(QSslSocket* self) {
	return self->waitForDisconnected();
}

struct miqt_array QSslSocket_SslErrors(const QSslSocket* self) {
	QList<QSslError> _ret = self->sslErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QSslSocket_SslHandshakeErrors(const QSslSocket* self) {
	QList<QSslError> _ret = self->sslHandshakeErrors();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslError** _arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslError(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QSslSocket_SupportsSsl() {
	return QSslSocket::supportsSsl();
}

long QSslSocket_SslLibraryVersionNumber() {
	return QSslSocket::sslLibraryVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryVersionString() {
	QString _ret = QSslSocket::sslLibraryVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long QSslSocket_SslLibraryBuildVersionNumber() {
	return QSslSocket::sslLibraryBuildVersionNumber();
}

struct miqt_string QSslSocket_SslLibraryBuildVersionString() {
	QString _ret = QSslSocket::sslLibraryBuildVersionString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_IgnoreSslErrors(QSslSocket* self, struct miqt_array /* of QSslError* */ errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->ignoreSslErrors(errors_QList);
}

void QSslSocket_StartClientEncryption(QSslSocket* self) {
	self->startClientEncryption();
}

void QSslSocket_StartServerEncryption(QSslSocket* self) {
	self->startServerEncryption();
}

void QSslSocket_IgnoreSslErrors2(QSslSocket* self) {
	self->ignoreSslErrors();
}

void QSslSocket_Encrypted(QSslSocket* self) {
	self->encrypted();
}

void QSslSocket_connect_Encrypted(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::encrypted), self, [=]() {
		miqt_exec_callback_QSslSocket_Encrypted(slot);
	});
}

void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* error) {
	self->peerVerifyError(*error);
}

void QSslSocket_connect_PeerVerifyError(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QSslError&)>(&QSslSocket::peerVerifyError), self, [=](const QSslError& error) {
		const QSslError& error_ret = error;
		// Cast returned reference into pointer
		QSslError* sigval1 = const_cast<QSslError*>(&error_ret);
		miqt_exec_callback_QSslSocket_PeerVerifyError(slot, sigval1);
	});
}

void QSslSocket_SslErrorsWithErrors(QSslSocket* self, struct miqt_array /* of QSslError* */ errors) {
	QList<QSslError> errors_QList;
	errors_QList.reserve(errors.len);
	QSslError** errors_arr = static_cast<QSslError**>(errors.data);
	for(size_t i = 0; i < errors.len; ++i) {
		errors_QList.push_back(*(errors_arr[i]));
	}
	self->sslErrors(errors_QList);
}

void QSslSocket_connect_SslErrorsWithErrors(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)(const QList<QSslError>&)>(&QSslSocket::sslErrors), self, [=](const QList<QSslError>& errors) {
		const QList<QSslError>& errors_ret = errors;
		// Convert QList<> from C++ memory to manually-managed C memory
		QSslError** errors_arr = static_cast<QSslError**>(malloc(sizeof(QSslError*) * errors_ret.length()));
		for (size_t i = 0, e = errors_ret.length(); i < e; ++i) {
			errors_arr[i] = new QSslError(errors_ret[i]);
		}
		struct miqt_array errors_out;
		errors_out.len = errors_ret.length();
		errors_out.data = static_cast<void*>(errors_arr);
		struct miqt_array sigval1 = errors_out;
		miqt_exec_callback_QSslSocket_SslErrorsWithErrors(slot, sigval1);
	});
}

void QSslSocket_ModeChanged(QSslSocket* self, int newMode) {
	self->modeChanged(static_cast<QSslSocket::SslMode>(newMode));
}

void QSslSocket_connect_ModeChanged(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslSocket::SslMode)>(&QSslSocket::modeChanged), self, [=](QSslSocket::SslMode newMode) {
		QSslSocket::SslMode newMode_ret = newMode;
		int sigval1 = static_cast<int>(newMode_ret);
		miqt_exec_callback_QSslSocket_ModeChanged(slot, sigval1);
	});
}

void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes) {
	self->encryptedBytesWritten(static_cast<qint64>(totalBytes));
}

void QSslSocket_connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)(qint64)>(&QSslSocket::encryptedBytesWritten), self, [=](qint64 totalBytes) {
		qint64 totalBytes_ret = totalBytes;
		long long sigval1 = static_cast<long long>(totalBytes_ret);
		miqt_exec_callback_QSslSocket_EncryptedBytesWritten(slot, sigval1);
	});
}

void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator) {
	self->preSharedKeyAuthenticationRequired(authenticator);
}

void QSslSocket_connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)(QSslPreSharedKeyAuthenticator*)>(&QSslSocket::preSharedKeyAuthenticationRequired), self, [=](QSslPreSharedKeyAuthenticator* authenticator) {
		QSslPreSharedKeyAuthenticator* sigval1 = authenticator;
		miqt_exec_callback_QSslSocket_PreSharedKeyAuthenticationRequired(slot, sigval1);
	});
}

void QSslSocket_NewSessionTicketReceived(QSslSocket* self) {
	self->newSessionTicketReceived();
}

void QSslSocket_connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot) {
	QSslSocket::connect(self, static_cast<void (QSslSocket::*)()>(&QSslSocket::newSessionTicketReceived), self, [=]() {
		miqt_exec_callback_QSslSocket_NewSessionTicketReceived(slot);
	});
}

struct miqt_string QSslSocket_Tr2(const char* s, const char* c) {
	QString _ret = QSslSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf82(const char* s, const char* c) {
	QString _ret = QSslSocket::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslSocket_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QSslSocket::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, struct miqt_string hostName, uint16_t port, struct miqt_string sslPeerName, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QString sslPeerName_QString = QString::fromUtf8(sslPeerName.data, sslPeerName.len);
	self->connectToHostEncrypted(hostName_QString, static_cast<quint16>(port), sslPeerName_QString, static_cast<QIODevice::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

bool QSslSocket_SetSocketDescriptor2(QSslSocket* self, intptr_t socketDescriptor, int state) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state));
}

bool QSslSocket_SetSocketDescriptor3(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODevice::OpenMode>(openMode));
}

void QSslSocket_ConnectToHost3(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(openMode));
}

void QSslSocket_ConnectToHost4(QSslSocket* self, struct miqt_string hostName, uint16_t port, int openMode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODevice::OpenMode>(openMode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QSslSocket_SetLocalCertificate2(QSslSocket* self, struct miqt_string fileName, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setLocalCertificate(fileName_QString, static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey2(QSslSocket* self, struct miqt_string fileName, int algorithm) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm));
}

void QSslSocket_SetPrivateKey3(QSslSocket* self, struct miqt_string fileName, int algorithm, int format) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format));
}

void QSslSocket_SetPrivateKey4(QSslSocket* self, struct miqt_string fileName, int algorithm, int format, struct miqt_string passPhrase) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	self->setPrivateKey(fileName_QString, static_cast<QSsl::KeyAlgorithm>(algorithm), static_cast<QSsl::EncodingFormat>(format), passPhrase_QByteArray);
}

bool QSslSocket_AddCaCertificates2(QSslSocket* self, struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslSocket_AddCaCertificates3(QSslSocket* self, struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return self->addCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QSslSocket_AddDefaultCaCertificates2(struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format));
}

bool QSslSocket_AddDefaultCaCertificates3(struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	return QSslSocket::addDefaultCaCertificates(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QRegExp::PatternSyntax>(syntax));
}

bool QSslSocket_WaitForConnected1(QSslSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs) {
	return self->waitForEncrypted(static_cast<int>(msecs));
}

bool QSslSocket_WaitForReadyRead1(QSslSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QSslSocket_WaitForBytesWritten1(QSslSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QSslSocket_WaitForDisconnected1(QSslSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QSslSocket_Delete(QSslSocket* self) {
	delete self;
}

