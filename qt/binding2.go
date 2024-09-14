package qt

// SPDX-License-Identifier: MIT

/*

#include "binding.h"

struct miqt_string* miqt_strdupg(_GoString_ gs) {
	return miqt_strdup(_GoStringPtr(gs), _GoStringLen(gs));
}

*/
import "C"

// miqt_strdupg will strdup a Go string into a miqt_string*.
// It is typed as returning an unsafe.Pointer because Cgo types cannot be shared
// across Go file boundaries.
func miqt_strdupg(s string) unsafe.Pointer {
	return C.miqt_strdupg(s)
}
