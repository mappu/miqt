#include <QSharedData>
#include <qshareddata.h>
#include "gen_qshareddata.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

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

QAdoptSharedDataTag* QAdoptSharedDataTag_new() {
	return new QAdoptSharedDataTag();
}

void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAdoptSharedDataTag*>( self );
	} else {
		delete self;
	}
}

