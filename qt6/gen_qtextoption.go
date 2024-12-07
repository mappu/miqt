package qt6

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
	QTextOption__LeftTab      QTextOption__TabType = 0
	QTextOption__RightTab     QTextOption__TabType = 1
	QTextOption__CenterTab    QTextOption__TabType = 2
	QTextOption__DelimiterTab QTextOption__TabType = 3
)

type QTextOption__WrapMode int

const (
	QTextOption__NoWrap                       QTextOption__WrapMode = 0
	QTextOption__WordWrap                     QTextOption__WrapMode = 1
	QTextOption__ManualWrap                   QTextOption__WrapMode = 2
	QTextOption__WrapAnywhere                 QTextOption__WrapMode = 3
	QTextOption__WrapAtWordBoundaryOrAnywhere QTextOption__WrapMode = 4
)

type QTextOption__Flag int

const (
	QTextOption__ShowTabsAndSpaces                     QTextOption__Flag = 1
	QTextOption__ShowLineAndParagraphSeparators        QTextOption__Flag = 2
	QTextOption__AddSpaceForLineAndParagraphSeparators QTextOption__Flag = 4
	QTextOption__SuppressColors                        QTextOption__Flag = 8
	QTextOption__ShowDocumentTerminator                QTextOption__Flag = 16
	QTextOption__IncludeTrailingSpaces                 QTextOption__Flag = 2147483648
)

type QTextOption struct {
	h          *C.QTextOption
	isSubclass bool
}

func (this *QTextOption) cPointer() *C.QTextOption {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextOption) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextOption constructs the type using only CGO pointers.
func newQTextOption(h *C.QTextOption) *QTextOption {
	if h == nil {
		return nil
	}

	return &QTextOption{h: h}
}

// UnsafeNewQTextOption constructs the type using only unsafe pointers.
func UnsafeNewQTextOption(h unsafe.Pointer) *QTextOption {
	return newQTextOption((*C.QTextOption)(h))
}

// NewQTextOption constructs a new QTextOption object.
func NewQTextOption() *QTextOption {

	ret := newQTextOption(C.QTextOption_new())
	ret.isSubclass = true
	return ret
}

// NewQTextOption2 constructs a new QTextOption object.
func NewQTextOption2(alignment AlignmentFlag) *QTextOption {

	ret := newQTextOption(C.QTextOption_new2((C.int)(alignment)))
	ret.isSubclass = true
	return ret
}

// NewQTextOption3 constructs a new QTextOption object.
func NewQTextOption3(o *QTextOption) *QTextOption {

	ret := newQTextOption(C.QTextOption_new3(o.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QTextOption) OperatorAssign(o *QTextOption) {
	C.QTextOption_OperatorAssign(this.h, o.cPointer())
}

func (this *QTextOption) SetAlignment(alignment AlignmentFlag) {
	C.QTextOption_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QTextOption) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QTextOption_Alignment(this.h))
}

func (this *QTextOption) SetTextDirection(aDirection LayoutDirection) {
	C.QTextOption_SetTextDirection(this.h, (C.int)(aDirection))
}

func (this *QTextOption) TextDirection() LayoutDirection {
	return (LayoutDirection)(C.QTextOption_TextDirection(this.h))
}

func (this *QTextOption) SetWrapMode(wrap QTextOption__WrapMode) {
	C.QTextOption_SetWrapMode(this.h, (C.int)(wrap))
}

func (this *QTextOption) WrapMode() QTextOption__WrapMode {
	return (QTextOption__WrapMode)(C.QTextOption_WrapMode(this.h))
}

func (this *QTextOption) SetFlags(flags QTextOption__Flag) {
	C.QTextOption_SetFlags(this.h, (C.int)(flags))
}

func (this *QTextOption) Flags() QTextOption__Flag {
	return (QTextOption__Flag)(C.QTextOption_Flags(this.h))
}

func (this *QTextOption) SetTabStopDistance(tabStopDistance float64) {
	C.QTextOption_SetTabStopDistance(this.h, (C.double)(tabStopDistance))
}

func (this *QTextOption) TabStopDistance() float64 {
	return (float64)(C.QTextOption_TabStopDistance(this.h))
}

