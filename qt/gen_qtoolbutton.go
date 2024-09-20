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

type QToolButton__ToolButtonPopupMode int

const (
	QToolButton__DelayedPopup    QToolButton__ToolButtonPopupMode = 0
	QToolButton__MenuButtonPopup QToolButton__ToolButtonPopupMode = 1
	QToolButton__InstantPopup    QToolButton__ToolButtonPopupMode = 2
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
	return newQMetaObject_U(unsafe.Pointer(C.QToolButton_MetaObject(this.h)))
}

func (this *QToolButton) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QToolButton_Metacast(this.h, param1_Cstring)
}

func QToolButton_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolButton_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QToolButton) SizeHint() *QSize {
	_ret := C.QToolButton_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) MinimumSizeHint() *QSize {
	_ret := C.QToolButton_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QToolButton) ToolButtonStyle() ToolButtonStyle {
	return (ToolButtonStyle)(C.QToolButton_ToolButtonStyle(this.h))
}

func (this *QToolButton) ArrowType() ArrowType {
	return (ArrowType)(C.QToolButton_ArrowType(this.h))
}

func (this *QToolButton) SetArrowType(typeVal ArrowType) {
	C.QToolButton_SetArrowType(this.h, (C.int)(typeVal))
}

func (this *QToolButton) SetMenu(menu *QMenu) {
	C.QToolButton_SetMenu(this.h, menu.cPointer())
}

func (this *QToolButton) Menu() *QMenu {
	return newQMenu_U(unsafe.Pointer(C.QToolButton_Menu(this.h)))
}

func (this *QToolButton) SetPopupMode(mode QToolButton__ToolButtonPopupMode) {
	C.QToolButton_SetPopupMode(this.h, (C.int)(mode))
}

func (this *QToolButton) PopupMode() QToolButton__ToolButtonPopupMode {
	return (QToolButton__ToolButtonPopupMode)(C.QToolButton_PopupMode(this.h))
}

func (this *QToolButton) DefaultAction() *QAction {
	return newQAction_U(unsafe.Pointer(C.QToolButton_DefaultAction(this.h)))
}

func (this *QToolButton) SetAutoRaise(enable bool) {
	C.QToolButton_SetAutoRaise(this.h, (C.bool)(enable))
}

func (this *QToolButton) AutoRaise() bool {
	return (bool)(C.QToolButton_AutoRaise(this.h))
}

func (this *QToolButton) ShowMenu() {
	C.QToolButton_ShowMenu(this.h)
}

func (this *QToolButton) SetToolButtonStyle(style ToolButtonStyle) {
	C.QToolButton_SetToolButtonStyle(this.h, (C.int)(style))
}

func (this *QToolButton) SetDefaultAction(defaultAction *QAction) {
	C.QToolButton_SetDefaultAction(this.h, defaultAction.cPointer())
}

func (this *QToolButton) Triggered(param1 *QAction) {
	C.QToolButton_Triggered(this.h, param1.cPointer())
}
func (this *QToolButton) OnTriggered(slot func(param1 *QAction)) {
	C.QToolButton_connect_Triggered(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QToolButton_Triggered
func miqt_exec_callback_QToolButton_Triggered(cb *C.void, param1 *C.QAction) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(param1 *QAction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQAction_U(unsafe.Pointer(param1))

	gofunc(slotval1)
}

func QToolButton_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolButton_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolButton_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QToolButton_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QToolButton_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QToolButton) Delete() {
	C.QToolButton_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolButton) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolButton) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
