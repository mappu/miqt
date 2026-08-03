package qwt

/*

#include "gen_qwt_thermo.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtThermo__ScalePosition int

const (
	QwtThermo__NoScale       QwtThermo__ScalePosition = 0
	QwtThermo__LeadingScale  QwtThermo__ScalePosition = 1
	QwtThermo__TrailingScale QwtThermo__ScalePosition = 2
)

type QwtThermo__OriginMode int

const (
	QwtThermo__OriginMinimum QwtThermo__OriginMode = 0
	QwtThermo__OriginMaximum QwtThermo__OriginMode = 1
	QwtThermo__OriginCustom  QwtThermo__OriginMode = 2
)

type QwtThermo struct {
	h *C.QwtThermo
	*QwtAbstractScale
}

func (this *QwtThermo) cPointer() *C.QwtThermo {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtThermo) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtThermo constructs the type using only CGO pointers.
func newQwtThermo(h *C.QwtThermo) *QwtThermo {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractScale *C.QwtAbstractScale = nil
	C.QwtThermo_virtbase(h, &outptr_QwtAbstractScale)

	return &QwtThermo{h: h,
		QwtAbstractScale: newQwtAbstractScale(outptr_QwtAbstractScale)}
}

// UnsafeNewQwtThermo constructs the type using only unsafe pointers.
func UnsafeNewQwtThermo(h unsafe.Pointer) *QwtThermo {
	return newQwtThermo((*C.QwtThermo)(h))
}

// NewQwtThermo constructs a new QwtThermo object.
func NewQwtThermo(parent *qt.QWidget) *QwtThermo {

	return newQwtThermo(C.QwtThermo_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtThermo2 constructs a new QwtThermo object.
func NewQwtThermo2() *QwtThermo {

	return newQwtThermo(C.QwtThermo_new2())
}

func (this *QwtThermo) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtThermo_metaObject(this.h)))
}

func (this *QwtThermo) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtThermo_metacast(this.h, param1_Cstring))
}

func QwtThermo_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtThermo_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtThermo) SetOrientation(orientation qt.Orientation) {
	C.QwtThermo_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtThermo) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtThermo_orientation(this.h))
}

func (this *QwtThermo) SetScalePosition(scalePosition QwtThermo__ScalePosition) {
	C.QwtThermo_setScalePosition(this.h, (C.int)(scalePosition))
}

func (this *QwtThermo) ScalePosition() QwtThermo__ScalePosition {
	return (QwtThermo__ScalePosition)(C.QwtThermo_scalePosition(this.h))
}

func (this *QwtThermo) SetSpacing(spacing int) {
	C.QwtThermo_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtThermo) Spacing() int {
	return (int)(C.QwtThermo_spacing(this.h))
}

func (this *QwtThermo) SetBorderWidth(borderWidth int) {
	C.QwtThermo_setBorderWidth(this.h, (C.int)(borderWidth))
}

func (this *QwtThermo) BorderWidth() int {
	return (int)(C.QwtThermo_borderWidth(this.h))
}

func (this *QwtThermo) SetOriginMode(originMode QwtThermo__OriginMode) {
	C.QwtThermo_setOriginMode(this.h, (C.int)(originMode))
}

func (this *QwtThermo) OriginMode() QwtThermo__OriginMode {
	return (QwtThermo__OriginMode)(C.QwtThermo_originMode(this.h))
}

func (this *QwtThermo) SetOrigin(origin float64) {
	C.QwtThermo_setOrigin(this.h, (C.double)(origin))
}

func (this *QwtThermo) Origin() float64 {
	return (float64)(C.QwtThermo_origin(this.h))
}

func (this *QwtThermo) SetFillBrush(fillBrush *qt.QBrush) {
	C.QwtThermo_setFillBrush(this.h, (*C.QBrush)(fillBrush.UnsafePointer()))
}

func (this *QwtThermo) FillBrush() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtThermo_fillBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtThermo) SetAlarmBrush(alarmBrush *qt.QBrush) {
	C.QwtThermo_setAlarmBrush(this.h, (*C.QBrush)(alarmBrush.UnsafePointer()))
}

func (this *QwtThermo) AlarmBrush() *qt.QBrush {
	_goptr := qt.UnsafeNewQBrush(unsafe.Pointer(C.QwtThermo_alarmBrush(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtThermo) SetAlarmLevel(alarmLevel float64) {
	C.QwtThermo_setAlarmLevel(this.h, (C.double)(alarmLevel))
}

func (this *QwtThermo) AlarmLevel() float64 {
	return (float64)(C.QwtThermo_alarmLevel(this.h))
}

func (this *QwtThermo) SetAlarmEnabled(alarmEnabled bool) {
	C.QwtThermo_setAlarmEnabled(this.h, (C.bool)(alarmEnabled))
}

func (this *QwtThermo) AlarmEnabled() bool {
	return (bool)(C.QwtThermo_alarmEnabled(this.h))
}

func (this *QwtThermo) SetColorMap(colorMap *QwtColorMap) {
	C.QwtThermo_setColorMap(this.h, colorMap.cPointer())
}

func (this *QwtThermo) ColorMap() *QwtColorMap {
	return newQwtColorMap(C.QwtThermo_colorMap(this.h))
}

func (this *QwtThermo) ColorMap2() *QwtColorMap {
	return newQwtColorMap(C.QwtThermo_colorMap2(this.h))
}

func (this *QwtThermo) SetPipeWidth(pipeWidth int) {
	C.QwtThermo_setPipeWidth(this.h, (C.int)(pipeWidth))
}

func (this *QwtThermo) PipeWidth() int {
	return (int)(C.QwtThermo_pipeWidth(this.h))
}

func (this *QwtThermo) SetRangeFlags(rangeFlags QwtInterval__BorderFlag) {
	C.QwtThermo_setRangeFlags(this.h, (C.int)(rangeFlags))
}

func (this *QwtThermo) RangeFlags() QwtInterval__BorderFlag {
	return (QwtInterval__BorderFlag)(C.QwtThermo_rangeFlags(this.h))
}

func (this *QwtThermo) Value() float64 {
	return (float64)(C.QwtThermo_value(this.h))
}

func (this *QwtThermo) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtThermo_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtThermo) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtThermo_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtThermo) SetScaleDraw(scaleDraw *QwtScaleDraw) {
	C.QwtThermo_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtThermo) ScaleDraw() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtThermo_scaleDraw(this.h))
}

func (this *QwtThermo) SetValue(value float64) {
	C.QwtThermo_setValue(this.h, (C.double)(value))
}

func QwtThermo_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtThermo_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtThermo_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtThermo_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtThermo_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// ScaleDraw2 can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) ScaleDraw2() *QwtScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtScaleDraw(C.QwtThermo_protectedbase_scaleDraw2(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// PipeRect can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) PipeRect() qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtThermo_protectedbase_pipeRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FillRect can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) FillRect(param1 *qt.QRect) qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtThermo_protectedbase_fillRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AlarmRect can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) AlarmRect(param1 *qt.QRect) qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtThermo_protectedbase_alarmRect(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QRect)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtThermo_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtThermo_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtThermo_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtThermo_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtThermo_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtThermo_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtThermo_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtThermo_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtThermo_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtThermo_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtThermo_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtThermo that was directly constructed.
func (this *QwtThermo) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtThermo_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtThermo) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtThermo_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtThermo) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtThermo_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_sizeHint
func miqt_exec_callback_QwtThermo_sizeHint(self *C.QwtThermo, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtThermo_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtThermo) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtThermo_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_minimumSizeHint
func miqt_exec_callback_QwtThermo_minimumSizeHint(self *C.QwtThermo, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_SetValue(value float64) {

	C.QwtThermo_virtualbase_setValue(unsafe.Pointer(this.h), (C.double)(value))

}
func (this *QwtThermo) OnSetValue(slot func(super func(value float64), value float64)) {
	ok := C.QwtThermo_override_virtual_setValue(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_setValue
func miqt_exec_callback_QwtThermo_setValue(self *C.QwtThermo, cb C.intptr_t, value C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(value float64), value float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(value)

	gofunc((&QwtThermo{h: self}).callVirtualBase_SetValue, slotval1)

}

func (this *QwtThermo) callVirtualBase_DrawLiquid(param1 *qt.QPainter, param2 *qt.QRect) {

	C.QwtThermo_virtualbase_drawLiquid(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRect)(param2.UnsafePointer()))

}
func (this *QwtThermo) OnDrawLiquid(slot func(super func(param1 *qt.QPainter, param2 *qt.QRect), param1 *qt.QPainter, param2 *qt.QRect)) {
	ok := C.QwtThermo_override_virtual_drawLiquid(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_drawLiquid
func miqt_exec_callback_QwtThermo_drawLiquid(self *C.QwtThermo, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRect), param1 *qt.QPainter, param2 *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRect(unsafe.Pointer(param2))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DrawLiquid, slotval1, slotval2)

}

func (this *QwtThermo) callVirtualBase_ScaleChange() {

	C.QwtThermo_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtThermo) OnScaleChange(slot func(super func())) {
	ok := C.QwtThermo_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_scaleChange
func miqt_exec_callback_QwtThermo_scaleChange(self *C.QwtThermo, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtThermo{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtThermo) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtThermo_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtThermo) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtThermo_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_paintEvent
func miqt_exec_callback_QwtThermo_paintEvent(self *C.QwtThermo, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtThermo{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QwtThermo_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtThermo) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtThermo_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_resizeEvent
func miqt_exec_callback_QwtThermo_resizeEvent(self *C.QwtThermo, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtThermo_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtThermo) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtThermo_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_changeEvent
func miqt_exec_callback_QwtThermo_changeEvent(self *C.QwtThermo, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_DevType() int {

	return (int)(C.QwtThermo_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtThermo) OnDevType(slot func(super func() int) int) {
	ok := C.QwtThermo_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_devType
func miqt_exec_callback_QwtThermo_devType(self *C.QwtThermo, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_SetVisible(visible bool) {

	C.QwtThermo_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtThermo) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtThermo_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_setVisible
func miqt_exec_callback_QwtThermo_setVisible(self *C.QwtThermo, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtThermo{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtThermo) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtThermo_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtThermo) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtThermo_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_heightForWidth
func miqt_exec_callback_QwtThermo_heightForWidth(self *C.QwtThermo, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtThermo_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtThermo) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtThermo_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_hasHeightForWidth
func miqt_exec_callback_QwtThermo_hasHeightForWidth(self *C.QwtThermo, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtThermo_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtThermo) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtThermo_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_paintEngine
func miqt_exec_callback_QwtThermo_paintEngine(self *C.QwtThermo, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtThermo_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtThermo) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtThermo_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_event
func miqt_exec_callback_QwtThermo_event(self *C.QwtThermo, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_MousePressEvent(event *qt.QMouseEvent) {

	C.QwtThermo_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnMousePressEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtThermo_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_mousePressEvent
func miqt_exec_callback_QwtThermo_mousePressEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_MouseReleaseEvent(event *qt.QMouseEvent) {

	C.QwtThermo_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnMouseReleaseEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtThermo_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_mouseReleaseEvent
func miqt_exec_callback_QwtThermo_mouseReleaseEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtThermo_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtThermo_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_mouseDoubleClickEvent
func miqt_exec_callback_QwtThermo_mouseDoubleClickEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_MouseMoveEvent(event *qt.QMouseEvent) {

	C.QwtThermo_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnMouseMoveEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtThermo_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_mouseMoveEvent
func miqt_exec_callback_QwtThermo_mouseMoveEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_WheelEvent(event *qt.QWheelEvent) {

	C.QwtThermo_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnWheelEvent(slot func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent)) {
	ok := C.QwtThermo_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_wheelEvent
func miqt_exec_callback_QwtThermo_wheelEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QWheelEvent), event *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QwtThermo_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtThermo_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_keyPressEvent
func miqt_exec_callback_QwtThermo_keyPressEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtThermo_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtThermo_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_keyReleaseEvent
func miqt_exec_callback_QwtThermo_keyReleaseEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtThermo_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtThermo_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_focusInEvent
func miqt_exec_callback_QwtThermo_focusInEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtThermo_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtThermo_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_focusOutEvent
func miqt_exec_callback_QwtThermo_focusOutEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtThermo_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtThermo_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_enterEvent
func miqt_exec_callback_QwtThermo_enterEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtThermo_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtThermo_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_leaveEvent
func miqt_exec_callback_QwtThermo_leaveEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtThermo_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtThermo_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_moveEvent
func miqt_exec_callback_QwtThermo_moveEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtThermo_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtThermo_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_closeEvent
func miqt_exec_callback_QwtThermo_closeEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtThermo_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtThermo_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_contextMenuEvent
func miqt_exec_callback_QwtThermo_contextMenuEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtThermo_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtThermo_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_tabletEvent
func miqt_exec_callback_QwtThermo_tabletEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtThermo_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtThermo_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_actionEvent
func miqt_exec_callback_QwtThermo_actionEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtThermo_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtThermo_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_dragEnterEvent
func miqt_exec_callback_QwtThermo_dragEnterEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtThermo_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtThermo_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_dragMoveEvent
func miqt_exec_callback_QwtThermo_dragMoveEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtThermo_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtThermo_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_dragLeaveEvent
func miqt_exec_callback_QwtThermo_dragLeaveEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtThermo_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtThermo_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_dropEvent
func miqt_exec_callback_QwtThermo_dropEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtThermo_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtThermo_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_showEvent
func miqt_exec_callback_QwtThermo_showEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtThermo_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtThermo_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_hideEvent
func miqt_exec_callback_QwtThermo_hideEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtThermo_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtThermo) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtThermo_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_nativeEvent
func miqt_exec_callback_QwtThermo_nativeEvent(self *C.QwtThermo, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtThermo_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtThermo) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtThermo_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_metric
func miqt_exec_callback_QwtThermo_metric(self *C.QwtThermo, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtThermo_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtThermo) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtThermo_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_initPainter
func miqt_exec_callback_QwtThermo_initPainter(self *C.QwtThermo, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtThermo{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtThermo) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtThermo_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtThermo) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtThermo_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_redirected
func miqt_exec_callback_QwtThermo_redirected(self *C.QwtThermo, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtThermo_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtThermo) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtThermo_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_sharedPainter
func miqt_exec_callback_QwtThermo_sharedPainter(self *C.QwtThermo, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtThermo_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtThermo) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtThermo_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_inputMethodEvent
func miqt_exec_callback_QwtThermo_inputMethodEvent(self *C.QwtThermo, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtThermo{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtThermo_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtThermo) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtThermo_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_inputMethodQuery
func miqt_exec_callback_QwtThermo_inputMethodQuery(self *C.QwtThermo, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtThermo) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtThermo_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtThermo) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtThermo_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_focusNextPrevChild
func miqt_exec_callback_QwtThermo_focusNextPrevChild(self *C.QwtThermo, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtThermo_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtThermo) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtThermo_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_eventFilter
func miqt_exec_callback_QwtThermo_eventFilter(self *C.QwtThermo, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtThermo{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtThermo) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtThermo_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtThermo_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_timerEvent
func miqt_exec_callback_QwtThermo_timerEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtThermo_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtThermo_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_childEvent
func miqt_exec_callback_QwtThermo_childEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtThermo_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtThermo) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtThermo_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_customEvent
func miqt_exec_callback_QwtThermo_customEvent(self *C.QwtThermo, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtThermo{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtThermo) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtThermo_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtThermo) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtThermo_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_connectNotify
func miqt_exec_callback_QwtThermo_connectNotify(self *C.QwtThermo, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtThermo{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtThermo) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtThermo_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtThermo) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtThermo_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtThermo_disconnectNotify
func miqt_exec_callback_QwtThermo_disconnectNotify(self *C.QwtThermo, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtThermo{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtThermo) Delete() {
	C.QwtThermo_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtThermo) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtThermo) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
