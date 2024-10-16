package qt

/*

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

func (this *QDesktopWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDesktopWidget(h *C.QDesktopWidget) *QDesktopWidget {
	if h == nil {
		return nil
	}
	return &QDesktopWidget{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQDesktopWidget(h unsafe.Pointer) *QDesktopWidget {
	return newQDesktopWidget((*C.QDesktopWidget)(h))
}

// NewQDesktopWidget constructs a new QDesktopWidget object.
func NewQDesktopWidget() *QDesktopWidget {
	ret := C.QDesktopWidget_new()
	return newQDesktopWidget(ret)
}

func (this *QDesktopWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDesktopWidget_MetaObject(this.h)))
}

func (this *QDesktopWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QDesktopWidget_Metacast(this.h, param1_Cstring)
}

func QDesktopWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDesktopWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber() int {
	return (int)(C.QDesktopWidget_ScreenNumber(this.h))
}

func (this *QDesktopWidget) ScreenGeometry(widget *QWidget) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry(this.h, widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry(widget *QWidget) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry(this.h, widget.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) IsVirtualDesktop() bool {
	return (bool)(C.QDesktopWidget_IsVirtualDesktop(this.h))
}

func (this *QDesktopWidget) NumScreens() int {
	return (int)(C.QDesktopWidget_NumScreens(this.h))
}

func (this *QDesktopWidget) ScreenCount() int {
	return (int)(C.QDesktopWidget_ScreenCount(this.h))
}

func (this *QDesktopWidget) PrimaryScreen() int {
	return (int)(C.QDesktopWidget_PrimaryScreen(this.h))
}

func (this *QDesktopWidget) ScreenNumberWithQPoint(param1 *QPoint) int {
	return (int)(C.QDesktopWidget_ScreenNumberWithQPoint(this.h, param1.cPointer()))
}

func (this *QDesktopWidget) Screen() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDesktopWidget_Screen(this.h)))
}

func (this *QDesktopWidget) ScreenGeometry2() *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) ScreenGeometryWithPoint(point *QPoint) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometryWithPoint(this.h, point.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry2() *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry2(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometryWithPoint(point *QPoint) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometryWithPoint(this.h, point.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) Resized(param1 int) {
	C.QDesktopWidget_Resized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_Resized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_Resized
func miqt_exec_callback_QDesktopWidget_Resized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) WorkAreaResized(param1 int) {
	C.QDesktopWidget_WorkAreaResized(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnWorkAreaResized(slot func(param1 int)) {
	C.QDesktopWidget_connect_WorkAreaResized(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_WorkAreaResized
func miqt_exec_callback_QDesktopWidget_WorkAreaResized(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) ScreenCountChanged(param1 int) {
	C.QDesktopWidget_ScreenCountChanged(this.h, (C.int)(param1))
}
func (this *QDesktopWidget) OnScreenCountChanged(slot func(param1 int)) {
	C.QDesktopWidget_connect_ScreenCountChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_ScreenCountChanged
func miqt_exec_callback_QDesktopWidget_ScreenCountChanged(cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc(slotval1)
}

func (this *QDesktopWidget) PrimaryScreenChanged() {
	C.QDesktopWidget_PrimaryScreenChanged(this.h)
}
func (this *QDesktopWidget) OnPrimaryScreenChanged(slot func()) {
	C.QDesktopWidget_connect_PrimaryScreenChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QDesktopWidget_PrimaryScreenChanged
func miqt_exec_callback_QDesktopWidget_PrimaryScreenChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QDesktopWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDesktopWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDesktopWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QDesktopWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QDesktopWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QDesktopWidget) ScreenNumber1(widget *QWidget) int {
	return (int)(C.QDesktopWidget_ScreenNumber1(this.h, widget.cPointer()))
}

func (this *QDesktopWidget) Screen1(screen int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QDesktopWidget_Screen1(this.h, (C.int)(screen))))
}

func (this *QDesktopWidget) ScreenGeometry1(screen int) *QRect {
	_ret := C.QDesktopWidget_ScreenGeometry1(this.h, (C.int)(screen))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesktopWidget) AvailableGeometry1(screen int) *QRect {
	_ret := C.QDesktopWidget_AvailableGeometry1(this.h, (C.int)(screen))
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QDesktopWidget) Delete() {
	C.QDesktopWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesktopWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesktopWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
