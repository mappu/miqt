#include <QByteArray>
#include <QDateTime>
#include <QIODevice>
#include <QList>
#include <QSslCertificate>
#include <QSslCertificateExtension>
#include <QSslError>
#include <QSslKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslcertificate.h>
#include "gen_qsslcertificate.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslCertificate* QSslCertificate_new(QIODevice* device) {
	return new QSslCertificate(device);
}

QSslCertificate* QSslCertificate_new2() {
	return new QSslCertificate();
}

QSslCertificate* QSslCertificate_new3(QSslCertificate* other) {
	return new QSslCertificate(*other);
}

QSslCertificate* QSslCertificate_new4(QIODevice* device, int format) {
	return new QSslCertificate(device, static_cast<QSsl::EncodingFormat>(format));
}

QSslCertificate* QSslCertificate_new5(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QSslCertificate(data_QByteArray);
}

QSslCertificate* QSslCertificate_new6(struct miqt_string data, int format) {
	QByteArray data_QByteArray(data.data, data.len);
	return new QSslCertificate(data_QByteArray, static_cast<QSsl::EncodingFormat>(format));
}

void QSslCertificate_operatorAssign(QSslCertificate* self, QSslCertificate* other) {
	self->operator=(*other);
}

void QSslCertificate_swap(QSslCertificate* self, QSslCertificate* other) {
	self->swap(*other);
}

bool QSslCertificate_operatorEqual(const QSslCertificate* self, QSslCertificate* other) {
	return (*self == *other);
}

bool QSslCertificate_operatorNotEqual(const QSslCertificate* self, QSslCertificate* other) {
	return (*self != *other);
}

bool QSslCertificate_isNull(const QSslCertificate* self) {
	return self->isNull();
}

bool QSslCertificate_isBlacklisted(const QSslCertificate* self) {
	return self->isBlacklisted();
}

bool QSslCertificate_isSelfSigned(const QSslCertificate* self) {
	return self->isSelfSigned();
}

void QSslCertificate_clear(QSslCertificate* self) {
	self->clear();
}

