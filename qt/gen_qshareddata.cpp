#include <QSharedData>
#include <qshareddata.h>
#include "gen_qshareddata.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QSharedData* QSharedData_new() {
	return new QSharedData();
}

QSharedData* QSharedData_new2(QSharedData* param1) {
	return new QSharedData(*param1);
}

void QSharedData_Delete(QSharedData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QSharedData*>( self );
	} else {
		delete self;
	}
}

