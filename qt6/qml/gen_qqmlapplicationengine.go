package qml

/*

#include "gen_qqmlapplicationengine.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QQmlApplicationEngine struct {
	h *C.QQmlApplicationEngine
	*QQmlEngine
}

func (this *QQmlApplicationEngine) cPointer() *C.QQmlApplicationEngine {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlApplicationEngine) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlApplicationEngine constructs the type using only CGO pointers.
func newQQmlApplicationEngine(h *C.QQmlApplicationEngine) *QQmlApplicationEngine {
	if h == nil {
		return nil
	}
	var outptr_QQmlEngine *C.QQmlEngine = nil
	C.QQmlApplicationEngine_virtbase(h, &outptr_QQmlEngine)

	return &QQmlApplicationEngine{h: h,
		QQmlEngine: newQQmlEngine(outptr_QQmlEngine)}
}

// UnsafeNewQQmlApplicationEngine constructs the type using only unsafe pointers.
func UnsafeNewQQmlApplicationEngine(h unsafe.Pointer) *QQmlApplicationEngine {
	return newQQmlApplicationEngine((*C.QQmlApplicationEngine)(h))
}

// NewQQmlApplicationEngine constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine() *QQmlApplicationEngine {

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new())
}

// NewQQmlApplicationEngine2 constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine2(url *qt6.QUrl) *QQmlApplicationEngine {

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new2((*C.QUrl)(url.UnsafePointer())))
}

// NewQQmlApplicationEngine3 constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine3(filePath string) *QQmlApplicationEngine {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new3(filePath_ms))
}

// NewQQmlApplicationEngine4 constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine4(parent *qt6.QObject) *QQmlApplicationEngine {

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new4((*C.QObject)(parent.UnsafePointer())))
}

// NewQQmlApplicationEngine5 constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine5(url *qt6.QUrl, parent *qt6.QObject) *QQmlApplicationEngine {

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new5((*C.QUrl)(url.UnsafePointer()), (*C.QObject)(parent.UnsafePointer())))
}

// NewQQmlApplicationEngine6 constructs a new QQmlApplicationEngine object.
func NewQQmlApplicationEngine6(filePath string, parent *qt6.QObject) *QQmlApplicationEngine {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))

	return newQQmlApplicationEngine(C.QQmlApplicationEngine_new6(filePath_ms, (*C.QObject)(parent.UnsafePointer())))
}

func (this *QQmlApplicationEngine) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QQmlApplicationEngine_metaObject(this.h)))
}

func (this *QQmlApplicationEngine) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QQmlApplicationEngine_metacast(this.h, param1_Cstring))
}

func QQmlApplicationEngine_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QQmlApplicationEngine_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlApplicationEngine) RootObjects() []*qt6.QObject {
	var _ma C.struct_miqt_array = C.QQmlApplicationEngine_rootObjects(this.h)
	_ret := make([]*qt6.QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = qt6.UnsafeNewQObject(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QQmlApplicationEngine) Load(url *qt6.QUrl) {
	C.QQmlApplicationEngine_load(this.h, (*C.QUrl)(url.UnsafePointer()))
}

func (this *QQmlApplicationEngine) LoadWithFilePath(filePath string) {
	filePath_ms := C.struct_miqt_string{}
	filePath_ms.data = C.CString(filePath)
	filePath_ms.len = C.size_t(len(filePath))
	defer C.free(unsafe.Pointer(filePath_ms.data))
	C.QQmlApplicationEngine_loadWithFilePath(this.h, filePath_ms)
}

func (this *QQmlApplicationEngine) SetInitialProperties(initialProperties map[string]qt6.QVariant) {
	initialProperties_Keys_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(initialProperties))))
	defer C.free(unsafe.Pointer(initialProperties_Keys_CArray))
	initialProperties_Values_CArray := (*[0xffff]*C.QVariant)(C.malloc(C.size_t(8 * len(initialProperties))))
	defer C.free(unsafe.Pointer(initialProperties_Values_CArray))
	initialProperties_ctr := 0
	for initialProperties_k, initialProperties_v := range initialProperties {
		initialProperties_k_ms := C.struct_miqt_string{}
		initialProperties_k_ms.data = C.CString(initialProperties_k)
		initialProperties_k_ms.len = C.size_t(len(initialProperties_k))
		defer C.free(unsafe.Pointer(initialProperties_k_ms.data))
		initialProperties_Keys_CArray[initialProperties_ctr] = initialProperties_k_ms
		initialProperties_Values_CArray[initialProperties_ctr] = (*C.QVariant)(initialProperties_v.UnsafePointer())
		initialProperties_ctr++
	}
	initialProperties_mm := C.struct_miqt_map{
		len:    C.size_t(len(initialProperties)),
		keys:   unsafe.Pointer(initialProperties_Keys_CArray),
		values: unsafe.Pointer(initialProperties_Values_CArray),
	}
	C.QQmlApplicationEngine_setInitialProperties(this.h, initialProperties_mm)
}

func (this *QQmlApplicationEngine) SetExtraFileSelectors(extraFileSelectors []string) {
	extraFileSelectors_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(extraFileSelectors))))
	defer C.free(unsafe.Pointer(extraFileSelectors_CArray))
	for i := range extraFileSelectors {
		extraFileSelectors_i_ms := C.struct_miqt_string{}
		extraFileSelectors_i_ms.data = C.CString(extraFileSelectors[i])
		extraFileSelectors_i_ms.len = C.size_t(len(extraFileSelectors[i]))
		defer C.free(unsafe.Pointer(extraFileSelectors_i_ms.data))
		extraFileSelectors_CArray[i] = extraFileSelectors_i_ms
	}
	extraFileSelectors_ma := C.struct_miqt_array{len: C.size_t(len(extraFileSelectors)), data: unsafe.Pointer(extraFileSelectors_CArray)}
	C.QQmlApplicationEngine_setExtraFileSelectors(this.h, extraFileSelectors_ma)
}

func (this *QQmlApplicationEngine) LoadData(data []byte) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QQmlApplicationEngine_loadData(this.h, data_alias)
}

func (this *QQmlApplicationEngine) ObjectCreated(object *qt6.QObject, url *qt6.QUrl) {
	C.QQmlApplicationEngine_objectCreated(this.h, (*C.QObject)(object.UnsafePointer()), (*C.QUrl)(url.UnsafePointer()))
}
func (this *QQmlApplicationEngine) OnObjectCreated(slot func(object *qt6.QObject, url *qt6.QUrl)) {
	C.QQmlApplicationEngine_connect_objectCreated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlApplicationEngine_objectCreated
func miqt_exec_callback_QQmlApplicationEngine_objectCreated(cb C.intptr_t, object *C.QObject, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(object *qt6.QObject, url *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(object))

	slotval2 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1, slotval2)
}

func (this *QQmlApplicationEngine) ObjectCreationFailed(url *qt6.QUrl) {
	C.QQmlApplicationEngine_objectCreationFailed(this.h, (*C.QUrl)(url.UnsafePointer()))
}
func (this *QQmlApplicationEngine) OnObjectCreationFailed(slot func(url *qt6.QUrl)) {
	C.QQmlApplicationEngine_connect_objectCreationFailed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QQmlApplicationEngine_objectCreationFailed
func miqt_exec_callback_QQmlApplicationEngine_objectCreationFailed(cb C.intptr_t, url *C.QUrl) {
	gofunc, ok := cgo.Handle(cb).Value().(func(url *qt6.QUrl))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQUrl(unsafe.Pointer(url))

	gofunc(slotval1)
}

func QQmlApplicationEngine_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlApplicationEngine_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QQmlApplicationEngine_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QQmlApplicationEngine_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QQmlApplicationEngine) LoadData2(data []byte, url *qt6.QUrl) {
	data_alias := C.struct_miqt_string{}
	if len(data) > 0 {
		data_alias.data = (*C.char)(unsafe.Pointer(&data[0]))
	} else {
		data_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	data_alias.len = C.size_t(len(data))
	C.QQmlApplicationEngine_loadData2(this.h, data_alias, (*C.QUrl)(url.UnsafePointer()))
}

// Sender can only be called from a QQmlApplicationEngine that was directly constructed.
func (this *QQmlApplicationEngine) Sender() *qt6.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt6.UnsafeNewQObject(unsafe.Pointer(C.QQmlApplicationEngine_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QQmlApplicationEngine that was directly constructed.
func (this *QQmlApplicationEngine) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlApplicationEngine_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QQmlApplicationEngine that was directly constructed.
func (this *QQmlApplicationEngine) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QQmlApplicationEngine_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QQmlApplicationEngine that was directly constructed.
func (this *QQmlApplicationEngine) IsSignalConnected(signal *qt6.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QQmlApplicationEngine_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QQmlApplicationEngine) callVirtualBase_Event(param1 *qt6.QEvent) bool {

	return (bool)(C.QQmlApplicationEngine_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(param1.UnsafePointer())))

}
func (this *QQmlApplicationEngine) OnEvent(slot func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool) {
	ok := C.QQmlApplicationEngine_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_event
func miqt_exec_callback_QQmlApplicationEngine_event(self *C.QQmlApplicationEngine, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QEvent) bool, param1 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QQmlApplicationEngine) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QQmlApplicationEngine_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QQmlApplicationEngine) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QQmlApplicationEngine_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_eventFilter
func miqt_exec_callback_QQmlApplicationEngine_eventFilter(self *C.QQmlApplicationEngine, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QQmlApplicationEngine) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QQmlApplicationEngine_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QQmlApplicationEngine) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QQmlApplicationEngine_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_timerEvent
func miqt_exec_callback_QQmlApplicationEngine_timerEvent(self *C.QQmlApplicationEngine, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QQmlApplicationEngine) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QQmlApplicationEngine_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QQmlApplicationEngine) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QQmlApplicationEngine_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_childEvent
func miqt_exec_callback_QQmlApplicationEngine_childEvent(self *C.QQmlApplicationEngine, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QQmlApplicationEngine) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QQmlApplicationEngine_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QQmlApplicationEngine) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QQmlApplicationEngine_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_customEvent
func miqt_exec_callback_QQmlApplicationEngine_customEvent(self *C.QQmlApplicationEngine, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QQmlApplicationEngine) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlApplicationEngine_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlApplicationEngine) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlApplicationEngine_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_connectNotify
func miqt_exec_callback_QQmlApplicationEngine_connectNotify(self *C.QQmlApplicationEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QQmlApplicationEngine) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QQmlApplicationEngine_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QQmlApplicationEngine) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QQmlApplicationEngine_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlApplicationEngine_disconnectNotify
func miqt_exec_callback_QQmlApplicationEngine_disconnectNotify(self *C.QQmlApplicationEngine, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QQmlApplicationEngine{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlApplicationEngine) Delete() {
	C.QQmlApplicationEngine_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlApplicationEngine) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlApplicationEngine) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
