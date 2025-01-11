#include <qvarlengtharray.h>
#include "gen_qvarlengtharray.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

ptrdiff_t QVLABaseBase_Capacity(const QVLABaseBase* self) {
	QVLABaseBase::size_type _ret = self->capacity();
	return static_cast<ptrdiff_t>(_ret);
}

ptrdiff_t QVLABaseBase_Size(const QVLABaseBase* self) {
	QVLABaseBase::size_type _ret = self->size();
	return static_cast<ptrdiff_t>(_ret);
}

bool QVLABaseBase_Empty(const QVLABaseBase* self) {
	return self->empty();
}

