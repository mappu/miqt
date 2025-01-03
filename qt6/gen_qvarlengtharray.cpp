#include <qvarlengtharray.h>
#include "gen_qvarlengtharray.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

long long QVLABaseBase_Capacity(const QVLABaseBase* self) {
	QVLABaseBase::size_type _ret = self->capacity();
	return static_cast<long long>(_ret);
}

long long QVLABaseBase_Size(const QVLABaseBase* self) {
	QVLABaseBase::size_type _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QVLABaseBase_Empty(const QVLABaseBase* self) {
	return self->empty();
}

