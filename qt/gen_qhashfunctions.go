package qt

/*

#include "gen_qhashfunctions.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

func QGlobalQHashSeed2() int {
	return (int)(C.miqt_QGlobalQHashSeed2())
}

func QSetGlobalQHashSeedWithNewSeed(newSeed int) {
	C.miqt_QSetGlobalQHashSeedWithNewSeed((C.int)(newSeed))
}

func QHashBits2(p unsafe.Pointer, size uint64, seed uint) uint {
	return (uint)(C.miqt_QHashBits2(p, (C.size_t)(size), (C.uint)(seed)))
}
