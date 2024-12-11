#include <QInternal>
#include <qnamespace.h>
#include "gen_qnamespace.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QInternal_Delete(QInternal* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInternal*>( self );
	} else {
		delete self;
	}
}

