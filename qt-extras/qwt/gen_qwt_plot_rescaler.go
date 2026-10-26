package qwt

/*

#include "gen_qwt_plot_rescaler.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPlotRescaler__RescalePolicy int

const (
	QwtPlotRescaler__Fixed     QwtPlotRescaler__RescalePolicy = 0
	QwtPlotRescaler__Expanding QwtPlotRescaler__RescalePolicy = 1
	QwtPlotRescaler__Fitting   QwtPlotRescaler__RescalePolicy = 2
)

type QwtPlotRescaler__ExpandingDirection int

const (
	QwtPlotRescaler__ExpandUp   QwtPlotRescaler__ExpandingDirection = 0
	QwtPlotRescaler__ExpandDown QwtPlotRescaler__ExpandingDirection = 1
	QwtPlotRescaler__ExpandBoth QwtPlotRescaler__ExpandingDirection = 2
)

type QwtPlotRescaler struct {
	h  *C.QwtPlotRescaler
	gc *[1]unsafe.Pointer
	*qt.QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QwtPlotRescaler) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QwtPlotRescaler) cPointer() *C.QwtPlotRescaler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPlotRescaler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPlotRescaler constructs the type using only CGO pointers.
func newQwtPlotRescaler(h *C.QwtPlotRescaler) *QwtPlotRescaler {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QwtPlotRescaler_virtbase(h, &outptr_QObject)

	return &QwtPlotRescaler{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQwtPlotRescaler constructs the type using only unsafe pointers.
func UnsafeNewQwtPlotRescaler(h unsafe.Pointer) *QwtPlotRescaler {
	return newQwtPlotRescaler((*C.QwtPlotRescaler)(h))
}

// NewQwtPlotRescaler constructs a new QwtPlotRescaler object.
func NewQwtPlotRescaler(canvas *qt.QWidget) *QwtPlotRescaler {
	defer runtime.KeepAlive(canvas)

	return newQwtPlotRescaler(C.QwtPlotRescaler_new((*C.QWidget)(canvas.UnsafePointer())))
}

// NewQwtPlotRescaler2 constructs a new QwtPlotRescaler object.
func NewQwtPlotRescaler2(canvas *qt.QWidget, referenceAxis int) *QwtPlotRescaler {
	defer runtime.KeepAlive(canvas)

	return newQwtPlotRescaler(C.QwtPlotRescaler_new2((*C.QWidget)(canvas.UnsafePointer()), (C.int)(referenceAxis)))
}

// NewQwtPlotRescaler3 constructs a new QwtPlotRescaler object.
func NewQwtPlotRescaler3(canvas *qt.QWidget, referenceAxis int, param3 QwtPlotRescaler__RescalePolicy) *QwtPlotRescaler {
	defer runtime.KeepAlive(canvas)

	return newQwtPlotRescaler(C.QwtPlotRescaler_new3((*C.QWidget)(canvas.UnsafePointer()), (C.int)(referenceAxis), (C.int)(param3)))
}

func (this *QwtPlotRescaler) SetEnabled(enabled bool) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QwtPlotRescaler) IsEnabled() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QwtPlotRescaler_isEnabled(this.h))
}

func (this *QwtPlotRescaler) SetRescalePolicy(rescalePolicy QwtPlotRescaler__RescalePolicy) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setRescalePolicy(this.h, (C.int)(rescalePolicy))
}

func (this *QwtPlotRescaler) RescalePolicy() QwtPlotRescaler__RescalePolicy {
	defer runtime.KeepAlive(this)
	return (QwtPlotRescaler__RescalePolicy)(C.QwtPlotRescaler_rescalePolicy(this.h))
}

func (this *QwtPlotRescaler) SetExpandingDirection(expandingDirection QwtPlotRescaler__ExpandingDirection) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setExpandingDirection(this.h, (C.int)(expandingDirection))
}

func (this *QwtPlotRescaler) SetExpandingDirection2(axis int, param2 QwtPlotRescaler__ExpandingDirection) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setExpandingDirection2(this.h, (C.int)(axis), (C.int)(param2))
}

func (this *QwtPlotRescaler) ExpandingDirection(axis int) QwtPlotRescaler__ExpandingDirection {
	defer runtime.KeepAlive(this)
	return (QwtPlotRescaler__ExpandingDirection)(C.QwtPlotRescaler_expandingDirection(this.h, (C.int)(axis)))
}

func (this *QwtPlotRescaler) SetReferenceAxis(axis int) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setReferenceAxis(this.h, (C.int)(axis))
}

func (this *QwtPlotRescaler) ReferenceAxis() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QwtPlotRescaler_referenceAxis(this.h))
}

func (this *QwtPlotRescaler) SetAspectRatio(ratio float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setAspectRatio(this.h, (C.double)(ratio))
}

func (this *QwtPlotRescaler) SetAspectRatio2(axis int, ratio float64) {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_setAspectRatio2(this.h, (C.int)(axis), (C.double)(ratio))
}

func (this *QwtPlotRescaler) AspectRatio(axis int) float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QwtPlotRescaler_aspectRatio(this.h, (C.int)(axis)))
}

func (this *QwtPlotRescaler) SetIntervalHint(axis int, param2 *QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param2)
	C.QwtPlotRescaler_setIntervalHint(this.h, (C.int)(axis), param2.cPointer())
}

func (this *QwtPlotRescaler) IntervalHint(axis int) *QwtInterval {
	defer runtime.KeepAlive(this)
	_goptr := newQwtInterval(C.QwtPlotRescaler_intervalHint(this.h, (C.int)(axis)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPlotRescaler) Canvas() *qt.QWidget {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotRescaler_canvas(this.h)))
}

func (this *QwtPlotRescaler) Canvas2() *qt.QWidget {
	defer runtime.KeepAlive(this)
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPlotRescaler_canvas2(this.h)))
}

func (this *QwtPlotRescaler) Plot() *QwtPlot {
	defer runtime.KeepAlive(this)
	return newQwtPlot(C.QwtPlotRescaler_plot(this.h))
}

func (this *QwtPlotRescaler) Plot2() *QwtPlot {
	defer runtime.KeepAlive(this)
	return newQwtPlot(C.QwtPlotRescaler_plot2(this.h))
}

func (this *QwtPlotRescaler) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)
	return (bool)(C.QwtPlotRescaler_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

func (this *QwtPlotRescaler) Rescale() {
	defer runtime.KeepAlive(this)
	C.QwtPlotRescaler_rescale(this.h)
}

// Orientation can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) Orientation(axis int) qt.Orientation {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (qt.Orientation)(C.QwtPlotRescaler_protectedbase_orientation(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(axis)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Interval can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) Interval(axis int) QwtInterval {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtPlotRescaler_protectedbase_interval(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(axis)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// ExpandInterval can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) ExpandInterval(param1 *QwtInterval, width float64, param3 QwtPlotRescaler__ExpandingDirection) QwtInterval {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	var _dynamic_cast_ok C.bool = false
	_goptr := newQwtInterval(C.QwtPlotRescaler_protectedbase_expandInterval(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer(), (C.double)(width), (C.int)(param3)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) Sender() *qt.QObject {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPlotRescaler_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) SenderSignalIndex() int {
	defer runtime.KeepAlive(this)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotRescaler_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) Receivers(signal string) int {
	defer runtime.KeepAlive(this)
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPlotRescaler_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPlotRescaler that was directly constructed.
func (this *QwtPlotRescaler) IsSignalConnected(signal *qt.QMetaMethod) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPlotRescaler_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPlotRescaler) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	defer runtime.KeepAlive(param2)

	return (bool)(C.QwtPlotRescaler_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPlotRescaler) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPlotRescaler_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_eventFilter
func miqt_exec_callback_QwtPlotRescaler_eventFilter(self *C.QwtPlotRescaler, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotRescaler) callVirtualBase_CanvasResizeEvent(param1 *qt.QResizeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)

	C.QwtPlotRescaler_virtualbase_canvasResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnCanvasResizeEvent(slot func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent)) {
	ok := C.QwtPlotRescaler_override_virtual_canvasResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_canvasResizeEvent
func miqt_exec_callback_QwtPlotRescaler_canvasResizeEvent(self *C.QwtPlotRescaler, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QResizeEvent), param1 *qt.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQResizeEvent(unsafe.Pointer(param1))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_CanvasResizeEvent, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_Rescale2(oldSize *qt.QSize, newSize *qt.QSize) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(oldSize)
	defer runtime.KeepAlive(newSize)

	C.QwtPlotRescaler_virtualbase_rescale2(unsafe.Pointer(this.h), (*C.QSize)(oldSize.UnsafePointer()), (*C.QSize)(newSize.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnRescale2(slot func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize)) {
	ok := C.QwtPlotRescaler_override_virtual_rescale2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_rescale2
func miqt_exec_callback_QwtPlotRescaler_rescale2(self *C.QwtPlotRescaler, cb C.intptr_t, oldSize *C.QSize, newSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(oldSize))

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(newSize))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_Rescale2, slotval1, slotval2)

}

func (this *QwtPlotRescaler) callVirtualBase_ExpandScale(axis int, oldSize *qt.QSize, newSize *qt.QSize) *QwtInterval {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(oldSize)
	defer runtime.KeepAlive(newSize)

	_goptr := newQwtInterval(C.QwtPlotRescaler_virtualbase_expandScale(unsafe.Pointer(this.h), (C.int)(axis), (*C.QSize)(oldSize.UnsafePointer()), (*C.QSize)(newSize.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotRescaler) OnExpandScale(slot func(super func(axis int, oldSize *qt.QSize, newSize *qt.QSize) *QwtInterval, axis int, oldSize *qt.QSize, newSize *qt.QSize) *QwtInterval) {
	ok := C.QwtPlotRescaler_override_virtual_expandScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_expandScale
func miqt_exec_callback_QwtPlotRescaler_expandScale(self *C.QwtPlotRescaler, cb C.intptr_t, axis C.int, oldSize *C.QSize, newSize *C.QSize) *C.QwtInterval {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(axis int, oldSize *qt.QSize, newSize *qt.QSize) *QwtInterval, axis int, oldSize *qt.QSize, newSize *qt.QSize) *QwtInterval)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(axis)

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(oldSize))

	slotval3 := qt.UnsafeNewQSize(unsafe.Pointer(newSize))

	virtualReturn := gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_ExpandScale, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotRescaler_virtualreturncopy_QwtInterval(virtualReturn.cPointer())

}

func (this *QwtPlotRescaler) callVirtualBase_SyncScale(axis int, reference *QwtInterval, size *qt.QSize) *QwtInterval {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(reference)
	defer runtime.KeepAlive(size)

	_goptr := newQwtInterval(C.QwtPlotRescaler_virtualbase_syncScale(unsafe.Pointer(this.h), (C.int)(axis), reference.cPointer(), (*C.QSize)(size.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPlotRescaler) OnSyncScale(slot func(super func(axis int, reference *QwtInterval, size *qt.QSize) *QwtInterval, axis int, reference *QwtInterval, size *qt.QSize) *QwtInterval) {
	ok := C.QwtPlotRescaler_override_virtual_syncScale(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_syncScale
func miqt_exec_callback_QwtPlotRescaler_syncScale(self *C.QwtPlotRescaler, cb C.intptr_t, axis C.int, reference *C.QwtInterval, size *C.QSize) *C.QwtInterval {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(axis int, reference *QwtInterval, size *qt.QSize) *QwtInterval, axis int, reference *QwtInterval, size *qt.QSize) *QwtInterval)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(axis)

	slotval2 := newQwtInterval(reference)

	slotval3 := qt.UnsafeNewQSize(unsafe.Pointer(size))

	virtualReturn := gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_SyncScale, slotval1, slotval2, slotval3)
	defer runtime.KeepAlive(virtualReturn)

	return C.QwtPlotRescaler_virtualreturncopy_QwtInterval(virtualReturn.cPointer())

}

func (this *QwtPlotRescaler) callVirtualBase_UpdateScales(intervals *QwtInterval) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(intervals)

	C.QwtPlotRescaler_virtualbase_updateScales(unsafe.Pointer(this.h), intervals.cPointer())

}
func (this *QwtPlotRescaler) OnUpdateScales(slot func(super func(intervals *QwtInterval), intervals *QwtInterval)) {
	ok := C.QwtPlotRescaler_override_virtual_updateScales(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_updateScales
func miqt_exec_callback_QwtPlotRescaler_updateScales(self *C.QwtPlotRescaler, cb C.intptr_t, intervals *C.QwtInterval) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(intervals *QwtInterval), intervals *QwtInterval))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtInterval(intervals)

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_UpdateScales, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_Event(event *qt.QEvent) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	return (bool)(C.QwtPlotRescaler_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPlotRescaler) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPlotRescaler_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_event
func miqt_exec_callback_QwtPlotRescaler_event(self *C.QwtPlotRescaler, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPlotRescaler) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QwtPlotRescaler_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPlotRescaler_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_timerEvent
func miqt_exec_callback_QwtPlotRescaler_timerEvent(self *C.QwtPlotRescaler, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_ChildEvent(event *qt.QChildEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QwtPlotRescaler_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPlotRescaler_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_childEvent
func miqt_exec_callback_QwtPlotRescaler_childEvent(self *C.QwtPlotRescaler, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_CustomEvent(event *qt.QEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(event)

	C.QwtPlotRescaler_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPlotRescaler_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_customEvent
func miqt_exec_callback_QwtPlotRescaler_customEvent(self *C.QwtPlotRescaler, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QwtPlotRescaler_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotRescaler_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_connectNotify
func miqt_exec_callback_QwtPlotRescaler_connectNotify(self *C.QwtPlotRescaler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPlotRescaler) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(signal)

	C.QwtPlotRescaler_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPlotRescaler) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPlotRescaler_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPlotRescaler_disconnectNotify
func miqt_exec_callback_QwtPlotRescaler_disconnectNotify(self *C.QwtPlotRescaler, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPlotRescaler{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QwtPlotRescaler) Delete() {
	C.QwtPlotRescaler_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QwtPlotRescaler) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QwtPlotRescaler_delete((*C.QwtPlotRescaler)(gc[0]))
	})
	this.miqtSetGC(gc)
}
