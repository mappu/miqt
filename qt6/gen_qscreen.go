package qt6

/*

#include "gen_qscreen.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/libmiqt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QScreen struct {
	h  *C.QScreen
	gc *[1]unsafe.Pointer
	*QObject
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScreen) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QObject.miqtSetGC(gc)
}

func (this *QScreen) cPointer() *C.QScreen {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScreen) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScreen constructs the type using only CGO pointers.
func newQScreen(h *C.QScreen) *QScreen {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QScreen_virtbase(h, &outptr_QObject)

	return &QScreen{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQScreen constructs the type using only unsafe pointers.
func UnsafeNewQScreen(h unsafe.Pointer) *QScreen {
	return newQScreen((*C.QScreen)(h))
}

func (this *QScreen) MetaObject() *QMetaObject {
	return newQMetaObject(C.QScreen_metaObject(this.h))
}

func (this *QScreen) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QScreen_metacast(this.h, param1_Cstring))
}

func QScreen_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QScreen_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) Name() string {
	var _ms C.struct_miqt_string = C.QScreen_name(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) Manufacturer() string {
	var _ms C.struct_miqt_string = C.QScreen_manufacturer(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) Model() string {
	var _ms C.struct_miqt_string = C.QScreen_model(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) SerialNumber() string {
	var _ms C.struct_miqt_string = C.QScreen_serialNumber(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) Depth() int {
	return (int)(C.QScreen_depth(this.h))
}

func (this *QScreen) Size() QSize {
	return libmiqt.ValueCast[QSize](C.QScreen_size(this.h))
}

func (this *QScreen) Geometry() QRect {
	return libmiqt.ValueCast[QRect](C.QScreen_geometry(this.h))
}

func (this *QScreen) PhysicalSize() QSizeF {
	return libmiqt.ValueCast[QSizeF](C.QScreen_physicalSize(this.h))
}

func (this *QScreen) PhysicalDotsPerInchX() float64 {
	return (float64)(C.QScreen_physicalDotsPerInchX(this.h))
}

func (this *QScreen) PhysicalDotsPerInchY() float64 {
	return (float64)(C.QScreen_physicalDotsPerInchY(this.h))
}

func (this *QScreen) PhysicalDotsPerInch() float64 {
	return (float64)(C.QScreen_physicalDotsPerInch(this.h))
}

func (this *QScreen) LogicalDotsPerInchX() float64 {
	return (float64)(C.QScreen_logicalDotsPerInchX(this.h))
}

func (this *QScreen) LogicalDotsPerInchY() float64 {
	return (float64)(C.QScreen_logicalDotsPerInchY(this.h))
}

func (this *QScreen) LogicalDotsPerInch() float64 {
	return (float64)(C.QScreen_logicalDotsPerInch(this.h))
}

func (this *QScreen) DevicePixelRatio() float64 {
	return (float64)(C.QScreen_devicePixelRatio(this.h))
}

func (this *QScreen) AvailableSize() QSize {
	return libmiqt.ValueCast[QSize](C.QScreen_availableSize(this.h))
}

func (this *QScreen) AvailableGeometry() QRect {
	return libmiqt.ValueCast[QRect](C.QScreen_availableGeometry(this.h))
}

func (this *QScreen) VirtualSiblings() []*QScreen {
	var _ma C.struct_miqt_array = C.QScreen_virtualSiblings(this.h)
	_ret := make([]*QScreen, int(_ma.len))
	_outCast := unsafe.Slice((**C.QScreen)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQScreen(_outCast[i])
	}
	return _ret
}

func (this *QScreen) VirtualSiblingAt(point QPoint) *QScreen {
	return newQScreen(C.QScreen_virtualSiblingAt(this.h, libmiqt.ValueCast[C.struct_miqt_qpoint](point)))
}

func (this *QScreen) VirtualSize() QSize {
	return libmiqt.ValueCast[QSize](C.QScreen_virtualSize(this.h))
}

func (this *QScreen) VirtualGeometry() QRect {
	return libmiqt.ValueCast[QRect](C.QScreen_virtualGeometry(this.h))
}

func (this *QScreen) AvailableVirtualSize() QSize {
	return libmiqt.ValueCast[QSize](C.QScreen_availableVirtualSize(this.h))
}

func (this *QScreen) AvailableVirtualGeometry() QRect {
	return libmiqt.ValueCast[QRect](C.QScreen_availableVirtualGeometry(this.h))
}

func (this *QScreen) PrimaryOrientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreen_primaryOrientation(this.h))
}

func (this *QScreen) Orientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreen_orientation(this.h))
}

func (this *QScreen) NativeOrientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreen_nativeOrientation(this.h))
}

func (this *QScreen) AngleBetween(a ScreenOrientation, b ScreenOrientation) int {
	return (int)(C.QScreen_angleBetween(this.h, (C.int)(a), (C.int)(b)))
}

func (this *QScreen) TransformBetween(a ScreenOrientation, b ScreenOrientation, target QRect) *QTransform {
	_goptr := newQTransform(C.QScreen_transformBetween(this.h, (C.int)(a), (C.int)(b), libmiqt.ValueCast[C.struct_miqt_qrect](target)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) MapBetween(a ScreenOrientation, b ScreenOrientation, rect QRect) QRect {
	return libmiqt.ValueCast[QRect](C.QScreen_mapBetween(this.h, (C.int)(a), (C.int)(b), libmiqt.ValueCast[C.struct_miqt_qrect](rect)))
}

func (this *QScreen) IsPortrait(orientation ScreenOrientation) bool {
	return (bool)(C.QScreen_isPortrait(this.h, (C.int)(orientation)))
}

func (this *QScreen) IsLandscape(orientation ScreenOrientation) bool {
	return (bool)(C.QScreen_isLandscape(this.h, (C.int)(orientation)))
}

func (this *QScreen) GrabWindow() *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindow(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) RefreshRate() float64 {
	return (float64)(C.QScreen_refreshRate(this.h))
}

func (this *QScreen) GeometryChanged(geometry QRect) {
	C.QScreen_geometryChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](geometry))
}
func (this *QScreen) OnGeometryChanged(slot func(geometry QRect)) {
	C.QScreen_connect_geometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_geometryChanged
func miqt_exec_callback_QScreen_geometryChanged(cb C.intptr_t, geometry C.struct_miqt_qrect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geometry QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QRect](geometry)

	gofunc(slotval1)
}

func (this *QScreen) AvailableGeometryChanged(geometry QRect) {
	C.QScreen_availableGeometryChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](geometry))
}
func (this *QScreen) OnAvailableGeometryChanged(slot func(geometry QRect)) {
	C.QScreen_connect_availableGeometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_availableGeometryChanged
func miqt_exec_callback_QScreen_availableGeometryChanged(cb C.intptr_t, geometry C.struct_miqt_qrect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(geometry QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QRect](geometry)

	gofunc(slotval1)
}

func (this *QScreen) PhysicalSizeChanged(size QSizeF) {
	C.QScreen_physicalSizeChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qsizef](size))
}
func (this *QScreen) OnPhysicalSizeChanged(slot func(size QSizeF)) {
	C.QScreen_connect_physicalSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_physicalSizeChanged
func miqt_exec_callback_QScreen_physicalSizeChanged(cb C.intptr_t, size C.struct_miqt_qsizef) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QSizeF](size)

	gofunc(slotval1)
}

func (this *QScreen) PhysicalDotsPerInchChanged(dpi float64) {
	C.QScreen_physicalDotsPerInchChanged(this.h, (C.double)(dpi))
}
func (this *QScreen) OnPhysicalDotsPerInchChanged(slot func(dpi float64)) {
	C.QScreen_connect_physicalDotsPerInchChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_physicalDotsPerInchChanged
func miqt_exec_callback_QScreen_physicalDotsPerInchChanged(cb C.intptr_t, dpi C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dpi float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(dpi)

	gofunc(slotval1)
}

func (this *QScreen) LogicalDotsPerInchChanged(dpi float64) {
	C.QScreen_logicalDotsPerInchChanged(this.h, (C.double)(dpi))
}
func (this *QScreen) OnLogicalDotsPerInchChanged(slot func(dpi float64)) {
	C.QScreen_connect_logicalDotsPerInchChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_logicalDotsPerInchChanged
func miqt_exec_callback_QScreen_logicalDotsPerInchChanged(cb C.intptr_t, dpi C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(dpi float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(dpi)

	gofunc(slotval1)
}

func (this *QScreen) VirtualGeometryChanged(rect QRect) {
	C.QScreen_virtualGeometryChanged(this.h, libmiqt.ValueCast[C.struct_miqt_qrect](rect))
}
func (this *QScreen) OnVirtualGeometryChanged(slot func(rect QRect)) {
	C.QScreen_connect_virtualGeometryChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_virtualGeometryChanged
func miqt_exec_callback_QScreen_virtualGeometryChanged(cb C.intptr_t, rect C.struct_miqt_qrect) {
	gofunc, ok := cgo.Handle(cb).Value().(func(rect QRect))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := libmiqt.ValueCast[QRect](rect)

	gofunc(slotval1)
}

func (this *QScreen) PrimaryOrientationChanged(orientation ScreenOrientation) {
	C.QScreen_primaryOrientationChanged(this.h, (C.int)(orientation))
}
func (this *QScreen) OnPrimaryOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QScreen_connect_primaryOrientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_primaryOrientationChanged
func miqt_exec_callback_QScreen_primaryOrientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ScreenOrientation)(orientation)

	gofunc(slotval1)
}

func (this *QScreen) OrientationChanged(orientation ScreenOrientation) {
	C.QScreen_orientationChanged(this.h, (C.int)(orientation))
}
func (this *QScreen) OnOrientationChanged(slot func(orientation ScreenOrientation)) {
	C.QScreen_connect_orientationChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_orientationChanged
func miqt_exec_callback_QScreen_orientationChanged(cb C.intptr_t, orientation C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(orientation ScreenOrientation))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (ScreenOrientation)(orientation)

	gofunc(slotval1)
}

func (this *QScreen) RefreshRateChanged(refreshRate float64) {
	C.QScreen_refreshRateChanged(this.h, (C.double)(refreshRate))
}
func (this *QScreen) OnRefreshRateChanged(slot func(refreshRate float64)) {
	C.QScreen_connect_refreshRateChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QScreen_refreshRateChanged
func miqt_exec_callback_QScreen_refreshRateChanged(cb C.intptr_t, refreshRate C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(refreshRate float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(refreshRate)

	gofunc(slotval1)
}

func QScreen_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScreen_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QScreen_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QScreen_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QScreen) GrabWindowWithWindow(window uintptr) *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindowWithWindow(this.h, (C.uintptr_t)(window)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow2(window uintptr, x int) *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindow2(this.h, (C.uintptr_t)(window), (C.int)(x)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow3(window uintptr, x int, y int) *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindow3(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow4(window uintptr, x int, y int, w int) *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindow4(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScreen) GrabWindow5(window uintptr, x int, y int, w int, h int) *QPixmap {
	_goptr := newQPixmap(C.QScreen_grabWindow5(this.h, (C.uintptr_t)(window), (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QScreen) Delete() {
	C.QScreen_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
// This is a QObject class, so this is unsupported: the bindings do not
// keep it alive during calls into C++, and its parent may delete it.
func (this *QScreen) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScreen_delete((*C.QScreen)(gc[0]))
	})
	this.miqtSetGC(gc)
}
