#include <QStringDataPtr>
#include <qstringliteral.h>
#include "gen_qstringliteral.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

void QStringDataPtr_Delete(QStringDataPtr* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStringDataPtr*>( self );
	} else {
		delete self;
	}
}

