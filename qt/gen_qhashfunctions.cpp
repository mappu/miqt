#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int miqt_QGlobalQHashSeed2() {

	return qGlobalQHashSeed();
}

void miqt_QSetGlobalQHashSeedWithNewSeed(int newSeed) {

	qSetGlobalQHashSeed(static_cast<int>(newSeed));
}

unsigned int miqt_QHashBits2(const void* p, size_t size, unsigned int seed) {

	uint _ret = qHashBits(p, static_cast<size_t>(size), static_cast<uint>(seed));
	return static_cast<unsigned int>(_ret);
}

