#include <QHashSeed>
#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"
#include "_cgo_export.h"

void QHashSeed_new(QHashSeed** outptr_QHashSeed) {
	QHashSeed* ret = new QHashSeed();
	*outptr_QHashSeed = ret;
}

void QHashSeed_new2(size_t d, QHashSeed** outptr_QHashSeed) {
	QHashSeed* ret = new QHashSeed(static_cast<size_t>(d));
	*outptr_QHashSeed = ret;
}

QHashSeed* QHashSeed_GlobalSeed() {
	return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_SetDeterministicGlobalSeed() {
	QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_ResetRandomGlobalSeed() {
	QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_Delete(QHashSeed* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHashSeed*>( self );
	} else {
		delete self;
	}
}

