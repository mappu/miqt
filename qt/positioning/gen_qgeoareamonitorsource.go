package positioning

/*

#include "gen_qgeoareamonitorsource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGeoAreaMonitorSource__Error int

const (
	QGeoAreaMonitorSource__AccessError              QGeoAreaMonitorSource__Error = 0
	QGeoAreaMonitorSource__InsufficientPositionInfo QGeoAreaMonitorSource__Error = 1
	QGeoAreaMonitorSource__UnknownSourceError       QGeoAreaMonitorSource__Error = 2
	QGeoAreaMonitorSource__NoError                  QGeoAreaMonitorSource__Error = 3
)

type QGeoAreaMonitorSource__AreaMonitorFeature int

const (
	QGeoAreaMonitorSource__PersistentAreaMonitorFeature QGeoAreaMonitorSource__AreaMonitorFeature = 1
)

type QGeoAreaMonitorSource struct {
	h *C.QGeoAreaMonitorSource
	*qt.QObject
}

func (this *QGeoAreaMonitorSource) cPointer() *C.QGeoAreaMonitorSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoAreaMonitorSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoAreaMonitorSource constructs the type using only CGO pointers.
func newQGeoAreaMonitorSource(h *C.QGeoAreaMonitorSource) *QGeoAreaMonitorSource {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGeoAreaMonitorSource_virtbase(h, &outptr_QObject)

	return &QGeoAreaMonitorSource{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQGeoAreaMonitorSource constructs the type using only unsafe pointers.
func UnsafeNewQGeoAreaMonitorSource(h unsafe.Pointer) *QGeoAreaMonitorSource {
	return newQGeoAreaMonitorSource((*C.QGeoAreaMonitorSource)(h))
}

// NewQGeoAreaMonitorSource constructs a new QGeoAreaMonitorSource object.
func NewQGeoAreaMonitorSource(parent *qt.QObject) *QGeoAreaMonitorSource {

	return newQGeoAreaMonitorSource(C.QGeoAreaMonitorSource_new((*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoAreaMonitorSource) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGeoAreaMonitorSource_metaObject(this.h)))
}

func (this *QGeoAreaMonitorSource) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGeoAreaMonitorSource_metacast(this.h, param1_Cstring))
}

func QGeoAreaMonitorSource_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoAreaMonitorSource_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoAreaMonitorSource_CreateDefaultSource(parent *qt.QObject) *QGeoAreaMonitorSource {
	return newQGeoAreaMonitorSource(C.QGeoAreaMonitorSource_createDefaultSource((*C.QObject)(parent.UnsafePointer())))
}

func QGeoAreaMonitorSource_CreateSource(sourceName string, parent *qt.QObject) *QGeoAreaMonitorSource {
	sourceName_ms := C.struct_miqt_string{}
	sourceName_ms.data = C.CString(sourceName)
	sourceName_ms.len = C.size_t(len(sourceName))
	defer C.free(unsafe.Pointer(sourceName_ms.data))
	return newQGeoAreaMonitorSource(C.QGeoAreaMonitorSource_createSource(sourceName_ms, (*C.QObject)(parent.UnsafePointer())))
}

func QGeoAreaMonitorSource_AvailableSources() []string {
	var _ma C.struct_miqt_array = C.QGeoAreaMonitorSource_availableSources()
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

func (this *QGeoAreaMonitorSource) SetPositionInfoSource(source *QGeoPositionInfoSource) {
	C.QGeoAreaMonitorSource_setPositionInfoSource(this.h, source.cPointer())
}

func (this *QGeoAreaMonitorSource) PositionInfoSource() *QGeoPositionInfoSource {
	return newQGeoPositionInfoSource(C.QGeoAreaMonitorSource_positionInfoSource(this.h))
}

func (this *QGeoAreaMonitorSource) SourceName() string {
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_sourceName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAreaMonitorSource) Error() QGeoAreaMonitorSource__Error {
	return (QGeoAreaMonitorSource__Error)(C.QGeoAreaMonitorSource_error(this.h))
}

func (this *QGeoAreaMonitorSource) SupportedAreaMonitorFeatures() QGeoAreaMonitorSource__AreaMonitorFeature {
	return (QGeoAreaMonitorSource__AreaMonitorFeature)(C.QGeoAreaMonitorSource_supportedAreaMonitorFeatures(this.h))
}

func (this *QGeoAreaMonitorSource) StartMonitoring(monitor *QGeoAreaMonitorInfo) bool {
	return (bool)(C.QGeoAreaMonitorSource_startMonitoring(this.h, monitor.cPointer()))
}

func (this *QGeoAreaMonitorSource) StopMonitoring(monitor *QGeoAreaMonitorInfo) bool {
	return (bool)(C.QGeoAreaMonitorSource_stopMonitoring(this.h, monitor.cPointer()))
}

func (this *QGeoAreaMonitorSource) RequestUpdate(monitor *QGeoAreaMonitorInfo, signal string) bool {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	return (bool)(C.QGeoAreaMonitorSource_requestUpdate(this.h, monitor.cPointer(), signal_Cstring))
}

func (this *QGeoAreaMonitorSource) ActiveMonitors() []QGeoAreaMonitorInfo {
	var _ma C.struct_miqt_array = C.QGeoAreaMonitorSource_activeMonitors(this.h)
	_ret := make([]QGeoAreaMonitorInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QGeoAreaMonitorInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGeoAreaMonitorInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoAreaMonitorSource) ActiveMonitorsWithLookupArea(lookupArea *QGeoShape) []QGeoAreaMonitorInfo {
	var _ma C.struct_miqt_array = C.QGeoAreaMonitorSource_activeMonitorsWithLookupArea(this.h, lookupArea.cPointer())
	_ret := make([]QGeoAreaMonitorInfo, int(_ma.len))
	_outCast := (*[0xffff]*C.QGeoAreaMonitorInfo)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQGeoAreaMonitorInfo(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QGeoAreaMonitorSource) AreaEntered(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo) {
	C.QGeoAreaMonitorSource_areaEntered(this.h, monitor.cPointer(), update.cPointer())
}
func (this *QGeoAreaMonitorSource) OnAreaEntered(slot func(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo)) {
	C.QGeoAreaMonitorSource_connect_areaEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoAreaMonitorSource_areaEntered
func miqt_exec_callback_QGeoAreaMonitorSource_areaEntered(cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo, update *C.QGeoPositionInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	slotval2 := newQGeoPositionInfo(update)

	gofunc(slotval1, slotval2)
}

func (this *QGeoAreaMonitorSource) AreaExited(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo) {
	C.QGeoAreaMonitorSource_areaExited(this.h, monitor.cPointer(), update.cPointer())
}
func (this *QGeoAreaMonitorSource) OnAreaExited(slot func(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo)) {
	C.QGeoAreaMonitorSource_connect_areaExited(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoAreaMonitorSource_areaExited
func miqt_exec_callback_QGeoAreaMonitorSource_areaExited(cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo, update *C.QGeoPositionInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo, update *QGeoPositionInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	slotval2 := newQGeoPositionInfo(update)

	gofunc(slotval1, slotval2)
}

func (this *QGeoAreaMonitorSource) MonitorExpired(monitor *QGeoAreaMonitorInfo) {
	C.QGeoAreaMonitorSource_monitorExpired(this.h, monitor.cPointer())
}
func (this *QGeoAreaMonitorSource) OnMonitorExpired(slot func(monitor *QGeoAreaMonitorInfo)) {
	C.QGeoAreaMonitorSource_connect_monitorExpired(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoAreaMonitorSource_monitorExpired
func miqt_exec_callback_QGeoAreaMonitorSource_monitorExpired(cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo) {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	gofunc(slotval1)
}

func (this *QGeoAreaMonitorSource) ErrorWithError(error QGeoAreaMonitorSource__Error) {
	C.QGeoAreaMonitorSource_errorWithError(this.h, (C.int)(error))
}
func (this *QGeoAreaMonitorSource) OnErrorWithError(slot func(error QGeoAreaMonitorSource__Error)) {
	C.QGeoAreaMonitorSource_connect_errorWithError(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGeoAreaMonitorSource_errorWithError
func miqt_exec_callback_QGeoAreaMonitorSource_errorWithError(cb C.intptr_t, error C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(error QGeoAreaMonitorSource__Error))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGeoAreaMonitorSource__Error)(error)

	gofunc(slotval1)
}

func QGeoAreaMonitorSource_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoAreaMonitorSource_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoAreaMonitorSource_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGeoAreaMonitorSource_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGeoAreaMonitorSource_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QGeoAreaMonitorSource that was directly constructed.
func (this *QGeoAreaMonitorSource) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QGeoAreaMonitorSource_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGeoAreaMonitorSource that was directly constructed.
func (this *QGeoAreaMonitorSource) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoAreaMonitorSource_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGeoAreaMonitorSource that was directly constructed.
func (this *QGeoAreaMonitorSource) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGeoAreaMonitorSource_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGeoAreaMonitorSource that was directly constructed.
func (this *QGeoAreaMonitorSource) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGeoAreaMonitorSource_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGeoAreaMonitorSource) callVirtualBase_SetPositionInfoSource(source *QGeoPositionInfoSource) {

	C.QGeoAreaMonitorSource_virtualbase_setPositionInfoSource(unsafe.Pointer(this.h), source.cPointer())

}
func (this *QGeoAreaMonitorSource) OnSetPositionInfoSource(slot func(super func(source *QGeoPositionInfoSource), source *QGeoPositionInfoSource)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_setPositionInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_setPositionInfoSource
func miqt_exec_callback_QGeoAreaMonitorSource_setPositionInfoSource(self *C.QGeoAreaMonitorSource, cb C.intptr_t, source *C.QGeoPositionInfoSource) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(source *QGeoPositionInfoSource), source *QGeoPositionInfoSource))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoPositionInfoSource(source)

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_SetPositionInfoSource, slotval1)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_PositionInfoSource() *QGeoPositionInfoSource {

	return newQGeoPositionInfoSource(C.QGeoAreaMonitorSource_virtualbase_positionInfoSource(unsafe.Pointer(this.h)))

}
func (this *QGeoAreaMonitorSource) OnPositionInfoSource(slot func(super func() *QGeoPositionInfoSource) *QGeoPositionInfoSource) {
	ok := C.QGeoAreaMonitorSource_override_virtual_positionInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_positionInfoSource
func miqt_exec_callback_QGeoAreaMonitorSource_positionInfoSource(self *C.QGeoAreaMonitorSource, cb C.intptr_t) *C.QGeoPositionInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QGeoPositionInfoSource) *QGeoPositionInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_PositionInfoSource)

	return virtualReturn.cPointer()

}
func (this *QGeoAreaMonitorSource) OnError(slot func() QGeoAreaMonitorSource__Error) {
	ok := C.QGeoAreaMonitorSource_override_virtual_error(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_error
func miqt_exec_callback_QGeoAreaMonitorSource_error(self *C.QGeoAreaMonitorSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoAreaMonitorSource__Error)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGeoAreaMonitorSource) OnSupportedAreaMonitorFeatures(slot func() QGeoAreaMonitorSource__AreaMonitorFeature) {
	ok := C.QGeoAreaMonitorSource_override_virtual_supportedAreaMonitorFeatures(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_supportedAreaMonitorFeatures
func miqt_exec_callback_QGeoAreaMonitorSource_supportedAreaMonitorFeatures(self *C.QGeoAreaMonitorSource, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() QGeoAreaMonitorSource__AreaMonitorFeature)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QGeoAreaMonitorSource) OnStartMonitoring(slot func(monitor *QGeoAreaMonitorInfo) bool) {
	ok := C.QGeoAreaMonitorSource_override_virtual_startMonitoring(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_startMonitoring
func miqt_exec_callback_QGeoAreaMonitorSource_startMonitoring(self *C.QGeoAreaMonitorSource, cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QGeoAreaMonitorSource) OnStopMonitoring(slot func(monitor *QGeoAreaMonitorInfo) bool) {
	ok := C.QGeoAreaMonitorSource_override_virtual_stopMonitoring(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_stopMonitoring
func miqt_exec_callback_QGeoAreaMonitorSource_stopMonitoring(self *C.QGeoAreaMonitorSource, cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QGeoAreaMonitorSource) OnRequestUpdate(slot func(monitor *QGeoAreaMonitorInfo, signal string) bool) {
	ok := C.QGeoAreaMonitorSource_override_virtual_requestUpdate(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_requestUpdate
func miqt_exec_callback_QGeoAreaMonitorSource_requestUpdate(self *C.QGeoAreaMonitorSource, cb C.intptr_t, monitor *C.QGeoAreaMonitorInfo, signal *C.const_char) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(monitor *QGeoAreaMonitorInfo, signal string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoAreaMonitorInfo(monitor)

	signal_ret := signal
	slotval2 := C.GoString(signal_ret)

	virtualReturn := gofunc(slotval1, slotval2)

	return (C.bool)(virtualReturn)

}
func (this *QGeoAreaMonitorSource) OnActiveMonitors(slot func() []QGeoAreaMonitorInfo) {
	ok := C.QGeoAreaMonitorSource_override_virtual_activeMonitors(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_activeMonitors
func miqt_exec_callback_QGeoAreaMonitorSource_activeMonitors(self *C.QGeoAreaMonitorSource, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []QGeoAreaMonitorInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]*C.QGeoAreaMonitorInfo)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QGeoAreaMonitorSource) OnActiveMonitorsWithLookupArea(slot func(lookupArea *QGeoShape) []QGeoAreaMonitorInfo) {
	ok := C.QGeoAreaMonitorSource_override_virtual_activeMonitorsWithLookupArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_activeMonitorsWithLookupArea
func miqt_exec_callback_QGeoAreaMonitorSource_activeMonitorsWithLookupArea(self *C.QGeoAreaMonitorSource, cb C.intptr_t, lookupArea *C.QGeoShape) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(lookupArea *QGeoShape) []QGeoAreaMonitorInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGeoShape(lookupArea)

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]*C.QGeoAreaMonitorInfo)(C.malloc(C.size_t(8 * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_CArray[i] = virtualReturn[i].cPointer()
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}

func (this *QGeoAreaMonitorSource) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QGeoAreaMonitorSource_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoAreaMonitorSource) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QGeoAreaMonitorSource_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_event
func miqt_exec_callback_QGeoAreaMonitorSource_event(self *C.QGeoAreaMonitorSource, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QGeoAreaMonitorSource_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGeoAreaMonitorSource) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QGeoAreaMonitorSource_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_eventFilter
func miqt_exec_callback_QGeoAreaMonitorSource_eventFilter(self *C.QGeoAreaMonitorSource, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QGeoAreaMonitorSource_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGeoAreaMonitorSource) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_timerEvent
func miqt_exec_callback_QGeoAreaMonitorSource_timerEvent(self *C.QGeoAreaMonitorSource, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QGeoAreaMonitorSource_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGeoAreaMonitorSource) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_childEvent
func miqt_exec_callback_QGeoAreaMonitorSource_childEvent(self *C.QGeoAreaMonitorSource, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QGeoAreaMonitorSource_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGeoAreaMonitorSource) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_customEvent
func miqt_exec_callback_QGeoAreaMonitorSource_customEvent(self *C.QGeoAreaMonitorSource, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QGeoAreaMonitorSource_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoAreaMonitorSource) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_connectNotify
func miqt_exec_callback_QGeoAreaMonitorSource_connectNotify(self *C.QGeoAreaMonitorSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGeoAreaMonitorSource) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QGeoAreaMonitorSource_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGeoAreaMonitorSource) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGeoAreaMonitorSource_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoAreaMonitorSource_disconnectNotify
func miqt_exec_callback_QGeoAreaMonitorSource_disconnectNotify(self *C.QGeoAreaMonitorSource, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGeoAreaMonitorSource{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGeoAreaMonitorSource) Delete() {
	C.QGeoAreaMonitorSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGeoAreaMonitorSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QGeoAreaMonitorSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
