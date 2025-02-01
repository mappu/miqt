#include <QBitArray>
#include <QBitRef>
#include <qbitarray.h>
#include "gen_qbitarray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QBitArray* QBitArray_new() {
	return new QBitArray();
}

QBitArray* QBitArray_new2(int size) {
	return new QBitArray(static_cast<int>(size));
}

QBitArray* QBitArray_new3(QBitArray* other) {
	return new QBitArray(*other);
}

QBitArray* QBitArray_new4(int size, bool val) {
	return new QBitArray(static_cast<int>(size), val);
}

void QBitArray_operatorAssign(QBitArray* self, QBitArray* other) {
	self->operator=(*other);
}

void QBitArray_swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

int QBitArray_size(const QBitArray* self) {
	return self->size();
}

int QBitArray_count(const QBitArray* self) {
	return self->count();
}

int QBitArray_countWithOn(const QBitArray* self, bool on) {
	return self->count(on);
}

bool QBitArray_isEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_isNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_resize(QBitArray* self, int size) {
	self->resize(static_cast<int>(size));
}

void QBitArray_detach(QBitArray* self) {
	self->detach();
}

bool QBitArray_isDetached(const QBitArray* self) {
	return self->isDetached();
}

void QBitArray_clear(QBitArray* self) {
	self->clear();
}

bool QBitArray_testBit(const QBitArray* self, int i) {
	return self->testBit(static_cast<int>(i));
}

void QBitArray_setBit(QBitArray* self, int i) {
	self->setBit(static_cast<int>(i));
}

void QBitArray_setBit2(QBitArray* self, int i, bool val) {
	self->setBit(static_cast<int>(i), val);
}

void QBitArray_clearBit(QBitArray* self, int i) {
	self->clearBit(static_cast<int>(i));
}

bool QBitArray_toggleBit(QBitArray* self, int i) {
	return self->toggleBit(static_cast<int>(i));
}

bool QBitArray_at(const QBitArray* self, int i) {
	return self->at(static_cast<int>(i));
}

QBitRef* QBitArray_operatorSubscript(QBitArray* self, int i) {
	return new QBitRef(self->operator[](static_cast<int>(i)));
}

bool QBitArray_operatorSubscriptWithInt(const QBitArray* self, int i) {
	return self->operator[](static_cast<int>(i));
}

QBitRef* QBitArray_operatorSubscriptWithUint(QBitArray* self, unsigned int i) {
	return new QBitRef(self->operator[](static_cast<uint>(i)));
}

bool QBitArray_operatorSubscript2(const QBitArray* self, unsigned int i) {
	return self->operator[](static_cast<uint>(i));
}

void QBitArray_operatorBitwiseAndAssign(QBitArray* self, QBitArray* param1) {
	self->operator&=(*param1);
}

void QBitArray_operatorBitwiseOrAssign(QBitArray* self, QBitArray* param1) {
	self->operator|=(*param1);
}

void QBitArray_operatorBitwiseNotAssign(QBitArray* self, QBitArray* param1) {
	self->operator^=(*param1);
}

bool QBitArray_operatorEqual(const QBitArray* self, QBitArray* other) {
	return (*self == *other);
}

bool QBitArray_operatorNotEqual(const QBitArray* self, QBitArray* other) {
	return (*self != *other);
}

bool QBitArray_fill(QBitArray* self, bool val) {
	return self->fill(val);
}

void QBitArray_fill2(QBitArray* self, bool val, int first, int last) {
	self->fill(val, static_cast<int>(first), static_cast<int>(last));
}

void QBitArray_truncate(QBitArray* self, int pos) {
	self->truncate(static_cast<int>(pos));
}

const char* QBitArray_bits(const QBitArray* self) {
	return (const char*) self->bits();
}

QBitArray* QBitArray_fromBits(const char* data, ptrdiff_t len) {
	return new QBitArray(QBitArray::fromBits(data, (qsizetype)(len)));
}

bool QBitArray_fill22(QBitArray* self, bool val, int size) {
	return self->fill(val, static_cast<int>(size));
}

void QBitArray_delete(QBitArray* self) {
	delete self;
}

QBitRef* QBitRef_new(QBitRef* param1) {
	return new QBitRef(*param1);
}

bool QBitRef_ToBool(const QBitRef* self) {
	return self->operator bool();
}

bool QBitRef_operatorNot(const QBitRef* self) {
	return self->operator!();
}

void QBitRef_operatorAssign(QBitRef* self, QBitRef* val) {
	self->operator=(*val);
}

void QBitRef_operatorAssignWithVal(QBitRef* self, bool val) {
	self->operator=(val);
}

void QBitRef_delete(QBitRef* self) {
	delete self;
}

