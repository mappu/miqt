package qt

/*

#include "gen_qpluginloader.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPluginLoader struct {
	h          *C.QPluginLoader
	isSubclass bool
	*QObject
}

func (this *QPluginLoader) cPointer() *C.QPluginLoader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginLoader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPluginLoader constructs the type using only CGO pointers.
func newQPluginLoader(h *C.QPluginLoader) *QPluginLoader {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QPluginLoader_virtbase(h, &outptr_QObject)

	return &QPluginLoader{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQPluginLoader constructs the type using only unsafe pointers.
func UnsafeNewQPluginLoader(h unsafe.Pointer) *QPluginLoader {
	return newQPluginLoader((*C.QPluginLoader)(h))
}

// NewQPluginLoader constructs a new QPluginLoader object.
func NewQPluginLoader() *QPluginLoader {

	ret := newQPluginLoader(C.QPluginLoader_new())
	ret.isSubclass = true
	return ret
}

// NewQPluginLoader2 constructs a new QPluginLoader object.
func NewQPluginLoader2(fileName string) *QPluginLoader {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	ret := newQPluginLoader(C.QPluginLoader_new2(fileName_ms))
	ret.isSubclass = true
	return ret
}

// NewQPluginLoader3 constructs a new QPluginLoader object.
func NewQPluginLoader3(parent *QObject) *QPluginLoader {

	ret := newQPluginLoader(C.QPluginLoader_new3(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

// NewQPluginLoader4 constructs a new QPluginLoader object.
func NewQPluginLoader4(fileName string, parent *QObject) *QPluginLoader {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	ret := newQPluginLoader(C.QPluginLoader_new4(fileName_ms, parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QPluginLoader) MetaObject() *QMetaObject {
	return newQMetaObject(C.QPluginLoader_MetaObject(this.h))
}

func (this *QPluginLoader) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPluginLoader_Metacast(this.h, param1_Cstring))
}

func QPluginLoader_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPluginLoader_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPluginLoader) Instance() *QObject {
	return newQObject(C.QPluginLoader_Instance(this.h))
}

func (this *QPluginLoader) MetaData() *QJsonObject {
	_goptr := newQJsonObject(C.QPluginLoader_MetaData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QPluginLoader_StaticInstances() []*QObject {
	var _ma C.struct_miqt_array = C.QPluginLoader_StaticInstances()
	_ret := make([]*QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQObject(_outCast[i])
	}
	return _ret
}

func QPluginLoader_StaticPlugins() []QStaticPlugin {
	var _ma C.struct_miqt_array = C.QPluginLoader_StaticPlugins()
	_ret := make([]QStaticPlugin, int(_ma.len))
	_outCast := (*[0xffff]*C.QStaticPlugin)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQStaticPlugin(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QPluginLoader) Load() bool {
	return (bool)(C.QPluginLoader_Load(this.h))
}

func (this *QPluginLoader) Unload() bool {
	return (bool)(C.QPluginLoader_Unload(this.h))
}

func (this *QPluginLoader) IsLoaded() bool {
	return (bool)(C.QPluginLoader_IsLoaded(this.h))
}

func (this *QPluginLoader) SetFileName(fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QPluginLoader_SetFileName(this.h, fileName_ms)
}

func (this *QPluginLoader) FileName() string {
	var _ms C.struct_miqt_string = C.QPluginLoader_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPluginLoader) ErrorString() string {
	var _ms C.struct_miqt_string = C.QPluginLoader_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPluginLoader) SetLoadHints(loadHints QLibrary__LoadHint) {
	C.QPluginLoader_SetLoadHints(this.h, (C.int)(loadHints))
}

func (this *QPluginLoader) LoadHints() QLibrary__LoadHint {
	return (QLibrary__LoadHint)(C.QPluginLoader_LoadHints(this.h))
}

func QPluginLoader_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPluginLoader_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPluginLoader_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPluginLoader_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPluginLoader_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPluginLoader) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QPluginLoader_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QPluginLoader) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_Event
func miqt_exec_callback_QPluginLoader_Event(self *C.QPluginLoader, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QPluginLoader{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QPluginLoader) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QPluginLoader_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QPluginLoader) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_EventFilter
func miqt_exec_callback_QPluginLoader_EventFilter(self *C.QPluginLoader, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QPluginLoader{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QPluginLoader) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QPluginLoader_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPluginLoader) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_TimerEvent
func miqt_exec_callback_QPluginLoader_TimerEvent(self *C.QPluginLoader, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QPluginLoader{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QPluginLoader) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QPluginLoader_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPluginLoader) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_ChildEvent
func miqt_exec_callback_QPluginLoader_ChildEvent(self *C.QPluginLoader, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QPluginLoader{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QPluginLoader) callVirtualBase_CustomEvent(event *QEvent) {

	C.QPluginLoader_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QPluginLoader) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_CustomEvent
func miqt_exec_callback_QPluginLoader_CustomEvent(self *C.QPluginLoader, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QPluginLoader{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QPluginLoader) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QPluginLoader_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPluginLoader) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_ConnectNotify
func miqt_exec_callback_QPluginLoader_ConnectNotify(self *C.QPluginLoader, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPluginLoader{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QPluginLoader) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QPluginLoader_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QPluginLoader) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPluginLoader_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPluginLoader_DisconnectNotify
func miqt_exec_callback_QPluginLoader_DisconnectNotify(self *C.QPluginLoader, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QPluginLoader{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QPluginLoader) Delete() {
	C.QPluginLoader_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginLoader) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginLoader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
