package qt6

/*

#include "gen_qgraphicsitemanimation.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
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

// newQGraphicsItemAnimation constructs the type using only CGO pointers.
func newQGraphicsItemAnimation(h *C.QGraphicsItemAnimation) *QGraphicsItemAnimation {
	if h == nil {
		return nil
	}
	var outptr_QObject *C.QObject = nil
	C.QGraphicsItemAnimation_virtbase(h, &outptr_QObject)

	return &QGraphicsItemAnimation{h: h,
		QObject: newQObject(outptr_QObject)}
}

// UnsafeNewQGraphicsItemAnimation constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsItemAnimation(h unsafe.Pointer) *QGraphicsItemAnimation {
	return newQGraphicsItemAnimation((*C.QGraphicsItemAnimation)(h))
}

// NewQGraphicsItemAnimation constructs a new QGraphicsItemAnimation object.
func NewQGraphicsItemAnimation() *QGraphicsItemAnimation {

	return newQGraphicsItemAnimation(C.QGraphicsItemAnimation_new())
}

// NewQGraphicsItemAnimation2 constructs a new QGraphicsItemAnimation object.
func NewQGraphicsItemAnimation2(parent *QObject) *QGraphicsItemAnimation {

	return newQGraphicsItemAnimation(C.QGraphicsItemAnimation_new2(parent.cPointer()))
}

func (this *QGraphicsItemAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsItemAnimation_metaObject(this.h))
}

func (this *QGraphicsItemAnimation) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsItemAnimation_metacast(this.h, param1_Cstring))
}

func QGraphicsItemAnimation_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItemAnimation) Item() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItemAnimation_item(this.h))
}

func (this *QGraphicsItemAnimation) SetItem(item *QGraphicsItem) {
	C.QGraphicsItemAnimation_setItem(this.h, item.cPointer())
}

func (this *QGraphicsItemAnimation) TimeLine() *QTimeLine {
	return newQTimeLine(C.QGraphicsItemAnimation_timeLine(this.h))
}

func (this *QGraphicsItemAnimation) SetTimeLine(timeLine *QTimeLine) {
	C.QGraphicsItemAnimation_setTimeLine(this.h, timeLine.cPointer())
}

func (this *QGraphicsItemAnimation) PosAt(step float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItemAnimation_posAt(this.h, (C.double)(step)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) PosList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_posList(this.h)
	_ret := make([]struct {
		First  float64
		Second QPointF
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]*C.QPointF)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_second_goptr := newQPointF(_lv_Second_CArray[0])
		_lv_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_Second := *_lv_second_goptr

		_ret[i] = struct {
			First  float64
			Second QPointF
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QGraphicsItemAnimation) SetPosAt(step float64, pos *QPointF) {
	C.QGraphicsItemAnimation_setPosAt(this.h, (C.double)(step), pos.cPointer())
}

func (this *QGraphicsItemAnimation) TransformAt(step float64) *QTransform {
	_goptr := newQTransform(C.QGraphicsItemAnimation_transformAt(this.h, (C.double)(step)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) RotationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_rotationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) RotationList() []struct {
	First  float64
	Second float64
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_rotationList(this.h)
	_ret := make([]struct {
		First  float64
		Second float64
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_entry_Second := (float64)(_lv_Second_CArray[0])

		_ret[i] = struct {
			First  float64
			Second float64
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QGraphicsItemAnimation) SetRotationAt(step float64, angle float64) {
	C.QGraphicsItemAnimation_setRotationAt(this.h, (C.double)(step), (C.double)(angle))
}

func (this *QGraphicsItemAnimation) XTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_xTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) YTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_yTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) TranslationList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_translationList(this.h)
	_ret := make([]struct {
		First  float64
		Second QPointF
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]*C.QPointF)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_second_goptr := newQPointF(_lv_Second_CArray[0])
		_lv_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_Second := *_lv_second_goptr

		_ret[i] = struct {
			First  float64
			Second QPointF
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QGraphicsItemAnimation) SetTranslationAt(step float64, dx float64, dy float64) {
	C.QGraphicsItemAnimation_setTranslationAt(this.h, (C.double)(step), (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItemAnimation) VerticalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_verticalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_horizontalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) ScaleList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_scaleList(this.h)
	_ret := make([]struct {
		First  float64
		Second QPointF
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]*C.QPointF)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_second_goptr := newQPointF(_lv_Second_CArray[0])
		_lv_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_Second := *_lv_second_goptr

		_ret[i] = struct {
			First  float64
			Second QPointF
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QGraphicsItemAnimation) SetScaleAt(step float64, sx float64, sy float64) {
	C.QGraphicsItemAnimation_setScaleAt(this.h, (C.double)(step), (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsItemAnimation) VerticalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_verticalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_horizontalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) ShearList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_shearList(this.h)
	_ret := make([]struct {
		First  float64
		Second QPointF
	}, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_map)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_mm C.struct_miqt_map = _outCast[i]
		_lv_First_CArray := (*[0xffff]C.double)(unsafe.Pointer(_lv_mm.keys))
		_lv_Second_CArray := (*[0xffff]*C.QPointF)(unsafe.Pointer(_lv_mm.values))
		_lv_entry_First := (float64)(_lv_First_CArray[0])

		_lv_second_goptr := newQPointF(_lv_Second_CArray[0])
		_lv_second_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_lv_entry_Second := *_lv_second_goptr

		_ret[i] = struct {
			First  float64
			Second QPointF
		}{First: _lv_entry_First, Second: _lv_entry_Second}
	}
	return _ret
}

func (this *QGraphicsItemAnimation) SetShearAt(step float64, sh float64, sv float64) {
	C.QGraphicsItemAnimation_setShearAt(this.h, (C.double)(step), (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsItemAnimation) Clear() {
	C.QGraphicsItemAnimation_clear(this.h)
}

func (this *QGraphicsItemAnimation) SetStep(x float64) {
	C.QGraphicsItemAnimation_setStep(this.h, (C.double)(x))
}

func QGraphicsItemAnimation_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsItemAnimation_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Sender can only be called from a QGraphicsItemAnimation that was directly constructed.
func (this *QGraphicsItemAnimation) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QGraphicsItemAnimation_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsItemAnimation that was directly constructed.
func (this *QGraphicsItemAnimation) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsItemAnimation_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsItemAnimation that was directly constructed.
func (this *QGraphicsItemAnimation) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsItemAnimation_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsItemAnimation that was directly constructed.
func (this *QGraphicsItemAnimation) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsItemAnimation_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QGraphicsItemAnimation) callVirtualBase_BeforeAnimationStep(step float64) {

	C.QGraphicsItemAnimation_virtualbase_beforeAnimationStep(unsafe.Pointer(this.h), (C.double)(step))

}
func (this *QGraphicsItemAnimation) OnBeforeAnimationStep(slot func(super func(step float64), step float64)) {
	ok := C.QGraphicsItemAnimation_override_virtual_beforeAnimationStep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_beforeAnimationStep
func miqt_exec_callback_QGraphicsItemAnimation_beforeAnimationStep(self *C.QGraphicsItemAnimation, cb C.intptr_t, step C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(step float64), step float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(step)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_BeforeAnimationStep, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_AfterAnimationStep(step float64) {

	C.QGraphicsItemAnimation_virtualbase_afterAnimationStep(unsafe.Pointer(this.h), (C.double)(step))

}
func (this *QGraphicsItemAnimation) OnAfterAnimationStep(slot func(super func(step float64), step float64)) {
	ok := C.QGraphicsItemAnimation_override_virtual_afterAnimationStep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_afterAnimationStep
func miqt_exec_callback_QGraphicsItemAnimation_afterAnimationStep(self *C.QGraphicsItemAnimation, cb C.intptr_t, step C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(step float64), step float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(step)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_AfterAnimationStep, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsItemAnimation_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsItemAnimation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsItemAnimation_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_event
func miqt_exec_callback_QGraphicsItemAnimation_event(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemAnimation) callVirtualBase_EventFilter(watched *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsItemAnimation_virtualbase_eventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsItemAnimation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	ok := C.QGraphicsItemAnimation_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_eventFilter
func miqt_exec_callback_QGraphicsItemAnimation_eventFilter(self *C.QGraphicsItemAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsItemAnimation) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsItemAnimation_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsItemAnimation_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_timerEvent
func miqt_exec_callback_QGraphicsItemAnimation_timerEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsItemAnimation_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsItemAnimation_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_childEvent
func miqt_exec_callback_QGraphicsItemAnimation_childEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsItemAnimation_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsItemAnimation_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_customEvent
func miqt_exec_callback_QGraphicsItemAnimation_customEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsItemAnimation_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsItemAnimation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsItemAnimation_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_connectNotify
func miqt_exec_callback_QGraphicsItemAnimation_connectNotify(self *C.QGraphicsItemAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsItemAnimation_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsItemAnimation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsItemAnimation_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsItemAnimation_disconnectNotify
func miqt_exec_callback_QGraphicsItemAnimation_disconnectNotify(self *C.QGraphicsItemAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsItemAnimation) Delete() {
	C.QGraphicsItemAnimation_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsItemAnimation) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsItemAnimation) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
