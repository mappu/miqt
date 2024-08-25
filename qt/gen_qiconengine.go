package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qiconengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QIconEngine struct {
	h *C.QIconEngine
}

func (this *QIconEngine) cPointer() *C.QIconEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func newQIconEngine(h *C.QIconEngine) *QIconEngine {
	return &QIconEngine{h: h}
}

func newQIconEngine_U(h unsafe.Pointer) *QIconEngine {
	return newQIconEngine((*C.QIconEngine)(h))
}

func (this *QIconEngine) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEngine_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIconEngine) Clone() *QIconEngine {
	ret := C.QIconEngine_Clone(this.h)
	return newQIconEngine_U(unsafe.Pointer(ret))
}

func (this *QIconEngine) Read(in *QDataStream) bool {
	ret := C.QIconEngine_Read(this.h, in.cPointer())
	return (bool)(ret)
}

func (this *QIconEngine) Write(out *QDataStream) bool {
	ret := C.QIconEngine_Write(this.h, out.cPointer())
	return (bool)(ret)
}

func (this *QIconEngine) IconName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QIconEngine_IconName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QIconEngine) IsNull() bool {
	ret := C.QIconEngine_IsNull(this.h)
	return (bool)(ret)
}

func (this *QIconEngine) Delete() {
	C.QIconEngine_Delete(this.h)
}
