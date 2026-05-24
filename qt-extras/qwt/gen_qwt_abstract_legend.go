package qwt

/*

#include "gen_qwt_abstract_legend.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtAbstractLegend struct {
	h *C.QwtAbstractLegend
	*qt.QFrame
}

func (this *QwtAbstractLegend) cPointer() *C.QwtAbstractLegend {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAbstractLegend) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAbstractLegend constructs the type using only CGO pointers.
func newQwtAbstractLegend(h *C.QwtAbstractLegend) *QwtAbstractLegend {
	if h == nil {
		return nil
	}
	var outptr_QFrame *C.QFrame = nil
	C.QwtAbstractLegend_virtbase(h, &outptr_QFrame)

	return &QwtAbstractLegend{h: h,
		QFrame: qt.UnsafeNewQFrame(unsafe.Pointer(outptr_QFrame))}
}

// UnsafeNewQwtAbstractLegend constructs the type using only unsafe pointers.
func UnsafeNewQwtAbstractLegend(h unsafe.Pointer) *QwtAbstractLegend {
	return newQwtAbstractLegend((*C.QwtAbstractLegend)(h))
}

// NewQwtAbstractLegend constructs a new QwtAbstractLegend object.
func NewQwtAbstractLegend(parent *qt.QWidget) *QwtAbstractLegend {

	return newQwtAbstractLegend(C.QwtAbstractLegend_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtAbstractLegend2 constructs a new QwtAbstractLegend object.
func NewQwtAbstractLegend2() *QwtAbstractLegend {

	return newQwtAbstractLegend(C.QwtAbstractLegend_new2())
}

func (this *QwtAbstractLegend) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtAbstractLegend_metaObject(this.h)))
}

func (this *QwtAbstractLegend) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtAbstractLegend_metacast(this.h, param1_Cstring))
}

func QwtAbstractLegend_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractLegend_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtAbstractLegend) RenderLegend(painter *qt.QPainter, rect *qt.QRectF, fillBackground bool) {
	C.QwtAbstractLegend_renderLegend(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QRectF)(rect.UnsafePointer()), (C.bool)(fillBackground))
}

func (this *QwtAbstractLegend) IsEmpty() bool {
	return (bool)(C.QwtAbstractLegend_isEmpty(this.h))
}

func (this *QwtAbstractLegend) ScrollExtent(param1 qt.Orientation) int {
	return (int)(C.QwtAbstractLegend_scrollExtent(this.h, (C.int)(param1)))
}

func (this *QwtAbstractLegend) UpdateLegend(itemInfo *qt.QVariant, data []QwtLegendData) {
	data_CArray := (*[0xffff]*C.QwtLegendData)(C.malloc(C.size_t(8 * len(data))))
	defer C.free(unsafe.Pointer(data_CArray))
	for i := range data {
		data_CArray[i] = data[i].cPointer()
	}
	data_ma := C.struct_miqt_array{len: C.size_t(len(data)), data: unsafe.Pointer(data_CArray)}
	C.QwtAbstractLegend_updateLegend(this.h, (*C.QVariant)(itemInfo.UnsafePointer()), data_ma)
}

func QwtAbstractLegend_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractLegend_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractLegend_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAbstractLegend_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAbstractLegend_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// DrawFrame can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) DrawFrame(param1 *qt.QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractLegend_protectedbase_drawFrame(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// InitStyleOption can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) InitStyleOption(option *qt.QStyleOptionFrame) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractLegend_protectedbase_initStyleOption(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QStyleOptionFrame)(option.UnsafePointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractLegend_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractLegend_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAbstractLegend_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractLegend_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractLegend_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtAbstractLegend_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAbstractLegend_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAbstractLegend_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtAbstractLegend that was directly constructed.
func (this *QwtAbstractLegend) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAbstractLegend_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QwtAbstractLegend) OnRenderLegend(slot func(painter *qt.QPainter, rect *qt.QRectF, fillBackground bool)) {
	ok := C.QwtAbstractLegend_override_virtual_renderLegend(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_renderLegend
func miqt_exec_callback_QwtAbstractLegend_renderLegend(self *C.QwtAbstractLegend, cb C.intptr_t, painter *C.QPainter, rect *C.QRectF, fillBackground C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *qt.QPainter, rect *qt.QRectF, fillBackground bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(rect))

	slotval3 := (bool)(fillBackground)

	gofunc(slotval1, slotval2, slotval3)

}
func (this *QwtAbstractLegend) OnIsEmpty(slot func() bool) {
	ok := C.QwtAbstractLegend_override_virtual_isEmpty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_isEmpty
func miqt_exec_callback_QwtAbstractLegend_isEmpty(self *C.QwtAbstractLegend, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func() bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_ScrollExtent(param1 qt.Orientation) int {

	return (int)(C.QwtAbstractLegend_virtualbase_scrollExtent(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAbstractLegend) OnScrollExtent(slot func(super func(param1 qt.Orientation) int, param1 qt.Orientation) int) {
	ok := C.QwtAbstractLegend_override_virtual_scrollExtent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_scrollExtent
func miqt_exec_callback_QwtAbstractLegend_scrollExtent(self *C.QwtAbstractLegend, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.Orientation) int, param1 qt.Orientation) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.Orientation)(param1)

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ScrollExtent, slotval1)

	return (C.int)(virtualReturn)

}
func (this *QwtAbstractLegend) OnUpdateLegend(slot func(itemInfo *qt.QVariant, data []QwtLegendData)) {
	ok := C.QwtAbstractLegend_override_virtual_updateLegend(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_updateLegend
func miqt_exec_callback_QwtAbstractLegend_updateLegend(self *C.QwtAbstractLegend, cb C.intptr_t, itemInfo *C.QVariant, data C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(itemInfo *qt.QVariant, data []QwtLegendData))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(itemInfo))

	var data_ma C.struct_miqt_array = data
	data_ret := make([]QwtLegendData, int(data_ma.len))
	data_outCast := (*[0xffff]*C.QwtLegendData)(unsafe.Pointer(data_ma.data)) // hey ya
	for i := 0; i < int(data_ma.len); i++ {
		data_lv_goptr := newQwtLegendData(data_outCast[i])
		data_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		data_ret[i] = *data_lv_goptr
	}
	slotval2 := data_ret

	gofunc(slotval1, slotval2)

}

func (this *QwtAbstractLegend) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractLegend) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAbstractLegend_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_sizeHint
func miqt_exec_callback_QwtAbstractLegend_sizeHint(self *C.QwtAbstractLegend, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_Event(e *qt.QEvent) bool {

	return (bool)(C.QwtAbstractLegend_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(e.UnsafePointer())))

}
func (this *QwtAbstractLegend) OnEvent(slot func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool) {
	ok := C.QwtAbstractLegend_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_event
func miqt_exec_callback_QwtAbstractLegend_event(self *C.QwtAbstractLegend, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *qt.QEvent) bool, e *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtAbstractLegend_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_paintEvent
func miqt_exec_callback_QwtAbstractLegend_paintEvent(self *C.QwtAbstractLegend, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtAbstractLegend_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_changeEvent
func miqt_exec_callback_QwtAbstractLegend_changeEvent(self *C.QwtAbstractLegend, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DevType() int {

	return (int)(C.QwtAbstractLegend_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtAbstractLegend) OnDevType(slot func(super func() int) int) {
	ok := C.QwtAbstractLegend_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_devType
func miqt_exec_callback_QwtAbstractLegend_devType(self *C.QwtAbstractLegend, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_SetVisible(visible bool) {

	C.QwtAbstractLegend_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtAbstractLegend) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtAbstractLegend_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_setVisible
func miqt_exec_callback_QwtAbstractLegend_setVisible(self *C.QwtAbstractLegend, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractLegend) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAbstractLegend_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_minimumSizeHint
func miqt_exec_callback_QwtAbstractLegend_minimumSizeHint(self *C.QwtAbstractLegend, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtAbstractLegend_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAbstractLegend) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtAbstractLegend_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_heightForWidth
func miqt_exec_callback_QwtAbstractLegend_heightForWidth(self *C.QwtAbstractLegend, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtAbstractLegend_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtAbstractLegend) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtAbstractLegend_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_hasHeightForWidth
func miqt_exec_callback_QwtAbstractLegend_hasHeightForWidth(self *C.QwtAbstractLegend, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtAbstractLegend) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtAbstractLegend_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_paintEngine
func miqt_exec_callback_QwtAbstractLegend_paintEngine(self *C.QwtAbstractLegend, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtAbstractLegend_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_mousePressEvent
func miqt_exec_callback_QwtAbstractLegend_mousePressEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtAbstractLegend_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_mouseReleaseEvent
func miqt_exec_callback_QwtAbstractLegend_mouseReleaseEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtAbstractLegend_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_mouseDoubleClickEvent
func miqt_exec_callback_QwtAbstractLegend_mouseDoubleClickEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtAbstractLegend_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_mouseMoveEvent
func miqt_exec_callback_QwtAbstractLegend_mouseMoveEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtAbstractLegend_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_wheelEvent
func miqt_exec_callback_QwtAbstractLegend_wheelEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtAbstractLegend_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_keyPressEvent
func miqt_exec_callback_QwtAbstractLegend_keyPressEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtAbstractLegend_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_keyReleaseEvent
func miqt_exec_callback_QwtAbstractLegend_keyReleaseEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtAbstractLegend_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_focusInEvent
func miqt_exec_callback_QwtAbstractLegend_focusInEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtAbstractLegend_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_focusOutEvent
func miqt_exec_callback_QwtAbstractLegend_focusOutEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtAbstractLegend_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_enterEvent
func miqt_exec_callback_QwtAbstractLegend_enterEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtAbstractLegend_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_leaveEvent
func miqt_exec_callback_QwtAbstractLegend_leaveEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtAbstractLegend_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_moveEvent
func miqt_exec_callback_QwtAbstractLegend_moveEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtAbstractLegend_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_resizeEvent
func miqt_exec_callback_QwtAbstractLegend_resizeEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtAbstractLegend_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_closeEvent
func miqt_exec_callback_QwtAbstractLegend_closeEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtAbstractLegend_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_contextMenuEvent
func miqt_exec_callback_QwtAbstractLegend_contextMenuEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtAbstractLegend_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_tabletEvent
func miqt_exec_callback_QwtAbstractLegend_tabletEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtAbstractLegend_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_actionEvent
func miqt_exec_callback_QwtAbstractLegend_actionEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtAbstractLegend_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_dragEnterEvent
func miqt_exec_callback_QwtAbstractLegend_dragEnterEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtAbstractLegend_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_dragMoveEvent
func miqt_exec_callback_QwtAbstractLegend_dragMoveEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtAbstractLegend_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_dragLeaveEvent
func miqt_exec_callback_QwtAbstractLegend_dragLeaveEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtAbstractLegend_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_dropEvent
func miqt_exec_callback_QwtAbstractLegend_dropEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtAbstractLegend_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_showEvent
func miqt_exec_callback_QwtAbstractLegend_showEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtAbstractLegend_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_hideEvent
func miqt_exec_callback_QwtAbstractLegend_hideEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtAbstractLegend_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtAbstractLegend) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtAbstractLegend_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_nativeEvent
func miqt_exec_callback_QwtAbstractLegend_nativeEvent(self *C.QwtAbstractLegend, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtAbstractLegend_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAbstractLegend) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtAbstractLegend_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_metric
func miqt_exec_callback_QwtAbstractLegend_metric(self *C.QwtAbstractLegend, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtAbstractLegend_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtAbstractLegend_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_initPainter
func miqt_exec_callback_QwtAbstractLegend_initPainter(self *C.QwtAbstractLegend, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtAbstractLegend) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtAbstractLegend_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_redirected
func miqt_exec_callback_QwtAbstractLegend_redirected(self *C.QwtAbstractLegend, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtAbstractLegend) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtAbstractLegend_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_sharedPainter
func miqt_exec_callback_QwtAbstractLegend_sharedPainter(self *C.QwtAbstractLegend, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtAbstractLegend_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_inputMethodEvent
func miqt_exec_callback_QwtAbstractLegend_inputMethodEvent(self *C.QwtAbstractLegend, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtAbstractLegend_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAbstractLegend) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtAbstractLegend_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_inputMethodQuery
func miqt_exec_callback_QwtAbstractLegend_inputMethodQuery(self *C.QwtAbstractLegend, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtAbstractLegend) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtAbstractLegend_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtAbstractLegend) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtAbstractLegend_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_focusNextPrevChild
func miqt_exec_callback_QwtAbstractLegend_focusNextPrevChild(self *C.QwtAbstractLegend, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtAbstractLegend_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtAbstractLegend) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtAbstractLegend_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_eventFilter
func miqt_exec_callback_QwtAbstractLegend_eventFilter(self *C.QwtAbstractLegend, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtAbstractLegend) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtAbstractLegend_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_timerEvent
func miqt_exec_callback_QwtAbstractLegend_timerEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtAbstractLegend_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_childEvent
func miqt_exec_callback_QwtAbstractLegend_childEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtAbstractLegend_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAbstractLegend_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_customEvent
func miqt_exec_callback_QwtAbstractLegend_customEvent(self *C.QwtAbstractLegend, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtAbstractLegend_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAbstractLegend_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_connectNotify
func miqt_exec_callback_QwtAbstractLegend_connectNotify(self *C.QwtAbstractLegend, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtAbstractLegend) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtAbstractLegend_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAbstractLegend) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAbstractLegend_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAbstractLegend_disconnectNotify
func miqt_exec_callback_QwtAbstractLegend_disconnectNotify(self *C.QwtAbstractLegend, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAbstractLegend{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtAbstractLegend) Delete() {
	C.QwtAbstractLegend_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtAbstractLegend) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtAbstractLegend) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
