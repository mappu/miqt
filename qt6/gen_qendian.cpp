#include <qendian.h>
#include "gen_qendian.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

unsigned long long miqt_QbswapHelperWithSource(unsigned long long source) {

	quint64 _ret = qbswap_helper(static_cast<quint64>(source));
	return static_cast<unsigned long long>(_ret);
}

unsigned int miqt_QbswapHelper2(unsigned int source) {

	quint32 _ret = qbswap_helper(static_cast<quint32>(source));
	return static_cast<unsigned int>(_ret);
}

unsigned short miqt_QbswapHelper3(unsigned short source) {

	quint16 _ret = qbswap_helper(static_cast<quint16>(source));
	return static_cast<unsigned short>(_ret);
}

unsigned char miqt_QbswapHelper4(unsigned char source) {

	quint8 _ret = qbswap_helper(static_cast<quint8>(source));
	return static_cast<unsigned char>(_ret);
}

float miqt_Qbswap2(float source) {

	return qbswap(static_cast<float>(source));
}

double miqt_Qbswap3(double source) {

	return qbswap(static_cast<double>(source));
}

