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

func newQShortcut(h *C.QShortcut) *QShortcut {
	if h == nil {
		return nil
	}
	return &QShortcut{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQShortcut(h unsafe.Pointer) *QShortcut {
	return newQShortcut((*C.QShortcut)(h))
}

// NewQShortcut constructs a new QShortcut object.
func NewQShortcut(parent *QObject) *QShortcut {
	ret := C.QShortcut_new(parent.cPointer())
	return newQShortcut(ret)
}

// NewQShortcut2 constructs a new QShortcut object.
func NewQShortcut2(key *QKeySequence, parent *QObject) *QShortcut {
	ret := C.QShortcut_new2(key.cPointer(), parent.cPointer())
	return newQShortcut(ret)
}

// NewQShortcut3 constructs a new QShortcut object.
func NewQShortcut3(key QKeySequence__StandardKey, parent *QObject) *QShortcut {
	ret := C.QShortcut_new3((C.int)(key), parent.cPointer())
	return newQShortcut(ret)
}

// NewQShortcut4 constructs a new QShortcut object.
func NewQShortcut4(key *QKeySequence, parent *QObject, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QShortcut_new4(key.cPointer(), parent.cPointer(), member_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut5 constructs a new QShortcut object.
func NewQShortcut5(key *QKeySequence, parent *QObject, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new5(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut6 constructs a new QShortcut object.
func NewQShortcut6(key *QKeySequence, parent *QObject, member string, ambiguousMember string, context ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new6(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(context))
	return newQShortcut(ret)
}

// NewQShortcut7 constructs a new QShortcut object.
func NewQShortcut7(key QKeySequence__StandardKey, parent *QObject, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QShortcut_new7((C.int)(key), parent.cPointer(), member_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut8 constructs a new QShortcut object.
func NewQShortcut8(key QKeySequence__StandardKey, parent *QObject, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new8((C.int)(key), parent.cPointer(), member_Cstring, ambiguousMember_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut9 constructs a new QShortcut object.
func NewQShortcut9(key QKeySequence__StandardKey, parent *QObject, member string, ambiguousMember string, context ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new9((C.int)(key), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(context))
	return newQShortcut(ret)
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

func (this *QShortcut) SetKey(key *QKeySequence) {
	C.QShortcut_SetKey(this.h, key.cPointer())
}

func (this *QShortcut) Key() *QKeySequence {
	_ret := C.QShortcut_Key(this.h)
	_goptr := newQKeySequence(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QShortcut) SetKeys(key QKeySequence__StandardKey) {
	C.QShortcut_SetKeys(this.h, (C.int)(key))
}

func (this *QShortcut) SetKeysWithKeys(keys []QKeySequence) {
	keys_CArray := (*[0xffff]*C.QKeySequence)(C.malloc(C.size_t(8 * len(keys))))
	defer C.free(unsafe.Pointer(keys_CArray))
	for i := range keys {
		keys_CArray[i] = keys[i].cPointer()
	}
	keys_ma := C.struct_miqt_array{len: C.size_t(len(keys)), data: unsafe.Pointer(keys_CArray)}
	C.QShortcut_SetKeysWithKeys(this.h, keys_ma)
}

func (this *QShortcut) Keys() []QKeySequence {
	var _ma C.struct_miqt_array = C.QShortcut_Keys(this.h)
	_ret := make([]QKeySequence, int(_ma.len))
	_outCast := (*[0xffff]*C.QKeySequence)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQKeySequence(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
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

func (this *QShortcut) SetAutoRepeat(on bool) {
	C.QShortcut_SetAutoRepeat(this.h, (C.bool)(on))
}

func (this *QShortcut) AutoRepeat() bool {
	return (bool)(C.QShortcut_AutoRepeat(this.h))
}

func (this *QShortcut) Id() int {
	return (int)(C.QShortcut_Id(this.h))
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

// Delete this object from C++ memory.
func (this *QShortcut) Delete() {
	C.QShortcut_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShortcut) GoGC() {
	runtime.SetFinalizer(this, func(this *QShortcut) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
