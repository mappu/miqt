#include <QArrayData>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QContainerImplHelper
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

void QArrayData_Deallocate(QArrayData* data, ptrdiff_t objectSize, ptrdiff_t alignment) {
	QArrayData::deallocate(data, (qsizetype)(objectSize), (qsizetype)(alignment));
}

void QArrayData_Delete(QArrayData* self) {
	delete self;
}

void QtPrivate__QContainerImplHelper_Delete(QtPrivate__QContainerImplHelper* self) {
	delete self;
}

