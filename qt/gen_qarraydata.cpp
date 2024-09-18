#include <QArrayData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QContainerImplHelper
#include "qarraydata.h"
#include "gen_qarraydata.h"
#include "_cgo_export.h"

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

int QtPrivate__QContainerImplHelper_Mid(int originalLength, int* position, int* length) {
	QtPrivate::QContainerImplHelper::CutResult _ret = QtPrivate::QContainerImplHelper::mid(static_cast<int>(originalLength), static_cast<int*>(position), static_cast<int*>(length));
	return static_cast<int>(_ret);
}

void QtPrivate__QContainerImplHelper_Delete(QtPrivate__QContainerImplHelper* self) {
	delete self;
}

