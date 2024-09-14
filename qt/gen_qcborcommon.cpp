#include <QCborError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcborcommon.h"
#include "gen_qcborcommon.h"
#include "_cgo_export.h"

struct miqt_string* QCborError_ToString(const QCborError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

void QCborError_Delete(QCborError* self) {
	delete self;
}

