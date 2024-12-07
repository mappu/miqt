package qt

/*

#include "gen_qshortcut.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QShortcut struct {
	h          *C.QShortcut
	isSubclass bool
	*QObject
}

func (this *QShortcut) cPointer() *C.QShortcut {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QShortcut) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQShortcut constructs the type using only CGO pointers.
func newQShortcut(h *C.QShortcut, h_QObject *C.QObject) *QShortcut {
	if h == nil {
		return nil
	}
	return &QShortcut{h: h,
		QObject: newQObject(h_QObject)}
}

// UnsafeNewQShortcut constructs the type using only unsafe pointers.
func UnsafeNewQShortcut(h unsafe.Pointer, h_QObject unsafe.Pointer) *QShortcut {
	if h == nil {
		return nil
	}

	return &QShortcut{h: (*C.QShortcut)(h),
		QObject: UnsafeNewQObject(h_QObject)}
}

// NewQShortcut constructs a new QShortcut object.
func NewQShortcut(parent *QWidget) *QShortcut {
	var outptr_QShortcut *C.QShortcut = nil
	var outptr_QObject *C.QObject = nil

	C.QShortcut_new(parent.cPointer(), &outptr_QShortcut, &outptr_QObject)
	ret := newQShortcut(outptr_QShortcut, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQShortcut2 constructs a new QShortcut object.
func NewQShortcut2(key *QKeySequence, parent *QWidget) *QShortcut {
	var outptr_QShortcut *C.QShortcut = nil
	var outptr_QObject *C.QObject = nil

	C.QShortcut_new2(key.cPointer(), parent.cPointer(), &outptr_QShortcut, &outptr_QObject)
	ret := newQShortcut(outptr_QShortcut, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQShortcut3 constructs a new QShortcut object.
func NewQShortcut3(key *QKeySequence, parent *QWidget, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	var outptr_QShortcut *C.QShortcut = nil
	var outptr_QObject *C.QObject = nil

	C.QShortcut_new3(key.cPointer(), parent.cPointer(), member_Cstring, &outptr_QShortcut, &outptr_QObject)
	ret := newQShortcut(outptr_QShortcut, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQShortcut4 constructs a new QShortcut object.
func NewQShortcut4(key *QKeySequence, parent *QWidget, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	var outptr_QShortcut *C.QShortcut = nil
	var outptr_QObject *C.QObject = nil

	C.QShortcut_new4(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, &outptr_QShortcut, &outptr_QObject)
	ret := newQShortcut(outptr_QShortcut, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQShortcut5 constructs a new QShortcut object.
func NewQShortcut5(key *QKeySequence, parent *QWidget, member string, ambiguousMember string, shortcutContext ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	var outptr_QShortcut *C.QShortcut = nil
	var outptr_QObject *C.QObject = nil

	C.QShortcut_new5(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(shortcutContext), &outptr_QShortcut, &outptr_QObject)
	ret := newQShortcut(outptr_QShortcut, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QShortcut) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QShortcut_MetaObject(this.h)))
}

func (this *QShortcut) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QShortcut_Metacast(this.h, param1_Cstring))
}

func QShortcut_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QShortcut_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QShortcut) SetKey(key *QKeySequence) {
	C.QShortcut_SetKey(this.h, key.cPointer())
}

func (this *QShortcut) Key() *QKeySequence {
	_ret := C.QShortcut_Key(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QShortcut) SetEnabled(enable bool) {
	C.QShortcut_SetEnabled(this.h, (C.bool)(enable))
}

func (this *QShortcut) IsEnabled() bool {
	return (bool)(C.QShortcut_IsEnabled(this.h))
}

func (this *QShortcut) SetContext(context ShortcutContext) {
	C.QShortcut_SetContext(this.h, (C.int)(context))
}

func (this *QShortcut) Context() ShortcutContext {
	return (ShortcutContext)(C.QShortcut_Context(this.h))
}

func (this *QShortcut) SetWhatsThis(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QShortcut_SetWhatsThis(this.h, text_ms)
}

func (this *QShortcut) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QShortcut_WhatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QShortcut) SetAutoRepeat(on bool) {
	C.QShortcut_SetAutoRepeat(this.h, (C.bool)(on))
}

func (this *QShortcut) AutoRepeat() bool {
	return (bool)(C.QShortcut_AutoRepeat(this.h))
}

func (this *QShortcut) Id() int {
	return (int)(C.QShortcut_Id(this.h))
}

func (this *QShortcut) ParentWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QShortcut_ParentWidget(this.h)), nil, nil)
}

func (this *QShortcut) Activated() {
	C.QShortcut_Activated(this.h)
}
func (this *QShortcut) OnActivated(slot func()) {
	C.QShortcut_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_Activated
func miqt_exec_callback_QShortcut_Activated(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QShortcut) ActivatedAmbiguously() {
	C.QShortcut_ActivatedAmbiguously(this.h)
}
func (this *QShortcut) OnActivatedAmbiguously(slot func()) {
	C.QShortcut_connect_ActivatedAmbiguously(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_ActivatedAmbiguously
func miqt_exec_callback_QShortcut_ActivatedAmbiguously(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QShortcut_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QShortcut_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QShortcut_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QShortcut_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QShortcut) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QShortcut_virtualbase_Event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QShortcut) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_Event
func miqt_exec_callback_QShortcut_Event(self *C.QShortcut, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QShortcut{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QShortcut) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QShortcut_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QShortcut) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_EventFilter
func miqt_exec_callback_QShortcut_EventFilter(self *C.QShortcut, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(watched))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QShortcut{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QShortcut) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QShortcut_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_TimerEvent
func miqt_exec_callback_QShortcut_TimerEvent(self *C.QShortcut, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QShortcut{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QShortcut_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_ChildEvent
func miqt_exec_callback_QShortcut_ChildEvent(self *C.QShortcut, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQChildEvent(unsafe.Pointer(event), nil)

	gofunc((&QShortcut{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_CustomEvent(event *QEvent) {

	C.QShortcut_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_CustomEvent
func miqt_exec_callback_QShortcut_CustomEvent(self *C.QShortcut, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QShortcut{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QShortcut_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QShortcut) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_ConnectNotify
func miqt_exec_callback_QShortcut_ConnectNotify(self *C.QShortcut, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QShortcut{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QShortcut) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QShortcut_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QShortcut) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QShortcut_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_DisconnectNotify
func miqt_exec_callback_QShortcut_DisconnectNotify(self *C.QShortcut, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QShortcut{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QShortcut) Delete() {
	C.QShortcut_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShortcut) GoGC() {
	runtime.SetFinalizer(this, func(this *QShortcut) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
