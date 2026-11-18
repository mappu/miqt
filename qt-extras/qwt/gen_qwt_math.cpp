#include <qwt_math.h>
#include "gen_qwt_math.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

double miqt_QwtGetMin2(const double* array, int size) {

	return qwtGetMin(static_cast<const double*>(array), static_cast<int>(size));
}

double miqt_QwtGetMax2(const double* array, int size) {

	return qwtGetMax(static_cast<const double*>(array), static_cast<int>(size));
}

double miqt_QwtNormalizeRadiansWithRadians(double radians) {

	return qwtNormalizeRadians(static_cast<double>(radians));
}

double miqt_QwtNormalizeDegreesWithDegrees(double degrees) {

	return qwtNormalizeDegrees(static_cast<double>(degrees));
}

int miqt_QwtFuzzyCompare2(double value1, double value2, double intervalSize) {

	return qwtFuzzyCompare(static_cast<double>(value1), static_cast<double>(value2), static_cast<double>(intervalSize));
}

bool miqt_QwtFuzzyGreaterOrEqual2(double d1, double d2) {

	return qwtFuzzyGreaterOrEqual(static_cast<double>(d1), static_cast<double>(d2));
}

bool miqt_QwtFuzzyLessOrEqual2(double d1, double d2) {

	return qwtFuzzyLessOrEqual(static_cast<double>(d1), static_cast<double>(d2));
}

int miqt_QwtSignWithDouble(double x) {

	return qwtSign(static_cast<double>(x));
}

double miqt_QwtSqrWithDouble(double x) {

	return qwtSqr(static_cast<double>(x));
}

double miqt_QwtFastAtanWithDouble(double x) {

	return qwtFastAtan(static_cast<double>(x));
}

double miqt_QwtFastAtan22(double y, double x) {

	return qwtFastAtan2(static_cast<double>(y), static_cast<double>(x));
}

double miqt_QwtRadiansWithDegrees(double degrees) {

	return qwtRadians(static_cast<double>(degrees));
}

double miqt_QwtDegreesWithDegrees(double degrees) {

	return qwtDegrees(static_cast<double>(degrees));
}

