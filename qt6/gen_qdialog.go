package qt6

/*

#include "gen_qdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDialog__DialogCode int

const (
	QDialog__Rejected QDialog__DialogCode = 0
	QDialog__Accepted QDialog__DialogCode = 1
)

type QDialog struct {
	h *C.QDialog
	*QWidget
}

func (this *QDialog) cPointer() *C.QDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDialog constructs the type using only CGO pointers.
func newQDialog(h *C.QDialog) *QDialog {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDialog_virtbase(h, &outptr_QWidget)

	return &QDialog{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQDialog constructs the type using only unsafe pointers.
func UnsafeNewQDialog(h unsafe.Pointer) *QDialog {
	return newQDialog((*C.QDialog)(h))
}

// NewQDialog constructs a new QDialog object.
func NewQDialog(parent *QWidget) *QDialog {

	return newQDialog(C.QDialog_new(parent.cPointer()))
}

// NewQDialog2 constructs a new QDialog object.
func NewQDialog2() *QDialog {

	return newQDialog(C.QDialog_new2())
}

// NewQDialog3 constructs a new QDialog object.
func NewQDialog3(parent *QWidget, f WindowType) *QDialog {

	return newQDialog(C.QDialog_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDialog_MetaObject(this.h))
}

func (this *QDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDialog_Metacast(this.h, param1_Cstring))
}

func QDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) Result() int {
	return (int)(C.QDialog_Result(this.h))
}

func (this *QDialog) SetVisible(visible bool) {
	C.QDialog_SetVisible(this.h, (C.bool)(visible))
}

func (this *QDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QDialog_SizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QDialog_MinimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QDialog_SetSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QDialog) IsSizeGripEnabled() bool {
	return (bool)(C.QDialog_IsSizeGripEnabled(this.h))
}

func (this *QDialog) SetModal(modal bool) {
	C.QDialog_SetModal(this.h, (C.bool)(modal))
}

func (this *QDialog) SetResult(r int) {
	C.QDialog_SetResult(this.h, (C.int)(r))
}

func (this *QDialog) Finished(result int) {
	C.QDialog_Finished(this.h, (C.int)(result))
}
func (this *QDialog) OnFinished(slot func(result int)) {
	C.QDialog_connect_Finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Finished
func miqt_exec_callback_QDialog_Finished(cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc(slotval1)
}

func (this *QDialog) Accepted() {
	C.QDialog_Accepted(this.h)
}
func (this *QDialog) OnAccepted(slot func()) {
	C.QDialog_connect_Accepted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Accepted
func miqt_exec_callback_QDialog_Accepted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Rejected() {
	C.QDialog_Rejected(this.h)
}
func (this *QDialog) OnRejected(slot func()) {
	C.QDialog_connect_Rejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_Rejected
func miqt_exec_callback_QDialog_Rejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Open() {
	C.QDialog_Open(this.h)
}

func (this *QDialog) Exec() int {
	return (int)(C.QDialog_Exec(this.h))
}

func (this *QDialog) Done(param1 int) {
	C.QDialog_Done(this.h, (C.int)(param1))
}

func (this *QDialog) Accept() {
	C.QDialog_Accept(this.h)
}

func (this *QDialog) Reject() {
	C.QDialog_Reject(this.h)
}

func QDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) callVirtualBase_SetVisible(visible bool) {

	C.QDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_SetVisible
func miqt_exec_callback_QDialog_SetVisible(self *C.QDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_SizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_SizeHint
func miqt_exec_callback_QDialog_SizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MinimumSizeHint
func miqt_exec_callback_QDialog_MinimumSizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Open() {

	C.QDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QDialog) OnOpen(slot func(super func())) {
	ok := C.QDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Open
func miqt_exec_callback_QDialog_Open(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Open)

}

func (this *QDialog) callVirtualBase_Exec() int {

	return (int)(C.QDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnExec(slot func(super func() int) int) {
	ok := C.QDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Exec
func miqt_exec_callback_QDialog_Exec(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_Done(param1 int) {

	C.QDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QDialog) OnDone(slot func(super func(param1 int), param1 int)) {
	ok := C.QDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Done
func miqt_exec_callback_QDialog_Done(self *C.QDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QDialog) callVirtualBase_Accept() {

	C.QDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QDialog) OnAccept(slot func(super func())) {
	ok := C.QDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Accept
func miqt_exec_callback_QDialog_Accept(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Accept)

}

func (this *QDialog) callVirtualBase_Reject() {

	C.QDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QDialog) OnReject(slot func(super func())) {
	ok := C.QDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Reject
func miqt_exec_callback_QDialog_Reject(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Reject)

}

func (this *QDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_KeyPressEvent
func miqt_exec_callback_QDialog_KeyPressEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_CloseEvent
func miqt_exec_callback_QDialog_CloseEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ShowEvent
func miqt_exec_callback_QDialog_ShowEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ResizeEvent
func miqt_exec_callback_QDialog_ResizeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ContextMenuEvent
func miqt_exec_callback_QDialog_ContextMenuEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_EventFilter
func miqt_exec_callback_QDialog_EventFilter(self *C.QDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_DevType() int {

	return (int)(C.QDialog_virtualbase_DevType(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnDevType(slot func(super func() int) int) {
	ok := C.QDialog_override_virtual_DevType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DevType
func miqt_exec_callback_QDialog_DevType(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDialog_virtualbase_HeightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDialog_override_virtual_HeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_HeightForWidth
func miqt_exec_callback_QDialog_HeightForWidth(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDialog_virtualbase_HasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDialog_override_virtual_HasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_HasHeightForWidth
func miqt_exec_callback_QDialog_HasHeightForWidth(self *C.QDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDialog_virtualbase_PaintEngine(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDialog_override_virtual_PaintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_PaintEngine
func miqt_exec_callback_QDialog_PaintEngine(self *C.QDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDialog_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Event
func miqt_exec_callback_QDialog_Event(self *C.QDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MousePressEvent
func miqt_exec_callback_QDialog_MousePressEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MouseReleaseEvent
func miqt_exec_callback_QDialog_MouseReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MouseDoubleClickEvent
func miqt_exec_callback_QDialog_MouseDoubleClickEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MouseMoveEvent
func miqt_exec_callback_QDialog_MouseMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDialog_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDialog_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_WheelEvent
func miqt_exec_callback_QDialog_WheelEvent(self *C.QDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDialog_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDialog_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_KeyReleaseEvent
func miqt_exec_callback_QDialog_KeyReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialog_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_FocusInEvent
func miqt_exec_callback_QDialog_FocusInEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialog_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_FocusOutEvent
func miqt_exec_callback_QDialog_FocusOutEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDialog_virtualbase_EnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDialog_override_virtual_EnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_EnterEvent
func miqt_exec_callback_QDialog_EnterEvent(self *C.QDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDialog_virtualbase_LeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialog_override_virtual_LeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_LeaveEvent
func miqt_exec_callback_QDialog_LeaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDialog_virtualbase_PaintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDialog_override_virtual_PaintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_PaintEvent
func miqt_exec_callback_QDialog_PaintEvent(self *C.QDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDialog_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDialog_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_MoveEvent
func miqt_exec_callback_QDialog_MoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDialog_virtualbase_TabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDialog_override_virtual_TabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_TabletEvent
func miqt_exec_callback_QDialog_TabletEvent(self *C.QDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDialog_virtualbase_ActionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDialog_override_virtual_ActionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ActionEvent
func miqt_exec_callback_QDialog_ActionEvent(self *C.QDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDialog_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDialog_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DragEnterEvent
func miqt_exec_callback_QDialog_DragEnterEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDialog_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDialog_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DragMoveEvent
func miqt_exec_callback_QDialog_DragMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDialog_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDialog_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DragLeaveEvent
func miqt_exec_callback_QDialog_DragLeaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDialog_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDialog_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DropEvent
func miqt_exec_callback_QDialog_DropEvent(self *C.QDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDialog_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDialog_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_HideEvent
func miqt_exec_callback_QDialog_HideEvent(self *C.QDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDialog_virtualbase_NativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDialog_override_virtual_NativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_NativeEvent
func miqt_exec_callback_QDialog_NativeEvent(self *C.QDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QDialog_virtualbase_ChangeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QDialog_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ChangeEvent
func miqt_exec_callback_QDialog_ChangeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDialog_virtualbase_Metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDialog_override_virtual_Metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Metric
func miqt_exec_callback_QDialog_Metric(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDialog_virtualbase_InitPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDialog_override_virtual_InitPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_InitPainter
func miqt_exec_callback_QDialog_InitPainter(self *C.QDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDialog_virtualbase_Redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDialog_override_virtual_Redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_Redirected
func miqt_exec_callback_QDialog_Redirected(self *C.QDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDialog_virtualbase_SharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDialog_override_virtual_SharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_SharedPainter
func miqt_exec_callback_QDialog_SharedPainter(self *C.QDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDialog_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDialog_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_InputMethodEvent
func miqt_exec_callback_QDialog_InputMethodEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDialog_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDialog_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_InputMethodQuery
func miqt_exec_callback_QDialog_InputMethodQuery(self *C.QDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDialog_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDialog_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_FocusNextPrevChild
func miqt_exec_callback_QDialog_FocusNextPrevChild(self *C.QDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDialog_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDialog_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_TimerEvent
func miqt_exec_callback_QDialog_TimerEvent(self *C.QDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDialog_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDialog_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ChildEvent
func miqt_exec_callback_QDialog_ChildEvent(self *C.QDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDialog_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialog_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_CustomEvent
func miqt_exec_callback_QDialog_CustomEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialog_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_ConnectNotify
func miqt_exec_callback_QDialog_ConnectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialog_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_DisconnectNotify
func miqt_exec_callback_QDialog_DisconnectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDialog) Delete() {
	C.QDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
