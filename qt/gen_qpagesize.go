package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpagesize.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPageSize struct {
	h *C.QPageSize
}

func (this *QPageSize) cPointer() *C.QPageSize {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPageSize(h *C.QPageSize) *QPageSize {
	return &QPageSize{h: h}
}

func newQPageSize_U(h unsafe.Pointer) *QPageSize {
	return newQPageSize((*C.QPageSize)(h))
}

// NewQPageSize constructs a new QPageSize object.
func NewQPageSize() *QPageSize {
	ret := C.QPageSize_new()
	return newQPageSize(ret)
}

// NewQPageSize2 constructs a new QPageSize object.
func NewQPageSize2(other *QPageSize) *QPageSize {
	ret := C.QPageSize_new2(other.cPointer())
	return newQPageSize(ret)
}

func (this *QPageSize) OperatorAssign(other *QPageSize) {
	C.QPageSize_OperatorAssign(this.h, other.cPointer())
}

func (this *QPageSize) Swap(other *QPageSize) {
	C.QPageSize_Swap(this.h, other.cPointer())
}

func (this *QPageSize) IsEquivalentTo(other *QPageSize) bool {
	ret := C.QPageSize_IsEquivalentTo(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QPageSize) IsValid() bool {
	ret := C.QPageSize_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPageSize) Key() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_Key(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPageSize) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPageSize_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPageSize) WindowsId() int {
	ret := C.QPageSize_WindowsId(this.h)
	return (int)(ret)
}

func (this *QPageSize) DefinitionSize() *QSizeF {
	ret := C.QPageSize_DefinitionSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) SizePoints() *QSize {
	ret := C.QPageSize_SizePoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) SizePixels(resolution int) *QSize {
	ret := C.QPageSize_SizePixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) RectPoints() *QRect {
	ret := C.QPageSize_RectPoints(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) RectPixels(resolution int) *QRect {
	ret := C.QPageSize_RectPixels(this.h, (C.int)(resolution))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPageSize) Delete() {
	C.QPageSize_Delete(this.h)
}
