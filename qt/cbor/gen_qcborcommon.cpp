#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcborcommon.h>
#include "gen_qcborcommon.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

struct miqt_string QCborError_ToString(const QCborError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborError_Delete(QCborError* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QCborError*>( self );
	} else {
		delete self;
	}
}

