#include <QInternal>
#include <qnamespace.h>
#include "gen_qnamespace.h"
#include "_cgo_export.h"

void QInternal_Delete(QInternal* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInternal*>( self );
	} else {
		delete self;
	}
}

