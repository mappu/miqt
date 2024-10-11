#include <QBitArray>
#include <QBitRef>
#include "qbitarray.h"
#include "gen_qbitarray.h"
#include "_cgo_export.h"

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

void QBitArray_OperatorAssign(QBitArray* self, QBitArray* other) {
	self->operator=(*other);
}

void QBitArray_Swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

int QBitArray_Size(const QBitArray* self) {
	return self->size();
}

int QBitArray_Count(const QBitArray* self) {
	return self->count();
}

int QBitArray_CountWithOn(const QBitArray* self, bool on) {
	return self->count(on);
}

bool QBitArray_IsEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_IsNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_Resize(QBitArray* self, int size) {
	self->resize(static_cast<int>(size));
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

bool QBitArray_TestBit(const QBitArray* self, int i) {
	return self->testBit(static_cast<int>(i));
}

void QBitArray_SetBit(QBitArray* self, int i) {
	self->setBit(static_cast<int>(i));
}

void QBitArray_SetBit2(QBitArray* self, int i, bool val) {
	self->setBit(static_cast<int>(i), val);
}

void QBitArray_ClearBit(QBitArray* self, int i) {
	self->clearBit(static_cast<int>(i));
}

bool QBitArray_ToggleBit(QBitArray* self, int i) {
	return self->toggleBit(static_cast<int>(i));
}

bool QBitArray_At(const QBitArray* self, int i) {
	return self->at(static_cast<int>(i));
}

QBitRef* QBitArray_OperatorSubscript(QBitArray* self, int i) {
	return new QBitRef(self->operator[](static_cast<int>(i)));
}

bool QBitArray_OperatorSubscriptWithInt(const QBitArray* self, int i) {
	return self->operator[](static_cast<int>(i));
}

QBitRef* QBitArray_OperatorSubscriptWithUint(QBitArray* self, unsigned int i) {
	return new QBitRef(self->operator[](static_cast<uint>(i)));
}

bool QBitArray_OperatorSubscript2(const QBitArray* self, unsigned int i) {
	return self->operator[](static_cast<uint>(i));
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

QBitArray* QBitArray_OperatorBitwiseXor(const QBitArray* self) {
	return new QBitArray(self->operator~());
}

bool QBitArray_OperatorEqual(const QBitArray* self, QBitArray* other) {
	return self->operator==(*other);
}

bool QBitArray_OperatorNotEqual(const QBitArray* self, QBitArray* other) {
	return self->operator!=(*other);
}

bool QBitArray_Fill(QBitArray* self, bool val) {
	return self->fill(val);
}

void QBitArray_Fill2(QBitArray* self, bool val, int first, int last) {
	self->fill(val, static_cast<int>(first), static_cast<int>(last));
}

void QBitArray_Truncate(QBitArray* self, int pos) {
	self->truncate(static_cast<int>(pos));
}

const char* QBitArray_Bits(const QBitArray* self) {
	return (const char*) self->bits();
}

QBitArray* QBitArray_FromBits(const char* data, ptrdiff_t lenVal) {
	return new QBitArray(QBitArray::fromBits(data, (qsizetype)(lenVal)));
}

bool QBitArray_Fill22(QBitArray* self, bool val, int size) {
	return self->fill(val, static_cast<int>(size));
}

void QBitArray_Delete(QBitArray* self) {
	delete self;
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

void QBitRef_Delete(QBitRef* self) {
	delete self;
}

