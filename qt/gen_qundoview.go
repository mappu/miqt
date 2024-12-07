package qt

/*

#include "gen_qundoview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QUndoView struct {
	h          *C.QUndoView
	isSubclass bool
	*QListView
}

func (this *QUndoView) cPointer() *C.QUndoView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUndoView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUndoView constructs the type using only CGO pointers.
func newQUndoView(h *C.QUndoView, h_QListView *C.QListView, h_QAbstractItemView *C.QAbstractItemView, h_QAbstractScrollArea *C.QAbstractScrollArea, h_QFrame *C.QFrame, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QUndoView {
	if h == nil {
		return nil
	}
	return &QUndoView{h: h,
		QListView: newQListView(h_QListView, h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// UnsafeNewQUndoView constructs the type using only unsafe pointers.
func UnsafeNewQUndoView(h unsafe.Pointer, h_QListView unsafe.Pointer, h_QAbstractItemView unsafe.Pointer, h_QAbstractScrollArea unsafe.Pointer, h_QFrame unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QUndoView {
	if h == nil {
		return nil
	}

	return &QUndoView{h: (*C.QUndoView)(h),
		QListView: UnsafeNewQListView(h_QListView, h_QAbstractItemView, h_QAbstractScrollArea, h_QFrame, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQUndoView constructs a new QUndoView object.
func NewQUndoView(parent *QWidget) *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new(parent.cPointer(), &outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQUndoView2 constructs a new QUndoView object.
func NewQUndoView2() *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new2(&outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQUndoView3 constructs a new QUndoView object.
func NewQUndoView3(stack *QUndoStack) *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new3(stack.cPointer(), &outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQUndoView4 constructs a new QUndoView object.
func NewQUndoView4(group *QUndoGroup) *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new4(group.cPointer(), &outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQUndoView5 constructs a new QUndoView object.
func NewQUndoView5(stack *QUndoStack, parent *QWidget) *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new5(stack.cPointer(), parent.cPointer(), &outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQUndoView6 constructs a new QUndoView object.
func NewQUndoView6(group *QUndoGroup, parent *QWidget) *QUndoView {
	var outptr_QUndoView *C.QUndoView = nil
	var outptr_QListView *C.QListView = nil
	var outptr_QAbstractItemView *C.QAbstractItemView = nil
	var outptr_QAbstractScrollArea *C.QAbstractScrollArea = nil
	var outptr_QFrame *C.QFrame = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QUndoView_new6(group.cPointer(), parent.cPointer(), &outptr_QUndoView, &outptr_QListView, &outptr_QAbstractItemView, &outptr_QAbstractScrollArea, &outptr_QFrame, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQUndoView(outptr_QUndoView, outptr_QListView, outptr_QAbstractItemView, outptr_QAbstractScrollArea, outptr_QFrame, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QUndoView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QUndoView_MetaObject(this.h)))
}

func (this *QUndoView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QUndoView_Metacast(this.h, param1_Cstring))
}

func QUndoView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) Stack() *QUndoStack {
	return UnsafeNewQUndoStack(unsafe.Pointer(C.QUndoView_Stack(this.h)), nil)
}

func (this *QUndoView) Group() *QUndoGroup {
	return UnsafeNewQUndoGroup(unsafe.Pointer(C.QUndoView_Group(this.h)), nil)
}

func (this *QUndoView) SetEmptyLabel(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QUndoView_SetEmptyLabel(this.h, label_ms)
}

func (this *QUndoView) EmptyLabel() string {
	var _ms C.struct_miqt_string = C.QUndoView_EmptyLabel(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) SetCleanIcon(icon *QIcon) {
	C.QUndoView_SetCleanIcon(this.h, icon.cPointer())
}

func (this *QUndoView) CleanIcon() *QIcon {
	_ret := C.QUndoView_CleanIcon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUndoView) SetStack(stack *QUndoStack) {
	C.QUndoView_SetStack(this.h, stack.cPointer())
}

func (this *QUndoView) SetGroup(group *QUndoGroup) {
	C.QUndoView_SetGroup(this.h, group.cPointer())
}

func QUndoView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUndoView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QUndoView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUndoView) callVirtualBase_VisualRect(index *QModelIndex) *QRect {

	_ret := C.QUndoView_virtualbase_VisualRect(unsafe.Pointer(this.h), index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnVisualRect(slot func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_VisualRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_VisualRect
func miqt_exec_callback_QUndoView_VisualRect(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) *QRect, index *QModelIndex) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VisualRect, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_ScrollTo(index *QModelIndex, hint QAbstractItemView__ScrollHint) {

	C.QUndoView_virtualbase_ScrollTo(unsafe.Pointer(this.h), index.cPointer(), (C.int)(hint))

}
func (this *QUndoView) OnScrollTo(slot func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_ScrollTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_ScrollTo
func miqt_exec_callback_QUndoView_ScrollTo(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex, hint C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex, hint QAbstractItemView__ScrollHint), index *QModelIndex, hint QAbstractItemView__ScrollHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))
	slotval2 := (QAbstractItemView__ScrollHint)(hint)

	gofunc((&QUndoView{h: self}).callVirtualBase_ScrollTo, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_IndexAt(p *QPoint) *QModelIndex {

	_ret := C.QUndoView_virtualbase_IndexAt(unsafe.Pointer(this.h), p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnIndexAt(slot func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_IndexAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_IndexAt
func miqt_exec_callback_QUndoView_IndexAt(self *C.QUndoView, cb C.intptr_t, p *C.QPoint) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(p *QPoint) *QModelIndex, p *QPoint) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPoint(unsafe.Pointer(p))

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_IndexAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_DoItemsLayout() {

	C.QUndoView_virtualbase_DoItemsLayout(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnDoItemsLayout(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_DoItemsLayout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_DoItemsLayout
func miqt_exec_callback_QUndoView_DoItemsLayout(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_DoItemsLayout)

}

func (this *QUndoView) callVirtualBase_Reset() {

	C.QUndoView_virtualbase_Reset(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnReset(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_Reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_Reset
func miqt_exec_callback_QUndoView_Reset(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_Reset)

}

func (this *QUndoView) callVirtualBase_SetRootIndex(index *QModelIndex) {

	C.QUndoView_virtualbase_SetRootIndex(unsafe.Pointer(this.h), index.cPointer())

}
func (this *QUndoView) OnSetRootIndex(slot func(super func(index *QModelIndex), index *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_SetRootIndex(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_SetRootIndex
func miqt_exec_callback_QUndoView_SetRootIndex(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex), index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc((&QUndoView{h: self}).callVirtualBase_SetRootIndex, slotval1)

}

func (this *QUndoView) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QUndoView_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QUndoView) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_Event
func miqt_exec_callback_QUndoView_Event(self *C.QUndoView, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_ScrollContentsBy(dx int, dy int) {

	C.QUndoView_virtualbase_ScrollContentsBy(unsafe.Pointer(this.h), (C.int)(dx), (C.int)(dy))

}
func (this *QUndoView) OnScrollContentsBy(slot func(super func(dx int, dy int), dx int, dy int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_ScrollContentsBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_ScrollContentsBy
func miqt_exec_callback_QUndoView_ScrollContentsBy(self *C.QUndoView, cb C.intptr_t, dx C.int, dy C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(dx int, dy int), dx int, dy int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(dx)

	slotval2 := (int)(dy)

	gofunc((&QUndoView{h: self}).callVirtualBase_ScrollContentsBy, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}

	C.QUndoView_virtualbase_DataChanged(unsafe.Pointer(this.h), topLeft.cPointer(), bottomRight.cPointer(), roles_ma)

}
func (this *QUndoView) OnDataChanged(slot func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_DataChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_DataChanged
func miqt_exec_callback_QUndoView_DataChanged(self *C.QUndoView, cb C.intptr_t, topLeft *C.QModelIndex, bottomRight *C.QModelIndex, roles C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int), topLeft *QModelIndex, bottomRight *QModelIndex, roles []int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(topLeft))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(bottomRight))
	var roles_ma C.struct_miqt_array = roles
	roles_ret := make([]int, int(roles_ma.len))
	roles_outCast := (*[0xffff]C.int)(unsafe.Pointer(roles_ma.data)) // hey ya
	for i := 0; i < int(roles_ma.len); i++ {
		roles_ret[i] = (int)(roles_outCast[i])
	}
	slotval3 := roles_ret

	gofunc((&QUndoView{h: self}).callVirtualBase_DataChanged, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_RowsInserted(parent *QModelIndex, start int, end int) {

	C.QUndoView_virtualbase_RowsInserted(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QUndoView) OnRowsInserted(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_RowsInserted(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_RowsInserted
func miqt_exec_callback_QUndoView_RowsInserted(self *C.QUndoView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QUndoView{h: self}).callVirtualBase_RowsInserted, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_RowsAboutToBeRemoved(parent *QModelIndex, start int, end int) {

	C.QUndoView_virtualbase_RowsAboutToBeRemoved(unsafe.Pointer(this.h), parent.cPointer(), (C.int)(start), (C.int)(end))

}
func (this *QUndoView) OnRowsAboutToBeRemoved(slot func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_RowsAboutToBeRemoved(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_RowsAboutToBeRemoved
func miqt_exec_callback_QUndoView_RowsAboutToBeRemoved(self *C.QUndoView, cb C.intptr_t, parent *C.QModelIndex, start C.int, end C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(parent *QModelIndex, start int, end int), parent *QModelIndex, start int, end int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(parent))
	slotval2 := (int)(start)

	slotval3 := (int)(end)

	gofunc((&QUndoView{h: self}).callVirtualBase_RowsAboutToBeRemoved, slotval1, slotval2, slotval3)

}

func (this *QUndoView) callVirtualBase_MouseMoveEvent(e *QMouseEvent) {

	C.QUndoView_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnMouseMoveEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_MouseMoveEvent
func miqt_exec_callback_QUndoView_MouseMoveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_MouseReleaseEvent(e *QMouseEvent) {

	C.QUndoView_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnMouseReleaseEvent(slot func(super func(e *QMouseEvent), e *QMouseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_MouseReleaseEvent
func miqt_exec_callback_QUndoView_MouseReleaseEvent(self *C.QUndoView, cb C.intptr_t, e *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QMouseEvent), e *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMouseEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_WheelEvent(e *QWheelEvent) {

	C.QUndoView_virtualbase_WheelEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnWheelEvent(slot func(super func(e *QWheelEvent), e *QWheelEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_WheelEvent
func miqt_exec_callback_QUndoView_WheelEvent(self *C.QUndoView, cb C.intptr_t, e *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QWheelEvent), e *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWheelEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_TimerEvent(e *QTimerEvent) {

	C.QUndoView_virtualbase_TimerEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnTimerEvent(slot func(super func(e *QTimerEvent), e *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_TimerEvent
func miqt_exec_callback_QUndoView_TimerEvent(self *C.QUndoView, cb C.intptr_t, e *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QTimerEvent), e *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(e), nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_ResizeEvent(e *QResizeEvent) {

	C.QUndoView_virtualbase_ResizeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnResizeEvent(slot func(super func(e *QResizeEvent), e *QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_ResizeEvent
func miqt_exec_callback_QUndoView_ResizeEvent(self *C.QUndoView, cb C.intptr_t, e *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QResizeEvent), e *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQResizeEvent(unsafe.Pointer(e), nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DragMoveEvent(e *QDragMoveEvent) {

	C.QUndoView_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDragMoveEvent(slot func(super func(e *QDragMoveEvent), e *QDragMoveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_DragMoveEvent
func miqt_exec_callback_QUndoView_DragMoveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragMoveEvent), e *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragMoveEvent(unsafe.Pointer(e), nil, nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DragLeaveEvent(e *QDragLeaveEvent) {

	C.QUndoView_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDragLeaveEvent(slot func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_DragLeaveEvent
func miqt_exec_callback_QUndoView_DragLeaveEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDragLeaveEvent), e *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDragLeaveEvent(unsafe.Pointer(e), nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_DropEvent(e *QDropEvent) {

	C.QUndoView_virtualbase_DropEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnDropEvent(slot func(super func(e *QDropEvent), e *QDropEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_DropEvent
func miqt_exec_callback_QUndoView_DropEvent(self *C.QUndoView, cb C.intptr_t, e *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QDropEvent), e *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQDropEvent(unsafe.Pointer(e), nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_StartDrag(supportedActions DropAction) {

	C.QUndoView_virtualbase_StartDrag(unsafe.Pointer(this.h), (C.int)(supportedActions))

}
func (this *QUndoView) OnStartDrag(slot func(super func(supportedActions DropAction), supportedActions DropAction)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_StartDrag(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_StartDrag
func miqt_exec_callback_QUndoView_StartDrag(self *C.QUndoView, cb C.intptr_t, supportedActions C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(supportedActions DropAction), supportedActions DropAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (DropAction)(supportedActions)

	gofunc((&QUndoView{h: self}).callVirtualBase_StartDrag, slotval1)

}

func (this *QUndoView) callVirtualBase_ViewOptions() *QStyleOptionViewItem {

	_ret := C.QUndoView_virtualbase_ViewOptions(unsafe.Pointer(this.h))
	_goptr := newQStyleOptionViewItem(_ret, nil)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnViewOptions(slot func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_ViewOptions(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_ViewOptions
func miqt_exec_callback_QUndoView_ViewOptions(self *C.QUndoView, cb C.intptr_t) *C.QStyleOptionViewItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QStyleOptionViewItem) *QStyleOptionViewItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_ViewOptions)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_PaintEvent(e *QPaintEvent) {

	C.QUndoView_virtualbase_PaintEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QUndoView) OnPaintEvent(slot func(super func(e *QPaintEvent), e *QPaintEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_PaintEvent
func miqt_exec_callback_QUndoView_PaintEvent(self *C.QUndoView, cb C.intptr_t, e *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QPaintEvent), e *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPaintEvent(unsafe.Pointer(e), nil)

	gofunc((&QUndoView{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QUndoView) callVirtualBase_HorizontalOffset() int {

	return (int)(C.QUndoView_virtualbase_HorizontalOffset(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnHorizontalOffset(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_HorizontalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_HorizontalOffset
func miqt_exec_callback_QUndoView_HorizontalOffset(self *C.QUndoView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_HorizontalOffset)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_VerticalOffset() int {

	return (int)(C.QUndoView_virtualbase_VerticalOffset(unsafe.Pointer(this.h)))

}
func (this *QUndoView) OnVerticalOffset(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_VerticalOffset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_VerticalOffset
func miqt_exec_callback_QUndoView_VerticalOffset(self *C.QUndoView, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VerticalOffset)

	return (C.int)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_MoveCursor(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex {

	_ret := C.QUndoView_virtualbase_MoveCursor(unsafe.Pointer(this.h), (C.int)(cursorAction), (C.int)(modifiers))
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnMoveCursor(slot func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_MoveCursor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_MoveCursor
func miqt_exec_callback_QUndoView_MoveCursor(self *C.QUndoView, cb C.intptr_t, cursorAction C.int, modifiers C.int) *C.QModelIndex {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex, cursorAction QAbstractItemView__CursorAction, modifiers KeyboardModifier) *QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractItemView__CursorAction)(cursorAction)

	slotval2 := (KeyboardModifier)(modifiers)

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_MoveCursor, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SetSelection(rect *QRect, command QItemSelectionModel__SelectionFlag) {

	C.QUndoView_virtualbase_SetSelection(unsafe.Pointer(this.h), rect.cPointer(), (C.int)(command))

}
func (this *QUndoView) OnSetSelection(slot func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_SetSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_SetSelection
func miqt_exec_callback_QUndoView_SetSelection(self *C.QUndoView, cb C.intptr_t, rect *C.QRect, command C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect, command QItemSelectionModel__SelectionFlag), rect *QRect, command QItemSelectionModel__SelectionFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRect(unsafe.Pointer(rect))
	slotval2 := (QItemSelectionModel__SelectionFlag)(command)

	gofunc((&QUndoView{h: self}).callVirtualBase_SetSelection, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_VisualRegionForSelection(selection *QItemSelection) *QRegion {

	_ret := C.QUndoView_virtualbase_VisualRegionForSelection(unsafe.Pointer(this.h), selection.cPointer())
	_goptr := newQRegion(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnVisualRegionForSelection(slot func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_VisualRegionForSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_VisualRegionForSelection
func miqt_exec_callback_QUndoView_VisualRegionForSelection(self *C.QUndoView, cb C.intptr_t, selection *C.QItemSelection) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selection *QItemSelection) *QRegion, selection *QItemSelection) *QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selection))

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_VisualRegionForSelection, slotval1)

	return virtualReturn.cPointer()

}

func (this *QUndoView) callVirtualBase_SelectedIndexes() []QModelIndex {

	var _ma C.struct_miqt_array = C.QUndoView_virtualbase_SelectedIndexes(unsafe.Pointer(this.h))
	_ret := make([]QModelIndex, int(_ma.len))
	_outCast := (*[0xffff]*C.QModelIndex)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQModelIndex(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret

}
func (this *QUndoView) OnSelectedIndexes(slot func(super func() []QModelIndex) []QModelIndex) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_SelectedIndexes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_SelectedIndexes
func miqt_exec_callback_QUndoView_SelectedIndexes(self *C.QUndoView, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() []QModelIndex) []QModelIndex)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_SelectedIndexes)
	virtualReturn_CArray := (*[0xffff]*C.QModelIndex)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QUndoView) callVirtualBase_UpdateGeometries() {

	C.QUndoView_virtualbase_UpdateGeometries(unsafe.Pointer(this.h))

}
func (this *QUndoView) OnUpdateGeometries(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_UpdateGeometries(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_UpdateGeometries
func miqt_exec_callback_QUndoView_UpdateGeometries(self *C.QUndoView, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QUndoView{h: self}).callVirtualBase_UpdateGeometries)

}

func (this *QUndoView) callVirtualBase_IsIndexHidden(index *QModelIndex) bool {

	return (bool)(C.QUndoView_virtualbase_IsIndexHidden(unsafe.Pointer(this.h), index.cPointer()))

}
func (this *QUndoView) OnIsIndexHidden(slot func(super func(index *QModelIndex) bool, index *QModelIndex) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_IsIndexHidden(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_IsIndexHidden
func miqt_exec_callback_QUndoView_IsIndexHidden(self *C.QUndoView, cb C.intptr_t, index *C.QModelIndex) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(index *QModelIndex) bool, index *QModelIndex) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_IsIndexHidden, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QUndoView) callVirtualBase_SelectionChanged(selected *QItemSelection, deselected *QItemSelection) {

	C.QUndoView_virtualbase_SelectionChanged(unsafe.Pointer(this.h), selected.cPointer(), deselected.cPointer())

}
func (this *QUndoView) OnSelectionChanged(slot func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_SelectionChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_SelectionChanged
func miqt_exec_callback_QUndoView_SelectionChanged(self *C.QUndoView, cb C.intptr_t, selected *C.QItemSelection, deselected *C.QItemSelection) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(selected *QItemSelection, deselected *QItemSelection), selected *QItemSelection, deselected *QItemSelection))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQItemSelection(unsafe.Pointer(selected))
	slotval2 := UnsafeNewQItemSelection(unsafe.Pointer(deselected))

	gofunc((&QUndoView{h: self}).callVirtualBase_SelectionChanged, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_CurrentChanged(current *QModelIndex, previous *QModelIndex) {

	C.QUndoView_virtualbase_CurrentChanged(unsafe.Pointer(this.h), current.cPointer(), previous.cPointer())

}
func (this *QUndoView) OnCurrentChanged(slot func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_CurrentChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_CurrentChanged
func miqt_exec_callback_QUndoView_CurrentChanged(self *C.QUndoView, cb C.intptr_t, current *C.QModelIndex, previous *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(current *QModelIndex, previous *QModelIndex), current *QModelIndex, previous *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(current))
	slotval2 := UnsafeNewQModelIndex(unsafe.Pointer(previous))

	gofunc((&QUndoView{h: self}).callVirtualBase_CurrentChanged, slotval1, slotval2)

}

func (this *QUndoView) callVirtualBase_ViewportSizeHint() *QSize {

	_ret := C.QUndoView_virtualbase_ViewportSizeHint(unsafe.Pointer(this.h))
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QUndoView) OnViewportSizeHint(slot func(super func() *QSize) *QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QUndoView_override_virtual_ViewportSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QUndoView_ViewportSizeHint
func miqt_exec_callback_QUndoView_ViewportSizeHint(self *C.QUndoView, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QUndoView{h: self}).callVirtualBase_ViewportSizeHint)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QUndoView) Delete() {
	C.QUndoView_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUndoView) GoGC() {
	runtime.SetFinalizer(this, func(this *QUndoView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
