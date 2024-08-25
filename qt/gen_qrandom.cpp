#include "gen_qrandom.h"
#include "qrandom.h"

#include <QRandomGenerator>
#include <QRandomGenerator64>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QRandomGenerator* QRandomGenerator_new() {
	return new QRandomGenerator();
}

QRandomGenerator* QRandomGenerator_new2(uint32_t* seedBuffer, size_t lenVal) {
	return new QRandomGenerator(static_cast<quint32*>(seedBuffer), static_cast<qsizetype>(lenVal));
}

QRandomGenerator* QRandomGenerator_new3(uint32_t* begin, uint32_t* end) {
	return new QRandomGenerator(static_cast<quint32*>(begin), static_cast<quint32*>(end));
}

QRandomGenerator* QRandomGenerator_new4(QRandomGenerator* other) {
	return new QRandomGenerator(*other);
}

QRandomGenerator* QRandomGenerator_new5(uint32_t seedValue) {
	return new QRandomGenerator(static_cast<quint32>(seedValue));
}

void QRandomGenerator_OperatorAssign(QRandomGenerator* self, QRandomGenerator* other) {
	self->operator=(*other);
}

uint32_t QRandomGenerator_Generate(QRandomGenerator* self) {
	return self->generate();
}

uint64_t QRandomGenerator_Generate64(QRandomGenerator* self) {
	return self->generate64();
}

double QRandomGenerator_GenerateDouble(QRandomGenerator* self) {
	return self->generateDouble();
}

double QRandomGenerator_Bounded(QRandomGenerator* self, double highest) {
	return self->bounded(static_cast<double>(highest));
}

uint32_t QRandomGenerator_BoundedWithHighest(QRandomGenerator* self, uint32_t highest) {
	return self->bounded(static_cast<quint32>(highest));
}

uint32_t QRandomGenerator_Bounded2(QRandomGenerator* self, uint32_t lowest, uint32_t highest) {
	return self->bounded(static_cast<quint32>(lowest), static_cast<quint32>(highest));
}

int QRandomGenerator_Bounded3(QRandomGenerator* self, int highest) {
	return self->bounded(static_cast<int>(highest));
}

int QRandomGenerator_Bounded4(QRandomGenerator* self, int lowest, int highest) {
	return self->bounded(static_cast<int>(lowest), static_cast<int>(highest));
}

void QRandomGenerator_Generate2(QRandomGenerator* self, uint32_t* begin, uint32_t* end) {
	self->generate(static_cast<quint32*>(begin), static_cast<quint32*>(end));
}

void QRandomGenerator_Seed(QRandomGenerator* self) {
	self->seed();
}

void QRandomGenerator_Discard(QRandomGenerator* self, unsigned long long z) {
	self->discard(static_cast<unsigned long long>(z));
}

QRandomGenerator* QRandomGenerator_System() {
	return QRandomGenerator::system();
}

QRandomGenerator* QRandomGenerator_Global() {
	return QRandomGenerator::global();
}

QRandomGenerator* QRandomGenerator_SecurelySeeded() {
	QRandomGenerator ret = QRandomGenerator::securelySeeded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRandomGenerator*>(new QRandomGenerator(ret));
}

void QRandomGenerator_Seed1(QRandomGenerator* self, uint32_t s) {
	self->seed(static_cast<quint32>(s));
}

void QRandomGenerator_Delete(QRandomGenerator* self) {
	delete self;
}

QRandomGenerator64* QRandomGenerator64_new() {
	return new QRandomGenerator64();
}

QRandomGenerator64* QRandomGenerator64_new2(uint32_t* seedBuffer, size_t lenVal) {
	return new QRandomGenerator64(static_cast<quint32*>(seedBuffer), static_cast<qsizetype>(lenVal));
}

QRandomGenerator64* QRandomGenerator64_new3(uint32_t* begin, uint32_t* end) {
	return new QRandomGenerator64(static_cast<quint32*>(begin), static_cast<quint32*>(end));
}

QRandomGenerator64* QRandomGenerator64_new4(QRandomGenerator* other) {
	return new QRandomGenerator64(*other);
}

QRandomGenerator64* QRandomGenerator64_new5(QRandomGenerator64* param1) {
	return new QRandomGenerator64(*param1);
}

QRandomGenerator64* QRandomGenerator64_new6(uint32_t seedValue) {
	return new QRandomGenerator64(static_cast<quint32>(seedValue));
}

uint64_t QRandomGenerator64_Generate(QRandomGenerator64* self) {
	return self->generate();
}

void QRandomGenerator64_Discard(QRandomGenerator64* self, unsigned long long z) {
	self->discard(static_cast<unsigned long long>(z));
}

QRandomGenerator64* QRandomGenerator64_System() {
	return QRandomGenerator64::system();
}

QRandomGenerator64* QRandomGenerator64_Global() {
	return QRandomGenerator64::global();
}

QRandomGenerator64* QRandomGenerator64_SecurelySeeded() {
	QRandomGenerator64 ret = QRandomGenerator64::securelySeeded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRandomGenerator64*>(new QRandomGenerator64(ret));
}

void QRandomGenerator64_OperatorAssign(QRandomGenerator64* self, QRandomGenerator64* param1) {
	self->operator=(*param1);
}

void QRandomGenerator64_Delete(QRandomGenerator64* self) {
	delete self;
}

