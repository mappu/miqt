package network

/*

#include "gen_qnetworkconfigmanager.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QNetworkConfigurationManager__Capability int

const (
	QNetworkConfigurationManager__CanStartAndStopInterfaces QNetworkConfigurationManager__Capability = 1
	QNetworkConfigurationManager__DirectConnectionRouting   QNetworkConfigurationManager__Capability = 2
	QNetworkConfigurationManager__SystemSessionSupport      QNetworkConfigurationManager__Capability = 4
	QNetworkConfigurationManager__ApplicationLevelRoaming   QNetworkConfigurationManager__Capability = 8
	QNetworkConfigurationManager__ForcedRoaming             QNetworkConfigurationManager__Capability = 16
	QNetworkConfigurationManager__DataStatistics            QNetworkConfigurationManager__Capability = 32
	QNetworkConfigurationManager__NetworkSessionRequired    QNetworkConfigurationManager__Capability = 64
)

type QNetworkConfigurationManager struct {
	h *C.QNetworkConfigurationManager
	*qt.QObject
}

func (this *QNetworkConfigurationManager) cPointer() *C.QNetworkConfigurationManager {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNetworkConfigurationManager) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNetworkConfigurationManager constructs the type using only CGO pointers.
func newQNetworkConfigurationManager(h *C.QNetworkConfigurationManager) *QNetworkConfigurationManager {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QNetworkConfigurationManager_virtbase(h, &outptr_QObject)

	return &QNetworkConfigurationManager{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQNetworkConfigurationManager constructs the type using only unsafe pointers.
func UnsafeNewQNetworkConfigurationManager(h unsafe.Pointer) *QNetworkConfigurationManager {
	return newQNetworkConfigurationManager((*C.QNetworkConfigurationManager)(h))
}

// NewQNetworkConfigurationManager constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager() *QNetworkConfigurationManager {

	return newQNetworkConfigurationManager(C.QNetworkConfigurationManager_new())
}

// NewQNetworkConfigurationManager2 constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager2(parent *qt.QObject) *QNetworkConfigurationManager {

	return newQNetworkConfigurationManager(C.QNetworkConfigurationManager_new2((*C.QObject)(parent.UnsafePointer())))
}

func (this *QNetworkConfigurationManager) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkConfigurationManager_metaObject(this.h)))
}

func (this *QNetworkConfigurationManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkConfigurationManager_metacast(this.h, param1_Cstring))
}

func QNetworkConfigurationManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) Capabilities() QNetworkConfigurationManager__Capability {
	return (QNetworkConfigurationManager__Capability)(C.QNetworkConfigurationManager_capabilities(this.h))
}

func (this *QNetworkConfigurationManager) DefaultConfiguration() *QNetworkConfiguration {
	_goptr := newQNetworkConfiguration(C.QNetworkConfigurationManager_defaultConfiguration(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) AllConfigurations() []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_allConfigurations(this.h)
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkConfiguration(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkConfigurationManager) ConfigurationFromIdentifier(identifier string) *QNetworkConfiguration {
	identifier_ms := C.struct_miqt_string{}
	identifier_ms.data = C.CString(identifier)
	identifier_ms.len = C.size_t(len(identifier))
	defer C.free(unsafe.Pointer(identifier_ms.data))
	_goptr := newQNetworkConfiguration(C.QNetworkConfigurationManager_configurationFromIdentifier(this.h, identifier_ms))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) IsOnline() bool {
	return (bool)(C.QNetworkConfigurationManager_isOnline(this.h))
}

func (this *QNetworkConfigurationManager) UpdateConfigurations() {
	C.QNetworkConfigurationManager_updateConfigurations(this.h)
}

func (this *QNetworkConfigurationManager) ConfigurationAdded(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_configurationAdded(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationAdded(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_configurationAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_configurationAdded
func miqt_exec_callback_QNetworkConfigurationManager_configurationAdded(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkConfiguration(config)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationRemoved(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_configurationRemoved(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationRemoved(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_configurationRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_configurationRemoved
func miqt_exec_callback_QNetworkConfigurationManager_configurationRemoved(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkConfiguration(config)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationChanged(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_configurationChanged(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationChanged(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_configurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_configurationChanged
func miqt_exec_callback_QNetworkConfigurationManager_configurationChanged(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQNetworkConfiguration(config)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) OnlineStateChanged(isOnline bool) {
	C.QNetworkConfigurationManager_onlineStateChanged(this.h, (C.bool)(isOnline))
}
func (this *QNetworkConfigurationManager) OnOnlineStateChanged(slot func(isOnline bool)) {
	C.QNetworkConfigurationManager_connect_onlineStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_onlineStateChanged
func miqt_exec_callback_QNetworkConfigurationManager_onlineStateChanged(cb C.intptr_t, isOnline C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(isOnline bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(isOnline)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) UpdateCompleted() {
	C.QNetworkConfigurationManager_updateCompleted(this.h)
}
func (this *QNetworkConfigurationManager) OnUpdateCompleted(slot func()) {
	C.QNetworkConfigurationManager_connect_updateCompleted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_updateCompleted
func miqt_exec_callback_QNetworkConfigurationManager_updateCompleted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QNetworkConfigurationManager_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) AllConfigurationsWithFlags(flags QNetworkConfiguration__StateFlag) []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_allConfigurationsWithFlags(this.h, (C.int)(flags))
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQNetworkConfiguration(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Sender can only be called from a QNetworkConfigurationManager that was directly constructed.
func (this *QNetworkConfigurationManager) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QNetworkConfigurationManager_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QNetworkConfigurationManager that was directly constructed.
func (this *QNetworkConfigurationManager) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkConfigurationManager_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QNetworkConfigurationManager that was directly constructed.
func (this *QNetworkConfigurationManager) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QNetworkConfigurationManager_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QNetworkConfigurationManager that was directly constructed.
func (this *QNetworkConfigurationManager) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QNetworkConfigurationManager_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QNetworkConfigurationManager) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QNetworkConfigurationManager_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkConfigurationManager) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QNetworkConfigurationManager_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_event
func miqt_exec_callback_QNetworkConfigurationManager_event(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkConfigurationManager) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QNetworkConfigurationManager_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkConfigurationManager) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QNetworkConfigurationManager_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_eventFilter
func miqt_exec_callback_QNetworkConfigurationManager_eventFilter(self *C.QNetworkConfigurationManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QNetworkConfigurationManager) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QNetworkConfigurationManager_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QNetworkConfigurationManager_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_timerEvent
func miqt_exec_callback_QNetworkConfigurationManager_timerEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QNetworkConfigurationManager_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QNetworkConfigurationManager_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_childEvent
func miqt_exec_callback_QNetworkConfigurationManager_childEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QNetworkConfigurationManager_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QNetworkConfigurationManager_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_customEvent
func miqt_exec_callback_QNetworkConfigurationManager_customEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkConfigurationManager_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNetworkConfigurationManager_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_connectNotify
func miqt_exec_callback_QNetworkConfigurationManager_connectNotify(self *C.QNetworkConfigurationManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkConfigurationManager_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QNetworkConfigurationManager_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QNetworkConfigurationManager_disconnectNotify
func miqt_exec_callback_QNetworkConfigurationManager_disconnectNotify(self *C.QNetworkConfigurationManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QNetworkConfigurationManager) Delete() {
	C.QNetworkConfigurationManager_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkConfigurationManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkConfigurationManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
