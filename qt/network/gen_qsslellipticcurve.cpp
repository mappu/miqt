#include <QSslEllipticCurve>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsslellipticcurve.h>
#include "gen_qsslellipticcurve.h"
#include "_cgo_export.h"

void QSslEllipticCurve_new(QSslEllipticCurve** outptr_QSslEllipticCurve) {
	QSslEllipticCurve* ret = new QSslEllipticCurve();
	*outptr_QSslEllipticCurve = ret;
}

void QSslEllipticCurve_new2(QSslEllipticCurve* param1, QSslEllipticCurve** outptr_QSslEllipticCurve) {
	QSslEllipticCurve* ret = new QSslEllipticCurve(*param1);
	*outptr_QSslEllipticCurve = ret;
}

QSslEllipticCurve* QSslEllipticCurve_FromShortName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslEllipticCurve(QSslEllipticCurve::fromShortName(name_QString));
}

QSslEllipticCurve* QSslEllipticCurve_FromLongName(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QSslEllipticCurve(QSslEllipticCurve::fromLongName(name_QString));
}

struct miqt_string QSslEllipticCurve_ShortName(const QSslEllipticCurve* self) {
	QString _ret = self->shortName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSslEllipticCurve_LongName(const QSslEllipticCurve* self) {
	QString _ret = self->longName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSslEllipticCurve_IsValid(const QSslEllipticCurve* self) {
	return self->isValid();
}

bool QSslEllipticCurve_IsTlsNamedCurve(const QSslEllipticCurve* self) {
	return self->isTlsNamedCurve();
}

void QSslEllipticCurve_Delete(QSslEllipticCurve* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSslEllipticCurve*>( self );
	} else {
		delete self;
	}
}

