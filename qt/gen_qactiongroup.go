package qt

/*

#include "gen_qactiongroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QActionGroup__ExclusionPolicy int

const (
	QActionGroup__None              QActionGroup__ExclusionPolicy = 0
	QActionGroup__Exclusive         QActionGroup__ExclusionPolicy = 1
	QActionGroup__ExclusiveOptional QActionGroup__ExclusionPolicy = 2
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
	return newQMetaObject_U(unsafe.Pointer(C.QActionGroup_MetaObject(this.h)))
}

func (this *QActionGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QActionGroup_Metacast(this.h, param1_Cstring)
}

func QActionGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QActionGroup_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QActionGroup) AddAction(a *QAction) *QAction {
	return newQAction_U(unsafe.Pointer(C.QActionGroup_AddAction(this.h, a.cPointer())))
}

func (this *QActionGroup) AddActionWithText(text string) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQAction_U(unsafe.Pointer(C.QActionGroup_AddActionWithText(this.h, (*C.struct_miqt_string)(text_ms))))
}

func (this *QActionGroup) AddAction2(icon *QIcon, text string) *QAction {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	return newQAction_U(unsafe.Pointer(C.QActionGroup_AddAction2(this.h, icon.cPointer(), (*C.struct_miqt_string)(text_ms))))
}

func (this *QActionGroup) RemoveAction(a *QAction) {
	C.QActionGroup_RemoveAction(this.h, a.cPointer())
}

func (this *QActionGroup) Actions() []*QAction {
	var _ma *C.struct_miqt_array = C.QActionGroup_Actions(this.h)
	_ret := make([]*QAction, int(_ma.len))
	_outCast := (*[0xffff]*C.QAction)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQAction_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QActionGroup) CheckedAction() *QAction {
	return newQAction_U(unsafe.Pointer(C.QActionGroup_CheckedAction(this.h)))
}

func (this *QActionGroup) IsExclusive() bool {
	return (bool)(C.QActionGroup_IsExclusive(this.h))
}

func (this *QActionGroup) IsEnabled() bool {
	return (bool)(C.QActionGroup_IsEnabled(this.h))
}

func (this *QActionGroup) IsVisible() bool {
	return (bool)(C.QActionGroup_IsVisible(this.h))
}

func (this *QActionGroup) ExclusionPolicy() QActionGroup__ExclusionPolicy {
	return (QActionGroup__ExclusionPolicy)(C.QActionGroup_ExclusionPolicy(this.h))
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
	C.QActionGroup_SetExclusionPolicy(this.h, (C.int)(policy))
}

func (this *QActionGroup) Triggered(param1 *QAction) {
	C.QActionGroup_Triggered(this.h, param1.cPointer())
}
func (this *QActionGroup) OnTriggered(slot func(param1 *QAction)) {
	C.QActionGroup_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QActionGroup_Triggered
func miqt_exec_callback_QActionGroup_Triggered(cb *C.void, param1 *C.QAction) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func (this *QActionGroup) Hovered(param1 *QAction) {
	C.QActionGroup_Hovered(this.h, param1.cPointer())
}
func (this *QActionGroup) OnHovered(slot func(param1 *QAction)) {
	C.QActionGroup_connect_Hovered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QActionGroup_Hovered
func miqt_exec_callback_QActionGroup_Hovered(cb *C.void, param1 *C.QAction) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QActionGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QActionGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QActionGroup_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QActionGroup_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QActionGroup_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QActionGroup) Delete() {
	C.QActionGroup_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QActionGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QActionGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
