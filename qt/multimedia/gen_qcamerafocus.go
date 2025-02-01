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
	h *C.QCameraFocusZone
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
	return newQCameraFocusZone((*C.QCameraFocusZone)(h))
}

// NewQCameraFocusZone constructs a new QCameraFocusZone object.
func NewQCameraFocusZone() *QCameraFocusZone {

	return newQCameraFocusZone(C.QCameraFocusZone_new())
}

// NewQCameraFocusZone2 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone2(area *qt.QRectF) *QCameraFocusZone {

	return newQCameraFocusZone(C.QCameraFocusZone_new2((*C.QRectF)(area.UnsafePointer())))
}

// NewQCameraFocusZone3 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone3(other *QCameraFocusZone) *QCameraFocusZone {

	return newQCameraFocusZone(C.QCameraFocusZone_new3(other.cPointer()))
}

// NewQCameraFocusZone4 constructs a new QCameraFocusZone object.
func NewQCameraFocusZone4(area *qt.QRectF, status QCameraFocusZone__FocusZoneStatus) *QCameraFocusZone {

	return newQCameraFocusZone(C.QCameraFocusZone_new4((*C.QRectF)(area.UnsafePointer()), (C.int)(status)))
}

func (this *QCameraFocusZone) OperatorAssign(other *QCameraFocusZone) {
	C.QCameraFocusZone_operatorAssign(this.h, other.cPointer())
}

func (this *QCameraFocusZone) OperatorEqual(other *QCameraFocusZone) bool {
	return (bool)(C.QCameraFocusZone_operatorEqual(this.h, other.cPointer()))
}

func (this *QCameraFocusZone) OperatorNotEqual(other *QCameraFocusZone) bool {
	return (bool)(C.QCameraFocusZone_operatorNotEqual(this.h, other.cPointer()))
}

func (this *QCameraFocusZone) IsValid() bool {
	return (bool)(C.QCameraFocusZone_isValid(this.h))
}

func (this *QCameraFocusZone) Area() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QCameraFocusZone_area(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraFocusZone) Status() QCameraFocusZone__FocusZoneStatus {
	return (QCameraFocusZone__FocusZoneStatus)(C.QCameraFocusZone_status(this.h))
}

func (this *QCameraFocusZone) SetStatus(status QCameraFocusZone__FocusZoneStatus) {
	C.QCameraFocusZone_setStatus(this.h, (C.int)(status))
}

// Delete this object from C++ memory.
func (this *QCameraFocusZone) Delete() {
	C.QCameraFocusZone_delete(this.h)
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
	h *C.QCameraFocus
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
func newQCameraFocus(h *C.QCameraFocus) *QCameraFocus {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QCameraFocus_virtbase(h, &outptr_QObject)

	return &QCameraFocus{h: h,
		QObject: qt.UnsafeNewQObject(unsafe.Pointer(outptr_QObject))}
}

// UnsafeNewQCameraFocus constructs the type using only unsafe pointers.
func UnsafeNewQCameraFocus(h unsafe.Pointer) *QCameraFocus {
	return newQCameraFocus((*C.QCameraFocus)(h))
}

func (this *QCameraFocus) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraFocus_metaObject(this.h)))
}

func (this *QCameraFocus) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraFocus_metacast(this.h, param1_Cstring))
}

func QCameraFocus_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraFocus) IsAvailable() bool {
	return (bool)(C.QCameraFocus_isAvailable(this.h))
}

func (this *QCameraFocus) FocusMode() QCameraFocus__FocusMode {
	return (QCameraFocus__FocusMode)(C.QCameraFocus_focusMode(this.h))
}

func (this *QCameraFocus) SetFocusMode(mode QCameraFocus__FocusMode) {
	C.QCameraFocus_setFocusMode(this.h, (C.int)(mode))
}

func (this *QCameraFocus) IsFocusModeSupported(mode QCameraFocus__FocusMode) bool {
	return (bool)(C.QCameraFocus_isFocusModeSupported(this.h, (C.int)(mode)))
}

func (this *QCameraFocus) FocusPointMode() QCameraFocus__FocusPointMode {
	return (QCameraFocus__FocusPointMode)(C.QCameraFocus_focusPointMode(this.h))
}

func (this *QCameraFocus) SetFocusPointMode(mode QCameraFocus__FocusPointMode) {
	C.QCameraFocus_setFocusPointMode(this.h, (C.int)(mode))
}

func (this *QCameraFocus) IsFocusPointModeSupported(param1 QCameraFocus__FocusPointMode) bool {
	return (bool)(C.QCameraFocus_isFocusPointModeSupported(this.h, (C.int)(param1)))
}

func (this *QCameraFocus) CustomFocusPoint() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QCameraFocus_customFocusPoint(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QCameraFocus) SetCustomFocusPoint(point *qt.QPointF) {
	C.QCameraFocus_setCustomFocusPoint(this.h, (*C.QPointF)(point.UnsafePointer()))
}

func (this *QCameraFocus) FocusZones() []QCameraFocusZone {
	var _ma C.struct_miqt_array = C.QCameraFocus_focusZones(this.h)
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
	return (float64)(C.QCameraFocus_maximumOpticalZoom(this.h))
}

func (this *QCameraFocus) MaximumDigitalZoom() float64 {
	return (float64)(C.QCameraFocus_maximumDigitalZoom(this.h))
}

func (this *QCameraFocus) OpticalZoom() float64 {
	return (float64)(C.QCameraFocus_opticalZoom(this.h))
}

func (this *QCameraFocus) DigitalZoom() float64 {
	return (float64)(C.QCameraFocus_digitalZoom(this.h))
}

func (this *QCameraFocus) ZoomTo(opticalZoom float64, digitalZoom float64) {
	C.QCameraFocus_zoomTo(this.h, (C.double)(opticalZoom), (C.double)(digitalZoom))
}

func (this *QCameraFocus) OpticalZoomChanged(param1 float64) {
	C.QCameraFocus_opticalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnOpticalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_opticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_opticalZoomChanged
func miqt_exec_callback_QCameraFocus_opticalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) DigitalZoomChanged(param1 float64) {
	C.QCameraFocus_digitalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnDigitalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_digitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_digitalZoomChanged
func miqt_exec_callback_QCameraFocus_digitalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) FocusZonesChanged() {
	C.QCameraFocus_focusZonesChanged(this.h)
}
func (this *QCameraFocus) OnFocusZonesChanged(slot func()) {
	C.QCameraFocus_connect_focusZonesChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_focusZonesChanged
func miqt_exec_callback_QCameraFocus_focusZonesChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QCameraFocus) MaximumOpticalZoomChanged(param1 float64) {
	C.QCameraFocus_maximumOpticalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnMaximumOpticalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_maximumOpticalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_maximumOpticalZoomChanged
func miqt_exec_callback_QCameraFocus_maximumOpticalZoomChanged(cb C.intptr_t, param1 C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(param1)

	gofunc(slotval1)
}

func (this *QCameraFocus) MaximumDigitalZoomChanged(param1 float64) {
	C.QCameraFocus_maximumDigitalZoomChanged(this.h, (C.double)(param1))
}
func (this *QCameraFocus) OnMaximumDigitalZoomChanged(slot func(param1 float64)) {
	C.QCameraFocus_connect_maximumDigitalZoomChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraFocus_maximumDigitalZoomChanged
func miqt_exec_callback_QCameraFocus_maximumDigitalZoomChanged(cb C.intptr_t, param1 C.double) {
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
	var _ms C.struct_miqt_string = C.QCameraFocus_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraFocus_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraFocus_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
