package qwt

/*

#include "gen_qwt_math.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

func QwtGetMin2(array *float64, size int) float64 {
	return (float64)(C.miqt_QwtGetMin2((*C.double)(unsafe.Pointer(array)), (C.int)(size)))
}

func QwtGetMax2(array *float64, size int) float64 {
	return (float64)(C.miqt_QwtGetMax2((*C.double)(unsafe.Pointer(array)), (C.int)(size)))
}

func QwtNormalizeRadiansWithRadians(radians float64) float64 {
	return (float64)(C.miqt_QwtNormalizeRadiansWithRadians((C.double)(radians)))
}

func QwtNormalizeDegreesWithDegrees(degrees float64) float64 {
	return (float64)(C.miqt_QwtNormalizeDegreesWithDegrees((C.double)(degrees)))
}

func QwtFuzzyCompare2(value1 float64, value2 float64, intervalSize float64) int {
	return (int)(C.miqt_QwtFuzzyCompare2((C.double)(value1), (C.double)(value2), (C.double)(intervalSize)))
}

func QwtFuzzyGreaterOrEqual2(d1 float64, d2 float64) bool {
	return (bool)(C.miqt_QwtFuzzyGreaterOrEqual2((C.double)(d1), (C.double)(d2)))
}

func QwtFuzzyLessOrEqual2(d1 float64, d2 float64) bool {
	return (bool)(C.miqt_QwtFuzzyLessOrEqual2((C.double)(d1), (C.double)(d2)))
}

func QwtSignWithDouble(x float64) int {
	return (int)(C.miqt_QwtSignWithDouble((C.double)(x)))
}

func QwtSqrWithDouble(x float64) float64 {
	return (float64)(C.miqt_QwtSqrWithDouble((C.double)(x)))
}

func QwtFastAtanWithDouble(x float64) float64 {
	return (float64)(C.miqt_QwtFastAtanWithDouble((C.double)(x)))
}

func QwtFastAtan22(y float64, x float64) float64 {
	return (float64)(C.miqt_QwtFastAtan22((C.double)(y), (C.double)(x)))
}

func QwtRadiansWithDegrees(degrees float64) float64 {
	return (float64)(C.miqt_QwtRadiansWithDegrees((C.double)(degrees)))
}

func QwtDegreesWithDegrees(degrees float64) float64 {
	return (float64)(C.miqt_QwtDegreesWithDegrees((C.double)(degrees)))
}