func (this *QTextOption) SetTabArray(tabStops []float64) {
	tabStops_CArray := (*[0xffff]C.double)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = (C.double)(tabStops[i])
	}
	tabStops_ma := C.struct_miqt_array{len: C.size_t(len(tabStops)), data: unsafe.Pointer(tabStops_CArray)}
	C.QTextOption_SetTabArray(this.h, tabStops_ma)
}

func (this *QTextOption) TabArray() []float64 {
	var _ma C.struct_miqt_array = C.QTextOption_TabArray(this.h)
	_ret := make([]float64, int(_ma.len))
	_outCast := (*[0xffff]C.double)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (float64)(_outCast[i])
	}
	return _ret
}

func (this *QTextOption) SetTabs(tabStops []QTextOption__Tab) {
	tabStops_CArray := (*[0xffff]*C.QTextOption__Tab)(C.malloc(C.size_t(8 * len(tabStops))))
	defer C.free(unsafe.Pointer(tabStops_CArray))
	for i := range tabStops {
		tabStops_CArray[i] = tabStops[i].cPointer()
	}
	tabStops_ma := C.struct_miqt_array{len: C.size_t(len(tabStops)), data: unsafe.Pointer(tabStops_CArray)}
	C.QTextOption_SetTabs(this.h, tabStops_ma)
}

func (this *QTextOption) Tabs() []QTextOption__Tab {
	var _ma C.struct_miqt_array = C.QTextOption_Tabs(this.h)
	_ret := make([]QTextOption__Tab, int(_ma.len))
	_outCast := (*[0xffff]*C.QTextOption__Tab)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTextOption__Tab(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTextOption) SetUseDesignMetrics(b bool) {
	C.QTextOption_SetUseDesignMetrics(this.h, (C.bool)(b))
}

func (this *QTextOption) UseDesignMetrics() bool {
	return (bool)(C.QTextOption_UseDesignMetrics(this.h))
}

// Delete this object from C++ memory.
func (this *QTextOption) Delete() {
	C.QTextOption_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QTextOption__Tab
	isSubclass bool
}

func (this *QTextOption__Tab) cPointer() *C.QTextOption__Tab {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTextOption__Tab) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTextOption__Tab constructs the type using only CGO pointers.
func newQTextOption__Tab(h *C.QTextOption__Tab) *QTextOption__Tab {
	if h == nil {
		return nil
	}

	return &QTextOption__Tab{h: h}
}

// UnsafeNewQTextOption__Tab constructs the type using only unsafe pointers.
func UnsafeNewQTextOption__Tab(h unsafe.Pointer) *QTextOption__Tab {
	return newQTextOption__Tab((*C.QTextOption__Tab)(h))
}

// NewQTextOption__Tab constructs a new QTextOption::Tab object.
func NewQTextOption__Tab() *QTextOption__Tab {

	ret := newQTextOption__Tab(C.QTextOption__Tab_new())
	ret.isSubclass = true
	return ret
}

// NewQTextOption__Tab2 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab2(pos float64, tabType QTextOption__TabType) *QTextOption__Tab {

	ret := newQTextOption__Tab(C.QTextOption__Tab_new2((C.double)(pos), (C.int)(tabType)))
	ret.isSubclass = true
	return ret
}

// NewQTextOption__Tab3 constructs a new QTextOption::Tab object.
func NewQTextOption__Tab3(pos float64, tabType QTextOption__TabType, delim QChar) *QTextOption__Tab {

	ret := newQTextOption__Tab(C.QTextOption__Tab_new3((C.double)(pos), (C.int)(tabType), delim.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QTextOption__Tab) OperatorEqual(other *QTextOption__Tab) bool {
	return (bool)(C.QTextOption__Tab_OperatorEqual(this.h, other.cPointer()))
}

func (this *QTextOption__Tab) OperatorNotEqual(other *QTextOption__Tab) bool {
	return (bool)(C.QTextOption__Tab_OperatorNotEqual(this.h, other.cPointer()))
}

// Delete this object from C++ memory.
func (this *QTextOption__Tab) Delete() {
	C.QTextOption__Tab_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTextOption__Tab) GoGC() {
	runtime.SetFinalizer(this, func(this *QTextOption__Tab) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
