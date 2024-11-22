#include <QAnyStringView>
#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#include <quuid.h>
#include "gen_quuid.h"
#include "_cgo_export.h"

void QUuid_new(QUuid** outptr_QUuid) {
	QUuid* ret = new QUuid();
	*outptr_QUuid = ret;
}

void QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8, QUuid** outptr_QUuid) {
	QUuid* ret = new QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
	*outptr_QUuid = ret;
}

void QUuid_new3(QAnyStringView* stringVal, QUuid** outptr_QUuid) {
	QUuid* ret = new QUuid(*stringVal);
	*outptr_QUuid = ret;
}

void QUuid_new4(QUuid* param1, QUuid** outptr_QUuid) {
	QUuid* ret = new QUuid(*param1);
	*outptr_QUuid = ret;
}

QUuid* QUuid_FromString(QAnyStringView* stringVal) {
	return new QUuid(QUuid::fromString(*stringVal));
}

struct miqt_string QUuid_ToString(const QUuid* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_ToByteArray(const QUuid* self) {
	QByteArray _qb = self->toByteArray();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_ToRfc4122(const QUuid* self) {
	QByteArray _qb = self->toRfc4122();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

QUuid* QUuid_FromRfc4122(QByteArrayView* param1) {
	return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_IsNull(const QUuid* self) {
	return self->isNull();
}

bool QUuid_OperatorEqual(const QUuid* self, QUuid* orig) {
	return (*self == *orig);
}

bool QUuid_OperatorNotEqual(const QUuid* self, QUuid* orig) {
	return (*self != *orig);
}

bool QUuid_OperatorLesser(const QUuid* self, QUuid* other) {
	return (*self < *other);
}

bool QUuid_OperatorGreater(const QUuid* self, QUuid* other) {
	return (*self > *other);
}

QUuid* QUuid_CreateUuid() {
	return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_CreateUuidV3(QUuid* ns, struct miqt_string baseData) {
	QByteArray baseData_QByteArray(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV3(*ns, baseData_QByteArray));
}

QUuid* QUuid_CreateUuidV5(QUuid* ns, struct miqt_string baseData) {
	QByteArray baseData_QByteArray(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV5(*ns, baseData_QByteArray));
}

QUuid* QUuid_CreateUuidV32(QUuid* ns, struct miqt_string baseData) {
	QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV3(*ns, baseData_QString));
}

QUuid* QUuid_CreateUuidV52(QUuid* ns, struct miqt_string baseData) {
	QString baseData_QString = QString::fromUtf8(baseData.data, baseData.len);
	return new QUuid(QUuid::createUuidV5(*ns, baseData_QString));
}

int QUuid_Variant(const QUuid* self) {
	QUuid::Variant _ret = self->variant();
	return static_cast<int>(_ret);
}

int QUuid_Version(const QUuid* self) {
	QUuid::Version _ret = self->version();
	return static_cast<int>(_ret);
}

struct miqt_string QUuid_ToString1(const QUuid* self, int mode) {
	QString _ret = self->toString(static_cast<QUuid::StringFormat>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUuid_ToByteArray1(const QUuid* self, int mode) {
	QByteArray _qb = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QUuid_Delete(QUuid* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QUuid*>( self );
	} else {
		delete self;
	}
}

