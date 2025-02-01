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

int QWebEngineFindTextResult_numberOfMatches(const QWebEngineFindTextResult* self) {
	return self->numberOfMatches();
}

int QWebEngineFindTextResult_activeMatch(const QWebEngineFindTextResult* self) {
	return self->activeMatch();
}

void QWebEngineFindTextResult_operatorAssign(QWebEngineFindTextResult* self, QWebEngineFindTextResult* other) {
	self->operator=(*other);
}

void QWebEngineFindTextResult_delete(QWebEngineFindTextResult* self) {
	delete self;
}

