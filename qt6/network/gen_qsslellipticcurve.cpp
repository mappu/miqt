#include <QSslEllipticCurve>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslellipticcurve.h>
#include "gen_qsslellipticcurve.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSslEllipticCurve* QSslEllipticCurve_new() {
	return new QSslEllipticCurve();
}

QSslEllipticCurve* QSslEllipticCurve_new2(QSslEllipticCurve* param1) {
	return new QSslEllipticCurve(*param1);
}

QSslEllipticCurve* QSslEllipticCurve_fromShortName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslEllipticCurve(QSslEllipticCurve::fromShortName(name_QString));
}

QSslEllipticCurve* QSslEllipticCurve_fromLongName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslEllipticCurve(QSslEllipticCurve::fromLongName(name_QString));
}

struct miqt_string QSslEllipticCurve_shortName(const QSslEllipticCurve* self) {
	QString _ret = self->shortName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslEllipticCurve_longName(const QSslEllipticCurve* self) {
	QString _ret = self->longName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSslEllipticCurve_isValid(const QSslEllipticCurve* self) {
	return self->isValid();
}

bool QSslEllipticCurve_isTlsNamedCurve(const QSslEllipticCurve* self) {
	return self->isTlsNamedCurve();
}

void QSslEllipticCurve_delete(QSslEllipticCurve* self) {
	delete self;
}

