package qwt

/*

#include "gen_qwt_slider.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtSlider__ScalePosition int

const (
	QwtSlider__NoScale       QwtSlider__ScalePosition = 0
	QwtSlider__LeadingScale  QwtSlider__ScalePosition = 1
	QwtSlider__TrailingScale QwtSlider__ScalePosition = 2
)

type QwtSlider struct {
	h *C.QwtSlider
	*QwtAbstractSlider
}

func (this *QwtSlider) cPointer() *C.QwtSlider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtSlider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtSlider constructs the type using only CGO pointers.
func newQwtSlider(h *C.QwtSlider) *QwtSlider {
	if h == nil {
		return nil
	}
	var outptr_QwtAbstractSlider *C.QwtAbstractSlider = nil
	C.QwtSlider_virtbase(h, &outptr_QwtAbstractSlider)

	return &QwtSlider{h: h,
		QwtAbstractSlider: newQwtAbstractSlider(outptr_QwtAbstractSlider)}
}

// UnsafeNewQwtSlider constructs the type using only unsafe pointers.
func UnsafeNewQwtSlider(h unsafe.Pointer) *QwtSlider {
	return newQwtSlider((*C.QwtSlider)(h))
}

// NewQwtSlider constructs a new QwtSlider object.
func NewQwtSlider(parent *qt.QWidget) *QwtSlider {

	return newQwtSlider(C.QwtSlider_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtSlider2 constructs a new QwtSlider object.
func NewQwtSlider2() *QwtSlider {

	return newQwtSlider(C.QwtSlider_new2())
}

// NewQwtSlider3 constructs a new QwtSlider object.
func NewQwtSlider3(param1 qt.Orientation) *QwtSlider {

	return newQwtSlider(C.QwtSlider_new3((C.int)(param1)))
}

// NewQwtSlider4 constructs a new QwtSlider object.
func NewQwtSlider4(param1 qt.Orientation, parent *qt.QWidget) *QwtSlider {

	return newQwtSlider(C.QwtSlider_new4((C.int)(param1), (*C.QWidget)(parent.UnsafePointer())))
}

func (this *QwtSlider) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtSlider_metaObject(this.h)))
}

func (this *QwtSlider) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtSlider_metacast(this.h, param1_Cstring))
}

func QwtSlider_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSlider_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtSlider) SetOrientation(orientation qt.Orientation) {
	C.QwtSlider_setOrientation(this.h, (C.int)(orientation))
}

func (this *QwtSlider) Orientation() qt.Orientation {
	return (qt.Orientation)(C.QwtSlider_orientation(this.h))
}

func (this *QwtSlider) SetScalePosition(scalePosition QwtSlider__ScalePosition) {
	C.QwtSlider_setScalePosition(this.h, (C.int)(scalePosition))
}

func (this *QwtSlider) ScalePosition() QwtSlider__ScalePosition {
	return (QwtSlider__ScalePosition)(C.QwtSlider_scalePosition(this.h))
}

func (this *QwtSlider) SetTrough(trough bool) {
	C.QwtSlider_setTrough(this.h, (C.bool)(trough))
}

func (this *QwtSlider) HasTrough() bool {
	return (bool)(C.QwtSlider_hasTrough(this.h))
}

func (this *QwtSlider) SetGroove(groove bool) {
	C.QwtSlider_setGroove(this.h, (C.bool)(groove))
}

func (this *QwtSlider) HasGroove() bool {
	return (bool)(C.QwtSlider_hasGroove(this.h))
}

func (this *QwtSlider) SetHandleSize(handleSize *qt.QSize) {
	C.QwtSlider_setHandleSize(this.h, (*C.QSize)(handleSize.UnsafePointer()))
}

func (this *QwtSlider) HandleSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSlider_handleSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSlider) SetBorderWidth(borderWidth int) {
	C.QwtSlider_setBorderWidth(this.h, (C.int)(borderWidth))
}

func (this *QwtSlider) BorderWidth() int {
	return (int)(C.QwtSlider_borderWidth(this.h))
}

func (this *QwtSlider) SetSpacing(spacing int) {
	C.QwtSlider_setSpacing(this.h, (C.int)(spacing))
}

func (this *QwtSlider) Spacing() int {
	return (int)(C.QwtSlider_spacing(this.h))
}

func (this *QwtSlider) SizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSlider_sizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSlider) MinimumSizeHint() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSlider_minimumSizeHint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtSlider) SetScaleDraw(scaleDraw *QwtScaleDraw) {
	C.QwtSlider_setScaleDraw(this.h, scaleDraw.cPointer())
}

func (this *QwtSlider) ScaleDraw() *QwtScaleDraw {
	return newQwtScaleDraw(C.QwtSlider_scaleDraw(this.h))
}

func (this *QwtSlider) SetUpdateInterval(updateInterval int) {
	C.QwtSlider_setUpdateInterval(this.h, (C.int)(updateInterval))
}

func (this *QwtSlider) UpdateInterval() int {
	return (int)(C.QwtSlider_updateInterval(this.h))
}

func QwtSlider_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSlider_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSlider_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtSlider_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtSlider_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SliderRect can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) SliderRect() qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtSlider_protectedbase_sliderRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// HandleRect can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) HandleRect() qt.QRect {

	var _dynamic_cast_ok C.bool = false
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtSlider_protectedbase_handleRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IncrementValue can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) IncrementValue(stepCount int) {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_incrementValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(stepCount))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// IncrementedValue can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) IncrementedValue(value float64, stepCount int) float64 {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (float64)(C.QwtSlider_protectedbase_incrementedValue(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(value), (C.int)(stepCount)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Rescale can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) Rescale(lowerBound float64, upperBound float64, stepSize float64) {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_rescale(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.double)(lowerBound), (C.double)(upperBound), (C.double)(stepSize))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SetAbstractScaleDraw can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) SetAbstractScaleDraw(abstractScaleDraw *QwtAbstractScaleDraw) {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_setAbstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h), abstractScaleDraw.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// AbstractScaleDraw can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) AbstractScaleDraw() *QwtAbstractScaleDraw {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtAbstractScaleDraw(C.QwtSlider_protectedbase_abstractScaleDraw(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// UpdateMicroFocus can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QwtSlider_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtSlider_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtSlider_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtSlider_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtSlider_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtSlider_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtSlider that was directly constructed.
func (this *QwtSlider) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtSlider_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtSlider) callVirtualBase_SizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSlider_virtualbase_sizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSlider) OnSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtSlider_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_sizeHint
func miqt_exec_callback_QwtSlider_sizeHint(self *C.QwtSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_MinimumSizeHint() *qt.QSize {

	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QwtSlider_virtualbase_minimumSizeHint(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSlider) OnMinimumSizeHint(slot func(super func() *qt.QSize) *qt.QSize) {
	ok := C.QwtSlider_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_minimumSizeHint
func miqt_exec_callback_QwtSlider_minimumSizeHint(self *C.QwtSlider, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QSize) *qt.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_ScrolledTo(param1 *qt.QPoint) float64 {

	return (float64)(C.QwtSlider_virtualbase_scrolledTo(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtSlider) OnScrolledTo(slot func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64) {
	ok := C.QwtSlider_override_virtual_scrolledTo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_scrolledTo
func miqt_exec_callback_QwtSlider_scrolledTo(self *C.QwtSlider, cb C.intptr_t, param1 *C.QPoint) C.double {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) float64, param1 *qt.QPoint) float64)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_ScrolledTo, slotval1)

	return (C.double)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_IsScrollPosition(param1 *qt.QPoint) bool {

	return (bool)(C.QwtSlider_virtualbase_isScrollPosition(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer())))

}
func (this *QwtSlider) OnIsScrollPosition(slot func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool) {
	ok := C.QwtSlider_override_virtual_isScrollPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_isScrollPosition
func miqt_exec_callback_QwtSlider_isScrollPosition(self *C.QwtSlider, cb C.intptr_t, param1 *C.QPoint) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint) bool, param1 *qt.QPoint) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_IsScrollPosition, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_DrawSlider(param1 *qt.QPainter, param2 *qt.QRect) {

	C.QwtSlider_virtualbase_drawSlider(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRect)(param2.UnsafePointer()))

}
func (this *QwtSlider) OnDrawSlider(slot func(super func(param1 *qt.QPainter, param2 *qt.QRect), param1 *qt.QPainter, param2 *qt.QRect)) {
	ok := C.QwtSlider_override_virtual_drawSlider(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_drawSlider
func miqt_exec_callback_QwtSlider_drawSlider(self *C.QwtSlider, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRect), param1 *qt.QPainter, param2 *qt.QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRect(unsafe.Pointer(param2))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DrawSlider, slotval1, slotval2)

}

func (this *QwtSlider) callVirtualBase_DrawHandle(param1 *qt.QPainter, param2 *qt.QRect, pos int) {

	C.QwtSlider_virtualbase_drawHandle(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()), (*C.QRect)(param2.UnsafePointer()), (C.int)(pos))

}
func (this *QwtSlider) OnDrawHandle(slot func(super func(param1 *qt.QPainter, param2 *qt.QRect, pos int), param1 *qt.QPainter, param2 *qt.QRect, pos int)) {
	ok := C.QwtSlider_override_virtual_drawHandle(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_drawHandle
func miqt_exec_callback_QwtSlider_drawHandle(self *C.QwtSlider, cb C.intptr_t, param1 *C.QPainter, param2 *C.QRect, pos C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter, param2 *qt.QRect, pos int), param1 *qt.QPainter, param2 *qt.QRect, pos int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQRect(unsafe.Pointer(param2))

	slotval3 := (int)(pos)

	gofunc((&QwtSlider{h: self}).callVirtualBase_DrawHandle, slotval1, slotval2, slotval3)

}

func (this *QwtSlider) callVirtualBase_MousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtSlider_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtSlider_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_mousePressEvent
func miqt_exec_callback_QwtSlider_mousePressEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_MouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtSlider_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtSlider_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_mouseReleaseEvent
func miqt_exec_callback_QwtSlider_mouseReleaseEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ResizeEvent(param1 *qt.QResizeEvent) {

	C.QwtSlider_virtualbase_resizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtSlider_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_resizeEvent
func miqt_exec_callback_QwtSlider_resizeEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_PaintEvent(param1 *qt.QPaintEvent) {

	C.QwtSlider_virtualbase_paintEvent(unsafe.Pointer(this.h), (*C.QPaintEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnPaintEvent(slot func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent)) {
	ok := C.QwtSlider_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_paintEvent
func miqt_exec_callback_QwtSlider_paintEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPaintEvent), param1 *qt.QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPaintEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ChangeEvent(param1 *qt.QEvent) {

	C.QwtSlider_virtualbase_changeEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnChangeEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtSlider_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_changeEvent
func miqt_exec_callback_QwtSlider_changeEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_TimerEvent(param1 *qt.QTimerEvent) {

	C.QwtSlider_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnTimerEvent(slot func(super func(param1 *qt.QTimerEvent), param1 *qt.QTimerEvent)) {
	ok := C.QwtSlider_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_timerEvent
func miqt_exec_callback_QwtSlider_timerEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QTimerEvent), param1 *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ScaleChange() {

	C.QwtSlider_virtualbase_scaleChange(unsafe.Pointer(this.h))

}
func (this *QwtSlider) OnScaleChange(slot func(super func())) {
	ok := C.QwtSlider_override_virtual_scaleChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_scaleChange
func miqt_exec_callback_QwtSlider_scaleChange(self *C.QwtSlider, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtSlider{h: self}).callVirtualBase_ScaleChange)

}

func (this *QwtSlider) callVirtualBase_MouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtSlider_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtSlider_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_mouseMoveEvent
func miqt_exec_callback_QwtSlider_mouseMoveEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_KeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtSlider_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtSlider_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_keyPressEvent
func miqt_exec_callback_QwtSlider_keyPressEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_WheelEvent(param1 *qt.QWheelEvent) {

	C.QwtSlider_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtSlider_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_wheelEvent
func miqt_exec_callback_QwtSlider_wheelEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_SliderChange() {

	C.QwtSlider_virtualbase_sliderChange(unsafe.Pointer(this.h))

}
func (this *QwtSlider) OnSliderChange(slot func(super func())) {
	ok := C.QwtSlider_override_virtual_sliderChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_sliderChange
func miqt_exec_callback_QwtSlider_sliderChange(self *C.QwtSlider, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtSlider{h: self}).callVirtualBase_SliderChange)

}

func (this *QwtSlider) callVirtualBase_DevType() int {

	return (int)(C.QwtSlider_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QwtSlider) OnDevType(slot func(super func() int) int) {
	ok := C.QwtSlider_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_devType
func miqt_exec_callback_QwtSlider_devType(self *C.QwtSlider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_SetVisible(visible bool) {

	C.QwtSlider_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QwtSlider) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QwtSlider_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_setVisible
func miqt_exec_callback_QwtSlider_setVisible(self *C.QwtSlider, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QwtSlider{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QwtSlider) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QwtSlider_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtSlider) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QwtSlider_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_heightForWidth
func miqt_exec_callback_QwtSlider_heightForWidth(self *C.QwtSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QwtSlider_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QwtSlider) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QwtSlider_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_hasHeightForWidth
func miqt_exec_callback_QwtSlider_hasHeightForWidth(self *C.QwtSlider, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_PaintEngine() *qt.QPaintEngine {

	return qt.UnsafeNewQPaintEngine(unsafe.Pointer(C.QwtSlider_virtualbase_paintEngine(unsafe.Pointer(this.h))))

}
func (this *QwtSlider) OnPaintEngine(slot func(super func() *qt.QPaintEngine) *qt.QPaintEngine) {
	ok := C.QwtSlider_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_paintEngine
func miqt_exec_callback_QwtSlider_paintEngine(self *C.QwtSlider, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPaintEngine) *qt.QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_PaintEngine)

	return (*C.QPaintEngine)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtSlider_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtSlider) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtSlider_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_event
func miqt_exec_callback_QwtSlider_event(self *C.QwtSlider, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_MouseDoubleClickEvent(event *qt.QMouseEvent) {

	C.QwtSlider_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnMouseDoubleClickEvent(slot func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent)) {
	ok := C.QwtSlider_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_mouseDoubleClickEvent
func miqt_exec_callback_QwtSlider_mouseDoubleClickEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMouseEvent), event *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QwtSlider_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QwtSlider_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_keyReleaseEvent
func miqt_exec_callback_QwtSlider_keyReleaseEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QwtSlider_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtSlider_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_focusInEvent
func miqt_exec_callback_QwtSlider_focusInEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QwtSlider_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QwtSlider_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_focusOutEvent
func miqt_exec_callback_QwtSlider_focusOutEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_EnterEvent(event *qt.QEvent) {

	C.QwtSlider_virtualbase_enterEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnEnterEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtSlider_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_enterEvent
func miqt_exec_callback_QwtSlider_enterEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_LeaveEvent(event *qt.QEvent) {

	C.QwtSlider_virtualbase_leaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnLeaveEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtSlider_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_leaveEvent
func miqt_exec_callback_QwtSlider_leaveEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_MoveEvent(event *qt.QMoveEvent) {

	C.QwtSlider_virtualbase_moveEvent(unsafe.Pointer(this.h), (*C.QMoveEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnMoveEvent(slot func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent)) {
	ok := C.QwtSlider_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_moveEvent
func miqt_exec_callback_QwtSlider_moveEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QMoveEvent), event *qt.QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_CloseEvent(event *qt.QCloseEvent) {

	C.QwtSlider_virtualbase_closeEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnCloseEvent(slot func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent)) {
	ok := C.QwtSlider_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_closeEvent
func miqt_exec_callback_QwtSlider_closeEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QCloseEvent), event *qt.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQCloseEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ContextMenuEvent(event *qt.QContextMenuEvent) {

	C.QwtSlider_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnContextMenuEvent(slot func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent)) {
	ok := C.QwtSlider_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_contextMenuEvent
func miqt_exec_callback_QwtSlider_contextMenuEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QContextMenuEvent), event *qt.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_TabletEvent(event *qt.QTabletEvent) {

	C.QwtSlider_virtualbase_tabletEvent(unsafe.Pointer(this.h), (*C.QTabletEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnTabletEvent(slot func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent)) {
	ok := C.QwtSlider_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_tabletEvent
func miqt_exec_callback_QwtSlider_tabletEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTabletEvent), event *qt.QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTabletEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ActionEvent(event *qt.QActionEvent) {

	C.QwtSlider_virtualbase_actionEvent(unsafe.Pointer(this.h), (*C.QActionEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnActionEvent(slot func(super func(event *qt.QActionEvent), event *qt.QActionEvent)) {
	ok := C.QwtSlider_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_actionEvent
func miqt_exec_callback_QwtSlider_actionEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QActionEvent), event *qt.QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQActionEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_DragEnterEvent(event *qt.QDragEnterEvent) {

	C.QwtSlider_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QDragEnterEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnDragEnterEvent(slot func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent)) {
	ok := C.QwtSlider_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_dragEnterEvent
func miqt_exec_callback_QwtSlider_dragEnterEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragEnterEvent), event *qt.QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragEnterEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_DragMoveEvent(event *qt.QDragMoveEvent) {

	C.QwtSlider_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QDragMoveEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnDragMoveEvent(slot func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent)) {
	ok := C.QwtSlider_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_dragMoveEvent
func miqt_exec_callback_QwtSlider_dragMoveEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragMoveEvent), event *qt.QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragMoveEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_DragLeaveEvent(event *qt.QDragLeaveEvent) {

	C.QwtSlider_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QDragLeaveEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnDragLeaveEvent(slot func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent)) {
	ok := C.QwtSlider_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_dragLeaveEvent
func miqt_exec_callback_QwtSlider_dragLeaveEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDragLeaveEvent), event *qt.QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDragLeaveEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_DropEvent(event *qt.QDropEvent) {

	C.QwtSlider_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QDropEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnDropEvent(slot func(super func(event *qt.QDropEvent), event *qt.QDropEvent)) {
	ok := C.QwtSlider_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_dropEvent
func miqt_exec_callback_QwtSlider_dropEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QDropEvent), event *qt.QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQDropEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ShowEvent(event *qt.QShowEvent) {

	C.QwtSlider_virtualbase_showEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnShowEvent(slot func(super func(event *qt.QShowEvent), event *qt.QShowEvent)) {
	ok := C.QwtSlider_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_showEvent
func miqt_exec_callback_QwtSlider_showEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QShowEvent), event *qt.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQShowEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_HideEvent(event *qt.QHideEvent) {

	C.QwtSlider_virtualbase_hideEvent(unsafe.Pointer(this.h), (*C.QHideEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnHideEvent(slot func(super func(event *qt.QHideEvent), event *qt.QHideEvent)) {
	ok := C.QwtSlider_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_hideEvent
func miqt_exec_callback_QwtSlider_hideEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QHideEvent), event *qt.QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQHideEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *int64) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QwtSlider_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.long)(unsafe.Pointer(result))))

}
func (this *QwtSlider) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *int64) bool, eventType []byte, message unsafe.Pointer, result *int64) bool) {
	ok := C.QwtSlider_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_nativeEvent
func miqt_exec_callback_QwtSlider_nativeEvent(self *C.QwtSlider, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.long) C.bool {
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

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_Metric(param1 qt.QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QwtSlider_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QwtSlider) OnMetric(slot func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QwtSlider_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_metric
func miqt_exec_callback_QwtSlider_metric(self *C.QwtSlider, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.QPaintDevice__PaintDeviceMetric) int, param1 qt.QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_InitPainter(painter *qt.QPainter) {

	C.QwtSlider_virtualbase_initPainter(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()))

}
func (this *QwtSlider) OnInitPainter(slot func(super func(painter *qt.QPainter), painter *qt.QPainter)) {
	ok := C.QwtSlider_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_initPainter
func miqt_exec_callback_QwtSlider_initPainter(self *C.QwtSlider, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter), painter *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	gofunc((&QwtSlider{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QwtSlider) callVirtualBase_Redirected(offset *qt.QPoint) *qt.QPaintDevice {

	return qt.UnsafeNewQPaintDevice(unsafe.Pointer(C.QwtSlider_virtualbase_redirected(unsafe.Pointer(this.h), (*C.QPoint)(offset.UnsafePointer()))))

}
func (this *QwtSlider) OnRedirected(slot func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice) {
	ok := C.QwtSlider_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_redirected
func miqt_exec_callback_QwtSlider_redirected(self *C.QwtSlider, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *qt.QPoint) *qt.QPaintDevice, offset *qt.QPoint) *qt.QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(offset))

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_Redirected, slotval1)

	return (*C.QPaintDevice)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_SharedPainter() *qt.QPainter {

	return qt.UnsafeNewQPainter(unsafe.Pointer(C.QwtSlider_virtualbase_sharedPainter(unsafe.Pointer(this.h))))

}
func (this *QwtSlider) OnSharedPainter(slot func(super func() *qt.QPainter) *qt.QPainter) {
	ok := C.QwtSlider_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_sharedPainter
func miqt_exec_callback_QwtSlider_sharedPainter(self *C.QwtSlider, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainter) *qt.QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_SharedPainter)

	return (*C.QPainter)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_InputMethodEvent(param1 *qt.QInputMethodEvent) {

	C.QwtSlider_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(param1.UnsafePointer()))

}
func (this *QwtSlider) OnInputMethodEvent(slot func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent)) {
	ok := C.QwtSlider_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_inputMethodEvent
func miqt_exec_callback_QwtSlider_inputMethodEvent(self *C.QwtSlider, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QInputMethodEvent), param1 *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(param1))

	gofunc((&QwtSlider{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_InputMethodQuery(param1 qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QwtSlider_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtSlider) OnInputMethodQuery(slot func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QwtSlider_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_inputMethodQuery
func miqt_exec_callback_QwtSlider_inputMethodQuery(self *C.QwtSlider, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 qt.InputMethodQuery) *qt.QVariant, param1 qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(param1)

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QwtSlider) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QwtSlider_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QwtSlider) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QwtSlider_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_focusNextPrevChild
func miqt_exec_callback_QwtSlider_focusNextPrevChild(self *C.QwtSlider, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QwtSlider_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtSlider) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QwtSlider_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_eventFilter
func miqt_exec_callback_QwtSlider_eventFilter(self *C.QwtSlider, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtSlider{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtSlider) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtSlider_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtSlider_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_childEvent
func miqt_exec_callback_QwtSlider_childEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtSlider_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtSlider) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtSlider_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_customEvent
func miqt_exec_callback_QwtSlider_customEvent(self *C.QwtSlider, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtSlider{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtSlider) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtSlider_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtSlider) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtSlider_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_connectNotify
func miqt_exec_callback_QwtSlider_connectNotify(self *C.QwtSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtSlider{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtSlider) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtSlider_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtSlider) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtSlider_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtSlider_disconnectNotify
func miqt_exec_callback_QwtSlider_disconnectNotify(self *C.QwtSlider, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtSlider{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtSlider) Delete() {
	C.QwtSlider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtSlider) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtSlider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
