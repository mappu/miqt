#include <QThreadStorageData>
#include <qthreadstorage.h>
#include "gen_qthreadstorage.h"
#include "_cgo_export.h"

void QThreadStorageData_new(QThreadStorageData* param1, QThreadStorageData** outptr_QThreadStorageData) {
	QThreadStorageData* ret = new QThreadStorageData(*param1);
	*outptr_QThreadStorageData = ret;
}

void QThreadStorageData_Delete(QThreadStorageData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QThreadStorageData*>( self );
	} else {
		delete self;
	}
}

