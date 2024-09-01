package qt

/*

#include "gen_qtoolbutton.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QToolButton struct {
	h *C.QToolButton
	*QAbstractButton
}

func (this *QToolButton) cPointer() *C.QToolButton {
	if this == nil {
		return nil
	}
	return this.h
}

func newQToolButton(h *C.QToolButton) *QToolButton {
	if h == nil {
		return nil
	}
	return &QToolButton{h: h, QAbstractButton: newQAbstractButton_U(unsafe.Pointer(h))}
}

func newQToolButton_U(h unsafe.Pointer) *QToolButton {
	return newQToolButton((*C.QToolButton)(h))
}

// NewQToolButton constructs a new QToolButton object.
func NewQToolButton() *QToolButton {
	ret := C.QToolButton_new()
	return newQToolButton(ret)
}

// NewQToolButton2 constructs a new QToolButton object.
func NewQToolButton2(parent *QWidget) *QToolButton {
	ret := C.QToolButton_new2(parent.cPointer())
	return newQToolButton(ret)
}

func (this *QToolButton) MetaObject() *QMetaObject {
	ret := C.QToolButton_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QToolButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolButton) SizeHint() *QSize {
	ret := C.QToolButton_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QToolButton) MinimumSizeHint() *QSize {
	ret := C.QToolButton_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QToolButton) ToolButtonStyle() uintptr {
	ret := C.QToolButton_ToolButtonStyle(this.h)
	return (uintptr)(ret)
}

func (this *QToolButton) ArrowType() uintptr {
	ret := C.QToolButton_ArrowType(this.h)
	return (uintptr)(ret)
}

func (this *QToolButton) SetArrowType(typeVal uintptr) {
	C.QToolButton_SetArrowType(this.h, (C.uintptr_t)(typeVal))
}

func (this *QToolButton) SetMenu(menu *QMenu) {
	C.QToolButton_SetMenu(this.h, menu.cPointer())
}

func (this *QToolButton) Menu() *QMenu {
	ret := C.QToolButton_Menu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QToolButton) SetPopupMode(mode uintptr) {
	C.QToolButton_SetPopupMode(this.h, (C.uintptr_t)(mode))
}

func (this *QToolButton) PopupMode() uintptr {
	ret := C.QToolButton_PopupMode(this.h)
	return (uintptr)(ret)
}

func (this *QToolButton) DefaultAction() *QAction {
	ret := C.QToolButton_DefaultAction(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QToolButton) SetAutoRaise(enable bool) {
	C.QToolButton_SetAutoRaise(this.h, (C.bool)(enable))
}

func (this *QToolButton) AutoRaise() bool {
	ret := C.QToolButton_AutoRaise(this.h)
	return (bool)(ret)
}

func (this *QToolButton) ShowMenu() {
	C.QToolButton_ShowMenu(this.h)
}

func (this *QToolButton) SetToolButtonStyle(style uintptr) {
	C.QToolButton_SetToolButtonStyle(this.h, (C.uintptr_t)(style))
}

func (this *QToolButton) SetDefaultAction(defaultAction *QAction) {
	C.QToolButton_SetDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QToolButton) Triggered(param1 *QAction) {
	C.QToolButton_Triggered(this.h, param1.cPointer())
}

func (this *QToolButton) OnTriggered(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QToolButton_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QToolButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QToolButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QToolButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QToolButton) Delete() {
	C.QToolButton_Delete(this.h)
}
