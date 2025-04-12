package qt

/*

#include "gen_qsplitter.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSplitter struct {
	h *C.QSplitter
	*QFrame
}

func (this *QSplitter) cPointer() *C.QSplitter {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplitter) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplitter constructs the type using only CGO pointers.
func newQSplitter(h *C.QSplitter) *QSplitter {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QSplitter_virtbase(h, &outptr_QFrame)

	return &QSplitter{h: h,
		QFrame: newQFrame(outptr_QFrame)}
}

// UnsafeNewQSplitter constructs the type using only unsafe pointers.
func UnsafeNewQSplitter(h unsafe.Pointer) *QSplitter {
	return newQSplitter((*C.QSplitter)(h))
}

// NewQSplitter constructs a new QSplitter object.
func NewQSplitter(parent *QWidget) *QSplitter {

	return newQSplitter(C.QSplitter_new(parent.cPointer()))
}

// NewQSplitter2 constructs a new QSplitter object.
func NewQSplitter2() *QSplitter {

	return newQSplitter(C.QSplitter_new2())
}

// NewQSplitter3 constructs a new QSplitter object.
func NewQSplitter3(param1 Orientation) *QSplitter {

	return newQSplitter(C.QSplitter_new3((C.int)(param1)))
}

// NewQSplitter4 constructs a new QSplitter object.
func NewQSplitter4(param1 Orientation, parent *QWidget) *QSplitter {

	return newQSplitter(C.QSplitter_new4((C.int)(param1), parent.cPointer()))
}

func (this *QSplitter) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSplitter_metaObject(this.h))
}

func (this *QSplitter) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplitter_metacast(this.h, param1_Cstring))
}

func QSplitter_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitter_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitter) AddWidget(widget *QWidget) {
	C.QSplitter_addWidget(this.h, widget.cPointer())
}

func (this *QSplitter) InsertWidget(index int, widget *QWidget) {
	C.QSplitter_insertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QSplitter) ReplaceWidget(index int, widget *QWidget) *QWidget {
	return newQWidget(C.QSplitter_replaceWidget(this.h, (C.int)(index), widget.cPointer()))
}

func (this *QSplitter) SetOrientation(orientation Orientation) {
	C.QSplitter_setOrientation(this.h, (C.int)(orientation))
}

func (this *QSplitter) Orientation() Orientation {
	return (Orientation)(C.QSplitter_orientation(this.h))
}

func (this *QSplitter) SetChildrenCollapsible(childrenCollapsible bool) {
	C.QSplitter_setChildrenCollapsible(this.h, (C.bool)(childrenCollapsible))
}

func (this *QSplitter) ChildrenCollapsible() bool {
	return (bool)(C.QSplitter_childrenCollapsible(this.h))
}

func (this *QSplitter) SetCollapsible(index int, param2 bool) {
	C.QSplitter_setCollapsible(this.h, (C.int)(index), (C.bool)(param2))
}

func (this *QSplitter) IsCollapsible(index int) bool {
	return (bool)(C.QSplitter_isCollapsible(this.h, (C.int)(index)))
}

func (this *QSplitter) SetOpaqueResize() {
	C.QSplitter_setOpaqueResize(this.h)
}

func (this *QSplitter) OpaqueResize() bool {
	return (bool)(C.QSplitter_opaqueResize(this.h))
}

func (this *QSplitter) Refresh() {
	C.QSplitter_refresh(this.h)
}

func (this *QSplitter) SizeHint() *QSize {
	_goptr := newQSize(C.QSplitter_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QSplitter_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSplitter) Sizes() []int {
	var _ma C.struct_miqt_array = C.QSplitter_sizes(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func (this *QSplitter) SetSizes(list []int) {
	list_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QSplitter_setSizes(this.h, list_ma)
}

func (this *QSplitter) SaveState() []byte {
	var _bytearray C.struct_miqt_string = C.QSplitter_saveState(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QSplitter) RestoreState(state []byte) bool {
	state_alias := C.struct_miqt_string{}
	if len(state) > 0 {
		state_alias.data = (*C.char)(unsafe.Pointer(&state[0]))
	} else {
		state_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	state_alias.len = C.size_t(len(state))
	return (bool)(C.QSplitter_restoreState(this.h, state_alias))
}

func (this *QSplitter) HandleWidth() int {
	return (int)(C.QSplitter_handleWidth(this.h))
}

func (this *QSplitter) SetHandleWidth(handleWidth int) {
	C.QSplitter_setHandleWidth(this.h, (C.int)(handleWidth))
}

func (this *QSplitter) IndexOf(w *QWidget) int {
	return (int)(C.QSplitter_indexOf(this.h, w.cPointer()))
}

func (this *QSplitter) Widget(index int) *QWidget {
	return newQWidget(C.QSplitter_widget(this.h, (C.int)(index)))
}

func (this *QSplitter) Count() int {
	return (int)(C.QSplitter_count(this.h))
}

func (this *QSplitter) GetRange(index int, param2 *int, param3 *int) {
	C.QSplitter_getRange(this.h, (C.int)(index), (*C.int)(unsafe.Pointer(param2)), (*C.int)(unsafe.Pointer(param3)))
}

func (this *QSplitter) Handle(index int) *QSplitterHandle {
	return newQSplitterHandle(C.QSplitter_handle(this.h, (C.int)(index)))
}

func (this *QSplitter) SetStretchFactor(index int, stretch int) {
	C.QSplitter_setStretchFactor(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QSplitter) SplitterMoved(pos int, index int) {
	C.QSplitter_splitterMoved(this.h, (C.int)(pos), (C.int)(index))
}
func (this *QSplitter) OnSplitterMoved(slot func(pos int, index int)) {
	C.QSplitter_connect_splitterMoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSplitter_splitterMoved
func miqt_exec_callback_QSplitter_splitterMoved(cb C.intptr_t, pos C.int, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos int, index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(pos)

	slotval2 := (int)(index)

	gofunc(slotval1, slotval2)
}

func QSplitter_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitter_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitter_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitter_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitter_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitter) SetOpaqueResizeWithOpaque(opaque bool) {
	C.QSplitter_setOpaqueResizeWithOpaque(this.h, (C.bool)(opaque))
}

// MoveSplitter can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) MoveSplitter(pos int, index int) {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_moveSplitter(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(pos), (C.int)(index))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetRubberBand can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) SetRubberBand(position int) {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_setRubberBand(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(position))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ClosestLegalPosition can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) ClosestLegalPosition(param1 int, param2 int) int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitter_protectedbase_closestLegalPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(param1), (C.int)(param2)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawFrame can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) DrawFrame(param1 *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) InitStyleOption(option *QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), option.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitter_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitter_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitter_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSplitter_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitter_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitter_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSplitter that was directly constructed.
func (this *QSplitter) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitter_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSplitter) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSplitter_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitter_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_sizeHint
func miqt_exec_callback_QSplitter_sizeHint(self *C.QSplitter, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSplitter_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitter_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_minimumSizeHint
func miqt_exec_callback_QSplitter_minimumSizeHint(self *C.QSplitter, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_CreateHandle() *QSplitterHandle {

	return newQSplitterHandle(C.QSplitter_virtualbase_createHandle(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnCreateHandle(slot func(super func() *QSplitterHandle) *QSplitterHandle) {
	ok := C.QSplitter_override_virtual_createHandle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_createHandle
func miqt_exec_callback_QSplitter_createHandle(self *C.QSplitter, cb C.intptr_t) *C.QSplitterHandle {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSplitterHandle) *QSplitterHandle)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_CreateHandle)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_ChildEvent(param1 *QChildEvent) {

	C.QSplitter_virtualbase_childEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnChildEvent(slot func(super func(param1 *QChildEvent), param1 *QChildEvent)) {
	ok := C.QSplitter_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_childEvent
func miqt_exec_callback_QSplitter_childEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QChildEvent), param1 *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSplitter_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSplitter) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSplitter_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_event
func miqt_exec_callback_QSplitter_event(self *C.QSplitter, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QSplitter_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QSplitter_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_resizeEvent
func miqt_exec_callback_QSplitter_resizeEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSplitter_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSplitter_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_changeEvent
func miqt_exec_callback_QSplitter_changeEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QSplitter_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QSplitter_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_paintEvent
func miqt_exec_callback_QSplitter_paintEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DevType() int {

	return (int)(C.QSplitter_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnDevType(slot func(super func() int) int) {
	ok := C.QSplitter_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_devType
func miqt_exec_callback_QSplitter_devType(self *C.QSplitter, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_SetVisible(visible bool) {

	C.QSplitter_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplitter) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSplitter_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_setVisible
func miqt_exec_callback_QSplitter_setVisible(self *C.QSplitter, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplitter{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplitter) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplitter_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitter) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSplitter_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_heightForWidth
func miqt_exec_callback_QSplitter_heightForWidth(self *C.QSplitter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSplitter_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSplitter_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_hasHeightForWidth
func miqt_exec_callback_QSplitter_hasHeightForWidth(self *C.QSplitter, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSplitter_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSplitter_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_paintEngine
func miqt_exec_callback_QSplitter_paintEngine(self *C.QSplitter, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_mousePressEvent
func miqt_exec_callback_QSplitter_mousePressEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_mouseReleaseEvent
func miqt_exec_callback_QSplitter_mouseReleaseEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_mouseDoubleClickEvent
func miqt_exec_callback_QSplitter_mouseDoubleClickEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QSplitter_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitter_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_mouseMoveEvent
func miqt_exec_callback_QSplitter_mouseMoveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplitter_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSplitter_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_wheelEvent
func miqt_exec_callback_QSplitter_wheelEvent(self *C.QSplitter, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplitter_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitter_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_keyPressEvent
func miqt_exec_callback_QSplitter_keyPressEvent(self *C.QSplitter, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplitter_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitter_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_keyReleaseEvent
func miqt_exec_callback_QSplitter_keyReleaseEvent(self *C.QSplitter, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplitter_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitter_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_focusInEvent
func miqt_exec_callback_QSplitter_focusInEvent(self *C.QSplitter, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplitter_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitter_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_focusOutEvent
func miqt_exec_callback_QSplitter_focusOutEvent(self *C.QSplitter, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSplitter_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitter_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_enterEvent
func miqt_exec_callback_QSplitter_enterEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplitter_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitter_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_leaveEvent
func miqt_exec_callback_QSplitter_leaveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplitter_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSplitter_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_moveEvent
func miqt_exec_callback_QSplitter_moveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplitter_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSplitter_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_closeEvent
func miqt_exec_callback_QSplitter_closeEvent(self *C.QSplitter, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplitter_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSplitter_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_contextMenuEvent
func miqt_exec_callback_QSplitter_contextMenuEvent(self *C.QSplitter, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplitter_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSplitter_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_tabletEvent
func miqt_exec_callback_QSplitter_tabletEvent(self *C.QSplitter, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplitter_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSplitter_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_actionEvent
func miqt_exec_callback_QSplitter_actionEvent(self *C.QSplitter, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplitter_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSplitter_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_dragEnterEvent
func miqt_exec_callback_QSplitter_dragEnterEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplitter_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSplitter_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_dragMoveEvent
func miqt_exec_callback_QSplitter_dragMoveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplitter_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSplitter_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_dragLeaveEvent
func miqt_exec_callback_QSplitter_dragLeaveEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplitter_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSplitter_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_dropEvent
func miqt_exec_callback_QSplitter_dropEvent(self *C.QSplitter, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplitter_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSplitter_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_showEvent
func miqt_exec_callback_QSplitter_showEvent(self *C.QSplitter, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplitter_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSplitter_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_hideEvent
func miqt_exec_callback_QSplitter_hideEvent(self *C.QSplitter, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplitter_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSplitter) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSplitter_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_nativeEvent
func miqt_exec_callback_QSplitter_nativeEvent(self *C.QSplitter, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplitter_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitter) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSplitter_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_metric
func miqt_exec_callback_QSplitter_metric(self *C.QSplitter, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSplitter_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplitter) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplitter_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_initPainter
func miqt_exec_callback_QSplitter_initPainter(self *C.QSplitter, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplitter{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplitter) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSplitter_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSplitter) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSplitter_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_redirected
func miqt_exec_callback_QSplitter_redirected(self *C.QSplitter, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSplitter_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSplitter) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSplitter_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_sharedPainter
func miqt_exec_callback_QSplitter_sharedPainter(self *C.QSplitter, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplitter_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitter) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSplitter_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_inputMethodEvent
func miqt_exec_callback_QSplitter_inputMethodEvent(self *C.QSplitter, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSplitter{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSplitter_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitter) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSplitter_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_inputMethodQuery
func miqt_exec_callback_QSplitter_inputMethodQuery(self *C.QSplitter, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitter) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSplitter_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplitter) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSplitter_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_focusNextPrevChild
func miqt_exec_callback_QSplitter_focusNextPrevChild(self *C.QSplitter, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSplitter_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSplitter) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSplitter_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_eventFilter
func miqt_exec_callback_QSplitter_eventFilter(self *C.QSplitter, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSplitter{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplitter) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSplitter_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSplitter_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_timerEvent
func miqt_exec_callback_QSplitter_timerEvent(self *C.QSplitter, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSplitter_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitter) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitter_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_customEvent
func miqt_exec_callback_QSplitter_customEvent(self *C.QSplitter, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitter{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplitter) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSplitter_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitter) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitter_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_connectNotify
func miqt_exec_callback_QSplitter_connectNotify(self *C.QSplitter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitter{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplitter) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSplitter_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitter) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitter_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitter_disconnectNotify
func miqt_exec_callback_QSplitter_disconnectNotify(self *C.QSplitter, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitter{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplitter) Delete() {
	C.QSplitter_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitter) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitter) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSplitterHandle struct {
	h *C.QSplitterHandle
	*QWidget
}

func (this *QSplitterHandle) cPointer() *C.QSplitterHandle {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSplitterHandle) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSplitterHandle constructs the type using only CGO pointers.
func newQSplitterHandle(h *C.QSplitterHandle) *QSplitterHandle {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QSplitterHandle_virtbase(h, &outptr_QWidget)

	return &QSplitterHandle{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQSplitterHandle constructs the type using only unsafe pointers.
func UnsafeNewQSplitterHandle(h unsafe.Pointer) *QSplitterHandle {
	return newQSplitterHandle((*C.QSplitterHandle)(h))
}

// NewQSplitterHandle constructs a new QSplitterHandle object.
func NewQSplitterHandle(o Orientation, parent *QSplitter) *QSplitterHandle {

	return newQSplitterHandle(C.QSplitterHandle_new((C.int)(o), parent.cPointer()))
}

func (this *QSplitterHandle) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSplitterHandle_metaObject(this.h))
}

func (this *QSplitterHandle) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSplitterHandle_metacast(this.h, param1_Cstring))
}

func QSplitterHandle_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitterHandle_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSplitterHandle) SetOrientation(o Orientation) {
	C.QSplitterHandle_setOrientation(this.h, (C.int)(o))
}

func (this *QSplitterHandle) Orientation() Orientation {
	return (Orientation)(C.QSplitterHandle_orientation(this.h))
}

func (this *QSplitterHandle) OpaqueResize() bool {
	return (bool)(C.QSplitterHandle_opaqueResize(this.h))
}

func (this *QSplitterHandle) Splitter() *QSplitter {
	return newQSplitter(C.QSplitterHandle_splitter(this.h))
}

func (this *QSplitterHandle) SizeHint() *QSize {
	_goptr := newQSize(C.QSplitterHandle_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QSplitterHandle_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitterHandle_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitterHandle_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSplitterHandle_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSplitterHandle_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// MoveSplitter can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) MoveSplitter(p int) {

	var _dynamic_cast_ok C.bool = false
	C.QSplitterHandle_protectedbase_moveSplitter(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(p))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// ClosestLegalPosition can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) ClosestLegalPosition(p int) int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitterHandle_protectedbase_closestLegalPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(p)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitterHandle_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitterHandle_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QSplitterHandle_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitterHandle_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitterHandle_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QSplitterHandle_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitterHandle_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QSplitterHandle_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QSplitterHandle that was directly constructed.
func (this *QSplitterHandle) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QSplitterHandle_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QSplitterHandle) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QSplitterHandle_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitterHandle_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_sizeHint
func miqt_exec_callback_QSplitterHandle_sizeHint(self *C.QSplitterHandle, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_PaintEvent(param1 *QPaintEvent) {

	C.QSplitterHandle_virtualbase_paintEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnPaintEvent(slot func(super func(param1 *QPaintEvent), param1 *QPaintEvent)) {
	ok := C.QSplitterHandle_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_paintEvent
func miqt_exec_callback_QSplitterHandle_paintEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QPaintEvent), param1 *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MouseMoveEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMouseMoveEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_mouseMoveEvent
func miqt_exec_callback_QSplitterHandle_mouseMoveEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MousePressEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_mousePressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMousePressEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_mousePressEvent
func miqt_exec_callback_QSplitterHandle_mousePressEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MouseReleaseEvent(param1 *QMouseEvent) {

	C.QSplitterHandle_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnMouseReleaseEvent(slot func(super func(param1 *QMouseEvent), param1 *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_mouseReleaseEvent
func miqt_exec_callback_QSplitterHandle_mouseReleaseEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QMouseEvent), param1 *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QSplitterHandle_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QSplitterHandle_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_resizeEvent
func miqt_exec_callback_QSplitterHandle_resizeEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QSplitterHandle_virtualbase_event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QSplitterHandle) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	ok := C.QSplitterHandle_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_event
func miqt_exec_callback_QSplitterHandle_event(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_DevType() int {

	return (int)(C.QSplitterHandle_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnDevType(slot func(super func() int) int) {
	ok := C.QSplitterHandle_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_devType
func miqt_exec_callback_QSplitterHandle_devType(self *C.QSplitterHandle, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_SetVisible(visible bool) {

	C.QSplitterHandle_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QSplitterHandle) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QSplitterHandle_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_setVisible
func miqt_exec_callback_QSplitterHandle_setVisible(self *C.QSplitterHandle, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QSplitterHandle_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QSplitterHandle_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_minimumSizeHint
func miqt_exec_callback_QSplitterHandle_minimumSizeHint(self *C.QSplitterHandle, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QSplitterHandle_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitterHandle) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QSplitterHandle_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_heightForWidth
func miqt_exec_callback_QSplitterHandle_heightForWidth(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QSplitterHandle_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QSplitterHandle_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_hasHeightForWidth
func miqt_exec_callback_QSplitterHandle_hasHeightForWidth(self *C.QSplitterHandle, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QSplitterHandle_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QSplitterHandle_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_paintEngine
func miqt_exec_callback_QSplitterHandle_paintEngine(self *C.QSplitterHandle, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QSplitterHandle_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QSplitterHandle_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_mouseDoubleClickEvent
func miqt_exec_callback_QSplitterHandle_mouseDoubleClickEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QSplitterHandle_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QSplitterHandle_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_wheelEvent
func miqt_exec_callback_QSplitterHandle_wheelEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QSplitterHandle_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitterHandle_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_keyPressEvent
func miqt_exec_callback_QSplitterHandle_keyPressEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QSplitterHandle_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QSplitterHandle_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_keyReleaseEvent
func miqt_exec_callback_QSplitterHandle_keyReleaseEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QSplitterHandle_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitterHandle_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_focusInEvent
func miqt_exec_callback_QSplitterHandle_focusInEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QSplitterHandle_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QSplitterHandle_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_focusOutEvent
func miqt_exec_callback_QSplitterHandle_focusOutEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_EnterEvent(event *QEvent) {

	C.QSplitterHandle_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnEnterEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_enterEvent
func miqt_exec_callback_QSplitterHandle_enterEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QSplitterHandle_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_leaveEvent
func miqt_exec_callback_QSplitterHandle_leaveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QSplitterHandle_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QSplitterHandle_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_moveEvent
func miqt_exec_callback_QSplitterHandle_moveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QSplitterHandle_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QSplitterHandle_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_closeEvent
func miqt_exec_callback_QSplitterHandle_closeEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ContextMenuEvent(event *QContextMenuEvent) {

	C.QSplitterHandle_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnContextMenuEvent(slot func(super func(event *QContextMenuEvent), event *QContextMenuEvent)) {
	ok := C.QSplitterHandle_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_contextMenuEvent
func miqt_exec_callback_QSplitterHandle_contextMenuEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QContextMenuEvent), event *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QSplitterHandle_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QSplitterHandle_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_tabletEvent
func miqt_exec_callback_QSplitterHandle_tabletEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QSplitterHandle_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QSplitterHandle_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_actionEvent
func miqt_exec_callback_QSplitterHandle_actionEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QSplitterHandle_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QSplitterHandle_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_dragEnterEvent
func miqt_exec_callback_QSplitterHandle_dragEnterEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QSplitterHandle_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QSplitterHandle_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_dragMoveEvent
func miqt_exec_callback_QSplitterHandle_dragMoveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QSplitterHandle_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QSplitterHandle_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_dragLeaveEvent
func miqt_exec_callback_QSplitterHandle_dragLeaveEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QSplitterHandle_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QSplitterHandle_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_dropEvent
func miqt_exec_callback_QSplitterHandle_dropEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QSplitterHandle_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QSplitterHandle_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_showEvent
func miqt_exec_callback_QSplitterHandle_showEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QSplitterHandle_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QSplitterHandle_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_hideEvent
func miqt_exec_callback_QSplitterHandle_hideEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QSplitterHandle_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QSplitterHandle) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QSplitterHandle_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_nativeEvent
func miqt_exec_callback_QSplitterHandle_nativeEvent(self *C.QSplitterHandle, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*int64)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QSplitterHandle_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_changeEvent
func miqt_exec_callback_QSplitterHandle_changeEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QSplitterHandle_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QSplitterHandle) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QSplitterHandle_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_metric
func miqt_exec_callback_QSplitterHandle_metric(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_InitPainter(painter *QPainter) {

	C.QSplitterHandle_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QSplitterHandle) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QSplitterHandle_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_initPainter
func miqt_exec_callback_QSplitterHandle_initPainter(self *C.QSplitterHandle, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QSplitterHandle_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QSplitterHandle) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QSplitterHandle_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_redirected
func miqt_exec_callback_QSplitterHandle_redirected(self *C.QSplitterHandle, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QSplitterHandle_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QSplitterHandle) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QSplitterHandle_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_sharedPainter
func miqt_exec_callback_QSplitterHandle_sharedPainter(self *C.QSplitterHandle, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QSplitterHandle_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QSplitterHandle) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QSplitterHandle_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_inputMethodEvent
func miqt_exec_callback_QSplitterHandle_inputMethodEvent(self *C.QSplitterHandle, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QSplitterHandle_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QSplitterHandle) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QSplitterHandle_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_inputMethodQuery
func miqt_exec_callback_QSplitterHandle_inputMethodQuery(self *C.QSplitterHandle, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QSplitterHandle) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QSplitterHandle_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QSplitterHandle) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QSplitterHandle_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_focusNextPrevChild
func miqt_exec_callback_QSplitterHandle_focusNextPrevChild(self *C.QSplitterHandle, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSplitterHandle_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSplitterHandle) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSplitterHandle_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_eventFilter
func miqt_exec_callback_QSplitterHandle_eventFilter(self *C.QSplitterHandle, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSplitterHandle{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSplitterHandle) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSplitterHandle_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSplitterHandle_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_timerEvent
func miqt_exec_callback_QSplitterHandle_timerEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSplitterHandle_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSplitterHandle_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_childEvent
func miqt_exec_callback_QSplitterHandle_childEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSplitterHandle_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSplitterHandle) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSplitterHandle_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_customEvent
func miqt_exec_callback_QSplitterHandle_customEvent(self *C.QSplitterHandle, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSplitterHandle_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitterHandle) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitterHandle_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_connectNotify
func miqt_exec_callback_QSplitterHandle_connectNotify(self *C.QSplitterHandle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSplitterHandle) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSplitterHandle_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSplitterHandle) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSplitterHandle_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSplitterHandle_disconnectNotify
func miqt_exec_callback_QSplitterHandle_disconnectNotify(self *C.QSplitterHandle, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSplitterHandle{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSplitterHandle) Delete() {
	C.QSplitterHandle_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSplitterHandle) GoGC() {
	runtime.SetFinalizer(this, func(this *QSplitterHandle) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
