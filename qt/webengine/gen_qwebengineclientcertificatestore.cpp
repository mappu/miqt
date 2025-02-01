#include <QList>
#include <QSslCertificate>
#include <QSslKey>
#include <QWebEngineClientCertificateStore>
#include <qwebengineclientcertificatestore.h>
#include "gen_qwebengineclientcertificatestore.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QWebEngineClientCertificateStore_add(QWebEngineClientCertificateStore* self, QSslCertificate* certificate, QSslKey* privateKey) {
	self->add(*certificate, *privateKey);
}

struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateStore_certificates(const QWebEngineClientCertificateStore* self) {
	QVector<QSslCertificate> _ret = self->certificates();
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

void QWebEngineClientCertificateStore_remove(QWebEngineClientCertificateStore* self, QSslCertificate* certificate) {
	self->remove(*certificate);
}

void QWebEngineClientCertificateStore_clear(QWebEngineClientCertificateStore* self) {
	self->clear();
}

