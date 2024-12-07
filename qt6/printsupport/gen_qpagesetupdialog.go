package printsupport

/*

#include "gen_qpagesetupdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QPageSetupDialog struct {
	h          *C.QPageSetupDialog
	isSubclass bool
	*qt6.QDialog
}

func (this *QPageSetupDialog) cPointer() *C.QPageSetupDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPageSetupDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPageSetupDialog constructs the type using only CGO pointers.
func newQPageSetupDialog(h *C.QPageSetupDialog, h_QDialog *C.QDialog, h_QWidget *C.QWidget, h_QObject *C.QObject, h_QPaintDevice *C.QPaintDevice) *QPageSetupDialog {
	if h == nil {
		return nil
	}
	return &QPageSetupDialog{h: h,
		QDialog: qt6.UnsafeNewQDialog(unsafe.Pointer(h_QDialog), unsafe.Pointer(h_QWidget), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QPaintDevice))}
}

// UnsafeNewQPageSetupDialog constructs the type using only unsafe pointers.
func UnsafeNewQPageSetupDialog(h unsafe.Pointer, h_QDialog unsafe.Pointer, h_QWidget unsafe.Pointer, h_QObject unsafe.Pointer, h_QPaintDevice unsafe.Pointer) *QPageSetupDialog {
	if h == nil {
		return nil
	}

	return &QPageSetupDialog{h: (*C.QPageSetupDialog)(h),
		QDialog: qt6.UnsafeNewQDialog(h_QDialog, h_QWidget, h_QObject, h_QPaintDevice)}
}

// NewQPageSetupDialog constructs a new QPageSetupDialog object.
func NewQPageSetupDialog(parent *qt6.QWidget) *QPageSetupDialog {
	var outptr_QPageSetupDialog *C.QPageSetupDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPageSetupDialog_new((*C.QWidget)(parent.UnsafePointer()), &outptr_QPageSetupDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPageSetupDialog(outptr_QPageSetupDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPageSetupDialog2 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog2(printer *QPrinter) *QPageSetupDialog {
	var outptr_QPageSetupDialog *C.QPageSetupDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPageSetupDialog_new2(printer.cPointer(), &outptr_QPageSetupDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPageSetupDialog(outptr_QPageSetupDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPageSetupDialog3 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog3() *QPageSetupDialog {
	var outptr_QPageSetupDialog *C.QPageSetupDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPageSetupDialog_new3(&outptr_QPageSetupDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPageSetupDialog(outptr_QPageSetupDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

// NewQPageSetupDialog4 constructs a new QPageSetupDialog object.
func NewQPageSetupDialog4(printer *QPrinter, parent *qt6.QWidget) *QPageSetupDialog {
	var outptr_QPageSetupDialog *C.QPageSetupDialog = nil
	var outptr_QDialog *C.QDialog = nil
	var outptr_QWidget *C.QWidget = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QPaintDevice *C.QPaintDevice = nil

	C.QPageSetupDialog_new4(printer.cPointer(), (*C.QWidget)(parent.UnsafePointer()), &outptr_QPageSetupDialog, &outptr_QDialog, &outptr_QWidget, &outptr_QObject, &outptr_QPaintDevice)
	ret := newQPageSetupDialog(outptr_QPageSetupDialog, outptr_QDialog, outptr_QWidget, outptr_QObject, outptr_QPaintDevice)
	ret.isSubclass = true
	return ret
}

func (this *QPageSetupDialog) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QPageSetupDialog_MetaObject(this.h)))
}

func (this *QPageSetupDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QPageSetupDialog_Metacast(this.h, param1_Cstring))
}

func QPageSetupDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSetupDialog) Exec() int {
	return (int)(C.QPageSetupDialog_Exec(this.h))
}

func (this *QPageSetupDialog) Done(result int) {
	C.QPageSetupDialog_Done(this.h, (C.int)(result))
}

func (this *QPageSetupDialog) Printer() *QPrinter {
	return UnsafeNewQPrinter(unsafe.Pointer(C.QPageSetupDialog_Printer(this.h)), nil, nil)
}

func QPageSetupDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QPageSetupDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QPageSetupDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QPageSetupDialog) callVirtualBase_Exec() int {

	return (int)(C.QPageSetupDialog_virtualbase_Exec(unsafe.Pointer(this.h)))

}
func (this *QPageSetupDialog) OnExec(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_Exec(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_Exec
func miqt_exec_callback_QPageSetupDialog_Exec(self *C.QPageSetupDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QPageSetupDialog) callVirtualBase_Done(result int) {

	C.QPageSetupDialog_virtualbase_Done(unsafe.Pointer(this.h), (C.int)(result))

}
func (this *QPageSetupDialog) OnDone(slot func(super func(result int), result int)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_Done(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_Done
func miqt_exec_callback_QPageSetupDialog_Done(self *C.QPageSetupDialog, cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(result int), result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_SetVisible(visible bool) {

	C.QPageSetupDialog_virtualbase_SetVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QPageSetupDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_SetVisible(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_SetVisible
func miqt_exec_callback_QPageSetupDialog_SetVisible(self *C.QPageSetupDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_SizeHint() *qt6.QSize {

	_ret := C.QPageSetupDialog_virtualbase_SizeHint(unsafe.Pointer(this.h))
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPageSetupDialog) OnSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_SizeHint
func miqt_exec_callback_QPageSetupDialog_SizeHint(self *C.QPageSetupDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_SizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_MinimumSizeHint() *qt6.QSize {

	_ret := C.QPageSetupDialog_virtualbase_MinimumSizeHint(unsafe.Pointer(this.h))
	_goptr := qt6.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QPageSetupDialog) OnMinimumSizeHint(slot func(super func() *qt6.QSize) *qt6.QSize) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_MinimumSizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_MinimumSizeHint
func miqt_exec_callback_QPageSetupDialog_MinimumSizeHint(self *C.QPageSetupDialog, cb C.intptr_t) *C.QSize {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QSize) *qt6.QSize)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_MinimumSizeHint)

	return (*C.QSize)(virtualReturn.UnsafePointer())

}

func (this *QPageSetupDialog) callVirtualBase_Open() {

	C.QPageSetupDialog_virtualbase_Open(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnOpen(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_Open(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_Open
func miqt_exec_callback_QPageSetupDialog_Open(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Open)

}

func (this *QPageSetupDialog) callVirtualBase_Accept() {

	C.QPageSetupDialog_virtualbase_Accept(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnAccept(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_Accept(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_Accept
func miqt_exec_callback_QPageSetupDialog_Accept(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Accept)

}

func (this *QPageSetupDialog) callVirtualBase_Reject() {

	C.QPageSetupDialog_virtualbase_Reject(unsafe.Pointer(this.h))

}
func (this *QPageSetupDialog) OnReject(slot func(super func())) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_Reject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_Reject
func miqt_exec_callback_QPageSetupDialog_Reject(self *C.QPageSetupDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_Reject)

}

func (this *QPageSetupDialog) callVirtualBase_KeyPressEvent(param1 *qt6.QKeyEvent) {

	C.QPageSetupDialog_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnKeyPressEvent(slot func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_KeyPressEvent
func miqt_exec_callback_QPageSetupDialog_KeyPressEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QKeyEvent), param1 *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_CloseEvent(param1 *qt6.QCloseEvent) {

	C.QPageSetupDialog_virtualbase_CloseEvent(unsafe.Pointer(this.h), (*C.QCloseEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnCloseEvent(slot func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_CloseEvent
func miqt_exec_callback_QPageSetupDialog_CloseEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QCloseEvent), param1 *qt6.QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQCloseEvent(unsafe.Pointer(param1), nil)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ShowEvent(param1 *qt6.QShowEvent) {

	C.QPageSetupDialog_virtualbase_ShowEvent(unsafe.Pointer(this.h), (*C.QShowEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnShowEvent(slot func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_ShowEvent
func miqt_exec_callback_QPageSetupDialog_ShowEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QShowEvent), param1 *qt6.QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQShowEvent(unsafe.Pointer(param1), nil)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ResizeEvent(param1 *qt6.QResizeEvent) {

	C.QPageSetupDialog_virtualbase_ResizeEvent(unsafe.Pointer(this.h), (*C.QResizeEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnResizeEvent(slot func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_ResizeEvent
func miqt_exec_callback_QPageSetupDialog_ResizeEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QResizeEvent), param1 *qt6.QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQResizeEvent(unsafe.Pointer(param1), nil)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_ContextMenuEvent(param1 *qt6.QContextMenuEvent) {

	C.QPageSetupDialog_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QContextMenuEvent)(param1.UnsafePointer()))

}
func (this *QPageSetupDialog) OnContextMenuEvent(slot func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_ContextMenuEvent
func miqt_exec_callback_QPageSetupDialog_ContextMenuEvent(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QContextMenuEvent), param1 *qt6.QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQContextMenuEvent(unsafe.Pointer(param1), nil, nil)

	gofunc((&QPageSetupDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QPageSetupDialog) callVirtualBase_EventFilter(param1 *qt6.QObject, param2 *qt6.QEvent) bool {

	return (bool)(C.QPageSetupDialog_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(param1.UnsafePointer()), (*C.QEvent)(param2.UnsafePointer())))

}
func (this *QPageSetupDialog) OnEventFilter(slot func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QPageSetupDialog_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QPageSetupDialog_EventFilter
func miqt_exec_callback_QPageSetupDialog_EventFilter(self *C.QPageSetupDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *qt6.QObject, param2 *qt6.QEvent) bool, param1 *qt6.QObject, param2 *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QPageSetupDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QPageSetupDialog) Delete() {
	C.QPageSetupDialog_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPageSetupDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QPageSetupDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
