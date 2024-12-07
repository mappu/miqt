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
	h          *C.QNetworkConfigurationManager
	isSubclass bool
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
func newQNetworkConfigurationManager(h *C.QNetworkConfigurationManager, h_QObject *C.QObject) *QNetworkConfigurationManager {
	if h == nil {
		return nil
	}
	return &QNetworkConfigurationManager{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQNetworkConfigurationManager constructs the type using only unsafe pointers.
func UnsafeNewQNetworkConfigurationManager(h unsafe.Pointer, h_QObject unsafe.Pointer) *QNetworkConfigurationManager {
	if h == nil {
		return nil
	}

	return &QNetworkConfigurationManager{h: (*C.QNetworkConfigurationManager)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

// NewQNetworkConfigurationManager constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager() *QNetworkConfigurationManager {
	var outptr_QNetworkConfigurationManager *C.QNetworkConfigurationManager = nil
	var outptr_QObject *C.QObject = nil

	C.QNetworkConfigurationManager_new(&outptr_QNetworkConfigurationManager, &outptr_QObject)
	ret := newQNetworkConfigurationManager(outptr_QNetworkConfigurationManager, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQNetworkConfigurationManager2 constructs a new QNetworkConfigurationManager object.
func NewQNetworkConfigurationManager2(parent *qt.QObject) *QNetworkConfigurationManager {
	var outptr_QNetworkConfigurationManager *C.QNetworkConfigurationManager = nil
	var outptr_QObject *C.QObject = nil

	C.QNetworkConfigurationManager_new2((*C.QObject)(parent.UnsafePointer()), &outptr_QNetworkConfigurationManager, &outptr_QObject)
	ret := newQNetworkConfigurationManager(outptr_QNetworkConfigurationManager, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QNetworkConfigurationManager) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QNetworkConfigurationManager_MetaObject(this.h)))
}

func (this *QNetworkConfigurationManager) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QNetworkConfigurationManager_Metacast(this.h, param1_Cstring))
}

func QNetworkConfigurationManager_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) Capabilities() QNetworkConfigurationManager__Capability {
	return (QNetworkConfigurationManager__Capability)(C.QNetworkConfigurationManager_Capabilities(this.h))
}

func (this *QNetworkConfigurationManager) DefaultConfiguration() *QNetworkConfiguration {
	_ret := C.QNetworkConfigurationManager_DefaultConfiguration(this.h)
	_goptr := newQNetworkConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) AllConfigurations() []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_AllConfigurations(this.h)
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkConfiguration(_lv_ret)
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
	_ret := C.QNetworkConfigurationManager_ConfigurationFromIdentifier(this.h, identifier_ms)
	_goptr := newQNetworkConfiguration(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNetworkConfigurationManager) IsOnline() bool {
	return (bool)(C.QNetworkConfigurationManager_IsOnline(this.h))
}

func (this *QNetworkConfigurationManager) UpdateConfigurations() {
	C.QNetworkConfigurationManager_UpdateConfigurations(this.h)
}

func (this *QNetworkConfigurationManager) ConfigurationAdded(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationAdded(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationAdded(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationAdded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationAdded
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationAdded(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationRemoved(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationRemoved(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationRemoved(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationRemoved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationRemoved
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationRemoved(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) ConfigurationChanged(config *QNetworkConfiguration) {
	C.QNetworkConfigurationManager_ConfigurationChanged(this.h, config.cPointer())
}
func (this *QNetworkConfigurationManager) OnConfigurationChanged(slot func(config *QNetworkConfiguration)) {
	C.QNetworkConfigurationManager_connect_ConfigurationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConfigurationChanged
func miqt_exec_callback_QNetworkConfigurationManager_ConfigurationChanged(cb C.intptr_t, config *C.QNetworkConfiguration) {
	gofunc, ok := cgo.Handle(cb).Value().(func(config *QNetworkConfiguration))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQNetworkConfiguration(unsafe.Pointer(config))

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) OnlineStateChanged(isOnline bool) {
	C.QNetworkConfigurationManager_OnlineStateChanged(this.h, (C.bool)(isOnline))
}
func (this *QNetworkConfigurationManager) OnOnlineStateChanged(slot func(isOnline bool)) {
	C.QNetworkConfigurationManager_connect_OnlineStateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_OnlineStateChanged
func miqt_exec_callback_QNetworkConfigurationManager_OnlineStateChanged(cb C.intptr_t, isOnline C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(isOnline bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(isOnline)

	gofunc(slotval1)
}

func (this *QNetworkConfigurationManager) UpdateCompleted() {
	C.QNetworkConfigurationManager_UpdateCompleted(this.h)
}
func (this *QNetworkConfigurationManager) OnUpdateCompleted(slot func()) {
	C.QNetworkConfigurationManager_connect_UpdateCompleted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_UpdateCompleted
func miqt_exec_callback_QNetworkConfigurationManager_UpdateCompleted(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QNetworkConfigurationManager_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QNetworkConfigurationManager_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QNetworkConfigurationManager) AllConfigurations1(flags QNetworkConfiguration__StateFlag) []QNetworkConfiguration {
	var _ma C.struct_miqt_array = C.QNetworkConfigurationManager_AllConfigurations1(this.h, (C.int)(flags))
	_ret := make([]QNetworkConfiguration, int(_ma.len))
	_outCast := (*[0xffff]*C.QNetworkConfiguration)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQNetworkConfiguration(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QNetworkConfigurationManager) callVirtualBase_Event(event *qt.QEvent) bool {

	return (bool)(C.QNetworkConfigurationManager_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkConfigurationManager) OnEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_Event
func miqt_exec_callback_QNetworkConfigurationManager_Event(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QNetworkConfigurationManager_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QNetworkConfigurationManager) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_EventFilter
func miqt_exec_callback_QNetworkConfigurationManager_EventFilter(self *C.QNetworkConfigurationManager, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QNetworkConfigurationManager_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_TimerEvent
func miqt_exec_callback_QNetworkConfigurationManager_TimerEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QNetworkConfigurationManager_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ChildEvent
func miqt_exec_callback_QNetworkConfigurationManager_ChildEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QNetworkConfigurationManager_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_CustomEvent
func miqt_exec_callback_QNetworkConfigurationManager_CustomEvent(self *C.QNetworkConfigurationManager, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkConfigurationManager_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_ConnectNotify
func miqt_exec_callback_QNetworkConfigurationManager_ConnectNotify(self *C.QNetworkConfigurationManager, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QNetworkConfigurationManager{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QNetworkConfigurationManager) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QNetworkConfigurationManager_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QNetworkConfigurationManager) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QNetworkConfigurationManager_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QNetworkConfigurationManager_DisconnectNotify
func miqt_exec_callback_QNetworkConfigurationManager_DisconnectNotify(self *C.QNetworkConfigurationManager, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QNetworkConfigurationManager_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNetworkConfigurationManager) GoGC() {
	runtime.SetFinalizer(this, func(this *QNetworkConfigurationManager) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
