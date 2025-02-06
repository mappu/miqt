package qt

/*

#include "gen_qlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QLayout__SizeConstraint int

const (
	QLayout__SetDefaultConstraint QLayout__SizeConstraint = 0
	QLayout__SetNoConstraint      QLayout__SizeConstraint = 1
	QLayout__SetMinimumSize       QLayout__SizeConstraint = 2
	QLayout__SetFixedSize         QLayout__SizeConstraint = 3
	QLayout__SetMaximumSize       QLayout__SizeConstraint = 4
	QLayout__SetMinAndMaxSize     QLayout__SizeConstraint = 5
)

type QLayout struct {
	h *C.QLayout
	*QObject
	*QLayoutItem
}

func (this *QLayout) cPointer() *C.QLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQLayout constructs the type using only CGO pointers.
func newQLayout(h *C.QLayout) *QLayout {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QLayoutItem *C.QLayoutItem = nil
	C.QLayout_virtbase(h, &outptr_QObject, &outptr_QLayoutItem)

	return &QLayout{h: h,
		QObject:     newQObject(outptr_QObject),
		QLayoutItem: newQLayoutItem(outptr_QLayoutItem)}
}

// UnsafeNewQLayout constructs the type using only unsafe pointers.
func UnsafeNewQLayout(h unsafe.Pointer) *QLayout {
	return newQLayout((*C.QLayout)(h))
}

// NewQLayout constructs a new QLayout object.
func NewQLayout(parent *QWidget) *QLayout {

	return newQLayout(C.QLayout_new(parent.cPointer()))
}

// NewQLayout2 constructs a new QLayout object.
func NewQLayout2() *QLayout {

	return newQLayout(C.QLayout_new2())
}

func (this *QLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QLayout_metaObject(this.h))
}

func (this *QLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QLayout_metacast(this.h, param1_Cstring))
}

func QLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLayout) Margin() int {
	return (int)(C.QLayout_margin(this.h))
}

func (this *QLayout) SetMargin(margin int) {
	C.QLayout_setMargin(this.h, (C.int)(margin))
}

func (this *QLayout) Spacing() int {
	return (int)(C.QLayout_spacing(this.h))
}

func (this *QLayout) SetSpacing(spacing int) {
	C.QLayout_setSpacing(this.h, (C.int)(spacing))
}

func (this *QLayout) SetContentsMargins(left int, top int, right int, bottom int) {
	C.QLayout_setContentsMargins(this.h, (C.int)(left), (C.int)(top), (C.int)(right), (C.int)(bottom))
}

func (this *QLayout) SetContentsMarginsWithMargins(margins *QMargins) {
	C.QLayout_setContentsMarginsWithMargins(this.h, margins.cPointer())
}

func (this *QLayout) GetContentsMargins(left *int, top *int, right *int, bottom *int) {
	C.QLayout_getContentsMargins(this.h, (*C.int)(unsafe.Pointer(left)), (*C.int)(unsafe.Pointer(top)), (*C.int)(unsafe.Pointer(right)), (*C.int)(unsafe.Pointer(bottom)))
}

func (this *QLayout) ContentsMargins() *QMargins {
	_goptr := newQMargins(C.QLayout_contentsMargins(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) ContentsRect() *QRect {
	_goptr := newQRect(C.QLayout_contentsRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetAlignment(w *QWidget, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_setAlignment(this.h, w.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetAlignment2(l *QLayout, alignment AlignmentFlag) bool {
	return (bool)(C.QLayout_setAlignment2(this.h, l.cPointer(), (C.int)(alignment)))
}

func (this *QLayout) SetSizeConstraint(sizeConstraint QLayout__SizeConstraint) {
	C.QLayout_setSizeConstraint(this.h, (C.int)(sizeConstraint))
}

func (this *QLayout) SizeConstraint() QLayout__SizeConstraint {
	return (QLayout__SizeConstraint)(C.QLayout_sizeConstraint(this.h))
}

func (this *QLayout) SetMenuBar(w *QWidget) {
	C.QLayout_setMenuBar(this.h, w.cPointer())
}

func (this *QLayout) MenuBar() *QWidget {
	return newQWidget(C.QLayout_menuBar(this.h))
}

func (this *QLayout) ParentWidget() *QWidget {
	return newQWidget(C.QLayout_parentWidget(this.h))
}

func (this *QLayout) Invalidate() {
	C.QLayout_invalidate(this.h)
}

func (this *QLayout) Geometry() *QRect {
	_goptr := newQRect(C.QLayout_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Activate() bool {
	return (bool)(C.QLayout_activate(this.h))
}

func (this *QLayout) Update() {
	C.QLayout_update(this.h)
}

func (this *QLayout) AddWidget(w *QWidget) {
	C.QLayout_addWidget(this.h, w.cPointer())
}

func (this *QLayout) AddItem(param1 *QLayoutItem) {
	C.QLayout_addItem(this.h, param1.cPointer())
}

func (this *QLayout) RemoveWidget(w *QWidget) {
	C.QLayout_removeWidget(this.h, w.cPointer())
}

func (this *QLayout) RemoveItem(param1 *QLayoutItem) {
	C.QLayout_removeItem(this.h, param1.cPointer())
}

func (this *QLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QLayout_expandingDirections(this.h))
}

func (this *QLayout) MinimumSize() *QSize {
	_goptr := newQSize(C.QLayout_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) MaximumSize() *QSize {
	_goptr := newQSize(C.QLayout_maximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) SetGeometry(geometry *QRect) {
	C.QLayout_setGeometry(this.h, geometry.cPointer())
}

func (this *QLayout) ItemAt(index int) *QLayoutItem {
	return newQLayoutItem(C.QLayout_itemAt(this.h, (C.int)(index)))
}

func (this *QLayout) TakeAt(index int) *QLayoutItem {
	return newQLayoutItem(C.QLayout_takeAt(this.h, (C.int)(index)))
}

func (this *QLayout) IndexOf(param1 *QWidget) int {
	return (int)(C.QLayout_indexOf(this.h, param1.cPointer()))
}

func (this *QLayout) IndexOfWithQLayoutItem(param1 *QLayoutItem) int {
	return (int)(C.QLayout_indexOfWithQLayoutItem(this.h, param1.cPointer()))
}

func (this *QLayout) Count() int {
	return (int)(C.QLayout_count(this.h))
}

func (this *QLayout) IsEmpty() bool {
	return (bool)(C.QLayout_isEmpty(this.h))
}

func (this *QLayout) ControlTypes() QSizePolicy__ControlType {
	return (QSizePolicy__ControlType)(C.QLayout_controlTypes(this.h))
}

func (this *QLayout) ReplaceWidget(from *QWidget, to *QWidget) *QLayoutItem {
	return newQLayoutItem(C.QLayout_replaceWidget(this.h, from.cPointer(), to.cPointer()))
}

func (this *QLayout) TotalHeightForWidth(w int) int {
	return (int)(C.QLayout_totalHeightForWidth(this.h, (C.int)(w)))
}

func (this *QLayout) TotalMinimumSize() *QSize {
	_goptr := newQSize(C.QLayout_totalMinimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalMaximumSize() *QSize {
	_goptr := newQSize(C.QLayout_totalMaximumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) TotalSizeHint() *QSize {
	_goptr := newQSize(C.QLayout_totalSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QLayout) Layout() *QLayout {
	return newQLayout(C.QLayout_layout(this.h))
}

func (this *QLayout) SetEnabled(enabled bool) {
	C.QLayout_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QLayout) IsEnabled() bool {
	return (bool)(C.QLayout_isEnabled(this.h))
}

func QLayout_ClosestAcceptableSize(w *QWidget, s *QSize) *QSize {
	_goptr := newQSize(C.QLayout_closestAcceptableSize(w.cPointer(), s.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QLayout_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QLayout_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QLayout) ReplaceWidget3(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {
	return newQLayoutItem(C.QLayout_replaceWidget3(this.h, from.cPointer(), to.cPointer(), (C.int)(options)))
}

// WidgetEvent can only be called from a QLayout that was directly constructed.
func (this *QLayout) WidgetEvent(param1 *QEvent) {

	var _dynamic_cast_ok C.bool = false
	C.QLayout_protectedbase_widgetEvent(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildLayout can only be called from a QLayout that was directly constructed.
func (this *QLayout) AddChildLayout(l *QLayout) {

	var _dynamic_cast_ok C.bool = false
	C.QLayout_protectedbase_addChildLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), l.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildWidget can only be called from a QLayout that was directly constructed.
func (this *QLayout) AddChildWidget(w *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QLayout_protectedbase_addChildWidget(&_dynamic_cast_ok, unsafe.Pointer(this.h), w.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AdoptLayout can only be called from a QLayout that was directly constructed.
func (this *QLayout) AdoptLayout(layout *QLayout) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLayout_protectedbase_adoptLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), layout.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignmentRect can only be called from a QLayout that was directly constructed.
func (this *QLayout) AlignmentRect(param1 *QRect) QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QLayout_protectedbase_alignmentRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QLayout that was directly constructed.
func (this *QLayout) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QLayout that was directly constructed.
func (this *QLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QLayout that was directly constructed.
func (this *QLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QLayout that was directly constructed.
func (this *QLayout) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QLayout) callVirtualBase_Invalidate() {

	C.QLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QLayout) OnInvalidate(slot func(super func())) {
	ok := C.QLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_invalidate
func miqt_exec_callback_QLayout_invalidate(self *C.QLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_geometry
func miqt_exec_callback_QLayout_geometry(self *C.QLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}
func (this *QLayout) OnAddItem(slot func(param1 *QLayoutItem)) {
	ok := C.QLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_addItem
func miqt_exec_callback_QLayout_addItem(self *C.QLayout, cb C.intptr_t, param1 *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(param1)

	gofunc(slotval1)

}

func (this *QLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_expandingDirections
func miqt_exec_callback_QLayout_expandingDirections(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_minimumSize
func miqt_exec_callback_QLayout_minimumSize(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_maximumSize
func miqt_exec_callback_QLayout_maximumSize(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_SetGeometry(geometry *QRect) {

	C.QLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), geometry.cPointer())

}
func (this *QLayout) OnSetGeometry(slot func(super func(geometry *QRect), geometry *QRect)) {
	ok := C.QLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_setGeometry
func miqt_exec_callback_QLayout_setGeometry(self *C.QLayout, cb C.intptr_t, geometry *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(geometry *QRect), geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(geometry)

	gofunc((&QLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}
func (this *QLayout) OnItemAt(slot func(index int) *QLayoutItem) {
	ok := C.QLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_itemAt
func miqt_exec_callback_QLayout_itemAt(self *C.QLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QLayout) OnTakeAt(slot func(index int) *QLayoutItem) {
	ok := C.QLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_takeAt
func miqt_exec_callback_QLayout_takeAt(self *C.QLayout, cb C.intptr_t, index C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_indexOf
func miqt_exec_callback_QLayout_indexOf(self *C.QLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}
func (this *QLayout) OnCount(slot func() int) {
	ok := C.QLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_count
func miqt_exec_callback_QLayout_count(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_isEmpty
func miqt_exec_callback_QLayout_isEmpty(self *C.QLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_controlTypes
func miqt_exec_callback_QLayout_controlTypes(self *C.QLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_layout
func miqt_exec_callback_QLayout_layout(self *C.QLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_childEvent
func miqt_exec_callback_QLayout_childEvent(self *C.QLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_event
func miqt_exec_callback_QLayout_event(self *C.QLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_eventFilter
func miqt_exec_callback_QLayout_eventFilter(self *C.QLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_timerEvent
func miqt_exec_callback_QLayout_timerEvent(self *C.QLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_customEvent
func miqt_exec_callback_QLayout_customEvent(self *C.QLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_connectNotify
func miqt_exec_callback_QLayout_connectNotify(self *C.QLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_disconnectNotify
func miqt_exec_callback_QLayout_disconnectNotify(self *C.QLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QLayout) OnSizeHint(slot func() *QSize) {
	ok := C.QLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_sizeHint
func miqt_exec_callback_QLayout_sizeHint(self *C.QLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func() *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_hasHeightForWidth
func miqt_exec_callback_QLayout_hasHeightForWidth(self *C.QLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QLayout) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayout) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_heightForWidth
func miqt_exec_callback_QLayout_heightForWidth(self *C.QLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_minimumHeightForWidth
func miqt_exec_callback_QLayout_minimumHeightForWidth(self *C.QLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_widget
func miqt_exec_callback_QLayout_widget(self *C.QLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QLayout_spacerItem
func miqt_exec_callback_QLayout_spacerItem(self *C.QLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QLayout) Delete() {
	C.QLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
