#include <QPartialOrdering>
#include <qcompare.h>
#include "gen_qcompare.h"
#include "_cgo_export.h"

void QPartialOrdering_new(QPartialOrdering* param1, QPartialOrdering** outptr_QPartialOrdering) {
	QPartialOrdering* ret = new QPartialOrdering(*param1);
	*outptr_QPartialOrdering = ret;
}

void QPartialOrdering_Delete(QPartialOrdering* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QPartialOrdering*>( self );
	} else {
		delete self;
	}
}

