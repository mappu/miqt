package qt6

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

// newQGraphicsEffect constructs the type using only CGO pointers.
func newQGraphicsEffect(h *C.QGraphicsEffect) *QGraphicsEffect {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGraphicsEffect_virtbase(h, &outptr_QObject)

	return &QGraphicsEffect{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGraphicsEffect constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsEffect(h unsafe.Pointer) *QGraphicsEffect {
	return newQGraphicsEffect((*C.QGraphicsEffect)(h))
}

// NewQGraphicsEffect constructs a new QGraphicsEffect object.
func NewQGraphicsEffect() *QGraphicsEffect {

	return newQGraphicsEffect(C.QGraphicsEffect_new())
}

// NewQGraphicsEffect2 constructs a new QGraphicsEffect object.
func NewQGraphicsEffect2(parent *QObject) *QGraphicsEffect {

	return newQGraphicsEffect(C.QGraphicsEffect_new2(parent.cPointer()))
}

func (this *QGraphicsEffect) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsEffect_MetaObject(this.h))
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

func (this *QGraphicsEffect) BoundingRectFor(sourceRect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsEffect_BoundingRectFor(this.h, sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEffect) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsEffect_BoundingRect(this.h))
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

func (this *QGraphicsEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsEffect_virtualbase_BoundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsEffect_override_virtual_BoundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_BoundingRectFor
func miqt_exec_callback_QGraphicsEffect_BoundingRectFor(self *C.QGraphicsEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(sourceRect)

	virtualReturn := gofunc((&QGraphicsEffect{h: self}).callVirtualBase_BoundingRectFor, slotval1)

	return virtualReturn.cPointer()

}
func (this *QGraphicsEffect) OnDraw(slot func(painter *QPainter)) {
	ok := C.QGraphicsEffect_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_Draw
func miqt_exec_callback_QGraphicsEffect_Draw(self *C.QGraphicsEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc(slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsEffect_virtualbase_SourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsEffect_override_virtual_SourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_SourceChanged
func miqt_exec_callback_QGraphicsEffect_SourceChanged(self *C.QGraphicsEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsEffect_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsEffect_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_Event
func miqt_exec_callback_QGraphicsEffect_Event(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEffect) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsEffect_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsEffect_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_EventFilter
func miqt_exec_callback_QGraphicsEffect_EventFilter(self *C.QGraphicsEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsEffect) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsEffect_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsEffect_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_TimerEvent
func miqt_exec_callback_QGraphicsEffect_TimerEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsEffect_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsEffect_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_ChildEvent
func miqt_exec_callback_QGraphicsEffect_ChildEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsEffect_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsEffect_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_CustomEvent
func miqt_exec_callback_QGraphicsEffect_CustomEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsEffect_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsEffect_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_ConnectNotify
func miqt_exec_callback_QGraphicsEffect_ConnectNotify(self *C.QGraphicsEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsEffect_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsEffect_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_DisconnectNotify
func miqt_exec_callback_QGraphicsEffect_DisconnectNotify(self *C.QGraphicsEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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

// newQGraphicsColorizeEffect constructs the type using only CGO pointers.
func newQGraphicsColorizeEffect(h *C.QGraphicsColorizeEffect) *QGraphicsColorizeEffect {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsEffect *C.QGraphicsEffect = nil
	C.QGraphicsColorizeEffect_virtbase(h, &outptr_QGraphicsEffect)

	return &QGraphicsColorizeEffect{h: h,
		QGraphicsEffect: newQGraphicsEffect(outptr_QGraphicsEffect)}
}

// UnsafeNewQGraphicsColorizeEffect constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsColorizeEffect(h unsafe.Pointer) *QGraphicsColorizeEffect {
	return newQGraphicsColorizeEffect((*C.QGraphicsColorizeEffect)(h))
}

// NewQGraphicsColorizeEffect constructs a new QGraphicsColorizeEffect object.
func NewQGraphicsColorizeEffect() *QGraphicsColorizeEffect {

	return newQGraphicsColorizeEffect(C.QGraphicsColorizeEffect_new())
}

// NewQGraphicsColorizeEffect2 constructs a new QGraphicsColorizeEffect object.
func NewQGraphicsColorizeEffect2(parent *QObject) *QGraphicsColorizeEffect {

	return newQGraphicsColorizeEffect(C.QGraphicsColorizeEffect_new2(parent.cPointer()))
}

func (this *QGraphicsColorizeEffect) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsColorizeEffect_MetaObject(this.h))
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

func (this *QGraphicsColorizeEffect) Color() *QColor {
	_goptr := newQColor(C.QGraphicsColorizeEffect_Color(this.h))
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
	slotval1 := newQColor(color)

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

func (this *QGraphicsColorizeEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsColorizeEffect_virtualbase_Draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsColorizeEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_Draw
func miqt_exec_callback_QGraphicsColorizeEffect_Draw(self *C.QGraphicsColorizeEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsColorizeEffect_virtualbase_BoundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsColorizeEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsColorizeEffect_override_virtual_BoundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_BoundingRectFor
func miqt_exec_callback_QGraphicsColorizeEffect_BoundingRectFor(self *C.QGraphicsColorizeEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(sourceRect)

	virtualReturn := gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_BoundingRectFor, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsColorizeEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsColorizeEffect_virtualbase_SourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsColorizeEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_SourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_SourceChanged
func miqt_exec_callback_QGraphicsColorizeEffect_SourceChanged(self *C.QGraphicsColorizeEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsColorizeEffect_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsColorizeEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsColorizeEffect_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_Event
func miqt_exec_callback_QGraphicsColorizeEffect_Event(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsColorizeEffect_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsColorizeEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsColorizeEffect_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_EventFilter
func miqt_exec_callback_QGraphicsColorizeEffect_EventFilter(self *C.QGraphicsColorizeEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsColorizeEffect_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_TimerEvent
func miqt_exec_callback_QGraphicsColorizeEffect_TimerEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsColorizeEffect_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_ChildEvent
func miqt_exec_callback_QGraphicsColorizeEffect_ChildEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsColorizeEffect_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_CustomEvent
func miqt_exec_callback_QGraphicsColorizeEffect_CustomEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsColorizeEffect_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsColorizeEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_ConnectNotify
func miqt_exec_callback_QGraphicsColorizeEffect_ConnectNotify(self *C.QGraphicsColorizeEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsColorizeEffect_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsColorizeEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_DisconnectNotify
func miqt_exec_callback_QGraphicsColorizeEffect_DisconnectNotify(self *C.QGraphicsColorizeEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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

// newQGraphicsBlurEffect constructs the type using only CGO pointers.
func newQGraphicsBlurEffect(h *C.QGraphicsBlurEffect) *QGraphicsBlurEffect {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsEffect *C.QGraphicsEffect = nil
	C.QGraphicsBlurEffect_virtbase(h, &outptr_QGraphicsEffect)

	return &QGraphicsBlurEffect{h: h,
		QGraphicsEffect: newQGraphicsEffect(outptr_QGraphicsEffect)}
}

// UnsafeNewQGraphicsBlurEffect constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsBlurEffect(h unsafe.Pointer) *QGraphicsBlurEffect {
	return newQGraphicsBlurEffect((*C.QGraphicsBlurEffect)(h))
}

// NewQGraphicsBlurEffect constructs a new QGraphicsBlurEffect object.
func NewQGraphicsBlurEffect() *QGraphicsBlurEffect {

	return newQGraphicsBlurEffect(C.QGraphicsBlurEffect_new())
}

// NewQGraphicsBlurEffect2 constructs a new QGraphicsBlurEffect object.
func NewQGraphicsBlurEffect2(parent *QObject) *QGraphicsBlurEffect {

	return newQGraphicsBlurEffect(C.QGraphicsBlurEffect_new2(parent.cPointer()))
}

func (this *QGraphicsBlurEffect) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsBlurEffect_MetaObject(this.h))
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

func (this *QGraphicsBlurEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsBlurEffect_BoundingRectFor(this.h, rect.cPointer()))
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

func (this *QGraphicsBlurEffect) callVirtualBase_BoundingRectFor(rect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsBlurEffect_virtualbase_BoundingRectFor(unsafe.Pointer(this.h), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsBlurEffect) OnBoundingRectFor(slot func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF) {
	ok := C.QGraphicsBlurEffect_override_virtual_BoundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_BoundingRectFor
func miqt_exec_callback_QGraphicsBlurEffect_BoundingRectFor(self *C.QGraphicsBlurEffect, cb C.intptr_t, rect *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	virtualReturn := gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_BoundingRectFor, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsBlurEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsBlurEffect_virtualbase_Draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsBlurEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsBlurEffect_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_Draw
func miqt_exec_callback_QGraphicsBlurEffect_Draw(self *C.QGraphicsBlurEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsBlurEffect_virtualbase_SourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsBlurEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsBlurEffect_override_virtual_SourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_SourceChanged
func miqt_exec_callback_QGraphicsBlurEffect_SourceChanged(self *C.QGraphicsBlurEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsBlurEffect_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsBlurEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsBlurEffect_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_Event
func miqt_exec_callback_QGraphicsBlurEffect_Event(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsBlurEffect) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsBlurEffect_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsBlurEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsBlurEffect_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_EventFilter
func miqt_exec_callback_QGraphicsBlurEffect_EventFilter(self *C.QGraphicsBlurEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsBlurEffect) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsBlurEffect_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_TimerEvent
func miqt_exec_callback_QGraphicsBlurEffect_TimerEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsBlurEffect_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_ChildEvent
func miqt_exec_callback_QGraphicsBlurEffect_ChildEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsBlurEffect_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_CustomEvent
func miqt_exec_callback_QGraphicsBlurEffect_CustomEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsBlurEffect_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsBlurEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsBlurEffect_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_ConnectNotify
func miqt_exec_callback_QGraphicsBlurEffect_ConnectNotify(self *C.QGraphicsBlurEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsBlurEffect_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsBlurEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsBlurEffect_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_DisconnectNotify
func miqt_exec_callback_QGraphicsBlurEffect_DisconnectNotify(self *C.QGraphicsBlurEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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

// newQGraphicsDropShadowEffect constructs the type using only CGO pointers.
func newQGraphicsDropShadowEffect(h *C.QGraphicsDropShadowEffect) *QGraphicsDropShadowEffect {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsEffect *C.QGraphicsEffect = nil
	C.QGraphicsDropShadowEffect_virtbase(h, &outptr_QGraphicsEffect)

	return &QGraphicsDropShadowEffect{h: h,
		QGraphicsEffect: newQGraphicsEffect(outptr_QGraphicsEffect)}
}

// UnsafeNewQGraphicsDropShadowEffect constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsDropShadowEffect(h unsafe.Pointer) *QGraphicsDropShadowEffect {
	return newQGraphicsDropShadowEffect((*C.QGraphicsDropShadowEffect)(h))
}

// NewQGraphicsDropShadowEffect constructs a new QGraphicsDropShadowEffect object.
func NewQGraphicsDropShadowEffect() *QGraphicsDropShadowEffect {

	return newQGraphicsDropShadowEffect(C.QGraphicsDropShadowEffect_new())
}

// NewQGraphicsDropShadowEffect2 constructs a new QGraphicsDropShadowEffect object.
func NewQGraphicsDropShadowEffect2(parent *QObject) *QGraphicsDropShadowEffect {

	return newQGraphicsDropShadowEffect(C.QGraphicsDropShadowEffect_new2(parent.cPointer()))
}

func (this *QGraphicsDropShadowEffect) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsDropShadowEffect_MetaObject(this.h))
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

func (this *QGraphicsDropShadowEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsDropShadowEffect_BoundingRectFor(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) Offset() *QPointF {
	_goptr := newQPointF(C.QGraphicsDropShadowEffect_Offset(this.h))
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
	_goptr := newQColor(C.QGraphicsDropShadowEffect_Color(this.h))
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
	slotval1 := newQPointF(offset)

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
	slotval1 := newQColor(color)

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

func (this *QGraphicsDropShadowEffect) callVirtualBase_BoundingRectFor(rect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsDropShadowEffect_virtualbase_BoundingRectFor(unsafe.Pointer(this.h), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsDropShadowEffect) OnBoundingRectFor(slot func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_BoundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_BoundingRectFor
func miqt_exec_callback_QGraphicsDropShadowEffect_BoundingRectFor(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, rect *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	virtualReturn := gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_BoundingRectFor, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsDropShadowEffect_virtualbase_Draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_Draw
func miqt_exec_callback_QGraphicsDropShadowEffect_Draw(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsDropShadowEffect_virtualbase_SourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsDropShadowEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_SourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_SourceChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_SourceChanged(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsDropShadowEffect_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsDropShadowEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_Event
func miqt_exec_callback_QGraphicsDropShadowEffect_Event(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsDropShadowEffect_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsDropShadowEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_EventFilter
func miqt_exec_callback_QGraphicsDropShadowEffect_EventFilter(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsDropShadowEffect_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_TimerEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_TimerEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsDropShadowEffect_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_ChildEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_ChildEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsDropShadowEffect_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_CustomEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_CustomEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsDropShadowEffect_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_ConnectNotify
func miqt_exec_callback_QGraphicsDropShadowEffect_ConnectNotify(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsDropShadowEffect_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_DisconnectNotify
func miqt_exec_callback_QGraphicsDropShadowEffect_DisconnectNotify(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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

// newQGraphicsOpacityEffect constructs the type using only CGO pointers.
func newQGraphicsOpacityEffect(h *C.QGraphicsOpacityEffect) *QGraphicsOpacityEffect {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsEffect *C.QGraphicsEffect = nil
	C.QGraphicsOpacityEffect_virtbase(h, &outptr_QGraphicsEffect)

	return &QGraphicsOpacityEffect{h: h,
		QGraphicsEffect: newQGraphicsEffect(outptr_QGraphicsEffect)}
}

// UnsafeNewQGraphicsOpacityEffect constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsOpacityEffect(h unsafe.Pointer) *QGraphicsOpacityEffect {
	return newQGraphicsOpacityEffect((*C.QGraphicsOpacityEffect)(h))
}

// NewQGraphicsOpacityEffect constructs a new QGraphicsOpacityEffect object.
func NewQGraphicsOpacityEffect() *QGraphicsOpacityEffect {

	return newQGraphicsOpacityEffect(C.QGraphicsOpacityEffect_new())
}

// NewQGraphicsOpacityEffect2 constructs a new QGraphicsOpacityEffect object.
func NewQGraphicsOpacityEffect2(parent *QObject) *QGraphicsOpacityEffect {

	return newQGraphicsOpacityEffect(C.QGraphicsOpacityEffect_new2(parent.cPointer()))
}

func (this *QGraphicsOpacityEffect) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsOpacityEffect_MetaObject(this.h))
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

func (this *QGraphicsOpacityEffect) Opacity() float64 {
	return (float64)(C.QGraphicsOpacityEffect_Opacity(this.h))
}

func (this *QGraphicsOpacityEffect) OpacityMask() *QBrush {
	_goptr := newQBrush(C.QGraphicsOpacityEffect_OpacityMask(this.h))
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
	slotval1 := newQBrush(mask)

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

func (this *QGraphicsOpacityEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsOpacityEffect_virtualbase_Draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsOpacityEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_Draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_Draw
func miqt_exec_callback_QGraphicsOpacityEffect_Draw(self *C.QGraphicsOpacityEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsOpacityEffect_virtualbase_BoundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsOpacityEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsOpacityEffect_override_virtual_BoundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_BoundingRectFor
func miqt_exec_callback_QGraphicsOpacityEffect_BoundingRectFor(self *C.QGraphicsOpacityEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(sourceRect)

	virtualReturn := gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_BoundingRectFor, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsOpacityEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsOpacityEffect_virtualbase_SourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsOpacityEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_SourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_SourceChanged
func miqt_exec_callback_QGraphicsOpacityEffect_SourceChanged(self *C.QGraphicsOpacityEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsOpacityEffect_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsOpacityEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsOpacityEffect_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_Event
func miqt_exec_callback_QGraphicsOpacityEffect_Event(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsOpacityEffect_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsOpacityEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsOpacityEffect_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_EventFilter
func miqt_exec_callback_QGraphicsOpacityEffect_EventFilter(self *C.QGraphicsOpacityEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsOpacityEffect_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_TimerEvent
func miqt_exec_callback_QGraphicsOpacityEffect_TimerEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsOpacityEffect_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_ChildEvent
func miqt_exec_callback_QGraphicsOpacityEffect_ChildEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsOpacityEffect_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_CustomEvent
func miqt_exec_callback_QGraphicsOpacityEffect_CustomEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsOpacityEffect_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsOpacityEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_ConnectNotify
func miqt_exec_callback_QGraphicsOpacityEffect_ConnectNotify(self *C.QGraphicsOpacityEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsOpacityEffect_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsOpacityEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_DisconnectNotify
func miqt_exec_callback_QGraphicsOpacityEffect_DisconnectNotify(self *C.QGraphicsOpacityEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_DisconnectNotify, slotval1)

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
