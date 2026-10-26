#pragma once
#ifndef MIQT_QT_EXTRAS_QWT_GEN_QWT_MATH_H
#define MIQT_QT_EXTRAS_QWT_GEN_QWT_MATH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

double miqt_QwtGetMin2(const double* array, int size);
double miqt_QwtGetMax2(const double* array, int size);
double miqt_QwtNormalizeRadiansWithRadians(double radians);
double miqt_QwtNormalizeDegreesWithDegrees(double degrees);
int miqt_QwtFuzzyCompare2(double value1, double value2, double intervalSize);
bool miqt_QwtFuzzyGreaterOrEqual2(double d1, double d2);
bool miqt_QwtFuzzyLessOrEqual2(double d1, double d2);
int miqt_QwtSignWithDouble(double x);
double miqt_QwtSqrWithDouble(double x);
double miqt_QwtFastAtanWithDouble(double x);
double miqt_QwtFastAtan22(double y, double x);
double miqt_QwtRadiansWithDegrees(double degrees);
double miqt_QwtDegreesWithDegrees(double degrees);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
