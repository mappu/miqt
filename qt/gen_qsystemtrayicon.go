package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qsystemtrayicon.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSystemTrayIcon struct {
	h *C.QSystemTrayIcon
	*QObject
}

func (this *QSystemTrayIcon) cPointer() *C.QSystemTrayIcon {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSystemTrayIcon(h *C.QSystemTrayIcon) *QSystemTrayIcon {
	return &QSystemTrayIcon{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQSystemTrayIcon_U(h unsafe.Pointer) *QSystemTrayIcon {
	return newQSystemTrayIcon((*C.QSystemTrayIcon)(h))
}

// NewQSystemTrayIcon constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon() *QSystemTrayIcon {
	ret := C.QSystemTrayIcon_new()
	return newQSystemTrayIcon(ret)
}

// NewQSystemTrayIcon2 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon2(icon *QIcon) *QSystemTrayIcon {
	ret := C.QSystemTrayIcon_new2(icon.cPointer())
	return newQSystemTrayIcon(ret)
}

// NewQSystemTrayIcon3 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon3(parent *QObject) *QSystemTrayIcon {
	ret := C.QSystemTrayIcon_new3(parent.cPointer())
	return newQSystemTrayIcon(ret)
}

// NewQSystemTrayIcon4 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon4(icon *QIcon, parent *QObject) *QSystemTrayIcon {
	ret := C.QSystemTrayIcon_new4(icon.cPointer(), parent.cPointer())
	return newQSystemTrayIcon(ret)
}

func (this *QSystemTrayIcon) MetaObject() *QMetaObject {
	ret := C.QSystemTrayIcon_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSystemTrayIcon_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSystemTrayIcon_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemTrayIcon) SetContextMenu(menu *QMenu) {
	C.QSystemTrayIcon_SetContextMenu(this.h, menu.cPointer())
}

func (this *QSystemTrayIcon) ContextMenu() *QMenu {
	ret := C.QSystemTrayIcon_ContextMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QSystemTrayIcon) Icon() *QIcon {
	ret := C.QSystemTrayIcon_Icon(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQIcon(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QIcon) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSystemTrayIcon) SetIcon(icon *QIcon) {
	C.QSystemTrayIcon_SetIcon(this.h, icon.cPointer())
}

func (this *QSystemTrayIcon) ToolTip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_ToolTip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemTrayIcon) SetToolTip(tip string) {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	C.QSystemTrayIcon_SetToolTip(this.h, tip_Cstring, C.ulong(len(tip)))
}

func QSystemTrayIcon_IsSystemTrayAvailable() bool {
	ret := C.QSystemTrayIcon_IsSystemTrayAvailable()
	return (bool)(ret)
}

func QSystemTrayIcon_SupportsMessages() bool {
	ret := C.QSystemTrayIcon_SupportsMessages()
	return (bool)(ret)
}

func (this *QSystemTrayIcon) Geometry() *QRect {
	ret := C.QSystemTrayIcon_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QSystemTrayIcon) IsVisible() bool {
	ret := C.QSystemTrayIcon_IsVisible(this.h)
	return (bool)(ret)
}

func (this *QSystemTrayIcon) SetVisible(visible bool) {
	C.QSystemTrayIcon_SetVisible(this.h, (C.bool)(visible))
}

func (this *QSystemTrayIcon) Show() {
	C.QSystemTrayIcon_Show(this.h)
}

func (this *QSystemTrayIcon) Hide() {
	C.QSystemTrayIcon_Hide(this.h)
}

func (this *QSystemTrayIcon) ShowMessage(title string, msg string, icon *QIcon) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	msg_Cstring := C.CString(msg)
	defer C.free(unsafe.Pointer(msg_Cstring))
	C.QSystemTrayIcon_ShowMessage(this.h, title_Cstring, C.ulong(len(title)), msg_Cstring, C.ulong(len(msg)), icon.cPointer())
}

func (this *QSystemTrayIcon) ShowMessage2(title string, msg string) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	msg_Cstring := C.CString(msg)
	defer C.free(unsafe.Pointer(msg_Cstring))
	C.QSystemTrayIcon_ShowMessage2(this.h, title_Cstring, C.ulong(len(title)), msg_Cstring, C.ulong(len(msg)))
}

func (this *QSystemTrayIcon) Activated(reason uintptr) {
	C.QSystemTrayIcon_Activated(this.h, (C.uintptr_t)(reason))
}

func (this *QSystemTrayIcon) OnActivated(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSystemTrayIcon_connect_Activated(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QSystemTrayIcon) MessageClicked() {
	C.QSystemTrayIcon_MessageClicked(this.h)
}

func (this *QSystemTrayIcon) OnMessageClicked(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QSystemTrayIcon_connect_MessageClicked(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QSystemTrayIcon_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSystemTrayIcon_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSystemTrayIcon_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSystemTrayIcon_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSystemTrayIcon_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSystemTrayIcon) ShowMessage4(title string, msg string, icon *QIcon, msecs int) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	msg_Cstring := C.CString(msg)
	defer C.free(unsafe.Pointer(msg_Cstring))
	C.QSystemTrayIcon_ShowMessage4(this.h, title_Cstring, C.ulong(len(title)), msg_Cstring, C.ulong(len(msg)), icon.cPointer(), (C.int)(msecs))
}

func (this *QSystemTrayIcon) ShowMessage3(title string, msg string, icon uintptr) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	msg_Cstring := C.CString(msg)
	defer C.free(unsafe.Pointer(msg_Cstring))
	C.QSystemTrayIcon_ShowMessage3(this.h, title_Cstring, C.ulong(len(title)), msg_Cstring, C.ulong(len(msg)), (C.uintptr_t)(icon))
}

func (this *QSystemTrayIcon) ShowMessage42(title string, msg string, icon uintptr, msecs int) {
	title_Cstring := C.CString(title)
	defer C.free(unsafe.Pointer(title_Cstring))
	msg_Cstring := C.CString(msg)
	defer C.free(unsafe.Pointer(msg_Cstring))
	C.QSystemTrayIcon_ShowMessage42(this.h, title_Cstring, C.ulong(len(title)), msg_Cstring, C.ulong(len(msg)), (C.uintptr_t)(icon), (C.int)(msecs))
}

func (this *QSystemTrayIcon) Delete() {
	C.QSystemTrayIcon_Delete(this.h)
}
