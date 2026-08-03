package qwt

/*

#include "gen_qwt_knob.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtKnob__KnobStyle int

const (
	QwtKnob__Flat   QwtKnob__KnobStyle = 0
	QwtKnob__Raised QwtKnob__KnobStyle = 1
	QwtKnob__Sunken QwtKnob__KnobStyle = 2
	QwtKnob__Styled QwtKnob__KnobStyle = 3
)

type QwtKnob__MarkerStyle int

const (
	QwtKnob__NoMarker QwtKnob__MarkerStyle = -1
	QwtKnob__Tick     QwtKnob__MarkerStyle = 0
	QwtKnob__Triangle QwtKnob__MarkerStyle = 1
	QwtKnob__Dot      QwtKnob__MarkerStyle = 2
	QwtKnob__Nub      QwtKnob__MarkerStyle = 3
	QwtKnob__Notch    QwtKnob__MarkerStyle = 4
)

type QwtKnob struct {
	h *C.QwtKnob
	*QwtAbstractSlider
}

func (this *QwtKnob) cPointer() *C.QwtKnob {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtKnob) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtKnob constructs the type using only CGO pointers.
func newQwtKnob(h *C.QwtKnob) *QwtKnob {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractSlider *C.QwtAbstractSlider = nil
	C.QwtKnob_virtbase(h, &outptr_QwtAbstractSlider)

	return &QwtKnob{h: h,
		QwtAbstractSlider: newQwtAbstractSlider(outptr_QwtAbstractSlider)}
}

// UnsafeNewQwtKnob constructs the type using only unsafe pointers.
func UnsafeNewQwtKnob(h unsafe.Pointer) *QwtKnob {
	return newQwtKnob((*C.QwtKnob)(h))
}

// NewQwtKnob constructs a new QwtKnob object.
func NewQwtKnob(parent *qt.QWidget) *QwtKnob {

	return newQwtKnob(C.QwtKnob_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtKnob2 constructs a new QwtKnob object.
func NewQwtKnob2() *QwtKnob {

	return newQwtKnob(C.QwtKnob_new2())
}

func (this *QwtKnob) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtKnob_metaObject(this.h)))
}

func (this *QwtKnob) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtKnob_metacast(this.h, param1_Cstring))
}

func QwtKnob_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtKnob_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtKnob) SetAlignment(alignment qt.AlignmentFlag) {
	C.QwtKnob_setAlignment(this.h, (C.int)(alignment))
}

func (this *QwtKnob) Alignment() qt.AlignmentFlag {
	return (qt.AlignmentFlag)(C.QwtKnob_alignment(this.h))
}

func (this *QwtKnob) SetKnobWidth(knobWidth int) {
	C.QwtKnob_setKnobWidth(this.h, (C.int)(knobWidth))
}

func (this *QwtKnob) KnobWidth() int {
	return (int)(C.QwtKnob_knobWidth(this.h))
}

func (this *QwtKnob) SetNumTurns(numTurns int) {
	C.QwtKnob_setNumTurns(this.h, (C.int)(numTurns))
}

func (this *QwtKnob) NumTurns() int {
	return (int)(C.QwtKnob_numTurns(this.h))
}

func (this *QwtKnob) SetTotalAngle(angle float64) {
	C.QwtKnob_setTotalAngle(this.h, (C.double)(angle))
}

func (this *QwtKnob) TotalAngle() float64 {
	return (float64)(C.QwtKnob_totalAngle(this.h))
}

func (this *QwtKnob) SetKnobStyle(knobStyle QwtKnob__KnobStyle) {
	C.QwtKnob_setKnobStyle(this.h, (C.int)(knobStyle))
}

func (this *QwtKnob) KnobStyle() QwtKnob__KnobStyle {
	return (QwtKnob__KnobStyle)(C.QwtKnob_knobStyle(this.h))
}

func (this *QwtKnob) SetBorderWidth(borderWidth int) {
	C.QwtKnob_setBorderWidth(this.h, (C.int)(borderWidth))
}

func (this *QwtKnob) BorderWidth() int {
	return (int)(C.QwtKnob_borderWidth(this.h))
}

func (this *QwtKnob) SetMarkerStyle(markerStyle QwtKnob__MarkerStyle) {
	C.QwtKnob_setMarkerStyle(this.h, (C.int)(markerStyle))
}

func (this *QwtKnob) MarkerStyle() QwtKnob__MarkerStyle {
	return (QwtKnob__MarkerStyle)(C.QwtKnob_markerStyle(this.h))
}

func (this *QwtKnob) SetMarkerSize(markerSize int) {
	C.QwtKnob_setMarkerSize(this.h, (C.int)(markerSize))
}

func (this *QwtKnob) MarkerSize() int {
	return (int)(C.QwtKnob_markerSize(this.h))
}

func (this *QwtKnob) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtKnob_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtKnob) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtKnob_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtKnob) SetScaleDraw(scaleDraw *QwtRoundScaleDraw) {
	C.QwtKnob_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtKnob) ScaleDraw() *QwtRoundScaleDraw {
	return newQwtRoundScaleDraw(C.QwtKnob_scaleDraw(this.h))
}

func (this *QwtKnob) ScaleDraw2() *QwtRoundScaleDraw {
	return newQwtRoundScaleDraw(C.QwtKnob_scaleDraw2(this.h))
}

func (this *QwtKnob) KnobRect() *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtKnob_knobRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QwtKnob_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtKnob_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtKnob_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtKnob_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtKnob_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// IncrementValue can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtKnob_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtKnob_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtKnob_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtKnob_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtKnob_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtKnob_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtKnob_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtKnob_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtKnob that was directly constructed.
func (this *QwtKnob) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtKnob_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtKnob) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtKnob_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtKnob) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtKnob_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_sizeHint
func miqt_exec_callback_QwtKnob_sizeHint(self *C.QwtKnob, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtKnob_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtKnob) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtKnob_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_minimumSizeHint
func miqt_exec_callback_QwtKnob_minimumSizeHint(self *C.QwtKnob, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtKnob_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtKnob_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_paintEvent
func miqt_exec_callback_QwtKnob_paintEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtKnob_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtKnob_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_changeEvent
func miqt_exec_callback_QwtKnob_changeEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_DrawKnob(param1 *qt.QPainter, param2 *qt.QRectF) {

	C.QwtKnob_virtualbase_drawKnob(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()))

}
func (this *QwtKnob) OnDrawKnob(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF)) {
	ok := C.QwtKnob_override_virtual_drawKnob(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_drawKnob
func miqt_exec_callback_QwtKnob_drawKnob(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF), param1 *qt.QPainter, param2 *qt.QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DrawKnob, slotval1, slotval2)

}

func (this *QwtKnob) callVirtualBase_DrawFocusIndicator(param1 *qt.QPainter) {

	C.QwtKnob_virtualbase_drawFocusIndicator(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnDrawFocusIndicator(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtKnob_override_virtual_drawFocusIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_drawFocusIndicator
func miqt_exec_callback_QwtKnob_drawFocusIndicator(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DrawFocusIndicator, slotval1)

}

func (this *QwtKnob) callVirtualBase_DrawMarker(param1 *qt.QPainter, param2 *qt.QRectF, angle float64) {

	C.QwtKnob_virtualbase_drawMarker(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRectF)(param2.UnsafePointer()), (C.double)(angle))

}
func (this *QwtKnob) OnDrawMarker(slot func(super func(param1 *qt.QPainter, param2 *qt.QRectF, angle float64), param1 *qt.QPainter, param2 *qt.QRectF, angle float64)) {
	ok := C.QwtKnob_override_virtual_drawMarker(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_drawMarker
func miqt_exec_callback_QwtKnob_drawMarker(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRectF, angle C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRectF, angle float64), param1 *qt.QPainter, param2 *qt.QRectF, angle float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRectF(unsafe.Pointer(param2))

	slotval3 := (float64)(angle)

	gofunc((&QwtKnob{h: self}).callVirtualBase_DrawMarker, slotval1, slotval2, slotval3)

}

func (this *QwtKnob) callVirtualBase_ScrolledTo(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtKnob_virtualbase_scrolledTo(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtKnob) OnScrolledTo(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtKnob_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_scrolledTo
func miqt_exec_callback_QwtKnob_scrolledTo(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_ScrolledTo, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_IsScrollPosition(param1 *qt.QPoint) bool {

	return (bool)(C.QwtKnob_virtualbase_isScrollPosition(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtKnob) OnIsScrollPosition(slot func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool) {
	ok := C.QwtKnob_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_isScrollPosition
func miqt_exec_callback_QwtKnob_isScrollPosition(self *C.QwtKnob, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_IsScrollPosition, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtKnob_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtKnob_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_mousePressEvent
func miqt_exec_callback_QwtKnob_mousePressEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtKnob_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtKnob_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_mouseReleaseEvent
func miqt_exec_callback_QwtKnob_mouseReleaseEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtKnob_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtKnob_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_mouseMoveEvent
func miqt_exec_callback_QwtKnob_mouseMoveEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtKnob_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtKnob_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_keyPressEvent
func miqt_exec_callback_QwtKnob_keyPressEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtKnob_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtKnob_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_wheelEvent
func miqt_exec_callback_QwtKnob_wheelEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ScaleChange() {

	C.QwtKnob_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtKnob) OnScaleChange(slot func(super func())) {
	ok := C.QwtKnob_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_scaleChange
func miqt_exec_callback_QwtKnob_scaleChange(self *C.QwtKnob, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtKnob{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtKnob) callVirtualBase_SliderChange() {

	C.QwtKnob_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtKnob) OnSliderChange(slot func(super func())) {
	ok := C.QwtKnob_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_sliderChange
func miqt_exec_callback_QwtKnob_sliderChange(self *C.QwtKnob, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtKnob{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtKnob) callVirtualBase_DevType() int {

	return (int)(C.QwtKnob_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtKnob) OnDevType(slot func(super func() int) int) {
	ok := C.QwtKnob_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_devType
func miqt_exec_callback_QwtKnob_devType(self *C.QwtKnob, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_SetVisible(visible bool) {

	C.QwtKnob_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtKnob) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtKnob_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_setVisible
func miqt_exec_callback_QwtKnob_setVisible(self *C.QwtKnob, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtKnob{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtKnob) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtKnob_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtKnob) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtKnob_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_heightForWidth
func miqt_exec_callback_QwtKnob_heightForWidth(self *C.QwtKnob, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtKnob_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtKnob) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtKnob_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_hasHeightForWidth
func miqt_exec_callback_QwtKnob_hasHeightForWidth(self *C.QwtKnob, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtKnob_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtKnob) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtKnob_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_paintEngine
func miqt_exec_callback_QwtKnob_paintEngine(self *C.QwtKnob, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtKnob_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtKnob) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtKnob_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_event
func miqt_exec_callback_QwtKnob_event(self *C.QwtKnob, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtKnob_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtKnob_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_mouseDoubleClickEvent
func miqt_exec_callback_QwtKnob_mouseDoubleClickEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtKnob_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtKnob_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_keyReleaseEvent
func miqt_exec_callback_QwtKnob_keyReleaseEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtKnob_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtKnob_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_focusInEvent
func miqt_exec_callback_QwtKnob_focusInEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtKnob_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtKnob_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_focusOutEvent
func miqt_exec_callback_QwtKnob_focusOutEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtKnob_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtKnob_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_enterEvent
func miqt_exec_callback_QwtKnob_enterEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtKnob_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtKnob_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_leaveEvent
func miqt_exec_callback_QwtKnob_leaveEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtKnob_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtKnob_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_moveEvent
func miqt_exec_callback_QwtKnob_moveEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtKnob_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtKnob_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_resizeEvent
func miqt_exec_callback_QwtKnob_resizeEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtKnob_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtKnob_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_closeEvent
func miqt_exec_callback_QwtKnob_closeEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtKnob_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtKnob_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_contextMenuEvent
func miqt_exec_callback_QwtKnob_contextMenuEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtKnob_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtKnob_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_tabletEvent
func miqt_exec_callback_QwtKnob_tabletEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtKnob_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtKnob_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_actionEvent
func miqt_exec_callback_QwtKnob_actionEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtKnob_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtKnob_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_dragEnterEvent
func miqt_exec_callback_QwtKnob_dragEnterEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtKnob_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtKnob_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_dragMoveEvent
func miqt_exec_callback_QwtKnob_dragMoveEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtKnob_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtKnob_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_dragLeaveEvent
func miqt_exec_callback_QwtKnob_dragLeaveEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtKnob_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtKnob_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_dropEvent
func miqt_exec_callback_QwtKnob_dropEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtKnob_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtKnob_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_showEvent
func miqt_exec_callback_QwtKnob_showEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtKnob_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtKnob_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_hideEvent
func miqt_exec_callback_QwtKnob_hideEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtKnob_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtKnob) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtKnob_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_nativeEvent
func miqt_exec_callback_QwtKnob_nativeEvent(self *C.QwtKnob, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtKnob_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtKnob) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtKnob_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_metric
func miqt_exec_callback_QwtKnob_metric(self *C.QwtKnob, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtKnob_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtKnob) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtKnob_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_initPainter
func miqt_exec_callback_QwtKnob_initPainter(self *C.QwtKnob, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtKnob{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtKnob) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtKnob_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtKnob) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtKnob_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_redirected
func miqt_exec_callback_QwtKnob_redirected(self *C.QwtKnob, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtKnob_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtKnob) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtKnob_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_sharedPainter
func miqt_exec_callback_QwtKnob_sharedPainter(self *C.QwtKnob, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtKnob_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtKnob) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtKnob_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_inputMethodEvent
func miqt_exec_callback_QwtKnob_inputMethodEvent(self *C.QwtKnob, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtKnob{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtKnob_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtKnob) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtKnob_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_inputMethodQuery
func miqt_exec_callback_QwtKnob_inputMethodQuery(self *C.QwtKnob, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtKnob) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtKnob_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtKnob) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtKnob_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_focusNextPrevChild
func miqt_exec_callback_QwtKnob_focusNextPrevChild(self *C.QwtKnob, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtKnob_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtKnob) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtKnob_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_eventFilter
func miqt_exec_callback_QwtKnob_eventFilter(self *C.QwtKnob, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtKnob{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtKnob) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtKnob_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtKnob_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_timerEvent
func miqt_exec_callback_QwtKnob_timerEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtKnob_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtKnob_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_childEvent
func miqt_exec_callback_QwtKnob_childEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtKnob_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtKnob) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtKnob_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_customEvent
func miqt_exec_callback_QwtKnob_customEvent(self *C.QwtKnob, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtKnob{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtKnob) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtKnob_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtKnob) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtKnob_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_connectNotify
func miqt_exec_callback_QwtKnob_connectNotify(self *C.QwtKnob, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtKnob{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtKnob) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtKnob_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtKnob) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtKnob_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtKnob_disconnectNotify
func miqt_exec_callback_QwtKnob_disconnectNotify(self *C.QwtKnob, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtKnob{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtKnob) Delete() {
	C.QwtKnob_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtKnob) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtKnob) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
