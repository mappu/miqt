#include <QArrayData>
#include <qarraydata.h>
#include "gen_qarraydata.h"
#include "_cgo_export.h"

ptrdiff_t QArrayData_AllocatedCapacity(QArrayData* self) {
	qsizetype _ret = self->allocatedCapacity();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QArrayData_ConstAllocatedCapacity(const QArrayData* self) {
	qsizetype _ret = self->constAllocatedCapacity();
	return static_cast<ptrdiff_t>(_ret);
}

bool QArrayData_Ref(QArrayData* self) {
	return self->ref();
}

bool QArrayData_Deref(QArrayData* self) {
	return self->deref();
}

bool QArrayData_IsShared(const QArrayData* self) {
	return self->isShared();
}

bool QArrayData_NeedsDetach(const QArrayData* self) {

// This method was changed from const to non-const in Qt 6.7
#if QT_VERSION < QT_VERSION_CHECK(6,7,0)
	return self->needsDetach();
#else
	return const_cast<QArrayData*>(self)->needsDetach();
#endif
}

ptrdiff_t QArrayData_DetachCapacity(const QArrayData* self, ptrdiff_t newSize) {
	qsizetype _ret = self->detachCapacity((qsizetype)(newSize));
	return static_cast<ptrdiff_t>(_ret);
}

struct miqt_map /* tuple of QArrayData* and void* */  QArrayData_ReallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option) {
	QPair<QArrayData *, void *> _ret = QArrayData::reallocateUnaligned(data, dataPointer, (qsizetype)(objectSize), (qsizetype)(newCapacity), static_cast<QArrayData::AllocationOption>(option));
	// Convert QPair<> from C++ memory to manually-managed C memory
	QArrayData** _first_arr = static_cast<QArrayData**>(malloc(sizeof(QArrayData*)));
	void** _second_arr = static_cast<void**>(malloc(sizeof(void*)));
	_first_arr[0] = _ret.first;
	_second_arr[0] = _ret.second;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment) {
	QArrayData::deallocate(data, (qsizetype)(objectSize), (qsizetype)(alignment));
}

void QArrayData_Delete(QArrayData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QArrayData*>( self );
	} else {
		delete self;
	}
}

