#include "gen_quuid.h"
#include "quuid.h"

#include <QByteArray>
#include <QString>
#include <QUuid>


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

QUuid* QUuid_new4(char* param1) {
	return new QUuid(param1);
}

QUuid* QUuid_new5(QByteArray* param1) {
	return new QUuid(*param1);
}

QUuid* QUuid_new6(QUuid* param1) {
	return new QUuid(*param1);
}

void QUuid_ToString(QUuid* self, char** _out, int* _out_Strlen) {
	QString ret = self->toString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QByteArray* QUuid_ToByteArray(QUuid* self) {
	QByteArray ret = self->toByteArray();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QByteArray* QUuid_ToRfc4122(QUuid* self) {
	QByteArray ret = self->toRfc4122();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QByteArray*>(new QByteArray(ret));
}

QUuid* QUuid_FromRfc4122(QByteArray* param1) {
	QUuid ret = QUuid::fromRfc4122(*param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QUuid*>(new QUuid(ret));
}

bool QUuid_IsNull(QUuid* self) {
	return self->isNull();
}

bool QUuid_OperatorEqual(QUuid* self, QUuid* orig) {
	return self->operator==(*orig);
}

bool QUuid_OperatorNotEqual(QUuid* self, QUuid* orig) {
	return self->operator!=(*orig);
}

bool QUuid_OperatorLesser(QUuid* self, QUuid* other) {
	return self->operator<(*other);
}

bool QUuid_OperatorGreater(QUuid* self, QUuid* other) {
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

void QUuid_Delete(QUuid* self) {
	delete self;
}

