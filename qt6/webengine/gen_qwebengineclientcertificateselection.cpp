#include <QList>
#include <QSslCertificate>
#include <QUrl>
#include <QWebEngineClientCertificateSelection>
#include <qwebengineclientcertificateselection.h>
#include "gen_qwebengineclientcertificateselection.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineClientCertificateSelection* QWebEngineClientCertificateSelection_new(QWebEngineClientCertificateSelection* param1) {
	return new QWebEngineClientCertificateSelection(*param1);
}

void QWebEngineClientCertificateSelection_operatorAssign(QWebEngineClientCertificateSelection* self, QWebEngineClientCertificateSelection* param1) {
	self->operator=(*param1);
}

QUrl* QWebEngineClientCertificateSelection_host(const QWebEngineClientCertificateSelection* self) {
	return new QUrl(self->host());
}

void QWebEngineClientCertificateSelection_select(QWebEngineClientCertificateSelection* self, QSslCertificate* certificate) {
	self->select(*certificate);
}

void QWebEngineClientCertificateSelection_selectNone(QWebEngineClientCertificateSelection* self) {
	self->selectNone();
}

struct miqt_array /* of QSslCertificate* */  QWebEngineClientCertificateSelection_certificates(const QWebEngineClientCertificateSelection* self) {
	QList<QSslCertificate> _ret = self->certificates();
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

void QWebEngineClientCertificateSelection_delete(QWebEngineClientCertificateSelection* self) {
	delete self;
}

