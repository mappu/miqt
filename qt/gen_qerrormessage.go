package qt

/*

#include "gen_qerrormessage.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QErrorMessage struct {
	h *C.QErrorMessage
	*QDialog
}

func (this *QErrorMessage) cPointer() *C.QErrorMessage {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QErrorMessage) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQErrorMessage constructs the type using only CGO pointers.
func newQErrorMessage(h *C.QErrorMessage) *QErrorMessage {
	if h == nil {
		return nil
	}
	var outptr_QDialog *C.QDialog = nil
	C.QErrorMessage_virtbase(h, &outptr_QDialog)

	return &QErrorMessage{h: h,
		QDialog: newQDialog(outptr_QDialog)}
}

// UnsafeNewQErrorMessage constructs the type using only unsafe pointers.
func UnsafeNewQErrorMessage(h unsafe.Pointer) *QErrorMessage {
	return newQErrorMessage((*C.QErrorMessage)(h))
}

// NewQErrorMessage constructs a new QErrorMessage object.
func NewQErrorMessage(parent *QWidget) *QErrorMessage {

	return newQErrorMessage(C.QErrorMessage_new(parent.cPointer()))
}

// NewQErrorMessage2 constructs a new QErrorMessage object.
func NewQErrorMessage2() *QErrorMessage {

	return newQErrorMessage(C.QErrorMessage_new2())
}

func (this *QErrorMessage) MetaObject() *QMetaObject {
	return newQMetaObject(C.QErrorMessage_MetaObject(this.h))
}

func (this *QErrorMessage) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QErrorMessage_Metacast(this.h, param1_Cstring))
}

func QErrorMessage_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_QtHandler() *QErrorMessage {
	return newQErrorMessage(C.QErrorMessage_QtHandler())
}

func (this *QErrorMessage) ShowMessage(message string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	C.QErrorMessage_ShowMessage(this.h, message_ms)
}

func (this *QErrorMessage) ShowMessage2(message string, typeVal string) {
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	typeVal_ms := C.struct_miqt_string{}
	typeVal_ms.data = C.CString(typeVal)
	typeVal_ms.len = C.size_t(len(typeVal))
	defer C.free(unsafe.Pointer(typeVal_ms.data))
	C.QErrorMessage_ShowMessage2(this.h, message_ms, typeVal_ms)
}

func QErrorMessage_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QErrorMessage_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QErrorMessage_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QErrorMessage) callVirtualBase_Done(param1 int) {

	C.QErrorMessage_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QErrorMessage) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QErrorMessage_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_Done
func miqt_exec_callback_QErrorMessage_Done(self *C.QErrorMessage, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QErrorMessage) callVirtualBase_ChangeEvent(e *QEvent) {

	C.QErrorMessage_virtualbase_ChangeEvent(unsafe.Pointer(this.h), e.cPointer())

}
func (this *QErrorMessage) OnChangeEvent(slot func(super func(e *QEvent), e *QEvent)) {
	ok := C.QErrorMessage_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_ChangeEvent
func miqt_exec_callback_QErrorMessage_ChangeEvent(self *C.QErrorMessage, cb C.intptr_t, e *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent), e *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_SetVisible(visible bool) {

	C.QErrorMessage_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QErrorMessage) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QErrorMessage_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_SetVisible
func miqt_exec_callback_QErrorMessage_SetVisible(self *C.QErrorMessage, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QErrorMessage) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QErrorMessage_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QErrorMessage) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QErrorMessage_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_SizeHint
func miqt_exec_callback_QErrorMessage_SizeHint(self *C.QErrorMessage, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QErrorMessage{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QErrorMessage) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QErrorMessage_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QErrorMessage) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QErrorMessage_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_MinimumSizeHint
func miqt_exec_callback_QErrorMessage_MinimumSizeHint(self *C.QErrorMessage, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QErrorMessage{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QErrorMessage) callVirtualBase_Open() {

	C.QErrorMessage_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QErrorMessage) OnOpen(slot func(super func())) {
	ok := C.QErrorMessage_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_Open
func miqt_exec_callback_QErrorMessage_Open(self *C.QErrorMessage, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QErrorMessage{h: self}).callVirtualBase_Open)

}

func (this *QErrorMessage) callVirtualBase_Exec() int {

	return (int)(C.QErrorMessage_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QErrorMessage) OnExec(slot func(super func() int) int) {
	ok := C.QErrorMessage_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_Exec
func miqt_exec_callback_QErrorMessage_Exec(self *C.QErrorMessage, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QErrorMessage{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QErrorMessage) callVirtualBase_Accept() {

	C.QErrorMessage_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QErrorMessage) OnAccept(slot func(super func())) {
	ok := C.QErrorMessage_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_Accept
func miqt_exec_callback_QErrorMessage_Accept(self *C.QErrorMessage, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QErrorMessage{h: self}).callVirtualBase_Accept)

}

func (this *QErrorMessage) callVirtualBase_Reject() {

	C.QErrorMessage_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QErrorMessage) OnReject(slot func(super func())) {
	ok := C.QErrorMessage_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_Reject
func miqt_exec_callback_QErrorMessage_Reject(self *C.QErrorMessage, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QErrorMessage{h: self}).callVirtualBase_Reject)

}

func (this *QErrorMessage) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QErrorMessage_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QErrorMessage) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QErrorMessage_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_KeyPressEvent
func miqt_exec_callback_QErrorMessage_KeyPressEvent(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QErrorMessage_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QErrorMessage) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QErrorMessage_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_CloseEvent
func miqt_exec_callback_QErrorMessage_CloseEvent(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QErrorMessage_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QErrorMessage) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QErrorMessage_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_ShowEvent
func miqt_exec_callback_QErrorMessage_ShowEvent(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QErrorMessage_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QErrorMessage) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QErrorMessage_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_ResizeEvent
func miqt_exec_callback_QErrorMessage_ResizeEvent(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QErrorMessage_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QErrorMessage) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QErrorMessage_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_ContextMenuEvent
func miqt_exec_callback_QErrorMessage_ContextMenuEvent(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QErrorMessage{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QErrorMessage) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QErrorMessage_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QErrorMessage) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QErrorMessage_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QErrorMessage_EventFilter
func miqt_exec_callback_QErrorMessage_EventFilter(self *C.QErrorMessage, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QErrorMessage{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QErrorMessage) Delete() {
	C.QErrorMessage_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QErrorMessage) GoGC() {
	runtime.SetFinalizer(this, func(this *QErrorMessage) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
