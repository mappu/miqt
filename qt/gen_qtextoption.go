package qt

/*

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
	if h == nil {
		return nil
	}
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
func NewQTextOption2(alignment int) *QTextOption {
	ret := C.QTextOption_new2((C.int)(alignment))
	return newQTextOption(ret)
}

// NewQTextOption3 constructs a new QTextOption object.
func NewQTextOption3(o *QTextOption) *QTextOption {
	ret := C.QTextOption_new3(o.cPointer())
	return newQTextOption(ret)
}

func (this *QTextOption) OperatorAssign(o *QTextOption) {
	C.QTextOption_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextOption) SetAlignment(alignment int) {
	C.QTextOption_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextOption) Alignment() int {
	ret := C.QTextOption_Alignment(this.h)
	return (int)(ret)
}

func (this *QTextOption) SetTextDirection(aDirection uintptr) {
	C.QTextOption_SetTextDirection(this.h, (C.uintptr_t)(aDirection))
}

func (this *QTextOption) TextDirection() uintptr {
	ret := C.QTextOption_TextDirection(this.h)
	return (uintptr)(ret)
}

func (this *QTextOption) SetWrapMode(wrap uintptr) {
	C.QTextOption_SetWrapMode(this.h, (C.uintptr_t)(wrap))
}

func (this *QTextOption) WrapMode() uintptr {
	ret := C.QTextOption_WrapMode(this.h)
	return (uintptr)(ret)
}

func (this *QTextOption) SetFlags(flags int) {
	C.QTextOption_SetFlags(this.h, (C.int)(flags))
}

func (this *QTextOption) Flags() int {
	ret := C.QTextOption_Flags(this.h)
	return (int)(ret)
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
	tabStops_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = (C.double)(tabStops[i])
	}
	C.QTextOption_SetTabArray(this.h, &tabStops_CArray[0], C.size_t(len(tabStops)))
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

func (this *QTextOption) SetTabs(tabStops []QTextOption__Tab) {
	// For the C ABI, malloc a C array of raw pointers
	tabStops_CArray := (*[0xffff]*C.QTextOption__Tab)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = tabStops[i].cPointer()
	}
	C.QTextOption_SetTabs(this.h, &tabStops_CArray[0], C.size_t(len(tabStops)))
}

func (this *QTextOption) Tabs() []QTextOption__Tab {
	var _out **C.QTextOption__Tab = nil
	var _out_len C.size_t = 0
	C.QTextOption_Tabs(this.h, &_out, &_out_len)
	ret := make([]QTextOption__Tab, int(_out_len))
	_outCast := (*[0xffff]*C.QTextOption__Tab)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQTextOption__Tab(_outCast[i])
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

type QTextOption__Tab struct {
	h *C.QTextOption__Tab
}

func (this *QTextOption__Tab) cPointer() *C.QTextOption__Tab {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTextOption__Tab(h *C.QTextOption__Tab) *QTextOption__Tab {
	if h == nil {
		return nil
	}
	return &QTextOption__Tab{h: h}
}

func newQTextOption__Tab_U(h unsafe.Pointer) *QTextOption__Tab {
	return newQTextOption__Tab((*C.QTextOption__Tab)(h))
}

// NewQTextOption__Tab constructs a new QTextOption::Tab object.
func NewQTextOption__Tab() *QTextOption__Tab {
	ret := C.QTextOption__Tab_new()
	return newQTextOption__Tab(ret)
}

// NewQTextOption__Tab2 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab2(pos float64, tabType uintptr) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new2((C.double)(pos), (C.uintptr_t)(tabType))
	return newQTextOption__Tab(ret)
}

// NewQTextOption__Tab3 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab3(param1 *QTextOption__Tab) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new3(param1.cPointer())
	return newQTextOption__Tab(ret)
}

// NewQTextOption__Tab4 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab4(pos float64, tabType uintptr, delim QChar) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new4((C.double)(pos), (C.uintptr_t)(tabType), delim.cPointer())
	return newQTextOption__Tab(ret)
}

func (this *QTextOption__Tab) OperatorEqual(other *QTextOption__Tab) bool {
	ret := C.QTextOption__Tab_OperatorEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextOption__Tab) OperatorNotEqual(other *QTextOption__Tab) bool {
	ret := C.QTextOption__Tab_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QTextOption__Tab) Delete() {
	C.QTextOption__Tab_Delete(this.h)
}
