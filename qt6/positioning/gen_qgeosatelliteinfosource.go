package positioning

/*

#include "gen_qgeosatelliteinfosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGeoSatelliteInfoSource__Error int

const (
	QGeoSatelliteInfoSource__AccessError        QGeoSatelliteInfoSource__Error = 0
	QGeoSatelliteInfoSource__ClosedError        QGeoSatelliteInfoSource__Error = 1
	QGeoSatelliteInfoSource__NoError            QGeoSatelliteInfoSource__Error = 2
	QGeoSatelliteInfoSource__UnknownSourceError QGeoSatelliteInfoSource__Error = -1
	QGeoSatelliteInfoSource__UpdateTimeoutError QGeoSatelliteInfoSource__Error = 3
)

type QGeoSatelliteInfoSource struct {
	h *C.QGeoSatelliteInfoSource
	*qt6.QObject
}

func (this *QGeoSatelliteInfoSource) cPointer() *C.QGeoSatelliteInfoSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoSatelliteInfoSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoSatelliteInfoSource constructs the type using only CGO pointers.
func newQGeoSatelliteInfoSource(h *C.QGeoSatelliteInfoSource) *QGeoSatelliteInfoSource {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGeoSatelliteInfoSource_virtbase(h, &outptr_QObject)

	return &QGeoSatelliteInfoSource{h: h,
		QObject: qt6.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQGeoSatelliteInfoSource constructs the type using only unsafe pointers.
func UnsafeNewQGeoSatelliteInfoSource(h unsafe.Pointer) *QGeoSatelliteInfoSource {
	return newQGeoSatelliteInfoSource((*C.QGeoSatelliteInfoSource)(h))
}

// NewQGeoSatelliteInfoSource constructs a new QGeoSatelliteInfoSource object.
func NewQGeoSatelliteInfoSource(parent *qt6.QObject) *QGeoSatelliteInfoSource {

	return newQGeoSatelliteInfoSource(C.QGeoSatelliteInfoSource_new((*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoSatelliteInfoSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QGeoSatelliteInfoSource_metaObject(this.h)))
}

func (this *QGeoSatelliteInfoSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGeoSatelliteInfoSource_metacast(this.h, param1_Cstring))
}

func QGeoSatelliteInfoSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGeoSatelliteInfoSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoSatelliteInfoSource_CreateDefaultSource(parent *qt6.QObject) *QGeoSatelliteInfoSource {
	return newQGeoSatelliteInfoSource(C.QGeoSatelliteInfoSource_createDefaultSource((*C.QObject)(parent.UnsafePointer())))
}

func QGeoSatelliteInfoSource_CreateSource(sourceName string, parent *qt6.QObject) *QGeoSatelliteInfoSource {
	sourceName_ms := C.struct_miqt_string{}
	sourceName_ms.data = C.CString(sourceName)
	sourceName_ms.len = C.size_t(len(sourceName))
	defer C.free(unsafe.Pointer(sourceName_ms.data))
	return newQGeoSatelliteInfoSource(C.QGeoSatelliteInfoSource_createSource(sourceName_ms, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoSatelliteInfoSource_CreateDefaultSource2(parameters map[string]qt6.QVariant, parent *qt6.QObject) *QGeoSatelliteInfoSource {
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
	return newQGeoSatelliteInfoSource(C.QGeoSatelliteInfoSource_createDefaultSource2(parameters_mm, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoSatelliteInfoSource_CreateSource2(sourceName string, parameters map[string]qt6.QVariant, parent *qt6.QObject) *QGeoSatelliteInfoSource {
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
	return newQGeoSatelliteInfoSource(C.QGeoSatelliteInfoSource_createSource2(sourceName_ms, parameters_mm, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoSatelliteInfoSource_AvailableSources() []string {
	var _ma C.struct_miqt_array = C.QGeoSatelliteInfoSource_availableSources()
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

func (this *QGeoSatelliteInfoSource) SourceName() string {
	var _ms C.struct_miqt_string = C.QGeoSatelliteInfoSource_sourceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoSatelliteInfoSource) SetUpdateInterval(msec int) {
	C.QGeoSatelliteInfoSource_setUpdateInterval(this.h, (C.int)(msec))
}

func (this *QGeoSatelliteInfoSource) UpdateInterval() int {
	return (int)(C.QGeoSatelliteInfoSource_updateInterval(this.h))
}

func (this *QGeoSatelliteInfoSource) MinimumUpdateInterval() int {
	return (int)(C.QGeoSatelliteInfoSource_minimumUpdateInterval(this.h))
}

func (this *QGeoSatelliteInfoSource) Error() QGeoSatelliteInfoSource__Error {
	return (QGeoSatelliteInfoSource__Error)(C.QGeoSatelliteInfoSource_error(this.h))
}

func (this *QGeoSatelliteInfoSource) SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QGeoSatelliteInfoSource_setBackendProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer())))
}

func (this *QGeoSatelliteInfoSource) BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGeoSatelliteInfoSource_backendProperty(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGeoSatelliteInfoSource) StartUpdates() {
	C.QGeoSatelliteInfoSource_startUpdates(this.h)
}

func (this *QGeoSatelliteInfoSource) StopUpdates() {
	C.QGeoSatelliteInfoSource_stopUpdates(this.h)
}

func (this *QGeoSatelliteInfoSource) RequestUpdate(timeout int) {
	C.QGeoSatelliteInfoSource_requestUpdate(this.h, (C.int)(timeout))
}

func (this *QGeoSatelliteInfoSource) SatellitesInViewUpdated(satellites []QGeoSatelliteInfo) {
	satellites_CArray := (*[0xffff]*C.QGeoSatelliteInfo)(C.malloc(C.size_t(8 * len(satellites))))
	defer C.free(unsafe.Pointer(satellites_CArray))
	for i := range satellites {
		satellites_CArray[i] = satellites[i].cPointer()
	}
	satellites_ma := C.struct_miqt_array{len: C.size_t(len(satellites)), data: unsafe.Pointer(satellites_CArray)}
	C.QGeoSatelliteInfoSource_satellitesInViewUpdated(this.h, satellites_ma)
}
func (this *QGeoSatelliteInfoSource) OnSatellitesInViewUpdated(slot func(satellites []QGeoSatelliteInfo)) {
	C.QGeoSatelliteInfoSource_connect_satellitesInViewUpdated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInViewUpdated
func miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInViewUpdated(cb C.intptr_t, satellites C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(satellites []QGeoSatelliteInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var satellites_ma C.struct_miqt_array = satellites
	satellites_ret := make([]QGeoSatelliteInfo, int(satellites_ma.len))
	satellites_outCast := (*[0xffff]*C.QGeoSatelliteInfo)(unsafe.Pointer(satellites_ma.data)) // hey ya
	for i := 0; i < int(satellites_ma.len); i++ {
		satellites_lv_goptr := newQGeoSatelliteInfo(satellites_outCast[i])
		satellites_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		satellites_ret[i] = *satellites_lv_goptr
	}
	slotval1 := satellites_ret

	gofunc(slotval1)
}

func (this *QGeoSatelliteInfoSource) SatellitesInUseUpdated(satellites []QGeoSatelliteInfo) {
	satellites_CArray := (*[0xffff]*C.QGeoSatelliteInfo)(C.malloc(C.size_t(8 * len(satellites))))
	defer C.free(unsafe.Pointer(satellites_CArray))
	for i := range satellites {
		satellites_CArray[i] = satellites[i].cPointer()
	}
	satellites_ma := C.struct_miqt_array{len: C.size_t(len(satellites)), data: unsafe.Pointer(satellites_CArray)}
	C.QGeoSatelliteInfoSource_satellitesInUseUpdated(this.h, satellites_ma)
}
func (this *QGeoSatelliteInfoSource) OnSatellitesInUseUpdated(slot func(satellites []QGeoSatelliteInfo)) {
	C.QGeoSatelliteInfoSource_connect_satellitesInUseUpdated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInUseUpdated
func miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInUseUpdated(cb C.intptr_t, satellites C.struct_miqt_array) {
	gofunc, ok := cgo.Handle(cb).Value().(func(satellites []QGeoSatelliteInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var satellites_ma C.struct_miqt_array = satellites
	satellites_ret := make([]QGeoSatelliteInfo, int(satellites_ma.len))
	satellites_outCast := (*[0xffff]*C.QGeoSatelliteInfo)(unsafe.Pointer(satellites_ma.data)) // hey ya
	for i := 0; i < int(satellites_ma.len); i++ {
		satellites_lv_goptr := newQGeoSatelliteInfo(satellites_outCast[i])
		satellites_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		satellites_ret[i] = *satellites_lv_goptr
	}
	slotval1 := satellites_ret

	gofunc(slotval1)
}

func (this *QGeoSatelliteInfoSource) ErrorOccurred(param1 QGeoSatelliteInfoSource__Error) {
	C.QGeoSatelliteInfoSource_errorOccurred(this.h, (C.int)(param1))
}
func (this *QGeoSatelliteInfoSource) OnErrorOccurred(slot func(param1 QGeoSatelliteInfoSource__Error)) {
	C.QGeoSatelliteInfoSource_connect_errorOccurred(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_errorOccurred
func miqt_exec_callback_QGeoSatelliteInfoSource_errorOccurred(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QGeoSatelliteInfoSource__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGeoSatelliteInfoSource__Error)(param1)

	gofunc(slotval1)
}

func QGeoSatelliteInfoSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoSatelliteInfoSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoSatelliteInfoSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoSatelliteInfoSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QGeoSatelliteInfoSource that was directly constructed.
func (this *QGeoSatelliteInfoSource) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QGeoSatelliteInfoSource_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGeoSatelliteInfoSource that was directly constructed.
func (this *QGeoSatelliteInfoSource) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoSatelliteInfoSource_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGeoSatelliteInfoSource that was directly constructed.
func (this *QGeoSatelliteInfoSource) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoSatelliteInfoSource_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGeoSatelliteInfoSource that was directly constructed.
func (this *QGeoSatelliteInfoSource) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGeoSatelliteInfoSource_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_SetUpdateInterval(msec int) {

	C.QGeoSatelliteInfoSource_virtualbase_setUpdateInterval(unsafe.Pointer(this.h), (C.int)(msec))

}
func (this *QGeoSatelliteInfoSource) OnSetUpdateInterval(slot func(super func(msec int), msec int)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_setUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_setUpdateInterval
func miqt_exec_callback_QGeoSatelliteInfoSource_setUpdateInterval(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, msec C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msec int), msec int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msec)

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_SetUpdateInterval, slotval1)

}
func (this *QGeoSatelliteInfoSource) OnMinimumUpdateInterval(slot func() int) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_minimumUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_minimumUpdateInterval
func miqt_exec_callback_QGeoSatelliteInfoSource_minimumUpdateInterval(self *C.QGeoSatelliteInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGeoSatelliteInfoSource) OnError(slot func() QGeoSatelliteInfoSource__Error) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_error(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_error
func miqt_exec_callback_QGeoSatelliteInfoSource_error(self *C.QGeoSatelliteInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoSatelliteInfoSource__Error)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QGeoSatelliteInfoSource_virtualbase_setBackendProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer())))

}
func (this *QGeoSatelliteInfoSource) OnSetBackendProperty(slot func(super func(name string, value *qt6.QVariant) bool, name string, value *qt6.QVariant) bool) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_setBackendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_setBackendProperty
func miqt_exec_callback_QGeoSatelliteInfoSource_setBackendProperty(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) C.bool {
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

	virtualReturn := gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_SetBackendProperty, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGeoSatelliteInfoSource_virtualbase_backendProperty(unsafe.Pointer(this.h), name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGeoSatelliteInfoSource) OnBackendProperty(slot func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_backendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_backendProperty
func miqt_exec_callback_QGeoSatelliteInfoSource_backendProperty(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, name C.struct_miqt_string) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_BackendProperty, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QGeoSatelliteInfoSource) OnStartUpdates(slot func()) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_startUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_startUpdates
func miqt_exec_callback_QGeoSatelliteInfoSource_startUpdates(self *C.QGeoSatelliteInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QGeoSatelliteInfoSource) OnStopUpdates(slot func()) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_stopUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_stopUpdates
func miqt_exec_callback_QGeoSatelliteInfoSource_stopUpdates(self *C.QGeoSatelliteInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QGeoSatelliteInfoSource) OnRequestUpdate(slot func(timeout int)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_requestUpdate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_requestUpdate
func miqt_exec_callback_QGeoSatelliteInfoSource_requestUpdate(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, timeout C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(timeout int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timeout)

	gofunc(slotval1)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QGeoSatelliteInfoSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoSatelliteInfoSource) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_event
func miqt_exec_callback_QGeoSatelliteInfoSource_event(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QGeoSatelliteInfoSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoSatelliteInfoSource) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_eventFilter
func miqt_exec_callback_QGeoSatelliteInfoSource_eventFilter(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QGeoSatelliteInfoSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGeoSatelliteInfoSource) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_timerEvent
func miqt_exec_callback_QGeoSatelliteInfoSource_timerEvent(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QGeoSatelliteInfoSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGeoSatelliteInfoSource) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_childEvent
func miqt_exec_callback_QGeoSatelliteInfoSource_childEvent(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QGeoSatelliteInfoSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGeoSatelliteInfoSource) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_customEvent
func miqt_exec_callback_QGeoSatelliteInfoSource_customEvent(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QGeoSatelliteInfoSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoSatelliteInfoSource) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_connectNotify
func miqt_exec_callback_QGeoSatelliteInfoSource_connectNotify(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGeoSatelliteInfoSource) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QGeoSatelliteInfoSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoSatelliteInfoSource) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGeoSatelliteInfoSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoSatelliteInfoSource_disconnectNotify
func miqt_exec_callback_QGeoSatelliteInfoSource_disconnectNotify(self *C.QGeoSatelliteInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoSatelliteInfoSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGeoSatelliteInfoSource) Delete() {
	C.QGeoSatelliteInfoSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoSatelliteInfoSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoSatelliteInfoSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
