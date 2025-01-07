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
	return new QThreadStorageData(*param1);
}

void QThreadStorageData_Delete(QThreadStorageData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QThreadStorageData*>( self );
	} else {
		delete self;
	}
}

