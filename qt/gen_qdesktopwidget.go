package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qdesktopwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDesktopWidget struct {
	h *C.QDesktopWidget
	*QWidget
}

func (this *QDesktopWidget) cPointer() *C.QDesktopWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDesktopWidget(h *C.QDesktopWidget) *QDesktopWidget {
	return &QDesktopWidget{h: h, QWidget: newQWidget_U(unsafe.Pointer(h))}
}

func newQDesktopWidget_U(h unsafe.Pointer) *QDesktopWidget {
	return newQDesktopWidget((*C.QDesktopWidget)(h))
}

// NewQDesktopWidget constructs a new QDesktopWidget object.
func NewQDesktopWidget() *QDesktopWidget {
	ret := C.QDesktopWidget_new()
	return newQDesktopWidget(ret)
}

func (this *QDesktopWidget) MetaObject() *QMetaObject {
	ret := C.QDesktopWidget_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QDesktopWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDesktopWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDesktopWidget) ScreenNumber() int {
	ret := C.QDesktopWidget_ScreenNumber(this.h)
	return (int)(ret)
}

func (this *QDesktopWidget) ScreenGeometry(widget *QWidget) *QRect {
	ret := C.QDesktopWidget_ScreenGeometry(this.h, widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) AvailableGeometry(widget *QWidget) *QRect {
	ret := C.QDesktopWidget_AvailableGeometry(this.h, widget.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) IsVirtualDesktop() bool {
	ret := C.QDesktopWidget_IsVirtualDesktop(this.h)
	return (bool)(ret)
}

func (this *QDesktopWidget) NumScreens() int {
	ret := C.QDesktopWidget_NumScreens(this.h)
	return (int)(ret)
}

func (this *QDesktopWidget) ScreenCount() int {
	ret := C.QDesktopWidget_ScreenCount(this.h)
	return (int)(ret)
}

func (this *QDesktopWidget) PrimaryScreen() int {
	ret := C.QDesktopWidget_PrimaryScreen(this.h)
	return (int)(ret)
}

func (this *QDesktopWidget) ScreenNumberWithQPoint(param1 *QPoint) int {
	ret := C.QDesktopWidget_ScreenNumberWithQPoint(this.h, param1.cPointer())
	return (int)(ret)
}

func (this *QDesktopWidget) Screen() *QWidget {
	ret := C.QDesktopWidget_Screen(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDesktopWidget) ScreenGeometry2() *QRect {
	ret := C.QDesktopWidget_ScreenGeometry2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) ScreenGeometryWithPoint(point *QPoint) *QRect {
	ret := C.QDesktopWidget_ScreenGeometryWithPoint(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) AvailableGeometry2() *QRect {
	ret := C.QDesktopWidget_AvailableGeometry2(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) AvailableGeometryWithPoint(point *QPoint) *QRect {
	ret := C.QDesktopWidget_AvailableGeometryWithPoint(this.h, point.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) Resized(param1 int) {
	C.QDesktopWidget_Resized(this.h, (C.int)(param1))
}

func (this *QDesktopWidget) OnResized(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDesktopWidget_connect_Resized(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDesktopWidget) WorkAreaResized(param1 int) {
	C.QDesktopWidget_WorkAreaResized(this.h, (C.int)(param1))
}

func (this *QDesktopWidget) OnWorkAreaResized(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDesktopWidget_connect_WorkAreaResized(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDesktopWidget) ScreenCountChanged(param1 int) {
	C.QDesktopWidget_ScreenCountChanged(this.h, (C.int)(param1))
}

func (this *QDesktopWidget) OnScreenCountChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDesktopWidget_connect_ScreenCountChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QDesktopWidget) PrimaryScreenChanged() {
	C.QDesktopWidget_PrimaryScreenChanged(this.h)
}

func (this *QDesktopWidget) OnPrimaryScreenChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QDesktopWidget_connect_PrimaryScreenChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QDesktopWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDesktopWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDesktopWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QDesktopWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QDesktopWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QDesktopWidget) ScreenNumber1(widget *QWidget) int {
	ret := C.QDesktopWidget_ScreenNumber1(this.h, widget.cPointer())
	return (int)(ret)
}

func (this *QDesktopWidget) Screen1(screen int) *QWidget {
	ret := C.QDesktopWidget_Screen1(this.h, (C.int)(screen))
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QDesktopWidget) ScreenGeometry1(screen int) *QRect {
	ret := C.QDesktopWidget_ScreenGeometry1(this.h, (C.int)(screen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) AvailableGeometry1(screen int) *QRect {
	ret := C.QDesktopWidget_AvailableGeometry1(this.h, (C.int)(screen))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDesktopWidget) Delete() {
	C.QDesktopWidget_Delete(this.h)
}
