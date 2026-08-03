package qwt

/*

#include "gen_qwt_analog_clock.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtAnalogClock__Hand int

const (
	QwtAnalogClock__SecondHand QwtAnalogClock__Hand = 0
	QwtAnalogClock__MinuteHand QwtAnalogClock__Hand = 1
	QwtAnalogClock__HourHand   QwtAnalogClock__Hand = 2
	QwtAnalogClock__NHands     QwtAnalogClock__Hand = 3
)

type QwtAnalogClock struct {
	h *C.QwtAnalogClock
	*QwtDial
}

func (this *QwtAnalogClock) cPointer() *C.QwtAnalogClock {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtAnalogClock) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtAnalogClock constructs the type using only CGO pointers.
func newQwtAnalogClock(h *C.QwtAnalogClock) *QwtAnalogClock {
	if h == nil {
		return nil
	}
	var outptr_QwtDial *C.QwtDial = nil
	C.QwtAnalogClock_virtbase(h, &outptr_QwtDial)

	return &QwtAnalogClock{h: h,
		QwtDial: newQwtDial(outptr_QwtDial)}
}

// UnsafeNewQwtAnalogClock constructs the type using only unsafe pointers.
func UnsafeNewQwtAnalogClock(h unsafe.Pointer) *QwtAnalogClock {
	return newQwtAnalogClock((*C.QwtAnalogClock)(h))
}

// NewQwtAnalogClock constructs a new QwtAnalogClock object.
func NewQwtAnalogClock(parent *qt.QWidget) *QwtAnalogClock {

	return newQwtAnalogClock(C.QwtAnalogClock_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtAnalogClock2 constructs a new QwtAnalogClock object.
func NewQwtAnalogClock2() *QwtAnalogClock {

	return newQwtAnalogClock(C.QwtAnalogClock_new2())
}

func (this *QwtAnalogClock) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtAnalogClock_metaObject(this.h)))
}

func (this *QwtAnalogClock) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtAnalogClock_metacast(this.h, param1_Cstring))
}

func QwtAnalogClock_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAnalogClock_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtAnalogClock) SetHand(param1 QwtAnalogClock__Hand, param2 *QwtDialNeedle) {
	C.QwtAnalogClock_setHand(this.h, (C.int)(param1), param2.cPointer())
}

func (this *QwtAnalogClock) Hand(param1 QwtAnalogClock__Hand) *QwtDialNeedle {
	return newQwtDialNeedle(C.QwtAnalogClock_hand(this.h, (C.int)(param1)))
}

func (this *QwtAnalogClock) HandWithQwtAnalogClockHand(param1 QwtAnalogClock__Hand) *QwtDialNeedle {
	return newQwtDialNeedle(C.QwtAnalogClock_handWithQwtAnalogClockHand(this.h, (C.int)(param1)))
}

func (this *QwtAnalogClock) SetCurrentTime() {
	C.QwtAnalogClock_setCurrentTime(this.h)
}

func (this *QwtAnalogClock) SetTime(time *qt.QTime) {
	C.QwtAnalogClock_setTime(this.h, (*C.QTime)(time.UnsafePointer()))
}

func QwtAnalogClock_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAnalogClock_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAnalogClock_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtAnalogClock_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtAnalogClock_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// InvalidateCache can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) InvalidateCache() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_invalidateCache(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementValue can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtAnalogClock_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtAnalogClock_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtAnalogClock_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAnalogClock_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAnalogClock_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtAnalogClock_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAnalogClock_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtAnalogClock_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtAnalogClock that was directly constructed.
func (this *QwtAnalogClock) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtAnalogClock_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtAnalogClock) callVirtualBase_DrawNeedle(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup) {

	C.QwtAnalogClock_virtualbase_drawNeedle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(param2.UnsafePointer()), (C.double)(radius), (C.double)(direction), (C.int)(param5))

}
func (this *QwtAnalogClock) OnDrawNeedle(slot func(super func(param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 *qt.QPointF, radius float64, direction float64, param5 qt.QPalette__ColorGroup)) {
	ok := C.QwtAnalogClock_override_virtual_drawNeedle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawNeedle
func miqt_exec_callback_QwtAnalogClock_drawNeedle(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter, param2 *C.QPointF, radius C.double, direction C.double, param5 C.int) {
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

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawNeedle, slotval1, slotval2, slotval3, slotval4, slotval5)

}

func (this *QwtAnalogClock) callVirtualBase_DrawHand(param1 *qt.QPainter, param2 QwtAnalogClock__Hand, param3 *qt.QPointF, radius float64, direction float64, param6 qt.QPalette__ColorGroup) {

	C.QwtAnalogClock_virtualbase_drawHand(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (C.int)(param2), (*C.QPointF)(param3.UnsafePointer()), (C.double)(radius), (C.double)(direction), (C.int)(param6))

}
func (this *QwtAnalogClock) OnDrawHand(slot func(super func(param1 *qt.QPainter, param2 QwtAnalogClock__Hand, param3 *qt.QPointF, radius float64, direction float64, param6 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 QwtAnalogClock__Hand, param3 *qt.QPointF, radius float64, direction float64, param6 qt.QPalette__ColorGroup)) {
	ok := C.QwtAnalogClock_override_virtual_drawHand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawHand
func miqt_exec_callback_QwtAnalogClock_drawHand(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter, param2 C.int, param3 *C.QPointF, radius C.double, direction C.double, param6 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 QwtAnalogClock__Hand, param3 *qt.QPointF, radius float64, direction float64, param6 qt.QPalette__ColorGroup), param1 *qt.QPainter, param2 QwtAnalogClock__Hand, param3 *qt.QPointF, radius float64, direction float64, param6 qt.QPalette__ColorGroup))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := (QwtAnalogClock__Hand)(param2)

	slotval3 := qt.UnsafeNewQPointF(unsafe.Pointer(param3))

	slotval4 := (float64)(radius)

	slotval5 := (float64)(direction)

	slotval6 := (qt.QPalette__ColorGroup)(param6)

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawHand, slotval1, slotval2, slotval3, slotval4, slotval5, slotval6)

}

func (this *QwtAnalogClock) callVirtualBase_SetOrigin(origin float64) {

	C.QwtAnalogClock_virtualbase_setOrigin(unsafe.Pointer(this.h), (C.double)(origin))

}
func (this *QwtAnalogClock) OnSetOrigin(slot func(super func(origin float64), origin float64)) {
	ok := C.QwtAnalogClock_override_virtual_setOrigin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_setOrigin
func miqt_exec_callback_QwtAnalogClock_setOrigin(self *C.QwtAnalogClock, cb C.intptr_t, origin C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(origin float64), origin float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(origin)

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_SetOrigin, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ScaleInnerRect() *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtAnalogClock_virtualbase_scaleInnerRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAnalogClock) OnScaleInnerRect(slot func(super func() *qt.QRect) *qt.QRect) {
	ok := C.QwtAnalogClock_override_virtual_scaleInnerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_scaleInnerRect
func miqt_exec_callback_QwtAnalogClock_scaleInnerRect(self *C.QwtAnalogClock, cb C.intptr_t) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRect) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ScaleInnerRect)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAnalogClock_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAnalogClock) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAnalogClock_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_sizeHint
func miqt_exec_callback_QwtAnalogClock_sizeHint(self *C.QwtAnalogClock, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtAnalogClock_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAnalogClock) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtAnalogClock_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_minimumSizeHint
func miqt_exec_callback_QwtAnalogClock_minimumSizeHint(self *C.QwtAnalogClock, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtAnalogClock_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtAnalogClock_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_wheelEvent
func miqt_exec_callback_QwtAnalogClock_wheelEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtAnalogClock_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtAnalogClock_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_paintEvent
func miqt_exec_callback_QwtAnalogClock_paintEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtAnalogClock_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtAnalogClock_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_changeEvent
func miqt_exec_callback_QwtAnalogClock_changeEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DrawFrame(param1 *qt.QPainter) {

	C.QwtAnalogClock_virtualbase_drawFrame(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDrawFrame(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtAnalogClock_override_virtual_drawFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawFrame
func miqt_exec_callback_QwtAnalogClock_drawFrame(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawFrame, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DrawContents(param1 *qt.QPainter) {

	C.QwtAnalogClock_virtualbase_drawContents(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDrawContents(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtAnalogClock_override_virtual_drawContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawContents
func miqt_exec_callback_QwtAnalogClock_drawContents(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawContents, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DrawFocusIndicator(param1 *qt.QPainter) {

	C.QwtAnalogClock_virtualbase_drawFocusIndicator(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDrawFocusIndicator(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtAnalogClock_override_virtual_drawFocusIndicator(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawFocusIndicator
func miqt_exec_callback_QwtAnalogClock_drawFocusIndicator(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawFocusIndicator, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DrawScale(param1 *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtAnalogClock_virtualbase_drawScale(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtAnalogClock) OnDrawScale(slot func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtAnalogClock_override_virtual_drawScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawScale
func miqt_exec_callback_QwtAnalogClock_drawScale(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, center *qt.QPointF, radius float64), param1 *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawScale, slotval1, slotval2, slotval3)

}

func (this *QwtAnalogClock) callVirtualBase_DrawScaleContents(painter *qt.QPainter, center *qt.QPointF, radius float64) {

	C.QwtAnalogClock_virtualbase_drawScaleContents(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QPointF)(center.UnsafePointer()), (C.double)(radius))

}
func (this *QwtAnalogClock) OnDrawScaleContents(slot func(super func(painter *qt.QPainter, center *qt.QPointF, radius float64), painter *qt.QPainter, center *qt.QPointF, radius float64)) {
	ok := C.QwtAnalogClock_override_virtual_drawScaleContents(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_drawScaleContents
func miqt_exec_callback_QwtAnalogClock_drawScaleContents(self *C.QwtAnalogClock, cb C.intptr_t, painter *C.QPainter, center *C.QPointF, radius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, center *qt.QPointF, radius float64), painter *qt.QPainter, center *qt.QPointF, radius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQPointF(unsafe.Pointer(center))

	slotval3 := (float64)(radius)

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DrawScaleContents, slotval1, slotval2, slotval3)

}

func (this *QwtAnalogClock) callVirtualBase_ScrolledTo(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtAnalogClock_virtualbase_scrolledTo(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtAnalogClock) OnScrolledTo(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtAnalogClock_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_scrolledTo
func miqt_exec_callback_QwtAnalogClock_scrolledTo(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ScrolledTo, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_IsScrollPosition(param1 *qt.QPoint) bool {

	return (bool)(C.QwtAnalogClock_virtualbase_isScrollPosition(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtAnalogClock) OnIsScrollPosition(slot func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool) {
	ok := C.QwtAnalogClock_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_isScrollPosition
func miqt_exec_callback_QwtAnalogClock_isScrollPosition(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_IsScrollPosition, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_SliderChange() {

	C.QwtAnalogClock_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtAnalogClock) OnSliderChange(slot func(super func())) {
	ok := C.QwtAnalogClock_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_sliderChange
func miqt_exec_callback_QwtAnalogClock_sliderChange(self *C.QwtAnalogClock, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtAnalogClock) callVirtualBase_ScaleChange() {

	C.QwtAnalogClock_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtAnalogClock) OnScaleChange(slot func(super func())) {
	ok := C.QwtAnalogClock_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_scaleChange
func miqt_exec_callback_QwtAnalogClock_scaleChange(self *C.QwtAnalogClock, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtAnalogClock) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtAnalogClock_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAnalogClock_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_mousePressEvent
func miqt_exec_callback_QwtAnalogClock_mousePressEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtAnalogClock_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAnalogClock_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_mouseReleaseEvent
func miqt_exec_callback_QwtAnalogClock_mouseReleaseEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtAnalogClock_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtAnalogClock_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_mouseMoveEvent
func miqt_exec_callback_QwtAnalogClock_mouseMoveEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtAnalogClock_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtAnalogClock_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_keyPressEvent
func miqt_exec_callback_QwtAnalogClock_keyPressEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DevType() int {

	return (int)(C.QwtAnalogClock_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtAnalogClock) OnDevType(slot func(super func() int) int) {
	ok := C.QwtAnalogClock_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_devType
func miqt_exec_callback_QwtAnalogClock_devType(self *C.QwtAnalogClock, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_SetVisible(visible bool) {

	C.QwtAnalogClock_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtAnalogClock) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtAnalogClock_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_setVisible
func miqt_exec_callback_QwtAnalogClock_setVisible(self *C.QwtAnalogClock, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtAnalogClock_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAnalogClock) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtAnalogClock_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_heightForWidth
func miqt_exec_callback_QwtAnalogClock_heightForWidth(self *C.QwtAnalogClock, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtAnalogClock_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtAnalogClock) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtAnalogClock_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_hasHeightForWidth
func miqt_exec_callback_QwtAnalogClock_hasHeightForWidth(self *C.QwtAnalogClock, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtAnalogClock_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtAnalogClock) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtAnalogClock_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_paintEngine
func miqt_exec_callback_QwtAnalogClock_paintEngine(self *C.QwtAnalogClock, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtAnalogClock_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtAnalogClock) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtAnalogClock_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_event
func miqt_exec_callback_QwtAnalogClock_event(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtAnalogClock_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtAnalogClock_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_mouseDoubleClickEvent
func miqt_exec_callback_QwtAnalogClock_mouseDoubleClickEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtAnalogClock_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtAnalogClock_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_keyReleaseEvent
func miqt_exec_callback_QwtAnalogClock_keyReleaseEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtAnalogClock_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAnalogClock_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_focusInEvent
func miqt_exec_callback_QwtAnalogClock_focusInEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtAnalogClock_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtAnalogClock_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_focusOutEvent
func miqt_exec_callback_QwtAnalogClock_focusOutEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtAnalogClock_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAnalogClock_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_enterEvent
func miqt_exec_callback_QwtAnalogClock_enterEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtAnalogClock_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAnalogClock_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_leaveEvent
func miqt_exec_callback_QwtAnalogClock_leaveEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtAnalogClock_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtAnalogClock_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_moveEvent
func miqt_exec_callback_QwtAnalogClock_moveEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ResizeEvent(event *qt.QResizeEvent) {

	C.QwtAnalogClock_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnResizeEvent(slot func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent)) {
	ok := C.QwtAnalogClock_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_resizeEvent
func miqt_exec_callback_QwtAnalogClock_resizeEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QResizeEvent), event *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtAnalogClock_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtAnalogClock_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_closeEvent
func miqt_exec_callback_QwtAnalogClock_closeEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtAnalogClock_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtAnalogClock_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_contextMenuEvent
func miqt_exec_callback_QwtAnalogClock_contextMenuEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtAnalogClock_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtAnalogClock_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_tabletEvent
func miqt_exec_callback_QwtAnalogClock_tabletEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtAnalogClock_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtAnalogClock_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_actionEvent
func miqt_exec_callback_QwtAnalogClock_actionEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtAnalogClock_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtAnalogClock_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_dragEnterEvent
func miqt_exec_callback_QwtAnalogClock_dragEnterEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtAnalogClock_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtAnalogClock_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_dragMoveEvent
func miqt_exec_callback_QwtAnalogClock_dragMoveEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtAnalogClock_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtAnalogClock_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_dragLeaveEvent
func miqt_exec_callback_QwtAnalogClock_dragLeaveEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtAnalogClock_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtAnalogClock_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_dropEvent
func miqt_exec_callback_QwtAnalogClock_dropEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtAnalogClock_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtAnalogClock_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_showEvent
func miqt_exec_callback_QwtAnalogClock_showEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtAnalogClock_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtAnalogClock_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_hideEvent
func miqt_exec_callback_QwtAnalogClock_hideEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtAnalogClock_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtAnalogClock) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtAnalogClock_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_nativeEvent
func miqt_exec_callback_QwtAnalogClock_nativeEvent(self *C.QwtAnalogClock, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtAnalogClock_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtAnalogClock) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtAnalogClock_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_metric
func miqt_exec_callback_QwtAnalogClock_metric(self *C.QwtAnalogClock, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtAnalogClock_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtAnalogClock) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtAnalogClock_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_initPainter
func miqt_exec_callback_QwtAnalogClock_initPainter(self *C.QwtAnalogClock, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtAnalogClock_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtAnalogClock) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtAnalogClock_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_redirected
func miqt_exec_callback_QwtAnalogClock_redirected(self *C.QwtAnalogClock, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtAnalogClock_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtAnalogClock) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtAnalogClock_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_sharedPainter
func miqt_exec_callback_QwtAnalogClock_sharedPainter(self *C.QwtAnalogClock, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtAnalogClock_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtAnalogClock) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtAnalogClock_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_inputMethodEvent
func miqt_exec_callback_QwtAnalogClock_inputMethodEvent(self *C.QwtAnalogClock, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtAnalogClock_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtAnalogClock) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtAnalogClock_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_inputMethodQuery
func miqt_exec_callback_QwtAnalogClock_inputMethodQuery(self *C.QwtAnalogClock, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtAnalogClock) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtAnalogClock_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtAnalogClock) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtAnalogClock_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_focusNextPrevChild
func miqt_exec_callback_QwtAnalogClock_focusNextPrevChild(self *C.QwtAnalogClock, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtAnalogClock_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtAnalogClock) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtAnalogClock_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_eventFilter
func miqt_exec_callback_QwtAnalogClock_eventFilter(self *C.QwtAnalogClock, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtAnalogClock{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtAnalogClock) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtAnalogClock_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtAnalogClock_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_timerEvent
func miqt_exec_callback_QwtAnalogClock_timerEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtAnalogClock_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtAnalogClock_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_childEvent
func miqt_exec_callback_QwtAnalogClock_childEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtAnalogClock_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtAnalogClock) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtAnalogClock_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_customEvent
func miqt_exec_callback_QwtAnalogClock_customEvent(self *C.QwtAnalogClock, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtAnalogClock_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAnalogClock) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAnalogClock_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_connectNotify
func miqt_exec_callback_QwtAnalogClock_connectNotify(self *C.QwtAnalogClock, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtAnalogClock) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtAnalogClock_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtAnalogClock) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtAnalogClock_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtAnalogClock_disconnectNotify
func miqt_exec_callback_QwtAnalogClock_disconnectNotify(self *C.QwtAnalogClock, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtAnalogClock{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtAnalogClock) Delete() {
	C.QwtAnalogClock_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtAnalogClock) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtAnalogClock) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
