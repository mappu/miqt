package qt

/*

#include "gen_qrgb.h"
#include <stdlib.h>

*/
import "C"

func QRedWithRgb(rgb uint) int {
	return (int)(C.miqt_QRedWithRgb((C.uint)(rgb)))
}

func QGreenWithRgb(rgb uint) int {
	return (int)(C.miqt_QGreenWithRgb((C.uint)(rgb)))
}

func QBlueWithRgb(rgb uint) int {
	return (int)(C.miqt_QBlueWithRgb((C.uint)(rgb)))
}

func QAlphaWithRgb(rgb uint) int {
	return (int)(C.miqt_QAlphaWithRgb((C.uint)(rgb)))
}

func QRgb2(r int, g int, b int) uint {
	return (uint)(C.miqt_QRgb2((C.int)(r), (C.int)(g), (C.int)(b)))
}

func QRgba2(r int, g int, b int, a int) uint {
	return (uint)(C.miqt_QRgba2((C.int)(r), (C.int)(g), (C.int)(b), (C.int)(a)))
}

func QGray2(r int, g int, b int) int {
	return (int)(C.miqt_QGray2((C.int)(r), (C.int)(g), (C.int)(b)))
}

func QGrayWithRgb(rgb uint) int {
	return (int)(C.miqt_QGrayWithRgb((C.uint)(rgb)))
}

func QIsGrayWithRgb(rgb uint) bool {
	return (bool)(C.miqt_QIsGrayWithRgb((C.uint)(rgb)))
}

func QPremultiplyWithQRgb(x uint) uint {
	return (uint)(C.miqt_QPremultiplyWithQRgb((C.uint)(x)))
}

func QUnpremultiplyWithQRgb(p uint) uint {
	return (uint)(C.miqt_QUnpremultiplyWithQRgb((C.uint)(p)))
}
