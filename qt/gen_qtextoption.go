package qt

/*

#include "gen_qtextoption.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QTextOption__TabType int

const (
	QTextOption__TabType__LeftTab      QTextOption__TabType = 0
	QTextOption__TabType__RightTab     QTextOption__TabType = 1
	QTextOption__TabType__CenterTab    QTextOption__TabType = 2
	QTextOption__TabType__DelimiterTab QTextOption__TabType = 3
)

type QTextOption__WrapMode int

const (
	QTextOption__WrapMode__NoWrap                       QTextOption__WrapMode = 0
	QTextOption__WrapMode__WordWrap                     QTextOption__WrapMode = 1
	QTextOption__WrapMode__ManualWrap                   QTextOption__WrapMode = 2
	QTextOption__WrapMode__WrapAnywhere                 QTextOption__WrapMode = 3
	QTextOption__WrapMode__WrapAtWordBoundaryOrAnywhere QTextOption__WrapMode = 4
)

type QTextOption__Flag int

const (
	QTextOption__Flag__ShowTabsAndSpaces                     QTextOption__Flag = 1
	QTextOption__Flag__ShowLineAndParagraphSeparators        QTextOption__Flag = 2
	QTextOption__Flag__AddSpaceForLineAndParagraphSeparators QTextOption__Flag = 4
	QTextOption__Flag__SuppressColors                        QTextOption__Flag = 8
	QTextOption__Flag__ShowDocumentTerminator                QTextOption__Flag = 16
	QTextOption__Flag__IncludeTrailingSpaces                 QTextOption__Flag = 2147483648
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
	_ret := C.QTextOption_Alignment(this.h)
	return (int)(_ret)
}

func (this *QTextOption) SetTextDirection(aDirection LayoutDirection) {
	C.QTextOption_SetTextDirection(this.h, (C.uintptr_t)(aDirection))
}

func (this *QTextOption) TextDirection() LayoutDirection {
	_ret := C.QTextOption_TextDirection(this.h)
	return (LayoutDirection)(_ret)
}

func (this *QTextOption) SetWrapMode(wrap QTextOption__WrapMode) {
	C.QTextOption_SetWrapMode(this.h, (C.uintptr_t)(wrap))
}

func (this *QTextOption) WrapMode() QTextOption__WrapMode {
	_ret := C.QTextOption_WrapMode(this.h)
	return (QTextOption__WrapMode)(_ret)
}

func (this *QTextOption) SetFlags(flags int) {
	C.QTextOption_SetFlags(this.h, (C.int)(flags))
}

func (this *QTextOption) Flags() int {
	_ret := C.QTextOption_Flags(this.h)
	return (int)(_ret)
}

func (this *QTextOption) SetTabStop(tabStop float64) {
	C.QTextOption_SetTabStop(this.h, (C.double)(tabStop))
}

func (this *QTextOption) TabStop() float64 {
	_ret := C.QTextOption_TabStop(this.h)
	return (float64)(_ret)
}

func (this *QTextOption) SetTabStopDistance(tabStopDistance float64) {
	C.QTextOption_SetTabStopDistance(this.h, (C.double)(tabStopDistance))
}

func (this *QTextOption) TabStopDistance() float64 {
	_ret := C.QTextOption_TabStopDistance(this.h)
	return (float64)(_ret)
}

func (this *QTextOption) SetTabArray(tabStops []float64) {
	// For the C ABI, malloc a C array of raw pointers
	tabStops_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = (C.double)(tabStops[i])
	}
	tabStops_ma := &C.struct_miqt_array{len: C.size_t(len(tabStops)), data: unsafe.Pointer(tabStops_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(tabStops_ma))
	C.QTextOption_SetTabArray(this.h, tabStops_ma)
}

func (this *QTextOption) TabArray() []float64 {
	var _ma *C.struct_miqt_array = C.QTextOption_TabArray(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextOption) SetTabs(tabStops []QTextOption__Tab) {
	// For the C ABI, malloc a C array of raw pointers
	tabStops_CArray := (*[0xffff]*C.QTextOption__Tab)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = tabStops[i].cPointer()
	}
	tabStops_ma := &C.struct_miqt_array{len: C.size_t(len(tabStops)), data: unsafe.Pointer(tabStops_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(tabStops_ma))
	C.QTextOption_SetTabs(this.h, tabStops_ma)
}

func (this *QTextOption) Tabs() []QTextOption__Tab {
	var _ma *C.struct_miqt_array = C.QTextOption_Tabs(this.h)
	_ret := make([]QTextOption__Tab, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextOption__Tab)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = *newQTextOption__Tab(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTextOption) SetUseDesignMetrics(b bool) {
	C.QTextOption_SetUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextOption) UseDesignMetrics() bool {
	_ret := C.QTextOption_UseDesignMetrics(this.h)
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QTextOption) Delete() {
	C.QTextOption_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextOption) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextOption) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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
func NewQTextOption__Tab2(pos float64, tabType QTextOption__TabType) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new2((C.double)(pos), (C.uintptr_t)(tabType))
	return newQTextOption__Tab(ret)
}

// NewQTextOption__Tab3 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab3(param1 *QTextOption__Tab) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new3(param1.cPointer())
	return newQTextOption__Tab(ret)
}

// NewQTextOption__Tab4 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab4(pos float64, tabType QTextOption__TabType, delim QChar) *QTextOption__Tab {
	ret := C.QTextOption__Tab_new4((C.double)(pos), (C.uintptr_t)(tabType), delim.cPointer())
	return newQTextOption__Tab(ret)
}

func (this *QTextOption__Tab) OperatorEqual(other *QTextOption__Tab) bool {
	_ret := C.QTextOption__Tab_OperatorEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

func (this *QTextOption__Tab) OperatorNotEqual(other *QTextOption__Tab) bool {
	_ret := C.QTextOption__Tab_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(_ret)
}

// Delete this object from C++ memory.
func (this *QTextOption__Tab) Delete() {
	C.QTextOption__Tab_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextOption__Tab) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextOption__Tab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
