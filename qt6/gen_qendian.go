package qt6

/*

#include "gen_qendian.h"
#include <stdlib.h>

*/
import "C"

func QbswapHelperWithSource(source uint64) uint64 {
	return (uint64)(C.miqt_QbswapHelperWithSource((C.ulonglong)(source)))
}

func QbswapHelper2(source uint) uint {
	return (uint)(C.miqt_QbswapHelper2((C.uint)(source)))
}

func QbswapHelper3(source uint16) uint16 {
	return (uint16)(C.miqt_QbswapHelper3((C.ushort)(source)))
}

func QbswapHelper4(source byte) byte {
	return (byte)(C.miqt_QbswapHelper4((C.uchar)(source)))
}

func Qbswap2(source float32) float32 {
	return (float32)(C.miqt_Qbswap2((C.float)(source)))
}

func Qbswap3(source float64) float64 {
	return (float64)(C.miqt_Qbswap3((C.double)(source)))
}
