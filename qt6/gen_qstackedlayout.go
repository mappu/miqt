package qt6

/*

#include "gen_qstackedlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QStackedLayout__StackingMode int

const (
	QStackedLayout__StackOne QStackedLayout__StackingMode = 0
	QStackedLayout__StackAll QStackedLayout__StackingMode = 1
)

type QStackedLayout struct {
	h *C.QStackedLayout
	*QLayout
}

func (this *QStackedLayout) cPointer() *C.QStackedLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStackedLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStackedLayout constructs the type using only CGO pointers.
func newQStackedLayout(h *C.QStackedLayout) *QStackedLayout {
	if h == nil {
		return nil
	}
	var outptr_QLayout *C.QLayout = nil
	C.QStackedLayout_virtbase(h, &outptr_QLayout)

	return &QStackedLayout{h: h,
		QLayout: newQLayout(outptr_QLayout)}
}

// UnsafeNewQStackedLayout constructs the type using only unsafe pointers.
func UnsafeNewQStackedLayout(h unsafe.Pointer) *QStackedLayout {
	return newQStackedLayout((*C.QStackedLayout)(h))
}

// NewQStackedLayout constructs a new QStackedLayout object.
func NewQStackedLayout(parent *QWidget) *QStackedLayout {

	return newQStackedLayout(C.QStackedLayout_new(parent.cPointer()))
}

// NewQStackedLayout2 constructs a new QStackedLayout object.
func NewQStackedLayout2() *QStackedLayout {

	return newQStackedLayout(C.QStackedLayout_new2())
}

// NewQStackedLayout3 constructs a new QStackedLayout object.
func NewQStackedLayout3(parentLayout *QLayout) *QStackedLayout {

	return newQStackedLayout(C.QStackedLayout_new3(parentLayout.cPointer()))
}

func (this *QStackedLayout) MetaObject() *QMetaObject {
	return newQMetaObject(C.QStackedLayout_metaObject(this.h))
}

func (this *QStackedLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QStackedLayout_metacast(this.h, param1_Cstring))
}

func QStackedLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStackedLayout) AddWidget(w *QWidget) int {
	return (int)(C.QStackedLayout_addWidget(this.h, w.cPointer()))
}

func (this *QStackedLayout) InsertWidget(index int, w *QWidget) int {
	return (int)(C.QStackedLayout_insertWidget(this.h, (C.int)(index), w.cPointer()))
}

func (this *QStackedLayout) CurrentWidget() *QWidget {
	return newQWidget(C.QStackedLayout_currentWidget(this.h))
}

func (this *QStackedLayout) CurrentIndex() int {
	return (int)(C.QStackedLayout_currentIndex(this.h))
}

func (this *QStackedLayout) Widget(param1 int) *QWidget {
	return newQWidget(C.QStackedLayout_widget(this.h, (C.int)(param1)))
}

func (this *QStackedLayout) Count() int {
	return (int)(C.QStackedLayout_count(this.h))
}

func (this *QStackedLayout) StackingMode() QStackedLayout__StackingMode {
	return (QStackedLayout__StackingMode)(C.QStackedLayout_stackingMode(this.h))
}

func (this *QStackedLayout) SetStackingMode(stackingMode QStackedLayout__StackingMode) {
	C.QStackedLayout_setStackingMode(this.h, (C.int)(stackingMode))
}

func (this *QStackedLayout) AddItem(item *QLayoutItem) {
	C.QStackedLayout_addItem(this.h, item.cPointer())
}

func (this *QStackedLayout) SizeHint() *QSize {
	_goptr := newQSize(C.QStackedLayout_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) MinimumSize() *QSize {
	_goptr := newQSize(C.QStackedLayout_minimumSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QStackedLayout) ItemAt(param1 int) *QLayoutItem {
	return newQLayoutItem(C.QStackedLayout_itemAt(this.h, (C.int)(param1)))
}

func (this *QStackedLayout) TakeAt(param1 int) *QLayoutItem {
	return newQLayoutItem(C.QStackedLayout_takeAt(this.h, (C.int)(param1)))
}

func (this *QStackedLayout) SetGeometry(rect *QRect) {
	C.QStackedLayout_setGeometry(this.h, rect.cPointer())
}

func (this *QStackedLayout) HasHeightForWidth() bool {
	return (bool)(C.QStackedLayout_hasHeightForWidth(this.h))
}

func (this *QStackedLayout) HeightForWidth(width int) int {
	return (int)(C.QStackedLayout_heightForWidth(this.h, (C.int)(width)))
}

func (this *QStackedLayout) WidgetRemoved(index int) {
	C.QStackedLayout_widgetRemoved(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnWidgetRemoved(slot func(index int)) {
	C.QStackedLayout_connect_widgetRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_widgetRemoved
func miqt_exec_callback_QStackedLayout_widgetRemoved(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) CurrentChanged(index int) {
	C.QStackedLayout_currentChanged(this.h, (C.int)(index))
}
func (this *QStackedLayout) OnCurrentChanged(slot func(index int)) {
	C.QStackedLayout_connect_currentChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QStackedLayout_currentChanged
func miqt_exec_callback_QStackedLayout_currentChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QStackedLayout) SetCurrentIndex(index int) {
	C.QStackedLayout_setCurrentIndex(this.h, (C.int)(index))
}

func (this *QStackedLayout) SetCurrentWidget(w *QWidget) {
	C.QStackedLayout_setCurrentWidget(this.h, w.cPointer())
}

func QStackedLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QStackedLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QStackedLayout_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// WidgetEvent can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) WidgetEvent(param1 *QEvent) {

	var _dynamic_cast_ok C.bool = false
	C.QStackedLayout_protectedbase_widgetEvent(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildLayout can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) AddChildLayout(l *QLayout) {

	var _dynamic_cast_ok C.bool = false
	C.QStackedLayout_protectedbase_addChildLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), l.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AddChildWidget can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) AddChildWidget(w *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QStackedLayout_protectedbase_addChildWidget(&_dynamic_cast_ok, unsafe.Pointer(this.h), w.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AdoptLayout can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) AdoptLayout(layout *QLayout) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStackedLayout_protectedbase_adoptLayout(&_dynamic_cast_ok, unsafe.Pointer(this.h), layout.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlignmentRect can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) AlignmentRect(param1 *QRect) QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRect(C.QStackedLayout_protectedbase_alignmentRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QStackedLayout_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStackedLayout_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QStackedLayout_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QStackedLayout that was directly constructed.
func (this *QStackedLayout) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QStackedLayout_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QStackedLayout) callVirtualBase_Count() int {

	return (int)(C.QStackedLayout_virtualbase_count(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnCount(slot func(super func() int) int) {
	ok := C.QStackedLayout_override_virtual_count(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_count
func miqt_exec_callback_QStackedLayout_count(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Count)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_AddItem(item *QLayoutItem) {

	C.QStackedLayout_virtualbase_addItem(unsafe.Pointer(this.h), item.cPointer())

}
func (this *QStackedLayout) OnAddItem(slot func(super func(item *QLayoutItem), item *QLayoutItem)) {
	ok := C.QStackedLayout_override_virtual_addItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_addItem
func miqt_exec_callback_QStackedLayout_addItem(self *C.QStackedLayout, cb C.intptr_t, item *C.QLayoutItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QLayoutItem), item *QLayoutItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQLayoutItem(item)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_AddItem, slotval1)

}

func (this *QStackedLayout) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QStackedLayout_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedLayout_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_sizeHint
func miqt_exec_callback_QStackedLayout_sizeHint(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_MinimumSize() *QSize {

	_goptr := newQSize(C.QStackedLayout_virtualbase_minimumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnMinimumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedLayout_override_virtual_minimumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_minimumSize
func miqt_exec_callback_QStackedLayout_minimumSize(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_MinimumSize)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ItemAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QStackedLayout_virtualbase_itemAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStackedLayout) OnItemAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QStackedLayout_override_virtual_itemAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_itemAt
func miqt_exec_callback_QStackedLayout_itemAt(self *C.QStackedLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ItemAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_TakeAt(param1 int) *QLayoutItem {

	return newQLayoutItem(C.QStackedLayout_virtualbase_takeAt(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStackedLayout) OnTakeAt(slot func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem) {
	ok := C.QStackedLayout_override_virtual_takeAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_takeAt
func miqt_exec_callback_QStackedLayout_takeAt(self *C.QStackedLayout, cb C.intptr_t, param1 C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) *QLayoutItem, param1 int) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_TakeAt, slotval1)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_SetGeometry(rect *QRect) {

	C.QStackedLayout_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QStackedLayout) OnSetGeometry(slot func(super func(rect *QRect), rect *QRect)) {
	ok := C.QStackedLayout_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_setGeometry
func miqt_exec_callback_QStackedLayout_setGeometry(self *C.QStackedLayout, cb C.intptr_t, rect *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRect), rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRect(rect)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QStackedLayout) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QStackedLayout_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QStackedLayout_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_hasHeightForWidth
func miqt_exec_callback_QStackedLayout_hasHeightForWidth(self *C.QStackedLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_HeightForWidth(width int) int {

	return (int)(C.QStackedLayout_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(width)))

}
func (this *QStackedLayout) OnHeightForWidth(slot func(super func(width int) int, width int) int) {
	ok := C.QStackedLayout_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_heightForWidth
func miqt_exec_callback_QStackedLayout_heightForWidth(self *C.QStackedLayout, cb C.intptr_t, width C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(width int) int, width int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(width)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_Spacing() int {

	return (int)(C.QStackedLayout_virtualbase_spacing(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnSpacing(slot func(super func() int) int) {
	ok := C.QStackedLayout_override_virtual_spacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_spacing
func miqt_exec_callback_QStackedLayout_spacing(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Spacing)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_SetSpacing(spacing int) {

	C.QStackedLayout_virtualbase_setSpacing(unsafe.Pointer(this.h), (C.int)(spacing))

}
func (this *QStackedLayout) OnSetSpacing(slot func(super func(spacing int), spacing int)) {
	ok := C.QStackedLayout_override_virtual_setSpacing(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_setSpacing
func miqt_exec_callback_QStackedLayout_setSpacing(self *C.QStackedLayout, cb C.intptr_t, spacing C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(spacing int), spacing int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(spacing)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_SetSpacing, slotval1)

}

func (this *QStackedLayout) callVirtualBase_Invalidate() {

	C.QStackedLayout_virtualbase_invalidate(unsafe.Pointer(this.h))

}
func (this *QStackedLayout) OnInvalidate(slot func(super func())) {
	ok := C.QStackedLayout_override_virtual_invalidate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_invalidate
func miqt_exec_callback_QStackedLayout_invalidate(self *C.QStackedLayout, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QStackedLayout{h: self}).callVirtualBase_Invalidate)

}

func (this *QStackedLayout) callVirtualBase_Geometry() *QRect {

	_goptr := newQRect(C.QStackedLayout_virtualbase_geometry(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnGeometry(slot func(super func() *QRect) *QRect) {
	ok := C.QStackedLayout_override_virtual_geometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_geometry
func miqt_exec_callback_QStackedLayout_geometry(self *C.QStackedLayout, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRect) *QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Geometry)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ExpandingDirections() Orientation {

	return (Orientation)(C.QStackedLayout_virtualbase_expandingDirections(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnExpandingDirections(slot func(super func() Orientation) Orientation) {
	ok := C.QStackedLayout_override_virtual_expandingDirections(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_expandingDirections
func miqt_exec_callback_QStackedLayout_expandingDirections(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() Orientation) Orientation)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ExpandingDirections)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_MaximumSize() *QSize {

	_goptr := newQSize(C.QStackedLayout_virtualbase_maximumSize(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QStackedLayout) OnMaximumSize(slot func(super func() *QSize) *QSize) {
	ok := C.QStackedLayout_override_virtual_maximumSize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_maximumSize
func miqt_exec_callback_QStackedLayout_maximumSize(self *C.QStackedLayout, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_MaximumSize)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_IndexOf(param1 *QWidget) int {

	return (int)(C.QStackedLayout_virtualbase_indexOf(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QStackedLayout) OnIndexOf(slot func(super func(param1 *QWidget) int, param1 *QWidget) int) {
	ok := C.QStackedLayout_override_virtual_indexOf(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_indexOf
func miqt_exec_callback_QStackedLayout_indexOf(self *C.QStackedLayout, cb C.intptr_t, param1 *C.QWidget) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QWidget) int, param1 *QWidget) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_IndexOf, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_IsEmpty() bool {

	return (bool)(C.QStackedLayout_virtualbase_isEmpty(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnIsEmpty(slot func(super func() bool) bool) {
	ok := C.QStackedLayout_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_isEmpty
func miqt_exec_callback_QStackedLayout_isEmpty(self *C.QStackedLayout, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_IsEmpty)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_ControlTypes() QSizePolicy__ControlType {

	return (QSizePolicy__ControlType)(C.QStackedLayout_virtualbase_controlTypes(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnControlTypes(slot func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType) {
	ok := C.QStackedLayout_override_virtual_controlTypes(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_controlTypes
func miqt_exec_callback_QStackedLayout_controlTypes(self *C.QStackedLayout, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QSizePolicy__ControlType) QSizePolicy__ControlType)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ControlTypes)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_ReplaceWidget(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem {

	return newQLayoutItem(C.QStackedLayout_virtualbase_replaceWidget(unsafe.Pointer(this.h), from.cPointer(), to.cPointer(), (C.int)(options)))

}
func (this *QStackedLayout) OnReplaceWidget(slot func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem) {
	ok := C.QStackedLayout_override_virtual_replaceWidget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_replaceWidget
func miqt_exec_callback_QStackedLayout_replaceWidget(self *C.QStackedLayout, cb C.intptr_t, from *C.QWidget, to *C.QWidget, options C.int) *C.QLayoutItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem, from *QWidget, to *QWidget, options FindChildOption) *QLayoutItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWidget(from)

	slotval2 := newQWidget(to)

	slotval3 := (FindChildOption)(options)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_ReplaceWidget, slotval1, slotval2, slotval3)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_Layout() *QLayout {

	return newQLayout(C.QStackedLayout_virtualbase_layout(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnLayout(slot func(super func() *QLayout) *QLayout) {
	ok := C.QStackedLayout_override_virtual_layout(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_layout
func miqt_exec_callback_QStackedLayout_layout(self *C.QStackedLayout, cb C.intptr_t) *C.QLayout {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QLayout) *QLayout)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Layout)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_ChildEvent(e *QChildEvent) {

	C.QStackedLayout_virtualbase_childEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QStackedLayout) OnChildEvent(slot func(super func(e *QChildEvent), e *QChildEvent)) {
	ok := C.QStackedLayout_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_childEvent
func miqt_exec_callback_QStackedLayout_childEvent(self *C.QStackedLayout, cb C.intptr_t, e *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QChildEvent), e *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(e)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QStackedLayout) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QStackedLayout_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QStackedLayout) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QStackedLayout_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_event
func miqt_exec_callback_QStackedLayout_event(self *C.QStackedLayout, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QStackedLayout_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QStackedLayout) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QStackedLayout_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_eventFilter
func miqt_exec_callback_QStackedLayout_eventFilter(self *C.QStackedLayout, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QStackedLayout_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedLayout) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QStackedLayout_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_timerEvent
func miqt_exec_callback_QStackedLayout_timerEvent(self *C.QStackedLayout, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QStackedLayout) callVirtualBase_CustomEvent(event *QEvent) {

	C.QStackedLayout_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QStackedLayout) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QStackedLayout_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_customEvent
func miqt_exec_callback_QStackedLayout_customEvent(self *C.QStackedLayout, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QStackedLayout) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QStackedLayout_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStackedLayout) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStackedLayout_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_connectNotify
func miqt_exec_callback_QStackedLayout_connectNotify(self *C.QStackedLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QStackedLayout) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QStackedLayout_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QStackedLayout) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QStackedLayout_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_disconnectNotify
func miqt_exec_callback_QStackedLayout_disconnectNotify(self *C.QStackedLayout, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QStackedLayout{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QStackedLayout) callVirtualBase_MinimumHeightForWidth(param1 int) int {

	return (int)(C.QStackedLayout_virtualbase_minimumHeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QStackedLayout) OnMinimumHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QStackedLayout_override_virtual_minimumHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_minimumHeightForWidth
func miqt_exec_callback_QStackedLayout_minimumHeightForWidth(self *C.QStackedLayout, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_MinimumHeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QStackedLayout) callVirtualBase_Widget() *QWidget {

	return newQWidget(C.QStackedLayout_virtualbase_widget(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnWidget(slot func(super func() *QWidget) *QWidget) {
	ok := C.QStackedLayout_override_virtual_widget(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_widget
func miqt_exec_callback_QStackedLayout_widget(self *C.QStackedLayout, cb C.intptr_t) *C.QWidget {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QWidget) *QWidget)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_Widget)

	return virtualReturn.cPointer()

}

func (this *QStackedLayout) callVirtualBase_SpacerItem() *QSpacerItem {

	return newQSpacerItem(C.QStackedLayout_virtualbase_spacerItem(unsafe.Pointer(this.h)))

}
func (this *QStackedLayout) OnSpacerItem(slot func(super func() *QSpacerItem) *QSpacerItem) {
	ok := C.QStackedLayout_override_virtual_spacerItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QStackedLayout_spacerItem
func miqt_exec_callback_QStackedLayout_spacerItem(self *C.QStackedLayout, cb C.intptr_t) *C.QSpacerItem {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSpacerItem) *QSpacerItem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QStackedLayout{h: self}).callVirtualBase_SpacerItem)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QStackedLayout) Delete() {
	C.QStackedLayout_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStackedLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QStackedLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
