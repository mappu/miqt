#include <QInternal>
#include <qnamespace.h>
#include "gen_qnamespace.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QInternal_Delete(QInternal* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QInternal*>( self );
	} else {
		delete self;
	}
}

