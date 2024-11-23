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
	h          *C.QAudioSystemFactoryInterface
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QAudioSystemFactoryInterface{h: (*C.QAudioSystemFactoryInterface)(h)}
}

func (this *QAudioSystemFactoryInterface) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemFactoryInterface_AvailableDevices(this.h, (C.int)(param1))
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
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioInput(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateInput(this.h, device_alias)), nil)
}

func (this *QAudioSystemFactoryInterface) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioOutput(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateOutput(this.h, device_alias)), nil)
}

func (this *QAudioSystemFactoryInterface) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioDeviceInfo(unsafe.Pointer(C.QAudioSystemFactoryInterface_CreateDeviceInfo(this.h, device_alias, (C.int)(mode))), nil)
}

func (this *QAudioSystemFactoryInterface) OperatorAssign(param1 *QAudioSystemFactoryInterface) {
	C.QAudioSystemFactoryInterface_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QAudioSystemFactoryInterface) Delete() {
	C.QAudioSystemFactoryInterface_Delete(this.h, C.bool(this.isSubclass))
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
	h          *C.QAudioSystemPlugin
	isSubclass bool
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
func newQAudioSystemPlugin(h *C.QAudioSystemPlugin, h_QObject *C.QObject, h_QAudioSystemFactoryInterface *C.QAudioSystemFactoryInterface) *QAudioSystemPlugin {
	if h == nil {
		return nil
	}
	return &QAudioSystemPlugin{h: h,
		QObject:                      qt.UnsafeNewQObject(unsafe.Pointer(h_QObject)),
		QAudioSystemFactoryInterface: newQAudioSystemFactoryInterface(h_QAudioSystemFactoryInterface)}
}

// UnsafeNewQAudioSystemPlugin constructs the type using only unsafe pointers.
func UnsafeNewQAudioSystemPlugin(h unsafe.Pointer, h_QObject unsafe.Pointer, h_QAudioSystemFactoryInterface unsafe.Pointer) *QAudioSystemPlugin {
	if h == nil {
		return nil
	}

	return &QAudioSystemPlugin{h: (*C.QAudioSystemPlugin)(h),
		QObject:                      qt.UnsafeNewQObject(h_QObject),
		QAudioSystemFactoryInterface: UnsafeNewQAudioSystemFactoryInterface(h_QAudioSystemFactoryInterface)}
}

// NewQAudioSystemPlugin constructs a new QAudioSystemPlugin object.
func NewQAudioSystemPlugin() *QAudioSystemPlugin {
	var outptr_QAudioSystemPlugin *C.QAudioSystemPlugin = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QAudioSystemFactoryInterface *C.QAudioSystemFactoryInterface = nil

	C.QAudioSystemPlugin_new(&outptr_QAudioSystemPlugin, &outptr_QObject, &outptr_QAudioSystemFactoryInterface)
	ret := newQAudioSystemPlugin(outptr_QAudioSystemPlugin, outptr_QObject, outptr_QAudioSystemFactoryInterface)
	ret.isSubclass = true
	return ret
}

// NewQAudioSystemPlugin2 constructs a new QAudioSystemPlugin object.
func NewQAudioSystemPlugin2(parent *qt.QObject) *QAudioSystemPlugin {
	var outptr_QAudioSystemPlugin *C.QAudioSystemPlugin = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QAudioSystemFactoryInterface *C.QAudioSystemFactoryInterface = nil

	C.QAudioSystemPlugin_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QAudioSystemPlugin, &outptr_QObject, &outptr_QAudioSystemFactoryInterface)
	ret := newQAudioSystemPlugin(outptr_QAudioSystemPlugin, outptr_QObject, outptr_QAudioSystemFactoryInterface)
	ret.isSubclass = true
	return ret
}

func (this *QAudioSystemPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QAudioSystemPlugin_MetaObject(this.h)))
}

func (this *QAudioSystemPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAudioSystemPlugin_Metacast(this.h, param1_Cstring))
}

func QAudioSystemPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAudioSystemPlugin) AvailableDevices(param1 QAudio__Mode) [][]byte {
	var _ma C.struct_miqt_array = C.QAudioSystemPlugin_AvailableDevices(this.h, (C.int)(param1))
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
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioInput(unsafe.Pointer(C.QAudioSystemPlugin_CreateInput(this.h, device_alias)), nil)
}

