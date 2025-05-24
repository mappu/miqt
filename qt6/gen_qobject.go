package qt6

/*

#include "gen_qobject.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QObjectData__ int

const (
	QObjectData__CheckForParentChildLoopsWarnDepth QObjectData__ = 4096
)

type QObjectData struct {
	h *C.QObjectData
}

func (this *QObjectData) cPointer() *C.QObjectData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QObjectData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQObjectData constructs the type using only CGO pointers.
func newQObjectData(h *C.QObjectData) *QObjectData {
	if h == nil {
		return nil
	}

	return &QObjectData{h: h}
}

// UnsafeNewQObjectData constructs the type using only unsafe pointers.
func UnsafeNewQObjectData(h unsafe.Pointer) *QObjectData {
	return newQObjectData((*C.QObjectData)(h))
}

func (this *QObjectData) DynamicMetaObject() *QMetaObject {
	return newQMetaObject(C.QObjectData_dynamicMetaObject(this.h))
}

// Delete this object from C++ memory.
func (this *QObjectData) Delete() {
	C.QObjectData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QObjectData) GoGC() {
	runtime.SetFinalizer(this, func(this *QObjectData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QObject struct {
	h *C.QObject
}

func (this *QObject) cPointer() *C.QObject {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QObject) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQObject constructs the type using only CGO pointers.
func newQObject(h *C.QObject) *QObject {
	if h == nil {
		return nil
	}

	return &QObject{h: h}
}

// UnsafeNewQObject constructs the type using only unsafe pointers.
func UnsafeNewQObject(h unsafe.Pointer) *QObject {
	return newQObject((*C.QObject)(h))
}

// NewQObject constructs a new QObject object.
func NewQObject() *QObject {

	return newQObject(C.QObject_new())
}

// NewQObject2 constructs a new QObject object.
func NewQObject2(parent *QObject) *QObject {

	return newQObject(C.QObject_new2(parent.cPointer()))
}

func (this *QObject) MetaObject() *QMetaObject {
	return newQMetaObject(C.QObject_metaObject(this.h))
}

func (this *QObject) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QObject_metacast(this.h, param1_Cstring))
}

func QObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QObject_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObject) Event(event *QEvent) bool {
	return (bool)(C.QObject_event(this.h, event.cPointer()))
}

func (this *QObject) EventFilter(watched *QObject, event *QEvent) bool {
	return (bool)(C.QObject_eventFilter(this.h, watched.cPointer(), event.cPointer()))
}

func (this *QObject) ObjectName() string {
	var _ms C.struct_miqt_string = C.QObject_objectName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObject) SetObjectName(name QAnyStringView) {
	C.QObject_setObjectName(this.h, name.cPointer())
}

func (this *QObject) IsWidgetType() bool {
	return (bool)(C.QObject_isWidgetType(this.h))
}

func (this *QObject) IsWindowType() bool {
	return (bool)(C.QObject_isWindowType(this.h))
}

func (this *QObject) IsQuickItemType() bool {
	return (bool)(C.QObject_isQuickItemType(this.h))
}

func (this *QObject) SignalsBlocked() bool {
	return (bool)(C.QObject_signalsBlocked(this.h))
}

func (this *QObject) BlockSignals(b bool) bool {
	return (bool)(C.QObject_blockSignals(this.h, (C.bool)(b)))
}

func (this *QObject) Thread() *QThread {
	return newQThread(C.QObject_thread(this.h))
}

func (this *QObject) MoveToThread(thread *QThread) {
	C.QObject_moveToThread(this.h, thread.cPointer())
}

func (this *QObject) StartTimer(interval int) int {
	return (int)(C.QObject_startTimer(this.h, (C.int)(interval)))
}

func (this *QObject) KillTimer(id int) {
	C.QObject_killTimer(this.h, (C.int)(id))
}

func (this *QObject) Children() []*QObject {
	var _ma C.struct_miqt_array = C.QObject_children(this.h)
	_ret := make([]*QObject, int(_ma.len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQObject(_outCast[i])
	}
	return _ret
}

func (this *QObject) SetParent(parent *QObject) {
	C.QObject_setParent(this.h, parent.cPointer())
}

func (this *QObject) InstallEventFilter(filterObj *QObject) {
	C.QObject_installEventFilter(this.h, filterObj.cPointer())
}

func (this *QObject) RemoveEventFilter(obj *QObject) {
	C.QObject_removeEventFilter(this.h, obj.cPointer())
}

func QObject_Connect(sender *QObject, signal *QMetaMethod, receiver *QObject, method *QMetaMethod) *QMetaObject__Connection {
	_goptr := newQMetaObject__Connection(C.QObject_connect(sender.cPointer(), signal.cPointer(), receiver.cPointer(), method.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QObject) Connect2(sender *QObject, signal string, member string) *QMetaObject__Connection {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	_goptr := newQMetaObject__Connection(C.QObject_connect2(this.h, sender.cPointer(), signal_Cstring, member_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QObject_Disconnect(sender *QObject, signal *QMetaMethod, receiver *QObject, member *QMetaMethod) bool {
	return (bool)(C.QObject_disconnect(sender.cPointer(), signal.cPointer(), receiver.cPointer(), member.cPointer()))
}

func QObject_DisconnectWithQMetaObjectConnection(param1 *QMetaObject__Connection) bool {
	return (bool)(C.QObject_disconnectWithQMetaObjectConnection(param1.cPointer()))
}

func (this *QObject) DumpObjectTree() {
	C.QObject_dumpObjectTree(this.h)
}

func (this *QObject) DumpObjectInfo() {
	C.QObject_dumpObjectInfo(this.h)
}

func (this *QObject) SetProperty(name string, value *QVariant) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	return (bool)(C.QObject_setProperty(this.h, name_Cstring, value.cPointer()))
}

func (this *QObject) Property(name string) *QVariant {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	_goptr := newQVariant(C.QObject_property(this.h, name_Cstring))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QObject) DynamicPropertyNames() [][]byte {
	var _ma C.struct_miqt_array = C.QObject_dynamicPropertyNames(this.h)
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

func (this *QObject) BindingStorage() *QBindingStorage {
	return newQBindingStorage(C.QObject_bindingStorage(this.h))
}

func (this *QObject) BindingStorage2() *QBindingStorage {
	return newQBindingStorage(C.QObject_bindingStorage2(this.h))
}

func (this *QObject) Destroyed() {
	C.QObject_destroyed(this.h)
}
func (this *QObject) OnDestroyed(slot func()) {
	C.QObject_connect_destroyed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObject_destroyed
func miqt_exec_callback_QObject_destroyed(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QObject) Parent() *QObject {
	return newQObject(C.QObject_parent(this.h))
}

func (this *QObject) Inherits(classname string) bool {
	classname_Cstring := C.CString(classname)
	defer C.free(unsafe.Pointer(classname_Cstring))
	return (bool)(C.QObject_inherits(this.h, classname_Cstring))
}

func (this *QObject) DeleteLater() {
	C.QObject_deleteLater(this.h)
}

func QObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObject_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QObject_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QObject) StartTimer2(interval int, timerType TimerType) int {
	return (int)(C.QObject_startTimer2(this.h, (C.int)(interval), (C.int)(timerType)))
}

func QObject_Connect3(sender *QObject, signal *QMetaMethod, receiver *QObject, method *QMetaMethod, typeVal ConnectionType) *QMetaObject__Connection {
	_goptr := newQMetaObject__Connection(C.QObject_connect3(sender.cPointer(), signal.cPointer(), receiver.cPointer(), method.cPointer(), (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QObject) Connect4(sender *QObject, signal string, member string, typeVal ConnectionType) *QMetaObject__Connection {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	_goptr := newQMetaObject__Connection(C.QObject_connect4(this.h, sender.cPointer(), signal_Cstring, member_Cstring, (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QObject) DestroyedWithQObject(param1 *QObject) {
	C.QObject_destroyedWithQObject(this.h, param1.cPointer())
}
func (this *QObject) OnDestroyedWithQObject(slot func(param1 *QObject)) {
	C.QObject_connect_destroyedWithQObject(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObject_destroyedWithQObject
func miqt_exec_callback_QObject_destroyedWithQObject(cb C.intptr_t, param1 *C.QObject) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 *QObject))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	gofunc(slotval1)
}

// Sender can only be called from a QObject that was directly constructed.
func (this *QObject) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QObject_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QObject that was directly constructed.
func (this *QObject) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QObject_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QObject that was directly constructed.
func (this *QObject) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QObject_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QObject that was directly constructed.
func (this *QObject) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QObject_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QObject) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QObject_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QObject) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QObject_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_event
func miqt_exec_callback_QObject_event(self *C.QObject, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QObject{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QObject) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QObject_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QObject) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QObject_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_eventFilter
func miqt_exec_callback_QObject_eventFilter(self *C.QObject, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QObject{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QObject) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QObject_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObject) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QObject_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_timerEvent
func miqt_exec_callback_QObject_timerEvent(self *C.QObject, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QObject{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QObject) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QObject_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObject) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QObject_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_childEvent
func miqt_exec_callback_QObject_childEvent(self *C.QObject, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QObject{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QObject) callVirtualBase_CustomEvent(event *QEvent) {

	C.QObject_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QObject) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QObject_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_customEvent
func miqt_exec_callback_QObject_customEvent(self *C.QObject, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QObject{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QObject) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QObject_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObject) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QObject_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_connectNotify
func miqt_exec_callback_QObject_connectNotify(self *C.QObject, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QObject{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QObject) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QObject_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QObject) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QObject_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QObject_disconnectNotify
func miqt_exec_callback_QObject_disconnectNotify(self *C.QObject, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QObject{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}
func (this *QObject) OnObjectNameChanged(slot func(objectName string)) {
	C.QObject_connect_objectNameChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QObject_objectNameChanged
func miqt_exec_callback_QObject_objectNameChanged(cb C.intptr_t, objectName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(objectName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var objectName_ms C.struct_miqt_string = objectName
	objectName_ret := C.GoStringN(objectName_ms.data, C.int(int64(objectName_ms.len)))
	C.free(unsafe.Pointer(objectName_ms.data))
	slotval1 := objectName_ret

	gofunc(slotval1)
}

// Delete this object from C++ memory.
func (this *QObject) Delete() {
	C.QObject_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QObject) GoGC() {
	runtime.SetFinalizer(this, func(this *QObject) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSignalBlocker struct {
	h *C.QSignalBlocker
}

func (this *QSignalBlocker) cPointer() *C.QSignalBlocker {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QSignalBlocker) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQSignalBlocker constructs the type using only CGO pointers.
func newQSignalBlocker(h *C.QSignalBlocker) *QSignalBlocker {
	if h == nil {
		return nil
	}

	return &QSignalBlocker{h: h}
}

// UnsafeNewQSignalBlocker constructs the type using only unsafe pointers.
func UnsafeNewQSignalBlocker(h unsafe.Pointer) *QSignalBlocker {
	return newQSignalBlocker((*C.QSignalBlocker)(h))
}

// NewQSignalBlocker constructs a new QSignalBlocker object.
func NewQSignalBlocker(o *QObject) *QSignalBlocker {

	return newQSignalBlocker(C.QSignalBlocker_new(o.cPointer()))
}

// NewQSignalBlocker2 constructs a new QSignalBlocker object.
func NewQSignalBlocker2(o *QObject) *QSignalBlocker {

	return newQSignalBlocker(C.QSignalBlocker_new2(o.cPointer()))
}

func (this *QSignalBlocker) Reblock() {
	C.QSignalBlocker_reblock(this.h)
}

func (this *QSignalBlocker) Unblock() {
	C.QSignalBlocker_unblock(this.h)
}

// Delete this object from C++ memory.
func (this *QSignalBlocker) Delete() {
	C.QSignalBlocker_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSignalBlocker) GoGC() {
	runtime.SetFinalizer(this, func(this *QSignalBlocker) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
