#include <qstringbuilder.h>
#include "gen_qstringbuilder.h"
#include "_cgo_export.h"

void QAbstractConcatenable_Delete(QAbstractConcatenable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractConcatenable*>( self );
	} else {
		delete self;
	}
}

