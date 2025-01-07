#include <QWebEngineFindTextResult>
#include <qwebenginefindtextresult.h>
#include "gen_qwebenginefindtextresult.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QWebEngineFindTextResult* QWebEngineFindTextResult_new() {
	return new QWebEngineFindTextResult();
}

QWebEngineFindTextResult* QWebEngineFindTextResult_new2(QWebEngineFindTextResult* other) {
	return new QWebEngineFindTextResult(*other);
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

