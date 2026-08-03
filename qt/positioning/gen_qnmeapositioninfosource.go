package positioning

/*

#include "gen_qnmeapositioninfosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNmeaPositionInfoSource__UpdateMode int

const (
	QNmeaPositionInfoSource__RealTimeMode   QNmeaPositionInfoSource__UpdateMode = 1
	QNmeaPositionInfoSource__SimulationMode QNmeaPositionInfoSource__UpdateMode = 2
)

type QNmeaPositionInfoSource struct {
	h *C.QNmeaPositionInfoSource
	*QGeoPositionInfoSource
}

func (this *QNmeaPositionInfoSource) cPointer() *C.QNmeaPositionInfoSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNmeaPositionInfoSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNmeaPositionInfoSource constructs the type using only CGO pointers.
func newQNmeaPositionInfoSource(h *C.QNmeaPositionInfoSource) *QNmeaPositionInfoSource {
	if h == nil {
		return nil
	}
	var outptr_QGeoPositionInfoSource *C.QGeoPositionInfoSource = nil
	C.QNmeaPositionInfoSource_virtbase(h, &outptr_QGeoPositionInfoSource)

	return &QNmeaPositionInfoSource{h: h,
		QGeoPositionInfoSource: newQGeoPositionInfoSource(outptr_QGeoPositionInfoSource)}
}

// UnsafeNewQNmeaPositionInfoSource constructs the type using only unsafe pointers.
func UnsafeNewQNmeaPositionInfoSource(h unsafe.Pointer) *QNmeaPositionInfoSource {
	return newQNmeaPositionInfoSource((*C.QNmeaPositionInfoSource)(h))
}

// NewQNmeaPositionInfoSource constructs a new QNmeaPositionInfoSource object.
func NewQNmeaPositionInfoSource(updateMode QNmeaPositionInfoSource__UpdateMode) *QNmeaPositionInfoSource {

	return newQNmeaPositionInfoSource(C.QNmeaPositionInfoSource_new((C.int)(updateMode)))
}

// NewQNmeaPositionInfoSource2 constructs a new QNmeaPositionInfoSource object.
func NewQNmeaPositionInfoSource2(updateMode QNmeaPositionInfoSource__UpdateMode, parent *qt.QObject) *QNmeaPositionInfoSource {

	return newQNmeaPositionInfoSource(C.QNmeaPositionInfoSource_new2((C.int)(updateMode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QNmeaPositionInfoSource) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNmeaPositionInfoSource_metaObject(this.h)))
}

func (this *QNmeaPositionInfoSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNmeaPositionInfoSource_metacast(this.h, param1_Cstring))
}

func QNmeaPositionInfoSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNmeaPositionInfoSource_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNmeaPositionInfoSource) SetUserEquivalentRangeError(uere float64) {
	C.QNmeaPositionInfoSource_setUserEquivalentRangeError(this.h, (C.double)(uere))
}

func (this *QNmeaPositionInfoSource) UserEquivalentRangeError() float64 {
	return (float64)(C.QNmeaPositionInfoSource_userEquivalentRangeError(this.h))
}

func (this *QNmeaPositionInfoSource) UpdateMode() QNmeaPositionInfoSource__UpdateMode {
	return (QNmeaPositionInfoSource__UpdateMode)(C.QNmeaPositionInfoSource_updateMode(this.h))
}

func (this *QNmeaPositionInfoSource) SetDevice(source *qt.QIODevice) {
	C.QNmeaPositionInfoSource_setDevice(this.h, (*C.QIODevice)(source.UnsafePointer()))
}

func (this *QNmeaPositionInfoSource) Device() *qt.QIODevice {
	return qt.UnsafeNewQIODevice(unsafe.Pointer(C.QNmeaPositionInfoSource_device(this.h)))
}

func (this *QNmeaPositionInfoSource) SetUpdateInterval(msec int) {
	C.QNmeaPositionInfoSource_setUpdateInterval(this.h, (C.int)(msec))
}

func (this *QNmeaPositionInfoSource) LastKnownPosition() *QGeoPositionInfo {
	_goptr := newQGeoPositionInfo(C.QNmeaPositionInfoSource_lastKnownPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNmeaPositionInfoSource) SupportedPositioningMethods() QGeoPositionInfoSource__PositioningMethod {
	return (QGeoPositionInfoSource__PositioningMethod)(C.QNmeaPositionInfoSource_supportedPositioningMethods(this.h))
}

func (this *QNmeaPositionInfoSource) MinimumUpdateInterval() int {
	return (int)(C.QNmeaPositionInfoSource_minimumUpdateInterval(this.h))
}

func (this *QNmeaPositionInfoSource) Error() QGeoPositionInfoSource__Error {
	return (QGeoPositionInfoSource__Error)(C.QNmeaPositionInfoSource_error(this.h))
}

func (this *QNmeaPositionInfoSource) StartUpdates() {
	C.QNmeaPositionInfoSource_startUpdates(this.h)
}

func (this *QNmeaPositionInfoSource) StopUpdates() {
	C.QNmeaPositionInfoSource_stopUpdates(this.h)
}

func (this *QNmeaPositionInfoSource) RequestUpdate() {
	C.QNmeaPositionInfoSource_requestUpdate(this.h)
}

func QNmeaPositionInfoSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNmeaPositionInfoSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNmeaPositionInfoSource_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNmeaPositionInfoSource_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaPositionInfoSource_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNmeaPositionInfoSource) LastKnownPositionWithFromSatellitePositioningMethodsOnly(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo {
	_goptr := newQGeoPositionInfo(C.QNmeaPositionInfoSource_lastKnownPositionWithFromSatellitePositioningMethodsOnly(this.h, (C.bool)(fromSatellitePositioningMethodsOnly)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNmeaPositionInfoSource) RequestUpdateWithTimeout(timeout int) {
	C.QNmeaPositionInfoSource_requestUpdateWithTimeout(this.h, (C.int)(timeout))
}

// Sender can only be called from a QNmeaPositionInfoSource that was directly constructed.
func (this *QNmeaPositionInfoSource) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QNmeaPositionInfoSource_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QNmeaPositionInfoSource that was directly constructed.
func (this *QNmeaPositionInfoSource) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNmeaPositionInfoSource_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QNmeaPositionInfoSource that was directly constructed.
func (this *QNmeaPositionInfoSource) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNmeaPositionInfoSource_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QNmeaPositionInfoSource that was directly constructed.
func (this *QNmeaPositionInfoSource) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QNmeaPositionInfoSource_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QNmeaPositionInfoSource) callVirtualBase_ParsePosInfoFromNmeaData(data string, size int, posInfo *QGeoPositionInfo, hasFix *bool) bool {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))

	return (bool)(C.QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(unsafe.Pointer(this.h), data_Cstring, (C.int)(size), posInfo.cPointer(), (*C.bool)(unsafe.Pointer(hasFix))))

}
func (this *QNmeaPositionInfoSource) OnParsePosInfoFromNmeaData(slot func(super func(data string, size int, posInfo *QGeoPositionInfo, hasFix *bool) bool, data string, size int, posInfo *QGeoPositionInfo, hasFix *bool) bool) {
	ok := C.QNmeaPositionInfoSource_override_virtual_parsePosInfoFromNmeaData(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData
func miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData(self *C.QNmeaPositionInfoSource, cb C.intptr_t, data *C.const_char, size C.int, posInfo *C.QGeoPositionInfo, hasFix *C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, size int, posInfo *QGeoPositionInfo, hasFix *bool) bool, data string, size int, posInfo *QGeoPositionInfo, hasFix *bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int)(size)

	slotval3 := newQGeoPositionInfo(posInfo)

	slotval4 := (*bool)(unsafe.Pointer(hasFix))

	virtualReturn := gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_ParsePosInfoFromNmeaData, slotval1, slotval2, slotval3, slotval4)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_SetUpdateInterval(msec int) {

	C.QNmeaPositionInfoSource_virtualbase_setUpdateInterval(unsafe.Pointer(this.h), (C.int)(msec))

}
func (this *QNmeaPositionInfoSource) OnSetUpdateInterval(slot func(super func(msec int), msec int)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_setUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval
func miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval(self *C.QNmeaPositionInfoSource, cb C.intptr_t, msec C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msec int), msec int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msec)

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_SetUpdateInterval, slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_SetPreferredPositioningMethods(methods QGeoPositionInfoSource__PositioningMethod) {

	C.QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(unsafe.Pointer(this.h), (C.int)(methods))

}
func (this *QNmeaPositionInfoSource) OnSetPreferredPositioningMethods(slot func(super func(methods QGeoPositionInfoSource__PositioningMethod), methods QGeoPositionInfoSource__PositioningMethod)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_setPreferredPositioningMethods(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods
func miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods(self *C.QNmeaPositionInfoSource, cb C.intptr_t, methods C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(methods QGeoPositionInfoSource__PositioningMethod), methods QGeoPositionInfoSource__PositioningMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGeoPositionInfoSource__PositioningMethod)(methods)

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_SetPreferredPositioningMethods, slotval1)

}
func (this *QNmeaPositionInfoSource) OnLastKnownPosition(slot func(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo) {
	ok := C.QNmeaPositionInfoSource_override_virtual_lastKnownPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition
func miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition(self *C.QNmeaPositionInfoSource, cb C.intptr_t, fromSatellitePositioningMethodsOnly C.bool) *C.QGeoPositionInfo {
	gofunc, ok := cgo.Handle(cb).Value().(func(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fromSatellitePositioningMethodsOnly)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QNmeaPositionInfoSource) OnSupportedPositioningMethods(slot func() QGeoPositionInfoSource__PositioningMethod) {
	ok := C.QNmeaPositionInfoSource_override_virtual_supportedPositioningMethods(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods
func miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods(self *C.QNmeaPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoPositionInfoSource__PositioningMethod)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QNmeaPositionInfoSource) OnMinimumUpdateInterval(slot func() int) {
	ok := C.QNmeaPositionInfoSource_override_virtual_minimumUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval
func miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval(self *C.QNmeaPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QNmeaPositionInfoSource) OnError(slot func() QGeoPositionInfoSource__Error) {
	ok := C.QNmeaPositionInfoSource_override_virtual_error(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_error
func miqt_exec_callback_QNmeaPositionInfoSource_error(self *C.QNmeaPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoPositionInfoSource__Error)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QNmeaPositionInfoSource) OnStartUpdates(slot func()) {
	ok := C.QNmeaPositionInfoSource_override_virtual_startUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_startUpdates
func miqt_exec_callback_QNmeaPositionInfoSource_startUpdates(self *C.QNmeaPositionInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QNmeaPositionInfoSource) OnStopUpdates(slot func()) {
	ok := C.QNmeaPositionInfoSource_override_virtual_stopUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates
func miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates(self *C.QNmeaPositionInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QNmeaPositionInfoSource) OnRequestUpdate(slot func(timeout int)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_requestUpdate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate
func miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate(self *C.QNmeaPositionInfoSource, cb C.intptr_t, timeout C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(timeout int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timeout)

	gofunc(slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QNmeaPositionInfoSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNmeaPositionInfoSource) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QNmeaPositionInfoSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_event
func miqt_exec_callback_QNmeaPositionInfoSource_event(self *C.QNmeaPositionInfoSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QNmeaPositionInfoSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNmeaPositionInfoSource) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QNmeaPositionInfoSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_eventFilter
func miqt_exec_callback_QNmeaPositionInfoSource_eventFilter(self *C.QNmeaPositionInfoSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QNmeaPositionInfoSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNmeaPositionInfoSource) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_timerEvent
func miqt_exec_callback_QNmeaPositionInfoSource_timerEvent(self *C.QNmeaPositionInfoSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QNmeaPositionInfoSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNmeaPositionInfoSource) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_childEvent
func miqt_exec_callback_QNmeaPositionInfoSource_childEvent(self *C.QNmeaPositionInfoSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QNmeaPositionInfoSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNmeaPositionInfoSource) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_customEvent
func miqt_exec_callback_QNmeaPositionInfoSource_customEvent(self *C.QNmeaPositionInfoSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QNmeaPositionInfoSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNmeaPositionInfoSource) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_connectNotify
func miqt_exec_callback_QNmeaPositionInfoSource_connectNotify(self *C.QNmeaPositionInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNmeaPositionInfoSource) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QNmeaPositionInfoSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNmeaPositionInfoSource) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNmeaPositionInfoSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify
func miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify(self *C.QNmeaPositionInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNmeaPositionInfoSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNmeaPositionInfoSource) Delete() {
	C.QNmeaPositionInfoSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNmeaPositionInfoSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QNmeaPositionInfoSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
