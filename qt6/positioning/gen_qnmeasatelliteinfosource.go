package positioning

/*

#include "gen_qnmeasatelliteinfosource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNmeaSatelliteInfoSource__UpdateMode int

const (
	QNmeaSatelliteInfoSource__RealTimeMode   QNmeaSatelliteInfoSource__UpdateMode = 1
	QNmeaSatelliteInfoSource__SimulationMode QNmeaSatelliteInfoSource__UpdateMode = 2
)

type QNmeaSatelliteInfoSource__SatelliteInfoParseStatus int

const (
	QNmeaSatelliteInfoSource__NotParsed       QNmeaSatelliteInfoSource__SatelliteInfoParseStatus = 0
	QNmeaSatelliteInfoSource__PartiallyParsed QNmeaSatelliteInfoSource__SatelliteInfoParseStatus = 1
	QNmeaSatelliteInfoSource__FullyParsed     QNmeaSatelliteInfoSource__SatelliteInfoParseStatus = 2
)

type QNmeaSatelliteInfoSource struct {
	h *C.QNmeaSatelliteInfoSource
	*QGeoSatelliteInfoSource
}

func (this *QNmeaSatelliteInfoSource) cPointer() *C.QNmeaSatelliteInfoSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNmeaSatelliteInfoSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNmeaSatelliteInfoSource constructs the type using only CGO pointers.
func newQNmeaSatelliteInfoSource(h *C.QNmeaSatelliteInfoSource) *QNmeaSatelliteInfoSource {
	if h == nil {
		return nil
	}
	var outptr_QGeoSatelliteInfoSource *C.QGeoSatelliteInfoSource = nil
	C.QNmeaSatelliteInfoSource_virtbase(h, &outptr_QGeoSatelliteInfoSource)

	return &QNmeaSatelliteInfoSource{h: h,
		QGeoSatelliteInfoSource: newQGeoSatelliteInfoSource(outptr_QGeoSatelliteInfoSource)}
}

// UnsafeNewQNmeaSatelliteInfoSource constructs the type using only unsafe pointers.
func UnsafeNewQNmeaSatelliteInfoSource(h unsafe.Pointer) *QNmeaSatelliteInfoSource {
	return newQNmeaSatelliteInfoSource((*C.QNmeaSatelliteInfoSource)(h))
}

// NewQNmeaSatelliteInfoSource constructs a new QNmeaSatelliteInfoSource object.
func NewQNmeaSatelliteInfoSource(mode QNmeaSatelliteInfoSource__UpdateMode) *QNmeaSatelliteInfoSource {

	return newQNmeaSatelliteInfoSource(C.QNmeaSatelliteInfoSource_new((C.int)(mode)))
}

// NewQNmeaSatelliteInfoSource2 constructs a new QNmeaSatelliteInfoSource object.
func NewQNmeaSatelliteInfoSource2(mode QNmeaSatelliteInfoSource__UpdateMode, parent *qt6.QObject) *QNmeaSatelliteInfoSource {

	return newQNmeaSatelliteInfoSource(C.QNmeaSatelliteInfoSource_new2((C.int)(mode), (*C.QObject)(parent.UnsafePointer())))
}

func (this *QNmeaSatelliteInfoSource) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QNmeaSatelliteInfoSource_metaObject(this.h)))
}

func (this *QNmeaSatelliteInfoSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNmeaSatelliteInfoSource_metacast(this.h, param1_Cstring))
}

func QNmeaSatelliteInfoSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaSatelliteInfoSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNmeaSatelliteInfoSource) UpdateMode() QNmeaSatelliteInfoSource__UpdateMode {
	return (QNmeaSatelliteInfoSource__UpdateMode)(C.QNmeaSatelliteInfoSource_updateMode(this.h))
}

func (this *QNmeaSatelliteInfoSource) SetDevice(source *qt6.QIODevice) {
	C.QNmeaSatelliteInfoSource_setDevice(this.h, (*C.QIODevice)(source.UnsafePointer()))
}

func (this *QNmeaSatelliteInfoSource) Device() *qt6.QIODevice {
	return qt6.UnsafeNewQIODevice(unsafe.Pointer(C.QNmeaSatelliteInfoSource_device(this.h)))
}

func (this *QNmeaSatelliteInfoSource) SetUpdateInterval(msec int) {
	C.QNmeaSatelliteInfoSource_setUpdateInterval(this.h, (C.int)(msec))
}

func (this *QNmeaSatelliteInfoSource) MinimumUpdateInterval() int {
	return (int)(C.QNmeaSatelliteInfoSource_minimumUpdateInterval(this.h))
}

func (this *QNmeaSatelliteInfoSource) Error() QGeoSatelliteInfoSource__Error {
	return (QGeoSatelliteInfoSource__Error)(C.QNmeaSatelliteInfoSource_error(this.h))
}

func (this *QNmeaSatelliteInfoSource) SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	return (bool)(C.QNmeaSatelliteInfoSource_setBackendProperty(this.h, name_ms, (*C.QVariant)(value.UnsafePointer())))
}

func (this *QNmeaSatelliteInfoSource) BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNmeaSatelliteInfoSource_backendProperty(this.h, name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNmeaSatelliteInfoSource) StartUpdates() {
	C.QNmeaSatelliteInfoSource_startUpdates(this.h)
}

func (this *QNmeaSatelliteInfoSource) StopUpdates() {
	C.QNmeaSatelliteInfoSource_stopUpdates(this.h)
}

func (this *QNmeaSatelliteInfoSource) RequestUpdate(timeout int) {
	C.QNmeaSatelliteInfoSource_requestUpdate(this.h, (C.int)(timeout))
}

func QNmeaSatelliteInfoSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaSatelliteInfoSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNmeaSatelliteInfoSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNmeaSatelliteInfoSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// SetError can only be called from a QNmeaSatelliteInfoSource that was directly constructed.
func (this *QNmeaSatelliteInfoSource) SetError(satelliteError QGeoSatelliteInfoSource__Error) {

	var _dynamic_cast_ok C.bool = false
	C.QNmeaSatelliteInfoSource_protectedbase_setError(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(satelliteError))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QNmeaSatelliteInfoSource that was directly constructed.
func (this *QNmeaSatelliteInfoSource) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QNmeaSatelliteInfoSource_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QNmeaSatelliteInfoSource that was directly constructed.
func (this *QNmeaSatelliteInfoSource) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QNmeaSatelliteInfoSource that was directly constructed.
func (this *QNmeaSatelliteInfoSource) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNmeaSatelliteInfoSource_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QNmeaSatelliteInfoSource that was directly constructed.
func (this *QNmeaSatelliteInfoSource) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_SetUpdateInterval(msec int) {

	C.QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(unsafe.Pointer(this.h), (C.int)(msec))

}
func (this *QNmeaSatelliteInfoSource) OnSetUpdateInterval(slot func(super func(msec int), msec int)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_setUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval
func miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, msec C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(msec int), msec int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(msec)

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_SetUpdateInterval, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_MinimumUpdateInterval() int {

	return (int)(C.QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(unsafe.Pointer(this.h)))

}
func (this *QNmeaSatelliteInfoSource) OnMinimumUpdateInterval(slot func(super func() int) int) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_minimumUpdateInterval(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval
func miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_MinimumUpdateInterval)

	return (C.int)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_Error() QGeoSatelliteInfoSource__Error {

	return (QGeoSatelliteInfoSource__Error)(C.QNmeaSatelliteInfoSource_virtualbase_error(unsafe.Pointer(this.h)))

}
func (this *QNmeaSatelliteInfoSource) OnError(slot func(super func() QGeoSatelliteInfoSource__Error) QGeoSatelliteInfoSource__Error) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_error(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_error
func miqt_exec_callback_QNmeaSatelliteInfoSource_error(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QGeoSatelliteInfoSource__Error) QGeoSatelliteInfoSource__Error)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_Error)

	return (C.int)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_SetBackendProperty(name string, value *qt6.QVariant) bool {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	return (bool)(C.QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(unsafe.Pointer(this.h), name_ms, (*C.QVariant)(value.UnsafePointer())))

}
func (this *QNmeaSatelliteInfoSource) OnSetBackendProperty(slot func(super func(name string, value *qt6.QVariant) bool, name string, value *qt6.QVariant) bool) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_setBackendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty
func miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, name C.struct_miqt_string, value *C.QVariant) C.bool {
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

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_SetBackendProperty, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_BackendProperty(name string) *qt6.QVariant {
	name_ms := C.struct_miqt_string{}
	name_ms.data = C.CString(name)
	name_ms.len = C.size_t(len(name))
	defer C.free(unsafe.Pointer(name_ms.data))

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QNmeaSatelliteInfoSource_virtualbase_backendProperty(unsafe.Pointer(this.h), name_ms)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QNmeaSatelliteInfoSource) OnBackendProperty(slot func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_backendProperty(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty
func miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, name C.struct_miqt_string) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(name string) *qt6.QVariant, name string) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var name_ms C.struct_miqt_string = name
	name_ret := C.GoStringN(name_ms.data, C.int(int64(name_ms.len)))
	C.free(unsafe.Pointer(name_ms.data))
	slotval1 := name_ret

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_BackendProperty, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_StartUpdates() {

	C.QNmeaSatelliteInfoSource_virtualbase_startUpdates(unsafe.Pointer(this.h))

}
func (this *QNmeaSatelliteInfoSource) OnStartUpdates(slot func(super func())) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_startUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates
func miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_StartUpdates)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_StopUpdates() {

	C.QNmeaSatelliteInfoSource_virtualbase_stopUpdates(unsafe.Pointer(this.h))

}
func (this *QNmeaSatelliteInfoSource) OnStopUpdates(slot func(super func())) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_stopUpdates(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates
func miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_StopUpdates)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_RequestUpdate(timeout int) {

	C.QNmeaSatelliteInfoSource_virtualbase_requestUpdate(unsafe.Pointer(this.h), (C.int)(timeout))

}
func (this *QNmeaSatelliteInfoSource) OnRequestUpdate(slot func(super func(timeout int), timeout int)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_requestUpdate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate
func miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, timeout C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(timeout int), timeout int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(timeout)

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_RequestUpdate, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_ParseSatellitesInUseFromNmea(data string, size int, pnrsInUse []int) QGeoSatelliteInfo__SatelliteSystem {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	pnrsInUse_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(pnrsInUse))))
	defer C.free(unsafe.Pointer(pnrsInUse_CArray))
	for i := range pnrsInUse {
		pnrsInUse_CArray[i] = (C.int)(pnrsInUse[i])
	}
	pnrsInUse_ma := C.struct_miqt_array{len: C.size_t(len(pnrsInUse)), data: unsafe.Pointer(pnrsInUse_CArray)}

	return (QGeoSatelliteInfo__SatelliteSystem)(C.QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(unsafe.Pointer(this.h), data_Cstring, (C.int)(size), pnrsInUse_ma))

}
func (this *QNmeaSatelliteInfoSource) OnParseSatellitesInUseFromNmea(slot func(super func(data string, size int, pnrsInUse []int) QGeoSatelliteInfo__SatelliteSystem, data string, size int, pnrsInUse []int) QGeoSatelliteInfo__SatelliteSystem) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_parseSatellitesInUseFromNmea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea
func miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, data *C.const_char, size C.int, pnrsInUse C.struct_miqt_array) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, size int, pnrsInUse []int) QGeoSatelliteInfo__SatelliteSystem, data string, size int, pnrsInUse []int) QGeoSatelliteInfo__SatelliteSystem)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int)(size)

	var pnrsInUse_ma C.struct_miqt_array = pnrsInUse
	pnrsInUse_ret := make([]int, int(pnrsInUse_ma.len))
	pnrsInUse_outCast := (*[0xffff]C.int)(unsafe.Pointer(pnrsInUse_ma.data)) // hey ya
	for i := 0; i < int(pnrsInUse_ma.len); i++ {
		pnrsInUse_ret[i] = (int)(pnrsInUse_outCast[i])
	}
	slotval3 := pnrsInUse_ret

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_ParseSatellitesInUseFromNmea, slotval1, slotval2, slotval3)

	return (C.int)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_ParseSatelliteInfoFromNmea(data string, size int, infos []QGeoSatelliteInfo, system *QGeoSatelliteInfo__SatelliteSystem) QNmeaSatelliteInfoSource__SatelliteInfoParseStatus {
	data_Cstring := C.CString(data)
	defer C.free(unsafe.Pointer(data_Cstring))
	infos_CArray := (*[0xffff]*C.QGeoSatelliteInfo)(C.malloc(C.size_t(8 * len(infos))))
	defer C.free(unsafe.Pointer(infos_CArray))
	for i := range infos {
		infos_CArray[i] = infos[i].cPointer()
	}
	infos_ma := C.struct_miqt_array{len: C.size_t(len(infos)), data: unsafe.Pointer(infos_CArray)}

	return (QNmeaSatelliteInfoSource__SatelliteInfoParseStatus)(C.QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(unsafe.Pointer(this.h), data_Cstring, (C.int)(size), infos_ma, (*C.int)(unsafe.Pointer(system))))

}
func (this *QNmeaSatelliteInfoSource) OnParseSatelliteInfoFromNmea(slot func(super func(data string, size int, infos []QGeoSatelliteInfo, system *QGeoSatelliteInfo__SatelliteSystem) QNmeaSatelliteInfoSource__SatelliteInfoParseStatus, data string, size int, infos []QGeoSatelliteInfo, system *QGeoSatelliteInfo__SatelliteSystem) QNmeaSatelliteInfoSource__SatelliteInfoParseStatus) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_parseSatelliteInfoFromNmea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea
func miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, data *C.const_char, size C.int, infos C.struct_miqt_array, system *C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(data string, size int, infos []QGeoSatelliteInfo, system *QGeoSatelliteInfo__SatelliteSystem) QNmeaSatelliteInfoSource__SatelliteInfoParseStatus, data string, size int, infos []QGeoSatelliteInfo, system *QGeoSatelliteInfo__SatelliteSystem) QNmeaSatelliteInfoSource__SatelliteInfoParseStatus)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	data_ret := data
	slotval1 := C.GoString(data_ret)

	slotval2 := (int)(size)

	var infos_ma C.struct_miqt_array = infos
	infos_ret := make([]QGeoSatelliteInfo, int(infos_ma.len))
	infos_outCast := (*[0xffff]*C.QGeoSatelliteInfo)(unsafe.Pointer(infos_ma.data)) // hey ya
	for i := 0; i < int(infos_ma.len); i++ {
		infos_lv_goptr := newQGeoSatelliteInfo(infos_outCast[i])
		infos_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		infos_ret[i] = *infos_lv_goptr
	}
	slotval3 := infos_ret

	slotval4 := (*QGeoSatelliteInfo__SatelliteSystem)(unsafe.Pointer(system))

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_ParseSatelliteInfoFromNmea, slotval1, slotval2, slotval3, slotval4)

	return (C.int)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_Event(event *qt6.QEvent) bool {

	return (bool)(C.QNmeaSatelliteInfoSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNmeaSatelliteInfoSource) OnEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_event
func miqt_exec_callback_QNmeaSatelliteInfoSource_event(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QNmeaSatelliteInfoSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNmeaSatelliteInfoSource) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter
func miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QNmeaSatelliteInfoSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNmeaSatelliteInfoSource) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent
func miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QNmeaSatelliteInfoSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNmeaSatelliteInfoSource) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent
func miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QNmeaSatelliteInfoSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNmeaSatelliteInfoSource) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent
func miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QNmeaSatelliteInfoSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNmeaSatelliteInfoSource) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify
func miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNmeaSatelliteInfoSource) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNmeaSatelliteInfoSource) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QNmeaSatelliteInfoSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify
func miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify(self *C.QNmeaSatelliteInfoSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNmeaSatelliteInfoSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNmeaSatelliteInfoSource) Delete() {
	C.QNmeaSatelliteInfoSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNmeaSatelliteInfoSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QNmeaSatelliteInfoSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
