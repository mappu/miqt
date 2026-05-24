package qwt

/*

#include "gen_qwt_dial.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtDial__Shadow int

const (
	QwtDial__Plain  QwtDial__Shadow = 16
	QwtDial__Raised QwtDial__Shadow = 32
	QwtDial__Sunken QwtDial__Shadow = 48
)

type QwtDial__Mode int

const (
	QwtDial__RotateNeedle QwtDial__Mode = 0
	QwtDial__RotateScale  QwtDial__Mode = 1
)

type QwtDial struct {
	h *C.QwtDial
	*QwtAbstractSlider
}

func (this *QwtDial) cPointer() *C.QwtDial {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtDial) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtDial constructs the type using only CGO pointers.
func newQwtDial(h *C.QwtDial) *QwtDial {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractSlider *C.QwtAbstractSlider = nil
	C.QwtDial_virtbase(h, &outptr_QwtAbstractSlider)

	return &QwtDial{h: h,
		QwtAbstractSlider: newQwtAbstractSlider(outptr_QwtAbstractSlider)}
}

// UnsafeNewQwtDial constructs the type using only unsafe pointers.
func UnsafeNewQwtDial(h unsafe.Pointer) *QwtDial {
	return newQwtDial((*C.QwtDial)(h))
}

// NewQwtDial constructs a new QwtDial object.
func NewQwtDial(parent *qt.QWidget) *QwtDial {

	return newQwtDial(C.QwtDial_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtDial2 constructs a new QwtDial object.
func NewQwtDial2() *QwtDial {

	return newQwtDial(C.QwtDial_new2())
}

func (this *QwtDial) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtDial_metaObject(this.h)))
}

func (this *QwtDial) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtDial_metacast(this.h, param1_Cstring))
}

func QwtDial_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDial_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtDial) SetFrameShadow(frameShadow QwtDial__Shadow) {
	C.QwtDial_setFrameShadow(this.h, (C.int)(frameShadow))
}

func (this *QwtDial) FrameShadow() QwtDial__Shadow {
	return (QwtDial__Shadow)(C.QwtDial_frameShadow(this.h))
}

func (this *QwtDial) SetLineWidth(lineWidth int) {
	C.QwtDial_setLineWidth(this.h, (C.int)(lineWidth))
}

func (this *QwtDial) LineWidth() int {
	return (int)(C.QwtDial_lineWidth(this.h))
}

func (this *QwtDial) SetMode(mode QwtDial__Mode) {
	C.QwtDial_setMode(this.h, (C.int)(mode))
}

func (this *QwtDial) Mode() QwtDial__Mode {
	return (QwtDial__Mode)(C.QwtDial_mode(this.h))
}

func (this *QwtDial) SetScaleArc(minArc float64, maxArc float64) {
	C.QwtDial_setScaleArc(this.h, (C.double)(minArc), (C.double)(maxArc))
}

func (this *QwtDial) SetMinScaleArc(minScaleArc float64) {
	C.QwtDial_setMinScaleArc(this.h, (C.double)(minScaleArc))
}

func (this *QwtDial) MinScaleArc() float64 {
	return (float64)(C.QwtDial_minScaleArc(this.h))
}

func (this *QwtDial) SetMaxScaleArc(maxScaleArc float64) {
	C.QwtDial_setMaxScaleArc(this.h, (C.double)(maxScaleArc))
}

func (this *QwtDial) MaxScaleArc() float64 {
	return (float64)(C.QwtDial_maxScaleArc(this.h))
}

func (this *QwtDial) SetOrigin(origin float64) {
	C.QwtDial_setOrigin(this.h, (C.double)(origin))
}

func (this *QwtDial) Origin() float64 {
	return (float64)(C.QwtDial_origin(this.h))
}

func (this *QwtDial) SetNeedle(needle *QwtDialNeedle) {
	C.QwtDial_setNeedle(this.h, needle.cPointer())
}

func (this *QwtDial) Needle() *QwtDialNeedle {
	return newQwtDialNeedle(C.QwtDial_needle(this.h))
}

func (this *QwtDial) Needle2() *QwtDialNeedle {
	return newQwtDialNeedle(C.QwtDial_needle2(this.h))
}

func (this *QwtDial) BoundingRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDial_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDial) InnerRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDial_innerRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDial) ScaleInnerRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDial_scaleInnerRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDial) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDial_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDial) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDial_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtDial) SetScaleDraw(scaleDraw *QwtRoundScaleDraw) {
	C.QwtDial_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtDial) ScaleDraw() *QwtRoundScaleDraw {
	return newQwtRoundScaleDraw(C.QwtDial_scaleDraw(this.h))
}

func (this *QwtDial) ScaleDraw2() *QwtRoundScaleDraw {
	return newQwtRoundScaleDraw(C.QwtDial_scaleDraw2(this.h))
}

func QwtDial_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDial_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDial_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtDial_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtDial_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// InvalidateCache can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementValue can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtDial_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtDial_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtDial_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDial_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDial_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtDial_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtDial_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtDial_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtDial that was directly constructed.
func (this *QwtDial) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtDial_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtDial) callVirtualBase_SetOrigin(origin float64) {

	C.QwtDial_virtualbase_setOrigin(unsafe.Pointer(this.h), (C.double)(origin))

}
func (this *QwtDial) OnSetOrigin(slot func(super func(origin float64), origin float64)) {
	ok := C.QwtDial_override_virtual_setOrigin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_setOrigin
func miqt_exec_callback_QwtDial_setOrigin(self *C.QwtDial, cb C.intptr_t, origin C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(origin float64), origin float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(origin)

	gofunc((&QwtDial{h: self}).callVirtualBase_SetOrigin, slotval1)

}

func (this *QwtDial) callVirtualBase_ScaleInnerRect() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtDial_virtualbase_scaleInnerRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDial) OnScaleInnerRect(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtDial_override_virtual_scaleInnerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_scaleInnerRect
func miqt_exec_callback_QwtDial_scaleInnerRect(self *C.QwtDial, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_ScaleInnerRect)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDial_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDial) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtDial_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_sizeHint
func miqt_exec_callback_QwtDial_sizeHint(self *C.QwtDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtDial_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDial) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtDial_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_minimumSizeHint
func miqt_exec_callback_QwtDial_minimumSizeHint(self *C.QwtDial, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtDial_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtDial_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_wheelEvent
func miqt_exec_callback_QwtDial_wheelEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtDial_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtDial_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_paintEvent
func miqt_exec_callback_QwtDial_paintEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtDial_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtDial_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_changeEvent
func miqt_exec_callback_QwtDial_changeEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DrawFrame(param1 *qt.QPainter) {

	C.QwtDial_virtualbase_drawFrame(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtDial) OnDrawFrame(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtDial_override_virtual_drawFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawFrame
func miqt_exec_callback_QwtDial_drawFrame(self *C.QwtDial, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawFrame, slotval1)

}

func (this *QwtDial) callVirtualBase_DrawContents(param1 *qt.QPainter) {

	C.QwtDial_virtualbase_drawContents(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtDial) OnDrawContents(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtDial_override_virtual_drawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawContents
func miqt_exec_callback_QwtDial_drawContents(self *C.QwtDial, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QwtDial) callVirtualBase_DrawFocusIndicator(param1 *qt.QPainter) {

	C.QwtDial_virtualbase_drawFocusIndicator(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtDial) OnDrawFocusIndicator(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtDial_override_virtual_drawFocusIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawFocusIndicator
func miqt_exec_callback_QwtDial_drawFocusIndicator(self *C.QwtDial, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawFocusIndicator, slotval1)

}

func (this *QwtDial) callVirtualBase_DrawScale(param1 *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtDial_virtualbase_drawScale(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtDial) OnDrawScale(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtDial_override_virtual_drawScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawScale
func miqt_exec_callback_QwtDial_drawScale(self *C.QwtDial, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawScale, slotval1, slotval2, slotval3)

}

func (this *QwtDial) callVirtualBase_DrawScaleContents(painter *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtDial_virtualbase_drawScaleContents(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtDial) OnDrawScaleContents(slot func(super func(painter *qt.QPainter, center *qt.QPointF, radius float64), painter *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtDial_override_virtual_drawScaleContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawScaleContents
func miqt_exec_callback_QwtDial_drawScaleContents(self *C.QwtDial, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, radius float64), painter *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawScaleContents, slotval1, slotval2, slotval3)

}

func (this *QwtDial) callVirtualBase_DrawNeedle(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtDial_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.double)(radius), (C.double)(direction), (C.int)(param5))

}
func (this *QwtDial) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtDial_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_drawNeedle
func miqt_exec_callback_QwtDial_drawNeedle(self *C.QwtDial, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPointF, radius C.double, direction C.double, param5 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(param2))

	slotval3 := (float64)(radius)

	slotval4 := (float64)(direction)

	slotval5 := (qt.QPalette__ColorGroup)(param5)

	gofunc((&QwtDial{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtDial) callVirtualBase_ScrolledTo(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtDial_virtualbase_scrolledTo(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtDial) OnScrolledTo(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtDial_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_scrolledTo
func miqt_exec_callback_QwtDial_scrolledTo(self *C.QwtDial, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_ScrolledTo, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_IsScrollPosition(param1 *qt.QPoint) bool {

	return (bool)(C.QwtDial_virtualbase_isScrollPosition(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtDial) OnIsScrollPosition(slot func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool) {
	ok := C.QwtDial_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_isScrollPosition
func miqt_exec_callback_QwtDial_isScrollPosition(self *C.QwtDial, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_IsScrollPosition, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_SliderChange() {

	C.QwtDial_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtDial) OnSliderChange(slot func(super func())) {
	ok := C.QwtDial_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_sliderChange
func miqt_exec_callback_QwtDial_sliderChange(self *C.QwtDial, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtDial{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtDial) callVirtualBase_ScaleChange() {

	C.QwtDial_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtDial) OnScaleChange(slot func(super func())) {
	ok := C.QwtDial_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_scaleChange
func miqt_exec_callback_QwtDial_scaleChange(self *C.QwtDial, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtDial{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtDial) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtDial_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtDial_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_mousePressEvent
func miqt_exec_callback_QwtDial_mousePressEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtDial_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtDial_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_mouseReleaseEvent
func miqt_exec_callback_QwtDial_mouseReleaseEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtDial_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtDial_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_mouseMoveEvent
func miqt_exec_callback_QwtDial_mouseMoveEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtDial_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtDial_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_keyPressEvent
func miqt_exec_callback_QwtDial_keyPressEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DevType() int {

	return (int)(C.QwtDial_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtDial) OnDevType(slot func(super func() int) int) {
	ok := C.QwtDial_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_devType
func miqt_exec_callback_QwtDial_devType(self *C.QwtDial, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_SetVisible(visible bool) {

	C.QwtDial_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtDial) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtDial_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_setVisible
func miqt_exec_callback_QwtDial_setVisible(self *C.QwtDial, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtDial{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtDial) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtDial_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtDial) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtDial_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_heightForWidth
func miqt_exec_callback_QwtDial_heightForWidth(self *C.QwtDial, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtDial_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtDial) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtDial_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_hasHeightForWidth
func miqt_exec_callback_QwtDial_hasHeightForWidth(self *C.QwtDial, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtDial_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtDial) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtDial_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_paintEngine
func miqt_exec_callback_QwtDial_paintEngine(self *C.QwtDial, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtDial_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtDial) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtDial_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_event
func miqt_exec_callback_QwtDial_event(self *C.QwtDial, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtDial_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtDial_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_mouseDoubleClickEvent
func miqt_exec_callback_QwtDial_mouseDoubleClickEvent(self *C.QwtDial, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtDial_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtDial_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_keyReleaseEvent
func miqt_exec_callback_QwtDial_keyReleaseEvent(self *C.QwtDial, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtDial_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtDial_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_focusInEvent
func miqt_exec_callback_QwtDial_focusInEvent(self *C.QwtDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtDial_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtDial_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_focusOutEvent
func miqt_exec_callback_QwtDial_focusOutEvent(self *C.QwtDial, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtDial_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtDial_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_enterEvent
func miqt_exec_callback_QwtDial_enterEvent(self *C.QwtDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtDial_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtDial_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_leaveEvent
func miqt_exec_callback_QwtDial_leaveEvent(self *C.QwtDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtDial_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtDial_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_moveEvent
func miqt_exec_callback_QwtDial_moveEvent(self *C.QwtDial, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtDial_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtDial_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_resizeEvent
func miqt_exec_callback_QwtDial_resizeEvent(self *C.QwtDial, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtDial_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtDial_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_closeEvent
func miqt_exec_callback_QwtDial_closeEvent(self *C.QwtDial, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtDial_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtDial_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_contextMenuEvent
func miqt_exec_callback_QwtDial_contextMenuEvent(self *C.QwtDial, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtDial_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtDial_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_tabletEvent
func miqt_exec_callback_QwtDial_tabletEvent(self *C.QwtDial, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtDial_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtDial_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_actionEvent
func miqt_exec_callback_QwtDial_actionEvent(self *C.QwtDial, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtDial_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtDial_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_dragEnterEvent
func miqt_exec_callback_QwtDial_dragEnterEvent(self *C.QwtDial, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtDial_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtDial_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_dragMoveEvent
func miqt_exec_callback_QwtDial_dragMoveEvent(self *C.QwtDial, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtDial_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtDial_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_dragLeaveEvent
func miqt_exec_callback_QwtDial_dragLeaveEvent(self *C.QwtDial, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtDial_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtDial_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_dropEvent
func miqt_exec_callback_QwtDial_dropEvent(self *C.QwtDial, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtDial_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtDial_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_showEvent
func miqt_exec_callback_QwtDial_showEvent(self *C.QwtDial, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtDial_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtDial_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_hideEvent
func miqt_exec_callback_QwtDial_hideEvent(self *C.QwtDial, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtDial_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtDial) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtDial_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_nativeEvent
func miqt_exec_callback_QwtDial_nativeEvent(self *C.QwtDial, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtDial_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtDial) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtDial_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_metric
func miqt_exec_callback_QwtDial_metric(self *C.QwtDial, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtDial_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtDial) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtDial_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_initPainter
func miqt_exec_callback_QwtDial_initPainter(self *C.QwtDial, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtDial{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtDial) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtDial_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtDial) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtDial_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_redirected
func miqt_exec_callback_QwtDial_redirected(self *C.QwtDial, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtDial_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtDial) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtDial_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_sharedPainter
func miqt_exec_callback_QwtDial_sharedPainter(self *C.QwtDial, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtDial_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtDial) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtDial_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_inputMethodEvent
func miqt_exec_callback_QwtDial_inputMethodEvent(self *C.QwtDial, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtDial{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtDial_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtDial) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtDial_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_inputMethodQuery
func miqt_exec_callback_QwtDial_inputMethodQuery(self *C.QwtDial, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtDial) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtDial_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtDial) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtDial_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_focusNextPrevChild
func miqt_exec_callback_QwtDial_focusNextPrevChild(self *C.QwtDial, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtDial_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtDial) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtDial_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_eventFilter
func miqt_exec_callback_QwtDial_eventFilter(self *C.QwtDial, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtDial{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtDial) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtDial_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtDial_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_timerEvent
func miqt_exec_callback_QwtDial_timerEvent(self *C.QwtDial, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtDial_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtDial_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_childEvent
func miqt_exec_callback_QwtDial_childEvent(self *C.QwtDial, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtDial_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtDial) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtDial_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_customEvent
func miqt_exec_callback_QwtDial_customEvent(self *C.QwtDial, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtDial{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtDial) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtDial_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtDial) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtDial_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_connectNotify
func miqt_exec_callback_QwtDial_connectNotify(self *C.QwtDial, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtDial{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtDial) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtDial_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtDial) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtDial_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtDial_disconnectNotify
func miqt_exec_callback_QwtDial_disconnectNotify(self *C.QwtDial, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtDial{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtDial) Delete() {
	C.QwtDial_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtDial) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtDial) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
