package qt

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

// newQSystemTrayIcon constructs the type using only CGO pointers.
func newQSystemTrayIcon(h *C.QSystemTrayIcon) *QSystemTrayIcon {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QSystemTrayIcon_virtbase(h, &outptr_QObject)

	return &QSystemTrayIcon{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQSystemTrayIcon constructs the type using only unsafe pointers.
func UnsafeNewQSystemTrayIcon(h unsafe.Pointer) *QSystemTrayIcon {
	return newQSystemTrayIcon((*C.QSystemTrayIcon)(h))
}

// NewQSystemTrayIcon constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon() *QSystemTrayIcon {

	return newQSystemTrayIcon(C.QSystemTrayIcon_new())
}

// NewQSystemTrayIcon2 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon2(icon *QIcon) *QSystemTrayIcon {

	return newQSystemTrayIcon(C.QSystemTrayIcon_new2(icon.cPointer()))
}

// NewQSystemTrayIcon3 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon3(parent *QObject) *QSystemTrayIcon {

	return newQSystemTrayIcon(C.QSystemTrayIcon_new3(parent.cPointer()))
}

// NewQSystemTrayIcon4 constructs a new QSystemTrayIcon object.
func NewQSystemTrayIcon4(icon *QIcon, parent *QObject) *QSystemTrayIcon {

	return newQSystemTrayIcon(C.QSystemTrayIcon_new4(icon.cPointer(), parent.cPointer()))
}

func (this *QSystemTrayIcon) MetaObject() *QMetaObject {
	return newQMetaObject(C.QSystemTrayIcon_metaObject(this.h))
}

func (this *QSystemTrayIcon) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QSystemTrayIcon_metacast(this.h, param1_Cstring))
}

func QSystemTrayIcon_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemTrayIcon_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemTrayIcon) SetContextMenu(menu *QMenu) {
	C.QSystemTrayIcon_setContextMenu(this.h, menu.cPointer())
}

func (this *QSystemTrayIcon) ContextMenu() *QMenu {
	return newQMenu(C.QSystemTrayIcon_contextMenu(this.h))
}

func (this *QSystemTrayIcon) Icon() *QIcon {
	_goptr := newQIcon(C.QSystemTrayIcon_icon(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSystemTrayIcon) SetIcon(icon *QIcon) {
	C.QSystemTrayIcon_setIcon(this.h, icon.cPointer())
}

func (this *QSystemTrayIcon) ToolTip() string {
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_toolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QSystemTrayIcon) SetToolTip(tip string) {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	C.QSystemTrayIcon_setToolTip(this.h, tip_ms)
}

func QSystemTrayIcon_IsSystemTrayAvailable() bool {
	return (bool)(C.QSystemTrayIcon_isSystemTrayAvailable())
}

func QSystemTrayIcon_SupportsMessages() bool {
	return (bool)(C.QSystemTrayIcon_supportsMessages())
}

func (this *QSystemTrayIcon) Geometry() *QRect {
	_goptr := newQRect(C.QSystemTrayIcon_geometry(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QSystemTrayIcon) IsVisible() bool {
	return (bool)(C.QSystemTrayIcon_isVisible(this.h))
}

func (this *QSystemTrayIcon) SetVisible(visible bool) {
	C.QSystemTrayIcon_setVisible(this.h, (C.bool)(visible))
}

func (this *QSystemTrayIcon) Show() {
	C.QSystemTrayIcon_show(this.h)
}

func (this *QSystemTrayIcon) Hide() {
	C.QSystemTrayIcon_hide(this.h)
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
	C.QSystemTrayIcon_showMessage(this.h, title_ms, msg_ms, icon.cPointer())
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
	C.QSystemTrayIcon_showMessage2(this.h, title_ms, msg_ms)
}

func (this *QSystemTrayIcon) Activated(reason QSystemTrayIcon__ActivationReason) {
	C.QSystemTrayIcon_activated(this.h, (C.int)(reason))
}
func (this *QSystemTrayIcon) OnActivated(slot func(reason QSystemTrayIcon__ActivationReason)) {
	C.QSystemTrayIcon_connect_activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSystemTrayIcon_activated
func miqt_exec_callback_QSystemTrayIcon_activated(cb C.intptr_t, reason C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(reason QSystemTrayIcon__ActivationReason))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QSystemTrayIcon__ActivationReason)(reason)

	gofunc(slotval1)
}

func (this *QSystemTrayIcon) MessageClicked() {
	C.QSystemTrayIcon_messageClicked(this.h)
}
func (this *QSystemTrayIcon) OnMessageClicked(slot func()) {
	C.QSystemTrayIcon_connect_messageClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QSystemTrayIcon_messageClicked
func miqt_exec_callback_QSystemTrayIcon_messageClicked(cb C.intptr_t) {
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
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemTrayIcon_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemTrayIcon_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QSystemTrayIcon_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QSystemTrayIcon_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
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
	C.QSystemTrayIcon_showMessage4(this.h, title_ms, msg_ms, icon.cPointer(), (C.int)(msecs))
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
	C.QSystemTrayIcon_showMessage3(this.h, title_ms, msg_ms, (C.int)(icon))
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
	C.QSystemTrayIcon_showMessage42(this.h, title_ms, msg_ms, (C.int)(icon), (C.int)(msecs))
}

func (this *QSystemTrayIcon) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QSystemTrayIcon_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QSystemTrayIcon) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QSystemTrayIcon_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_event
func miqt_exec_callback_QSystemTrayIcon_event(self *C.QSystemTrayIcon, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QSystemTrayIcon) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QSystemTrayIcon_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QSystemTrayIcon) OneventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QSystemTrayIcon_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_eventFilter
func miqt_exec_callback_QSystemTrayIcon_eventFilter(self *C.QSystemTrayIcon, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QSystemTrayIcon) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QSystemTrayIcon_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSystemTrayIcon) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QSystemTrayIcon_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_timerEvent
func miqt_exec_callback_QSystemTrayIcon_timerEvent(self *C.QSystemTrayIcon, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QSystemTrayIcon) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QSystemTrayIcon_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSystemTrayIcon) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QSystemTrayIcon_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_childEvent
func miqt_exec_callback_QSystemTrayIcon_childEvent(self *C.QSystemTrayIcon, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QSystemTrayIcon) callVirtualBase_CustomEvent(event *QEvent) {

	C.QSystemTrayIcon_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QSystemTrayIcon) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QSystemTrayIcon_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_customEvent
func miqt_exec_callback_QSystemTrayIcon_customEvent(self *C.QSystemTrayIcon, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QSystemTrayIcon) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QSystemTrayIcon_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSystemTrayIcon) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSystemTrayIcon_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_connectNotify
func miqt_exec_callback_QSystemTrayIcon_connectNotify(self *C.QSystemTrayIcon, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QSystemTrayIcon) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QSystemTrayIcon_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QSystemTrayIcon) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QSystemTrayIcon_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QSystemTrayIcon_disconnectNotify
func miqt_exec_callback_QSystemTrayIcon_disconnectNotify(self *C.QSystemTrayIcon, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QSystemTrayIcon{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QSystemTrayIcon) Delete() {
	C.QSystemTrayIcon_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSystemTrayIcon) GoGC() {
	runtime.SetFinalizer(this, func(this *QSystemTrayIcon) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
