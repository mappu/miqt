#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#include "quuid.h"
#include "gen_quuid.h"
#include "_cgo_export.h"

QUuid* QUuid_new() {
	return new QUuid();
}

QUuid* QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
	return new QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
}

QUuid* QUuid_new3(struct miqt_string* param1) {
	QString param1_QString = QString::fromUtf8(&param1->data, param1->len);
	return new QUuid(param1_QString);
}

QUuid* QUuid_new4(const char* param1) {
	return new QUuid(param1);
}

QUuid* QUuid_new5(QByteArray* param1) {
	return new QUuid(*param1);
}

QUuid* QUuid_new6(QUuid* param1) {
	return new QUuid(*param1);
}

struct miqt_string* QUuid_ToString(const QUuid* self) {
	QString _ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

struct miqt_string* QUuid_ToStringWithMode(const QUuid* self, int mode) {
	QString _ret = self->toString(static_cast<QUuid::StringFormat>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	return miqt_strdup(_b.data(), _b.length());
}

QByteArray* QUuid_ToByteArray(const QUuid* self) {
	return new QByteArray(self->toByteArray());
}

QByteArray* QUuid_ToByteArrayWithMode(const QUuid* self, int mode) {
	return new QByteArray(self->toByteArray(static_cast<QUuid::StringFormat>(mode)));
}

QByteArray* QUuid_ToRfc4122(const QUuid* self) {
	return new QByteArray(self->toRfc4122());
}

QUuid* QUuid_FromRfc4122(QByteArray* param1) {
	return new QUuid(QUuid::fromRfc4122(*param1));
}

bool QUuid_IsNull(const QUuid* self) {
	return self->isNull();
}

bool QUuid_OperatorEqual(const QUuid* self, QUuid* orig) {
	return self->operator==(*orig);
}

bool QUuid_OperatorNotEqual(const QUuid* self, QUuid* orig) {
	return self->operator!=(*orig);
}

bool QUuid_OperatorLesser(const QUuid* self, QUuid* other) {
	return self->operator<(*other);
}

bool QUuid_OperatorGreater(const QUuid* self, QUuid* other) {
	return self->operator>(*other);
}

QUuid* QUuid_CreateUuid() {
	return new QUuid(QUuid::createUuid());
}

QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArray* baseData) {
	return new QUuid(QUuid::createUuidV3(*ns, *baseData));
}

QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArray* baseData) {
	return new QUuid(QUuid::createUuidV5(*ns, *baseData));
}

QUuid* QUuid_CreateUuidV32(QUuid* ns, struct miqt_string* baseData) {
	QString baseData_QString = QString::fromUtf8(&baseData->data, baseData->len);
	return new QUuid(QUuid::createUuidV3(*ns, baseData_QString));
}

QUuid* QUuid_CreateUuidV52(QUuid* ns, struct miqt_string* baseData) {
	QString baseData_QString = QString::fromUtf8(&baseData->data, baseData->len);
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

void QUuid_Delete(QUuid* self) {
	delete self;
}

