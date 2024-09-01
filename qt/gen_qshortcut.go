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
func NewQShortcut5(key *QKeySequence, parent *QWidget, member string, ambiguousMember string, shortcutContext uintptr) *QShortcut {
	member_Cstring := C.CString(member)
	defer C.free(unsafe.Pointer(member_Cstring))
	ambiguousMember_Cstring := C.CString(ambiguousMember)
	defer C.free(unsafe.Pointer(ambiguousMember_Cstring))
	ret := C.QShortcut_new5(key.cPointer(), parent.cPointer(), member_Cstring, ambiguousMember_Cstring, (C.uintptr_t)(shortcutContext))
	return newQShortcut(ret)
}

func (this *QShortcut) MetaObject() *QMetaObject {
	ret := C.QShortcut_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QShortcut_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QShortcut_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QShortcut) SetKey(key *QKeySequence) {
	C.QShortcut_SetKey(this.h, key.cPointer())
}

func (this *QShortcut) Key() *QKeySequence {
	ret := C.QShortcut_Key(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQKeySequence(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QKeySequence) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QShortcut) SetEnabled(enable bool) {
	C.QShortcut_SetEnabled(this.h, (C.bool)(enable))
}

func (this *QShortcut) IsEnabled() bool {
	ret := C.QShortcut_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QShortcut) SetContext(context uintptr) {
	C.QShortcut_SetContext(this.h, (C.uintptr_t)(context))
}

func (this *QShortcut) Context() uintptr {
	ret := C.QShortcut_Context(this.h)
	return (uintptr)(ret)
}

func (this *QShortcut) SetWhatsThis(text string) {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	C.QShortcut_SetWhatsThis(this.h, text_Cstring, C.size_t(len(text)))
}

func (this *QShortcut) WhatsThis() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_WhatsThis(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QShortcut) SetAutoRepeat(on bool) {
	C.QShortcut_SetAutoRepeat(this.h, (C.bool)(on))
}

func (this *QShortcut) AutoRepeat() bool {
	ret := C.QShortcut_AutoRepeat(this.h)
	return (bool)(ret)
}

func (this *QShortcut) Id() int {
	ret := C.QShortcut_Id(this.h)
	return (int)(ret)
}

func (this *QShortcut) ParentWidget() *QWidget {
	ret := C.QShortcut_ParentWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QShortcut) Activated() {
	C.QShortcut_Activated(this.h)
}

func (this *QShortcut) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QShortcut_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QShortcut) ActivatedAmbiguously() {
	C.QShortcut_ActivatedAmbiguously(this.h)
}

func (this *QShortcut) OnActivatedAmbiguously(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QShortcut_connect_ActivatedAmbiguously(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QShortcut_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QShortcut_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QShortcut_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QShortcut_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QShortcut_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QShortcut) Delete() {
	C.QShortcut_Delete(this.h)
}
