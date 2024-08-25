package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qcryptographichash.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QCryptographicHash struct {
	h *C.QCryptographicHash
}

func (this *QCryptographicHash) cPointer() *C.QCryptographicHash {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCryptographicHash(h *C.QCryptographicHash) *QCryptographicHash {
	return &QCryptographicHash{h: h}
}

func newQCryptographicHash_U(h unsafe.Pointer) *QCryptographicHash {
	return newQCryptographicHash((*C.QCryptographicHash)(h))
}

func (this *QCryptographicHash) Reset() {
	C.QCryptographicHash_Reset(this.h)
}

func (this *QCryptographicHash) AddData(data string, length int) {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	C.QCryptographicHash_AddData(this.h, data_Cstring, (C.int)(length))
}

func (this *QCryptographicHash) AddDataWithData(data *QByteArray) {
	C.QCryptographicHash_AddDataWithData(this.h, data.cPointer())
}

func (this *QCryptographicHash) AddDataWithDevice(device *QIODevice) bool {
	ret := C.QCryptographicHash_AddDataWithDevice(this.h, device.cPointer())
	return (bool)(ret)
}

func (this *QCryptographicHash) Result() *QByteArray {
	ret := C.QCryptographicHash_Result(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QCryptographicHash) Delete() {
	C.QCryptographicHash_Delete(this.h)
}
