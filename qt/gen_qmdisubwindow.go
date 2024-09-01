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
	ret := C.QMdiSubWindow_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QMdiSubWindow_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiSubWindow_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiSubWindow) SizeHint() *QSize {
	ret := C.QMdiSubWindow_SizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMdiSubWindow) MinimumSizeHint() *QSize {
	ret := C.QMdiSubWindow_MinimumSizeHint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMdiSubWindow) SetWidget(widget *QWidget) {
	C.QMdiSubWindow_SetWidget(this.h, widget.cPointer())
}

func (this *QMdiSubWindow) Widget() *QWidget {
	ret := C.QMdiSubWindow_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMdiSubWindow) MaximizedButtonsWidget() *QWidget {
	ret := C.QMdiSubWindow_MaximizedButtonsWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMdiSubWindow) MaximizedSystemMenuIconWidget() *QWidget {
	ret := C.QMdiSubWindow_MaximizedSystemMenuIconWidget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QMdiSubWindow) IsShaded() bool {
	ret := C.QMdiSubWindow_IsShaded(this.h)
	return (bool)(ret)
}

func (this *QMdiSubWindow) SetOption(option uintptr) {
	C.QMdiSubWindow_SetOption(this.h, (C.uintptr_t)(option))
}

func (this *QMdiSubWindow) TestOption(param1 uintptr) bool {
	ret := C.QMdiSubWindow_TestOption(this.h, (C.uintptr_t)(param1))
	return (bool)(ret)
}

func (this *QMdiSubWindow) SetKeyboardSingleStep(step int) {
	C.QMdiSubWindow_SetKeyboardSingleStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardSingleStep() int {
	ret := C.QMdiSubWindow_KeyboardSingleStep(this.h)
	return (int)(ret)
}

func (this *QMdiSubWindow) SetKeyboardPageStep(step int) {
	C.QMdiSubWindow_SetKeyboardPageStep(this.h, (C.int)(step))
}

func (this *QMdiSubWindow) KeyboardPageStep() int {
	ret := C.QMdiSubWindow_KeyboardPageStep(this.h)
	return (int)(ret)
}

func (this *QMdiSubWindow) SetSystemMenu(systemMenu *QMenu) {
	C.QMdiSubWindow_SetSystemMenu(this.h, systemMenu.cPointer())
}

func (this *QMdiSubWindow) SystemMenu() *QMenu {
	ret := C.QMdiSubWindow_SystemMenu(this.h)
	return newQMenu_U(unsafe.Pointer(ret))
}

func (this *QMdiSubWindow) MdiArea() *QMdiArea {
	ret := C.QMdiSubWindow_MdiArea(this.h)
	return newQMdiArea_U(unsafe.Pointer(ret))
}

func (this *QMdiSubWindow) WindowStateChanged(oldState int, newState int) {
	C.QMdiSubWindow_WindowStateChanged(this.h, (C.int)(oldState), (C.int)(newState))
}

func (this *QMdiSubWindow) OnWindowStateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMdiSubWindow_connect_WindowStateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QMdiSubWindow) AboutToActivate() {
	C.QMdiSubWindow_AboutToActivate(this.h)
}

func (this *QMdiSubWindow) OnAboutToActivate(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QMdiSubWindow_connect_AboutToActivate(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiSubWindow_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiSubWindow_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QMdiSubWindow_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QMdiSubWindow_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QMdiSubWindow) SetOption2(option uintptr, on bool) {
	C.QMdiSubWindow_SetOption2(this.h, (C.uintptr_t)(option), (C.bool)(on))
}

func (this *QMdiSubWindow) Delete() {
	C.QMdiSubWindow_Delete(this.h)
}
