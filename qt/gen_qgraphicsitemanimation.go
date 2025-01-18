package qt

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
	h          *C.QGraphicsItemAnimation
	isSubclass bool
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

	ret := newQGraphicsItemAnimation(C.QGraphicsItemAnimation_new())
	ret.isSubclass = true
	return ret
}

// NewQGraphicsItemAnimation2 constructs a new QGraphicsItemAnimation object.
func NewQGraphicsItemAnimation2(parent *QObject) *QGraphicsItemAnimation {

	ret := newQGraphicsItemAnimation(C.QGraphicsItemAnimation_new2(parent.cPointer()))
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsItemAnimation) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsItemAnimation_MetaObject(this.h))
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

func QGraphicsItemAnimation_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItemAnimation) Item() *QGraphicsItem {
	return newQGraphicsItem(C.QGraphicsItemAnimation_Item(this.h))
}

func (this *QGraphicsItemAnimation) SetItem(item *QGraphicsItem) {
	C.QGraphicsItemAnimation_SetItem(this.h, item.cPointer())
}

func (this *QGraphicsItemAnimation) TimeLine() *QTimeLine {
	return newQTimeLine(C.QGraphicsItemAnimation_TimeLine(this.h))
}

func (this *QGraphicsItemAnimation) SetTimeLine(timeLine *QTimeLine) {
	C.QGraphicsItemAnimation_SetTimeLine(this.h, timeLine.cPointer())
}

func (this *QGraphicsItemAnimation) PosAt(step float64) *QPointF {
	_goptr := newQPointF(C.QGraphicsItemAnimation_PosAt(this.h, (C.double)(step)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) PosList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_PosList(this.h)
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
	C.QGraphicsItemAnimation_SetPosAt(this.h, (C.double)(step), pos.cPointer())
}

func (this *QGraphicsItemAnimation) MatrixAt(step float64) *QMatrix {
	_goptr := newQMatrix(C.QGraphicsItemAnimation_MatrixAt(this.h, (C.double)(step)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) TransformAt(step float64) *QTransform {
	_goptr := newQTransform(C.QGraphicsItemAnimation_TransformAt(this.h, (C.double)(step)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsItemAnimation) RotationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_RotationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) RotationList() []struct {
	First  float64
	Second float64
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_RotationList(this.h)
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
	C.QGraphicsItemAnimation_SetRotationAt(this.h, (C.double)(step), (C.double)(angle))
}

func (this *QGraphicsItemAnimation) XTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_XTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) YTranslationAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_YTranslationAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) TranslationList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_TranslationList(this.h)
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
	C.QGraphicsItemAnimation_SetTranslationAt(this.h, (C.double)(step), (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsItemAnimation) VerticalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_VerticalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalScaleAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_HorizontalScaleAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) ScaleList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_ScaleList(this.h)
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
	C.QGraphicsItemAnimation_SetScaleAt(this.h, (C.double)(step), (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsItemAnimation) VerticalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_VerticalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) HorizontalShearAt(step float64) float64 {
	return (float64)(C.QGraphicsItemAnimation_HorizontalShearAt(this.h, (C.double)(step)))
}

func (this *QGraphicsItemAnimation) ShearList() []struct {
	First  float64
	Second QPointF
} {
	var _ma C.struct_miqt_array = C.QGraphicsItemAnimation_ShearList(this.h)
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
	C.QGraphicsItemAnimation_SetShearAt(this.h, (C.double)(step), (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsItemAnimation) Clear() {
	C.QGraphicsItemAnimation_Clear(this.h)
}

func (this *QGraphicsItemAnimation) SetStep(x float64) {
	C.QGraphicsItemAnimation_SetStep(this.h, (C.double)(x))
}

func (this *QGraphicsItemAnimation) Reset() {
	C.QGraphicsItemAnimation_Reset(this.h)
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

func QGraphicsItemAnimation_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsItemAnimation_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsItemAnimation_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsItemAnimation) callVirtualBase_BeforeAnimationStep(step float64) {

	C.QGraphicsItemAnimation_virtualbase_BeforeAnimationStep(unsafe.Pointer(this.h), (C.double)(step))

}
func (this *QGraphicsItemAnimation) OnBeforeAnimationStep(slot func(super func(step float64), step float64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_BeforeAnimationStep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_BeforeAnimationStep
func miqt_exec_callback_QGraphicsItemAnimation_BeforeAnimationStep(self *C.QGraphicsItemAnimation, cb C.intptr_t, step C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(step float64), step float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(step)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_BeforeAnimationStep, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_AfterAnimationStep(step float64) {

	C.QGraphicsItemAnimation_virtualbase_AfterAnimationStep(unsafe.Pointer(this.h), (C.double)(step))

}
func (this *QGraphicsItemAnimation) OnAfterAnimationStep(slot func(super func(step float64), step float64)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_AfterAnimationStep(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_AfterAnimationStep
func miqt_exec_callback_QGraphicsItemAnimation_AfterAnimationStep(self *C.QGraphicsItemAnimation, cb C.intptr_t, step C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(step float64), step float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (float64)(step)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_AfterAnimationStep, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsItemAnimation_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsItemAnimation) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_Event
func miqt_exec_callback_QGraphicsItemAnimation_Event(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QEvent) C.bool {
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

	return (bool)(C.QGraphicsItemAnimation_virtualbase_EventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsItemAnimation) OnEventFilter(slot func(super func(watched *QObject, event *QEvent) bool, watched *QObject, event *QEvent) bool) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_EventFilter
func miqt_exec_callback_QGraphicsItemAnimation_EventFilter(self *C.QGraphicsItemAnimation, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
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

	C.QGraphicsItemAnimation_virtualbase_TimerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_TimerEvent
func miqt_exec_callback_QGraphicsItemAnimation_TimerEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsItemAnimation_virtualbase_ChildEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_ChildEvent
func miqt_exec_callback_QGraphicsItemAnimation_ChildEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsItemAnimation_virtualbase_CustomEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsItemAnimation) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_CustomEvent
func miqt_exec_callback_QGraphicsItemAnimation_CustomEvent(self *C.QGraphicsItemAnimation, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsItemAnimation_virtualbase_ConnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsItemAnimation) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_ConnectNotify
func miqt_exec_callback_QGraphicsItemAnimation_ConnectNotify(self *C.QGraphicsItemAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsItemAnimation{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsItemAnimation) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsItemAnimation_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsItemAnimation) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsItemAnimation_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsItemAnimation_DisconnectNotify
func miqt_exec_callback_QGraphicsItemAnimation_DisconnectNotify(self *C.QGraphicsItemAnimation, cb C.intptr_t, signal *C.QMetaMethod) {
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
