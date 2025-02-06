package qt6

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
	h *C.QShortcut
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
func newQShortcut(h *C.QShortcut) *QShortcut {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QShortcut_virtbase(h, &outptr_QObject)

	return &QShortcut{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQShortcut constructs the type using only unsafe pointers.
func UnsafeNewQShortcut(h unsafe.Pointer) *QShortcut {
	return newQShortcut((*C.QShortcut)(h))
}

// NewQShortcut constructs a new QShortcut object.
func NewQShortcut(parent *QObject) *QShortcut {

	return newQShortcut(C.QShortcut_new(parent.cPointer()))
}

// NewQShortcut2 constructs a new QShortcut object.
func NewQShortcut2(key *QKeySequence, parent *QObject) *QShortcut {

	return newQShortcut(C.QShortcut_new2(key.cPointer(), parent.cPointer()))
}

// NewQShortcut3 constructs a new QShortcut object.
func NewQShortcut3(key QKeySequence__StandardKey, parent *QObject) *QShortcut {

	return newQShortcut(C.QShortcut_new3((C.int)(key), parent.cPointer()))
}

// NewQShortcut4 constructs a new QShortcut object.
func NewQShortcut4(key *QKeySequence, parent *QObject, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))

	return newQShortcut(C.QShortcut_new4(key.cPointer(), parent.cPointer(), member_Cstring))
}

// NewQShortcut5 constructs a new QShortcut object.
func NewQShortcut5(key *QKeySequence, parent *QObject, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))

	return newQShortcut(C.QShortcut_new5(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring))
}

// NewQShortcut6 constructs a new QShortcut object.
func NewQShortcut6(key *QKeySequence, parent *QObject, member string, ambiguousMember string, context ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))

	return newQShortcut(C.QShortcut_new6(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(context)))
}

// NewQShortcut7 constructs a new QShortcut object.
func NewQShortcut7(key QKeySequence__StandardKey, parent *QObject, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))

	return newQShortcut(C.QShortcut_new7((C.int)(key), parent.cPointer(), member_Cstring))
}

// NewQShortcut8 constructs a new QShortcut object.
func NewQShortcut8(key QKeySequence__StandardKey, parent *QObject, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))

	return newQShortcut(C.QShortcut_new8((C.int)(key), parent.cPointer(), member_Cstring, ambiguousMember_Cstring))
}

// NewQShortcut9 constructs a new QShortcut object.
func NewQShortcut9(key QKeySequence__StandardKey, parent *QObject, member string, ambiguousMember string, context ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))

	return newQShortcut(C.QShortcut_new9((C.int)(key), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(context)))
}

func (this *QShortcut) MetaObject() *QMetaObject {
	return newQMetaObject(C.QShortcut_metaObject(this.h))
}

func (this *QShortcut) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QShortcut_metacast(this.h, param1_Cstring))
}

func QShortcut_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QShortcut) SetKey(key *QKeySequence) {
	C.QShortcut_setKey(this.h, key.cPointer())
}

func (this *QShortcut) Key() *QKeySequence {
	_goptr := newQKeySequence(C.QShortcut_key(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QShortcut) SetKeys(key QKeySequence__StandardKey) {
	C.QShortcut_setKeys(this.h, (C.int)(key))
}

func (this *QShortcut) SetKeysWithKeys(keys []QKeySequence) {
	keys_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(keys))))
	defer C.free(unsafe.Pointer(keys_CArray))
	for i := range keys {
		keys_CArray[i] = keys[i].cPointer()
	}
	keys_ma := C.struct_miqt_array{len: C.size_t(len(keys)), data: unsafe.Pointer(keys_CArray)}
	C.QShortcut_setKeysWithKeys(this.h, keys_ma)
}

func (this *QShortcut) Keys() []QKeySequence {
	var _ma C.struct_miqt_array = C.QShortcut_keys(this.h)
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQKeySequence(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QShortcut) SetEnabled(enable bool) {
	C.QShortcut_setEnabled(this.h, (C.bool)(enable))
}

func (this *QShortcut) IsEnabled() bool {
	return (bool)(C.QShortcut_isEnabled(this.h))
}

func (this *QShortcut) SetContext(context ShortcutContext) {
	C.QShortcut_setContext(this.h, (C.int)(context))
}

func (this *QShortcut) Context() ShortcutContext {
	return (ShortcutContext)(C.QShortcut_context(this.h))
}

func (this *QShortcut) SetAutoRepeat(on bool) {
	C.QShortcut_setAutoRepeat(this.h, (C.bool)(on))
}

func (this *QShortcut) AutoRepeat() bool {
	return (bool)(C.QShortcut_autoRepeat(this.h))
}

func (this *QShortcut) Id() int {
	return (int)(C.QShortcut_id(this.h))
}

func (this *QShortcut) SetWhatsThis(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QShortcut_setWhatsThis(this.h, text_ms)
}

func (this *QShortcut) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QShortcut_whatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QShortcut) Activated() {
	C.QShortcut_activated(this.h)
}
func (this *QShortcut) OnActivated(slot func()) {
	C.QShortcut_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_activated
func miqt_exec_callback_QShortcut_activated(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QShortcut) ActivatedAmbiguously() {
	C.QShortcut_activatedAmbiguously(this.h)
}
func (this *QShortcut) OnActivatedAmbiguously(slot func()) {
	C.QShortcut_connect_activatedAmbiguously(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QShortcut_activatedAmbiguously
func miqt_exec_callback_QShortcut_activatedAmbiguously(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QShortcut_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QShortcut_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QShortcut_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QShortcut that was directly constructed.
func (this *QShortcut) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QShortcut_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QShortcut that was directly constructed.
func (this *QShortcut) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QShortcut_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QShortcut that was directly constructed.
func (this *QShortcut) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QShortcut_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QShortcut that was directly constructed.
func (this *QShortcut) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QShortcut_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QShortcut) callVirtualBase_Event(e *QEvent) bool {

	return (bool)(C.QShortcut_virtualbase_event(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QShortcut) OnEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QShortcut_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_event
func miqt_exec_callback_QShortcut_event(self *C.QShortcut, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QShortcut{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QShortcut) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QShortcut_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QShortcut) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QShortcut_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_eventFilter
func miqt_exec_callback_QShortcut_eventFilter(self *C.QShortcut, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QShortcut{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QShortcut) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QShortcut_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QShortcut_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_timerEvent
func miqt_exec_callback_QShortcut_timerEvent(self *C.QShortcut, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QShortcut{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QShortcut_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QShortcut_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_childEvent
func miqt_exec_callback_QShortcut_childEvent(self *C.QShortcut, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QShortcut{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_CustomEvent(event *QEvent) {

	C.QShortcut_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QShortcut) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QShortcut_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_customEvent
func miqt_exec_callback_QShortcut_customEvent(self *C.QShortcut, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QShortcut{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QShortcut) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QShortcut_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QShortcut) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QShortcut_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_connectNotify
func miqt_exec_callback_QShortcut_connectNotify(self *C.QShortcut, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QShortcut{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QShortcut) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QShortcut_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QShortcut) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QShortcut_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QShortcut_disconnectNotify
func miqt_exec_callback_QShortcut_disconnectNotify(self *C.QShortcut, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QShortcut{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QShortcut) Delete() {
	C.QShortcut_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShortcut) GoGC() {
	runtime.SetFinalizer(this, func(this *QShortcut) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
