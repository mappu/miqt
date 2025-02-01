#include <QArrayData>
#include <qarraydata.h>
#include "gen_qarraydata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

QArrayData* QArrayData_allocate4(size_t objectSize, size_t alignment, size_t capacity, int options) {
	return QArrayData::allocate(static_cast<size_t>(objectSize), static_cast<size_t>(alignment), static_cast<size_t>(capacity), static_cast<QArrayData::AllocationOptions>(options));
}

QArrayData* QArrayData_reallocateUnaligned4(QArrayData* data, size_t objectSize, size_t newCapacity, int newOptions) {
	return QArrayData::reallocateUnaligned(data, static_cast<size_t>(objectSize), static_cast<size_t>(newCapacity), static_cast<QArrayData::AllocationOptions>(newOptions));
}

void QArrayData_delete(QArrayData* self) {
	delete self;
}

