#include <QPropertyProxyBindingData>
#include <QUntypedPropertyData>
#include <qpropertyprivate.h>
#include "gen_qpropertyprivate.h"
#include "_cgo_export.h"

void QUntypedPropertyData_Delete(QUntypedPropertyData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QUntypedPropertyData*>( self );
	} else {
		delete self;
	}
}

void QPropertyProxyBindingData_Delete(QPropertyProxyBindingData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPropertyProxyBindingData*>( self );
	} else {
		delete self;
	}
}

