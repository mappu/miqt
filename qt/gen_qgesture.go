package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgesture.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	ret := C.QGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGesture) GestureType() uintptr {
	ret := C.QGesture_GestureType(this.h)
	return (uintptr)(ret)
}

func (this *QGesture) State() uintptr {
	ret := C.QGesture_State(this.h)
	return (uintptr)(ret)
}

func (this *QGesture) HotSpot() *QPointF {
	ret := C.QGesture_HotSpot(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGesture) SetHotSpot(value *QPointF) {
	C.QGesture_SetHotSpot(this.h, value.cPointer())
}

func (this *QGesture) HasHotSpot() bool {
	ret := C.QGesture_HasHotSpot(this.h)
	return (bool)(ret)
}

func (this *QGesture) UnsetHotSpot() {
	C.QGesture_UnsetHotSpot(this.h)
}

func (this *QGesture) SetGestureCancelPolicy(policy uintptr) {
	C.QGesture_SetGestureCancelPolicy(this.h, (C.uintptr_t)(policy))
}

func (this *QGesture) GestureCancelPolicy() uintptr {
	ret := C.QGesture_GestureCancelPolicy(this.h)
	return (uintptr)(ret)
}

func QGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGesture) Delete() {
	C.QGesture_Delete(this.h)
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
	ret := C.QPanGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPanGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPanGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPanGesture) LastOffset() *QPointF {
	ret := C.QPanGesture_LastOffset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPanGesture) Offset() *QPointF {
	ret := C.QPanGesture_Offset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPanGesture) Delta() *QPointF {
	ret := C.QPanGesture_Delta(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPanGesture) Acceleration() float64 {
	ret := C.QPanGesture_Acceleration(this.h)
	return (float64)(ret)
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPanGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPanGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPanGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPanGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPanGesture) Delete() {
	C.QPanGesture_Delete(this.h)
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
	ret := C.QPinchGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QPinchGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPinchGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPinchGesture) TotalChangeFlags() int {
	ret := C.QPinchGesture_TotalChangeFlags(this.h)
	return (int)(ret)
}

func (this *QPinchGesture) SetTotalChangeFlags(value int) {
	C.QPinchGesture_SetTotalChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) ChangeFlags() int {
	ret := C.QPinchGesture_ChangeFlags(this.h)
	return (int)(ret)
}

func (this *QPinchGesture) SetChangeFlags(value int) {
	C.QPinchGesture_SetChangeFlags(this.h, (C.int)(value))
}

func (this *QPinchGesture) StartCenterPoint() *QPointF {
	ret := C.QPinchGesture_StartCenterPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPinchGesture) LastCenterPoint() *QPointF {
	ret := C.QPinchGesture_LastCenterPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPinchGesture) CenterPoint() *QPointF {
	ret := C.QPinchGesture_CenterPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
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
	ret := C.QPinchGesture_TotalScaleFactor(this.h)
	return (float64)(ret)
}

func (this *QPinchGesture) LastScaleFactor() float64 {
	ret := C.QPinchGesture_LastScaleFactor(this.h)
	return (float64)(ret)
}

func (this *QPinchGesture) ScaleFactor() float64 {
	ret := C.QPinchGesture_ScaleFactor(this.h)
	return (float64)(ret)
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
	ret := C.QPinchGesture_TotalRotationAngle(this.h)
	return (float64)(ret)
}

func (this *QPinchGesture) LastRotationAngle() float64 {
	ret := C.QPinchGesture_LastRotationAngle(this.h)
	return (float64)(ret)
}

func (this *QPinchGesture) RotationAngle() float64 {
	ret := C.QPinchGesture_RotationAngle(this.h)
	return (float64)(ret)
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
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPinchGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPinchGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QPinchGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QPinchGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QPinchGesture) Delete() {
	C.QPinchGesture_Delete(this.h)
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
	ret := C.QSwipeGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QSwipeGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSwipeGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSwipeGesture) HorizontalDirection() uintptr {
	ret := C.QSwipeGesture_HorizontalDirection(this.h)
	return (uintptr)(ret)
}

func (this *QSwipeGesture) VerticalDirection() uintptr {
	ret := C.QSwipeGesture_VerticalDirection(this.h)
	return (uintptr)(ret)
}

func (this *QSwipeGesture) SwipeAngle() float64 {
	ret := C.QSwipeGesture_SwipeAngle(this.h)
	return (float64)(ret)
}

func (this *QSwipeGesture) SetSwipeAngle(value float64) {
	C.QSwipeGesture_SetSwipeAngle(this.h, (C.double)(value))
}

func QSwipeGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSwipeGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSwipeGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QSwipeGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QSwipeGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QSwipeGesture) Delete() {
	C.QSwipeGesture_Delete(this.h)
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
	ret := C.QTapGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTapGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTapGesture) Position() *QPointF {
	ret := C.QTapGesture_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTapGesture) SetPosition(pos *QPointF) {
	C.QTapGesture_SetPosition(this.h, pos.cPointer())
}

func QTapGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTapGesture) Delete() {
	C.QTapGesture_Delete(this.h)
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
	ret := C.QTapAndHoldGesture_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QTapAndHoldGesture_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapAndHoldGesture_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTapAndHoldGesture) Position() *QPointF {
	ret := C.QTapAndHoldGesture_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTapAndHoldGesture) SetPosition(pos *QPointF) {
	C.QTapAndHoldGesture_SetPosition(this.h, pos.cPointer())
}

func QTapAndHoldGesture_SetTimeout(msecs int) {
	C.QTapAndHoldGesture_SetTimeout((C.int)(msecs))
}

func QTapAndHoldGesture_Timeout() int {
	ret := C.QTapAndHoldGesture_Timeout()
	return (int)(ret)
}

func QTapAndHoldGesture_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapAndHoldGesture_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapAndHoldGesture_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QTapAndHoldGesture_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QTapAndHoldGesture_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTapAndHoldGesture) Delete() {
	C.QTapAndHoldGesture_Delete(this.h)
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
	gestures_CArray := (*[0xffff]*C.QGesture)(C.malloc(C.ulong(8 * len(gestures))))
	defer C.free(unsafe.Pointer(gestures_CArray))
	for i := range gestures {
		gestures_CArray[i] = gestures[i].cPointer()
	}
	ret := C.QGestureEvent_new(&gestures_CArray[0], C.ulong(len(gestures)))
	return newQGestureEvent(ret)
}

// NewQGestureEvent2 constructs a new QGestureEvent object.
func NewQGestureEvent2(param1 *QGestureEvent) *QGestureEvent {
	ret := C.QGestureEvent_new2(param1.cPointer())
	return newQGestureEvent(ret)
}

func (this *QGestureEvent) Gestures() []*QGesture {
	var _out **C.QGesture = nil
	var _out_len C.size_t = 0
	C.QGestureEvent_Gestures(this.h, &_out, &_out_len)
	ret := make([]*QGesture, int(_out_len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGesture(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGestureEvent) Gesture(typeVal uintptr) *QGesture {
	ret := C.QGestureEvent_Gesture(this.h, (C.uintptr_t)(typeVal))
	return newQGesture_U(unsafe.Pointer(ret))
}

func (this *QGestureEvent) ActiveGestures() []*QGesture {
	var _out **C.QGesture = nil
	var _out_len C.size_t = 0
	C.QGestureEvent_ActiveGestures(this.h, &_out, &_out_len)
	ret := make([]*QGesture, int(_out_len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGesture(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGestureEvent) CanceledGestures() []*QGesture {
	var _out **C.QGesture = nil
	var _out_len C.size_t = 0
	C.QGestureEvent_CanceledGestures(this.h, &_out, &_out_len)
	ret := make([]*QGesture, int(_out_len))
	_outCast := (*[0xffff]*C.QGesture)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = newQGesture(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
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
	ret := C.QGestureEvent_IsAccepted(this.h, param1.cPointer())
	return (bool)(ret)
}

func (this *QGestureEvent) SetAccepted2(param1 uintptr, param2 bool) {
	C.QGestureEvent_SetAccepted2(this.h, (C.uintptr_t)(param1), (C.bool)(param2))
}

func (this *QGestureEvent) AcceptWithQtGestureType(param1 uintptr) {
	C.QGestureEvent_AcceptWithQtGestureType(this.h, (C.uintptr_t)(param1))
}

func (this *QGestureEvent) IgnoreWithQtGestureType(param1 uintptr) {
	C.QGestureEvent_IgnoreWithQtGestureType(this.h, (C.uintptr_t)(param1))
}

func (this *QGestureEvent) IsAcceptedWithQtGestureType(param1 uintptr) bool {
	ret := C.QGestureEvent_IsAcceptedWithQtGestureType(this.h, (C.uintptr_t)(param1))
	return (bool)(ret)
}

func (this *QGestureEvent) SetWidget(widget *QWidget) {
	C.QGestureEvent_SetWidget(this.h, widget.cPointer())
}

func (this *QGestureEvent) Widget() *QWidget {
	ret := C.QGestureEvent_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QGestureEvent) MapToGraphicsScene(gesturePoint *QPointF) *QPointF {
	ret := C.QGestureEvent_MapToGraphicsScene(this.h, gesturePoint.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGestureEvent) Delete() {
	C.QGestureEvent_Delete(this.h)
}
