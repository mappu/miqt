#include <QAdoptSharedDataTag>
#include <QSharedData>
#include <qshareddata.h>
#include "gen_qshareddata.h"
#include "_cgo_export.h"

QSharedData* QSharedData_new() {
	return new QSharedData();
}

QSharedData* QSharedData_new2(QSharedData* param1) {
	return new QSharedData(*param1);
}

void QSharedData_Delete(QSharedData* self) {
	delete self;
}

QAdoptSharedDataTag* QAdoptSharedDataTag_new() {
	return new QAdoptSharedDataTag();
}

void QAdoptSharedDataTag_Delete(QAdoptSharedDataTag* self) {
	delete self;
}

