package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qtextoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"unsafe"
)

type QTextOption struct {
	h *C.QTextOption
}

func (this *QTextOption) cPointer() *C.QTextOption {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextOption(h *C.QTextOption) *QTextOption {
	return &QTextOption{h: h}
}

func newQTextOption_U(h unsafe.Pointer) *QTextOption {
	return newQTextOption((*C.QTextOption)(h))
}

// NewQTextOption constructs a new QTextOption object.
func NewQTextOption() *QTextOption {
	ret := C.QTextOption_new()
	return newQTextOption(ret)
}

// NewQTextOption2 constructs a new QTextOption object.
func NewQTextOption2(o *QTextOption) *QTextOption {
	ret := C.QTextOption_new2(o.cPointer())
	return newQTextOption(ret)
}

func (this *QTextOption) OperatorAssign(o *QTextOption) {
	C.QTextOption_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextOption) SetTabStop(tabStop float64) {
	C.QTextOption_SetTabStop(this.h, (C.double)(tabStop))
}

func (this *QTextOption) TabStop() float64 {
	ret := C.QTextOption_TabStop(this.h)
	return (float64)(ret)
}

func (this *QTextOption) SetTabStopDistance(tabStopDistance float64) {
	C.QTextOption_SetTabStopDistance(this.h, (C.double)(tabStopDistance))
}

func (this *QTextOption) TabStopDistance() float64 {
	ret := C.QTextOption_TabStopDistance(this.h)
	return (float64)(ret)
}

func (this *QTextOption) SetTabArray(tabStops []float64) {
	// For the C ABI, malloc a C array of raw pointers
	tabStops_CArray := (*[0xffff]C.double)(C.malloc(C.ulong(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = (C.double)(tabStops[i])
	}
	C.QTextOption_SetTabArray(this.h, &tabStops_CArray[0], C.ulong(len(tabStops)))
}

func (this *QTextOption) TabArray() []float64 {
	var _out *C.double = nil
	var _out_len C.size_t = 0
	C.QTextOption_TabArray(this.h, &_out, &_out_len)
	ret := make([]float64, int(_out_len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_out)) // mrs jackson
	for i := 0; i < int(_out_len); i++ {
		ret[i] = (float64)(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTextOption) SetUseDesignMetrics(b bool) {
	C.QTextOption_SetUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextOption) UseDesignMetrics() bool {
	ret := C.QTextOption_UseDesignMetrics(this.h)
	return (bool)(ret)
}

func (this *QTextOption) Delete() {
	C.QTextOption_Delete(this.h)
}
