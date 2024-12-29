#include <QRandomGenerator>
#include <QRandomGenerator64>
#include <qrandom.h>
#include "gen_qrandom.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QRandomGenerator* QRandomGenerator_new() {
	return new QRandomGenerator();
}

QRandomGenerator* QRandomGenerator_new2(const unsigned int* seedBuffer, ptrdiff_t lenVal) {
	return new QRandomGenerator(static_cast<const quint32*>(seedBuffer), (qsizetype)(lenVal));
}

QRandomGenerator* QRandomGenerator_new3(const unsigned int* begin, const unsigned int* end) {
	return new QRandomGenerator(static_cast<const quint32*>(begin), static_cast<const quint32*>(end));
}

QRandomGenerator* QRandomGenerator_new4(QRandomGenerator* other) {
	return new QRandomGenerator(*other);
}

QRandomGenerator* QRandomGenerator_new5(unsigned int seedValue) {
	return new QRandomGenerator(static_cast<quint32>(seedValue));
}

void QRandomGenerator_OperatorAssign(QRandomGenerator* self, QRandomGenerator* other) {
	self->operator=(*other);
}

unsigned int QRandomGenerator_Generate(QRandomGenerator* self) {
	quint32 _ret = self->generate();
	return static_cast<unsigned int>(_ret);
}

unsigned long long QRandomGenerator_Generate64(QRandomGenerator* self) {
	quint64 _ret = self->generate64();
	return static_cast<unsigned long long>(_ret);
}

double QRandomGenerator_GenerateDouble(QRandomGenerator* self) {
	return self->generateDouble();
}

double QRandomGenerator_Bounded(QRandomGenerator* self, double highest) {
	return self->bounded(static_cast<double>(highest));
}

unsigned int QRandomGenerator_BoundedWithHighest(QRandomGenerator* self, unsigned int highest) {
	quint32 _ret = self->bounded(static_cast<quint32>(highest));
	return static_cast<unsigned int>(_ret);
}

unsigned int QRandomGenerator_Bounded2(QRandomGenerator* self, unsigned int lowest, unsigned int highest) {
	quint32 _ret = self->bounded(static_cast<quint32>(lowest), static_cast<quint32>(highest));
	return static_cast<unsigned int>(_ret);
}

int QRandomGenerator_Bounded3(QRandomGenerator* self, int highest) {
	return self->bounded(static_cast<int>(highest));
}

int QRandomGenerator_Bounded4(QRandomGenerator* self, int lowest, int highest) {
	return self->bounded(static_cast<int>(lowest), static_cast<int>(highest));
}

