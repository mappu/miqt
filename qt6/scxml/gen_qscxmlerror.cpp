#include <QScxmlError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscxmlerror.h>
#include "gen_qscxmlerror.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QScxmlError* QScxmlError_new() {
	return new (std::nothrow) QScxmlError();
}

QScxmlError* QScxmlError_new2(struct miqt_string fileName, int line, int column, struct miqt_string description) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString description_QString = QString::fromUtf8(description.data, description.len);
	return new (std::nothrow) QScxmlError(fileName_QString, static_cast<int>(line), static_cast<int>(column), description_QString);
}

QScxmlError* QScxmlError_new3(QScxmlError* param1) {
	return new (std::nothrow) QScxmlError(*param1);
}

void QScxmlError_operatorAssign(QScxmlError* self, QScxmlError* param1) {
	self->operator=(*param1);
}

bool QScxmlError_isValid(const QScxmlError* self) {
	return self->isValid();
}

struct miqt_string QScxmlError_fileName(const QScxmlError* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScxmlError_line(const QScxmlError* self) {
	return self->line();
}

int QScxmlError_column(const QScxmlError* self) {
	return self->column();
}

struct miqt_string QScxmlError_description(const QScxmlError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScxmlError_toString(const QScxmlError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QScxmlError_delete(QScxmlError* self) {
	delete self;
}

