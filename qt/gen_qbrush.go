package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qbrush.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBrush struct {
	h *C.QBrush
}

func (this *QBrush) cPointer() *C.QBrush {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBrush(h *C.QBrush) *QBrush {
	if h == nil {
		return nil
	}
	return &QBrush{h: h}
}

func newQBrush_U(h unsafe.Pointer) *QBrush {
	return newQBrush((*C.QBrush)(h))
}

// NewQBrush constructs a new QBrush object.
func NewQBrush() *QBrush {
	ret := C.QBrush_new()
	return newQBrush(ret)
}

// NewQBrush2 constructs a new QBrush object.
func NewQBrush2(bs uintptr) *QBrush {
	ret := C.QBrush_new2((C.uintptr_t)(bs))
	return newQBrush(ret)
}

// NewQBrush3 constructs a new QBrush object.
func NewQBrush3(color *QColor) *QBrush {
	ret := C.QBrush_new3(color.cPointer())
	return newQBrush(ret)
}

// NewQBrush4 constructs a new QBrush object.
func NewQBrush4(color uintptr) *QBrush {
	ret := C.QBrush_new4((C.uintptr_t)(color))
	return newQBrush(ret)
}

// NewQBrush5 constructs a new QBrush object.
func NewQBrush5(color *QColor, pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new5(color.cPointer(), pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush6 constructs a new QBrush object.
func NewQBrush6(color uintptr, pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new6((C.uintptr_t)(color), pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush7 constructs a new QBrush object.
func NewQBrush7(pixmap *QPixmap) *QBrush {
	ret := C.QBrush_new7(pixmap.cPointer())
	return newQBrush(ret)
}

// NewQBrush8 constructs a new QBrush object.
func NewQBrush8(image *QImage) *QBrush {
	ret := C.QBrush_new8(image.cPointer())
	return newQBrush(ret)
}

// NewQBrush9 constructs a new QBrush object.
func NewQBrush9(brush *QBrush) *QBrush {
	ret := C.QBrush_new9(brush.cPointer())
	return newQBrush(ret)
}

// NewQBrush10 constructs a new QBrush object.
func NewQBrush10(gradient *QGradient) *QBrush {
	ret := C.QBrush_new10(gradient.cPointer())
	return newQBrush(ret)
}

// NewQBrush11 constructs a new QBrush object.
func NewQBrush11(color *QColor, bs uintptr) *QBrush {
	ret := C.QBrush_new11(color.cPointer(), (C.uintptr_t)(bs))
	return newQBrush(ret)
}

// NewQBrush12 constructs a new QBrush object.
func NewQBrush12(color uintptr, bs uintptr) *QBrush {
	ret := C.QBrush_new12((C.uintptr_t)(color), (C.uintptr_t)(bs))
	return newQBrush(ret)
}

func (this *QBrush) OperatorAssign(brush *QBrush) {
	C.QBrush_OperatorAssign(this.h, brush.cPointer())
}

func (this *QBrush) Swap(other *QBrush) {
	C.QBrush_Swap(this.h, other.cPointer())
}

func (this *QBrush) Style() uintptr {
	ret := C.QBrush_Style(this.h)
	return (uintptr)(ret)
}

func (this *QBrush) SetStyle(style uintptr) {
	C.QBrush_SetStyle(this.h, (C.uintptr_t)(style))
}

func (this *QBrush) Matrix() *QMatrix {
	ret := C.QBrush_Matrix(this.h)
	return newQMatrix_U(unsafe.Pointer(ret))
}

func (this *QBrush) SetMatrix(mat *QMatrix) {
	C.QBrush_SetMatrix(this.h, mat.cPointer())
}

func (this *QBrush) Transform() *QTransform {
	ret := C.QBrush_Transform(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQTransform(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QTransform) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBrush) SetTransform(transform *QTransform) {
	C.QBrush_SetTransform(this.h, transform.cPointer())
}

func (this *QBrush) Texture() *QPixmap {
	ret := C.QBrush_Texture(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPixmap(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPixmap) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBrush) SetTexture(pixmap *QPixmap) {
	C.QBrush_SetTexture(this.h, pixmap.cPointer())
}

func (this *QBrush) TextureImage() *QImage {
	ret := C.QBrush_TextureImage(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQImage(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QImage) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QBrush) SetTextureImage(image *QImage) {
	C.QBrush_SetTextureImage(this.h, image.cPointer())
}

func (this *QBrush) Color() *QColor {
	ret := C.QBrush_Color(this.h)
	return newQColor_U(unsafe.Pointer(ret))
}

func (this *QBrush) SetColor(color *QColor) {
	C.QBrush_SetColor(this.h, color.cPointer())
}

func (this *QBrush) SetColorWithColor(color uintptr) {
	C.QBrush_SetColorWithColor(this.h, (C.uintptr_t)(color))
}

func (this *QBrush) Gradient() *QGradient {
	ret := C.QBrush_Gradient(this.h)
	return newQGradient_U(unsafe.Pointer(ret))
}

func (this *QBrush) IsOpaque() bool {
	ret := C.QBrush_IsOpaque(this.h)
	return (bool)(ret)
}

func (this *QBrush) OperatorEqual(b *QBrush) bool {
	ret := C.QBrush_OperatorEqual(this.h, b.cPointer())
	return (bool)(ret)
}

func (this *QBrush) OperatorNotEqual(b *QBrush) bool {
	ret := C.QBrush_OperatorNotEqual(this.h, b.cPointer())
	return (bool)(ret)
}

func (this *QBrush) IsDetached() bool {
	ret := C.QBrush_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QBrush) Delete() {
	C.QBrush_Delete(this.h)
}

type QBrushData struct {
	h *C.QBrushData
}

func (this *QBrushData) cPointer() *C.QBrushData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQBrushData(h *C.QBrushData) *QBrushData {
	if h == nil {
		return nil
	}
	return &QBrushData{h: h}
}

func newQBrushData_U(h unsafe.Pointer) *QBrushData {
	return newQBrushData((*C.QBrushData)(h))
}

// NewQBrushData constructs a new QBrushData object.
func NewQBrushData(param1 *QBrushData) *QBrushData {
	ret := C.QBrushData_new(param1.cPointer())
	return newQBrushData(ret)
}

func (this *QBrushData) OperatorAssign(param1 *QBrushData) {
	C.QBrushData_OperatorAssign(this.h, param1.cPointer())
}

func (this *QBrushData) Delete() {
	C.QBrushData_Delete(this.h)
}

type QGradient struct {
	h *C.QGradient
}

func (this *QGradient) cPointer() *C.QGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGradient(h *C.QGradient) *QGradient {
	if h == nil {
		return nil
	}
	return &QGradient{h: h}
}

func newQGradient_U(h unsafe.Pointer) *QGradient {
	return newQGradient((*C.QGradient)(h))
}

// NewQGradient constructs a new QGradient object.
func NewQGradient() *QGradient {
	ret := C.QGradient_new()
	return newQGradient(ret)
}

// NewQGradient2 constructs a new QGradient object.
func NewQGradient2(param1 uintptr) *QGradient {
	ret := C.QGradient_new2((C.uintptr_t)(param1))
	return newQGradient(ret)
}

// NewQGradient3 constructs a new QGradient object.
func NewQGradient3(param1 *QGradient) *QGradient {
	ret := C.QGradient_new3(param1.cPointer())
	return newQGradient(ret)
}

func (this *QGradient) Type() uintptr {
	ret := C.QGradient_Type(this.h)
	return (uintptr)(ret)
}

func (this *QGradient) SetSpread(spread uintptr) {
	C.QGradient_SetSpread(this.h, (C.uintptr_t)(spread))
}

func (this *QGradient) Spread() uintptr {
	ret := C.QGradient_Spread(this.h)
	return (uintptr)(ret)
}

func (this *QGradient) SetColorAt(pos float64, color *QColor) {
	C.QGradient_SetColorAt(this.h, (C.double)(pos), color.cPointer())
}

func (this *QGradient) CoordinateMode() uintptr {
	ret := C.QGradient_CoordinateMode(this.h)
	return (uintptr)(ret)
}

func (this *QGradient) SetCoordinateMode(mode uintptr) {
	C.QGradient_SetCoordinateMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGradient) InterpolationMode() uintptr {
	ret := C.QGradient_InterpolationMode(this.h)
	return (uintptr)(ret)
}

func (this *QGradient) SetInterpolationMode(mode uintptr) {
	C.QGradient_SetInterpolationMode(this.h, (C.uintptr_t)(mode))
}

func (this *QGradient) OperatorEqual(gradient *QGradient) bool {
	ret := C.QGradient_OperatorEqual(this.h, gradient.cPointer())
	return (bool)(ret)
}

func (this *QGradient) OperatorNotEqual(other *QGradient) bool {
	ret := C.QGradient_OperatorNotEqual(this.h, other.cPointer())
	return (bool)(ret)
}

func (this *QGradient) Delete() {
	C.QGradient_Delete(this.h)
}

type QLinearGradient struct {
	h *C.QLinearGradient
	*QGradient
}

func (this *QLinearGradient) cPointer() *C.QLinearGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func newQLinearGradient(h *C.QLinearGradient) *QLinearGradient {
	if h == nil {
		return nil
	}
	return &QLinearGradient{h: h, QGradient: newQGradient_U(unsafe.Pointer(h))}
}

func newQLinearGradient_U(h unsafe.Pointer) *QLinearGradient {
	return newQLinearGradient((*C.QLinearGradient)(h))
}

// NewQLinearGradient constructs a new QLinearGradient object.
func NewQLinearGradient() *QLinearGradient {
	ret := C.QLinearGradient_new()
	return newQLinearGradient(ret)
}

// NewQLinearGradient2 constructs a new QLinearGradient object.
func NewQLinearGradient2(start *QPointF, finalStop *QPointF) *QLinearGradient {
	ret := C.QLinearGradient_new2(start.cPointer(), finalStop.cPointer())
	return newQLinearGradient(ret)
}

// NewQLinearGradient3 constructs a new QLinearGradient object.
func NewQLinearGradient3(xStart float64, yStart float64, xFinalStop float64, yFinalStop float64) *QLinearGradient {
	ret := C.QLinearGradient_new3((C.double)(xStart), (C.double)(yStart), (C.double)(xFinalStop), (C.double)(yFinalStop))
	return newQLinearGradient(ret)
}

// NewQLinearGradient4 constructs a new QLinearGradient object.
func NewQLinearGradient4(param1 *QLinearGradient) *QLinearGradient {
	ret := C.QLinearGradient_new4(param1.cPointer())
	return newQLinearGradient(ret)
}

func (this *QLinearGradient) Start() *QPointF {
	ret := C.QLinearGradient_Start(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLinearGradient) SetStart(start *QPointF) {
	C.QLinearGradient_SetStart(this.h, start.cPointer())
}

func (this *QLinearGradient) SetStart2(x float64, y float64) {
	C.QLinearGradient_SetStart2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QLinearGradient) FinalStop() *QPointF {
	ret := C.QLinearGradient_FinalStop(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QLinearGradient) SetFinalStop(stop *QPointF) {
	C.QLinearGradient_SetFinalStop(this.h, stop.cPointer())
}

func (this *QLinearGradient) SetFinalStop2(x float64, y float64) {
	C.QLinearGradient_SetFinalStop2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QLinearGradient) Delete() {
	C.QLinearGradient_Delete(this.h)
}

type QRadialGradient struct {
	h *C.QRadialGradient
	*QGradient
}

func (this *QRadialGradient) cPointer() *C.QRadialGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func newQRadialGradient(h *C.QRadialGradient) *QRadialGradient {
	if h == nil {
		return nil
	}
	return &QRadialGradient{h: h, QGradient: newQGradient_U(unsafe.Pointer(h))}
}

func newQRadialGradient_U(h unsafe.Pointer) *QRadialGradient {
	return newQRadialGradient((*C.QRadialGradient)(h))
}

// NewQRadialGradient constructs a new QRadialGradient object.
func NewQRadialGradient() *QRadialGradient {
	ret := C.QRadialGradient_new()
	return newQRadialGradient(ret)
}

// NewQRadialGradient2 constructs a new QRadialGradient object.
func NewQRadialGradient2(center *QPointF, radius float64, focalPoint *QPointF) *QRadialGradient {
	ret := C.QRadialGradient_new2(center.cPointer(), (C.double)(radius), focalPoint.cPointer())
	return newQRadialGradient(ret)
}

// NewQRadialGradient3 constructs a new QRadialGradient object.
func NewQRadialGradient3(cx float64, cy float64, radius float64, fx float64, fy float64) *QRadialGradient {
	ret := C.QRadialGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(radius), (C.double)(fx), (C.double)(fy))
	return newQRadialGradient(ret)
}

// NewQRadialGradient4 constructs a new QRadialGradient object.
func NewQRadialGradient4(center *QPointF, radius float64) *QRadialGradient {
	ret := C.QRadialGradient_new4(center.cPointer(), (C.double)(radius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient5 constructs a new QRadialGradient object.
func NewQRadialGradient5(cx float64, cy float64, radius float64) *QRadialGradient {
	ret := C.QRadialGradient_new5((C.double)(cx), (C.double)(cy), (C.double)(radius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient6 constructs a new QRadialGradient object.
func NewQRadialGradient6(center *QPointF, centerRadius float64, focalPoint *QPointF, focalRadius float64) *QRadialGradient {
	ret := C.QRadialGradient_new6(center.cPointer(), (C.double)(centerRadius), focalPoint.cPointer(), (C.double)(focalRadius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient7 constructs a new QRadialGradient object.
func NewQRadialGradient7(cx float64, cy float64, centerRadius float64, fx float64, fy float64, focalRadius float64) *QRadialGradient {
	ret := C.QRadialGradient_new7((C.double)(cx), (C.double)(cy), (C.double)(centerRadius), (C.double)(fx), (C.double)(fy), (C.double)(focalRadius))
	return newQRadialGradient(ret)
}

// NewQRadialGradient8 constructs a new QRadialGradient object.
func NewQRadialGradient8(param1 *QRadialGradient) *QRadialGradient {
	ret := C.QRadialGradient_new8(param1.cPointer())
	return newQRadialGradient(ret)
}

func (this *QRadialGradient) Center() *QPointF {
	ret := C.QRadialGradient_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRadialGradient) SetCenter(center *QPointF) {
	C.QRadialGradient_SetCenter(this.h, center.cPointer())
}

func (this *QRadialGradient) SetCenter2(x float64, y float64) {
	C.QRadialGradient_SetCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) FocalPoint() *QPointF {
	ret := C.QRadialGradient_FocalPoint(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QRadialGradient) SetFocalPoint(focalPoint *QPointF) {
	C.QRadialGradient_SetFocalPoint(this.h, focalPoint.cPointer())
}

func (this *QRadialGradient) SetFocalPoint2(x float64, y float64) {
	C.QRadialGradient_SetFocalPoint2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QRadialGradient) Radius() float64 {
	ret := C.QRadialGradient_Radius(this.h)
	return (float64)(ret)
}

func (this *QRadialGradient) SetRadius(radius float64) {
	C.QRadialGradient_SetRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) CenterRadius() float64 {
	ret := C.QRadialGradient_CenterRadius(this.h)
	return (float64)(ret)
}

func (this *QRadialGradient) SetCenterRadius(radius float64) {
	C.QRadialGradient_SetCenterRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) FocalRadius() float64 {
	ret := C.QRadialGradient_FocalRadius(this.h)
	return (float64)(ret)
}

func (this *QRadialGradient) SetFocalRadius(radius float64) {
	C.QRadialGradient_SetFocalRadius(this.h, (C.double)(radius))
}

func (this *QRadialGradient) Delete() {
	C.QRadialGradient_Delete(this.h)
}

type QConicalGradient struct {
	h *C.QConicalGradient
	*QGradient
}

func (this *QConicalGradient) cPointer() *C.QConicalGradient {
	if this == nil {
		return nil
	}
	return this.h
}

func newQConicalGradient(h *C.QConicalGradient) *QConicalGradient {
	if h == nil {
		return nil
	}
	return &QConicalGradient{h: h, QGradient: newQGradient_U(unsafe.Pointer(h))}
}

func newQConicalGradient_U(h unsafe.Pointer) *QConicalGradient {
	return newQConicalGradient((*C.QConicalGradient)(h))
}

// NewQConicalGradient constructs a new QConicalGradient object.
func NewQConicalGradient() *QConicalGradient {
	ret := C.QConicalGradient_new()
	return newQConicalGradient(ret)
}

// NewQConicalGradient2 constructs a new QConicalGradient object.
func NewQConicalGradient2(center *QPointF, startAngle float64) *QConicalGradient {
	ret := C.QConicalGradient_new2(center.cPointer(), (C.double)(startAngle))
	return newQConicalGradient(ret)
}

// NewQConicalGradient3 constructs a new QConicalGradient object.
func NewQConicalGradient3(cx float64, cy float64, startAngle float64) *QConicalGradient {
	ret := C.QConicalGradient_new3((C.double)(cx), (C.double)(cy), (C.double)(startAngle))
	return newQConicalGradient(ret)
}

// NewQConicalGradient4 constructs a new QConicalGradient object.
func NewQConicalGradient4(param1 *QConicalGradient) *QConicalGradient {
	ret := C.QConicalGradient_new4(param1.cPointer())
	return newQConicalGradient(ret)
}

func (this *QConicalGradient) Center() *QPointF {
	ret := C.QConicalGradient_Center(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QConicalGradient) SetCenter(center *QPointF) {
	C.QConicalGradient_SetCenter(this.h, center.cPointer())
}

func (this *QConicalGradient) SetCenter2(x float64, y float64) {
	C.QConicalGradient_SetCenter2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QConicalGradient) Angle() float64 {
	ret := C.QConicalGradient_Angle(this.h)
	return (float64)(ret)
}

func (this *QConicalGradient) SetAngle(angle float64) {
	C.QConicalGradient_SetAngle(this.h, (C.double)(angle))
}

func (this *QConicalGradient) Delete() {
	C.QConicalGradient_Delete(this.h)
}

type QGradient__QGradientData struct {
	h *C.QGradient__QGradientData
}

func (this *QGradient__QGradientData) cPointer() *C.QGradient__QGradientData {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGradient__QGradientData(h *C.QGradient__QGradientData) *QGradient__QGradientData {
	if h == nil {
		return nil
	}
	return &QGradient__QGradientData{h: h}
}

func newQGradient__QGradientData_U(h unsafe.Pointer) *QGradient__QGradientData {
	return newQGradient__QGradientData((*C.QGradient__QGradientData)(h))
}

// NewQGradient__QGradientData constructs a new QGradient::QGradientData object.
func NewQGradient__QGradientData(param1 *QGradient__QGradientData) *QGradient__QGradientData {
	ret := C.QGradient__QGradientData_new(param1.cPointer())
	return newQGradient__QGradientData(ret)
}

func (this *QGradient__QGradientData) Delete() {
	C.QGradient__QGradientData_Delete(this.h)
}
