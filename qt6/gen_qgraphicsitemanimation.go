package qt6

/*

#include "gen_qgraphicsitemanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsItemAnimation struct {
	h *C.QGraphicsItemAnimation
	*QObject
}

func (this *QGraphicsItemAnimation) cPointer() *C.QGraphicsItemAnimation {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsItemAnimation) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsItemAnimation(h *C.QGraphicsItemAnimation) *QGraphicsItemAnimation {
	if h == nil {
		return nil
	}
	return &QGraphicsItemAnimation{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsItemAnimation(h unsafe.Pointer) *QGraphicsItemAnimation {
	return newQGraphicsItemAnimation((*C.QGraphicsItemAnimation)(h))
}

// NewQGraphicsItemAnimation constructs a new QGraphicsItemAnimation object.
func NewQGraphicsItemAnimation() *QGraphicsItemAnimation {
	ret := C.QGraphicsItemAnimation_new()
	return newQGraphicsItemAnimation(ret)
}

// NewQGraphicsItemAnimation2 constructs a new QGraphicsItemAnimation object.
func NewQGraphicsItemAnimation2(parent *QObject) *QGraphicsItemAnimation {
	ret := C.QGraphicsItemAnimation_new2(parent.cPointer())
	return newQGraphicsItemAnimation(ret)
}

func (this *QGraphicsItemAnimation) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsItemAnimation_MetaObject(this.h)))
}

func (this *QGraphicsItemAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsItemAnimation_Metacast(this.h, param1_Cstring))
}

func QGraphicsItemAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItemAnimation) Item() *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsItemAnimation_Item(this.h)))
}

func (this *QGraphicsItemAnimation) SetItem(item *QGraphicsItem) {
	C.QGraphicsItemAnimation_SetItem(this.h, item.cPointer())
}

func (this *QGraphicsItemAnimation) TimeLine() *QTimeLine {
	return UnsafeNewQTimeLine(unsafe.Pointer(C.QGraphicsItemAnimation_TimeLine(this.h)))
}

func (this *QGraphicsItemAnimation) SetTimeLine(timeLine *QTimeLine) {
	C.QGraphicsItemAnimation_SetTimeLine(this.h, timeLine.cPointer())
}

func (this *QGraphicsItemAnimation) PosAt(step float64) *QPointF {
	_ret := C.QGraphicsItemAnimation_PosAt(this.h, (C.double)(step))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) SetPosAt(step float64, pos *QPointF) {
	C.QGraphicsItemAnimation_SetPosAt(this.h, (C.double)(step), pos.cPointer())
}

func (this *QGraphicsItemAnimation) TransformAt(step float64) *QTransform {
	_ret := C.QGraphicsItemAnimation_TransformAt(this.h, (C.double)(step))
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) RotationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_RotationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) SetRotationAt(step float64, angle float64) {
	C.QGraphicsItemAnimation_SetRotationAt(this.h, (C.double)(step), (C.double)(angle))
}

func (this *QGraphicsItemAnimation) XTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_XTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) YTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_YTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) SetTranslationAt(step float64, dx float64, dy float64) {
	C.QGraphicsItemAnimation_SetTranslationAt(this.h, (C.double)(step), (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItemAnimation) VerticalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_VerticalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_HorizontalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) SetScaleAt(step float64, sx float64, sy float64) {
	C.QGraphicsItemAnimation_SetScaleAt(this.h, (C.double)(step), (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsItemAnimation) VerticalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_VerticalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_HorizontalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) SetShearAt(step float64, sh float64, sv float64) {
	C.QGraphicsItemAnimation_SetShearAt(this.h, (C.double)(step), (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsItemAnimation) Clear() {
	C.QGraphicsItemAnimation_Clear(this.h)
}

func (this *QGraphicsItemAnimation) SetStep(x float64) {
	C.QGraphicsItemAnimation_SetStep(this.h, (C.double)(x))
}

func QGraphicsItemAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsItemAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsItemAnimation) Delete() {
	C.QGraphicsItemAnimation_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItemAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItemAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
