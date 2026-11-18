#include <qendian.h>
#include "gen_qendian.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

float miqt_Qbswap2(float source) {

	return qbswap(static_cast<float>(source));
}

double miqt_Qbswap3(double source) {

	return qbswap(static_cast<double>(source));
}

