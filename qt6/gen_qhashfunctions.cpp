#include <QHashSeed>
#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

QHashSeed* QHashSeed_new() {
	return new QHashSeed();
}

QHashSeed* QHashSeed_new2(size_t d) {
	return new QHashSeed(static_cast<size_t>(d));
}

size_t QHashSeed_ToUnsignedLong(const QHashSeed* self) {
	return self->operator unsigned long();
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

