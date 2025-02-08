package multimedia

/*

#include "gen_qaudiosystemplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAudioSystemFactoryInterface struct {
	h *C.QAudioSystemFactoryInterface
}

func (this *QAudioSystemFactoryInterface) cPointer() *C.QAudioSystemFactoryInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSystemFactoryInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioSystemFactoryInterface constructs the type using only CGO pointers.
func newQAudioSystemFactoryInterface(h *C.QAudioSystemFactoryInterface) *QAudioSystemFactoryInterface {
	if h == nil {
		return nil
	}

	return &QAudioSystemFactoryInterface{h: h}
}

// UnsafeNewQAudioSystemFactoryInterface constructs the type using only unsafe pointers.
func UnsafeNewQAudioSystemFactoryInterface(h unsafe.Pointer) *QAudioSystemFactoryInterface {
	return newQAudioSystemFactoryInterface((*C.QAudioSystemFactoryInterface)(h))
}

func (this *QAudioSystemFactoryInterface) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemFactoryInterface_availableDevices(this.h, (C.int)(param1))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAudioSystemFactoryInterface) CreateInput(device []byte) *QAbstractAudioInput {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioInput(C.QAudioSystemFactoryInterface_createInput(this.h, device_alias))
}

func (this *QAudioSystemFactoryInterface) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioOutput(C.QAudioSystemFactoryInterface_createOutput(this.h, device_alias))
}

func (this *QAudioSystemFactoryInterface) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioDeviceInfo(C.QAudioSystemFactoryInterface_createDeviceInfo(this.h, device_alias, (C.int)(mode)))
}

func (this *QAudioSystemFactoryInterface) OperatorAssign(param1 *QAudioSystemFactoryInterface) {
	C.QAudioSystemFactoryInterface_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAudioSystemFactoryInterface) Delete() {
	C.QAudioSystemFactoryInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSystemFactoryInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSystemFactoryInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QAudioSystemPlugin struct {
	h *C.QAudioSystemPlugin
	*qt.QObject
	*QAudioSystemFactoryInterface
}

func (this *QAudioSystemPlugin) cPointer() *C.QAudioSystemPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAudioSystemPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAudioSystemPlugin constructs the type using only CGO pointers.
func newQAudioSystemPlugin(h *C.QAudioSystemPlugin) *QAudioSystemPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QAudioSystemFactoryInterface *C.QAudioSystemFactoryInterface = nil
	C.QAudioSystemPlugin_virtbase(h, &outptr_QObject, &outptr_QAudioSystemFactoryInterface)

	return &QAudioSystemPlugin{h: h,
		QObject:                      qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QAudioSystemFactoryInterface: newQAudioSystemFactoryInterface(outptr_QAudioSystemFactoryInterface)}
}

// UnsafeNewQAudioSystemPlugin constructs the type using only unsafe pointers.
func UnsafeNewQAudioSystemPlugin(h unsafe.Pointer) *QAudioSystemPlugin {
	return newQAudioSystemPlugin((*C.QAudioSystemPlugin)(h))
}

// NewQAudioSystemPlugin constructs a new QAudioSystemPlugin object.
func NewQAudioSystemPlugin() *QAudioSystemPlugin {

	return newQAudioSystemPlugin(C.QAudioSystemPlugin_new())
}

// NewQAudioSystemPlugin2 constructs a new QAudioSystemPlugin object.
func NewQAudioSystemPlugin2(parent *qt.QObject) *QAudioSystemPlugin {

	return newQAudioSystemPlugin(C.QAudioSystemPlugin_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QAudioSystemPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSystemPlugin_metaObject(this.h)))
}

func (this *QAudioSystemPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSystemPlugin_metacast(this.h, param1_Cstring))
}

func QAudioSystemPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSystemPlugin) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemPlugin_availableDevices(this.h, (C.int)(param1))
	_ret := make([][]byte, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_bytearray C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoBytes(unsafe.Pointer(_lv_bytearray.data), C.int(int64(_lv_bytearray.len)))
		C.free(unsafe.Pointer(_lv_bytearray.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func (this *QAudioSystemPlugin) CreateInput(device []byte) *QAbstractAudioInput {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioInput(C.QAudioSystemPlugin_createInput(this.h, device_alias))
}

func (this *QAudioSystemPlugin) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioOutput(C.QAudioSystemPlugin_createOutput(this.h, device_alias))
}

func (this *QAudioSystemPlugin) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	if len(device) > 0 {
		device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	} else {
		device_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	device_alias.len = C.size_t(len(device))
	return newQAbstractAudioDeviceInfo(C.QAudioSystemPlugin_createDeviceInfo(this.h, device_alias, (C.int)(mode)))
}

func QAudioSystemPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QAudioSystemPlugin that was directly constructed.
func (this *QAudioSystemPlugin) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QAudioSystemPlugin_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QAudioSystemPlugin that was directly constructed.
func (this *QAudioSystemPlugin) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioSystemPlugin_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QAudioSystemPlugin that was directly constructed.
func (this *QAudioSystemPlugin) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QAudioSystemPlugin_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QAudioSystemPlugin that was directly constructed.
func (this *QAudioSystemPlugin) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QAudioSystemPlugin_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}
func (this *QAudioSystemPlugin) OnAvailableDevices(slot func(param1 QAudio__Mode) [][]byte) {
	ok := C.QAudioSystemPlugin_override_virtual_availableDevices(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_availableDevices
func miqt_exec_callback_QAudioSystemPlugin_availableDevices(self *C.QAudioSystemPlugin, cb C.intptr_t, param1 C.int) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 QAudio__Mode) [][]byte)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAudio__Mode)(param1)

	virtualReturn := gofunc(slotval1)
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_alias := C.struct_miqt_string{}
		if len(virtualReturn[i]) > 0 {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[i][0]))
		} else {
			virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(nil))
		}
		virtualReturn_i_alias.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_alias
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QAudioSystemPlugin) OnCreateInput(slot func(device []byte) *QAbstractAudioInput) {
	ok := C.QAudioSystemPlugin_override_virtual_createInput(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_createInput
func miqt_exec_callback_QAudioSystemPlugin_createInput(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string) *C.QAbstractAudioInput {
	gofunc, ok := cgo.Handle(cb).Value().(func(device []byte) *QAbstractAudioInput)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var device_bytearray C.struct_miqt_string = device
	device_ret := C.GoBytes(unsafe.Pointer(device_bytearray.data), C.int(int64(device_bytearray.len)))
	C.free(unsafe.Pointer(device_bytearray.data))
	slotval1 := device_ret

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAudioSystemPlugin) OnCreateOutput(slot func(device []byte) *QAbstractAudioOutput) {
	ok := C.QAudioSystemPlugin_override_virtual_createOutput(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_createOutput
func miqt_exec_callback_QAudioSystemPlugin_createOutput(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string) *C.QAbstractAudioOutput {
	gofunc, ok := cgo.Handle(cb).Value().(func(device []byte) *QAbstractAudioOutput)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var device_bytearray C.struct_miqt_string = device
	device_ret := C.GoBytes(unsafe.Pointer(device_bytearray.data), C.int(int64(device_bytearray.len)))
	C.free(unsafe.Pointer(device_bytearray.data))
	slotval1 := device_ret

	virtualReturn := gofunc(slotval1)

	return virtualReturn.cPointer()

}
func (this *QAudioSystemPlugin) OnCreateDeviceInfo(slot func(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo) {
	ok := C.QAudioSystemPlugin_override_virtual_createDeviceInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_createDeviceInfo
func miqt_exec_callback_QAudioSystemPlugin_createDeviceInfo(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string, mode C.int) *C.QAbstractAudioDeviceInfo {
	gofunc, ok := cgo.Handle(cb).Value().(func(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var device_bytearray C.struct_miqt_string = device
	device_ret := C.GoBytes(unsafe.Pointer(device_bytearray.data), C.int(int64(device_bytearray.len)))
	C.free(unsafe.Pointer(device_bytearray.data))
	slotval1 := device_ret
	slotval2 := (QAudio__Mode)(mode)

	virtualReturn := gofunc(slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QAudioSystemPlugin) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QAudioSystemPlugin_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSystemPlugin) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QAudioSystemPlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_event
func miqt_exec_callback_QAudioSystemPlugin_event(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSystemPlugin) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QAudioSystemPlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSystemPlugin) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QAudioSystemPlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_eventFilter
func miqt_exec_callback_QAudioSystemPlugin_eventFilter(self *C.QAudioSystemPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QAudioSystemPlugin) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QAudioSystemPlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QAudioSystemPlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_timerEvent
func miqt_exec_callback_QAudioSystemPlugin_timerEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAudioSystemPlugin_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QAudioSystemPlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_childEvent
func miqt_exec_callback_QAudioSystemPlugin_childEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAudioSystemPlugin_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QAudioSystemPlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_customEvent
func miqt_exec_callback_QAudioSystemPlugin_customEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAudioSystemPlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAudioSystemPlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_connectNotify
func miqt_exec_callback_QAudioSystemPlugin_connectNotify(self *C.QAudioSystemPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAudioSystemPlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QAudioSystemPlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAudioSystemPlugin_disconnectNotify
func miqt_exec_callback_QAudioSystemPlugin_disconnectNotify(self *C.QAudioSystemPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QAudioSystemPlugin) Delete() {
	C.QAudioSystemPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSystemPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSystemPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
