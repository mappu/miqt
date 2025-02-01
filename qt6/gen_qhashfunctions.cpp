#include <QHashSeed>
#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QHashSeed* QHashSeed_new() {
	return new QHashSeed();
}

QHashSeed* QHashSeed_new2(size_t d) {
	return new QHashSeed(static_cast<size_t>(d));
}

QHashSeed* QHashSeed_globalSeed() {
	return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_setDeterministicGlobalSeed() {
	QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_resetRandomGlobalSeed() {
	QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_delete(QHashSeed* self) {
	delete self;
}

