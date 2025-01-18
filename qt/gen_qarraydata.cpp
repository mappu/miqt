#include <QArrayData>
#include <qarraydata.h>
#include "gen_qarraydata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void* QArrayData_Data(QArrayData* self) {
	return self->data();
}

const void* QArrayData_Data2(const QArrayData* self) {
	return (const void*) self->data();
}

bool QArrayData_IsMutable(const QArrayData* self) {
	return self->isMutable();
}

size_t QArrayData_DetachCapacity(const QArrayData* self, size_t newSize) {
	return self->detachCapacity(static_cast<size_t>(newSize));
}

int QArrayData_DetachFlags(const QArrayData* self) {
	QArrayData::AllocationOptions _ret = self->detachFlags();
	return static_cast<int>(_ret);
}

int QArrayData_CloneFlags(const QArrayData* self) {
	QArrayData::AllocationOptions _ret = self->cloneFlags();
	return static_cast<int>(_ret);
}

QArrayData* QArrayData_Allocate(size_t objectSize, size_t alignment, size_t capacity) {
	return QArrayData::allocate(static_cast<size_t>(objectSize), static_cast<size_t>(alignment), static_cast<size_t>(capacity));
}

QArrayData* QArrayData_ReallocateUnaligned(QArrayData* data, size_t objectSize, size_t newCapacity) {
	return QArrayData::reallocateUnaligned(data, static_cast<size_t>(objectSize), static_cast<size_t>(newCapacity));
}

void QArrayData_Deallocate(QArrayData* data, size_t objectSize, size_t alignment) {
	QArrayData::deallocate(data, static_cast<size_t>(objectSize), static_cast<size_t>(alignment));
}

QArrayData* QArrayData_SharedNull() {
	return QArrayData::sharedNull();
}

QArrayData* QArrayData_Allocate4(size_t objectSize, size_t alignment, size_t capacity, int options) {
	return QArrayData::allocate(static_cast<size_t>(objectSize), static_cast<size_t>(alignment), static_cast<size_t>(capacity), static_cast<QArrayData::AllocationOptions>(options));
}

QArrayData* QArrayData_ReallocateUnaligned4(QArrayData* data, size_t objectSize, size_t newCapacity, int newOptions) {
	return QArrayData::reallocateUnaligned(data, static_cast<size_t>(objectSize), static_cast<size_t>(newCapacity), static_cast<QArrayData::AllocationOptions>(newOptions));
}

void QArrayData_Delete(QArrayData* self) {
	delete self;
}

