#include <QObject>
#include <QQmlError>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <qqmlerror.h>
#include "gen_qqmlerror.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QQmlError* QQmlError_new() {
	return new QQmlError();
}

QQmlError* QQmlError_new2(QQmlError* param1) {
	return new QQmlError(*param1);
}

void QQmlError_operatorAssign(QQmlError* self, QQmlError* param1) {
	self->operator=(*param1);
}

void QQmlError_swap(QQmlError* self, QQmlError* other) {
	self->swap(*other);
}

bool QQmlError_isValid(const QQmlError* self) {
	return self->isValid();
}

QUrl* QQmlError_url(const QQmlError* self) {
	return new QUrl(self->url());
}

void QQmlError_setUrl(QQmlError* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_string QQmlError_description(const QQmlError* self) {
	QString _ret = self->description();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlError_setDescription(QQmlError* self, struct miqt_string description) {
	QString description_QString = QString::fromUtf8(description.data, description.len);
	self->setDescription(description_QString);
}

int QQmlError_line(const QQmlError* self) {
	return self->line();
}

void QQmlError_setLine(QQmlError* self, int line) {
	self->setLine(static_cast<int>(line));
}

int QQmlError_column(const QQmlError* self) {
	return self->column();
}

void QQmlError_setColumn(QQmlError* self, int column) {
	self->setColumn(static_cast<int>(column));
}

QObject* QQmlError_object(const QQmlError* self) {
	return self->object();
}

void QQmlError_setObject(QQmlError* self, QObject* object) {
	self->setObject(object);
}

struct miqt_string QQmlError_toString(const QQmlError* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlError_delete(QQmlError* self) {
	delete self;
}

