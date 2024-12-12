#include <QStringDataPtr>
#include <qstringliteral.h>
#include "gen_qstringliteral.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QStringDataPtr_Delete(QStringDataPtr* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringDataPtr*>( self );
	} else {
		delete self;
	}
}

