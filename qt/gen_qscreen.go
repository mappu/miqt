package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qscreen.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScreen struct {
	h *C.QScreen
	*QObject
}

func (this *QScreen) cPointer() *C.QScreen {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScreen(h *C.QScreen) *QScreen {
	if h == nil {
		return nil
	}
	return &QScreen{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQScreen_U(h unsafe.Pointer) *QScreen {
	return newQScreen((*C.QScreen)(h))
}

func (this *QScreen) MetaObject() *QMetaObject {
	ret := C.QScreen_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) Name() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Name(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) Manufacturer() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Manufacturer(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) Model() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Model(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) SerialNumber() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_SerialNumber(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) Depth() int {
	ret := C.QScreen_Depth(this.h)
	return (int)(ret)
}

func (this *QScreen) Size() *QSize {
	ret := C.QScreen_Size(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) Geometry() *QRect {
	ret := C.QScreen_Geometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) PhysicalSize() *QSizeF {
	ret := C.QScreen_PhysicalSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) PhysicalDotsPerInchX() float64 {
	ret := C.QScreen_PhysicalDotsPerInchX(this.h)
	return (float64)(ret)
}

func (this *QScreen) PhysicalDotsPerInchY() float64 {
	ret := C.QScreen_PhysicalDotsPerInchY(this.h)
	return (float64)(ret)
}

func (this *QScreen) PhysicalDotsPerInch() float64 {
	ret := C.QScreen_PhysicalDotsPerInch(this.h)
	return (float64)(ret)
}

func (this *QScreen) LogicalDotsPerInchX() float64 {
	ret := C.QScreen_LogicalDotsPerInchX(this.h)
	return (float64)(ret)
}

func (this *QScreen) LogicalDotsPerInchY() float64 {
	ret := C.QScreen_LogicalDotsPerInchY(this.h)
	return (float64)(ret)
}

func (this *QScreen) LogicalDotsPerInch() float64 {
	ret := C.QScreen_LogicalDotsPerInch(this.h)
	return (float64)(ret)
}

func (this *QScreen) DevicePixelRatio() float64 {
	ret := C.QScreen_DevicePixelRatio(this.h)
	return (float64)(ret)
}

func (this *QScreen) AvailableSize() *QSize {
	ret := C.QScreen_AvailableSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) AvailableGeometry() *QRect {
	ret := C.QScreen_AvailableGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) VirtualSiblings() []*QScreen {
	var _out **C.QScreen = nil
	var _out_len C.size_t = 0
	C.QScreen_VirtualSiblings(this.h, &_out, &_out_len)
	ret := make([]*QScreen, int(_out_len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQScreen(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) VirtualSiblingAt(point QPoint) *QScreen {
	ret := C.QScreen_VirtualSiblingAt(this.h, point.cPointer())
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QScreen) VirtualSize() *QSize {
	ret := C.QScreen_VirtualSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) VirtualGeometry() *QRect {
	ret := C.QScreen_VirtualGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) AvailableVirtualSize() *QSize {
	ret := C.QScreen_AvailableVirtualSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSize(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSize) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) AvailableVirtualGeometry() *QRect {
	ret := C.QScreen_AvailableVirtualGeometry(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) PrimaryOrientation() uintptr {
	ret := C.QScreen_PrimaryOrientation(this.h)
	return (uintptr)(ret)
}

func (this *QScreen) Orientation() uintptr {
	ret := C.QScreen_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QScreen) NativeOrientation() uintptr {
	ret := C.QScreen_NativeOrientation(this.h)
	return (uintptr)(ret)
}

func (this *QScreen) OrientationUpdateMask() int {
	ret := C.QScreen_OrientationUpdateMask(this.h)
	return (int)(ret)
}

func (this *QScreen) SetOrientationUpdateMask(mask int) {
	C.QScreen_SetOrientationUpdateMask(this.h, (C.int)(mask))
}

func (this *QScreen) AngleBetween(a uintptr, b uintptr) int {
	ret := C.QScreen_AngleBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b))
	return (int)(ret)
}

func (this *QScreen) TransformBetween(a uintptr, b uintptr, target *QRect) *QTransform {
	ret := C.QScreen_TransformBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b), target.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) MapBetween(a uintptr, b uintptr, rect *QRect) *QRect {
	ret := C.QScreen_MapBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b), rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) IsPortrait(orientation uintptr) bool {
	ret := C.QScreen_IsPortrait(this.h, (C.uintptr_t)(orientation))
	return (bool)(ret)
}

func (this *QScreen) IsLandscape(orientation uintptr) bool {
	ret := C.QScreen_IsLandscape(this.h, (C.uintptr_t)(orientation))
	return (bool)(ret)
}

func (this *QScreen) GrabWindow(window uintptr) *QPixmap {
	ret := C.QScreen_GrabWindow(this.h, (C.uintptr_t)(window))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) RefreshRate() float64 {
	ret := C.QScreen_RefreshRate(this.h)
	return (float64)(ret)
}

func (this *QScreen) GeometryChanged(geometry *QRect) {
	C.QScreen_GeometryChanged(this.h, geometry.cPointer())
}

func (this *QScreen) OnGeometryChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_GeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) AvailableGeometryChanged(geometry *QRect) {
	C.QScreen_AvailableGeometryChanged(this.h, geometry.cPointer())
}

func (this *QScreen) OnAvailableGeometryChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_AvailableGeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) PhysicalSizeChanged(size *QSizeF) {
	C.QScreen_PhysicalSizeChanged(this.h, size.cPointer())
}

func (this *QScreen) OnPhysicalSizeChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_PhysicalSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) PhysicalDotsPerInchChanged(dpi float64) {
	C.QScreen_PhysicalDotsPerInchChanged(this.h, (C.double)(dpi))
}

func (this *QScreen) OnPhysicalDotsPerInchChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_PhysicalDotsPerInchChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) LogicalDotsPerInchChanged(dpi float64) {
	C.QScreen_LogicalDotsPerInchChanged(this.h, (C.double)(dpi))
}

func (this *QScreen) OnLogicalDotsPerInchChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_LogicalDotsPerInchChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) VirtualGeometryChanged(rect *QRect) {
	C.QScreen_VirtualGeometryChanged(this.h, rect.cPointer())
}

func (this *QScreen) OnVirtualGeometryChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_VirtualGeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) PrimaryOrientationChanged(orientation uintptr) {
	C.QScreen_PrimaryOrientationChanged(this.h, (C.uintptr_t)(orientation))
}

func (this *QScreen) OnPrimaryOrientationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_PrimaryOrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) OrientationChanged(orientation uintptr) {
	C.QScreen_OrientationChanged(this.h, (C.uintptr_t)(orientation))
}

func (this *QScreen) OnOrientationChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_OrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QScreen) RefreshRateChanged(refreshRate float64) {
	C.QScreen_RefreshRateChanged(this.h, (C.double)(refreshRate))
}

func (this *QScreen) OnRefreshRateChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QScreen_connect_RefreshRateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QScreen_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QScreen) GrabWindow2(window uintptr, x int) *QPixmap {
	ret := C.QScreen_GrabWindow2(this.h, (C.uintptr_t)(window), (C.int)(x))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) GrabWindow3(window uintptr, x int, y int) *QPixmap {
	ret := C.QScreen_GrabWindow3(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) GrabWindow4(window uintptr, x int, y int, w int) *QPixmap {
	ret := C.QScreen_GrabWindow4(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) GrabWindow5(window uintptr, x int, y int, w int, h int) *QPixmap {
	ret := C.QScreen_GrabWindow5(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScreen) Delete() {
	C.QScreen_Delete(this.h)
}
