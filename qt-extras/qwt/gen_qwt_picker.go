package qwt

/*

#include "gen_qwt_picker.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QwtPicker__RubberBand int

const (
	QwtPicker__NoRubberBand      QwtPicker__RubberBand = 0
	QwtPicker__HLineRubberBand   QwtPicker__RubberBand = 1
	QwtPicker__VLineRubberBand   QwtPicker__RubberBand = 2
	QwtPicker__CrossRubberBand   QwtPicker__RubberBand = 3
	QwtPicker__RectRubberBand    QwtPicker__RubberBand = 4
	QwtPicker__EllipseRubberBand QwtPicker__RubberBand = 5
	QwtPicker__PolygonRubberBand QwtPicker__RubberBand = 6
	QwtPicker__UserRubberBand    QwtPicker__RubberBand = 100
)

type QwtPicker__DisplayMode int

const (
	QwtPicker__AlwaysOff  QwtPicker__DisplayMode = 0
	QwtPicker__AlwaysOn   QwtPicker__DisplayMode = 1
	QwtPicker__ActiveOnly QwtPicker__DisplayMode = 2
)

type QwtPicker__ResizeMode int

const (
	QwtPicker__Stretch  QwtPicker__ResizeMode = 0
	QwtPicker__KeepSize QwtPicker__ResizeMode = 1
)

type QwtPicker struct {
	h *C.QwtPicker
	*qt.QObject
	*QwtEventPattern
}

func (this *QwtPicker) cPointer() *C.QwtPicker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QwtPicker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQwtPicker constructs the type using only CGO pointers.
func newQwtPicker(h *C.QwtPicker) *QwtPicker {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QwtEventPattern *C.QwtEventPattern = nil
	C.QwtPicker_virtbase(h, &outptr_QObject, &outptr_QwtEventPattern)

	return &QwtPicker{h: h,
		QObject:         qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QwtEventPattern: newQwtEventPattern(outptr_QwtEventPattern)}
}

// UnsafeNewQwtPicker constructs the type using only unsafe pointers.
func UnsafeNewQwtPicker(h unsafe.Pointer) *QwtPicker {
	return newQwtPicker((*C.QwtPicker)(h))
}

// NewQwtPicker constructs a new QwtPicker object.
func NewQwtPicker(parent *qt.QWidget) *QwtPicker {

	return newQwtPicker(C.QwtPicker_new((*C.QWidget)(parent.UnsafePointer())))
}

// NewQwtPicker2 constructs a new QwtPicker object.
func NewQwtPicker2(rubberBand QwtPicker__RubberBand, trackerMode QwtPicker__DisplayMode, param3 *qt.QWidget) *QwtPicker {

	return newQwtPicker(C.QwtPicker_new2((C.int)(rubberBand), (C.int)(trackerMode), (*C.QWidget)(param3.UnsafePointer())))
}

func (this *QwtPicker) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QwtPicker_metaObject(this.h)))
}

func (this *QwtPicker) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QwtPicker_metacast(this.h, param1_Cstring))
}

func QwtPicker_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPicker_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QwtPicker) SetStateMachine(stateMachine *QwtPickerMachine) {
	C.QwtPicker_setStateMachine(this.h, stateMachine.cPointer())
}

func (this *QwtPicker) StateMachine() *QwtPickerMachine {
	return newQwtPickerMachine(C.QwtPicker_stateMachine(this.h))
}

func (this *QwtPicker) StateMachine2() *QwtPickerMachine {
	return newQwtPickerMachine(C.QwtPicker_stateMachine2(this.h))
}

func (this *QwtPicker) SetRubberBand(rubberBand QwtPicker__RubberBand) {
	C.QwtPicker_setRubberBand(this.h, (C.int)(rubberBand))
}

func (this *QwtPicker) RubberBand() QwtPicker__RubberBand {
	return (QwtPicker__RubberBand)(C.QwtPicker_rubberBand(this.h))
}

func (this *QwtPicker) SetTrackerMode(trackerMode QwtPicker__DisplayMode) {
	C.QwtPicker_setTrackerMode(this.h, (C.int)(trackerMode))
}

func (this *QwtPicker) TrackerMode() QwtPicker__DisplayMode {
	return (QwtPicker__DisplayMode)(C.QwtPicker_trackerMode(this.h))
}

func (this *QwtPicker) SetResizeMode(resizeMode QwtPicker__ResizeMode) {
	C.QwtPicker_setResizeMode(this.h, (C.int)(resizeMode))
}

func (this *QwtPicker) ResizeMode() QwtPicker__ResizeMode {
	return (QwtPicker__ResizeMode)(C.QwtPicker_resizeMode(this.h))
}

func (this *QwtPicker) SetRubberBandPen(rubberBandPen *qt.QPen) {
	C.QwtPicker_setRubberBandPen(this.h, (*C.QPen)(rubberBandPen.UnsafePointer()))
}

func (this *QwtPicker) RubberBandPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPicker_rubberBandPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) SetTrackerPen(trackerPen *qt.QPen) {
	C.QwtPicker_setTrackerPen(this.h, (*C.QPen)(trackerPen.UnsafePointer()))
}

func (this *QwtPicker) TrackerPen() *qt.QPen {
	_goptr := qt.UnsafeNewQPen(unsafe.Pointer(C.QwtPicker_trackerPen(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) SetTrackerFont(trackerFont *qt.QFont) {
	C.QwtPicker_setTrackerFont(this.h, (*C.QFont)(trackerFont.UnsafePointer()))
}

func (this *QwtPicker) TrackerFont() *qt.QFont {
	_goptr := qt.UnsafeNewQFont(unsafe.Pointer(C.QwtPicker_trackerFont(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) IsEnabled() bool {
	return (bool)(C.QwtPicker_isEnabled(this.h))
}

func (this *QwtPicker) IsActive() bool {
	return (bool)(C.QwtPicker_isActive(this.h))
}

func (this *QwtPicker) EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {
	return (bool)(C.QwtPicker_eventFilter(this.h, (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))
}

func (this *QwtPicker) ParentWidget() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPicker_parentWidget(this.h)))
}

func (this *QwtPicker) ParentWidget2() *qt.QWidget {
	return qt.UnsafeNewQWidget(unsafe.Pointer(C.QwtPicker_parentWidget2(this.h)))
}

func (this *QwtPicker) PickArea() *qt.QPainterPath {
	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPicker_pickArea(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) DrawRubberBand(param1 *qt.QPainter) {
	C.QwtPicker_drawRubberBand(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QwtPicker) DrawTracker(param1 *qt.QPainter) {
	C.QwtPicker_drawTracker(this.h, (*C.QPainter)(param1.UnsafePointer()))
}

func (this *QwtPicker) RubberBandMask() *qt.QRegion {
	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPicker_rubberBandMask(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) TrackerText(pos *qt.QPoint) *QwtText {
	_goptr := newQwtText(C.QwtPicker_trackerText(this.h, (*C.QPoint)(pos.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) TrackerPosition() *qt.QPoint {
	_goptr := qt.UnsafeNewQPoint(unsafe.Pointer(C.QwtPicker_trackerPosition(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) TrackerRect(param1 *qt.QFont) *qt.QRect {
	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPicker_trackerRect(this.h, (*C.QFont)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QwtPicker) SetEnabled(enabled bool) {
	C.QwtPicker_setEnabled(this.h, (C.bool)(enabled))
}

func (this *QwtPicker) Activated(on bool) {
	C.QwtPicker_activated(this.h, (C.bool)(on))
}
func (this *QwtPicker) OnActivated(slot func(on bool)) {
	C.QwtPicker_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPicker_activated
func miqt_exec_callback_QwtPicker_activated(cb C.intptr_t, on C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(on bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(on)

	gofunc(slotval1)
}

func (this *QwtPicker) Appended(pos *qt.QPoint) {
	C.QwtPicker_appended(this.h, (*C.QPoint)(pos.UnsafePointer()))
}
func (this *QwtPicker) OnAppended(slot func(pos *qt.QPoint)) {
	C.QwtPicker_connect_appended(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPicker_appended
func miqt_exec_callback_QwtPicker_appended(cb C.intptr_t, pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	gofunc(slotval1)
}

func (this *QwtPicker) Moved(pos *qt.QPoint) {
	C.QwtPicker_moved(this.h, (*C.QPoint)(pos.UnsafePointer()))
}
func (this *QwtPicker) OnMoved(slot func(pos *qt.QPoint)) {
	C.QwtPicker_connect_moved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPicker_moved
func miqt_exec_callback_QwtPicker_moved(cb C.intptr_t, pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	gofunc(slotval1)
}

func (this *QwtPicker) Removed(pos *qt.QPoint) {
	C.QwtPicker_removed(this.h, (*C.QPoint)(pos.UnsafePointer()))
}
func (this *QwtPicker) OnRemoved(slot func(pos *qt.QPoint)) {
	C.QwtPicker_connect_removed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QwtPicker_removed
func miqt_exec_callback_QwtPicker_removed(cb C.intptr_t, pos *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(pos *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	gofunc(slotval1)
}

func QwtPicker_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPicker_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPicker_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QwtPicker_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QwtPicker_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// RubberBandOverlay can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) RubberBandOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPicker_protectedbase_rubberBandOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// TrackerOverlay can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) TrackerOverlay() *QwtWidgetOverlay {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQwtWidgetOverlay(C.QwtPicker_protectedbase_trackerOverlay(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QwtPicker_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPicker_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QwtPicker_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QwtPicker that was directly constructed.
func (this *QwtPicker) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QwtPicker_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QwtPicker) callVirtualBase_EventFilter(param1 *qt.QObject, param2 *qt.QEvent) bool {

	return (bool)(C.QwtPicker_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QwtPicker) OnEventFilter(slot func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool) {
	ok := C.QwtPicker_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_eventFilter
func miqt_exec_callback_QwtPicker_eventFilter(self *C.QwtPicker, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QObject, param2 *qt.QEvent) bool, param1 *qt.QObject, param2 *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(param1))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPicker) callVirtualBase_PickArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QwtPicker_virtualbase_pickArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPicker) OnPickArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QwtPicker_override_virtual_pickArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_pickArea
func miqt_exec_callback_QwtPicker_pickArea(self *C.QwtPicker, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_PickArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QwtPicker) callVirtualBase_DrawRubberBand(param1 *qt.QPainter) {

	C.QwtPicker_virtualbase_drawRubberBand(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnDrawRubberBand(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPicker_override_virtual_drawRubberBand(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_drawRubberBand
func miqt_exec_callback_QwtPicker_drawRubberBand(self *C.QwtPicker, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_DrawRubberBand, slotval1)

}

func (this *QwtPicker) callVirtualBase_DrawTracker(param1 *qt.QPainter) {

	C.QwtPicker_virtualbase_drawTracker(unsafe.Pointer(this.h), (*C.QPainter)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnDrawTracker(slot func(super func(param1 *qt.QPainter), param1 *qt.QPainter)) {
	ok := C.QwtPicker_override_virtual_drawTracker(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_drawTracker
func miqt_exec_callback_QwtPicker_drawTracker(self *C.QwtPicker, cb C.intptr_t, param1 *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPainter), param1 *qt.QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_DrawTracker, slotval1)

}

func (this *QwtPicker) callVirtualBase_RubberBandMask() *qt.QRegion {

	_goptr := qt.UnsafeNewQRegion(unsafe.Pointer(C.QwtPicker_virtualbase_rubberBandMask(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPicker) OnRubberBandMask(slot func(super func() *qt.QRegion) *qt.QRegion) {
	ok := C.QwtPicker_override_virtual_rubberBandMask(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_rubberBandMask
func miqt_exec_callback_QwtPicker_rubberBandMask(self *C.QwtPicker, cb C.intptr_t) *C.QRegion {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRegion) *qt.QRegion)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_RubberBandMask)

	return (*C.QRegion)(virtualReturn.UnsafePointer())

}

func (this *QwtPicker) callVirtualBase_TrackerText(pos *qt.QPoint) *QwtText {

	_goptr := newQwtText(C.QwtPicker_virtualbase_trackerText(unsafe.Pointer(this.h), (*C.QPoint)(pos.UnsafePointer())))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPicker) OnTrackerText(slot func(super func(pos *qt.QPoint) *QwtText, pos *qt.QPoint) *QwtText) {
	ok := C.QwtPicker_override_virtual_trackerText(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_trackerText
func miqt_exec_callback_QwtPicker_trackerText(self *C.QwtPicker, cb C.intptr_t, pos *C.QPoint) *C.QwtText {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *qt.QPoint) *QwtText, pos *qt.QPoint) *QwtText)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_TrackerText, slotval1)

	return virtualReturn.cPointer()

}

func (this *QwtPicker) callVirtualBase_TrackerRect(param1 *qt.QFont) *qt.QRect {

	_goptr := qt.UnsafeNewQRect(unsafe.Pointer(C.QwtPicker_virtualbase_trackerRect(unsafe.Pointer(this.h), (*C.QFont)(param1.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QwtPicker) OnTrackerRect(slot func(super func(param1 *qt.QFont) *qt.QRect, param1 *qt.QFont) *qt.QRect) {
	ok := C.QwtPicker_override_virtual_trackerRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_trackerRect
func miqt_exec_callback_QwtPicker_trackerRect(self *C.QwtPicker, cb C.intptr_t, param1 *C.QFont) *C.QRect {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QFont) *qt.QRect, param1 *qt.QFont) *qt.QRect)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFont(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_TrackerRect, slotval1)

	return (*C.QRect)(virtualReturn.UnsafePointer())

}

func (this *QwtPicker) callVirtualBase_Transition(param1 *qt.QEvent) {

	C.QwtPicker_virtualbase_transition(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnTransition(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPicker_override_virtual_transition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_transition
func miqt_exec_callback_QwtPicker_transition(self *C.QwtPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_Transition, slotval1)

}

func (this *QwtPicker) callVirtualBase_Begin() {

	C.QwtPicker_virtualbase_begin(unsafe.Pointer(this.h))

}
func (this *QwtPicker) OnBegin(slot func(super func())) {
	ok := C.QwtPicker_override_virtual_begin(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_begin
func miqt_exec_callback_QwtPicker_begin(self *C.QwtPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPicker{h: self}).callVirtualBase_Begin)

}

func (this *QwtPicker) callVirtualBase_Append(param1 *qt.QPoint) {

	C.QwtPicker_virtualbase_append(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnAppend(slot func(super func(param1 *qt.QPoint), param1 *qt.QPoint)) {
	ok := C.QwtPicker_override_virtual_append(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_append
func miqt_exec_callback_QwtPicker_append(self *C.QwtPicker, cb C.intptr_t, param1 *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint), param1 *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_Append, slotval1)

}

func (this *QwtPicker) callVirtualBase_Move(param1 *qt.QPoint) {

	C.QwtPicker_virtualbase_move(unsafe.Pointer(this.h), (*C.QPoint)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnMove(slot func(super func(param1 *qt.QPoint), param1 *qt.QPoint)) {
	ok := C.QwtPicker_override_virtual_move(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_move
func miqt_exec_callback_QwtPicker_move(self *C.QwtPicker, cb C.intptr_t, param1 *C.QPoint) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QPoint), param1 *qt.QPoint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPoint(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_Move, slotval1)

}

func (this *QwtPicker) callVirtualBase_Remove() {

	C.QwtPicker_virtualbase_remove(unsafe.Pointer(this.h))

}
func (this *QwtPicker) OnRemove(slot func(super func())) {
	ok := C.QwtPicker_override_virtual_remove(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_remove
func miqt_exec_callback_QwtPicker_remove(self *C.QwtPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPicker{h: self}).callVirtualBase_Remove)

}

func (this *QwtPicker) callVirtualBase_End(ok bool) bool {

	return (bool)(C.QwtPicker_virtualbase_end(unsafe.Pointer(this.h), (C.bool)(ok)))

}
func (this *QwtPicker) OnEnd(slot func(super func(ok bool) bool, ok bool) bool) {
	ok := C.QwtPicker_override_virtual_end(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_end
func miqt_exec_callback_QwtPicker_end(self *C.QwtPicker, cb C.intptr_t, ok C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ok bool) bool, ok bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ok)

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_End, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPicker) callVirtualBase_Reset() {

	C.QwtPicker_virtualbase_reset(unsafe.Pointer(this.h))

}
func (this *QwtPicker) OnReset(slot func(super func())) {
	ok := C.QwtPicker_override_virtual_reset(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_reset
func miqt_exec_callback_QwtPicker_reset(self *C.QwtPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPicker{h: self}).callVirtualBase_Reset)

}

func (this *QwtPicker) callVirtualBase_WidgetMousePressEvent(param1 *qt.QMouseEvent) {

	C.QwtPicker_virtualbase_widgetMousePressEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetMousePressEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPicker_override_virtual_widgetMousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetMousePressEvent
func miqt_exec_callback_QwtPicker_widgetMousePressEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetMousePressEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetMouseReleaseEvent(param1 *qt.QMouseEvent) {

	C.QwtPicker_virtualbase_widgetMouseReleaseEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetMouseReleaseEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPicker_override_virtual_widgetMouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetMouseReleaseEvent
func miqt_exec_callback_QwtPicker_widgetMouseReleaseEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetMouseReleaseEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetMouseDoubleClickEvent(param1 *qt.QMouseEvent) {

	C.QwtPicker_virtualbase_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetMouseDoubleClickEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPicker_override_virtual_widgetMouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetMouseDoubleClickEvent
func miqt_exec_callback_QwtPicker_widgetMouseDoubleClickEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetMouseDoubleClickEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetMouseMoveEvent(param1 *qt.QMouseEvent) {

	C.QwtPicker_virtualbase_widgetMouseMoveEvent(unsafe.Pointer(this.h), (*C.QMouseEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetMouseMoveEvent(slot func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent)) {
	ok := C.QwtPicker_override_virtual_widgetMouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetMouseMoveEvent
func miqt_exec_callback_QwtPicker_widgetMouseMoveEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QMouseEvent), param1 *qt.QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetMouseMoveEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetWheelEvent(param1 *qt.QWheelEvent) {

	C.QwtPicker_virtualbase_widgetWheelEvent(unsafe.Pointer(this.h), (*C.QWheelEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetWheelEvent(slot func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent)) {
	ok := C.QwtPicker_override_virtual_widgetWheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetWheelEvent
func miqt_exec_callback_QwtPicker_widgetWheelEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QWheelEvent), param1 *qt.QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQWheelEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetWheelEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetKeyPressEvent(param1 *qt.QKeyEvent) {

	C.QwtPicker_virtualbase_widgetKeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetKeyPressEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPicker_override_virtual_widgetKeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetKeyPressEvent
func miqt_exec_callback_QwtPicker_widgetKeyPressEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetKeyPressEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetKeyReleaseEvent(param1 *qt.QKeyEvent) {

	C.QwtPicker_virtualbase_widgetKeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetKeyReleaseEvent(slot func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent)) {
	ok := C.QwtPicker_override_virtual_widgetKeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetKeyReleaseEvent
func miqt_exec_callback_QwtPicker_widgetKeyReleaseEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QKeyEvent), param1 *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetKeyReleaseEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetEnterEvent(param1 *qt.QEvent) {

	C.QwtPicker_virtualbase_widgetEnterEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetEnterEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPicker_override_virtual_widgetEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetEnterEvent
func miqt_exec_callback_QwtPicker_widgetEnterEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetEnterEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_WidgetLeaveEvent(param1 *qt.QEvent) {

	C.QwtPicker_virtualbase_widgetLeaveEvent(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer()))

}
func (this *QwtPicker) OnWidgetLeaveEvent(slot func(super func(param1 *qt.QEvent), param1 *qt.QEvent)) {
	ok := C.QwtPicker_override_virtual_widgetLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_widgetLeaveEvent
func miqt_exec_callback_QwtPicker_widgetLeaveEvent(self *C.QwtPicker, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt.QEvent), param1 *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(param1))

	gofunc((&QwtPicker{h: self}).callVirtualBase_WidgetLeaveEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_StretchSelection(oldSize *qt.QSize, newSize *qt.QSize) {

	C.QwtPicker_virtualbase_stretchSelection(unsafe.Pointer(this.h), (*C.QSize)(oldSize.UnsafePointer()), (*C.QSize)(newSize.UnsafePointer()))

}
func (this *QwtPicker) OnStretchSelection(slot func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize)) {
	ok := C.QwtPicker_override_virtual_stretchSelection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_stretchSelection
func miqt_exec_callback_QwtPicker_stretchSelection(self *C.QwtPicker, cb C.intptr_t, oldSize *C.QSize, newSize *C.QSize) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(oldSize *qt.QSize, newSize *qt.QSize), oldSize *qt.QSize, newSize *qt.QSize))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSize(unsafe.Pointer(oldSize))

	slotval2 := qt.UnsafeNewQSize(unsafe.Pointer(newSize))

	gofunc((&QwtPicker{h: self}).callVirtualBase_StretchSelection, slotval1, slotval2)

}

func (this *QwtPicker) callVirtualBase_UpdateDisplay() {

	C.QwtPicker_virtualbase_updateDisplay(unsafe.Pointer(this.h))

}
func (this *QwtPicker) OnUpdateDisplay(slot func(super func())) {
	ok := C.QwtPicker_override_virtual_updateDisplay(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_updateDisplay
func miqt_exec_callback_QwtPicker_updateDisplay(self *C.QwtPicker, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QwtPicker{h: self}).callVirtualBase_UpdateDisplay)

}

func (this *QwtPicker) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QwtPicker_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QwtPicker) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QwtPicker_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_event
func miqt_exec_callback_QwtPicker_event(self *C.QwtPicker, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QwtPicker) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QwtPicker_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QwtPicker) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QwtPicker_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_timerEvent
func miqt_exec_callback_QwtPicker_timerEvent(self *C.QwtPicker, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QwtPicker{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QwtPicker_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QwtPicker) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QwtPicker_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_childEvent
func miqt_exec_callback_QwtPicker_childEvent(self *C.QwtPicker, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QwtPicker{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QwtPicker_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QwtPicker) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QwtPicker_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_customEvent
func miqt_exec_callback_QwtPicker_customEvent(self *C.QwtPicker, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QwtPicker{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QwtPicker) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QwtPicker_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPicker) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPicker_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_connectNotify
func miqt_exec_callback_QwtPicker_connectNotify(self *C.QwtPicker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPicker{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QwtPicker) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QwtPicker_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QwtPicker) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QwtPicker_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_disconnectNotify
func miqt_exec_callback_QwtPicker_disconnectNotify(self *C.QwtPicker, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QwtPicker{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QwtPicker) callVirtualBase_MouseMatch2(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool {

	return (bool)(C.QwtPicker_virtualbase_mouseMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QMouseEvent)(param2.UnsafePointer())))

}
func (this *QwtPicker) OnMouseMatch2(slot func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool) {
	ok := C.QwtPicker_override_virtual_mouseMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_mouseMatch2
func miqt_exec_callback_QwtPicker_mouseMatch2(self *C.QwtPicker, cb C.intptr_t, param1 *C.QwtEventPattern__MousePattern, param2 *C.QMouseEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool, param1 *QwtEventPattern__MousePattern, param2 *qt.QMouseEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__MousePattern(param1)

	slotval2 := qt.UnsafeNewQMouseEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_MouseMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QwtPicker) callVirtualBase_KeyMatch2(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool {

	return (bool)(C.QwtPicker_virtualbase_keyMatch2(unsafe.Pointer(this.h), param1.cPointer(), (*C.QKeyEvent)(param2.UnsafePointer())))

}
func (this *QwtPicker) OnKeyMatch2(slot func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool) {
	ok := C.QwtPicker_override_virtual_keyMatch2(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QwtPicker_keyMatch2
func miqt_exec_callback_QwtPicker_keyMatch2(self *C.QwtPicker, cb C.intptr_t, param1 *C.QwtEventPattern__KeyPattern, param2 *C.QKeyEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool, param1 *QwtEventPattern__KeyPattern, param2 *qt.QKeyEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQwtEventPattern__KeyPattern(param1)

	slotval2 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QwtPicker{h: self}).callVirtualBase_KeyMatch2, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QwtPicker) Delete() {
	C.QwtPicker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QwtPicker) GoGC() {
	runtime.SetFinalizer(this, func(this *QwtPicker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
