#include <QLinkedListData>
#include <qlinkedlist.h>
#include "gen_qlinkedlist.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QLinkedListData* QLinkedListData_new() {
	return new QLinkedListData();
}

void QLinkedListData_Delete(QLinkedListData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLinkedListData*>( self );
	} else {
		delete self;
	}
}

