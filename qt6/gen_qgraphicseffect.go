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
	return newQMetaObject(C.QGraphicsEffect_metaObject(this.h))
}

func (this *QGraphicsEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsEffect_metacast(this.h, param1_Cstring))
}

func QGraphicsEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsEffect) BoundingRectFor(sourceRect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsEffect_boundingRectFor(this.h, sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEffect) BoundingRect() *QRectF {
	_goptr := newQRectF(C.QGraphicsEffect_boundingRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsEffect) IsEnabled() bool {
	return (bool)(C.QGraphicsEffect_isEnabled(this.h))
}

func (this *QGraphicsEffect) SetEnabled(enable bool) {
	C.QGraphicsEffect_setEnabled(this.h, (C.bool)(enable))
}

func (this *QGraphicsEffect) Update() {
	C.QGraphicsEffect_update(this.h)
}

func (this *QGraphicsEffect) EnabledChanged(enabled bool) {
	C.QGraphicsEffect_enabledChanged(this.h, (C.bool)(enabled))
}
func (this *QGraphicsEffect) OnEnabledChanged(slot func(enabled bool)) {
	C.QGraphicsEffect_connect_enabledChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsEffect_enabledChanged
func miqt_exec_callback_QGraphicsEffect_enabledChanged(cb C.intptr_t, enabled C.bool) {
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
	var _ms C.struct_miqt_string = C.QGraphicsEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateBoundingRect can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) UpdateBoundingRect() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEffect_protectedbase_updateBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourceIsPixmap can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsEffect_protectedbase_sourceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRect can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourceBoundingRect() QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsEffect_protectedbase_sourceBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawSource can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) DrawSource(painter *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsEffect_protectedbase_drawSource(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourcePixmap can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourcePixmap() QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsEffect_protectedbase_sourcePixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRectWithSystem can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourceBoundingRectWithSystem(system CoordinateSystem) QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsEffect_protectedbase_sourceBoundingRectWithSystem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(system)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourcePixmapWithSystem can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourcePixmapWithSystem(system CoordinateSystem) QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsEffect_protectedbase_sourcePixmapWithSystem(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(system)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourcePixmap2 can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourcePixmap2(system CoordinateSystem, offset *QPoint) QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsEffect_protectedbase_sourcePixmap2(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(system), offset.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourcePixmap3 can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SourcePixmap3(system CoordinateSystem, offset *QPoint, mode QGraphicsEffect__PixmapPadMode) QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsEffect_protectedbase_sourcePixmap3(&_dynamic_cast_ok, unsafe.Pointer(this.h), (C.int)(system), offset.cPointer(), (C.int)(mode)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsEffect that was directly constructed.
func (this *QGraphicsEffect) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsEffect_virtualbase_boundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsEffect_override_virtual_boundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_boundingRectFor
func miqt_exec_callback_QGraphicsEffect_boundingRectFor(self *C.QGraphicsEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
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
	ok := C.QGraphicsEffect_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_draw
func miqt_exec_callback_QGraphicsEffect_draw(self *C.QGraphicsEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc(slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsEffect_virtualbase_sourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsEffect_override_virtual_sourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_sourceChanged
func miqt_exec_callback_QGraphicsEffect_sourceChanged(self *C.QGraphicsEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsEffect_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_event
func miqt_exec_callback_QGraphicsEffect_event(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_eventFilter
func miqt_exec_callback_QGraphicsEffect_eventFilter(self *C.QGraphicsEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_timerEvent
func miqt_exec_callback_QGraphicsEffect_timerEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsEffect_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_childEvent
func miqt_exec_callback_QGraphicsEffect_childEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsEffect_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_customEvent
func miqt_exec_callback_QGraphicsEffect_customEvent(self *C.QGraphicsEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_connectNotify
func miqt_exec_callback_QGraphicsEffect_connectNotify(self *C.QGraphicsEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsEffect_disconnectNotify
func miqt_exec_callback_QGraphicsEffect_disconnectNotify(self *C.QGraphicsEffect, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsEffect_delete(this.h)
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
	return newQMetaObject(C.QGraphicsColorizeEffect_metaObject(this.h))
}

func (this *QGraphicsColorizeEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsColorizeEffect_metacast(this.h, param1_Cstring))
}

func QGraphicsColorizeEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsColorizeEffect) Color() *QColor {
	_goptr := newQColor(C.QGraphicsColorizeEffect_color(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsColorizeEffect) Strength() float64 {
	return (float64)(C.QGraphicsColorizeEffect_strength(this.h))
}

func (this *QGraphicsColorizeEffect) SetColor(c *QColor) {
	C.QGraphicsColorizeEffect_setColor(this.h, c.cPointer())
}

func (this *QGraphicsColorizeEffect) SetStrength(strength float64) {
	C.QGraphicsColorizeEffect_setStrength(this.h, (C.double)(strength))
}

func (this *QGraphicsColorizeEffect) ColorChanged(color *QColor) {
	C.QGraphicsColorizeEffect_colorChanged(this.h, color.cPointer())
}
func (this *QGraphicsColorizeEffect) OnColorChanged(slot func(color *QColor)) {
	C.QGraphicsColorizeEffect_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsColorizeEffect_colorChanged
func miqt_exec_callback_QGraphicsColorizeEffect_colorChanged(cb C.intptr_t, color *C.QColor) {
	gofunc, ok := cgo.Handle(cb).Value().(func(color *QColor))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQColor(color)

	gofunc(slotval1)
}

func (this *QGraphicsColorizeEffect) StrengthChanged(strength float64) {
	C.QGraphicsColorizeEffect_strengthChanged(this.h, (C.double)(strength))
}
func (this *QGraphicsColorizeEffect) OnStrengthChanged(slot func(strength float64)) {
	C.QGraphicsColorizeEffect_connect_strengthChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsColorizeEffect_strengthChanged
func miqt_exec_callback_QGraphicsColorizeEffect_strengthChanged(cb C.intptr_t, strength C.double) {
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
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsColorizeEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsColorizeEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateBoundingRect can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) UpdateBoundingRect() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsColorizeEffect_protectedbase_updateBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourceIsPixmap can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) SourceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsColorizeEffect_protectedbase_sourceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRect can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) SourceBoundingRect() QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsColorizeEffect_protectedbase_sourceBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawSource can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) DrawSource(painter *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsColorizeEffect_protectedbase_drawSource(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourcePixmap can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) SourcePixmap() QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsColorizeEffect_protectedbase_sourcePixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsColorizeEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsColorizeEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsColorizeEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsColorizeEffect that was directly constructed.
func (this *QGraphicsColorizeEffect) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsColorizeEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsColorizeEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsColorizeEffect_virtualbase_draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsColorizeEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_draw
func miqt_exec_callback_QGraphicsColorizeEffect_draw(self *C.QGraphicsColorizeEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsColorizeEffect_virtualbase_boundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsColorizeEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsColorizeEffect_override_virtual_boundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_boundingRectFor
func miqt_exec_callback_QGraphicsColorizeEffect_boundingRectFor(self *C.QGraphicsColorizeEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
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

	C.QGraphicsColorizeEffect_virtualbase_sourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsColorizeEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_sourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_sourceChanged
func miqt_exec_callback_QGraphicsColorizeEffect_sourceChanged(self *C.QGraphicsColorizeEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsColorizeEffect_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsColorizeEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsColorizeEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_event
func miqt_exec_callback_QGraphicsColorizeEffect_event(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsColorizeEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsColorizeEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsColorizeEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_eventFilter
func miqt_exec_callback_QGraphicsColorizeEffect_eventFilter(self *C.QGraphicsColorizeEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsColorizeEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_timerEvent
func miqt_exec_callback_QGraphicsColorizeEffect_timerEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsColorizeEffect_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_childEvent
func miqt_exec_callback_QGraphicsColorizeEffect_childEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsColorizeEffect_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsColorizeEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_customEvent
func miqt_exec_callback_QGraphicsColorizeEffect_customEvent(self *C.QGraphicsColorizeEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsColorizeEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsColorizeEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_connectNotify
func miqt_exec_callback_QGraphicsColorizeEffect_connectNotify(self *C.QGraphicsColorizeEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsColorizeEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsColorizeEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsColorizeEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsColorizeEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsColorizeEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsColorizeEffect_disconnectNotify
func miqt_exec_callback_QGraphicsColorizeEffect_disconnectNotify(self *C.QGraphicsColorizeEffect, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsColorizeEffect_delete(this.h)
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
	return newQMetaObject(C.QGraphicsBlurEffect_metaObject(this.h))
}

func (this *QGraphicsBlurEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsBlurEffect_metacast(this.h, param1_Cstring))
}

func QGraphicsBlurEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsBlurEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsBlurEffect_boundingRectFor(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsBlurEffect) BlurRadius() float64 {
	return (float64)(C.QGraphicsBlurEffect_blurRadius(this.h))
}

func (this *QGraphicsBlurEffect) BlurHints() QGraphicsBlurEffect__BlurHint {
	return (QGraphicsBlurEffect__BlurHint)(C.QGraphicsBlurEffect_blurHints(this.h))
}

func (this *QGraphicsBlurEffect) SetBlurRadius(blurRadius float64) {
	C.QGraphicsBlurEffect_setBlurRadius(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsBlurEffect) SetBlurHints(hints QGraphicsBlurEffect__BlurHint) {
	C.QGraphicsBlurEffect_setBlurHints(this.h, (C.int)(hints))
}

func (this *QGraphicsBlurEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsBlurEffect_blurRadiusChanged(this.h, (C.double)(blurRadius))
}
func (this *QGraphicsBlurEffect) OnBlurRadiusChanged(slot func(blurRadius float64)) {
	C.QGraphicsBlurEffect_connect_blurRadiusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsBlurEffect_blurRadiusChanged
func miqt_exec_callback_QGraphicsBlurEffect_blurRadiusChanged(cb C.intptr_t, blurRadius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(blurRadius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(blurRadius)

	gofunc(slotval1)
}

func (this *QGraphicsBlurEffect) BlurHintsChanged(hints QGraphicsBlurEffect__BlurHint) {
	C.QGraphicsBlurEffect_blurHintsChanged(this.h, (C.int)(hints))
}
func (this *QGraphicsBlurEffect) OnBlurHintsChanged(slot func(hints QGraphicsBlurEffect__BlurHint)) {
	C.QGraphicsBlurEffect_connect_blurHintsChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsBlurEffect_blurHintsChanged
func miqt_exec_callback_QGraphicsBlurEffect_blurHintsChanged(cb C.intptr_t, hints C.int) {
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
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsBlurEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsBlurEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateBoundingRect can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) UpdateBoundingRect() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsBlurEffect_protectedbase_updateBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourceIsPixmap can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) SourceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsBlurEffect_protectedbase_sourceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRect can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) SourceBoundingRect() QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsBlurEffect_protectedbase_sourceBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawSource can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) DrawSource(painter *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsBlurEffect_protectedbase_drawSource(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourcePixmap can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) SourcePixmap() QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsBlurEffect_protectedbase_sourcePixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsBlurEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsBlurEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsBlurEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsBlurEffect that was directly constructed.
func (this *QGraphicsBlurEffect) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsBlurEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsBlurEffect) callVirtualBase_BoundingRectFor(rect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsBlurEffect_virtualbase_boundingRectFor(unsafe.Pointer(this.h), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsBlurEffect) OnBoundingRectFor(slot func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF) {
	ok := C.QGraphicsBlurEffect_override_virtual_boundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_boundingRectFor
func miqt_exec_callback_QGraphicsBlurEffect_boundingRectFor(self *C.QGraphicsBlurEffect, cb C.intptr_t, rect *C.QRectF) *C.QRectF {
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

	C.QGraphicsBlurEffect_virtualbase_draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsBlurEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsBlurEffect_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_draw
func miqt_exec_callback_QGraphicsBlurEffect_draw(self *C.QGraphicsBlurEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsBlurEffect_virtualbase_sourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsBlurEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsBlurEffect_override_virtual_sourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_sourceChanged
func miqt_exec_callback_QGraphicsBlurEffect_sourceChanged(self *C.QGraphicsBlurEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsBlurEffect_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsBlurEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsBlurEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_event
func miqt_exec_callback_QGraphicsBlurEffect_event(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsBlurEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsBlurEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsBlurEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_eventFilter
func miqt_exec_callback_QGraphicsBlurEffect_eventFilter(self *C.QGraphicsBlurEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsBlurEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_timerEvent
func miqt_exec_callback_QGraphicsBlurEffect_timerEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsBlurEffect_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_childEvent
func miqt_exec_callback_QGraphicsBlurEffect_childEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsBlurEffect_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsBlurEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsBlurEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_customEvent
func miqt_exec_callback_QGraphicsBlurEffect_customEvent(self *C.QGraphicsBlurEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsBlurEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsBlurEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsBlurEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_connectNotify
func miqt_exec_callback_QGraphicsBlurEffect_connectNotify(self *C.QGraphicsBlurEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsBlurEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsBlurEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsBlurEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsBlurEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsBlurEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsBlurEffect_disconnectNotify
func miqt_exec_callback_QGraphicsBlurEffect_disconnectNotify(self *C.QGraphicsBlurEffect, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsBlurEffect_delete(this.h)
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
	return newQMetaObject(C.QGraphicsDropShadowEffect_metaObject(this.h))
}

func (this *QGraphicsDropShadowEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsDropShadowEffect_metacast(this.h, param1_Cstring))
}

func QGraphicsDropShadowEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsDropShadowEffect) BoundingRectFor(rect *QRectF) *QRectF {
	_goptr := newQRectF(C.QGraphicsDropShadowEffect_boundingRectFor(this.h, rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) Offset() *QPointF {
	_goptr := newQPointF(C.QGraphicsDropShadowEffect_offset(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) XOffset() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_xOffset(this.h))
}

func (this *QGraphicsDropShadowEffect) YOffset() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_yOffset(this.h))
}

func (this *QGraphicsDropShadowEffect) BlurRadius() float64 {
	return (float64)(C.QGraphicsDropShadowEffect_blurRadius(this.h))
}

func (this *QGraphicsDropShadowEffect) Color() *QColor {
	_goptr := newQColor(C.QGraphicsDropShadowEffect_color(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsDropShadowEffect) SetOffset(ofs *QPointF) {
	C.QGraphicsDropShadowEffect_setOffset(this.h, ofs.cPointer())
}

func (this *QGraphicsDropShadowEffect) SetOffset2(dx float64, dy float64) {
	C.QGraphicsDropShadowEffect_setOffset2(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsDropShadowEffect) SetOffsetWithQreal(d float64) {
	C.QGraphicsDropShadowEffect_setOffsetWithQreal(this.h, (C.double)(d))
}

func (this *QGraphicsDropShadowEffect) SetXOffset(dx float64) {
	C.QGraphicsDropShadowEffect_setXOffset(this.h, (C.double)(dx))
}

func (this *QGraphicsDropShadowEffect) SetYOffset(dy float64) {
	C.QGraphicsDropShadowEffect_setYOffset(this.h, (C.double)(dy))
}

func (this *QGraphicsDropShadowEffect) SetBlurRadius(blurRadius float64) {
	C.QGraphicsDropShadowEffect_setBlurRadius(this.h, (C.double)(blurRadius))
}

func (this *QGraphicsDropShadowEffect) SetColor(color *QColor) {
	C.QGraphicsDropShadowEffect_setColor(this.h, color.cPointer())
}

func (this *QGraphicsDropShadowEffect) OffsetChanged(offset *QPointF) {
	C.QGraphicsDropShadowEffect_offsetChanged(this.h, offset.cPointer())
}
func (this *QGraphicsDropShadowEffect) OnOffsetChanged(slot func(offset *QPointF)) {
	C.QGraphicsDropShadowEffect_connect_offsetChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_offsetChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_offsetChanged(cb C.intptr_t, offset *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(offset *QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(offset)

	gofunc(slotval1)
}

func (this *QGraphicsDropShadowEffect) BlurRadiusChanged(blurRadius float64) {
	C.QGraphicsDropShadowEffect_blurRadiusChanged(this.h, (C.double)(blurRadius))
}
func (this *QGraphicsDropShadowEffect) OnBlurRadiusChanged(slot func(blurRadius float64)) {
	C.QGraphicsDropShadowEffect_connect_blurRadiusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_blurRadiusChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_blurRadiusChanged(cb C.intptr_t, blurRadius C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(blurRadius float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(blurRadius)

	gofunc(slotval1)
}

func (this *QGraphicsDropShadowEffect) ColorChanged(color *QColor) {
	C.QGraphicsDropShadowEffect_colorChanged(this.h, color.cPointer())
}
func (this *QGraphicsDropShadowEffect) OnColorChanged(slot func(color *QColor)) {
	C.QGraphicsDropShadowEffect_connect_colorChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_colorChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_colorChanged(cb C.intptr_t, color *C.QColor) {
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
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsDropShadowEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsDropShadowEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateBoundingRect can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) UpdateBoundingRect() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsDropShadowEffect_protectedbase_updateBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourceIsPixmap can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) SourceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsDropShadowEffect_protectedbase_sourceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRect can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) SourceBoundingRect() QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsDropShadowEffect_protectedbase_sourceBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawSource can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) DrawSource(painter *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsDropShadowEffect_protectedbase_drawSource(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourcePixmap can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) SourcePixmap() QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsDropShadowEffect_protectedbase_sourcePixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsDropShadowEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsDropShadowEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsDropShadowEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsDropShadowEffect that was directly constructed.
func (this *QGraphicsDropShadowEffect) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsDropShadowEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_BoundingRectFor(rect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsDropShadowEffect_virtualbase_boundingRectFor(unsafe.Pointer(this.h), rect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsDropShadowEffect) OnBoundingRectFor(slot func(super func(rect *QRectF) *QRectF, rect *QRectF) *QRectF) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_boundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_boundingRectFor
func miqt_exec_callback_QGraphicsDropShadowEffect_boundingRectFor(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, rect *C.QRectF) *C.QRectF {
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

	C.QGraphicsDropShadowEffect_virtualbase_draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_draw
func miqt_exec_callback_QGraphicsDropShadowEffect_draw(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_SourceChanged(flags QGraphicsEffect__ChangeFlag) {

	C.QGraphicsDropShadowEffect_virtualbase_sourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsDropShadowEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_sourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_sourceChanged
func miqt_exec_callback_QGraphicsDropShadowEffect_sourceChanged(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsDropShadowEffect_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsDropShadowEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_event
func miqt_exec_callback_QGraphicsDropShadowEffect_event(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsDropShadowEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsDropShadowEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_eventFilter
func miqt_exec_callback_QGraphicsDropShadowEffect_eventFilter(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsDropShadowEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_timerEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_timerEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsDropShadowEffect_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_childEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_childEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsDropShadowEffect_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_customEvent
func miqt_exec_callback_QGraphicsDropShadowEffect_customEvent(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsDropShadowEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_connectNotify
func miqt_exec_callback_QGraphicsDropShadowEffect_connectNotify(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsDropShadowEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsDropShadowEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsDropShadowEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsDropShadowEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsDropShadowEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsDropShadowEffect_disconnectNotify
func miqt_exec_callback_QGraphicsDropShadowEffect_disconnectNotify(self *C.QGraphicsDropShadowEffect, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsDropShadowEffect_delete(this.h)
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
	return newQMetaObject(C.QGraphicsOpacityEffect_metaObject(this.h))
}

func (this *QGraphicsOpacityEffect) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsOpacityEffect_metacast(this.h, param1_Cstring))
}

func QGraphicsOpacityEffect_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsOpacityEffect) Opacity() float64 {
	return (float64)(C.QGraphicsOpacityEffect_opacity(this.h))
}

func (this *QGraphicsOpacityEffect) OpacityMask() *QBrush {
	_goptr := newQBrush(C.QGraphicsOpacityEffect_opacityMask(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsOpacityEffect) SetOpacity(opacity float64) {
	C.QGraphicsOpacityEffect_setOpacity(this.h, (C.double)(opacity))
}

func (this *QGraphicsOpacityEffect) SetOpacityMask(mask *QBrush) {
	C.QGraphicsOpacityEffect_setOpacityMask(this.h, mask.cPointer())
}

func (this *QGraphicsOpacityEffect) OpacityChanged(opacity float64) {
	C.QGraphicsOpacityEffect_opacityChanged(this.h, (C.double)(opacity))
}
func (this *QGraphicsOpacityEffect) OnOpacityChanged(slot func(opacity float64)) {
	C.QGraphicsOpacityEffect_connect_opacityChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsOpacityEffect_opacityChanged
func miqt_exec_callback_QGraphicsOpacityEffect_opacityChanged(cb C.intptr_t, opacity C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(opacity float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(opacity)

	gofunc(slotval1)
}

func (this *QGraphicsOpacityEffect) OpacityMaskChanged(mask *QBrush) {
	C.QGraphicsOpacityEffect_opacityMaskChanged(this.h, mask.cPointer())
}
func (this *QGraphicsOpacityEffect) OnOpacityMaskChanged(slot func(mask *QBrush)) {
	C.QGraphicsOpacityEffect_connect_opacityMaskChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsOpacityEffect_opacityMaskChanged
func miqt_exec_callback_QGraphicsOpacityEffect_opacityMaskChanged(cb C.intptr_t, mask *C.QBrush) {
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
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsOpacityEffect_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsOpacityEffect_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateBoundingRect can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) UpdateBoundingRect() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsOpacityEffect_protectedbase_updateBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourceIsPixmap can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) SourceIsPixmap() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsOpacityEffect_protectedbase_sourceIsPixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SourceBoundingRect can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) SourceBoundingRect() QRectF {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQRectF(C.QGraphicsOpacityEffect_protectedbase_sourceBoundingRect(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// DrawSource can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) DrawSource(painter *QPainter) {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsOpacityEffect_protectedbase_drawSource(&_dynamic_cast_ok, unsafe.Pointer(this.h), painter.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// SourcePixmap can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) SourcePixmap() QPixmap {

	var _dynamic_cast_ok C.bool = false
	_goptr := newQPixmap(C.QGraphicsOpacityEffect_protectedbase_sourcePixmap(&_dynamic_cast_ok, unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	_method_ret := *_goptr

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsOpacityEffect_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsOpacityEffect_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsOpacityEffect_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsOpacityEffect that was directly constructed.
func (this *QGraphicsOpacityEffect) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsOpacityEffect_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsOpacityEffect) callVirtualBase_Draw(painter *QPainter) {

	C.QGraphicsOpacityEffect_virtualbase_draw(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QGraphicsOpacityEffect) OnDraw(slot func(super func(painter *QPainter), painter *QPainter)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_draw(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_draw
func miqt_exec_callback_QGraphicsOpacityEffect_draw(self *C.QGraphicsOpacityEffect, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_Draw, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_BoundingRectFor(sourceRect *QRectF) *QRectF {

	_goptr := newQRectF(C.QGraphicsOpacityEffect_virtualbase_boundingRectFor(unsafe.Pointer(this.h), sourceRect.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsOpacityEffect) OnBoundingRectFor(slot func(super func(sourceRect *QRectF) *QRectF, sourceRect *QRectF) *QRectF) {
	ok := C.QGraphicsOpacityEffect_override_virtual_boundingRectFor(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_boundingRectFor
func miqt_exec_callback_QGraphicsOpacityEffect_boundingRectFor(self *C.QGraphicsOpacityEffect, cb C.intptr_t, sourceRect *C.QRectF) *C.QRectF {
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

	C.QGraphicsOpacityEffect_virtualbase_sourceChanged(unsafe.Pointer(this.h), (C.int)(flags))

}
func (this *QGraphicsOpacityEffect) OnSourceChanged(slot func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_sourceChanged(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_sourceChanged
func miqt_exec_callback_QGraphicsOpacityEffect_sourceChanged(self *C.QGraphicsOpacityEffect, cb C.intptr_t, flags C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(flags QGraphicsEffect__ChangeFlag), flags QGraphicsEffect__ChangeFlag))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsEffect__ChangeFlag)(flags)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_SourceChanged, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsOpacityEffect_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsOpacityEffect) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsOpacityEffect_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_event
func miqt_exec_callback_QGraphicsOpacityEffect_event(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsOpacityEffect_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsOpacityEffect) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsOpacityEffect_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_eventFilter
func miqt_exec_callback_QGraphicsOpacityEffect_eventFilter(self *C.QGraphicsOpacityEffect, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsOpacityEffect_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_timerEvent
func miqt_exec_callback_QGraphicsOpacityEffect_timerEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsOpacityEffect_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_childEvent
func miqt_exec_callback_QGraphicsOpacityEffect_childEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsOpacityEffect_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsOpacityEffect) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_customEvent
func miqt_exec_callback_QGraphicsOpacityEffect_customEvent(self *C.QGraphicsOpacityEffect, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsOpacityEffect_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsOpacityEffect) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_connectNotify
func miqt_exec_callback_QGraphicsOpacityEffect_connectNotify(self *C.QGraphicsOpacityEffect, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsOpacityEffect{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsOpacityEffect) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsOpacityEffect_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsOpacityEffect) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsOpacityEffect_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsOpacityEffect_disconnectNotify
func miqt_exec_callback_QGraphicsOpacityEffect_disconnectNotify(self *C.QGraphicsOpacityEffect, cb C.intptr_t, signal *C.QMetaMethod) {
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
	C.QGraphicsOpacityEffect_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsOpacityEffect) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsOpacityEffect) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
