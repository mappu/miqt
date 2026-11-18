package qt

/*

#include "gen_qendian.h"
#include <stdlib.h>

*/
import "C"

func Qbswap2(source float32) float32 {
	return (float32)(C.miqt_Qbswap2((C.float)(source)))
}

func Qbswap3(source float64) float64 {
	return (float64)(C.miqt_Qbswap3((C.double)(source)))
}
