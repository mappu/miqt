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
	h *C.QShortcut
	*QObject
}

func (this *QShortcut) cPointer() *C.QShortcut {
	if this == nil {
		return nil
	}
	return this.h
}

func newQShortcut(h *C.QShortcut) *QShortcut {
	if h == nil {
		return nil
	}
	return &QShortcut{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQShortcut_U(h unsafe.Pointer) *QShortcut {
	return newQShortcut((*C.QShortcut)(h))
}

// NewQShortcut constructs a new QShortcut object.
func NewQShortcut(parent *QWidget) *QShortcut {
	ret := C.QShortcut_new(parent.cPointer())
	return newQShortcut(ret)
}

// NewQShortcut2 constructs a new QShortcut object.
func NewQShortcut2(key *QKeySequence, parent *QWidget) *QShortcut {
	ret := C.QShortcut_new2(key.cPointer(), parent.cPointer())
	return newQShortcut(ret)
}

// NewQShortcut3 constructs a new QShortcut object.
func NewQShortcut3(key *QKeySequence, parent *QWidget, member string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ret := C.QShortcut_new3(key.cPointer(), parent.cPointer(), member_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut4 constructs a new QShortcut object.
func NewQShortcut4(key *QKeySequence, parent *QWidget, member string, ambiguousMember string) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new4(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring)
	return newQShortcut(ret)
}

// NewQShortcut5 constructs a new QShortcut object.
func NewQShortcut5(key *QKeySequence, parent *QWidget, member string, ambiguousMember string, shortcutContext ShortcutContext) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new5(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.int)(shortcutContext))
	return newQShortcut(ret)
}

func (this *QShortcut) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QShortcut_MetaObject(this.h)))
}

func (this *QShortcut) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QShortcut_Metacast(this.h, param1_Cstring)
}

func QShortcut_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QShortcut_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QShortcut_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QShortcut_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	C.QShortcut_SetWhatsThis(this.h, (*C.struct_miqt_string)(text_ms))
}

func (this *QShortcut) WhatsThis() string {
	var _ms *C.struct_miqt_string = C.QShortcut_WhatsThis(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	return newQWidget_U(unsafe.Pointer(C.QShortcut_ParentWidget(this.h)))
}

func (this *QShortcut) Activated() {
	C.QShortcut_Activated(this.h)
}
func (this *QShortcut) OnActivated(slot func()) {
	C.QShortcut_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QShortcut_Activated
func miqt_exec_callback_QShortcut_Activated(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QShortcut) ActivatedAmbiguously() {
	C.QShortcut_ActivatedAmbiguously(this.h)
}
func (this *QShortcut) OnActivatedAmbiguously(slot func()) {
	C.QShortcut_connect_ActivatedAmbiguously(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QShortcut_ActivatedAmbiguously
func miqt_exec_callback_QShortcut_ActivatedAmbiguously(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
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
	var _ms *C.struct_miqt_string = C.QShortcut_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QShortcut_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QShortcut_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QShortcut_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QShortcut_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QShortcut_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QShortcut_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
