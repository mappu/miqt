package webkit

/*

#include "gen_qwebkitglobal.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

func QWebKitVersion2() string {
	var _ms C.struct_miqt_string = C.miqt_QWebKitVersion2()
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QWebKitMajorVersion2() int {
	return (int)(C.miqt_QWebKitMajorVersion2())
}

func QWebKitMinorVersion2() int {
	return (int)(C.miqt_QWebKitMinorVersion2())
}
