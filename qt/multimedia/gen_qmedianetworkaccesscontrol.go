package multimedia

/*

#include "gen_qmedianetworkaccesscontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMediaNetworkAccessControl struct {
	h          *C.QMediaNetworkAccessControl
	isSubclass bool
	*QMediaControl
}

func (this *QMediaNetworkAccessControl) cPointer() *C.QMediaNetworkAccessControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMediaNetworkAccessControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMediaNetworkAccessControl constructs the type using only CGO pointers.
func newQMediaNetworkAccessControl(h *C.QMediaNetworkAccessControl, h_QMediaControl *C.QMediaControl, h_QObject *C.QObject) *QMediaNetworkAccessControl {
	if h == nil {
		return nil
	}
	return &QMediaNetworkAccessControl{h: h,
		QMediaControl: newQMediaControl(h_QMediaControl, h_QObject)}
}

// UnsafeNewQMediaNetworkAccessControl constructs the type using only unsafe pointers.
func UnsafeNewQMediaNetworkAccessControl(h unsafe.Pointer, h_QMediaControl unsafe.Pointer, h_QObject unsafe.Pointer) *QMediaNetworkAccessControl {
	if h == nil {
		return nil
	}

	return &QMediaNetworkAccessControl{h: (*C.QMediaNetworkAccessControl)(h),
		QMediaControl: UnsafeNewQMediaControl(h_QMediaControl, h_QObject)}
}

func (this *QMediaNetworkAccessControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QMediaNetworkAccessControl_MetaObject(this.h)))
}

func (this *QMediaNetworkAccessControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QMediaNetworkAccessControl_Metacast(this.h, param1_Cstring))
}

func QMediaNetworkAccessControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaNetworkAccessControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QMediaNetworkAccessControl) SetConfigurations(configuration []network.QNetworkConfiguration) {
	configuration_CArray := (*[0xffff]*C.QNetworkConfiguration)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_CArray))
	for i := range configuration {
		configuration_CArray[i] = (*C.QNetworkConfiguration)(configuration[i].UnsafePointer())
	}
	configuration_ma := C.struct_miqt_array{len: C.size_t(len(configuration)), data: unsafe.Pointer(configuration_CArray)}
	C.QMediaNetworkAccessControl_SetConfigurations(this.h, configuration_ma)
}

func (this *QMediaNetworkAccessControl) CurrentConfiguration() *network.QNetworkConfiguration {
	_ret := C.QMediaNetworkAccessControl_CurrentConfiguration(this.h)
	_goptr := network.UnsafeNewQNetworkConfiguration(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMediaNetworkAccessControl) ConfigurationChanged(configuration *network.QNetworkConfiguration) {
	C.QMediaNetworkAccessControl_ConfigurationChanged(this.h, (*C.QNetworkConfiguration)(configuration.UnsafePointer()))
}
func (this *QMediaNetworkAccessControl) OnConfigurationChanged(slot func(configuration *network.QNetworkConfiguration)) {
	C.QMediaNetworkAccessControl_connect_ConfigurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QMediaNetworkAccessControl_ConfigurationChanged
func miqt_exec_callback_QMediaNetworkAccessControl_ConfigurationChanged(cb C.intptr_t, configuration *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(configuration *network.QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := network.UnsafeNewQNetworkConfiguration(unsafe.Pointer(configuration))

	gofunc(slotval1)
}

func QMediaNetworkAccessControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaNetworkAccessControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaNetworkAccessControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QMediaNetworkAccessControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QMediaNetworkAccessControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QMediaNetworkAccessControl) Delete() {
	C.QMediaNetworkAccessControl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMediaNetworkAccessControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QMediaNetworkAccessControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
