package qt6

/*

#include "gen_qsystemtrayicon.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QSystemTrayIcon__ActivationReason int

const (
	QSystemTrayIcon__Unknown     QSystemTrayIcon__ActivationReason = 0
	QSystemTrayIcon__Context     QSystemTrayIcon__ActivationReason = 1
	QSystemTrayIcon__DoubleClick QSystemTrayIcon__ActivationReason = 2
	QSystemTrayIcon__Trigger     QSystemTrayIcon__ActivationReason = 3
	QSystemTrayIcon__MiddleClick QSystemTrayIcon__ActivationReason = 4
)

type QSystemTrayIcon__MessageIcon int

const (
	QSystemTrayIcon__NoIcon      QSystemTrayIcon__MessageIcon = 0
	QSystemTrayIcon__Information QSystemTrayIcon__MessageIcon = 1
	QSystemTrayIcon__Warning     QSystemTrayIcon__MessageIcon = 2
	QSystemTrayIcon__Critical    QSystemTrayIcon__MessageIcon = 3
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

func (this *QSystemTrayIcon) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQSystemTrayIcon(h *C.QSystemTrayIcon) *QSystemTrayIcon {
	if h == nil {
		return nil
	}
	return &QSystemTrayIcon{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQSystemTrayIcon(h unsafe.Pointer) *QSystemTrayIcon {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QSystemTrayIcon_MetaObject(this.h)))
}

func (this *QSystemTrayIcon) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSystemTrayIcon_Metacast(this.h, param1_Cstring))
}

func QSystemTrayIcon_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemTrayIcon) SetContextMenu(menu *QMenu) {
	C.QSystemTrayIcon_SetContextMenu(this.h, menu.cPointer())
}

func (this *QSystemTrayIcon) ContextMenu() *QMenu {
	return UnsafeNewQMenu(unsafe.Pointer(C.QSystemTrayIcon_ContextMenu(this.h)))
}

func (this *QSystemTrayIcon) Icon() *QIcon {
	_ret := C.QSystemTrayIcon_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSystemTrayIcon) SetIcon(icon *QIcon) {
	C.QSystemTrayIcon_SetIcon(this.h, icon.cPointer())
}

func (this *QSystemTrayIcon) ToolTip() string {
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemTrayIcon) SetToolTip(tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QSystemTrayIcon_SetToolTip(this.h, tip_ms)
}

func QSystemTrayIcon_IsSystemTrayAvailable() bool {
	return (bool)(C.QSystemTrayIcon_IsSystemTrayAvailable())
}

func QSystemTrayIcon_SupportsMessages() bool {
	return (bool)(C.QSystemTrayIcon_SupportsMessages())
}

func (this *QSystemTrayIcon) Geometry() *QRect {
	_ret := C.QSystemTrayIcon_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSystemTrayIcon) IsVisible() bool {
	return (bool)(C.QSystemTrayIcon_IsVisible(this.h))
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
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QSystemTrayIcon_ShowMessage(this.h, title_ms, msg_ms, icon.cPointer())
}

func (this *QSystemTrayIcon) ShowMessage2(title string, msg string) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QSystemTrayIcon_ShowMessage2(this.h, title_ms, msg_ms)
}

func (this *QSystemTrayIcon) Activated(reason QSystemTrayIcon__ActivationReason) {
	C.QSystemTrayIcon_Activated(this.h, (C.int)(reason))
}
func (this *QSystemTrayIcon) OnActivated(slot func(reason QSystemTrayIcon__ActivationReason)) {
	C.QSystemTrayIcon_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSystemTrayIcon_Activated
func miqt_exec_callback_QSystemTrayIcon_Activated(cb C.intptr_t, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reason QSystemTrayIcon__ActivationReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSystemTrayIcon__ActivationReason)(reason)

	gofunc(slotval1)
}

func (this *QSystemTrayIcon) MessageClicked() {
	C.QSystemTrayIcon_MessageClicked(this.h)
}
func (this *QSystemTrayIcon) OnMessageClicked(slot func()) {
	C.QSystemTrayIcon_connect_MessageClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSystemTrayIcon_MessageClicked
func miqt_exec_callback_QSystemTrayIcon_MessageClicked(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QSystemTrayIcon_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemTrayIcon_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemTrayIcon) ShowMessage4(title string, msg string, icon *QIcon, msecs int) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QSystemTrayIcon_ShowMessage4(this.h, title_ms, msg_ms, icon.cPointer(), (C.int)(msecs))
}

func (this *QSystemTrayIcon) ShowMessage3(title string, msg string, icon QSystemTrayIcon__MessageIcon) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QSystemTrayIcon_ShowMessage3(this.h, title_ms, msg_ms, (C.int)(icon))
}

func (this *QSystemTrayIcon) ShowMessage42(title string, msg string, icon QSystemTrayIcon__MessageIcon, msecs int) {
	title_ms := C.struct_miqt_string{}
	title_ms.data = C.CString(title)
	title_ms.len = C.size_t(len(title))
	defer C.free(unsafe.Pointer(title_ms.data))
	msg_ms := C.struct_miqt_string{}
	msg_ms.data = C.CString(msg)
	msg_ms.len = C.size_t(len(msg))
	defer C.free(unsafe.Pointer(msg_ms.data))
	C.QSystemTrayIcon_ShowMessage42(this.h, title_ms, msg_ms, (C.int)(icon), (C.int)(msecs))
}

// Delete this object from C++ memory.
func (this *QSystemTrayIcon) Delete() {
	C.QSystemTrayIcon_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSystemTrayIcon) GoGC() {
	runtime.SetFinalizer(this, func(this *QSystemTrayIcon) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}