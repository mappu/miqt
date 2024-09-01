package qt

/*

#include "gen_qdesktopservices.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QDesktopServices struct {
	h *C.QDesktopServices
}

func (this *QDesktopServices) cPointer() *C.QDesktopServices {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDesktopServices(h *C.QDesktopServices) *QDesktopServices {
	if h == nil {
		return nil
	}
	return &QDesktopServices{h: h}
}

func newQDesktopServices_U(h unsafe.Pointer) *QDesktopServices {
	return newQDesktopServices((*C.QDesktopServices)(h))
}

func QDesktopServices_OpenUrl(url *QUrl) bool {
	ret := C.QDesktopServices_OpenUrl(url.cPointer())
	return (bool)(ret)
}

func QDesktopServices_SetUrlHandler(scheme string, receiver *QObject, method string) {
	scheme_Cstring := C.CString(scheme)
	defer C.free(unsafe.Pointer(scheme_Cstring))
	method_Cstring := C.CString(method)
	defer C.free(unsafe.Pointer(method_Cstring))
	C.QDesktopServices_SetUrlHandler(scheme_Cstring, C.ulong(len(scheme)), receiver.cPointer(), method_Cstring)
}

func QDesktopServices_UnsetUrlHandler(scheme string) {
	scheme_Cstring := C.CString(scheme)
	defer C.free(unsafe.Pointer(scheme_Cstring))
	C.QDesktopServices_UnsetUrlHandler(scheme_Cstring, C.ulong(len(scheme)))
}

func (this *QDesktopServices) Delete() {
	C.QDesktopServices_Delete(this.h)
}
