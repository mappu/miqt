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
	return new (std::nothrow) QHashSeed();
}

QHashSeed* QHashSeed_new2(size_t d) {
	return new (std::nothrow) QHashSeed(static_cast<size_t>(d));
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

int miqt_QGlobalQHashSeed2() {

	return qGlobalQHashSeed();
}

void miqt_QSetGlobalQHashSeedWithNewSeed(int newSeed) {

	qSetGlobalQHashSeed(static_cast<int>(newSeed));
}

size_t miqt_QHashBits2(const void* p, size_t size, size_t seed) {

	return qHashBits(p, static_cast<size_t>(size), static_cast<size_t>(seed));
}