func (this *QAudioSystemPlugin) CreateOutput(device []byte) *QAbstractAudioOutput {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioOutput(unsafe.Pointer(C.QAudioSystemPlugin_CreateOutput(this.h, device_alias)), nil)
}

func (this *QAudioSystemPlugin) CreateDeviceInfo(device []byte, mode QAudio__Mode) *QAbstractAudioDeviceInfo {
	device_alias := C.struct_miqt_string{}
	device_alias.data = (*C.char)(unsafe.Pointer(&device[0]))
	device_alias.len = C.size_t(len(device))
	return UnsafeNewQAbstractAudioDeviceInfo(unsafe.Pointer(C.QAudioSystemPlugin_CreateDeviceInfo(this.h, device_alias, (C.int)(mode))), nil)
}

func QAudioSystemPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAudioSystemPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAudioSystemPlugin_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAudioSystemPlugin) OnAvailableDevices(slot func(param1 QAudio__Mode) [][]byte) {
	C.QAudioSystemPlugin_override_virtual_AvailableDevices(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_AvailableDevices
func miqt_exec_callback_QAudioSystemPlugin_AvailableDevices(self *C.QAudioSystemPlugin, cb C.intptr_t, param1 C.int) C.struct_miqt_array {
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
		virtualReturn_i_alias.data = (*C.char)(unsafe.Pointer(&virtualReturn[i][0]))
		virtualReturn_i_alias.len = C.size_t(len(virtualReturn[i]))
		virtualReturn_CArray[i] = virtualReturn_i_alias
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QAudioSystemPlugin) OnCreateInput(slot func(device []byte) *QAbstractAudioInput) {
	C.QAudioSystemPlugin_override_virtual_CreateInput(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_CreateInput
func miqt_exec_callback_QAudioSystemPlugin_CreateInput(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string) *C.QAbstractAudioInput {
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
	C.QAudioSystemPlugin_override_virtual_CreateOutput(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_CreateOutput
func miqt_exec_callback_QAudioSystemPlugin_CreateOutput(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string) *C.QAbstractAudioOutput {
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
	C.QAudioSystemPlugin_override_virtual_CreateDeviceInfo(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_CreateDeviceInfo
func miqt_exec_callback_QAudioSystemPlugin_CreateDeviceInfo(self *C.QAudioSystemPlugin, cb C.intptr_t, device C.struct_miqt_string, mode C.int) *C.QAbstractAudioDeviceInfo {
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

	return (bool)(C.QAudioSystemPlugin_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSystemPlugin) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	C.QAudioSystemPlugin_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_Event
func miqt_exec_callback_QAudioSystemPlugin_Event(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QAudioSystemPlugin_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QAudioSystemPlugin) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	C.QAudioSystemPlugin_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_EventFilter
func miqt_exec_callback_QAudioSystemPlugin_EventFilter(self *C.QAudioSystemPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QAudioSystemPlugin_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	C.QAudioSystemPlugin_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_TimerEvent
func miqt_exec_callback_QAudioSystemPlugin_TimerEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QAudioSystemPlugin_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	C.QAudioSystemPlugin_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_ChildEvent
func miqt_exec_callback_QAudioSystemPlugin_ChildEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QAudioSystemPlugin_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	C.QAudioSystemPlugin_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_CustomEvent
func miqt_exec_callback_QAudioSystemPlugin_CustomEvent(self *C.QAudioSystemPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QAudioSystemPlugin_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QAudioSystemPlugin_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_ConnectNotify
func miqt_exec_callback_QAudioSystemPlugin_ConnectNotify(self *C.QAudioSystemPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QAudioSystemPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QAudioSystemPlugin) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QAudioSystemPlugin_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QAudioSystemPlugin) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	C.QAudioSystemPlugin_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAudioSystemPlugin_DisconnectNotify
func miqt_exec_callback_QAudioSystemPlugin_DisconnectNotify(self *C.QAudioSystemPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QAudioSystemPlugin_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAudioSystemPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QAudioSystemPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