struct miqt_string QSslCertificate_version(const QSslCertificate* self) {
	QByteArray _qb = self->version();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificate_serialNumber(const QSslCertificate* self) {
	QByteArray _qb = self->serialNumber();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificate_digest(const QSslCertificate* self) {
	QByteArray _qb = self->digest();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfo(const QSslCertificate* self, int info) {
	QStringList _ret = self->issuerInfo(static_cast<QSslCertificate::SubjectInfo>(info));
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

struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute) {
	QByteArray attribute_QByteArray(attribute.data, attribute.len);
	QStringList _ret = self->issuerInfo(attribute_QByteArray);
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

struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfo(const QSslCertificate* self, int info) {
	QStringList _ret = self->subjectInfo(static_cast<QSslCertificate::SubjectInfo>(info));
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

struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfoWithAttribute(const QSslCertificate* self, struct miqt_string attribute) {
	QByteArray attribute_QByteArray(attribute.data, attribute.len);
	QStringList _ret = self->subjectInfo(attribute_QByteArray);
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

struct miqt_string QSslCertificate_issuerDisplayName(const QSslCertificate* self) {
	QString _ret = self->issuerDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificate_subjectDisplayName(const QSslCertificate* self) {
	QString _ret = self->subjectDisplayName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QSslCertificate_subjectInfoAttributes(const QSslCertificate* self) {
	QList<QByteArray> _ret = self->subjectInfoAttributes();
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

struct miqt_array /* of struct miqt_string */  QSslCertificate_issuerInfoAttributes(const QSslCertificate* self) {
	QList<QByteArray> _ret = self->issuerInfoAttributes();
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

QDateTime* QSslCertificate_effectiveDate(const QSslCertificate* self) {
	return new QDateTime(self->effectiveDate());
}

QDateTime* QSslCertificate_expiryDate(const QSslCertificate* self) {
	return new QDateTime(self->expiryDate());
}

QSslKey* QSslCertificate_publicKey(const QSslCertificate* self) {
	return new QSslKey(self->publicKey());
}

struct miqt_array /* of QSslCertificateExtension* */  QSslCertificate_extensions(const QSslCertificate* self) {
	QList<QSslCertificateExtension> _ret = self->extensions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QSslCertificateExtension** _arr = static_cast<QSslCertificateExtension**>(malloc(sizeof(QSslCertificateExtension*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QSslCertificateExtension(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QSslCertificate_toPem(const QSslCertificate* self) {
	QByteArray _qb = self->toPem();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificate_toDer(const QSslCertificate* self) {
	QByteArray _qb = self->toDer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslCertificate_toText(const QSslCertificate* self) {
	QString _ret = self->toText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath(struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString);
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

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromDevice(QIODevice* device) {
	QList<QSslCertificate> _ret = QSslCertificate::fromDevice(device);
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

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromData(struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	QList<QSslCertificate> _ret = QSslCertificate::fromData(data_QByteArray);
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

struct miqt_array /* of QSslError* */  QSslCertificate_verify(struct miqt_array /* of QSslCertificate* */  certificateChain) {
	QList<QSslCertificate> certificateChain_QList;
	certificateChain_QList.reserve(certificateChain.len);
	QSslCertificate** certificateChain_arr = static_cast<QSslCertificate**>(certificateChain.data);
	for(size_t i = 0; i < certificateChain.len; ++i) {
		certificateChain_QList.push_back(*(certificateChain_arr[i]));
	}
	QList<QSslError> _ret = QSslCertificate::verify(certificateChain_QList);
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

bool QSslCertificate_importPkcs12(QIODevice* device, QSslKey* key, QSslCertificate* cert) {
	return QSslCertificate::importPkcs12(device, key, cert);
}

void* QSslCertificate_handle(const QSslCertificate* self) {
	Qt::HANDLE _ret = self->handle();
	return static_cast<void*>(_ret);
}

struct miqt_string QSslCertificate_digest1(const QSslCertificate* self, int algorithm) {
	QByteArray _qb = self->digest(static_cast<QCryptographicHash::Algorithm>(algorithm));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath2(struct miqt_string path, int format) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString, static_cast<QSsl::EncodingFormat>(format));
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

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromPath3(struct miqt_string path, int format, int syntax) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	QList<QSslCertificate> _ret = QSslCertificate::fromPath(path_QString, static_cast<QSsl::EncodingFormat>(format), static_cast<QSslCertificate::PatternSyntax>(syntax));
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

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromDevice2(QIODevice* device, int format) {
	QList<QSslCertificate> _ret = QSslCertificate::fromDevice(device, static_cast<QSsl::EncodingFormat>(format));
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

struct miqt_array /* of QSslCertificate* */  QSslCertificate_fromData2(struct miqt_string data, int format) {
	QByteArray data_QByteArray(data.data, data.len);
	QList<QSslCertificate> _ret = QSslCertificate::fromData(data_QByteArray, static_cast<QSsl::EncodingFormat>(format));
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

struct miqt_array /* of QSslError* */  QSslCertificate_verify2(struct miqt_array /* of QSslCertificate* */  certificateChain, struct miqt_string hostName) {
	QList<QSslCertificate> certificateChain_QList;
	certificateChain_QList.reserve(certificateChain.len);
	QSslCertificate** certificateChain_arr = static_cast<QSslCertificate**>(certificateChain.data);
	for(size_t i = 0; i < certificateChain.len; ++i) {
		certificateChain_QList.push_back(*(certificateChain_arr[i]));
	}
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	QList<QSslError> _ret = QSslCertificate::verify(certificateChain_QList, hostName_QString);
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

bool QSslCertificate_importPkcs124(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates) {
	QList<QSslCertificate> caCertificates_QList;
	caCertificates_QList.reserve(caCertificates.len);
	QSslCertificate** caCertificates_arr = static_cast<QSslCertificate**>(caCertificates.data);
	for(size_t i = 0; i < caCertificates.len; ++i) {
		caCertificates_QList.push_back(*(caCertificates_arr[i]));
	}
	return QSslCertificate::importPkcs12(device, key, cert, &caCertificates_QList);
}

bool QSslCertificate_importPkcs125(QIODevice* device, QSslKey* key, QSslCertificate* cert, struct miqt_array /* of QSslCertificate* */  caCertificates, struct miqt_string passPhrase) {
	QList<QSslCertificate> caCertificates_QList;
	caCertificates_QList.reserve(caCertificates.len);
	QSslCertificate** caCertificates_arr = static_cast<QSslCertificate**>(caCertificates.data);
	for(size_t i = 0; i < caCertificates.len; ++i) {
		caCertificates_QList.push_back(*(caCertificates_arr[i]));
	}
	QByteArray passPhrase_QByteArray(passPhrase.data, passPhrase.len);
	return QSslCertificate::importPkcs12(device, key, cert, &caCertificates_QList, passPhrase_QByteArray);
}

void QSslCertificate_delete(QSslCertificate* self) {
	delete self;
}

