#include <QPartialOrdering>
#include <qcompare.h>
#include "gen_qcompare.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QPartialOrdering* QPartialOrdering_new(QPartialOrdering* param1) {
	return new QPartialOrdering(*param1);
}

void QPartialOrdering_Delete(QPartialOrdering* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPartialOrdering*>( self );
	} else {
		delete self;
	}
}

