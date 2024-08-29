package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicseffect.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsEffect struct {
	h *C.QGraphicsEffect
	*QObject
}

func (this *QGraphicsEffect) cPointer() *C.QGraphicsEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsEffect(h *C.QGraphicsEffect) *QGraphicsEffect {
	return &QGraphicsEffect{h: h, QObject: newQObject_U(unsafe.Pointer(h))}
}

func newQGraphicsEffect_U(h unsafe.Pointer) *QGraphicsEffect {
	return newQGraphicsEffect((*C.QGraphicsEffect)(h))
}

func (this *QGraphicsEffect) MetaObject() *QMetaObject {
	ret := C.QGraphicsEffect_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsEffect) BoundingRectFor(sourceRect *QRectF) *QRectF {
	ret := C.QGraphicsEffect_BoundingRectFor(this.h, sourceRect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEffect) BoundingRect() *QRectF {
	ret := C.QGraphicsEffect_BoundingRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsEffect) IsEnabled() bool {
	ret := C.QGraphicsEffect_IsEnabled(this.h)
	return (bool)(ret)
}

func (this *QGraphicsEffect) SetEnabled(enable bool) {
	C.QGraphicsEffect_SetEnabled(this.h, (C.bool)(enable))
}

func (this *QGraphicsEffect) Update() {
	C.QGraphicsEffect_Update(this.h)
}

func (this *QGraphicsEffect) EnabledChanged(enabled bool) {
	C.QGraphicsEffect_EnabledChanged(this.h, (C.bool)(enabled))
}

func (this *QGraphicsEffect) OnEnabledChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsEffect_connect_EnabledChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsEffect) Delete() {
	C.QGraphicsEffect_Delete(this.h)
}

type QGraphicsColorizeEffect struct {
	h *C.QGraphicsColorizeEffect
	*QGraphicsEffect
}

func (this *QGraphicsColorizeEffect) cPointer() *C.QGraphicsColorizeEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsColorizeEffect(h *C.QGraphicsColorizeEffect) *QGraphicsColorizeEffect {
	return &QGraphicsColorizeEffect{h: h, QGraphicsEffect: newQGraphicsEffect_U(unsafe.Pointer(h))}
}

func newQGraphicsColorizeEffect_U(h unsafe.Pointer) *QGraphicsColorizeEffect {
	return newQGraphicsColorizeEffect((*C.QGraphicsColorizeEffect)(h))
}

// NewQGraphicsColorizeEffect constructs a new QGraphicsColorizeEffect object.
func NewQGraphicsColorizeEffect() *QGraphicsColorizeEffect {
	ret := C.QGraphicsColorizeEffect_new()
	return newQGraphicsColorizeEffect(ret)
}

// NewQGraphicsColorizeEffect2 constructs a new QGraphicsColorizeEffect object.
func NewQGraphicsColorizeEffect2(parent *QObject) *QGraphicsColorizeEffect {
	ret := C.QGraphicsColorizeEffect_new2(parent.cPointer())
	return newQGraphicsColorizeEffect(ret)
}

func (this *QGraphicsColorizeEffect) MetaObject() *QMetaObject {
	ret := C.QGraphicsColorizeEffect_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsColorizeEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsColorizeEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsColorizeEffect) Color() *QColor {
	ret := C.QGraphicsColorizeEffect_Color(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsColorizeEffect) Strength() float64 {
	ret := C.QGraphicsColorizeEffect_Strength(this.h)
	return (float64)(ret)
}

func (this *QGraphicsColorizeEffect) SetColor(c *QColor) {
	C.QGraphicsColorizeEffect_SetColor(this.h, c.cPointer())
}

func (this *QGraphicsColorizeEffect) SetStrength(strength float64) {
	C.QGraphicsColorizeEffect_SetStrength(this.h, (C.double)(strength))
}

func (this *QGraphicsColorizeEffect) ColorChanged(color *QColor) {
	C.QGraphicsColorizeEffect_ColorChanged(this.h, color.cPointer())
}

func (this *QGraphicsColorizeEffect) OnColorChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsColorizeEffect_connect_ColorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsColorizeEffect) StrengthChanged(strength float64) {
	C.QGraphicsColorizeEffect_StrengthChanged(this.h, (C.double)(strength))
}

