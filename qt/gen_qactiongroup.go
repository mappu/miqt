package qt

/*

#include "gen_qactiongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime/cgo"
	"unsafe"
)

type QActionGroup__ExclusionPolicy int

const (
	QActionGroup__ExclusionPolicy__None              QActionGroup__ExclusionPolicy = 0
	QActionGroup__ExclusionPolicy__Exclusive         QActionGroup__ExclusionPolicy = 1
	QActionGroup__ExclusionPolicy__ExclusiveOptional QActionGroup__ExclusionPolicy = 2
)

type QActionGroup struct {
	h *C.QActionGroup
	*QObject
}

func (this *QActionGroup) cPointer() *C.QActionGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func newQActionGroup(h *C.QActionGroup) *QActionGroup {
	if h == nil {
		return nil
	}
	return &QActionGroup{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQActionGroup_U(h unsafe.Pointer) *QActionGroup {
	return newQActionGroup((*C.QActionGroup)(h))
}

// NewQActionGroup constructs a new QActionGroup object.
func NewQActionGroup(parent *QObject) *QActionGroup {
	ret := C.QActionGroup_new(parent.cPointer())
	return newQActionGroup(ret)
}

func (this *QActionGroup) MetaObject() *QMetaObject {
	ret := C.QActionGroup_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QActionGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QActionGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QActionGroup) AddAction(a *QAction) *QAction {
	ret := C.QActionGroup_AddAction(this.h, a.cPointer())
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionGroup) AddActionWithText(text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QActionGroup_AddActionWithText(this.h, text_Cstring, C.size_t(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionGroup) AddAction2(icon *QIcon, text string) *QAction {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QActionGroup_AddAction2(this.h, icon.cPointer(), text_Cstring, C.size_t(len(text)))
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionGroup) RemoveAction(a *QAction) {
	C.QActionGroup_RemoveAction(this.h, a.cPointer())
}

func (this *QActionGroup) Actions() []*QAction {
	var _out **C.QAction = nil
	var _out_len C.size_t = 0
	C.QActionGroup_Actions(this.h, &_out, &_out_len)
	ret := make([]*QAction, int(_out_len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQAction(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QActionGroup) CheckedAction() *QAction {
	ret := C.QActionGroup_CheckedAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionGroup) IsExclusive() bool {
	ret := C.QActionGroup_IsExclusive(this.h)
	return (bool)(ret)
}

func (this *QActionGroup) IsEnabled() bool {
	ret := C.QActionGroup_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QActionGroup) IsVisible() bool {
	ret := C.QActionGroup_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QActionGroup) ExclusionPolicy() QActionGroup__ExclusionPolicy {
	ret := C.QActionGroup_ExclusionPolicy(this.h)
	return (QActionGroup__ExclusionPolicy)(ret)
}

func (this *QActionGroup) SetEnabled(enabled bool) {
	C.QActionGroup_SetEnabled(this.h, (C.bool)(enabled))
}

func (this *QActionGroup) SetDisabled(b bool) {
	C.QActionGroup_SetDisabled(this.h, (C.bool)(b))
}

func (this *QActionGroup) SetVisible(visible bool) {
	C.QActionGroup_SetVisible(this.h, (C.bool)(visible))
}

func (this *QActionGroup) SetExclusive(exclusive bool) {
	C.QActionGroup_SetExclusive(this.h, (C.bool)(exclusive))
}

func (this *QActionGroup) SetExclusionPolicy(policy QActionGroup__ExclusionPolicy) {
	C.QActionGroup_SetExclusionPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QActionGroup) Triggered(param1 *QAction) {
	C.QActionGroup_Triggered(this.h, param1.cPointer())
}

func (this *QActionGroup) OnTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QActionGroup_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QActionGroup) Hovered(param1 *QAction) {
	C.QActionGroup_Hovered(this.h, param1.cPointer())
}

func (this *QActionGroup) OnHovered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QActionGroup_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QActionGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QActionGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QActionGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QActionGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QActionGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QActionGroup) Delete() {
	C.QActionGroup_Delete(this.h)
}
