package qt

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
	QObjectData____CheckForParentChildLoopsWarnDepth QObjectData__ = 4096
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

func newQObjectData(h *C.QObjectData) *QObjectData {
	if h == nil {
		return nil
	}
	return &QObjectData{h: h}
}

func newQObjectData_U(h unsafe.Pointer) *QObjectData {
	return newQObjectData((*C.QObjectData)(h))
}

func (this *QObjectData) DynamicMetaObject() *QMetaObject {
	ret := C.QObjectData_DynamicMetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func (this *QObjectData) Delete() {
	C.QObjectData_Delete(this.h)
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

func newQObject(h *C.QObject) *QObject {
	if h == nil {
		return nil
	}
	return &QObject{h: h}
}

func newQObject_U(h unsafe.Pointer) *QObject {
	return newQObject((*C.QObject)(h))
}

// NewQObject constructs a new QObject object.
func NewQObject() *QObject {
	ret := C.QObject_new()
	return newQObject(ret)
}

// NewQObject2 constructs a new QObject object.
func NewQObject2(parent *QObject) *QObject {
	ret := C.QObject_new2(parent.cPointer())
	return newQObject(ret)
}

func (this *QObject) MetaObject() *QMetaObject {
	ret := C.QObject_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QObject_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QObject_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QObject) Event(event *QEvent) bool {
	ret := C.QObject_Event(this.h, event.cPointer())
	return (bool)(ret)
}

func (this *QObject) EventFilter(watched *QObject, event *QEvent) bool {
	ret := C.QObject_EventFilter(this.h, watched.cPointer(), event.cPointer())
	return (bool)(ret)
}

func (this *QObject) ObjectName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_ObjectName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QObject) SetObjectName(name string) {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	C.QObject_SetObjectName(this.h, name_Cstring, C.size_t(len(name)))
}

func (this *QObject) IsWidgetType() bool {
	ret := C.QObject_IsWidgetType(this.h)
	return (bool)(ret)
}

func (this *QObject) IsWindowType() bool {
	ret := C.QObject_IsWindowType(this.h)
	return (bool)(ret)
}

func (this *QObject) SignalsBlocked() bool {
	ret := C.QObject_SignalsBlocked(this.h)
	return (bool)(ret)
}

func (this *QObject) BlockSignals(b bool) bool {
	ret := C.QObject_BlockSignals(this.h, (C.bool)(b))
	return (bool)(ret)
}

func (this *QObject) Thread() *QThread {
	ret := C.QObject_Thread(this.h)
	return newQThread_U(unsafe.Pointer(ret))
}

func (this *QObject) MoveToThread(thread *QThread) {
	C.QObject_MoveToThread(this.h, thread.cPointer())
}

func (this *QObject) StartTimer(interval int) int {
	ret := C.QObject_StartTimer(this.h, (C.int)(interval))
	return (int)(ret)
}

func (this *QObject) KillTimer(id int) {
	C.QObject_KillTimer(this.h, (C.int)(id))
}

func (this *QObject) Children() []*QObject {
	var _out **C.QObject = nil
	var _out_len C.size_t = 0
	C.QObject_Children(this.h, &_out, &_out_len)
	ret := make([]*QObject, int(_out_len))
	_outCast := (*[0xffff]*C.QObject)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQObject(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QObject) SetParent(parent *QObject) {
	C.QObject_SetParent(this.h, parent.cPointer())
}

func (this *QObject) InstallEventFilter(filterObj *QObject) {
	C.QObject_InstallEventFilter(this.h, filterObj.cPointer())
}

func (this *QObject) RemoveEventFilter(obj *QObject) {
	C.QObject_RemoveEventFilter(this.h, obj.cPointer())
}

func QObject_Connect(sender *QObject, signal *QMetaMethod, receiver *QObject, method *QMetaMethod) *QMetaObject__Connection {
	ret := C.QObject_Connect(sender.cPointer(), signal.cPointer(), receiver.cPointer(), method.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QObject) Connect2(sender *QObject, signal string, member string) *QMetaObject__Connection {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QObject_Connect2(this.h, sender.cPointer(), signal_Cstring, member_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QObject_Disconnect(sender *QObject, signal *QMetaMethod, receiver *QObject, member *QMetaMethod) bool {
	ret := C.QObject_Disconnect(sender.cPointer(), signal.cPointer(), receiver.cPointer(), member.cPointer())
	return (bool)(ret)
}

func QObject_DisconnectWithQMetaObjectConnection(param1 *QMetaObject__Connection) bool {
	ret := C.QObject_DisconnectWithQMetaObjectConnection(param1.cPointer())
	return (bool)(ret)
}

func (this *QObject) DumpObjectTree() {
	C.QObject_DumpObjectTree(this.h)
}

func (this *QObject) DumpObjectInfo() {
	C.QObject_DumpObjectInfo(this.h)
}

func (this *QObject) DumpObjectTree2() {
	C.QObject_DumpObjectTree2(this.h)
}

func (this *QObject) DumpObjectInfo2() {
	C.QObject_DumpObjectInfo2(this.h)
}

func (this *QObject) SetProperty(name string, value *QVariant) bool {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QObject_SetProperty(this.h, name_Cstring, value.cPointer())
	return (bool)(ret)
}

func (this *QObject) Property(name string) *QVariant {
	name_Cstring := C.CString(name)
	defer C.free(unsafe.Pointer(name_Cstring))
	ret := C.QObject_Property(this.h, name_Cstring)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QObject) DynamicPropertyNames() []QByteArray {
	var _out **C.QByteArray = nil
	var _out_len C.size_t = 0
	C.QObject_DynamicPropertyNames(this.h, &_out, &_out_len)
	ret := make([]QByteArray, int(_out_len))
	_outCast := (*[0xffff]*C.QByteArray)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQByteArray(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QObject_RegisterUserData() uint {
	ret := C.QObject_RegisterUserData()
	return (uint)(ret)
}

func (this *QObject) SetUserData(id uint, data *QObjectUserData) {
	C.QObject_SetUserData(this.h, (C.uint)(id), data.cPointer())
}

func (this *QObject) UserData(id uint) *QObjectUserData {
	ret := C.QObject_UserData(this.h, (C.uint)(id))
	return newQObjectUserData_U(unsafe.Pointer(ret))
}

func (this *QObject) Destroyed() {
	C.QObject_Destroyed(this.h)
}

func (this *QObject) OnDestroyed(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QObject_connect_Destroyed(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QObject) Parent() *QObject {
	ret := C.QObject_Parent(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QObject) Inherits(classname string) bool {
	classname_Cstring := C.CString(classname)
	defer C.free(unsafe.Pointer(classname_Cstring))
	ret := C.QObject_Inherits(this.h, classname_Cstring)
	return (bool)(ret)
}

func (this *QObject) DeleteLater() {
	C.QObject_DeleteLater(this.h)
}

func QObject_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QObject_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QObject_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QObject_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QObject_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QObject) StartTimer2(interval int, timerType TimerType) int {
	ret := C.QObject_StartTimer2(this.h, (C.int)(interval), (C.uintptr_t)(timerType))
	return (int)(ret)
}

func QObject_Connect5(sender *QObject, signal *QMetaMethod, receiver *QObject, method *QMetaMethod, typeVal ConnectionType) *QMetaObject__Connection {
	ret := C.QObject_Connect5(sender.cPointer(), signal.cPointer(), receiver.cPointer(), method.cPointer(), (C.uintptr_t)(typeVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QObject) Connect4(sender *QObject, signal string, member string, typeVal ConnectionType) *QMetaObject__Connection {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QObject_Connect4(this.h, sender.cPointer(), signal_Cstring, member_Cstring, (C.uintptr_t)(typeVal))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQMetaObject__Connection(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QMetaObject__Connection) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QObject) Destroyed1(param1 *QObject) {
	C.QObject_Destroyed1(this.h, param1.cPointer())
}

func (this *QObject) OnDestroyed1(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QObject_connect_Destroyed1(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QObject) Delete() {
	C.QObject_Delete(this.h)
}

type QObjectUserData struct {
	h *C.QObjectUserData
}

func (this *QObjectUserData) cPointer() *C.QObjectUserData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQObjectUserData(h *C.QObjectUserData) *QObjectUserData {
	if h == nil {
		return nil
	}
	return &QObjectUserData{h: h}
}

func newQObjectUserData_U(h unsafe.Pointer) *QObjectUserData {
	return newQObjectUserData((*C.QObjectUserData)(h))
}

// NewQObjectUserData constructs a new QObjectUserData object.
func NewQObjectUserData() *QObjectUserData {
	ret := C.QObjectUserData_new()
	return newQObjectUserData(ret)
}

func (this *QObjectUserData) Delete() {
	C.QObjectUserData_Delete(this.h)
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

func newQSignalBlocker(h *C.QSignalBlocker) *QSignalBlocker {
	if h == nil {
		return nil
	}
	return &QSignalBlocker{h: h}
}

func newQSignalBlocker_U(h unsafe.Pointer) *QSignalBlocker {
	return newQSignalBlocker((*C.QSignalBlocker)(h))
}

// NewQSignalBlocker constructs a new QSignalBlocker object.
func NewQSignalBlocker(o *QObject) *QSignalBlocker {
	ret := C.QSignalBlocker_new(o.cPointer())
	return newQSignalBlocker(ret)
}

// NewQSignalBlocker2 constructs a new QSignalBlocker object.
func NewQSignalBlocker2(o *QObject) *QSignalBlocker {
	ret := C.QSignalBlocker_new2(o.cPointer())
	return newQSignalBlocker(ret)
}

func (this *QSignalBlocker) Reblock() {
	C.QSignalBlocker_Reblock(this.h)
}

func (this *QSignalBlocker) Unblock() {
	C.QSignalBlocker_Unblock(this.h)
}

func (this *QSignalBlocker) Delete() {
	C.QSignalBlocker_Delete(this.h)
}
