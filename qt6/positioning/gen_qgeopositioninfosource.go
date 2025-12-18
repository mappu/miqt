package positioning

/*

#include "gen_qgeopositioninfosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGeoPositionInfoSource__Error int

const (
	QGeoPositionInfoSource__AccessError        QGeoPositionInfoSource__Error = 0
	QGeoPositionInfoSource__ClosedError        QGeoPositionInfoSource__Error = 1
	QGeoPositionInfoSource__UnknownSourceError QGeoPositionInfoSource__Error = 2
	QGeoPositionInfoSource__NoError            QGeoPositionInfoSource__Error = 3
	QGeoPositionInfoSource__UpdateTimeoutError QGeoPositionInfoSource__Error = 4
)

type QGeoPositionInfoSource__PositioningMethod int

const (
	QGeoPositionInfoSource__NoPositioningMethods        QGeoPositionInfoSource__PositioningMethod = 0
	QGeoPositionInfoSource__SatellitePositioningMethods QGeoPositionInfoSource__PositioningMethod = 255
)

type QGeoPositionInfoSource struct {
	h *C.QGeoPositionInfoSource
	*qt6.QObject
}

func (this *QGeoPositionInfoSource) cPointer() *C.QGeoPositionInfoSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPositionInfoSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPositionInfoSource constructs the type using only CGO pointers.
func newQGeoPositionInfoSource(h *C.QGeoPositionInfoSource) *QGeoPositionInfoSource {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGeoPositionInfoSource_virtbase(h, &outptr_QObject)

	return &QGeoPositionInfoSource{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQGeoPositionInfoSource constructs the type using only unsafe pointers.
func UnsafeNewQGeoPositionInfoSource(h unsafe.Pointer) *QGeoPositionInfoSource {
	return newQGeoPositionInfoSource((*C.QGeoPositionInfoSource)(h))
}

// NewQGeoPositionInfoSource constructs a new QGeoPositionInfoSource object.
func NewQGeoPositionInfoSource(parent *qt6.QObject) *QGeoPositionInfoSource {

	return newQGeoPositionInfoSource(C.QGeoPositionInfoSource_new((*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoPositionInfoSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QGeoPositionInfoSource_metaObject(this.h)))
}

func (this *QGeoPositionInfoSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGeoPositionInfoSource_metacast(this.h, param1_Cstring))
}

func QGeoPositionInfoSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGeoPositionInfoSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoPositionInfoSource) SetUpdateInterval(msec int) {
	C.QGeoPositionInfoSource_setUpdateInterval(this.h, (C.int)(msec))
}

func (this *QGeoPositionInfoSource) UpdateInterval() int {
	return (int)(C.QGeoPositionInfoSource_updateInterval(this.h))
}

func (this *QGeoPositionInfoSource) SetPreferredPositioningMethods(methods QGeoPositionInfoSource__PositioningMethod) {
	C.QGeoPositionInfoSource_setPreferredPositioningMethods(this.h, (C.int)(methods))
}

func (this *QGeoPositionInfoSource) PreferredPositioningMethods() QGeoPositionInfoSource__PositioningMethod {
	return (QGeoPositionInfoSource__PositioningMethod)(C.QGeoPositionInfoSource_preferredPositioningMethods(this.h))
}

func (this *QGeoPositionInfoSource) LastKnownPosition(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo {
	_goptr := newQGeoPositionInfo(C.QGeoPositionInfoSource_lastKnownPosition(this.h, (C.bool)(fromSatellitePositioningMethodsOnly)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoPositionInfoSource) SupportedPositioningMethods() QGeoPositionInfoSource__PositioningMethod {
	return (QGeoPositionInfoSource__PositioningMethod)(C.QGeoPositionInfoSource_supportedPositioningMethods(this.h))
}

func (this *QGeoPositionInfoSource) MinimumUpdateInterval() int {
	return (int)(C.QGeoPositionInfoSource_minimumUpdateInterval(this.h))
}

func (this *QGeoPositionInfoSource) SourceName() string {
	var _ms C.struct_miqt_string = C.QGeoPositionInfoSource_sourceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoPositionInfoSource) SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QGeoPositionInfoSource_setBackendProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer())))
}

func (this *QGeoPositionInfoSource) BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGeoPositionInfoSource_backendProperty(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QGeoPositionInfoSource_CreateDefaultSource(parent *qt6.QObject) *QGeoPositionInfoSource {
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSource_createDefaultSource((*C.QObject)(parent.UnsafePointer())))
}

func QGeoPositionInfoSource_CreateDefaultSource2(parameters map[string]qt6.QVariant, parent *qt6.QObject) *QGeoPositionInfoSource {
	parameters_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray))
	parameters_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray))
	parameters_ctr := 0
	for parameters_k, parameters_v := range parameters {
		parameters_k_ms := C.struct_miqt_string{}
		parameters_k_ms.data = C.CString(parameters_k)
		parameters_k_ms.len = C.size_t(len(parameters_k))
		defer C.free(unsafe.Pointer(parameters_k_ms.data))
		parameters_Keys_CArray[parameters_ctr] = parameters_k_ms
		parameters_Values_CArray[parameters_ctr] = (*C.QVariant)(parameters_v.UnsafePointer())
		parameters_ctr++
	}
	parameters_mm := C.struct_miqt_map{
		len:    C.size_t(len(parameters)),
		keys:   unsafe.Pointer(parameters_Keys_CArray),
		values: unsafe.Pointer(parameters_Values_CArray),
	}
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSource_createDefaultSource2(parameters_mm, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoPositionInfoSource_CreateSource(sourceName string, parent *qt6.QObject) *QGeoPositionInfoSource {
	sourceName_ms := C.struct_miqt_string{}
	sourceName_ms.data = C.CString(sourceName)
	sourceName_ms.len = C.size_t(len(sourceName))
	defer C.free(unsafe.Pointer(sourceName_ms.data))
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSource_createSource(sourceName_ms, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoPositionInfoSource_CreateSource2(sourceName string, parameters map[string]qt6.QVariant, parent *qt6.QObject) *QGeoPositionInfoSource {
	sourceName_ms := C.struct_miqt_string{}
	sourceName_ms.data = C.CString(sourceName)
	sourceName_ms.len = C.size_t(len(sourceName))
	defer C.free(unsafe.Pointer(sourceName_ms.data))
	parameters_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray))
	parameters_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray))
	parameters_ctr := 0
	for parameters_k, parameters_v := range parameters {
		parameters_k_ms := C.struct_miqt_string{}
		parameters_k_ms.data = C.CString(parameters_k)
		parameters_k_ms.len = C.size_t(len(parameters_k))
		defer C.free(unsafe.Pointer(parameters_k_ms.data))
		parameters_Keys_CArray[parameters_ctr] = parameters_k_ms
		parameters_Values_CArray[parameters_ctr] = (*C.QVariant)(parameters_v.UnsafePointer())
		parameters_ctr++
	}
	parameters_mm := C.struct_miqt_map{
		len:    C.size_t(len(parameters)),
		keys:   unsafe.Pointer(parameters_Keys_CArray),
		values: unsafe.Pointer(parameters_Values_CArray),
	}
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSource_createSource2(sourceName_ms, parameters_mm, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoPositionInfoSource_AvailableSources() []string {
	var _ma C.struct_miqt_array = C.QGeoPositionInfoSource_availableSources()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QGeoPositionInfoSource) Error() QGeoPositionInfoSource__Error {
	return (QGeoPositionInfoSource__Error)(C.QGeoPositionInfoSource_error(this.h))
}

func (this *QGeoPositionInfoSource) StartUpdates() {
	C.QGeoPositionInfoSource_startUpdates(this.h)
}

func (this *QGeoPositionInfoSource) StopUpdates() {
	C.QGeoPositionInfoSource_stopUpdates(this.h)
}

func (this *QGeoPositionInfoSource) RequestUpdate(timeout int) {
	C.QGeoPositionInfoSource_requestUpdate(this.h, (C.int)(timeout))
}

func (this *QGeoPositionInfoSource) PositionUpdated(update *QGeoPositionInfo) {
	C.QGeoPositionInfoSource_positionUpdated(this.h, update.cPointer())
}
func (this *QGeoPositionInfoSource) OnPositionUpdated(slot func(update *QGeoPositionInfo)) {
	C.QGeoPositionInfoSource_connect_positionUpdated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoPositionInfoSource_positionUpdated
func miqt_exec_callback_QGeoPositionInfoSource_positionUpdated(cb C.intptr_t, update *C.QGeoPositionInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(update *QGeoPositionInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoPositionInfo(update)

	gofunc(slotval1)
}

func (this *QGeoPositionInfoSource) ErrorOccurred(param1 QGeoPositionInfoSource__Error) {
	C.QGeoPositionInfoSource_errorOccurred(this.h, (C.int)(param1))
}
func (this *QGeoPositionInfoSource) OnErrorOccurred(slot func(param1 QGeoPositionInfoSource__Error)) {
	C.QGeoPositionInfoSource_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoPositionInfoSource_errorOccurred
func miqt_exec_callback_QGeoPositionInfoSource_errorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QGeoPositionInfoSource__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGeoPositionInfoSource__Error)(param1)

	gofunc(slotval1)
}

func (this *QGeoPositionInfoSource) SupportedPositioningMethodsChanged() {
	C.QGeoPositionInfoSource_supportedPositioningMethodsChanged(this.h)
}
func (this *QGeoPositionInfoSource) OnSupportedPositioningMethodsChanged(slot func()) {
	C.QGeoPositionInfoSource_connect_supportedPositioningMethodsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethodsChanged
func miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethodsChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QGeoPositionInfoSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoPositionInfoSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoPositionInfoSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoPositionInfoSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QGeoPositionInfoSource that was directly constructed.
func (this *QGeoPositionInfoSource) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QGeoPositionInfoSource_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGeoPositionInfoSource that was directly constructed.
func (this *QGeoPositionInfoSource) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoPositionInfoSource_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGeoPositionInfoSource that was directly constructed.
func (this *QGeoPositionInfoSource) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoPositionInfoSource_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGeoPositionInfoSource that was directly constructed.
func (this *QGeoPositionInfoSource) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGeoPositionInfoSource_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGeoPositionInfoSource) callVirtualBase_SetUpdateInterval(msec int) {

	C.QGeoPositionInfoSource_virtualbase_setUpdateInterval(unsafe.Pointer(this.h), (C.int)(msec))

}
func (this *QGeoPositionInfoSource) OnSetUpdateInterval(slot func(super func(msec int), msec int)) {
	ok := C.QGeoPositionInfoSource_override_virtual_setUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_setUpdateInterval
func miqt_exec_callback_QGeoPositionInfoSource_setUpdateInterval(self *C.QGeoPositionInfoSource, cb C.intptr_t, msec C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msec int), msec int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msec)

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_SetUpdateInterval, slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_SetPreferredPositioningMethods(methods QGeoPositionInfoSource__PositioningMethod) {

	C.QGeoPositionInfoSource_virtualbase_setPreferredPositioningMethods(unsafe.Pointer(this.h), (C.int)(methods))

}
func (this *QGeoPositionInfoSource) OnSetPreferredPositioningMethods(slot func(super func(methods QGeoPositionInfoSource__PositioningMethod), methods QGeoPositionInfoSource__PositioningMethod)) {
	ok := C.QGeoPositionInfoSource_override_virtual_setPreferredPositioningMethods(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_setPreferredPositioningMethods
func miqt_exec_callback_QGeoPositionInfoSource_setPreferredPositioningMethods(self *C.QGeoPositionInfoSource, cb C.intptr_t, methods C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(methods QGeoPositionInfoSource__PositioningMethod), methods QGeoPositionInfoSource__PositioningMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGeoPositionInfoSource__PositioningMethod)(methods)

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_SetPreferredPositioningMethods, slotval1)

}
func (this *QGeoPositionInfoSource) OnLastKnownPosition(slot func(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo) {
	ok := C.QGeoPositionInfoSource_override_virtual_lastKnownPosition(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_lastKnownPosition
func miqt_exec_callback_QGeoPositionInfoSource_lastKnownPosition(self *C.QGeoPositionInfoSource, cb C.intptr_t, fromSatellitePositioningMethodsOnly C.bool) *C.QGeoPositionInfo {
	gofunc, ok := cgo.Handle(cb).Value().(func(fromSatellitePositioningMethodsOnly bool) *QGeoPositionInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(fromSatellitePositioningMethodsOnly)

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSource) OnSupportedPositioningMethods(slot func() QGeoPositionInfoSource__PositioningMethod) {
	ok := C.QGeoPositionInfoSource_override_virtual_supportedPositioningMethods(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethods
func miqt_exec_callback_QGeoPositionInfoSource_supportedPositioningMethods(self *C.QGeoPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoPositionInfoSource__PositioningMethod)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGeoPositionInfoSource) OnMinimumUpdateInterval(slot func() int) {
	ok := C.QGeoPositionInfoSource_override_virtual_minimumUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_minimumUpdateInterval
func miqt_exec_callback_QGeoPositionInfoSource_minimumUpdateInterval(self *C.QGeoPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QGeoPositionInfoSource) callVirtualBase_SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QGeoPositionInfoSource_virtualbase_setBackendProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer())))

}
func (this *QGeoPositionInfoSource) OnSetBackendProperty(slot func(super func(name string, value *qt6.QVariant) bool, name string, value *qt6.QVariant) bool) {
	ok := C.QGeoPositionInfoSource_override_virtual_setBackendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_setBackendProperty
func miqt_exec_callback_QGeoPositionInfoSource_setBackendProperty(self *C.QGeoPositionInfoSource, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string, value *qt6.QVariant) bool, name string, value *qt6.QVariant) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_SetBackendProperty, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGeoPositionInfoSource) callVirtualBase_BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGeoPositionInfoSource_virtualbase_backendProperty(unsafe.Pointer(this.h), name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGeoPositionInfoSource) OnBackendProperty(slot func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant) {
	ok := C.QGeoPositionInfoSource_override_virtual_backendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_backendProperty
func miqt_exec_callback_QGeoPositionInfoSource_backendProperty(self *C.QGeoPositionInfoSource, cb C.intptr_t, name C.struct_miqt_string) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_BackendProperty, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QGeoPositionInfoSource) OnError(slot func() QGeoPositionInfoSource__Error) {
	ok := C.QGeoPositionInfoSource_override_virtual_error(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_error
func miqt_exec_callback_QGeoPositionInfoSource_error(self *C.QGeoPositionInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoPositionInfoSource__Error)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGeoPositionInfoSource) OnStartUpdates(slot func()) {
	ok := C.QGeoPositionInfoSource_override_virtual_startUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_startUpdates
func miqt_exec_callback_QGeoPositionInfoSource_startUpdates(self *C.QGeoPositionInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QGeoPositionInfoSource) OnStopUpdates(slot func()) {
	ok := C.QGeoPositionInfoSource_override_virtual_stopUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_stopUpdates
func miqt_exec_callback_QGeoPositionInfoSource_stopUpdates(self *C.QGeoPositionInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QGeoPositionInfoSource) OnRequestUpdate(slot func(timeout int)) {
	ok := C.QGeoPositionInfoSource_override_virtual_requestUpdate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_requestUpdate
func miqt_exec_callback_QGeoPositionInfoSource_requestUpdate(self *C.QGeoPositionInfoSource, cb C.intptr_t, timeout C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(timeout int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timeout)

	gofunc(slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QGeoPositionInfoSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoPositionInfoSource) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QGeoPositionInfoSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_event
func miqt_exec_callback_QGeoPositionInfoSource_event(self *C.QGeoPositionInfoSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGeoPositionInfoSource) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QGeoPositionInfoSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoPositionInfoSource) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QGeoPositionInfoSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_eventFilter
func miqt_exec_callback_QGeoPositionInfoSource_eventFilter(self *C.QGeoPositionInfoSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGeoPositionInfoSource) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QGeoPositionInfoSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGeoPositionInfoSource) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QGeoPositionInfoSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_timerEvent
func miqt_exec_callback_QGeoPositionInfoSource_timerEvent(self *C.QGeoPositionInfoSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QGeoPositionInfoSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGeoPositionInfoSource) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QGeoPositionInfoSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_childEvent
func miqt_exec_callback_QGeoPositionInfoSource_childEvent(self *C.QGeoPositionInfoSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QGeoPositionInfoSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGeoPositionInfoSource) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QGeoPositionInfoSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_customEvent
func miqt_exec_callback_QGeoPositionInfoSource_customEvent(self *C.QGeoPositionInfoSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QGeoPositionInfoSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoPositionInfoSource) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGeoPositionInfoSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_connectNotify
func miqt_exec_callback_QGeoPositionInfoSource_connectNotify(self *C.QGeoPositionInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGeoPositionInfoSource) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QGeoPositionInfoSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoPositionInfoSource) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGeoPositionInfoSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSource_disconnectNotify
func miqt_exec_callback_QGeoPositionInfoSource_disconnectNotify(self *C.QGeoPositionInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoPositionInfoSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGeoPositionInfoSource) Delete() {
	C.QGeoPositionInfoSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoPositionInfoSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoPositionInfoSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
