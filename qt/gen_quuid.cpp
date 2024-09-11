#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUuid>
#include "quuid.h"

#include "gen_quuid.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QUuid* QUuid_new() {
	return new QUuid();
}

QUuid* QUuid_new2(unsigned int l, uint16_t w1, uint16_t w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8) {
	return new QUuid(static_cast<uint>(l), static_cast<ushort>(w1), static_cast<ushort>(w2), static_cast<uchar>(b1), static_cast<uchar>(b2), static_cast<uchar>(b3), static_cast<uchar>(b4), static_cast<uchar>(b5), static_cast<uchar>(b6), static_cast<uchar>(b7), static_cast<uchar>(b8));
}

QUuid* QUuid_new3(const char* param1, size_t param1_Strlen) {
	QString param1_QString = QString::fromUtf8(param1, param1_Strlen);
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

void QUuid_ToString(const QUuid* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QUuid_ToStringWithMode(const QUuid* self, uintptr_t mode, char** _out, int* _out_Strlen) {
	QString ret = self->toString(static_cast<QUuid::StringFormat>(mode));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QUuid_ToByteArray(const QUuid* self) {
	QByteArray ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QUuid_ToByteArrayWithMode(const QUuid* self, uintptr_t mode) {
	QByteArray ret = self->toByteArray(static_cast<QUuid::StringFormat>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QUuid_ToRfc4122(const QUuid* self) {
	QByteArray ret = self->toRfc4122();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QUuid* QUuid_FromRfc4122(QByteArray* param1) {
	QUuid ret = QUuid::fromRfc4122(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
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
	QUuid ret = QUuid::createUuid();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QUuid* QUuid_CreateUuidV3(QUuid* ns, QByteArray* baseData) {
	QUuid ret = QUuid::createUuidV3(*ns, *baseData);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QUuid* QUuid_CreateUuidV5(QUuid* ns, QByteArray* baseData) {
	QUuid ret = QUuid::createUuidV5(*ns, *baseData);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QUuid* QUuid_CreateUuidV32(QUuid* ns, const char* baseData, size_t baseData_Strlen) {
	QString baseData_QString = QString::fromUtf8(baseData, baseData_Strlen);
	QUuid ret = QUuid::createUuidV3(*ns, baseData_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

QUuid* QUuid_CreateUuidV52(QUuid* ns, const char* baseData, size_t baseData_Strlen) {
	QString baseData_QString = QString::fromUtf8(baseData, baseData_Strlen);
	QUuid ret = QUuid::createUuidV5(*ns, baseData_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

uintptr_t QUuid_Variant(const QUuid* self) {
	QUuid::Variant ret = self->variant();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QUuid_Version(const QUuid* self) {
	QUuid::Version ret = self->version();
	return static_cast<uintptr_t>(ret);
}

void QUuid_Delete(QUuid* self) {
	delete self;
}

