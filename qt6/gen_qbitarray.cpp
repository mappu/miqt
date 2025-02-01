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

QBitArray* QBitArray_new2(ptrdiff_t size) {
	return new QBitArray((qsizetype)(size));
}

QBitArray* QBitArray_new3(QBitArray* other) {
	return new QBitArray(*other);
}

QBitArray* QBitArray_new4(ptrdiff_t size, bool val) {
	return new QBitArray((qsizetype)(size), val);
}

void QBitArray_operatorAssign(QBitArray* self, QBitArray* other) {
	self->operator=(*other);
}

void QBitArray_swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

ptrdiff_t QBitArray_size(const QBitArray* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QBitArray_count(const QBitArray* self) {
	qsizetype _ret = self->count();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QBitArray_countWithOn(const QBitArray* self, bool on) {
	qsizetype _ret = self->count(on);
	return static_cast<ptrdiff_t>(_ret);
}

bool QBitArray_isEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_isNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_resize(QBitArray* self, ptrdiff_t size) {
	self->resize((qsizetype)(size));
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

bool QBitArray_testBit(const QBitArray* self, ptrdiff_t i) {
	return self->testBit((qsizetype)(i));
}

void QBitArray_setBit(QBitArray* self, ptrdiff_t i) {
	self->setBit((qsizetype)(i));
}

void QBitArray_setBit2(QBitArray* self, ptrdiff_t i, bool val) {
	self->setBit((qsizetype)(i), val);
}

void QBitArray_clearBit(QBitArray* self, ptrdiff_t i) {
	self->clearBit((qsizetype)(i));
}

bool QBitArray_toggleBit(QBitArray* self, ptrdiff_t i) {
	return self->toggleBit((qsizetype)(i));
}

bool QBitArray_at(const QBitArray* self, ptrdiff_t i) {
	return self->at((qsizetype)(i));
}

QBitRef* QBitArray_operatorSubscript(QBitArray* self, ptrdiff_t i) {
	return new QBitRef(self->operator[]((qsizetype)(i)));
}

bool QBitArray_operatorSubscriptWithQsizetype(const QBitArray* self, ptrdiff_t i) {
	return self->operator[]((qsizetype)(i));
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

void QBitArray_fill2(QBitArray* self, bool val, ptrdiff_t first, ptrdiff_t last) {
	self->fill(val, (qsizetype)(first), (qsizetype)(last));
}

void QBitArray_truncate(QBitArray* self, ptrdiff_t pos) {
	self->truncate((qsizetype)(pos));
}

const char* QBitArray_bits(const QBitArray* self) {
	return (const char*) self->bits();
}

QBitArray* QBitArray_fromBits(const char* data, ptrdiff_t len) {
	return new QBitArray(QBitArray::fromBits(data, (qsizetype)(len)));
}

unsigned int QBitArray_toUInt32(const QBitArray* self, int endianness) {
	quint32 _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness));
	return static_cast<unsigned int>(_ret);
}

bool QBitArray_fill22(QBitArray* self, bool val, ptrdiff_t size) {
	return self->fill(val, (qsizetype)(size));
}

unsigned int QBitArray_toUInt322(const QBitArray* self, int endianness, bool* ok) {
	quint32 _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness), ok);
	return static_cast<unsigned int>(_ret);
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

