#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "gen_qcontiguouscache.h"
#include "_cgo_export.h"

QContiguousCacheData* QContiguousCacheData_AllocateData(int size, int alignment) {
	return QContiguousCacheData::allocateData(static_cast<int>(size), static_cast<int>(alignment));
}

void QContiguousCacheData_FreeData(QContiguousCacheData* data) {
	QContiguousCacheData::freeData(data);
}

void QContiguousCacheData_Delete(QContiguousCacheData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QContiguousCacheData*>( self );
	} else {
		delete self;
	}
}

