#include <QHashSeed>
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombine
#define WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__QHashCombineCommutative
#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"
#include "_cgo_export.h"

QHashSeed* QHashSeed_new() {
	return new QHashSeed();
}

QHashSeed* QHashSeed_new2(size_t d) {
	return new QHashSeed(static_cast<size_t>(d));
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

void QHashSeed_Delete(QHashSeed* self) {
	delete self;
}

QtPrivate__QHashCombine* QtPrivate__QHashCombine_new() {
	return new QtPrivate::QHashCombine();
}

void QtPrivate__QHashCombine_Delete(QtPrivate__QHashCombine* self) {
	delete self;
}

QtPrivate__QHashCombineCommutative* QtPrivate__QHashCombineCommutative_new() {
	return new QtPrivate::QHashCombineCommutative();
}

void QtPrivate__QHashCombineCommutative_Delete(QtPrivate__QHashCombineCommutative* self) {
	delete self;
}

