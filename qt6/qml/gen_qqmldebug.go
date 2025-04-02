package qml

/*

#include "gen_qqmldebug.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlDebuggingEnabler__StartMode int

const (
	QQmlDebuggingEnabler__DoNotWaitForClient QQmlDebuggingEnabler__StartMode = 0
	QQmlDebuggingEnabler__WaitForClient      QQmlDebuggingEnabler__StartMode = 1
)

type QQmlDebuggingEnabler struct {
	h *C.QQmlDebuggingEnabler
}

func (this *QQmlDebuggingEnabler) cPointer() *C.QQmlDebuggingEnabler {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlDebuggingEnabler) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlDebuggingEnabler constructs the type using only CGO pointers.
func newQQmlDebuggingEnabler(h *C.QQmlDebuggingEnabler) *QQmlDebuggingEnabler {
	if h == nil {
		return nil
	}

	return &QQmlDebuggingEnabler{h: h}
}

// UnsafeNewQQmlDebuggingEnabler constructs the type using only unsafe pointers.
func UnsafeNewQQmlDebuggingEnabler(h unsafe.Pointer) *QQmlDebuggingEnabler {
	return newQQmlDebuggingEnabler((*C.QQmlDebuggingEnabler)(h))
}

// NewQQmlDebuggingEnabler constructs a new QQmlDebuggingEnabler object.
func NewQQmlDebuggingEnabler() *QQmlDebuggingEnabler {

	return newQQmlDebuggingEnabler(C.QQmlDebuggingEnabler_new())
}

// NewQQmlDebuggingEnabler2 constructs a new QQmlDebuggingEnabler object.
func NewQQmlDebuggingEnabler2(printWarning bool) *QQmlDebuggingEnabler {

	return newQQmlDebuggingEnabler(C.QQmlDebuggingEnabler_new2((C.bool)(printWarning)))
}

func QQmlDebuggingEnabler_EnableDebugging(printWarning bool) {
	C.QQmlDebuggingEnabler_enableDebugging((C.bool)(printWarning))
}

func QQmlDebuggingEnabler_DebuggerServices() []string {
	var _ma C.struct_miqt_array = C.QQmlDebuggingEnabler_debuggerServices()
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

func QQmlDebuggingEnabler_InspectorServices() []string {
	var _ma C.struct_miqt_array = C.QQmlDebuggingEnabler_inspectorServices()
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

func QQmlDebuggingEnabler_ProfilerServices() []string {
	var _ma C.struct_miqt_array = C.QQmlDebuggingEnabler_profilerServices()
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

func QQmlDebuggingEnabler_NativeDebuggerServices() []string {
	var _ma C.struct_miqt_array = C.QQmlDebuggingEnabler_nativeDebuggerServices()
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

func QQmlDebuggingEnabler_SetServices(services []string) {
	services_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(services))))
	defer C.free(unsafe.Pointer(services_CArray))
	for i := range services {
		services_i_ms := C.struct_miqt_string{}
		services_i_ms.data = C.CString(services[i])
		services_i_ms.len = C.size_t(len(services[i]))
		defer C.free(unsafe.Pointer(services_i_ms.data))
		services_CArray[i] = services_i_ms
	}
	services_ma := C.struct_miqt_array{len: C.size_t(len(services)), data: unsafe.Pointer(services_CArray)}
	C.QQmlDebuggingEnabler_setServices(services_ma)
}

func QQmlDebuggingEnabler_StartTcpDebugServer(port int) bool {
	return (bool)(C.QQmlDebuggingEnabler_startTcpDebugServer((C.int)(port)))
}

func QQmlDebuggingEnabler_ConnectToLocalDebugger(socketFileName string) bool {
	socketFileName_ms := C.struct_miqt_string{}
	socketFileName_ms.data = C.CString(socketFileName)
	socketFileName_ms.len = C.size_t(len(socketFileName))
	defer C.free(unsafe.Pointer(socketFileName_ms.data))
	return (bool)(C.QQmlDebuggingEnabler_connectToLocalDebugger(socketFileName_ms))
}

func QQmlDebuggingEnabler_StartDebugConnector(pluginName string) bool {
	pluginName_ms := C.struct_miqt_string{}
	pluginName_ms.data = C.CString(pluginName)
	pluginName_ms.len = C.size_t(len(pluginName))
	defer C.free(unsafe.Pointer(pluginName_ms.data))
	return (bool)(C.QQmlDebuggingEnabler_startDebugConnector(pluginName_ms))
}

func QQmlDebuggingEnabler_StartTcpDebugServer2(port int, mode QQmlDebuggingEnabler__StartMode) bool {
	return (bool)(C.QQmlDebuggingEnabler_startTcpDebugServer2((C.int)(port), (C.int)(mode)))
}

func QQmlDebuggingEnabler_StartTcpDebugServer3(port int, mode QQmlDebuggingEnabler__StartMode, hostName string) bool {
	hostName_ms := C.struct_miqt_string{}
	hostName_ms.data = C.CString(hostName)
	hostName_ms.len = C.size_t(len(hostName))
	defer C.free(unsafe.Pointer(hostName_ms.data))
	return (bool)(C.QQmlDebuggingEnabler_startTcpDebugServer3((C.int)(port), (C.int)(mode), hostName_ms))
}

func QQmlDebuggingEnabler_ConnectToLocalDebugger2(socketFileName string, mode QQmlDebuggingEnabler__StartMode) bool {
	socketFileName_ms := C.struct_miqt_string{}
	socketFileName_ms.data = C.CString(socketFileName)
	socketFileName_ms.len = C.size_t(len(socketFileName))
	defer C.free(unsafe.Pointer(socketFileName_ms.data))
	return (bool)(C.QQmlDebuggingEnabler_connectToLocalDebugger2(socketFileName_ms, (C.int)(mode)))
}

func QQmlDebuggingEnabler_StartDebugConnector2(pluginName string, configuration map[string]qt6.QVariant) bool {
	pluginName_ms := C.struct_miqt_string{}
	pluginName_ms.data = C.CString(pluginName)
	pluginName_ms.len = C.size_t(len(pluginName))
	defer C.free(unsafe.Pointer(pluginName_ms.data))
	configuration_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Keys_CArray))
	configuration_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(configuration))))
	defer C.free(unsafe.Pointer(configuration_Values_CArray))
	configuration_ctr := 0
	for configuration_k, configuration_v := range configuration {
		configuration_k_ms := C.struct_miqt_string{}
		configuration_k_ms.data = C.CString(configuration_k)
		configuration_k_ms.len = C.size_t(len(configuration_k))
		defer C.free(unsafe.Pointer(configuration_k_ms.data))
		configuration_Keys_CArray[configuration_ctr] = configuration_k_ms
		configuration_Values_CArray[configuration_ctr] = (*C.QVariant)(configuration_v.UnsafePointer())
		configuration_ctr++
	}
	configuration_mm := C.struct_miqt_map{
		len:    C.size_t(len(configuration)),
		keys:   unsafe.Pointer(configuration_Keys_CArray),
		values: unsafe.Pointer(configuration_Values_CArray),
	}
	return (bool)(C.QQmlDebuggingEnabler_startDebugConnector2(pluginName_ms, configuration_mm))
}

// Delete this object from C++ memory.
func (this *QQmlDebuggingEnabler) Delete() {
	C.QQmlDebuggingEnabler_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlDebuggingEnabler) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlDebuggingEnabler) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
