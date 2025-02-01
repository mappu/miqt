#include <QDateTime>
#include <QHstsPolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qhstspolicy.h>
#include "gen_qhstspolicy.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QHstsPolicy* QHstsPolicy_new() {
	return new QHstsPolicy();
}

QHstsPolicy* QHstsPolicy_new2(QDateTime* expiry, int flags, struct miqt_string host) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	return new QHstsPolicy(*expiry, static_cast<QHstsPolicy::PolicyFlags>(flags), host_QString);
}

QHstsPolicy* QHstsPolicy_new3(QHstsPolicy* rhs) {
	return new QHstsPolicy(*rhs);
}

QHstsPolicy* QHstsPolicy_new4(QDateTime* expiry, int flags, struct miqt_string host, int mode) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	return new QHstsPolicy(*expiry, static_cast<QHstsPolicy::PolicyFlags>(flags), host_QString, static_cast<QUrl::ParsingMode>(mode));
}

void QHstsPolicy_operatorAssign(QHstsPolicy* self, QHstsPolicy* rhs) {
	self->operator=(*rhs);
}

void QHstsPolicy_swap(QHstsPolicy* self, QHstsPolicy* other) {
	self->swap(*other);
}

void QHstsPolicy_setHost(QHstsPolicy* self, struct miqt_string host) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString);
}

struct miqt_string QHstsPolicy_host(const QHstsPolicy* self) {
	QString _ret = self->host();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHstsPolicy_setExpiry(QHstsPolicy* self, QDateTime* expiry) {
	self->setExpiry(*expiry);
}

QDateTime* QHstsPolicy_expiry(const QHstsPolicy* self) {
	return new QDateTime(self->expiry());
}

void QHstsPolicy_setIncludesSubDomains(QHstsPolicy* self, bool include) {
	self->setIncludesSubDomains(include);
}

bool QHstsPolicy_includesSubDomains(const QHstsPolicy* self) {
	return self->includesSubDomains();
}

bool QHstsPolicy_isExpired(const QHstsPolicy* self) {
	return self->isExpired();
}

void QHstsPolicy_setHost2(QHstsPolicy* self, struct miqt_string host, int mode) {
	QString host_QString = QString::fromUtf8(host.data, host.len);
	self->setHost(host_QString, static_cast<QUrl::ParsingMode>(mode));
}

struct miqt_string QHstsPolicy_host1(const QHstsPolicy* self, int options) {
	QString _ret = self->host(static_cast<QUrl::ComponentFormattingOptions>(options));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHstsPolicy_delete(QHstsPolicy* self) {
	delete self;
}

