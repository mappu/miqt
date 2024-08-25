package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qmessageauthenticationcode.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QMessageAuthenticationCode struct {
	h *C.QMessageAuthenticationCode
}

func (this *QMessageAuthenticationCode) cPointer() *C.QMessageAuthenticationCode {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMessageAuthenticationCode(h *C.QMessageAuthenticationCode) *QMessageAuthenticationCode {
	return &QMessageAuthenticationCode{h: h}
}

func newQMessageAuthenticationCode_U(h unsafe.Pointer) *QMessageAuthenticationCode {
	return newQMessageAuthenticationCode((*C.QMessageAuthenticationCode)(h))
}

func (this *QMessageAuthenticationCode) Reset() {
	C.QMessageAuthenticationCode_Reset(this.h)
}

func (this *QMessageAuthenticationCode) SetKey(key *QByteArray) {
	C.QMessageAuthenticationCode_SetKey(this.h, key.cPointer())
}

func (this *QMessageAuthenticationCode) AddData(data string, length int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QMessageAuthenticationCode_AddData(this.h, data_Cstring, (C.int)(length))
}

func (this *QMessageAuthenticationCode) AddDataWithData(data *QByteArray) {
	C.QMessageAuthenticationCode_AddDataWithData(this.h, data.cPointer())
}

func (this *QMessageAuthenticationCode) AddDataWithDevice(device *QIODevice) bool {
	ret := C.QMessageAuthenticationCode_AddDataWithDevice(this.h, device.cPointer())
	return (bool)(ret)
}

func (this *QMessageAuthenticationCode) Result() *QByteArray {
	ret := C.QMessageAuthenticationCode_Result(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMessageAuthenticationCode) Delete() {
	C.QMessageAuthenticationCode_Delete(this.h)
}