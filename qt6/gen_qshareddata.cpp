#include <QSharedData>
#include <qshareddata.h>
#include "gen_qshareddata.h"
#include "_cgo_export.h"

void QSharedData_new(QSharedData** outptr_QSharedData) {
	QSharedData* ret = new QSharedData();
	*outptr_QSharedData = ret;
}

void QSharedData_new2(QSharedData* param1, QSharedData** outptr_QSharedData) {
	QSharedData* ret = new QSharedData(*param1);
	*outptr_QSharedData = ret;
}

void QSharedData_Delete(QSharedData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSharedData*>( self );
	} else {
		delete self;
	}
}

void QAdoptSharedDataTag_new(QAdoptSharedDataTag** outptr_QAdoptSharedDataTag) {
	QAdoptSharedDataTag* ret = new QAdoptSharedDataTag();
	*outptr_QAdoptSharedDataTag = ret;
}

void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAdoptSharedDataTag*>( self );
	} else {
		delete self;
	}
}