func (this *QGraphicsColorizeEffect) OnStrengthChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsColorizeEffect_connect_StrengthChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsColorizeEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsColorizeEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsColorizeEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsColorizeEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsColorizeEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsColorizeEffect) Delete() {
	C.QGraphicsColorizeEffect_Delete(this.h)
}

type QGraphicsBlurEffect struct {
	h *C.QGraphicsBlurEffect
	*QGraphicsEffect
}

func (this *QGraphicsBlurEffect) cPointer() *C.QGraphicsBlurEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsBlurEffect(h *C.QGraphicsBlurEffect) *QGraphicsBlurEffect {
	return &QGraphicsBlurEffect{h: h, QGraphicsEffect: newQGraphicsEffect_U(unsafe.Pointer(h))}
}

func newQGraphicsBlurEffect_U(h unsafe.Pointer) *QGraphicsBlurEffect {
	return newQGraphicsBlurEffect((*C.QGraphicsBlurEffect)(h))
}

// NewQGraphicsBlurEffect constructs a new QGraphicsBlurEffect object.
func NewQGraphicsBlurEffect() *QGraphicsBlurEffect {
	ret := C.QGraphicsBlurEffect_new()
	return newQGraphicsBlurEffect(ret)
}

// NewQGraphicsBlurEffect2 constructs a new QGraphicsBlurEffect object.
func NewQGraphicsBlurEffect2(parent *QObject) *QGraphicsBlurEffect {
	ret := C.QGraphicsBlurEffect_new2(parent.cPointer())
	return newQGraphicsBlurEffect(ret)
}

