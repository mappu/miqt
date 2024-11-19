#include <QHashSeed>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombine
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombineCommutative
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

void QtPrivate__QHashCombine_new(QtPrivate__QHashCombine** outptr_QtPrivate__QHashCombine) {
	QtPrivate::QHashCombine* ret = new QtPrivate::QHashCombine();
	*outptr_QtPrivate__QHashCombine = ret;
}

void QtPrivate__QHashCombine_Delete(QtPrivate__QHashCombine* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::QHashCombine*>( self );
	} else {
		delete self;
	}
}

void QtPrivate__QHashCombineCommutative_new(QtPrivate__QHashCombineCommutative** outptr_QtPrivate__QHashCombineCommutative) {
	QtPrivate::QHashCombineCommutative* ret = new QtPrivate::QHashCombineCommutative();
	*outptr_QtPrivate__QHashCombineCommutative = ret;
}

void QtPrivate__QHashCombineCommutative_Delete(QtPrivate__QHashCombineCommutative* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QtPrivate::QHashCombineCommutative*>( self );
	} else {
		delete self;
	}
}

