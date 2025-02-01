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
	return newQMetaObject(C.QDialog_metaObject(this.h))
}

func (this *QDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDialog_metacast(this.h, param1_Cstring))
}

func QDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) Result() int {
	return (int)(C.QDialog_result(this.h))
}

func (this *QDialog) SetVisible(visible bool) {
	C.QDialog_setVisible(this.h, (C.bool)(visible))
}

func (this *QDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QDialog_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QDialog_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QDialog_setSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QDialog) IsSizeGripEnabled() bool {
	return (bool)(C.QDialog_isSizeGripEnabled(this.h))
}

func (this *QDialog) SetModal(modal bool) {
	C.QDialog_setModal(this.h, (C.bool)(modal))
}

func (this *QDialog) SetResult(r int) {
	C.QDialog_setResult(this.h, (C.int)(r))
}

func (this *QDialog) Finished(result int) {
	C.QDialog_finished(this.h, (C.int)(result))
}
func (this *QDialog) OnFinished(slot func(result int)) {
	C.QDialog_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_finished
func miqt_exec_callback_QDialog_finished(cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc(slotval1)
}

func (this *QDialog) Accepted() {
	C.QDialog_accepted(this.h)
}
func (this *QDialog) OnAccepted(slot func()) {
	C.QDialog_connect_accepted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_accepted
func miqt_exec_callback_QDialog_accepted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Rejected() {
	C.QDialog_rejected(this.h)
}
func (this *QDialog) OnRejected(slot func()) {
	C.QDialog_connect_rejected(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDialog_rejected
func miqt_exec_callback_QDialog_rejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Open() {
	C.QDialog_open(this.h)
}

func (this *QDialog) Exec() int {
	return (int)(C.QDialog_exec(this.h))
}

func (this *QDialog) Done(param1 int) {
	C.QDialog_done(this.h, (C.int)(param1))
}

func (this *QDialog) Accept() {
	C.QDialog_accept(this.h)
}

func (this *QDialog) Reject() {
	C.QDialog_reject(this.h)
}

func QDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) callVirtualBase_SetVisible(visible bool) {

	C.QDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDialog) OnsetVisible(slot func(super func(visible bool), visible bool)) {
	ok := C.QDialog_override_virtual_setVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_setVisible
func miqt_exec_callback_QDialog_setVisible(self *C.QDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OnsizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_sizeHint
func miqt_exec_callback_QDialog_sizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OnminimumSizeHint(slot func(super func() *QSize) *QSize) {
	ok := C.QDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_minimumSizeHint
func miqt_exec_callback_QDialog_minimumSizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QSize) *QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Open() {

	C.QDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QDialog) Onopen(slot func(super func())) {
	ok := C.QDialog_override_virtual_open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_open
func miqt_exec_callback_QDialog_open(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Open)

}

func (this *QDialog) callVirtualBase_Exec() int {

	return (int)(C.QDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QDialog) Onexec(slot func(super func() int) int) {
	ok := C.QDialog_override_virtual_exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_exec
func miqt_exec_callback_QDialog_exec(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_Done(param1 int) {

	C.QDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QDialog) Ondone(slot func(super func(param1 int), param1 int)) {
	ok := C.QDialog_override_virtual_done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_done
func miqt_exec_callback_QDialog_done(self *C.QDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QDialog) callVirtualBase_Accept() {

	C.QDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QDialog) Onaccept(slot func(super func())) {
	ok := C.QDialog_override_virtual_accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_accept
func miqt_exec_callback_QDialog_accept(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Accept)

}

func (this *QDialog) callVirtualBase_Reject() {

	C.QDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QDialog) Onreject(slot func(super func())) {
	ok := C.QDialog_override_virtual_reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_reject
func miqt_exec_callback_QDialog_reject(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Reject)

}

func (this *QDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnkeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	ok := C.QDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_keyPressEvent
func miqt_exec_callback_QDialog_keyPressEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OncloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	ok := C.QDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_closeEvent
func miqt_exec_callback_QDialog_closeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnshowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	ok := C.QDialog_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_showEvent
func miqt_exec_callback_QDialog_showEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnresizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	ok := C.QDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_resizeEvent
func miqt_exec_callback_QDialog_resizeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OncontextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	ok := C.QDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_contextMenuEvent
func miqt_exec_callback_QDialog_contextMenuEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QDialog) OneventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	ok := C.QDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_eventFilter
func miqt_exec_callback_QDialog_eventFilter(self *C.QDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
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

	return (int)(C.QDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDialog) OndevType(slot func(super func() int) int) {
	ok := C.QDialog_override_virtual_devType(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_devType
func miqt_exec_callback_QDialog_devType(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) OnheightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	ok := C.QDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_heightForWidth
func miqt_exec_callback_QDialog_heightForWidth(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
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

	return (bool)(C.QDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnhasHeightForWidth(slot func(super func() bool) bool) {
	ok := C.QDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_hasHeightForWidth
func miqt_exec_callback_QDialog_hasHeightForWidth(self *C.QDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnpaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	ok := C.QDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_paintEngine
func miqt_exec_callback_QDialog_paintEngine(self *C.QDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDialog) Onevent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QDialog_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_event
func miqt_exec_callback_QDialog_event(self *C.QDialog, cb C.intptr_t, event *C.QEvent) C.bool {
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

	C.QDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnmousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mousePressEvent
func miqt_exec_callback_QDialog_mousePressEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnmouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseReleaseEvent
func miqt_exec_callback_QDialog_mouseReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnmouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseDoubleClickEvent
func miqt_exec_callback_QDialog_mouseDoubleClickEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnmouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	ok := C.QDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseMoveEvent
func miqt_exec_callback_QDialog_mouseMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnwheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	ok := C.QDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_wheelEvent
func miqt_exec_callback_QDialog_wheelEvent(self *C.QDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnkeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_keyReleaseEvent
func miqt_exec_callback_QDialog_keyReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnfocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusInEvent
func miqt_exec_callback_QDialog_focusInEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnfocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusOutEvent
func miqt_exec_callback_QDialog_focusOutEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnenterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	ok := C.QDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_enterEvent
func miqt_exec_callback_QDialog_enterEvent(self *C.QDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnleaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_leaveEvent
func miqt_exec_callback_QDialog_leaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnpaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	ok := C.QDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_paintEvent
func miqt_exec_callback_QDialog_paintEvent(self *C.QDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnmoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	ok := C.QDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_moveEvent
func miqt_exec_callback_QDialog_moveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OntabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	ok := C.QDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_tabletEvent
func miqt_exec_callback_QDialog_tabletEvent(self *C.QDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnactionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	ok := C.QDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_actionEvent
func miqt_exec_callback_QDialog_actionEvent(self *C.QDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OndragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	ok := C.QDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragEnterEvent
func miqt_exec_callback_QDialog_dragEnterEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OndragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	ok := C.QDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragMoveEvent
func miqt_exec_callback_QDialog_dragMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OndragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	ok := C.QDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragLeaveEvent
func miqt_exec_callback_QDialog_dragLeaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OndropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	ok := C.QDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dropEvent
func miqt_exec_callback_QDialog_dropEvent(self *C.QDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnhideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_hideEvent
func miqt_exec_callback_QDialog_hideEvent(self *C.QDialog, cb C.intptr_t, event *C.QHideEvent) {
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

	return (bool)(C.QDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDialog) OnnativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	ok := C.QDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_nativeEvent
func miqt_exec_callback_QDialog_nativeEvent(self *C.QDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
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

	C.QDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnchangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	ok := C.QDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_changeEvent
func miqt_exec_callback_QDialog_changeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) Onmetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	ok := C.QDialog_override_virtual_metric(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_metric
func miqt_exec_callback_QDialog_metric(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
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

	C.QDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDialog) OninitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QDialog_override_virtual_initPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_initPainter
func miqt_exec_callback_QDialog_initPainter(self *C.QDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDialog) Onredirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	ok := C.QDialog_override_virtual_redirected(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_redirected
func miqt_exec_callback_QDialog_redirected(self *C.QDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
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

	return newQPainter(C.QDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnsharedPainter(slot func(super func() *QPainter) *QPainter) {
	ok := C.QDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_sharedPainter
func miqt_exec_callback_QDialog_sharedPainter(self *C.QDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OninputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	ok := C.QDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_inputMethodEvent
func miqt_exec_callback_QDialog_inputMethodEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QDialog) OninputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	ok := C.QDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_inputMethodQuery
func miqt_exec_callback_QDialog_inputMethodQuery(self *C.QDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
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

	return (bool)(C.QDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDialog) OnfocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusNextPrevChild
func miqt_exec_callback_QDialog_focusNextPrevChild(self *C.QDialog, cb C.intptr_t, next C.bool) C.bool {
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

	C.QDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OntimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_timerEvent
func miqt_exec_callback_QDialog_timerEvent(self *C.QDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnchildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QDialog_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_childEvent
func miqt_exec_callback_QDialog_childEvent(self *C.QDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OncustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QDialog_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_customEvent
func miqt_exec_callback_QDialog_customEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OnconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_connectNotify
func miqt_exec_callback_QDialog_connectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OndisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_disconnectNotify
func miqt_exec_callback_QDialog_disconnectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
