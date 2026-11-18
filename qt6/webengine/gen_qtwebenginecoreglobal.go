package webengine

/*

#include "gen_qtwebenginecoreglobal.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

func QWebEngineVersion2() string {
	_ret := C.miqt_QWebEngineVersion2()
	return C.GoString(_ret)
}

func QWebEngineChromiumVersion2() string {
	_ret := C.miqt_QWebEngineChromiumVersion2()
	return C.GoString(_ret)
}

func QWebEngineChromiumSecurityPatchVersion2() string {
	_ret := C.miqt_QWebEngineChromiumSecurityPatchVersion2()
	return C.GoString(_ret)
}