func (this *QGraphicsBlurEffect) MetaObject() *QMetaObject {
	ret := C.QGraphicsBlurEffect_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsBlurEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsBlurEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsBlurEffect) BoundingRectFor(rect *QRectF) *QRectF {
	ret := C.QGraphicsBlurEffect_BoundingRectFor(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsBlurEffect) BlurRadius() float64 {
	ret := C.QGraphicsBlurEffect_BlurRadius(this.h)
	return (float64)(ret)
}

func (this *QGraphicsBlurEffect) BlurHints() int {
	ret := C.QGraphicsBlurEffect_BlurHints(this.h)
	return (int)(ret)
}

func (this *QGraphicsBlurEffect) SetBlurRadius(blurRadius float64) {
	C.QGraphicsBlurEffect_SetBlurRadius(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsBlurEffect) SetBlurHints(hints int) {
	C.QGraphicsBlurEffect_SetBlurHints(this.h, (C.int)(hints))
}

func (this *QGraphicsBlurEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsBlurEffect_BlurRadiusChanged(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsBlurEffect) OnBlurRadiusChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsBlurEffect_connect_BlurRadiusChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsBlurEffect) BlurHintsChanged(hints int) {
	C.QGraphicsBlurEffect_BlurHintsChanged(this.h, (C.int)(hints))
}

func (this *QGraphicsBlurEffect) OnBlurHintsChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsBlurEffect_connect_BlurHintsChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsBlurEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsBlurEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsBlurEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsBlurEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsBlurEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsBlurEffect) Delete() {
	C.QGraphicsBlurEffect_Delete(this.h)
}

type QGraphicsDropShadowEffect struct {
	h *C.QGraphicsDropShadowEffect
	*QGraphicsEffect
}

func (this *QGraphicsDropShadowEffect) cPointer() *C.QGraphicsDropShadowEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsDropShadowEffect(h *C.QGraphicsDropShadowEffect) *QGraphicsDropShadowEffect {
	return &QGraphicsDropShadowEffect{h: h, QGraphicsEffect: newQGraphicsEffect_U(unsafe.Pointer(h))}
}

func newQGraphicsDropShadowEffect_U(h unsafe.Pointer) *QGraphicsDropShadowEffect {
	return newQGraphicsDropShadowEffect((*C.QGraphicsDropShadowEffect)(h))
}

// NewQGraphicsDropShadowEffect constructs a new QGraphicsDropShadowEffect object.
func NewQGraphicsDropShadowEffect() *QGraphicsDropShadowEffect {
	ret := C.QGraphicsDropShadowEffect_new()
	return newQGraphicsDropShadowEffect(ret)
}

// NewQGraphicsDropShadowEffect2 constructs a new QGraphicsDropShadowEffect object.
func NewQGraphicsDropShadowEffect2(parent *QObject) *QGraphicsDropShadowEffect {
	ret := C.QGraphicsDropShadowEffect_new2(parent.cPointer())
	return newQGraphicsDropShadowEffect(ret)
}

func (this *QGraphicsDropShadowEffect) MetaObject() *QMetaObject {
	ret := C.QGraphicsDropShadowEffect_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsDropShadowEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsDropShadowEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsDropShadowEffect) BoundingRectFor(rect *QRectF) *QRectF {
	ret := C.QGraphicsDropShadowEffect_BoundingRectFor(this.h, rect.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsDropShadowEffect) Offset() *QPointF {
	ret := C.QGraphicsDropShadowEffect_Offset(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsDropShadowEffect) XOffset() float64 {
	ret := C.QGraphicsDropShadowEffect_XOffset(this.h)
	return (float64)(ret)
}

func (this *QGraphicsDropShadowEffect) YOffset() float64 {
	ret := C.QGraphicsDropShadowEffect_YOffset(this.h)
	return (float64)(ret)
}

func (this *QGraphicsDropShadowEffect) BlurRadius() float64 {
	ret := C.QGraphicsDropShadowEffect_BlurRadius(this.h)
	return (float64)(ret)
}

func (this *QGraphicsDropShadowEffect) Color() *QColor {
	ret := C.QGraphicsDropShadowEffect_Color(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQColor(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QColor) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsDropShadowEffect) SetOffset(ofs *QPointF) {
	C.QGraphicsDropShadowEffect_SetOffset(this.h, ofs.cPointer())
}

func (this *QGraphicsDropShadowEffect) SetOffset2(dx float64, dy float64) {
	C.QGraphicsDropShadowEffect_SetOffset2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsDropShadowEffect) SetOffsetWithQreal(d float64) {
	C.QGraphicsDropShadowEffect_SetOffsetWithQreal(this.h, (C.double)(d))
}

func (this *QGraphicsDropShadowEffect) SetXOffset(dx float64) {
	C.QGraphicsDropShadowEffect_SetXOffset(this.h, (C.double)(dx))
}

func (this *QGraphicsDropShadowEffect) SetYOffset(dy float64) {
	C.QGraphicsDropShadowEffect_SetYOffset(this.h, (C.double)(dy))
}

func (this *QGraphicsDropShadowEffect) SetBlurRadius(blurRadius float64) {
	C.QGraphicsDropShadowEffect_SetBlurRadius(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsDropShadowEffect) SetColor(color *QColor) {
	C.QGraphicsDropShadowEffect_SetColor(this.h, color.cPointer())
}

func (this *QGraphicsDropShadowEffect) OffsetChanged(offset *QPointF) {
	C.QGraphicsDropShadowEffect_OffsetChanged(this.h, offset.cPointer())
}

func (this *QGraphicsDropShadowEffect) OnOffsetChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsDropShadowEffect_connect_OffsetChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsDropShadowEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsDropShadowEffect_BlurRadiusChanged(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsDropShadowEffect) OnBlurRadiusChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsDropShadowEffect_connect_BlurRadiusChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsDropShadowEffect) ColorChanged(color *QColor) {
	C.QGraphicsDropShadowEffect_ColorChanged(this.h, color.cPointer())
}

func (this *QGraphicsDropShadowEffect) OnColorChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsDropShadowEffect_connect_ColorChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsDropShadowEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsDropShadowEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsDropShadowEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsDropShadowEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsDropShadowEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsDropShadowEffect) Delete() {
	C.QGraphicsDropShadowEffect_Delete(this.h)
}

type QGraphicsOpacityEffect struct {
	h *C.QGraphicsOpacityEffect
	*QGraphicsEffect
}

func (this *QGraphicsOpacityEffect) cPointer() *C.QGraphicsOpacityEffect {
	if this == nil {
		return nil
	}
	return this.h
}

func newQGraphicsOpacityEffect(h *C.QGraphicsOpacityEffect) *QGraphicsOpacityEffect {
	return &QGraphicsOpacityEffect{h: h, QGraphicsEffect: newQGraphicsEffect_U(unsafe.Pointer(h))}
}

func newQGraphicsOpacityEffect_U(h unsafe.Pointer) *QGraphicsOpacityEffect {
	return newQGraphicsOpacityEffect((*C.QGraphicsOpacityEffect)(h))
}

// NewQGraphicsOpacityEffect constructs a new QGraphicsOpacityEffect object.
func NewQGraphicsOpacityEffect() *QGraphicsOpacityEffect {
	ret := C.QGraphicsOpacityEffect_new()
	return newQGraphicsOpacityEffect(ret)
}

// NewQGraphicsOpacityEffect2 constructs a new QGraphicsOpacityEffect object.
func NewQGraphicsOpacityEffect2(parent *QObject) *QGraphicsOpacityEffect {
	ret := C.QGraphicsOpacityEffect_new2(parent.cPointer())
	return newQGraphicsOpacityEffect(ret)
}

func (this *QGraphicsOpacityEffect) MetaObject() *QMetaObject {
	ret := C.QGraphicsOpacityEffect_MetaObject(this.h)
	return newQMetaObject_U(unsafe.Pointer(ret))
}

func QGraphicsOpacityEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_Tr(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsOpacityEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_TrUtf8(s_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsOpacityEffect) Opacity() float64 {
	ret := C.QGraphicsOpacityEffect_Opacity(this.h)
	return (float64)(ret)
}

func (this *QGraphicsOpacityEffect) OpacityMask() *QBrush {
	ret := C.QGraphicsOpacityEffect_OpacityMask(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQBrush(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QBrush) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsOpacityEffect) SetOpacity(opacity float64) {
	C.QGraphicsOpacityEffect_SetOpacity(this.h, (C.double)(opacity))
}

func (this *QGraphicsOpacityEffect) SetOpacityMask(mask *QBrush) {
	C.QGraphicsOpacityEffect_SetOpacityMask(this.h, mask.cPointer())
}

func (this *QGraphicsOpacityEffect) OpacityChanged(opacity float64) {
	C.QGraphicsOpacityEffect_OpacityChanged(this.h, (C.double)(opacity))
}

func (this *QGraphicsOpacityEffect) OnOpacityChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsOpacityEffect_connect_OpacityChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func (this *QGraphicsOpacityEffect) OpacityMaskChanged(mask *QBrush) {
	C.QGraphicsOpacityEffect_OpacityMaskChanged(this.h, mask.cPointer())
}

func (this *QGraphicsOpacityEffect) OnOpacityMaskChanged(slot func()) {
	var slotWrapper miqtCallbackFunc = func(argc C.int, args *C.void) {
		slot()
	}

	C.QGraphicsOpacityEffect_connect_OpacityMaskChanged(this.h, unsafe.Pointer(uintptr(cgo.NewHandle(slotWrapper))))
}

func QGraphicsOpacityEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_Tr2(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsOpacityEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsOpacityEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_TrUtf82(s_Cstring, c_Cstring, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QGraphicsOpacityEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QGraphicsOpacityEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QGraphicsOpacityEffect) Delete() {
	C.QGraphicsOpacityEffect_Delete(this.h)
}
