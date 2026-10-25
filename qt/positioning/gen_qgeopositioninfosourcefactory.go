package positioning

/*

#include "gen_qgeopositioninfosourcefactory.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGeoPositionInfoSourceFactory struct {
	h  *C.QGeoPositionInfoSourceFactory
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoPositionInfoSourceFactory) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGeoPositionInfoSourceFactory) cPointer() *C.QGeoPositionInfoSourceFactory {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPositionInfoSourceFactory) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPositionInfoSourceFactory constructs the type using only CGO pointers.
func newQGeoPositionInfoSourceFactory(h *C.QGeoPositionInfoSourceFactory) *QGeoPositionInfoSourceFactory {
	if h == nil {
		return nil
	}

	return &QGeoPositionInfoSourceFactory{h: h}
}

// UnsafeNewQGeoPositionInfoSourceFactory constructs the type using only unsafe pointers.
func UnsafeNewQGeoPositionInfoSourceFactory(h unsafe.Pointer) *QGeoPositionInfoSourceFactory {
	return newQGeoPositionInfoSourceFactory((*C.QGeoPositionInfoSourceFactory)(h))
}

// NewQGeoPositionInfoSourceFactory constructs a new QGeoPositionInfoSourceFactory object.
func NewQGeoPositionInfoSourceFactory(param1 *QGeoPositionInfoSourceFactory) *QGeoPositionInfoSourceFactory {
	defer runtime.KeepAlive(param1)

	return newQGeoPositionInfoSourceFactory(C.QGeoPositionInfoSourceFactory_new(param1.cPointer()))
}

func (this *QGeoPositionInfoSourceFactory) PositionInfoSource(parent *qt.QObject) *QGeoPositionInfoSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSourceFactory_positionInfoSource(this.h, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoPositionInfoSourceFactory) SatelliteInfoSource(parent *qt.QObject) *QGeoSatelliteInfoSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return newQGeoSatelliteInfoSource(C.QGeoPositionInfoSourceFactory_satelliteInfoSource(this.h, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoPositionInfoSourceFactory) AreaMonitor(parent *qt.QObject) *QGeoAreaMonitorSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	return newQGeoAreaMonitorSource(C.QGeoPositionInfoSourceFactory_areaMonitor(this.h, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QGeoPositionInfoSourceFactory) OperatorAssign(param1 *QGeoPositionInfoSourceFactory) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QGeoPositionInfoSourceFactory_operatorAssign(this.h, param1.cPointer())
}
func (this *QGeoPositionInfoSourceFactory) OnPositionInfoSource(slot func(parent *qt.QObject) *QGeoPositionInfoSource) {
	ok := C.QGeoPositionInfoSourceFactory_override_virtual_positionInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactory_positionInfoSource
func miqt_exec_callback_QGeoPositionInfoSourceFactory_positionInfoSource(self *C.QGeoPositionInfoSourceFactory, cb C.intptr_t, parent *C.QObject) *C.QGeoPositionInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoPositionInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactory) OnSatelliteInfoSource(slot func(parent *qt.QObject) *QGeoSatelliteInfoSource) {
	ok := C.QGeoPositionInfoSourceFactory_override_virtual_satelliteInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactory_satelliteInfoSource
func miqt_exec_callback_QGeoPositionInfoSourceFactory_satelliteInfoSource(self *C.QGeoPositionInfoSourceFactory, cb C.intptr_t, parent *C.QObject) *C.QGeoSatelliteInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoSatelliteInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactory) OnAreaMonitor(slot func(parent *qt.QObject) *QGeoAreaMonitorSource) {
	ok := C.QGeoPositionInfoSourceFactory_override_virtual_areaMonitor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactory_areaMonitor
func miqt_exec_callback_QGeoPositionInfoSourceFactory_areaMonitor(self *C.QGeoPositionInfoSourceFactory, cb C.intptr_t, parent *C.QObject) *C.QGeoAreaMonitorSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoAreaMonitorSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGeoPositionInfoSourceFactory) Delete() {
	C.QGeoPositionInfoSourceFactory_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoPositionInfoSourceFactory) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoPositionInfoSourceFactory_delete((*C.QGeoPositionInfoSourceFactory)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGeoPositionInfoSourceFactoryV2 struct {
	h  *C.QGeoPositionInfoSourceFactoryV2
	gc *[1]unsafe.Pointer
	*QGeoPositionInfoSourceFactory
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoPositionInfoSourceFactoryV2) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGeoPositionInfoSourceFactory.miqtSetGC(gc)
}

func (this *QGeoPositionInfoSourceFactoryV2) cPointer() *C.QGeoPositionInfoSourceFactoryV2 {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoPositionInfoSourceFactoryV2) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoPositionInfoSourceFactoryV2 constructs the type using only CGO pointers.
func newQGeoPositionInfoSourceFactoryV2(h *C.QGeoPositionInfoSourceFactoryV2) *QGeoPositionInfoSourceFactoryV2 {
	if h == nil {
		return nil
	}
	var outptr_QGeoPositionInfoSourceFactory *C.QGeoPositionInfoSourceFactory = nil
	C.QGeoPositionInfoSourceFactoryV2_virtbase(h, &outptr_QGeoPositionInfoSourceFactory)

	return &QGeoPositionInfoSourceFactoryV2{h: h,
		QGeoPositionInfoSourceFactory: newQGeoPositionInfoSourceFactory(outptr_QGeoPositionInfoSourceFactory)}
}

// UnsafeNewQGeoPositionInfoSourceFactoryV2 constructs the type using only unsafe pointers.
func UnsafeNewQGeoPositionInfoSourceFactoryV2(h unsafe.Pointer) *QGeoPositionInfoSourceFactoryV2 {
	return newQGeoPositionInfoSourceFactoryV2((*C.QGeoPositionInfoSourceFactoryV2)(h))
}

// NewQGeoPositionInfoSourceFactoryV2 constructs a new QGeoPositionInfoSourceFactoryV2 object.
func NewQGeoPositionInfoSourceFactoryV2(param1 *QGeoPositionInfoSourceFactoryV2) *QGeoPositionInfoSourceFactoryV2 {
	defer runtime.KeepAlive(param1)

	return newQGeoPositionInfoSourceFactoryV2(C.QGeoPositionInfoSourceFactoryV2_new(param1.cPointer()))
}

func (this *QGeoPositionInfoSourceFactoryV2) PositionInfoSourceWithParameters(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoPositionInfoSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	defer runtime.KeepAlive(parameters)
	parameters_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray_ptr))
	parameters_Keys_CArray := unsafe.Slice(parameters_Keys_CArray_ptr, len(parameters))
	parameters_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray_ptr))
	parameters_Values_CArray := unsafe.Slice(parameters_Values_CArray_ptr, len(parameters))
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
		keys:   unsafe.Pointer(parameters_Keys_CArray_ptr),
		values: unsafe.Pointer(parameters_Values_CArray_ptr),
	}
	return newQGeoPositionInfoSource(C.QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactoryV2) SatelliteInfoSourceWithParameters(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoSatelliteInfoSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	defer runtime.KeepAlive(parameters)
	parameters_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray_ptr))
	parameters_Keys_CArray := unsafe.Slice(parameters_Keys_CArray_ptr, len(parameters))
	parameters_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray_ptr))
	parameters_Values_CArray := unsafe.Slice(parameters_Values_CArray_ptr, len(parameters))
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
		keys:   unsafe.Pointer(parameters_Keys_CArray_ptr),
		values: unsafe.Pointer(parameters_Values_CArray_ptr),
	}
	return newQGeoSatelliteInfoSource(C.QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactoryV2) AreaMonitorWithParameters(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoAreaMonitorSource {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(parent)
	defer runtime.KeepAlive(parameters)
	parameters_Keys_CArray_ptr := (*C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Keys_CArray_ptr))
	parameters_Keys_CArray := unsafe.Slice(parameters_Keys_CArray_ptr, len(parameters))
	parameters_Values_CArray_ptr := (**C.QVariant)(C.malloc(C.size_t(8 * len(parameters))))
	defer C.free(unsafe.Pointer(parameters_Values_CArray_ptr))
	parameters_Values_CArray := unsafe.Slice(parameters_Values_CArray_ptr, len(parameters))
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
		keys:   unsafe.Pointer(parameters_Keys_CArray_ptr),
		values: unsafe.Pointer(parameters_Values_CArray_ptr),
	}
	return newQGeoAreaMonitorSource(C.QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(this.h, (*C.QObject)(parent.UnsafePointer()), parameters_mm))
}

func (this *QGeoPositionInfoSourceFactoryV2) OperatorAssign(param1 *QGeoPositionInfoSourceFactoryV2) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QGeoPositionInfoSourceFactoryV2_operatorAssign(this.h, param1.cPointer())
}
func (this *QGeoPositionInfoSourceFactoryV2) OnPositionInfoSourceWithParameters(slot func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoPositionInfoSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSourceWithParameters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject, parameters C.struct_miqt_map) *C.QGeoPositionInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoPositionInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var parameters_mm C.struct_miqt_map = parameters
	parameters_ret := make(map[string]qt.QVariant, int(parameters_mm.len))
	parameters_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(parameters_mm.keys)), int(parameters_mm.len))
	parameters_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(parameters_mm.values)), int(parameters_mm.len))
	for i := 0; i < int(parameters_mm.len); i++ {
		var parameters_mapkey_ms C.struct_miqt_string = parameters_Keys[i]
		parameters_mapkey_ret := C.GoStringN(parameters_mapkey_ms.data, C.int(int64(parameters_mapkey_ms.len)))
		C.free(unsafe.Pointer(parameters_mapkey_ms.data))
		parameters_entry_Key := parameters_mapkey_ret
		parameters_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(parameters_Values[i]))
		parameters_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parameters_entry_Value := *parameters_mapval_goptr

		parameters_ret[parameters_entry_Key] = parameters_entry_Value
	}
	slotval2 := parameters_ret

	virtualReturn := gofunc(slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactoryV2) OnSatelliteInfoSourceWithParameters(slot func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoSatelliteInfoSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSourceWithParameters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject, parameters C.struct_miqt_map) *C.QGeoSatelliteInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoSatelliteInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var parameters_mm C.struct_miqt_map = parameters
	parameters_ret := make(map[string]qt.QVariant, int(parameters_mm.len))
	parameters_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(parameters_mm.keys)), int(parameters_mm.len))
	parameters_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(parameters_mm.values)), int(parameters_mm.len))
	for i := 0; i < int(parameters_mm.len); i++ {
		var parameters_mapkey_ms C.struct_miqt_string = parameters_Keys[i]
		parameters_mapkey_ret := C.GoStringN(parameters_mapkey_ms.data, C.int(int64(parameters_mapkey_ms.len)))
		C.free(unsafe.Pointer(parameters_mapkey_ms.data))
		parameters_entry_Key := parameters_mapkey_ret
		parameters_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(parameters_Values[i]))
		parameters_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parameters_entry_Value := *parameters_mapval_goptr

		parameters_ret[parameters_entry_Key] = parameters_entry_Value
	}
	slotval2 := parameters_ret

	virtualReturn := gofunc(slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactoryV2) OnAreaMonitorWithParameters(slot func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoAreaMonitorSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitorWithParameters(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject, parameters C.struct_miqt_map) *C.QGeoAreaMonitorSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject, parameters map[string]qt.QVariant) *QGeoAreaMonitorSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	var parameters_mm C.struct_miqt_map = parameters
	parameters_ret := make(map[string]qt.QVariant, int(parameters_mm.len))
	parameters_Keys := unsafe.Slice((*C.struct_miqt_string)(unsafe.Pointer(parameters_mm.keys)), int(parameters_mm.len))
	parameters_Values := unsafe.Slice((**C.QVariant)(unsafe.Pointer(parameters_mm.values)), int(parameters_mm.len))
	for i := 0; i < int(parameters_mm.len); i++ {
		var parameters_mapkey_ms C.struct_miqt_string = parameters_Keys[i]
		parameters_mapkey_ret := C.GoStringN(parameters_mapkey_ms.data, C.int(int64(parameters_mapkey_ms.len)))
		C.free(unsafe.Pointer(parameters_mapkey_ms.data))
		parameters_entry_Key := parameters_mapkey_ret
		parameters_mapval_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(parameters_Values[i]))
		parameters_mapval_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		parameters_entry_Value := *parameters_mapval_goptr

		parameters_ret[parameters_entry_Key] = parameters_entry_Value
	}
	slotval2 := parameters_ret

	virtualReturn := gofunc(slotval1, slotval2)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactoryV2) OnPositionInfoSource(slot func(parent *qt.QObject) *QGeoPositionInfoSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSource
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSource(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject) *C.QGeoPositionInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoPositionInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactoryV2) OnSatelliteInfoSource(slot func(parent *qt.QObject) *QGeoSatelliteInfoSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSource(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSource
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSource(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject) *C.QGeoSatelliteInfoSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoSatelliteInfoSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}
func (this *QGeoPositionInfoSourceFactoryV2) OnAreaMonitor(slot func(parent *qt.QObject) *QGeoAreaMonitorSource) {
	ok := C.QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitor
func miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitor(self *C.QGeoPositionInfoSourceFactoryV2, cb C.intptr_t, parent *C.QObject) *C.QGeoAreaMonitorSource {
	gofunc, ok := cgo.Handle(cb).Value().(func(parent *qt.QObject) *QGeoAreaMonitorSource)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(parent))

	virtualReturn := gofunc(slotval1)
	defer runtime.KeepAlive(virtualReturn)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGeoPositionInfoSourceFactoryV2) Delete() {
	C.QGeoPositionInfoSourceFactoryV2_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoPositionInfoSourceFactoryV2) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoPositionInfoSourceFactoryV2_delete((*C.QGeoPositionInfoSourceFactoryV2)(gc[0]))
	})
	this.miqtSetGC(gc)
}
