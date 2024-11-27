#include <QWebEngineFindTextResult>
#include <qwebenginefindtextresult.h>
#include "gen_qwebenginefindtextresult.h"
#include "_cgo_export.h"

void QWebEngineFindTextResult_new(QWebEngineFindTextResult** outptr_QWebEngineFindTextResult) {
	QWebEngineFindTextResult* ret = new QWebEngineFindTextResult();
	*outptr_QWebEngineFindTextResult = ret;
}

void QWebEngineFindTextResult_new2(QWebEngineFindTextResult* other, QWebEngineFindTextResult** outptr_QWebEngineFindTextResult) {
	QWebEngineFindTextResult* ret = new QWebEngineFindTextResult(*other);
	*outptr_QWebEngineFindTextResult = ret;
}

int QWebEngineFindTextResult_NumberOfMatches(const QWebEngineFindTextResult* self) {
	return self->numberOfMatches();
}

int QWebEngineFindTextResult_ActiveMatch(const QWebEngineFindTextResult* self) {
	return self->activeMatch();
}

void QWebEngineFindTextResult_OperatorAssign(QWebEngineFindTextResult* self, QWebEngineFindTextResult* other) {
	self->operator=(*other);
}

void QWebEngineFindTextResult_Delete(QWebEngineFindTextResult* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QWebEngineFindTextResult*>( self );
	} else {
		delete self;
	}
}

