package qt

/*

#include "gen_qmdisubwindow.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QMdiSubWindow__SubWindowOption int

const (
	QMdiSubWindow__SubWindowOption__AllowOutsideAreaHorizontally QMdiSubWindow__SubWindowOption = 1
	QMdiSubWindow__SubWindowOption__AllowOutsideAreaVertically   QMdiSubWindow__SubWindowOption = 2
	QMdiSubWindow__SubWindowOption__RubberBandResize             QMdiSubWindow__SubWindowOption = 4
	QMdiSubWindow__SubWindowOption__RubberBandMove               QMdiSubWindow__SubWindowOption = 8
)

type QMdiSubWindow struct {
	h *C.QMdiSubWindow
	*QWidget
}

func (this *QMdiSubWindow) cPointer() *C.QMdiSubWindow {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMdiSubWindow(h *C.QMdiSubWindow) *QMdiSubWindow {
	if h == nil {
		return nil
	}
	return &QMdiSubWindow{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQMdiSubWindow_U(h unsafe.Pointer) *QMdiSubWindow {
	return newQMdiSubWindow((*C.QMdiSubWindow)(h))
}

// NewQMdiSubWindow constructs a new QMdiSubWindow object.
func NewQMdiSubWindow() *QMdiSubWindow {
	ret := C.QMdiSubWindow_new()
	return newQMdiSubWindow(ret)
}

// NewQMdiSubWindow2 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow2(parent *QWidget) *QMdiSubWindow {
	ret := C.QMdiSubWindow_new2(parent.cPointer())
	return newQMdiSubWindow(ret)
}

// NewQMdiSubWindow3 constructs a new QMdiSubWindow object.
func NewQMdiSubWindow3(parent *QWidget, flags int) *QMdiSubWindow {
	ret := C.QMdiSubWindow_new3(parent.cPointer(), (C.int)(flags))
	return newQMdiSubWindow(ret)
}

func (this *QMdiSubWindow) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QMdiSubWindow_MetaObject(this.h)))
}

func QMdiSubWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiSubWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMdiSubWindow) SizeHint() *QSize {
	_ret := C.QMdiSubWindow_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) MinimumSizeHint() *QSize {
	_ret := C.QMdiSubWindow_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMdiSubWindow) SetWidget(widget *QWidget) {
	C.QMdiSubWindow_SetWidget(this.h, widget.cPointer())
}

func (this *QMdiSubWindow) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMdiSubWindow_Widget(this.h)))
}

func (this *QMdiSubWindow) MaximizedButtonsWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMdiSubWindow_MaximizedButtonsWidget(this.h)))
}

func (this *QMdiSubWindow) MaximizedSystemMenuIconWidget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QMdiSubWindow_MaximizedSystemMenuIconWidget(this.h)))
}

func (this *QMdiSubWindow) IsShaded() bool {
	return (bool)(C.QMdiSubWindow_IsShaded(this.h))
}

func (this *QMdiSubWindow) SetOption(option QMdiSubWindow__SubWindowOption) {
	C.QMdiSubWindow_SetOption(this.h, (C.int)(option))
}

func (this *QMdiSubWindow) TestOption(param1 QMdiSubWindow__SubWindowOption) bool {
	return (bool)(C.QMdiSubWindow_TestOption(this.h, (C.int)(param1)))
}

func (this *QMdiSubWindow) SetKeyboardSingleStep(step int) {
	C.QMdiSubWindow_SetKeyboardSingleStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardSingleStep() int {
	return (int)(C.QMdiSubWindow_KeyboardSingleStep(this.h))
}

func (this *QMdiSubWindow) SetKeyboardPageStep(step int) {
	C.QMdiSubWindow_SetKeyboardPageStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardPageStep() int {
	return (int)(C.QMdiSubWindow_KeyboardPageStep(this.h))
}

func (this *QMdiSubWindow) SetSystemMenu(systemMenu *QMenu) {
	C.QMdiSubWindow_SetSystemMenu(this.h, systemMenu.cPointer())
}

func (this *QMdiSubWindow) SystemMenu() *QMenu {
	return newQMenu_U(unsafe.Pointer(C.QMdiSubWindow_SystemMenu(this.h)))
}

func (this *QMdiSubWindow) MdiArea() *QMdiArea {
	return newQMdiArea_U(unsafe.Pointer(C.QMdiSubWindow_MdiArea(this.h)))
}

func (this *QMdiSubWindow) WindowStateChanged(oldState int, newState int) {
	C.QMdiSubWindow_WindowStateChanged(this.h, (C.int)(oldState), (C.int)(newState))
}
func (this *QMdiSubWindow) OnWindowStateChanged(slot func(oldState int, newState int)) {
	C.QMdiSubWindow_connect_WindowStateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMdiSubWindow_WindowStateChanged
func miqt_exec_callback_QMdiSubWindow_WindowStateChanged(cb *C.void, oldState C.int, newState C.int) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(oldState int, newState int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(oldState)

	slotval2 := (int)(newState)

	gofunc(slotval1, slotval2)
}

func (this *QMdiSubWindow) AboutToActivate() {
	C.QMdiSubWindow_AboutToActivate(this.h)
}
func (this *QMdiSubWindow) OnAboutToActivate(slot func()) {
	C.QMdiSubWindow_connect_AboutToActivate(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QMdiSubWindow_AboutToActivate
func miqt_exec_callback_QMdiSubWindow_AboutToActivate(cb *C.void) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QMdiSubWindow) ShowSystemMenu() {
	C.QMdiSubWindow_ShowSystemMenu(this.h)
}

func (this *QMdiSubWindow) ShowShaded() {
	C.QMdiSubWindow_ShowShaded(this.h)
}

func QMdiSubWindow_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiSubWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiSubWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QMdiSubWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QMdiSubWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QMdiSubWindow) SetOption2(option QMdiSubWindow__SubWindowOption, on bool) {
	C.QMdiSubWindow_SetOption2(this.h, (C.int)(option), (C.bool)(on))
}

// Delete this object from C++ memory.
func (this *QMdiSubWindow) Delete() {
	C.QMdiSubWindow_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMdiSubWindow) GoGC() {
	runtime.SetFinalizer(this, func(this *QMdiSubWindow) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