unsigned long long QRandomGenerator_Bounded5(QRandomGenerator* self, unsigned long long highest) {
	quint64 _ret = self->bounded(static_cast<quint64>(highest));
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QRandomGenerator_Bounded6(QRandomGenerator* self, unsigned long long lowest, unsigned long long highest) {
	quint64 _ret = self->bounded(static_cast<quint64>(lowest), static_cast<quint64>(highest));
	return static_cast<unsigned long long>(_ret);
}

long long QRandomGenerator_Bounded7(QRandomGenerator* self, long long highest) {
	qint64 _ret = self->bounded(static_cast<qint64>(highest));
	return static_cast<long long>(_ret);
}

long long QRandomGenerator_Bounded8(QRandomGenerator* self, long long lowest, long long highest) {
	qint64 _ret = self->bounded(static_cast<qint64>(lowest), static_cast<qint64>(highest));
	return static_cast<long long>(_ret);
}

long long QRandomGenerator_Bounded9(QRandomGenerator* self, int lowest, long long highest) {
	qint64 _ret = self->bounded(static_cast<int>(lowest), static_cast<qint64>(highest));
	return static_cast<long long>(_ret);
}

long long QRandomGenerator_Bounded10(QRandomGenerator* self, long long lowest, int highest) {
	qint64 _ret = self->bounded(static_cast<qint64>(lowest), static_cast<int>(highest));
	return static_cast<long long>(_ret);
}

unsigned long long QRandomGenerator_Bounded11(QRandomGenerator* self, unsigned int lowest, unsigned long long highest) {
	quint64 _ret = self->bounded(static_cast<unsigned int>(lowest), static_cast<quint64>(highest));
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QRandomGenerator_Bounded12(QRandomGenerator* self, unsigned long long lowest, unsigned int highest) {
	quint64 _ret = self->bounded(static_cast<quint64>(lowest), static_cast<unsigned int>(highest));
	return static_cast<unsigned long long>(_ret);
}

void QRandomGenerator_Generate2(QRandomGenerator* self, unsigned int* begin, unsigned int* end) {
	self->generate(static_cast<quint32*>(begin), static_cast<quint32*>(end));
}

unsigned int QRandomGenerator_OperatorCall(QRandomGenerator* self) {
	QRandomGenerator::result_type _ret = self->operator()();
	return static_cast<unsigned int>(_ret);
}

void QRandomGenerator_Seed(QRandomGenerator* self) {
	self->seed();
}

void QRandomGenerator_Discard(QRandomGenerator* self, unsigned long long z) {
	self->discard(static_cast<unsigned long long>(z));
}

unsigned int QRandomGenerator_Min() {
	QRandomGenerator::result_type _ret = QRandomGenerator::min();
	return static_cast<unsigned int>(_ret);
}

unsigned int QRandomGenerator_Max() {
	QRandomGenerator::result_type _ret = QRandomGenerator::max();
	return static_cast<unsigned int>(_ret);
}

QRandomGenerator* QRandomGenerator_System() {
	return QRandomGenerator::system();
}

QRandomGenerator* QRandomGenerator_Global() {
	return QRandomGenerator::global();
}

QRandomGenerator* QRandomGenerator_SecurelySeeded() {
	return new QRandomGenerator(QRandomGenerator::securelySeeded());
}

void QRandomGenerator_Seed1(QRandomGenerator* self, unsigned int s) {
	self->seed(static_cast<quint32>(s));
}

void QRandomGenerator_Delete(QRandomGenerator* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRandomGenerator*>( self );
	} else {
		delete self;
	}
}

QRandomGenerator64* QRandomGenerator64_new() {
	return new QRandomGenerator64();
}

QRandomGenerator64* QRandomGenerator64_new2(const unsigned int* seedBuffer, ptrdiff_t lenVal) {
	return new QRandomGenerator64(static_cast<const quint32*>(seedBuffer), (qsizetype)(lenVal));
}

QRandomGenerator64* QRandomGenerator64_new3(const unsigned int* begin, const unsigned int* end) {
	return new QRandomGenerator64(static_cast<const quint32*>(begin), static_cast<const quint32*>(end));
}

QRandomGenerator64* QRandomGenerator64_new4(QRandomGenerator* other) {
	return new QRandomGenerator64(*other);
}

QRandomGenerator64* QRandomGenerator64_new5(QRandomGenerator64* param1) {
	return new QRandomGenerator64(*param1);
}

QRandomGenerator64* QRandomGenerator64_new6(unsigned int seedValue) {
	return new QRandomGenerator64(static_cast<quint32>(seedValue));
}

void QRandomGenerator64_virtbase(QRandomGenerator64* src, QRandomGenerator** outptr_QRandomGenerator) {
	*outptr_QRandomGenerator = static_cast<QRandomGenerator*>(src);
}

unsigned long long QRandomGenerator64_Generate(QRandomGenerator64* self) {
	quint64 _ret = self->generate();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QRandomGenerator64_OperatorCall(QRandomGenerator64* self) {
	QRandomGenerator64::result_type _ret = self->operator()();
	return static_cast<unsigned long long>(_ret);
}

void QRandomGenerator64_Discard(QRandomGenerator64* self, unsigned long long z) {
	self->discard(static_cast<unsigned long long>(z));
}

unsigned long long QRandomGenerator64_Min() {
	QRandomGenerator64::result_type _ret = QRandomGenerator64::min();
	return static_cast<unsigned long long>(_ret);
}

unsigned long long QRandomGenerator64_Max() {
	QRandomGenerator64::result_type _ret = QRandomGenerator64::max();
	return static_cast<unsigned long long>(_ret);
}

QRandomGenerator64* QRandomGenerator64_System() {
	return QRandomGenerator64::system();
}

QRandomGenerator64* QRandomGenerator64_Global() {
	return QRandomGenerator64::global();
}

QRandomGenerator64* QRandomGenerator64_SecurelySeeded() {
	return new QRandomGenerator64(QRandomGenerator64::securelySeeded());
}

void QRandomGenerator64_OperatorAssign(QRandomGenerator64* self, QRandomGenerator64* param1) {
	self->operator=(*param1);
}

void QRandomGenerator64_Delete(QRandomGenerator64* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QRandomGenerator64*>( self );
	} else {
		delete self;
	}
}

