#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#include <quuid.h>
#include "gen_quuid.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QUuid* QUuid_new() {
	return new (std::nothrow) QUuid();
}

QUuid* QUuid_new2(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
	return new (std::nothrow) QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
}

QUuid* QUuid_new3(QAnyStringView* string) {
	return new (std::nothrow) QUuid(*string);
}

QUuid* QUuid_new4(QUuid* param1) {
	return new (std::nothrow) QUuid(*param1);
}

QUuid* QUuid_fromString(QAnyStringView* string) {
	return new QUuid(QUuid::fromString(*string));
}

struct miqt_string QUuid_toString(const QUuid* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArray(const QUuid* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toRfc4122(const QUuid* self) {
	QByteArray _qb = self->toRfc4122();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUuid* QUuid_fromRfc4122(QByteArrayView* param1) {
	return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_isNull(const QUuid* self) {
	return self->isNull();
}

bool QUuid_operatorEqual(const QUuid* self, QUuid* orig) {
	return (*self == *orig);
}

bool QUuid_operatorNotEqual(const QUuid* self, QUuid* orig) {
	return (*self != *orig);
}

bool QUuid_operatorLesser(const QUuid* self, QUuid* other) {
	return (*self < *other);
}

bool QUuid_operatorGreater(const QUuid* self, QUuid* other) {
	return (*self > *other);
}

QUuid* QUuid_createUuid() {
	return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_createUuidV3(QUuid* ns, struct miqt_string baseData) {
	QByteArray baseData_QByteArray(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV3(*ns, baseData_QByteArray));
}

QUuid* QUuid_createUuidV5(QUuid* ns, struct miqt_string baseData) {
	QByteArray baseData_QByteArray(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV5(*ns, baseData_QByteArray));
}

QUuid* QUuid_createUuidV32(QUuid* ns, struct miqt_string baseData) {
	QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV3(*ns, baseData_QString));
}

QUuid* QUuid_createUuidV52(QUuid* ns, struct miqt_string baseData) {
	QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV5(*ns, baseData_QString));
}

int QUuid_variant(const QUuid* self) {
	QUuid::Variant _ret = self->variant();
	return static_cast<int>(_ret);
}

int QUuid_version(const QUuid* self) {
	QUuid::Version _ret = self->version();
	return static_cast<int>(_ret);
}

struct miqt_string QUuid_toStringWithMode(const QUuid* self, int mode) {
	QString _ret = self->toString(static_cast<QUuid::StringFormat>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_toByteArrayWithMode(const QUuid* self, int mode) {
	QByteArray _qb = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QUuid_delete(QUuid* self) {
	delete self;
}

