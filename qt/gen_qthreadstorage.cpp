#include <QThreadStorageData>
#include <qthreadstorage.h>
#include "gen_qthreadstorage.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1) {
	return new (std::nothrow) QThreadStorageData(*param1);
}

int QThreadStorageData_id(const QThreadStorageData* self) {
	return self->id;
}

void QThreadStorageData_setId(QThreadStorageData* self, int id) {
	self->id = static_cast<int>(id);
}

void QThreadStorageData_delete(QThreadStorageData* self) {
	delete self;
}

