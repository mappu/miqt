package script

/*

#include "gen_qscriptextensionplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScriptExtensionPlugin struct {
	h *C.QScriptExtensionPlugin
	*qt.QObject
	*QScriptExtensionInterface
}

func (this *QScriptExtensionPlugin) cPointer() *C.QScriptExtensionPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScriptExtensionPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScriptExtensionPlugin constructs the type using only CGO pointers.
func newQScriptExtensionPlugin(h *C.QScriptExtensionPlugin) *QScriptExtensionPlugin {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	var outptr_QScriptExtensionInterface *C.QScriptExtensionInterface = nil
	C.QScriptExtensionPlugin_virtbase(h, &outptr_QObject, &outptr_QScriptExtensionInterface)

	return &QScriptExtensionPlugin{h: h,
		QObject:                   qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject)),
		QScriptExtensionInterface: newQScriptExtensionInterface(outptr_QScriptExtensionInterface)}
}

// UnsafeNewQScriptExtensionPlugin constructs the type using only unsafe pointers.
func UnsafeNewQScriptExtensionPlugin(h unsafe.Pointer) *QScriptExtensionPlugin {
	return newQScriptExtensionPlugin((*C.QScriptExtensionPlugin)(h))
}

// NewQScriptExtensionPlugin constructs a new QScriptExtensionPlugin object.
func NewQScriptExtensionPlugin() *QScriptExtensionPlugin {

	return newQScriptExtensionPlugin(C.QScriptExtensionPlugin_new())
}

// NewQScriptExtensionPlugin2 constructs a new QScriptExtensionPlugin object.
func NewQScriptExtensionPlugin2(parent *qt.QObject) *QScriptExtensionPlugin {

	return newQScriptExtensionPlugin(C.QScriptExtensionPlugin_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QScriptExtensionPlugin) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QScriptExtensionPlugin_metaObject(this.h)))
}

func (this *QScriptExtensionPlugin) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScriptExtensionPlugin_metacast(this.h, param1_Cstring))
}

func QScriptExtensionPlugin_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptExtensionPlugin_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScriptExtensionPlugin) Keys() []string {
	var _ma C.struct_miqt_array = C.QScriptExtensionPlugin_keys(this.h)
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

func (this *QScriptExtensionPlugin) Initialize(key string, engine *QScriptEngine) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QScriptExtensionPlugin_initialize(this.h, key_ms, engine.cPointer())
}

func (this *QScriptExtensionPlugin) SetupPackage(key string, engine *QScriptEngine) *QScriptValue {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := newQScriptValue(C.QScriptExtensionPlugin_setupPackage(this.h, key_ms, engine.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QScriptExtensionPlugin_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptExtensionPlugin_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptExtensionPlugin_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScriptExtensionPlugin_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScriptExtensionPlugin_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QScriptExtensionPlugin) Onkeys(slot func() []string) {
	ok := C.QScriptExtensionPlugin_override_virtual_keys(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_keys
func miqt_exec_callback_QScriptExtensionPlugin_keys(self *C.QScriptExtensionPlugin, cb C.intptr_t) C.struct_miqt_array {
	gofunc, ok := cgo.Handle(cb).Value().(func() []string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()
	virtualReturn_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(virtualReturn))))
	defer C.free(unsafe.Pointer(virtualReturn_CArray))
	for i := range virtualReturn {
		virtualReturn_i_ms := C.struct_miqt_string{}
		virtualReturn_i_ms.data = C.CString(virtualReturn[i])
		virtualReturn_i_ms.len = C.size_t(len(virtualReturn[i]))
		defer C.free(unsafe.Pointer(virtualReturn_i_ms.data))
		virtualReturn_CArray[i] = virtualReturn_i_ms
	}
	virtualReturn_ma := C.struct_miqt_array{len: C.size_t(len(virtualReturn)), data: unsafe.Pointer(virtualReturn_CArray)}

	return virtualReturn_ma

}
func (this *QScriptExtensionPlugin) Oninitialize(slot func(key string, engine *QScriptEngine)) {
	ok := C.QScriptExtensionPlugin_override_virtual_initialize(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_initialize
func miqt_exec_callback_QScriptExtensionPlugin_initialize(self *C.QScriptExtensionPlugin, cb C.intptr_t, key C.struct_miqt_string, engine *C.QScriptEngine) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, engine *QScriptEngine))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := newQScriptEngine(engine)

	gofunc(slotval1, slotval2)

}

func (this *QScriptExtensionPlugin) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QScriptExtensionPlugin_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScriptExtensionPlugin) Onevent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QScriptExtensionPlugin_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_event
func miqt_exec_callback_QScriptExtensionPlugin_event(self *C.QScriptExtensionPlugin, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QScriptExtensionPlugin) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QScriptExtensionPlugin_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QScriptExtensionPlugin) OneventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QScriptExtensionPlugin_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_eventFilter
func miqt_exec_callback_QScriptExtensionPlugin_eventFilter(self *C.QScriptExtensionPlugin, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QScriptExtensionPlugin) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QScriptExtensionPlugin_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QScriptExtensionPlugin) OntimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QScriptExtensionPlugin_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_timerEvent
func miqt_exec_callback_QScriptExtensionPlugin_timerEvent(self *C.QScriptExtensionPlugin, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QScriptExtensionPlugin) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QScriptExtensionPlugin_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QScriptExtensionPlugin) OnchildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QScriptExtensionPlugin_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_childEvent
func miqt_exec_callback_QScriptExtensionPlugin_childEvent(self *C.QScriptExtensionPlugin, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QScriptExtensionPlugin) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QScriptExtensionPlugin_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QScriptExtensionPlugin) OncustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QScriptExtensionPlugin_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_customEvent
func miqt_exec_callback_QScriptExtensionPlugin_customEvent(self *C.QScriptExtensionPlugin, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QScriptExtensionPlugin) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QScriptExtensionPlugin_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScriptExtensionPlugin) OnconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QScriptExtensionPlugin_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_connectNotify
func miqt_exec_callback_QScriptExtensionPlugin_connectNotify(self *C.QScriptExtensionPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QScriptExtensionPlugin) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QScriptExtensionPlugin_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QScriptExtensionPlugin) OndisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QScriptExtensionPlugin_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QScriptExtensionPlugin_disconnectNotify
func miqt_exec_callback_QScriptExtensionPlugin_disconnectNotify(self *C.QScriptExtensionPlugin, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QScriptExtensionPlugin{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QScriptExtensionPlugin) Delete() {
	C.QScriptExtensionPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScriptExtensionPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QScriptExtensionPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
