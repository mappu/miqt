#include <qstringbuilder.h>
#include "gen_qstringbuilder.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QAbstractConcatenable_Delete(QAbstractConcatenable* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QAbstractConcatenable*>( self );
	} else {
		delete self;
	}
}

