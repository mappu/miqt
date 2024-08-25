#include "gen_qarraydata.h"
#include "qarraydata.h"

#include <QArrayData>


extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

bool QArrayData_IsMutable(QArrayData* self) {
	return self->isMutable();
}

size_t QArrayData_DetachCapacity(QArrayData* self, size_t newSize) {
	return self->detachCapacity(static_cast<size_t>(newSize));
}

void QArrayData_Deallocate(QArrayData* data, size_t objectSize, size_t alignment) {
	QArrayData::deallocate(data, static_cast<size_t>(objectSize), static_cast<size_t>(alignment));
}

QArrayData* QArrayData_SharedNull() {
	return QArrayData::sharedNull();
}

void QArrayData_Delete(QArrayData* self) {
	delete self;
}

