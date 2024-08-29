#include <QBitArray>
#include <QBitRef>
#include "qbitarray.h"

#include "gen_qbitarray.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

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

int QBitArray_Size(QBitArray* self) {
	return const_cast<const QBitArray*>(self)->size();
}

int QBitArray_Count(QBitArray* self) {
	return const_cast<const QBitArray*>(self)->count();
}

int QBitArray_CountWithOn(QBitArray* self, bool on) {
	return const_cast<const QBitArray*>(self)->count(on);
}

bool QBitArray_IsEmpty(QBitArray* self) {
	return const_cast<const QBitArray*>(self)->isEmpty();
}

bool QBitArray_IsNull(QBitArray* self) {
	return const_cast<const QBitArray*>(self)->isNull();
}

void QBitArray_Resize(QBitArray* self, int size) {
	self->resize(static_cast<int>(size));
}

void QBitArray_Detach(QBitArray* self) {
	self->detach();
}

bool QBitArray_IsDetached(QBitArray* self) {
	return const_cast<const QBitArray*>(self)->isDetached();
}

void QBitArray_Clear(QBitArray* self) {
	self->clear();
}

bool QBitArray_TestBit(QBitArray* self, int i) {
	return const_cast<const QBitArray*>(self)->testBit(static_cast<int>(i));
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

bool QBitArray_At(QBitArray* self, int i) {
	return const_cast<const QBitArray*>(self)->at(static_cast<int>(i));
}

QBitRef* QBitArray_OperatorSubscript(QBitArray* self, int i) {
	QBitRef ret = self->operator[](static_cast<int>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitRef*>(new QBitRef(ret));
}

bool QBitArray_OperatorSubscriptWithInt(QBitArray* self, int i) {
	return const_cast<const QBitArray*>(self)->operator[](static_cast<int>(i));
}

QBitRef* QBitArray_OperatorSubscriptWithUint(QBitArray* self, unsigned int i) {
	QBitRef ret = self->operator[](static_cast<uint>(i));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitRef*>(new QBitRef(ret));
}

bool QBitArray_OperatorSubscript2(QBitArray* self, unsigned int i) {
	return const_cast<const QBitArray*>(self)->operator[](static_cast<uint>(i));
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

QBitArray* QBitArray_OperatorBitwiseXor(QBitArray* self) {
	QBitArray ret = const_cast<const QBitArray*>(self)->operator~();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitArray*>(new QBitArray(ret));
}

bool QBitArray_OperatorEqual(QBitArray* self, QBitArray* other) {
	return const_cast<const QBitArray*>(self)->operator==(*other);
}

bool QBitArray_OperatorNotEqual(QBitArray* self, QBitArray* other) {
	return const_cast<const QBitArray*>(self)->operator!=(*other);
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

const char* QBitArray_Bits(QBitArray* self) {
	return (const char*) const_cast<const QBitArray*>(self)->bits();
}

QBitArray* QBitArray_FromBits(const char* data, size_t lenVal) {
	QBitArray ret = QBitArray::fromBits(data, static_cast<qsizetype>(lenVal));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QBitArray*>(new QBitArray(ret));
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

bool QBitRef_OperatorNot(QBitRef* self) {
	return const_cast<const QBitRef*>(self)->operator!();
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

