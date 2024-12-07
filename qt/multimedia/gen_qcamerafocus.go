package multimedia

/*

#include "gen_qcamerafocus.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraFocusZone__FocusZoneStatus int

const (
	QCameraFocusZone__Invalid  QCameraFocusZone__FocusZoneStatus = 0
	QCameraFocusZone__Unused   QCameraFocusZone__FocusZoneStatus = 1
	QCameraFocusZone__Selected QCameraFocusZone__FocusZoneStatus = 2
	QCameraFocusZone__Focused  QCameraFocusZone__FocusZoneStatus = 3
)

type QCameraFocus__FocusMode int

const (
	QCameraFocus__ManualFocus     QCameraFocus__FocusMode = 1
	QCameraFocus__HyperfocalFocus QCameraFocus__FocusMode = 2
	QCameraFocus__InfinityFocus   QCameraFocus__FocusMode = 4
	QCameraFocus__AutoFocus       QCameraFocus__FocusMode = 8
	QCameraFocus__ContinuousFocus QCameraFocus__FocusMode = 16
	QCameraFocus__MacroFocus      QCameraFocus__FocusMode = 32
)

type QCameraFocus__FocusPointMode int

const (
	QCameraFocus__FocusPointAuto          QCameraFocus__FocusPointMode = 0
	QCameraFocus__FocusPointCenter        QCameraFocus__FocusPointMode = 1
	QCameraFocus__FocusPointFaceDetection QCameraFocus__FocusPointMode = 2
	QCameraFocus__FocusPointCustom        QCameraFocus__FocusPointMode = 3
)

type QCameraFocusZone struct {
	h          *C.QCameraFocusZone
	isSubclass bool
}

func (this *QCameraFocusZone) cPointer() *C.QCameraFocusZone {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFocusZone) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraFocusZone constructs the type using only CGO pointers.
func newQCameraFocusZone(h *C.QCameraFocusZone) *QCameraFocusZone {
	if h == nil {
		return nil
	}
	return &QCameraFocusZone{h: h}
}

// UnsafeNewQCameraFocusZone constructs the type using only unsafe pointers.
func UnsafeNewQCameraFocusZone(h unsafe.Pointer) *QCameraFocusZone {
	if h == nil {
		return nil
	}

	return &QCameraFocusZone{h: (*C.QCameraFocusZone)(h)}
}

// NewQCameraFocusZone constructs a new QCameraFocusZone object.
func NewQCameraFocusZone() *QCameraFocusZone {
	var outptr_QCameraFocusZone *C.QCameraFocusZone = nil

	C.QCameraFocusZone_new(&outptr_QCameraFocusZone)
	ret := newQCameraFocusZone(outptr_QCameraFocusZone)
	ret.isSubclass = true
	return ret
}

// NewQCameraFocusZone2 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone2(area *qt.QRectF) *QCameraFocusZone {
	var outptr_QCameraFocusZone *C.QCameraFocusZone = nil

	C.QCameraFocusZone_new2((*C.QRectF)(area.UnsafePointer()), &outptr_QCameraFocusZone)
	ret := newQCameraFocusZone(outptr_QCameraFocusZone)
	ret.isSubclass = true
	return ret
}

// NewQCameraFocusZone3 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone3(other *QCameraFocusZone) *QCameraFocusZone {
	var outptr_QCameraFocusZone *C.QCameraFocusZone = nil

	C.QCameraFocusZone_new3(other.cPointer(), &outptr_QCameraFocusZone)
	ret := newQCameraFocusZone(outptr_QCameraFocusZone)
	ret.isSubclass = true
	return ret
}

// NewQCameraFocusZone4 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone4(area *qt.QRectF, status QCameraFocusZone__FocusZoneStatus) *QCameraFocusZone {
	var outptr_QCameraFocusZone *C.QCameraFocusZone = nil

	C.QCameraFocusZone_new4((*C.QRectF)(area.UnsafePointer()), (C.int)(status), &outptr_QCameraFocusZone)
	ret := newQCameraFocusZone(outptr_QCameraFocusZone)
	ret.isSubclass = true
	return ret
}

func (this *QCameraFocusZone) OperatorAssign(other *QCameraFocusZone) {
	C.QCameraFocusZone_OperatorAssign(this.h, other.cPointer())
}

func (this *QCameraFocusZone) OperatorEqual(other *QCameraFocusZone) bool {
	return (bool)(C.QCameraFocusZone_OperatorEqual(this.h, other.cPointer()))
}

func (this *QCameraFocusZone) OperatorNotEqual(other *QCameraFocusZone) bool {
	return (bool)(C.QCameraFocusZone_OperatorNotEqual(this.h, other.cPointer()))
}

func (this *QCameraFocusZone) IsValid() bool {
	return (bool)(C.QCameraFocusZone_IsValid(this.h))
}

func (this *QCameraFocusZone) Area() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QCameraFocusZone_Area(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraFocusZone) Status() QCameraFocusZone__FocusZoneStatus {
	return (QCameraFocusZone__FocusZoneStatus)(C.QCameraFocusZone_Status(this.h))
}

func (this *QCameraFocusZone) SetStatus(status QCameraFocusZone__FocusZoneStatus) {
	C.QCameraFocusZone_SetStatus(this.h, (C.int)(status))
}

// Delete this object from C++ memory.
func (this *QCameraFocusZone) Delete() {
	C.QCameraFocusZone_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraFocusZone) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraFocusZone) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCameraFocus struct {
	h          *C.QCameraFocus
	isSubclass bool
	*qt.QObject
}

func (this *QCameraFocus) cPointer() *C.QCameraFocus {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraFocus) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCameraFocus constructs the type using only CGO pointers.
func newQCameraFocus(h *C.QCameraFocus, h_QObject *C.QObject) *QCameraFocus {
	if h == nil {
		return nil
	}
	return &QCameraFocus{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(h_QObject))}
}

// UnsafeNewQCameraFocus constructs the type using only unsafe pointers.
func UnsafeNewQCameraFocus(h unsafe.Pointer, h_QObject unsafe.Pointer) *QCameraFocus {
	if h == nil {
		return nil
	}

	return &QCameraFocus{h: (*C.QCameraFocus)(h),
		QObject: qt.UnsafeNewQObject(h_QObject)}
}

func (this *QCameraFocus) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFocus_MetaObject(this.h)))
}

func (this *QCameraFocus) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFocus_Metacast(this.h, param1_Cstring))
}

func QCameraFocus_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFocus) IsAvailable() bool {
	return (bool)(C.QCameraFocus_IsAvailable(this.h))
}

func (this *QCameraFocus) FocusMode() QCameraFocus__FocusMode {
	return (QCameraFocus__FocusMode)(C.QCameraFocus_FocusMode(this.h))
}

func (this *QCameraFocus) SetFocusMode(mode QCameraFocus__FocusMode) {
	C.QCameraFocus_SetFocusMode(this.h, (C.int)(mode))
}

func (this *QCameraFocus) IsFocusModeSupported(mode QCameraFocus__FocusMode) bool {
	return (bool)(C.QCameraFocus_IsFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocus) FocusPointMode() QCameraFocus__FocusPointMode {
	return (QCameraFocus__FocusPointMode)(C.QCameraFocus_FocusPointMode(this.h))
}

func (this *QCameraFocus) SetFocusPointMode(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocus_SetFocusPointMode(this.h, (C.int)(mode))
}

func (this *QCameraFocus) IsFocusPointModeSupported(param1 QCameraFocus__FocusPointMode) bool {
	return (bool)(C.QCameraFocus_IsFocusPointModeSupported(this.h, (C.int)(param1)))
}

func (this *QCameraFocus) CustomFocusPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QCameraFocus_CustomFocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraFocus) SetCustomFocusPoint(point *qt.QPointF) {
	C.QCameraFocus_SetCustomFocusPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCameraFocus) FocusZones() []QCameraFocusZone {
	var _ma C.struct_miqt_array = C.QCameraFocus_FocusZones(this.h)
	_ret := make([]QCameraFocusZone, int(_ma.len))
	_outCast := (*[0xffff]*C.QCameraFocusZone)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQCameraFocusZone(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QCameraFocus) MaximumOpticalZoom() float64 {
	return (float64)(C.QCameraFocus_MaximumOpticalZoom(this.h))
}

func (this *QCameraFocus) MaximumDigitalZoom() float64 {
	return (float64)(C.QCameraFocus_MaximumDigitalZoom(this.h))
}

func (this *QCameraFocus) OpticalZoom() float64 {
	return (float64)(C.QCameraFocus_OpticalZoom(this.h))
}

func (this *QCameraFocus) DigitalZoom() float64 {
	return (float64)(C.QCameraFocus_DigitalZoom(this.h))
}

func (this *QCameraFocus) ZoomTo(opticalZoom float64, digitalZoom float64) {
	C.QCameraFocus_ZoomTo(this.h, (C.double)(opticalZoom), (C.double)(digitalZoom))
}

func (this *QCameraFocus) OpticalZoomChanged(param1 float64) {
	C.QCameraFocus_OpticalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnOpticalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_OpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_OpticalZoomChanged
func miqt_exec_callback_QCameraFocus_OpticalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) DigitalZoomChanged(param1 float64) {
	C.QCameraFocus_DigitalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnDigitalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_DigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_DigitalZoomChanged
func miqt_exec_callback_QCameraFocus_DigitalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) FocusZonesChanged() {
	C.QCameraFocus_FocusZonesChanged(this.h)
}
func (this *QCameraFocus) OnFocusZonesChanged(slot func()) {
	C.QCameraFocus_connect_FocusZonesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_FocusZonesChanged
func miqt_exec_callback_QCameraFocus_FocusZonesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCameraFocus) MaximumOpticalZoomChanged(param1 float64) {
	C.QCameraFocus_MaximumOpticalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnMaximumOpticalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_MaximumOpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_MaximumOpticalZoomChanged
func miqt_exec_callback_QCameraFocus_MaximumOpticalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) MaximumDigitalZoomChanged(param1 float64) {
	C.QCameraFocus_MaximumDigitalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnMaximumDigitalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_MaximumDigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_MaximumDigitalZoomChanged
func miqt_exec_callback_QCameraFocus_MaximumDigitalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func QCameraFocus_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
