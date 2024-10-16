package libmiqt

// SPDX-License-Identifier: MIT

/*

#include "libmiqt.h"

struct miqt_string* miqt_strdupg(_GoString_ gs) {
	return miqt_strdup(_GoStringPtr(gs), _GoStringLen(gs));
}

*/
import "C"

import (
	"unsafe"
)

// Strdupg will strdup a Go string into a miqt_string*.
// It is typed as returning an unsafe.Pointer because Cgo types cannot be shared
// across Go file boundaries.
func Strdupg(s string) unsafe.Pointer {
	return unsafe.Pointer(C.miqt_strdupg(s))
}
