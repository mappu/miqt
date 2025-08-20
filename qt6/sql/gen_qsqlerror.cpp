#include <QSqlError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qsqlerror.h>
#include "gen_qsqlerror.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QSqlError* QSqlError_new() {
	return new (std::nothrow) QSqlError();
}

QSqlError* QSqlError_new2(QSqlError* other) {
	return new (std::nothrow) QSqlError(*other);
}

QSqlError* QSqlError_new3(struct miqt_string driverText) {
	QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
	return new (std::nothrow) QSqlError(driverText_QString);
}

QSqlError* QSqlError_new4(struct miqt_string driverText, struct miqt_string databaseText) {
	QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
	QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
	return new (std::nothrow) QSqlError(driverText_QString, databaseText_QString);
}

QSqlError* QSqlError_new5(struct miqt_string driverText, struct miqt_string databaseText, int type) {
	QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
	QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
	return new (std::nothrow) QSqlError(driverText_QString, databaseText_QString, static_cast<QSqlError::ErrorType>(type));
}

QSqlError* QSqlError_new6(struct miqt_string driverText, struct miqt_string databaseText, int type, struct miqt_string errorCode) {
	QString driverText_QString = QString::fromUtf8(driverText.data, driverText.len);
	QString databaseText_QString = QString::fromUtf8(databaseText.data, databaseText.len);
	QString errorCode_QString = QString::fromUtf8(errorCode.data, errorCode.len);
	return new (std::nothrow) QSqlError(driverText_QString, databaseText_QString, static_cast<QSqlError::ErrorType>(type), errorCode_QString);
}

void QSqlError_operatorAssign(QSqlError* self, QSqlError* other) {
	self->operator=(*other);
}

bool QSqlError_operatorEqual(const QSqlError* self, QSqlError* other) {
	return (*self == *other);
}

bool QSqlError_operatorNotEqual(const QSqlError* self, QSqlError* other) {
	return (*self != *other);
}

void QSqlError_swap(QSqlError* self, QSqlError* other) {
	self->swap(*other);
}

struct miqt_string QSqlError_driverText(const QSqlError* self) {
	QString _ret = self->driverText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlError_databaseText(const QSqlError* self) {
	QString _ret = self->databaseText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSqlError_type(const QSqlError* self) {
	QSqlError::ErrorType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QSqlError_nativeErrorCode(const QSqlError* self) {
	QString _ret = self->nativeErrorCode();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlError_text(const QSqlError* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlError_isValid(const QSqlError* self) {
	return self->isValid();
}

void QSqlError_delete(QSqlError* self) {
	delete self;
}

