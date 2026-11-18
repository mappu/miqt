#include <qrgb.h>
#include "gen_qrgb.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

int miqt_QRedWithRgb(unsigned int rgb) {

	return qRed(static_cast<QRgb>(rgb));
}

int miqt_QGreenWithRgb(unsigned int rgb) {

	return qGreen(static_cast<QRgb>(rgb));
}

int miqt_QBlueWithRgb(unsigned int rgb) {

	return qBlue(static_cast<QRgb>(rgb));
}

int miqt_QAlphaWithRgb(unsigned int rgb) {

	return qAlpha(static_cast<QRgb>(rgb));
}

unsigned int miqt_QRgb2(int r, int g, int b) {

	QRgb _ret = qRgb(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
	return static_cast<unsigned int>(_ret);
}

unsigned int miqt_QRgba2(int r, int g, int b, int a) {

	QRgb _ret = qRgba(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b), static_cast<int>(a));
	return static_cast<unsigned int>(_ret);
}

int miqt_QGray2(int r, int g, int b) {

	return qGray(static_cast<int>(r), static_cast<int>(g), static_cast<int>(b));
}

int miqt_QGrayWithRgb(unsigned int rgb) {

	return qGray(static_cast<QRgb>(rgb));
}

bool miqt_QIsGrayWithRgb(unsigned int rgb) {

	return qIsGray(static_cast<QRgb>(rgb));
}

unsigned int miqt_QPremultiplyWithQRgb(unsigned int x) {

	QRgb _ret = qPremultiply(static_cast<QRgb>(x));
	return static_cast<unsigned int>(_ret);
}

unsigned int miqt_QUnpremultiplyWithQRgb(unsigned int p) {

	QRgb _ret = qUnpremultiply(static_cast<QRgb>(p));
	return static_cast<unsigned int>(_ret);
}

