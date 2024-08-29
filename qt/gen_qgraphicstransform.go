package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicstransform.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsTransform struct {
	h *C.QGraphicsTransform
	*QObject
}

func (this *QGraphicsTransform) cPointer() *C.QGraphicsTransform {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsTransform(h *C.QGraphicsTransform) *QGraphicsTransform {
	return &QGraphicsTransform{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGraphicsTransform_U(h unsafe.Pointer) *QGraphicsTransform {
	return newQGraphicsTransform((*C.QGraphicsTransform)(h))
}

func (this *QGraphicsTransform) MetaObject() *QMetaObject {
	ret := C.QGraphicsTransform_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsTransform_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTransform_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTransform) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsTransform_ApplyTo(this.h, matrix.cPointer())
}

func QGraphicsTransform_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTransform_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTransform_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsTransform_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsTransform_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsTransform) Delete() {
	C.QGraphicsTransform_Delete(this.h)
}

type QGraphicsScale struct {
	h *C.QGraphicsScale
	*QGraphicsTransform
}

func (this *QGraphicsScale) cPointer() *C.QGraphicsScale {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsScale(h *C.QGraphicsScale) *QGraphicsScale {
	return &QGraphicsScale{h: h, QGraphicsTransform: newQGraphicsTransform_U(unsafe.Pointer(h))}
}

func newQGraphicsScale_U(h unsafe.Pointer) *QGraphicsScale {
	return newQGraphicsScale((*C.QGraphicsScale)(h))
}

// NewQGraphicsScale constructs a new QGraphicsScale object.
func NewQGraphicsScale() *QGraphicsScale {
	ret := C.QGraphicsScale_new()
	return newQGraphicsScale(ret)
}

// NewQGraphicsScale2 constructs a new QGraphicsScale object.
func NewQGraphicsScale2(parent *QObject) *QGraphicsScale {
	ret := C.QGraphicsScale_new2(parent.cPointer())
	return newQGraphicsScale(ret)
}

func (this *QGraphicsScale) MetaObject() *QMetaObject {
	ret := C.QGraphicsScale_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsScale_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScale_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScale) Origin() *QVector3D {
	ret := C.QGraphicsScale_Origin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsScale) SetOrigin(point *QVector3D) {
	C.QGraphicsScale_SetOrigin(this.h, point.cPointer())
}

func (this *QGraphicsScale) XScale() float64 {
	ret := C.QGraphicsScale_XScale(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScale) SetXScale(xScale float64) {
	C.QGraphicsScale_SetXScale(this.h, (C.double)(xScale))
}

func (this *QGraphicsScale) YScale() float64 {
	ret := C.QGraphicsScale_YScale(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScale) SetYScale(yScale float64) {
	C.QGraphicsScale_SetYScale(this.h, (C.double)(yScale))
}

func (this *QGraphicsScale) ZScale() float64 {
	ret := C.QGraphicsScale_ZScale(this.h)
	return (float64)(ret)
}

func (this *QGraphicsScale) SetZScale(zScale float64) {
	C.QGraphicsScale_SetZScale(this.h, (C.double)(zScale))
}

func (this *QGraphicsScale) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsScale_ApplyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsScale) OriginChanged() {
	C.QGraphicsScale_OriginChanged(this.h)
}

func (this *QGraphicsScale) OnOriginChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScale_connect_OriginChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScale) XScaleChanged() {
	C.QGraphicsScale_XScaleChanged(this.h)
}

func (this *QGraphicsScale) OnXScaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScale_connect_XScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScale) YScaleChanged() {
	C.QGraphicsScale_YScaleChanged(this.h)
}

func (this *QGraphicsScale) OnYScaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScale_connect_YScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScale) ZScaleChanged() {
	C.QGraphicsScale_ZScaleChanged(this.h)
}

func (this *QGraphicsScale) OnZScaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScale_connect_ZScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsScale) ScaleChanged() {
	C.QGraphicsScale_ScaleChanged(this.h)
}

func (this *QGraphicsScale) OnScaleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsScale_connect_ScaleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsScale_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScale_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScale_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsScale_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsScale_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsScale) Delete() {
	C.QGraphicsScale_Delete(this.h)
}

type QGraphicsRotation struct {
	h *C.QGraphicsRotation
	*QGraphicsTransform
}

func (this *QGraphicsRotation) cPointer() *C.QGraphicsRotation {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsRotation(h *C.QGraphicsRotation) *QGraphicsRotation {
	return &QGraphicsRotation{h: h, QGraphicsTransform: newQGraphicsTransform_U(unsafe.Pointer(h))}
}

func newQGraphicsRotation_U(h unsafe.Pointer) *QGraphicsRotation {
	return newQGraphicsRotation((*C.QGraphicsRotation)(h))
}

// NewQGraphicsRotation constructs a new QGraphicsRotation object.
func NewQGraphicsRotation() *QGraphicsRotation {
	ret := C.QGraphicsRotation_new()
	return newQGraphicsRotation(ret)
}

// NewQGraphicsRotation2 constructs a new QGraphicsRotation object.
func NewQGraphicsRotation2(parent *QObject) *QGraphicsRotation {
	ret := C.QGraphicsRotation_new2(parent.cPointer())
	return newQGraphicsRotation(ret)
}

func (this *QGraphicsRotation) MetaObject() *QMetaObject {
	ret := C.QGraphicsRotation_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsRotation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsRotation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsRotation) Origin() *QVector3D {
	ret := C.QGraphicsRotation_Origin(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRotation) SetOrigin(point *QVector3D) {
	C.QGraphicsRotation_SetOrigin(this.h, point.cPointer())
}

func (this *QGraphicsRotation) Angle() float64 {
	ret := C.QGraphicsRotation_Angle(this.h)
	return (float64)(ret)
}

func (this *QGraphicsRotation) SetAngle(angle float64) {
	C.QGraphicsRotation_SetAngle(this.h, (C.double)(angle))
}

func (this *QGraphicsRotation) Axis() *QVector3D {
	ret := C.QGraphicsRotation_Axis(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector3D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector3D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsRotation) SetAxis(axis *QVector3D) {
	C.QGraphicsRotation_SetAxis(this.h, axis.cPointer())
}

func (this *QGraphicsRotation) SetAxisWithAxis(axis uintptr) {
	C.QGraphicsRotation_SetAxisWithAxis(this.h, (C.uintptr_t)(axis))
}

func (this *QGraphicsRotation) ApplyTo(matrix *QMatrix4x4) {
	C.QGraphicsRotation_ApplyTo(this.h, matrix.cPointer())
}

func (this *QGraphicsRotation) OriginChanged() {
	C.QGraphicsRotation_OriginChanged(this.h)
}

func (this *QGraphicsRotation) OnOriginChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsRotation_connect_OriginChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsRotation) AngleChanged() {
	C.QGraphicsRotation_AngleChanged(this.h)
}

func (this *QGraphicsRotation) OnAngleChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsRotation_connect_AngleChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsRotation) AxisChanged() {
	C.QGraphicsRotation_AxisChanged(this.h)
}

func (this *QGraphicsRotation) OnAxisChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsRotation_connect_AxisChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsRotation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsRotation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsRotation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsRotation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsRotation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsRotation) Delete() {
	C.QGraphicsRotation_Delete(this.h)
}
