#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qcborcommon.h>
#include "gen_qcborcommon.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QCborError_ToQCborError__Code(const QCborError* self) {
	QCborError::Code _ret = self->operator QCborError::Code();
	return static_cast<int>(_ret);
}

struct miqt_string QCborError_toString(const QCborError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCborError_delete(QCborError* self) {
	delete self;
}

