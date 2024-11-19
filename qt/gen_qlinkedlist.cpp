#include <QLinkedListData>
#include <qlinkedlist.h>
#include "gen_qlinkedlist.h"
#include "_cgo_export.h"

void QLinkedListData_new(QLinkedListData** outptr_QLinkedListData) {
	QLinkedListData* ret = new QLinkedListData();
	*outptr_QLinkedListData = ret;
}

void QLinkedListData_Delete(QLinkedListData* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QLinkedListData*>( self );
	} else {
		delete self;
	}
}

