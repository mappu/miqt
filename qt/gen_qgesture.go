package qt

/*

#include "gen_qgesture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGesture__GestureCancelPolicy int

const (
	QGesture__CancelNone         QGesture__GestureCancelPolicy = 0
	QGesture__CancelAllInContext QGesture__GestureCancelPolicy = 1
)

type QPinchGesture__ChangeFlag int

const (
	QPinchGesture__ScaleFactorChanged   QPinchGesture__ChangeFlag = 1
	QPinchGesture__RotationAngleChanged QPinchGesture__ChangeFlag = 2
	QPinchGesture__CenterPointChanged   QPinchGesture__ChangeFlag = 4
)

type QSwipeGesture__SwipeDirection int

const (
	QSwipeGesture__NoDirection QSwipeGesture__SwipeDirection = 0
	QSwipeGesture__Left        QSwipeGesture__SwipeDirection = 1
	QSwipeGesture__Right       QSwipeGesture__SwipeDirection = 2
	QSwipeGesture__Up          QSwipeGesture__SwipeDirection = 3
	QSwipeGesture__Down        QSwipeGesture__SwipeDirection = 4
)

type QGesture struct {
	h *C.QGesture
	*QObject
}

func (this *QGesture) cPointer() *C.QGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGesture(h *C.QGesture) *QGesture {
	if h == nil {
		return nil
	}
	return &QGesture{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGesture_U(h unsafe.Pointer) *QGesture {
	return newQGesture((*C.QGesture)(h))
}

// NewQGesture constructs a new QGesture object.
func NewQGesture() *QGesture {
	ret := C.QGesture_new()
	return newQGesture(ret)
}

// NewQGesture2 constructs a new QGesture object.
func NewQGesture2(parent *QObject) *QGesture {
	ret := C.QGesture_new2(parent.cPointer())
	return newQGesture(ret)
}

func (this *QGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QGesture_MetaObject(this.h)))
}

func (this *QGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QGesture_Metacast(this.h, param1_Cstring)
}

func QGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QGesture) GestureType() GestureType {
	return (GestureType)(C.QGesture_GestureType(this.h))
}

func (this *QGesture) State() GestureState {
	return (GestureState)(C.QGesture_State(this.h))
}

func (this *QGesture) HotSpot() *QPointF {
	_ret := C.QGesture_HotSpot(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGesture) SetHotSpot(value *QPointF) {
	C.QGesture_SetHotSpot(this.h, value.cPointer())
}

func (this *QGesture) HasHotSpot() bool {
	return (bool)(C.QGesture_HasHotSpot(this.h))
}

func (this *QGesture) UnsetHotSpot() {
	C.QGesture_UnsetHotSpot(this.h)
}

func (this *QGesture) SetGestureCancelPolicy(policy QGesture__GestureCancelPolicy) {
	C.QGesture_SetGestureCancelPolicy(this.h, (C.int)(policy))
}

func (this *QGesture) GestureCancelPolicy() QGesture__GestureCancelPolicy {
	return (QGesture__GestureCancelPolicy)(C.QGesture_GestureCancelPolicy(this.h))
}

func QGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGesture) Delete() {
	C.QGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPanGesture struct {
	h *C.QPanGesture
	*QGesture
}

func (this *QPanGesture) cPointer() *C.QPanGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPanGesture(h *C.QPanGesture) *QPanGesture {
	if h == nil {
		return nil
	}
	return &QPanGesture{h: h, QGesture: newQGesture_U(unsafe.Pointer(h))}
}

func newQPanGesture_U(h unsafe.Pointer) *QPanGesture {
	return newQPanGesture((*C.QPanGesture)(h))
}

// NewQPanGesture constructs a new QPanGesture object.
func NewQPanGesture() *QPanGesture {
	ret := C.QPanGesture_new()
	return newQPanGesture(ret)
}

// NewQPanGesture2 constructs a new QPanGesture object.
func NewQPanGesture2(parent *QObject) *QPanGesture {
	ret := C.QPanGesture_new2(parent.cPointer())
	return newQPanGesture(ret)
}

func (this *QPanGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QPanGesture_MetaObject(this.h)))
}

func (this *QPanGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPanGesture_Metacast(this.h, param1_Cstring)
}

func QPanGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPanGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPanGesture) LastOffset() *QPointF {
	_ret := C.QPanGesture_LastOffset(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Offset() *QPointF {
	_ret := C.QPanGesture_Offset(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Delta() *QPointF {
	_ret := C.QPanGesture_Delta(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPanGesture) Acceleration() float64 {
	return (float64)(C.QPanGesture_Acceleration(this.h))
}

func (this *QPanGesture) SetLastOffset(value *QPointF) {
	C.QPanGesture_SetLastOffset(this.h, value.cPointer())
}

func (this *QPanGesture) SetOffset(value *QPointF) {
	C.QPanGesture_SetOffset(this.h, value.cPointer())
}

func (this *QPanGesture) SetAcceleration(value float64) {
	C.QPanGesture_SetAcceleration(this.h, (C.double)(value))
}

func QPanGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPanGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPanGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPanGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPanGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPanGesture) Delete() {
	C.QPanGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPanGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPanGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPinchGesture struct {
	h *C.QPinchGesture
	*QGesture
}

func (this *QPinchGesture) cPointer() *C.QPinchGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPinchGesture(h *C.QPinchGesture) *QPinchGesture {
	if h == nil {
		return nil
	}
	return &QPinchGesture{h: h, QGesture: newQGesture_U(unsafe.Pointer(h))}
}

func newQPinchGesture_U(h unsafe.Pointer) *QPinchGesture {
	return newQPinchGesture((*C.QPinchGesture)(h))
}

// NewQPinchGesture constructs a new QPinchGesture object.
func NewQPinchGesture() *QPinchGesture {
	ret := C.QPinchGesture_new()
	return newQPinchGesture(ret)
}

// NewQPinchGesture2 constructs a new QPinchGesture object.
func NewQPinchGesture2(parent *QObject) *QPinchGesture {
	ret := C.QPinchGesture_new2(parent.cPointer())
	return newQPinchGesture(ret)
}

func (this *QPinchGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QPinchGesture_MetaObject(this.h)))
}

func (this *QPinchGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QPinchGesture_Metacast(this.h, param1_Cstring)
}

func QPinchGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPinchGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QPinchGesture) TotalChangeFlags() QPinchGesture__ChangeFlag {
	return (QPinchGesture__ChangeFlag)(C.QPinchGesture_TotalChangeFlags(this.h))
}

func (this *QPinchGesture) SetTotalChangeFlags(value QPinchGesture__ChangeFlag) {
	C.QPinchGesture_SetTotalChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) ChangeFlags() QPinchGesture__ChangeFlag {
	return (QPinchGesture__ChangeFlag)(C.QPinchGesture_ChangeFlags(this.h))
}

func (this *QPinchGesture) SetChangeFlags(value QPinchGesture__ChangeFlag) {
	C.QPinchGesture_SetChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) StartCenterPoint() *QPointF {
	_ret := C.QPinchGesture_StartCenterPoint(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) LastCenterPoint() *QPointF {
	_ret := C.QPinchGesture_LastCenterPoint(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) CenterPoint() *QPointF {
	_ret := C.QPinchGesture_CenterPoint(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPinchGesture) SetStartCenterPoint(value *QPointF) {
	C.QPinchGesture_SetStartCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) SetLastCenterPoint(value *QPointF) {
	C.QPinchGesture_SetLastCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) SetCenterPoint(value *QPointF) {
	C.QPinchGesture_SetCenterPoint(this.h, value.cPointer())
}

func (this *QPinchGesture) TotalScaleFactor() float64 {
	return (float64)(C.QPinchGesture_TotalScaleFactor(this.h))
}

func (this *QPinchGesture) LastScaleFactor() float64 {
	return (float64)(C.QPinchGesture_LastScaleFactor(this.h))
}

func (this *QPinchGesture) ScaleFactor() float64 {
	return (float64)(C.QPinchGesture_ScaleFactor(this.h))
}

func (this *QPinchGesture) SetTotalScaleFactor(value float64) {
	C.QPinchGesture_SetTotalScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetLastScaleFactor(value float64) {
	C.QPinchGesture_SetLastScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetScaleFactor(value float64) {
	C.QPinchGesture_SetScaleFactor(this.h, (C.double)(value))
}

func (this *QPinchGesture) TotalRotationAngle() float64 {
	return (float64)(C.QPinchGesture_TotalRotationAngle(this.h))
}

func (this *QPinchGesture) LastRotationAngle() float64 {
	return (float64)(C.QPinchGesture_LastRotationAngle(this.h))
}

func (this *QPinchGesture) RotationAngle() float64 {
	return (float64)(C.QPinchGesture_RotationAngle(this.h))
}

func (this *QPinchGesture) SetTotalRotationAngle(value float64) {
	C.QPinchGesture_SetTotalRotationAngle(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetLastRotationAngle(value float64) {
	C.QPinchGesture_SetLastRotationAngle(this.h, (C.double)(value))
}

func (this *QPinchGesture) SetRotationAngle(value float64) {
	C.QPinchGesture_SetRotationAngle(this.h, (C.double)(value))
}

func QPinchGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPinchGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPinchGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QPinchGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QPinchGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QPinchGesture) Delete() {
	C.QPinchGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPinchGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QPinchGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QSwipeGesture struct {
	h *C.QSwipeGesture
	*QGesture
}

func (this *QSwipeGesture) cPointer() *C.QSwipeGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQSwipeGesture(h *C.QSwipeGesture) *QSwipeGesture {
	if h == nil {
		return nil
	}
	return &QSwipeGesture{h: h, QGesture: newQGesture_U(unsafe.Pointer(h))}
}

func newQSwipeGesture_U(h unsafe.Pointer) *QSwipeGesture {
	return newQSwipeGesture((*C.QSwipeGesture)(h))
}

// NewQSwipeGesture constructs a new QSwipeGesture object.
func NewQSwipeGesture() *QSwipeGesture {
	ret := C.QSwipeGesture_new()
	return newQSwipeGesture(ret)
}

// NewQSwipeGesture2 constructs a new QSwipeGesture object.
func NewQSwipeGesture2(parent *QObject) *QSwipeGesture {
	ret := C.QSwipeGesture_new2(parent.cPointer())
	return newQSwipeGesture(ret)
}

func (this *QSwipeGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QSwipeGesture_MetaObject(this.h)))
}

func (this *QSwipeGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QSwipeGesture_Metacast(this.h, param1_Cstring)
}

func QSwipeGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSwipeGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QSwipeGesture) HorizontalDirection() QSwipeGesture__SwipeDirection {
	return (QSwipeGesture__SwipeDirection)(C.QSwipeGesture_HorizontalDirection(this.h))
}

func (this *QSwipeGesture) VerticalDirection() QSwipeGesture__SwipeDirection {
	return (QSwipeGesture__SwipeDirection)(C.QSwipeGesture_VerticalDirection(this.h))
}

func (this *QSwipeGesture) SwipeAngle() float64 {
	return (float64)(C.QSwipeGesture_SwipeAngle(this.h))
}

func (this *QSwipeGesture) SetSwipeAngle(value float64) {
	C.QSwipeGesture_SetSwipeAngle(this.h, (C.double)(value))
}

func QSwipeGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSwipeGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSwipeGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QSwipeGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QSwipeGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QSwipeGesture) Delete() {
	C.QSwipeGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QSwipeGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QSwipeGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTapGesture struct {
	h *C.QTapGesture
	*QGesture
}

func (this *QTapGesture) cPointer() *C.QTapGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTapGesture(h *C.QTapGesture) *QTapGesture {
	if h == nil {
		return nil
	}
	return &QTapGesture{h: h, QGesture: newQGesture_U(unsafe.Pointer(h))}
}

func newQTapGesture_U(h unsafe.Pointer) *QTapGesture {
	return newQTapGesture((*C.QTapGesture)(h))
}

// NewQTapGesture constructs a new QTapGesture object.
func NewQTapGesture() *QTapGesture {
	ret := C.QTapGesture_new()
	return newQTapGesture(ret)
}

// NewQTapGesture2 constructs a new QTapGesture object.
func NewQTapGesture2(parent *QObject) *QTapGesture {
	ret := C.QTapGesture_new2(parent.cPointer())
	return newQTapGesture(ret)
}

func (this *QTapGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QTapGesture_MetaObject(this.h)))
}

func (this *QTapGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QTapGesture_Metacast(this.h, param1_Cstring)
}

func QTapGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTapGesture) Position() *QPointF {
	_ret := C.QTapGesture_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTapGesture) SetPosition(pos *QPointF) {
	C.QTapGesture_SetPosition(this.h, pos.cPointer())
}

func QTapGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTapGesture) Delete() {
	C.QTapGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTapGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QTapGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTapAndHoldGesture struct {
	h *C.QTapAndHoldGesture
	*QGesture
}

func (this *QTapAndHoldGesture) cPointer() *C.QTapAndHoldGesture {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTapAndHoldGesture(h *C.QTapAndHoldGesture) *QTapAndHoldGesture {
	if h == nil {
		return nil
	}
	return &QTapAndHoldGesture{h: h, QGesture: newQGesture_U(unsafe.Pointer(h))}
}

func newQTapAndHoldGesture_U(h unsafe.Pointer) *QTapAndHoldGesture {
	return newQTapAndHoldGesture((*C.QTapAndHoldGesture)(h))
}

// NewQTapAndHoldGesture constructs a new QTapAndHoldGesture object.
func NewQTapAndHoldGesture() *QTapAndHoldGesture {
	ret := C.QTapAndHoldGesture_new()
	return newQTapAndHoldGesture(ret)
}

// NewQTapAndHoldGesture2 constructs a new QTapAndHoldGesture object.
func NewQTapAndHoldGesture2(parent *QObject) *QTapAndHoldGesture {
	ret := C.QTapAndHoldGesture_new2(parent.cPointer())
	return newQTapAndHoldGesture(ret)
}

func (this *QTapAndHoldGesture) MetaObject() *QMetaObject {
	return newQMetaObject_U(unsafe.Pointer(C.QTapAndHoldGesture_MetaObject(this.h)))
}

func (this *QTapAndHoldGesture) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return C.QTapAndHoldGesture_Metacast(this.h, param1_Cstring)
}

func QTapAndHoldGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_Tr(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapAndHoldGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_TrUtf8(s_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QTapAndHoldGesture) Position() *QPointF {
	_ret := C.QTapAndHoldGesture_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTapAndHoldGesture) SetPosition(pos *QPointF) {
	C.QTapAndHoldGesture_SetPosition(this.h, pos.cPointer())
}

func QTapAndHoldGesture_SetTimeout(msecs int) {
	C.QTapAndHoldGesture_SetTimeout((C.int)(msecs))
}

func QTapAndHoldGesture_Timeout() int {
	return (int)(C.QTapAndHoldGesture_Timeout())
}

func QTapAndHoldGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapAndHoldGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapAndHoldGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func QTapAndHoldGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms *C.struct_miqt_string = C.QTapAndHoldGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QTapAndHoldGesture) Delete() {
	C.QTapAndHoldGesture_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTapAndHoldGesture) GoGC() {
	runtime.SetFinalizer(this, func(this *QTapAndHoldGesture) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGestureEvent struct {
	h *C.QGestureEvent
	*QEvent
}

func (this *QGestureEvent) cPointer() *C.QGestureEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGestureEvent(h *C.QGestureEvent) *QGestureEvent {
	if h == nil {
		return nil
	}
	return &QGestureEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQGestureEvent_U(h unsafe.Pointer) *QGestureEvent {
	return newQGestureEvent((*C.QGestureEvent)(h))
}

// NewQGestureEvent constructs a new QGestureEvent object.
func NewQGestureEvent(gestures []*QGesture) *QGestureEvent {
	// For the C ABI, malloc a C array of raw pointers
	gestures_CArray := (*[0xffff]*C.QGesture)(C.malloc(C.size_t(8 * len(gestures))))
	defer C.free(unsafe.Pointer(gestures_CArray))
	for i := range gestures {
		gestures_CArray[i] = gestures[i].cPointer()
	}
	gestures_ma := &C.struct_miqt_array{len: C.size_t(len(gestures)), data: unsafe.Pointer(gestures_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(gestures_ma))
	ret := C.QGestureEvent_new(gestures_ma)
	return newQGestureEvent(ret)
}

// NewQGestureEvent2 constructs a new QGestureEvent object.
func NewQGestureEvent2(param1 *QGestureEvent) *QGestureEvent {
	ret := C.QGestureEvent_new2(param1.cPointer())
	return newQGestureEvent(ret)
}

func (this *QGestureEvent) Gestures() []*QGesture {
	var _ma *C.struct_miqt_array = C.QGestureEvent_Gestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGestureEvent) Gesture(typeVal GestureType) *QGesture {
	return newQGesture_U(unsafe.Pointer(C.QGestureEvent_Gesture(this.h, (C.int)(typeVal))))
}

func (this *QGestureEvent) ActiveGestures() []*QGesture {
	var _ma *C.struct_miqt_array = C.QGestureEvent_ActiveGestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGestureEvent) CanceledGestures() []*QGesture {
	var _ma *C.struct_miqt_array = C.QGestureEvent_CanceledGestures(this.h)
	_ret := make([]*QGesture, int(_ma.len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = newQGesture_U(unsafe.Pointer(_outCast[i]))
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QGestureEvent) SetAccepted(param1 *QGesture, param2 bool) {
	C.QGestureEvent_SetAccepted(this.h, param1.cPointer(), (C.bool)(param2))
}

func (this *QGestureEvent) Accept(param1 *QGesture) {
	C.QGestureEvent_Accept(this.h, param1.cPointer())
}

func (this *QGestureEvent) Ignore(param1 *QGesture) {
	C.QGestureEvent_Ignore(this.h, param1.cPointer())
}

func (this *QGestureEvent) IsAccepted(param1 *QGesture) bool {
	return (bool)(C.QGestureEvent_IsAccepted(this.h, param1.cPointer()))
}

func (this *QGestureEvent) SetAccepted2(param1 GestureType, param2 bool) {
	C.QGestureEvent_SetAccepted2(this.h, (C.int)(param1), (C.bool)(param2))
}

func (this *QGestureEvent) AcceptWithQtGestureType(param1 GestureType) {
	C.QGestureEvent_AcceptWithQtGestureType(this.h, (C.int)(param1))
}

func (this *QGestureEvent) IgnoreWithQtGestureType(param1 GestureType) {
	C.QGestureEvent_IgnoreWithQtGestureType(this.h, (C.int)(param1))
}

func (this *QGestureEvent) IsAcceptedWithQtGestureType(param1 GestureType) bool {
	return (bool)(C.QGestureEvent_IsAcceptedWithQtGestureType(this.h, (C.int)(param1)))
}

func (this *QGestureEvent) SetWidget(widget *QWidget) {
	C.QGestureEvent_SetWidget(this.h, widget.cPointer())
}

func (this *QGestureEvent) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QGestureEvent_Widget(this.h)))
}

func (this *QGestureEvent) MapToGraphicsScene(gesturePoint *QPointF) *QPointF {
	_ret := C.QGestureEvent_MapToGraphicsScene(this.h, gesturePoint.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QGestureEvent) Delete() {
	C.QGestureEvent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGestureEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGestureEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
