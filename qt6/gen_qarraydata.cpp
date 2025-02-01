#include <QArrayData>
#include <QPair>
#include <qarraydata.h>
#include "gen_qarraydata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

ptrdiff_t QArrayData_allocatedCapacity(QArrayData* self) {
	qsizetype _ret = self->allocatedCapacity();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QArrayData_constAllocatedCapacity(const QArrayData* self) {
	qsizetype _ret = self->constAllocatedCapacity();
	return static_cast<ptrdiff_t>(_ret);
}

bool QArrayData_ref(QArrayData* self) {
	return self->ref();
}

bool QArrayData_deref(QArrayData* self) {
	return self->deref();
}

bool QArrayData_isShared(const QArrayData* self) {
	return self->isShared();
}

bool QArrayData_needsDetach(const QArrayData* self) {

// This method was changed from const to non-const in Qt 6.7
#if QT_VERSION < QT_VERSION_CHECK(6,7,0)
	return self->needsDetach();
#else
	return const_cast<QArrayData*>(self)->needsDetach();
#endif
}

ptrdiff_t QArrayData_detachCapacity(const QArrayData* self, ptrdiff_t newSize) {
	qsizetype _ret = self->detachCapacity((qsizetype)(newSize));
	return static_cast<ptrdiff_t>(_ret);
}

struct miqt_map /* tuple of QArrayData* and void* */  QArrayData_reallocateUnaligned(QArrayData* data, void* dataPointer, ptrdiff_t objectSize, ptrdiff_t newCapacity, int option) {
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

void QArrayData_deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment) {
	QArrayData::deallocate(data, (qsizetype)(objectSize), (qsizetype)(alignment));
}

void QArrayData_delete(QArrayData* self) {
	delete self;
}

