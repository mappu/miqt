#include <QArrayData>
#include <qarraydata.h>
#include "gen_qarraydata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int QArrayData_size(const QArrayData* self) {
	return self->size;
}

void QArrayData_setSize(QArrayData* self, int size) {
	self->size = static_cast<int>(size);
}

unsigned int QArrayData_alloc(const QArrayData* self) {
	uint alloc_ret = self->alloc;
	return static_cast<unsigned int>(alloc_ret);
}

void QArrayData_setAlloc(QArrayData* self, unsigned int alloc) {
	self->alloc = static_cast<uint>(alloc);
}

unsigned int QArrayData_capacityReserved(const QArrayData* self) {
	uint capacityReserved_ret = self->capacityReserved;
	return static_cast<unsigned int>(capacityReserved_ret);
}

void QArrayData_setCapacityReserved(QArrayData* self, unsigned int capacityReserved) {
	self->capacityReserved = static_cast<uint>(capacityReserved);
}

intptr_t QArrayData_offset(const QArrayData* self) {
	qptrdiff offset_ret = self->offset;
	return static_cast<intptr_t>(offset_ret);
}

void QArrayData_setOffset(QArrayData* self, intptr_t offset) {
	self->offset = static_cast<qptrdiff>(offset);
}

void* QArrayData_data(QArrayData* self) {
	return self->data();
}

const void* QArrayData_data2(const QArrayData* self) {
	return (const void*) self->data();
}

bool QArrayData_isMutable(const QArrayData* self) {
	return self->isMutable();
}

size_t QArrayData_detachCapacity(const QArrayData* self, size_t newSize) {
	return self->detachCapacity(static_cast<size_t>(newSize));
}

int QArrayData_detachFlags(const QArrayData* self) {
	QArrayData::AllocationOptions _ret = self->detachFlags();
	return static_cast<int>(_ret);
}

int QArrayData_cloneFlags(const QArrayData* self) {
	QArrayData::AllocationOptions _ret = self->cloneFlags();
	return static_cast<int>(_ret);
}

QArrayData* QArrayData_allocate(size_t objectSize, size_t alignment, size_t capacity) {
	return QArrayData::allocate(static_cast<size_t>(objectSize), static_cast<size_t>(alignment), static_cast<size_t>(capacity));
}

QArrayData* QArrayData_reallocateUnaligned(QArrayData* data, size_t objectSize, size_t newCapacity) {
	return QArrayData::reallocateUnaligned(data, static_cast<size_t>(objectSize), static_cast<size_t>(newCapacity));
}

void QArrayData_deallocate(QArrayData* data, size_t objectSize, size_t alignment) {
	QArrayData::deallocate(data, static_cast<size_t>(objectSize), static_cast<size_t>(alignment));
}

QArrayData* QArrayData_sharedNull() {
	return QArrayData::sharedNull();
}

QArrayData* QArrayData_allocate2(size_t objectSize, size_t alignment, size_t capacity, int options) {
	return QArrayData::allocate(static_cast<size_t>(objectSize), static_cast<size_t>(alignment), static_cast<size_t>(capacity), static_cast<QArrayData::AllocationOptions>(options));
}

QArrayData* QArrayData_reallocateUnaligned2(QArrayData* data, size_t objectSize, size_t newCapacity, int newOptions) {
	return QArrayData::reallocateUnaligned(data, static_cast<size_t>(objectSize), static_cast<size_t>(newCapacity), static_cast<QArrayData::AllocationOptions>(newOptions));
}

void QArrayData_delete(QArrayData* self) {
	delete self;
}

