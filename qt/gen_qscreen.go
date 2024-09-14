package qt

/*

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
	_ret := C.QScreen_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(_ret))
}

func QScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScreen_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) Name() string {
	var _ms *C.struct_miqt_string = C.QScreen_Name(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) Manufacturer() string {
	var _ms *C.struct_miqt_string = C.QScreen_Manufacturer(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) Model() string {
	var _ms *C.struct_miqt_string = C.QScreen_Model(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) SerialNumber() string {
	var _ms *C.struct_miqt_string = C.QScreen_SerialNumber(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) Depth() int {
	_ret := C.QScreen_Depth(this.h)
	return (int)(_ret)
}

func (this *QScreen) Size() *QSize {
	_ret := C.QScreen_Size(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) Geometry() *QRect {
	_ret := C.QScreen_Geometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) PhysicalSize() *QSizeF {
	_ret := C.QScreen_PhysicalSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) PhysicalDotsPerInchX() float64 {
	_ret := C.QScreen_PhysicalDotsPerInchX(this.h)
	return (float64)(_ret)
}

func (this *QScreen) PhysicalDotsPerInchY() float64 {
	_ret := C.QScreen_PhysicalDotsPerInchY(this.h)
	return (float64)(_ret)
}

func (this *QScreen) PhysicalDotsPerInch() float64 {
	_ret := C.QScreen_PhysicalDotsPerInch(this.h)
	return (float64)(_ret)
}

func (this *QScreen) LogicalDotsPerInchX() float64 {
	_ret := C.QScreen_LogicalDotsPerInchX(this.h)
	return (float64)(_ret)
}

func (this *QScreen) LogicalDotsPerInchY() float64 {
	_ret := C.QScreen_LogicalDotsPerInchY(this.h)
	return (float64)(_ret)
}

func (this *QScreen) LogicalDotsPerInch() float64 {
	_ret := C.QScreen_LogicalDotsPerInch(this.h)
	return (float64)(_ret)
}

func (this *QScreen) DevicePixelRatio() float64 {
	_ret := C.QScreen_DevicePixelRatio(this.h)
	return (float64)(_ret)
}

func (this *QScreen) AvailableSize() *QSize {
	_ret := C.QScreen_AvailableSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) AvailableGeometry() *QRect {
	_ret := C.QScreen_AvailableGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) VirtualSiblings() []*QScreen {
	var _ma *C.struct_miqt_array = C.QScreen_VirtualSiblings(this.h)
	_ret := make([]*QScreen, int(_ma.len))
	_outCast := (*[0xffff]*C.QScreen)(unsafe.Pointer(_ma.data)) // mrs jackson
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScreen(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QScreen) VirtualSiblingAt(point QPoint) *QScreen {
	_ret := C.QScreen_VirtualSiblingAt(this.h, point.cPointer())
	return newQScreen_U(unsafe.Pointer(_ret))
}

func (this *QScreen) VirtualSize() *QSize {
	_ret := C.QScreen_VirtualSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) VirtualGeometry() *QRect {
	_ret := C.QScreen_VirtualGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) AvailableVirtualSize() *QSize {
	_ret := C.QScreen_AvailableVirtualSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) AvailableVirtualGeometry() *QRect {
	_ret := C.QScreen_AvailableVirtualGeometry(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) PrimaryOrientation() ScreenOrientation {
	_ret := C.QScreen_PrimaryOrientation(this.h)
	return (ScreenOrientation)(_ret)
}

func (this *QScreen) Orientation() ScreenOrientation {
	_ret := C.QScreen_Orientation(this.h)
	return (ScreenOrientation)(_ret)
}

func (this *QScreen) NativeOrientation() ScreenOrientation {
	_ret := C.QScreen_NativeOrientation(this.h)
	return (ScreenOrientation)(_ret)
}

func (this *QScreen) OrientationUpdateMask() int {
	_ret := C.QScreen_OrientationUpdateMask(this.h)
	return (int)(_ret)
}

func (this *QScreen) SetOrientationUpdateMask(mask int) {
	C.QScreen_SetOrientationUpdateMask(this.h, (C.int)(mask))
}

func (this *QScreen) AngleBetween(a ScreenOrientation, b ScreenOrientation) int {
	_ret := C.QScreen_AngleBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b))
	return (int)(_ret)
}

func (this *QScreen) TransformBetween(a ScreenOrientation, b ScreenOrientation, target *QRect) *QTransform {
	_ret := C.QScreen_TransformBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b), target.cPointer())
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) MapBetween(a ScreenOrientation, b ScreenOrientation, rect *QRect) *QRect {
	_ret := C.QScreen_MapBetween(this.h, (C.uintptr_t)(a), (C.uintptr_t)(b), rect.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) IsPortrait(orientation ScreenOrientation) bool {
	_ret := C.QScreen_IsPortrait(this.h, (C.uintptr_t)(orientation))
	return (bool)(_ret)
}

func (this *QScreen) IsLandscape(orientation ScreenOrientation) bool {
	_ret := C.QScreen_IsLandscape(this.h, (C.uintptr_t)(orientation))
	return (bool)(_ret)
}

func (this *QScreen) GrabWindow(window uintptr) *QPixmap {
	_ret := C.QScreen_GrabWindow(this.h, (C.uintptr_t)(window))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) RefreshRate() float64 {
	_ret := C.QScreen_RefreshRate(this.h)
	return (float64)(_ret)
}

func (this *QScreen) GeometryChanged(geometry *QRect) {
	C.QScreen_GeometryChanged(this.h, geometry.cPointer())
}
func (this *QScreen) OnGeometryChanged(slot func(geometry *QRect)) {
	C.QScreen_connect_GeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_GeometryChanged
func miqt_exec_callback_QScreen_GeometryChanged(cb *C.void, geometry *C.QRect) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	geometry_ret := geometry
	slotval1 := newQRect_U(unsafe.Pointer(geometry_ret))

	gofunc(slotval1)
}

func (this *QScreen) AvailableGeometryChanged(geometry *QRect) {
	C.QScreen_AvailableGeometryChanged(this.h, geometry.cPointer())
}
func (this *QScreen) OnAvailableGeometryChanged(slot func(geometry *QRect)) {
	C.QScreen_connect_AvailableGeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_AvailableGeometryChanged
func miqt_exec_callback_QScreen_AvailableGeometryChanged(cb *C.void, geometry *C.QRect) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(geometry *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	geometry_ret := geometry
	slotval1 := newQRect_U(unsafe.Pointer(geometry_ret))

	gofunc(slotval1)
}

func (this *QScreen) PhysicalSizeChanged(size *QSizeF) {
	C.QScreen_PhysicalSizeChanged(this.h, size.cPointer())
}
func (this *QScreen) OnPhysicalSizeChanged(slot func(size *QSizeF)) {
	C.QScreen_connect_PhysicalSizeChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_PhysicalSizeChanged
func miqt_exec_callback_QScreen_PhysicalSizeChanged(cb *C.void, size *C.QSizeF) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(size *QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	size_ret := size
	slotval1 := newQSizeF_U(unsafe.Pointer(size_ret))

	gofunc(slotval1)
}

func (this *QScreen) PhysicalDotsPerInchChanged(dpi float64) {
	C.QScreen_PhysicalDotsPerInchChanged(this.h, (C.double)(dpi))
}
func (this *QScreen) OnPhysicalDotsPerInchChanged(slot func(dpi float64)) {
	C.QScreen_connect_PhysicalDotsPerInchChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_PhysicalDotsPerInchChanged
func miqt_exec_callback_QScreen_PhysicalDotsPerInchChanged(cb *C.void, dpi C.double) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(dpi float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	dpi_ret := dpi
	slotval1 := (float64)(dpi_ret)

	gofunc(slotval1)
}

func (this *QScreen) LogicalDotsPerInchChanged(dpi float64) {
	C.QScreen_LogicalDotsPerInchChanged(this.h, (C.double)(dpi))
}
func (this *QScreen) OnLogicalDotsPerInchChanged(slot func(dpi float64)) {
	C.QScreen_connect_LogicalDotsPerInchChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_LogicalDotsPerInchChanged
func miqt_exec_callback_QScreen_LogicalDotsPerInchChanged(cb *C.void, dpi C.double) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(dpi float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	dpi_ret := dpi
	slotval1 := (float64)(dpi_ret)

	gofunc(slotval1)
}

func (this *QScreen) VirtualGeometryChanged(rect *QRect) {
	C.QScreen_VirtualGeometryChanged(this.h, rect.cPointer())
}
func (this *QScreen) OnVirtualGeometryChanged(slot func(rect *QRect)) {
	C.QScreen_connect_VirtualGeometryChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_VirtualGeometryChanged
func miqt_exec_callback_QScreen_VirtualGeometryChanged(cb *C.void, rect *C.QRect) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(rect *QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	rect_ret := rect
	slotval1 := newQRect_U(unsafe.Pointer(rect_ret))

	gofunc(slotval1)
}

func (this *QScreen) PrimaryOrientationChanged(orientation ScreenOrientation) {
	C.QScreen_PrimaryOrientationChanged(this.h, (C.uintptr_t)(orientation))
}
func (this *QScreen) OnPrimaryOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QScreen_connect_PrimaryOrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_PrimaryOrientationChanged
func miqt_exec_callback_QScreen_PrimaryOrientationChanged(cb *C.void, orientation C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	orientation_ret := orientation
	slotval1 := (ScreenOrientation)(orientation_ret)

	gofunc(slotval1)
}

func (this *QScreen) OrientationChanged(orientation ScreenOrientation) {
	C.QScreen_OrientationChanged(this.h, (C.uintptr_t)(orientation))
}
func (this *QScreen) OnOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QScreen_connect_OrientationChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_OrientationChanged
func miqt_exec_callback_QScreen_OrientationChanged(cb *C.void, orientation C.uintptr_t) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	orientation_ret := orientation
	slotval1 := (ScreenOrientation)(orientation_ret)

	gofunc(slotval1)
}

func (this *QScreen) RefreshRateChanged(refreshRate float64) {
	C.QScreen_RefreshRateChanged(this.h, (C.double)(refreshRate))
}
func (this *QScreen) OnRefreshRateChanged(slot func(refreshRate float64)) {
	C.QScreen_connect_RefreshRateChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slot))))
}

//export miqt_exec_callback_QScreen_RefreshRateChanged
func miqt_exec_callback_QScreen_RefreshRateChanged(cb *C.void, refreshRate C.double) {
	gofunc, ok := (cgo.Handle(uintptr(unsafe.Pointer(cb))).Value()).(func(refreshRate float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	refreshRate_ret := refreshRate
	slotval1 := (float64)(refreshRate_ret)

	gofunc(slotval1)
}

func QScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScreen_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QScreen_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QScreen_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QScreen) GrabWindow2(window uintptr, x int) *QPixmap {
	_ret := C.QScreen_GrabWindow2(this.h, (C.uintptr_t)(window), (C.int)(x))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow3(window uintptr, x int, y int) *QPixmap {
	_ret := C.QScreen_GrabWindow3(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow4(window uintptr, x int, y int, w int) *QPixmap {
	_ret := C.QScreen_GrabWindow4(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow5(window uintptr, x int, y int, w int, h int) *QPixmap {
	_ret := C.QScreen_GrabWindow5(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	_goptr := newQPixmap(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QScreen) Delete() {
	C.QScreen_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScreen) GoGC() {
	runtime.SetFinalizer(this, func(this *QScreen) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
