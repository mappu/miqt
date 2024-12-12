#include <QBitArray>
#include <QBitRef>
#include <qbitarray.h>
#include "gen_qbitarray.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

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

void QBitArray_OperatorAssign(QBitArray* self, QBitArray* other) {
	self->operator=(*other);
}

void QBitArray_Swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

ptrdiff_t QBitArray_Size(const QBitArray* self) {
	qsizetype _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QBitArray_Count(const QBitArray* self) {
	qsizetype _ret = self->count();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QBitArray_CountWithOn(const QBitArray* self, bool on) {
	qsizetype _ret = self->count(on);
	return static_cast<ptrdiff_t>(_ret);
}

bool QBitArray_IsEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_IsNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_Resize(QBitArray* self, ptrdiff_t size) {
	self->resize((qsizetype)(size));
}

void QBitArray_Detach(QBitArray* self) {
	self->detach();
}

bool QBitArray_IsDetached(const QBitArray* self) {
	return self->isDetached();
}

void QBitArray_Clear(QBitArray* self) {
	self->clear();
}

bool QBitArray_TestBit(const QBitArray* self, ptrdiff_t i) {
	return self->testBit((qsizetype)(i));
}

void QBitArray_SetBit(QBitArray* self, ptrdiff_t i) {
	self->setBit((qsizetype)(i));
}

void QBitArray_SetBit2(QBitArray* self, ptrdiff_t i, bool val) {
	self->setBit((qsizetype)(i), val);
}

void QBitArray_ClearBit(QBitArray* self, ptrdiff_t i) {
	self->clearBit((qsizetype)(i));
}

bool QBitArray_ToggleBit(QBitArray* self, ptrdiff_t i) {
	return self->toggleBit((qsizetype)(i));
}

bool QBitArray_At(const QBitArray* self, ptrdiff_t i) {
	return self->at((qsizetype)(i));
}

QBitRef* QBitArray_OperatorSubscript(QBitArray* self, ptrdiff_t i) {
	return new QBitRef(self->operator[]((qsizetype)(i)));
}

bool QBitArray_OperatorSubscriptWithQsizetype(const QBitArray* self, ptrdiff_t i) {
	return self->operator[]((qsizetype)(i));
}

void QBitArray_OperatorBitwiseAndAssign(QBitArray* self, QBitArray* param1) {
	self->operator&=(*param1);
}

void QBitArray_OperatorBitwiseOrAssign(QBitArray* self, QBitArray* param1) {
	self->operator|=(*param1);
}

void QBitArray_OperatorBitwiseNotAssign(QBitArray* self, QBitArray* param1) {
	self->operator^=(*param1);
}

bool QBitArray_OperatorEqual(const QBitArray* self, QBitArray* other) {
	return (*self == *other);
}

bool QBitArray_OperatorNotEqual(const QBitArray* self, QBitArray* other) {
	return (*self != *other);
}

bool QBitArray_Fill(QBitArray* self, bool val) {
	return self->fill(val);
}

void QBitArray_Fill2(QBitArray* self, bool val, ptrdiff_t first, ptrdiff_t last) {
	self->fill(val, (qsizetype)(first), (qsizetype)(last));
}

void QBitArray_Truncate(QBitArray* self, ptrdiff_t pos) {
	self->truncate((qsizetype)(pos));
}

const char* QBitArray_Bits(const QBitArray* self) {
	return (const char*) self->bits();
}

QBitArray* QBitArray_FromBits(const char* data, ptrdiff_t lenVal) {
	return new QBitArray(QBitArray::fromBits(data, (qsizetype)(lenVal)));
}

unsigned int QBitArray_ToUInt32(const QBitArray* self, int endianness) {
	quint32 _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness));
	return static_cast<unsigned int>(_ret);
}

bool QBitArray_Fill22(QBitArray* self, bool val, ptrdiff_t size) {
	return self->fill(val, (qsizetype)(size));
}

unsigned int QBitArray_ToUInt322(const QBitArray* self, int endianness, bool* ok) {
	quint32 _ret = self->toUInt32(static_cast<QSysInfo::Endian>(endianness), ok);
	return static_cast<unsigned int>(_ret);
}

void QBitArray_Delete(QBitArray* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBitArray*>( self );
	} else {
		delete self;
	}
}

QBitRef* QBitRef_new(QBitRef* param1) {
	return new QBitRef(*param1);
}

bool QBitRef_OperatorNot(const QBitRef* self) {
	return self->operator!();
}

void QBitRef_OperatorAssign(QBitRef* self, QBitRef* val) {
	self->operator=(*val);
}

void QBitRef_OperatorAssignWithVal(QBitRef* self, bool val) {
	self->operator=(val);
}

void QBitRef_Delete(QBitRef* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QBitRef*>( self );
	} else {
		delete self;
	}
}

