package qt

/*

#include "gen_qgraphicseffect.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsEffect__ChangeFlag int

const (
	QGraphicsEffect__SourceAttached            QGraphicsEffect__ChangeFlag = 1
	QGraphicsEffect__SourceDetached            QGraphicsEffect__ChangeFlag = 2
	QGraphicsEffect__SourceBoundingRectChanged QGraphicsEffect__ChangeFlag = 4
	QGraphicsEffect__SourceInvalidated         QGraphicsEffect__ChangeFlag = 8
)

type QGraphicsEffect__PixmapPadMode int

const (
	QGraphicsEffect__NoPad                      QGraphicsEffect__PixmapPadMode = 0
	QGraphicsEffect__PadToTransparentBorder     QGraphicsEffect__PixmapPadMode = 1
	QGraphicsEffect__PadToEffectiveBoundingRect QGraphicsEffect__PixmapPadMode = 2
)

type QGraphicsBlurEffect__BlurHint int

const (
	QGraphicsBlurEffect__PerformanceHint QGraphicsBlurEffect__BlurHint = 0
	QGraphicsBlurEffect__QualityHint     QGraphicsBlurEffect__BlurHint = 1
	QGraphicsBlurEffect__AnimationHint   QGraphicsBlurEffect__BlurHint = 2
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

func (this *QGraphicsEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsEffect(h *C.QGraphicsEffect) *QGraphicsEffect {
	if h == nil {
		return nil
	}
	return &QGraphicsEffect{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsEffect(h unsafe.Pointer) *QGraphicsEffect {
	return newQGraphicsEffect((*C.QGraphicsEffect)(h))
}

func (this *QGraphicsEffect) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsEffect_MetaObject(this.h)))
}

func (this *QGraphicsEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsEffect_Metacast(this.h, param1_Cstring))
}

func QGraphicsEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsEffect) BoundingRectFor(sourceRect *QRectF) *QRectF {
	_ret := C.QGraphicsEffect_BoundingRectFor(this.h, sourceRect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEffect) BoundingRect() *QRectF {
	_ret := C.QGraphicsEffect_BoundingRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEffect) IsEnabled() bool {
	return (bool)(C.QGraphicsEffect_IsEnabled(this.h))
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
func (this *QGraphicsEffect) OnEnabledChanged(slot func(enabled bool)) {
	C.QGraphicsEffect_connect_EnabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEffect_EnabledChanged
func miqt_exec_callback_QGraphicsEffect_EnabledChanged(cb C.intptr_t, enabled C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(enabled bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(enabled)

	gofunc(slotval1)
}

func QGraphicsEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsEffect) Delete() {
	C.QGraphicsEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QGraphicsColorizeEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsColorizeEffect(h *C.QGraphicsColorizeEffect) *QGraphicsColorizeEffect {
	if h == nil {
		return nil
	}
	return &QGraphicsColorizeEffect{h: h, QGraphicsEffect: UnsafeNewQGraphicsEffect(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsColorizeEffect(h unsafe.Pointer) *QGraphicsColorizeEffect {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsColorizeEffect_MetaObject(this.h)))
}

func (this *QGraphicsColorizeEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsColorizeEffect_Metacast(this.h, param1_Cstring))
}

func QGraphicsColorizeEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsColorizeEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsColorizeEffect) Color() *QColor {
	_ret := C.QGraphicsColorizeEffect_Color(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsColorizeEffect) Strength() float64 {
	return (float64)(C.QGraphicsColorizeEffect_Strength(this.h))
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
func (this *QGraphicsColorizeEffect) OnColorChanged(slot func(color *QColor)) {
	C.QGraphicsColorizeEffect_connect_ColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsColorizeEffect_ColorChanged
func miqt_exec_callback_QGraphicsColorizeEffect_ColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func (this *QGraphicsColorizeEffect) StrengthChanged(strength float64) {
	C.QGraphicsColorizeEffect_StrengthChanged(this.h, (C.double)(strength))
}
func (this *QGraphicsColorizeEffect) OnStrengthChanged(slot func(strength float64)) {
	C.QGraphicsColorizeEffect_connect_StrengthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsColorizeEffect_StrengthChanged
func miqt_exec_callback_QGraphicsColorizeEffect_StrengthChanged(cb C.intptr_t, strength C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(strength float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(strength)

	gofunc(slotval1)
}

func QGraphicsColorizeEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsColorizeEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsColorizeEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsColorizeEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsColorizeEffect) Delete() {
	C.QGraphicsColorizeEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsColorizeEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsColorizeEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QGraphicsBlurEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsBlurEffect(h *C.QGraphicsBlurEffect) *QGraphicsBlurEffect {
	if h == nil {
		return nil
	}
	return &QGraphicsBlurEffect{h: h, QGraphicsEffect: UnsafeNewQGraphicsEffect(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsBlurEffect(h unsafe.Pointer) *QGraphicsBlurEffect {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsBlurEffect_MetaObject(this.h)))
}

func (this *QGraphicsBlurEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsBlurEffect_Metacast(this.h, param1_Cstring))
}

func QGraphicsBlurEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsBlurEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsBlurEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_ret := C.QGraphicsBlurEffect_BoundingRectFor(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsBlurEffect) BlurRadius() float64 {
	return (float64)(C.QGraphicsBlurEffect_BlurRadius(this.h))
}

func (this *QGraphicsBlurEffect) BlurHints() QGraphicsBlurEffect__BlurHint {
	return (QGraphicsBlurEffect__BlurHint)(C.QGraphicsBlurEffect_BlurHints(this.h))
}

func (this *QGraphicsBlurEffect) SetBlurRadius(blurRadius float64) {
	C.QGraphicsBlurEffect_SetBlurRadius(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsBlurEffect) SetBlurHints(hints QGraphicsBlurEffect__BlurHint) {
	C.QGraphicsBlurEffect_SetBlurHints(this.h, (C.int)(hints))
}

func (this *QGraphicsBlurEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsBlurEffect_BlurRadiusChanged(this.h, (C.double)(blurRadius))
}
func (this *QGraphicsBlurEffect) OnBlurRadiusChanged(slot func(blurRadius float64)) {
	C.QGraphicsBlurEffect_connect_BlurRadiusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsBlurEffect_BlurRadiusChanged
func miqt_exec_callback_QGraphicsBlurEffect_BlurRadiusChanged(cb C.intptr_t, blurRadius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(blurRadius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(blurRadius)

	gofunc(slotval1)
}

func (this *QGraphicsBlurEffect) BlurHintsChanged(hints QGraphicsBlurEffect__BlurHint) {
	C.QGraphicsBlurEffect_BlurHintsChanged(this.h, (C.int)(hints))
}
func (this *QGraphicsBlurEffect) OnBlurHintsChanged(slot func(hints QGraphicsBlurEffect__BlurHint)) {
	C.QGraphicsBlurEffect_connect_BlurHintsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsBlurEffect_BlurHintsChanged
func miqt_exec_callback_QGraphicsBlurEffect_BlurHintsChanged(cb C.intptr_t, hints C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(hints QGraphicsBlurEffect__BlurHint))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsBlurEffect__BlurHint)(hints)

	gofunc(slotval1)
}

func QGraphicsBlurEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsBlurEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsBlurEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsBlurEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsBlurEffect) Delete() {
	C.QGraphicsBlurEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsBlurEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsBlurEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QGraphicsDropShadowEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsDropShadowEffect(h *C.QGraphicsDropShadowEffect) *QGraphicsDropShadowEffect {
	if h == nil {
		return nil
	}
	return &QGraphicsDropShadowEffect{h: h, QGraphicsEffect: UnsafeNewQGraphicsEffect(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsDropShadowEffect(h unsafe.Pointer) *QGraphicsDropShadowEffect {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsDropShadowEffect_MetaObject(this.h)))
}

func (this *QGraphicsDropShadowEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsDropShadowEffect_Metacast(this.h, param1_Cstring))
}

func QGraphicsDropShadowEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsDropShadowEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsDropShadowEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_ret := C.QGraphicsDropShadowEffect_BoundingRectFor(this.h, rect.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) Offset() *QPointF {
	_ret := C.QGraphicsDropShadowEffect_Offset(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) XOffset() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_XOffset(this.h))
}

func (this *QGraphicsDropShadowEffect) YOffset() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_YOffset(this.h))
}

func (this *QGraphicsDropShadowEffect) BlurRadius() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_BlurRadius(this.h))
}

func (this *QGraphicsDropShadowEffect) Color() *QColor {
	_ret := C.QGraphicsDropShadowEffect_Color(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
func (this *QGraphicsDropShadowEffect) OnOffsetChanged(slot func(offset *QPointF)) {
	C.QGraphicsDropShadowEffect_connect_OffsetChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_OffsetChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_OffsetChanged(cb C.intptr_t, offset *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(offset *QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(offset))

	gofunc(slotval1)
}

func (this *QGraphicsDropShadowEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsDropShadowEffect_BlurRadiusChanged(this.h, (C.double)(blurRadius))
}
func (this *QGraphicsDropShadowEffect) OnBlurRadiusChanged(slot func(blurRadius float64)) {
	C.QGraphicsDropShadowEffect_connect_BlurRadiusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_BlurRadiusChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_BlurRadiusChanged(cb C.intptr_t, blurRadius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(blurRadius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(blurRadius)

	gofunc(slotval1)
}

func (this *QGraphicsDropShadowEffect) ColorChanged(color *QColor) {
	C.QGraphicsDropShadowEffect_ColorChanged(this.h, color.cPointer())
}
func (this *QGraphicsDropShadowEffect) OnColorChanged(slot func(color *QColor)) {
	C.QGraphicsDropShadowEffect_connect_ColorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_ColorChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_ColorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQColor(unsafe.Pointer(color))

	gofunc(slotval1)
}

func QGraphicsDropShadowEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsDropShadowEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsDropShadowEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsDropShadowEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsDropShadowEffect) Delete() {
	C.QGraphicsDropShadowEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsDropShadowEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsDropShadowEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
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

func (this *QGraphicsOpacityEffect) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsOpacityEffect(h *C.QGraphicsOpacityEffect) *QGraphicsOpacityEffect {
	if h == nil {
		return nil
	}
	return &QGraphicsOpacityEffect{h: h, QGraphicsEffect: UnsafeNewQGraphicsEffect(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsOpacityEffect(h unsafe.Pointer) *QGraphicsOpacityEffect {
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
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsOpacityEffect_MetaObject(this.h)))
}

func (this *QGraphicsOpacityEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsOpacityEffect_Metacast(this.h, param1_Cstring))
}

func QGraphicsOpacityEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsOpacityEffect_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsOpacityEffect) Opacity() float64 {
	return (float64)(C.QGraphicsOpacityEffect_Opacity(this.h))
}

func (this *QGraphicsOpacityEffect) OpacityMask() *QBrush {
	_ret := C.QGraphicsOpacityEffect_OpacityMask(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
func (this *QGraphicsOpacityEffect) OnOpacityChanged(slot func(opacity float64)) {
	C.QGraphicsOpacityEffect_connect_OpacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsOpacityEffect_OpacityChanged
func miqt_exec_callback_QGraphicsOpacityEffect_OpacityChanged(cb C.intptr_t, opacity C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opacity float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opacity)

	gofunc(slotval1)
}

func (this *QGraphicsOpacityEffect) OpacityMaskChanged(mask *QBrush) {
	C.QGraphicsOpacityEffect_OpacityMaskChanged(this.h, mask.cPointer())
}
func (this *QGraphicsOpacityEffect) OnOpacityMaskChanged(slot func(mask *QBrush)) {
	C.QGraphicsOpacityEffect_connect_OpacityMaskChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsOpacityEffect_OpacityMaskChanged
func miqt_exec_callback_QGraphicsOpacityEffect_OpacityMaskChanged(cb C.intptr_t, mask *C.QBrush) {
	gofunc, ok := cgo.Handle(cb).Value().(func(mask *QBrush))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQBrush(unsafe.Pointer(mask))

	gofunc(slotval1)
}

func QGraphicsOpacityEffect_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsOpacityEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsOpacityEffect_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsOpacityEffect_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QGraphicsOpacityEffect) Delete() {
	C.QGraphicsOpacityEffect_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsOpacityEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsOpacityEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
