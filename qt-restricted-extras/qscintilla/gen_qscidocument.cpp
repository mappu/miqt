#include <qscidocument.h>
#include "gen_qscidocument.h"
#include "_cgo_export.h"

void QsciDocument_new(QsciDocument** outptr_QsciDocument) {
	QsciDocument* ret = new QsciDocument();
	*outptr_QsciDocument = ret;
}

void QsciDocument_new2(QsciDocument* param1, QsciDocument** outptr_QsciDocument) {
	QsciDocument* ret = new QsciDocument(*param1);
	*outptr_QsciDocument = ret;
}

void QsciDocument_OperatorAssign(QsciDocument* self, QsciDocument* param1) {
	self->operator=(*param1);
}

void QsciDocument_Delete(QsciDocument* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QsciDocument*>( self );
	} else {
		delete self;
	}
}

