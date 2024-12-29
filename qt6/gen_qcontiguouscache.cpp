#include <QContiguousCacheData>
#include <qcontiguouscache.h>
#include "gen_qcontiguouscache.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QContiguousCacheData* QContiguousCacheData_AllocateData(ptrdiff_t size, ptrdiff_t alignment) {
	return QContiguousCacheData::allocateData((qsizetype)(size), (qsizetype)(alignment));
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

