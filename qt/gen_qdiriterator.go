package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdiriterator.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDirIterator struct {
	h *C.QDirIterator
}

func (this *QDirIterator) cPointer() *C.QDirIterator {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDirIterator(h *C.QDirIterator) *QDirIterator {
	return &QDirIterator{h: h}
}

func newQDirIterator_U(h unsafe.Pointer) *QDirIterator {
	return newQDirIterator((*C.QDirIterator)(h))
}

func (this *QDirIterator) Next() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_Next(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) HasNext() bool {
	ret := C.QDirIterator_HasNext(this.h)
	return (bool)(ret)
}

func (this *QDirIterator) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) FilePath() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_FilePath(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) FileInfo() *QFileInfo {
	ret := C.QDirIterator_FileInfo(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQFileInfo(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QFileInfo) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDirIterator) Path() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDirIterator_Path(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDirIterator) Delete() {
	C.QDirIterator_Delete(this.h)
}
