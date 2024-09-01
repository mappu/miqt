package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QInputEvent struct {
	h *C.QInputEvent
	*QEvent
}

func (this *QInputEvent) cPointer() *C.QInputEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInputEvent(h *C.QInputEvent) *QInputEvent {
	if h == nil {
		return nil
	}
	return &QInputEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQInputEvent_U(h unsafe.Pointer) *QInputEvent {
	return newQInputEvent((*C.QInputEvent)(h))
}

// NewQInputEvent constructs a new QInputEvent object.
func NewQInputEvent(typeVal uintptr) *QInputEvent {
	ret := C.QInputEvent_new((C.uintptr_t)(typeVal))
	return newQInputEvent(ret)
}

// NewQInputEvent2 constructs a new QInputEvent object.
func NewQInputEvent2(param1 *QInputEvent) *QInputEvent {
	ret := C.QInputEvent_new2(param1.cPointer())
	return newQInputEvent(ret)
}

// NewQInputEvent3 constructs a new QInputEvent object.
func NewQInputEvent3(typeVal uintptr, modifiers int) *QInputEvent {
	ret := C.QInputEvent_new3((C.uintptr_t)(typeVal), (C.int)(modifiers))
	return newQInputEvent(ret)
}

func (this *QInputEvent) Modifiers() int {
	ret := C.QInputEvent_Modifiers(this.h)
	return (int)(ret)
}

func (this *QInputEvent) SetModifiers(amodifiers int) {
	C.QInputEvent_SetModifiers(this.h, (C.int)(amodifiers))
}

func (this *QInputEvent) Timestamp() uint64 {
	ret := C.QInputEvent_Timestamp(this.h)
	return (uint64)(ret)
}

func (this *QInputEvent) SetTimestamp(atimestamp uint64) {
	C.QInputEvent_SetTimestamp(this.h, (C.ulong)(atimestamp))
}

func (this *QInputEvent) Delete() {
	C.QInputEvent_Delete(this.h)
}

type QEnterEvent struct {
	h *C.QEnterEvent
	*QEvent
}

func (this *QEnterEvent) cPointer() *C.QEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQEnterEvent(h *C.QEnterEvent) *QEnterEvent {
	if h == nil {
		return nil
	}
	return &QEnterEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQEnterEvent_U(h unsafe.Pointer) *QEnterEvent {
	return newQEnterEvent((*C.QEnterEvent)(h))
}

// NewQEnterEvent constructs a new QEnterEvent object.
func NewQEnterEvent(localPos *QPointF, windowPos *QPointF, screenPos *QPointF) *QEnterEvent {
	ret := C.QEnterEvent_new(localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer())
	return newQEnterEvent(ret)
}

// NewQEnterEvent2 constructs a new QEnterEvent object.
func NewQEnterEvent2(param1 *QEnterEvent) *QEnterEvent {
	ret := C.QEnterEvent_new2(param1.cPointer())
	return newQEnterEvent(ret)
}

func (this *QEnterEvent) Pos() *QPoint {
	ret := C.QEnterEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QEnterEvent) GlobalPos() *QPoint {
	ret := C.QEnterEvent_GlobalPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QEnterEvent) X() int {
	ret := C.QEnterEvent_X(this.h)
	return (int)(ret)
}

func (this *QEnterEvent) Y() int {
	ret := C.QEnterEvent_Y(this.h)
	return (int)(ret)
}

func (this *QEnterEvent) GlobalX() int {
	ret := C.QEnterEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QEnterEvent) GlobalY() int {
	ret := C.QEnterEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QEnterEvent) LocalPos() *QPointF {
	ret := C.QEnterEvent_LocalPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QEnterEvent) WindowPos() *QPointF {
	ret := C.QEnterEvent_WindowPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QEnterEvent) ScreenPos() *QPointF {
	ret := C.QEnterEvent_ScreenPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QEnterEvent) Delete() {
	C.QEnterEvent_Delete(this.h)
}

type QMouseEvent struct {
	h *C.QMouseEvent
	*QInputEvent
}

func (this *QMouseEvent) cPointer() *C.QMouseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMouseEvent(h *C.QMouseEvent) *QMouseEvent {
	if h == nil {
		return nil
	}
	return &QMouseEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQMouseEvent_U(h unsafe.Pointer) *QMouseEvent {
	return newQMouseEvent((*C.QMouseEvent)(h))
}

// NewQMouseEvent constructs a new QMouseEvent object.
func NewQMouseEvent(typeVal uintptr, localPos *QPointF, button uintptr, buttons int, modifiers int) *QMouseEvent {
	ret := C.QMouseEvent_new((C.uintptr_t)(typeVal), localPos.cPointer(), (C.uintptr_t)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent2 constructs a new QMouseEvent object.
func NewQMouseEvent2(typeVal uintptr, localPos *QPointF, screenPos *QPointF, button uintptr, buttons int, modifiers int) *QMouseEvent {
	ret := C.QMouseEvent_new2((C.uintptr_t)(typeVal), localPos.cPointer(), screenPos.cPointer(), (C.uintptr_t)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent3 constructs a new QMouseEvent object.
func NewQMouseEvent3(typeVal uintptr, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button uintptr, buttons int, modifiers int) *QMouseEvent {
	ret := C.QMouseEvent_new3((C.uintptr_t)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.uintptr_t)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent4 constructs a new QMouseEvent object.
func NewQMouseEvent4(typeVal uintptr, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button uintptr, buttons int, modifiers int, source uintptr) *QMouseEvent {
	ret := C.QMouseEvent_new4((C.uintptr_t)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.uintptr_t)(button), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(source))
	return newQMouseEvent(ret)
}

// NewQMouseEvent5 constructs a new QMouseEvent object.
func NewQMouseEvent5(param1 *QMouseEvent) *QMouseEvent {
	ret := C.QMouseEvent_new5(param1.cPointer())
	return newQMouseEvent(ret)
}

func (this *QMouseEvent) Pos() *QPoint {
	ret := C.QMouseEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMouseEvent) GlobalPos() *QPoint {
	ret := C.QMouseEvent_GlobalPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QMouseEvent) X() int {
	ret := C.QMouseEvent_X(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) Y() int {
	ret := C.QMouseEvent_Y(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) GlobalX() int {
	ret := C.QMouseEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) GlobalY() int {
	ret := C.QMouseEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) LocalPos() *QPointF {
	ret := C.QMouseEvent_LocalPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QMouseEvent) WindowPos() *QPointF {
	ret := C.QMouseEvent_WindowPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QMouseEvent) ScreenPos() *QPointF {
	ret := C.QMouseEvent_ScreenPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QMouseEvent) Button() uintptr {
	ret := C.QMouseEvent_Button(this.h)
	return (uintptr)(ret)
}

func (this *QMouseEvent) Buttons() int {
	ret := C.QMouseEvent_Buttons(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) SetLocalPos(localPosition *QPointF) {
	C.QMouseEvent_SetLocalPos(this.h, localPosition.cPointer())
}

func (this *QMouseEvent) Source() uintptr {
	ret := C.QMouseEvent_Source(this.h)
	return (uintptr)(ret)
}

func (this *QMouseEvent) Flags() int {
	ret := C.QMouseEvent_Flags(this.h)
	return (int)(ret)
}

func (this *QMouseEvent) Delete() {
	C.QMouseEvent_Delete(this.h)
}

type QHoverEvent struct {
	h *C.QHoverEvent
	*QInputEvent
}

func (this *QHoverEvent) cPointer() *C.QHoverEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHoverEvent(h *C.QHoverEvent) *QHoverEvent {
	if h == nil {
		return nil
	}
	return &QHoverEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQHoverEvent_U(h unsafe.Pointer) *QHoverEvent {
	return newQHoverEvent((*C.QHoverEvent)(h))
}

// NewQHoverEvent constructs a new QHoverEvent object.
func NewQHoverEvent(typeVal uintptr, pos *QPointF, oldPos *QPointF) *QHoverEvent {
	ret := C.QHoverEvent_new((C.uintptr_t)(typeVal), pos.cPointer(), oldPos.cPointer())
	return newQHoverEvent(ret)
}

// NewQHoverEvent2 constructs a new QHoverEvent object.
func NewQHoverEvent2(param1 *QHoverEvent) *QHoverEvent {
	ret := C.QHoverEvent_new2(param1.cPointer())
	return newQHoverEvent(ret)
}

// NewQHoverEvent3 constructs a new QHoverEvent object.
func NewQHoverEvent3(typeVal uintptr, pos *QPointF, oldPos *QPointF, modifiers int) *QHoverEvent {
	ret := C.QHoverEvent_new3((C.uintptr_t)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers))
	return newQHoverEvent(ret)
}

func (this *QHoverEvent) Pos() *QPoint {
	ret := C.QHoverEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QHoverEvent) OldPos() *QPoint {
	ret := C.QHoverEvent_OldPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QHoverEvent) PosF() *QPointF {
	ret := C.QHoverEvent_PosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QHoverEvent) OldPosF() *QPointF {
	ret := C.QHoverEvent_OldPosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QHoverEvent) Delete() {
	C.QHoverEvent_Delete(this.h)
}

type QWheelEvent struct {
	h *C.QWheelEvent
	*QInputEvent
}

func (this *QWheelEvent) cPointer() *C.QWheelEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWheelEvent(h *C.QWheelEvent) *QWheelEvent {
	if h == nil {
		return nil
	}
	return &QWheelEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQWheelEvent_U(h unsafe.Pointer) *QWheelEvent {
	return newQWheelEvent((*C.QWheelEvent)(h))
}

// NewQWheelEvent constructs a new QWheelEvent object.
func NewQWheelEvent(pos *QPointF, delta int, buttons int, modifiers int) *QWheelEvent {
	ret := C.QWheelEvent_new(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent2 constructs a new QWheelEvent object.
func NewQWheelEvent2(pos *QPointF, globalPos *QPointF, delta int, buttons int, modifiers int) *QWheelEvent {
	ret := C.QWheelEvent_new2(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent3 constructs a new QWheelEvent object.
func NewQWheelEvent3(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation uintptr, buttons int, modifiers int) *QWheelEvent {
	ret := C.QWheelEvent_new3(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.uintptr_t)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent4 constructs a new QWheelEvent object.
func NewQWheelEvent4(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation uintptr, buttons int, modifiers int, phase uintptr) *QWheelEvent {
	ret := C.QWheelEvent_new4(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.uintptr_t)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(phase))
	return newQWheelEvent(ret)
}

// NewQWheelEvent5 constructs a new QWheelEvent object.
func NewQWheelEvent5(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation uintptr, buttons int, modifiers int, phase uintptr, source uintptr) *QWheelEvent {
	ret := C.QWheelEvent_new5(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.uintptr_t)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(phase), (C.uintptr_t)(source))
	return newQWheelEvent(ret)
}

// NewQWheelEvent6 constructs a new QWheelEvent object.
func NewQWheelEvent6(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation uintptr, buttons int, modifiers int, phase uintptr, source uintptr, inverted bool) *QWheelEvent {
	ret := C.QWheelEvent_new6(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.uintptr_t)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(phase), (C.uintptr_t)(source), (C.bool)(inverted))
	return newQWheelEvent(ret)
}

// NewQWheelEvent7 constructs a new QWheelEvent object.
func NewQWheelEvent7(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons int, modifiers int, phase uintptr, inverted bool) *QWheelEvent {
	ret := C.QWheelEvent_new7(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(phase), (C.bool)(inverted))
	return newQWheelEvent(ret)
}

// NewQWheelEvent8 constructs a new QWheelEvent object.
func NewQWheelEvent8(param1 *QWheelEvent) *QWheelEvent {
	ret := C.QWheelEvent_new8(param1.cPointer())
	return newQWheelEvent(ret)
}

// NewQWheelEvent9 constructs a new QWheelEvent object.
func NewQWheelEvent9(pos *QPointF, delta int, buttons int, modifiers int, orient uintptr) *QWheelEvent {
	ret := C.QWheelEvent_new9(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(orient))
	return newQWheelEvent(ret)
}

// NewQWheelEvent10 constructs a new QWheelEvent object.
func NewQWheelEvent10(pos *QPointF, globalPos *QPointF, delta int, buttons int, modifiers int, orient uintptr) *QWheelEvent {
	ret := C.QWheelEvent_new10(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(orient))
	return newQWheelEvent(ret)
}

// NewQWheelEvent11 constructs a new QWheelEvent object.
func NewQWheelEvent11(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons int, modifiers int, phase uintptr, inverted bool, source uintptr) *QWheelEvent {
	ret := C.QWheelEvent_new11(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(phase), (C.bool)(inverted), (C.uintptr_t)(source))
	return newQWheelEvent(ret)
}

func (this *QWheelEvent) PixelDelta() *QPoint {
	ret := C.QWheelEvent_PixelDelta(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) AngleDelta() *QPoint {
	ret := C.QWheelEvent_AngleDelta(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) Delta() int {
	ret := C.QWheelEvent_Delta(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) Orientation() uintptr {
	ret := C.QWheelEvent_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QWheelEvent) Pos() *QPoint {
	ret := C.QWheelEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) GlobalPos() *QPoint {
	ret := C.QWheelEvent_GlobalPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) X() int {
	ret := C.QWheelEvent_X(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) Y() int {
	ret := C.QWheelEvent_Y(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) GlobalX() int {
	ret := C.QWheelEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) GlobalY() int {
	ret := C.QWheelEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) PosF() *QPointF {
	ret := C.QWheelEvent_PosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QWheelEvent) GlobalPosF() *QPointF {
	ret := C.QWheelEvent_GlobalPosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QWheelEvent) Position() *QPointF {
	ret := C.QWheelEvent_Position(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) GlobalPosition() *QPointF {
	ret := C.QWheelEvent_GlobalPosition(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QWheelEvent) Buttons() int {
	ret := C.QWheelEvent_Buttons(this.h)
	return (int)(ret)
}

func (this *QWheelEvent) Phase() uintptr {
	ret := C.QWheelEvent_Phase(this.h)
	return (uintptr)(ret)
}

func (this *QWheelEvent) Inverted() bool {
	ret := C.QWheelEvent_Inverted(this.h)
	return (bool)(ret)
}

func (this *QWheelEvent) Source() uintptr {
	ret := C.QWheelEvent_Source(this.h)
	return (uintptr)(ret)
}

func (this *QWheelEvent) Delete() {
	C.QWheelEvent_Delete(this.h)
}

type QTabletEvent struct {
	h *C.QTabletEvent
	*QInputEvent
}

func (this *QTabletEvent) cPointer() *C.QTabletEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTabletEvent(h *C.QTabletEvent) *QTabletEvent {
	if h == nil {
		return nil
	}
	return &QTabletEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQTabletEvent_U(h unsafe.Pointer) *QTabletEvent {
	return newQTabletEvent((*C.QTabletEvent)(h))
}

// NewQTabletEvent constructs a new QTabletEvent object.
func NewQTabletEvent(t uintptr, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState int, uniqueID int64) *QTabletEvent {
	ret := C.QTabletEvent_new((C.uintptr_t)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID))
	return newQTabletEvent(ret)
}

// NewQTabletEvent2 constructs a new QTabletEvent object.
func NewQTabletEvent2(t uintptr, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState int, uniqueID int64, button uintptr, buttons int) *QTabletEvent {
	ret := C.QTabletEvent_new2((C.uintptr_t)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID), (C.uintptr_t)(button), (C.int)(buttons))
	return newQTabletEvent(ret)
}

// NewQTabletEvent3 constructs a new QTabletEvent object.
func NewQTabletEvent3(param1 *QTabletEvent) *QTabletEvent {
	ret := C.QTabletEvent_new3(param1.cPointer())
	return newQTabletEvent(ret)
}

func (this *QTabletEvent) Pos() *QPoint {
	ret := C.QTabletEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabletEvent) GlobalPos() *QPoint {
	ret := C.QTabletEvent_GlobalPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTabletEvent) PosF() *QPointF {
	ret := C.QTabletEvent_PosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QTabletEvent) GlobalPosF() *QPointF {
	ret := C.QTabletEvent_GlobalPosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QTabletEvent) X() int {
	ret := C.QTabletEvent_X(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) Y() int {
	ret := C.QTabletEvent_Y(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) GlobalX() int {
	ret := C.QTabletEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) GlobalY() int {
	ret := C.QTabletEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) HiResGlobalX() float64 {
	ret := C.QTabletEvent_HiResGlobalX(this.h)
	return (float64)(ret)
}

func (this *QTabletEvent) HiResGlobalY() float64 {
	ret := C.QTabletEvent_HiResGlobalY(this.h)
	return (float64)(ret)
}

func (this *QTabletEvent) Device() uintptr {
	ret := C.QTabletEvent_Device(this.h)
	return (uintptr)(ret)
}

func (this *QTabletEvent) DeviceType() uintptr {
	ret := C.QTabletEvent_DeviceType(this.h)
	return (uintptr)(ret)
}

func (this *QTabletEvent) PointerType() uintptr {
	ret := C.QTabletEvent_PointerType(this.h)
	return (uintptr)(ret)
}

func (this *QTabletEvent) UniqueId() int64 {
	ret := C.QTabletEvent_UniqueId(this.h)
	return (int64)(ret)
}

func (this *QTabletEvent) Pressure() float64 {
	ret := C.QTabletEvent_Pressure(this.h)
	return (float64)(ret)
}

func (this *QTabletEvent) Z() int {
	ret := C.QTabletEvent_Z(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) TangentialPressure() float64 {
	ret := C.QTabletEvent_TangentialPressure(this.h)
	return (float64)(ret)
}

func (this *QTabletEvent) Rotation() float64 {
	ret := C.QTabletEvent_Rotation(this.h)
	return (float64)(ret)
}

func (this *QTabletEvent) XTilt() int {
	ret := C.QTabletEvent_XTilt(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) YTilt() int {
	ret := C.QTabletEvent_YTilt(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) Button() uintptr {
	ret := C.QTabletEvent_Button(this.h)
	return (uintptr)(ret)
}

func (this *QTabletEvent) Buttons() int {
	ret := C.QTabletEvent_Buttons(this.h)
	return (int)(ret)
}

func (this *QTabletEvent) Delete() {
	C.QTabletEvent_Delete(this.h)
}

type QNativeGestureEvent struct {
	h *C.QNativeGestureEvent
	*QInputEvent
}

func (this *QNativeGestureEvent) cPointer() *C.QNativeGestureEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQNativeGestureEvent(h *C.QNativeGestureEvent) *QNativeGestureEvent {
	if h == nil {
		return nil
	}
	return &QNativeGestureEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQNativeGestureEvent_U(h unsafe.Pointer) *QNativeGestureEvent {
	return newQNativeGestureEvent((*C.QNativeGestureEvent)(h))
}

// NewQNativeGestureEvent constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent(typeVal uintptr, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new((C.uintptr_t)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument))
	return newQNativeGestureEvent(ret)
}

// NewQNativeGestureEvent2 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent2(typeVal uintptr, dev *QTouchDevice, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new2((C.uintptr_t)(typeVal), dev.cPointer(), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument))
	return newQNativeGestureEvent(ret)
}

// NewQNativeGestureEvent3 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent3(param1 *QNativeGestureEvent) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new3(param1.cPointer())
	return newQNativeGestureEvent(ret)
}

func (this *QNativeGestureEvent) GestureType() uintptr {
	ret := C.QNativeGestureEvent_GestureType(this.h)
	return (uintptr)(ret)
}

func (this *QNativeGestureEvent) Value() float64 {
	ret := C.QNativeGestureEvent_Value(this.h)
	return (float64)(ret)
}

func (this *QNativeGestureEvent) Pos() *QPoint {
	ret := C.QNativeGestureEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QNativeGestureEvent) GlobalPos() *QPoint {
	ret := C.QNativeGestureEvent_GlobalPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QNativeGestureEvent) LocalPos() *QPointF {
	ret := C.QNativeGestureEvent_LocalPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QNativeGestureEvent) WindowPos() *QPointF {
	ret := C.QNativeGestureEvent_WindowPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QNativeGestureEvent) ScreenPos() *QPointF {
	ret := C.QNativeGestureEvent_ScreenPos(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QNativeGestureEvent) Device() *QTouchDevice {
	ret := C.QNativeGestureEvent_Device(this.h)
	return newQTouchDevice_U(unsafe.Pointer(ret))
}

func (this *QNativeGestureEvent) Delete() {
	C.QNativeGestureEvent_Delete(this.h)
}

type QKeyEvent struct {
	h *C.QKeyEvent
	*QInputEvent
}

func (this *QKeyEvent) cPointer() *C.QKeyEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQKeyEvent(h *C.QKeyEvent) *QKeyEvent {
	if h == nil {
		return nil
	}
	return &QKeyEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQKeyEvent_U(h unsafe.Pointer) *QKeyEvent {
	return newQKeyEvent((*C.QKeyEvent)(h))
}

// NewQKeyEvent constructs a new QKeyEvent object.
func NewQKeyEvent(typeVal uintptr, key int, modifiers int) *QKeyEvent {
	ret := C.QKeyEvent_new((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers))
	return newQKeyEvent(ret)
}

// NewQKeyEvent2 constructs a new QKeyEvent object.
func NewQKeyEvent2(typeVal uintptr, key int, modifiers int, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint) *QKeyEvent {
	ret := C.QKeyEvent_new2((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers))
	return newQKeyEvent(ret)
}

// NewQKeyEvent3 constructs a new QKeyEvent object.
func NewQKeyEvent3(param1 *QKeyEvent) *QKeyEvent {
	ret := C.QKeyEvent_new3(param1.cPointer())
	return newQKeyEvent(ret)
}

// NewQKeyEvent4 constructs a new QKeyEvent object.
func NewQKeyEvent4(typeVal uintptr, key int, modifiers int, text string) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new4((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), text_Cstring, C.ulong(len(text)))
	return newQKeyEvent(ret)
}

// NewQKeyEvent5 constructs a new QKeyEvent object.
func NewQKeyEvent5(typeVal uintptr, key int, modifiers int, text string, autorep bool) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new5((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), text_Cstring, C.ulong(len(text)), (C.bool)(autorep))
	return newQKeyEvent(ret)
}

// NewQKeyEvent6 constructs a new QKeyEvent object.
func NewQKeyEvent6(typeVal uintptr, key int, modifiers int, text string, autorep bool, count uint16) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new6((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), text_Cstring, C.ulong(len(text)), (C.bool)(autorep), (C.uint16_t)(count))
	return newQKeyEvent(ret)
}

// NewQKeyEvent7 constructs a new QKeyEvent object.
func NewQKeyEvent7(typeVal uintptr, key int, modifiers int, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new7((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_Cstring, C.ulong(len(text)))
	return newQKeyEvent(ret)
}

// NewQKeyEvent8 constructs a new QKeyEvent object.
func NewQKeyEvent8(typeVal uintptr, key int, modifiers int, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new8((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_Cstring, C.ulong(len(text)), (C.bool)(autorep))
	return newQKeyEvent(ret)
}

// NewQKeyEvent9 constructs a new QKeyEvent object.
func NewQKeyEvent9(typeVal uintptr, key int, modifiers int, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16) *QKeyEvent {
	text_Cstring := C.CString(text)
	defer C.free(unsafe.Pointer(text_Cstring))
	ret := C.QKeyEvent_new9((C.uintptr_t)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_Cstring, C.ulong(len(text)), (C.bool)(autorep), (C.uint16_t)(count))
	return newQKeyEvent(ret)
}

func (this *QKeyEvent) Key() int {
	ret := C.QKeyEvent_Key(this.h)
	return (int)(ret)
}

func (this *QKeyEvent) Matches(key uintptr) bool {
	ret := C.QKeyEvent_Matches(this.h, (C.uintptr_t)(key))
	return (bool)(ret)
}

func (this *QKeyEvent) Modifiers() int {
	ret := C.QKeyEvent_Modifiers(this.h)
	return (int)(ret)
}

func (this *QKeyEvent) Text() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QKeyEvent_Text(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QKeyEvent) IsAutoRepeat() bool {
	ret := C.QKeyEvent_IsAutoRepeat(this.h)
	return (bool)(ret)
}

func (this *QKeyEvent) Count() int {
	ret := C.QKeyEvent_Count(this.h)
	return (int)(ret)
}

func (this *QKeyEvent) NativeScanCode() uint {
	ret := C.QKeyEvent_NativeScanCode(this.h)
	return (uint)(ret)
}

func (this *QKeyEvent) NativeVirtualKey() uint {
	ret := C.QKeyEvent_NativeVirtualKey(this.h)
	return (uint)(ret)
}

func (this *QKeyEvent) NativeModifiers() uint {
	ret := C.QKeyEvent_NativeModifiers(this.h)
	return (uint)(ret)
}

func (this *QKeyEvent) Delete() {
	C.QKeyEvent_Delete(this.h)
}

type QFocusEvent struct {
	h *C.QFocusEvent
	*QEvent
}

func (this *QFocusEvent) cPointer() *C.QFocusEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFocusEvent(h *C.QFocusEvent) *QFocusEvent {
	if h == nil {
		return nil
	}
	return &QFocusEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQFocusEvent_U(h unsafe.Pointer) *QFocusEvent {
	return newQFocusEvent((*C.QFocusEvent)(h))
}

// NewQFocusEvent constructs a new QFocusEvent object.
func NewQFocusEvent(typeVal uintptr) *QFocusEvent {
	ret := C.QFocusEvent_new((C.uintptr_t)(typeVal))
	return newQFocusEvent(ret)
}

// NewQFocusEvent2 constructs a new QFocusEvent object.
func NewQFocusEvent2(param1 *QFocusEvent) *QFocusEvent {
	ret := C.QFocusEvent_new2(param1.cPointer())
	return newQFocusEvent(ret)
}

// NewQFocusEvent3 constructs a new QFocusEvent object.
func NewQFocusEvent3(typeVal uintptr, reason uintptr) *QFocusEvent {
	ret := C.QFocusEvent_new3((C.uintptr_t)(typeVal), (C.uintptr_t)(reason))
	return newQFocusEvent(ret)
}

func (this *QFocusEvent) GotFocus() bool {
	ret := C.QFocusEvent_GotFocus(this.h)
	return (bool)(ret)
}

func (this *QFocusEvent) LostFocus() bool {
	ret := C.QFocusEvent_LostFocus(this.h)
	return (bool)(ret)
}

func (this *QFocusEvent) Reason() uintptr {
	ret := C.QFocusEvent_Reason(this.h)
	return (uintptr)(ret)
}

func (this *QFocusEvent) Delete() {
	C.QFocusEvent_Delete(this.h)
}

type QPaintEvent struct {
	h *C.QPaintEvent
	*QEvent
}

func (this *QPaintEvent) cPointer() *C.QPaintEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPaintEvent(h *C.QPaintEvent) *QPaintEvent {
	if h == nil {
		return nil
	}
	return &QPaintEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQPaintEvent_U(h unsafe.Pointer) *QPaintEvent {
	return newQPaintEvent((*C.QPaintEvent)(h))
}

// NewQPaintEvent constructs a new QPaintEvent object.
func NewQPaintEvent(paintRegion *QRegion) *QPaintEvent {
	ret := C.QPaintEvent_new(paintRegion.cPointer())
	return newQPaintEvent(ret)
}

// NewQPaintEvent2 constructs a new QPaintEvent object.
func NewQPaintEvent2(paintRect *QRect) *QPaintEvent {
	ret := C.QPaintEvent_new2(paintRect.cPointer())
	return newQPaintEvent(ret)
}

// NewQPaintEvent3 constructs a new QPaintEvent object.
func NewQPaintEvent3(param1 *QPaintEvent) *QPaintEvent {
	ret := C.QPaintEvent_new3(param1.cPointer())
	return newQPaintEvent(ret)
}

func (this *QPaintEvent) Rect() *QRect {
	ret := C.QPaintEvent_Rect(this.h)
	return newQRect_U(unsafe.Pointer(ret))
}

func (this *QPaintEvent) Region() *QRegion {
	ret := C.QPaintEvent_Region(this.h)
	return newQRegion_U(unsafe.Pointer(ret))
}

func (this *QPaintEvent) Delete() {
	C.QPaintEvent_Delete(this.h)
}

type QMoveEvent struct {
	h *C.QMoveEvent
	*QEvent
}

func (this *QMoveEvent) cPointer() *C.QMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQMoveEvent(h *C.QMoveEvent) *QMoveEvent {
	if h == nil {
		return nil
	}
	return &QMoveEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQMoveEvent_U(h unsafe.Pointer) *QMoveEvent {
	return newQMoveEvent((*C.QMoveEvent)(h))
}

// NewQMoveEvent constructs a new QMoveEvent object.
func NewQMoveEvent(pos *QPoint, oldPos *QPoint) *QMoveEvent {
	ret := C.QMoveEvent_new(pos.cPointer(), oldPos.cPointer())
	return newQMoveEvent(ret)
}

// NewQMoveEvent2 constructs a new QMoveEvent object.
func NewQMoveEvent2(param1 *QMoveEvent) *QMoveEvent {
	ret := C.QMoveEvent_new2(param1.cPointer())
	return newQMoveEvent(ret)
}

func (this *QMoveEvent) Pos() *QPoint {
	ret := C.QMoveEvent_Pos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QMoveEvent) OldPos() *QPoint {
	ret := C.QMoveEvent_OldPos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QMoveEvent) Delete() {
	C.QMoveEvent_Delete(this.h)
}

type QExposeEvent struct {
	h *C.QExposeEvent
	*QEvent
}

func (this *QExposeEvent) cPointer() *C.QExposeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQExposeEvent(h *C.QExposeEvent) *QExposeEvent {
	if h == nil {
		return nil
	}
	return &QExposeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQExposeEvent_U(h unsafe.Pointer) *QExposeEvent {
	return newQExposeEvent((*C.QExposeEvent)(h))
}

// NewQExposeEvent constructs a new QExposeEvent object.
func NewQExposeEvent(rgn *QRegion) *QExposeEvent {
	ret := C.QExposeEvent_new(rgn.cPointer())
	return newQExposeEvent(ret)
}

// NewQExposeEvent2 constructs a new QExposeEvent object.
func NewQExposeEvent2(param1 *QExposeEvent) *QExposeEvent {
	ret := C.QExposeEvent_new2(param1.cPointer())
	return newQExposeEvent(ret)
}

func (this *QExposeEvent) Region() *QRegion {
	ret := C.QExposeEvent_Region(this.h)
	return newQRegion_U(unsafe.Pointer(ret))
}

func (this *QExposeEvent) Delete() {
	C.QExposeEvent_Delete(this.h)
}

type QPlatformSurfaceEvent struct {
	h *C.QPlatformSurfaceEvent
	*QEvent
}

func (this *QPlatformSurfaceEvent) cPointer() *C.QPlatformSurfaceEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPlatformSurfaceEvent(h *C.QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	if h == nil {
		return nil
	}
	return &QPlatformSurfaceEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQPlatformSurfaceEvent_U(h unsafe.Pointer) *QPlatformSurfaceEvent {
	return newQPlatformSurfaceEvent((*C.QPlatformSurfaceEvent)(h))
}

// NewQPlatformSurfaceEvent constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent(surfaceEventType uintptr) *QPlatformSurfaceEvent {
	ret := C.QPlatformSurfaceEvent_new((C.uintptr_t)(surfaceEventType))
	return newQPlatformSurfaceEvent(ret)
}

// NewQPlatformSurfaceEvent2 constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent2(param1 *QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	ret := C.QPlatformSurfaceEvent_new2(param1.cPointer())
	return newQPlatformSurfaceEvent(ret)
}

func (this *QPlatformSurfaceEvent) SurfaceEventType() uintptr {
	ret := C.QPlatformSurfaceEvent_SurfaceEventType(this.h)
	return (uintptr)(ret)
}

func (this *QPlatformSurfaceEvent) Delete() {
	C.QPlatformSurfaceEvent_Delete(this.h)
}

type QResizeEvent struct {
	h *C.QResizeEvent
	*QEvent
}

func (this *QResizeEvent) cPointer() *C.QResizeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQResizeEvent(h *C.QResizeEvent) *QResizeEvent {
	if h == nil {
		return nil
	}
	return &QResizeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQResizeEvent_U(h unsafe.Pointer) *QResizeEvent {
	return newQResizeEvent((*C.QResizeEvent)(h))
}

// NewQResizeEvent constructs a new QResizeEvent object.
func NewQResizeEvent(size *QSize, oldSize *QSize) *QResizeEvent {
	ret := C.QResizeEvent_new(size.cPointer(), oldSize.cPointer())
	return newQResizeEvent(ret)
}

// NewQResizeEvent2 constructs a new QResizeEvent object.
func NewQResizeEvent2(param1 *QResizeEvent) *QResizeEvent {
	ret := C.QResizeEvent_new2(param1.cPointer())
	return newQResizeEvent(ret)
}

func (this *QResizeEvent) Size() *QSize {
	ret := C.QResizeEvent_Size(this.h)
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QResizeEvent) OldSize() *QSize {
	ret := C.QResizeEvent_OldSize(this.h)
	return newQSize_U(unsafe.Pointer(ret))
}

func (this *QResizeEvent) Delete() {
	C.QResizeEvent_Delete(this.h)
}

type QCloseEvent struct {
	h *C.QCloseEvent
	*QEvent
}

func (this *QCloseEvent) cPointer() *C.QCloseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQCloseEvent(h *C.QCloseEvent) *QCloseEvent {
	if h == nil {
		return nil
	}
	return &QCloseEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQCloseEvent_U(h unsafe.Pointer) *QCloseEvent {
	return newQCloseEvent((*C.QCloseEvent)(h))
}

// NewQCloseEvent constructs a new QCloseEvent object.
func NewQCloseEvent() *QCloseEvent {
	ret := C.QCloseEvent_new()
	return newQCloseEvent(ret)
}

// NewQCloseEvent2 constructs a new QCloseEvent object.
func NewQCloseEvent2(param1 *QCloseEvent) *QCloseEvent {
	ret := C.QCloseEvent_new2(param1.cPointer())
	return newQCloseEvent(ret)
}

func (this *QCloseEvent) OperatorAssign(param1 *QCloseEvent) {
	C.QCloseEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QCloseEvent) Delete() {
	C.QCloseEvent_Delete(this.h)
}

type QIconDragEvent struct {
	h *C.QIconDragEvent
	*QEvent
}

func (this *QIconDragEvent) cPointer() *C.QIconDragEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQIconDragEvent(h *C.QIconDragEvent) *QIconDragEvent {
	if h == nil {
		return nil
	}
	return &QIconDragEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQIconDragEvent_U(h unsafe.Pointer) *QIconDragEvent {
	return newQIconDragEvent((*C.QIconDragEvent)(h))
}

// NewQIconDragEvent constructs a new QIconDragEvent object.
func NewQIconDragEvent() *QIconDragEvent {
	ret := C.QIconDragEvent_new()
	return newQIconDragEvent(ret)
}

// NewQIconDragEvent2 constructs a new QIconDragEvent object.
func NewQIconDragEvent2(param1 *QIconDragEvent) *QIconDragEvent {
	ret := C.QIconDragEvent_new2(param1.cPointer())
	return newQIconDragEvent(ret)
}

func (this *QIconDragEvent) OperatorAssign(param1 *QIconDragEvent) {
	C.QIconDragEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QIconDragEvent) Delete() {
	C.QIconDragEvent_Delete(this.h)
}

type QShowEvent struct {
	h *C.QShowEvent
	*QEvent
}

func (this *QShowEvent) cPointer() *C.QShowEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQShowEvent(h *C.QShowEvent) *QShowEvent {
	if h == nil {
		return nil
	}
	return &QShowEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQShowEvent_U(h unsafe.Pointer) *QShowEvent {
	return newQShowEvent((*C.QShowEvent)(h))
}

// NewQShowEvent constructs a new QShowEvent object.
func NewQShowEvent() *QShowEvent {
	ret := C.QShowEvent_new()
	return newQShowEvent(ret)
}

// NewQShowEvent2 constructs a new QShowEvent object.
func NewQShowEvent2(param1 *QShowEvent) *QShowEvent {
	ret := C.QShowEvent_new2(param1.cPointer())
	return newQShowEvent(ret)
}

func (this *QShowEvent) OperatorAssign(param1 *QShowEvent) {
	C.QShowEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QShowEvent) Delete() {
	C.QShowEvent_Delete(this.h)
}

type QHideEvent struct {
	h *C.QHideEvent
	*QEvent
}

func (this *QHideEvent) cPointer() *C.QHideEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHideEvent(h *C.QHideEvent) *QHideEvent {
	if h == nil {
		return nil
	}
	return &QHideEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQHideEvent_U(h unsafe.Pointer) *QHideEvent {
	return newQHideEvent((*C.QHideEvent)(h))
}

// NewQHideEvent constructs a new QHideEvent object.
func NewQHideEvent() *QHideEvent {
	ret := C.QHideEvent_new()
	return newQHideEvent(ret)
}

// NewQHideEvent2 constructs a new QHideEvent object.
func NewQHideEvent2(param1 *QHideEvent) *QHideEvent {
	ret := C.QHideEvent_new2(param1.cPointer())
	return newQHideEvent(ret)
}

func (this *QHideEvent) OperatorAssign(param1 *QHideEvent) {
	C.QHideEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QHideEvent) Delete() {
	C.QHideEvent_Delete(this.h)
}

type QContextMenuEvent struct {
	h *C.QContextMenuEvent
	*QInputEvent
}

func (this *QContextMenuEvent) cPointer() *C.QContextMenuEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQContextMenuEvent(h *C.QContextMenuEvent) *QContextMenuEvent {
	if h == nil {
		return nil
	}
	return &QContextMenuEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQContextMenuEvent_U(h unsafe.Pointer) *QContextMenuEvent {
	return newQContextMenuEvent((*C.QContextMenuEvent)(h))
}

// NewQContextMenuEvent constructs a new QContextMenuEvent object.
func NewQContextMenuEvent(reason uintptr, pos *QPoint, globalPos *QPoint, modifiers int) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new((C.uintptr_t)(reason), pos.cPointer(), globalPos.cPointer(), (C.int)(modifiers))
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent2 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent2(reason uintptr, pos *QPoint, globalPos *QPoint) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new2((C.uintptr_t)(reason), pos.cPointer(), globalPos.cPointer())
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent3 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent3(reason uintptr, pos *QPoint) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new3((C.uintptr_t)(reason), pos.cPointer())
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent4 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent4(param1 *QContextMenuEvent) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new4(param1.cPointer())
	return newQContextMenuEvent(ret)
}

func (this *QContextMenuEvent) X() int {
	ret := C.QContextMenuEvent_X(this.h)
	return (int)(ret)
}

func (this *QContextMenuEvent) Y() int {
	ret := C.QContextMenuEvent_Y(this.h)
	return (int)(ret)
}

func (this *QContextMenuEvent) GlobalX() int {
	ret := C.QContextMenuEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QContextMenuEvent) GlobalY() int {
	ret := C.QContextMenuEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QContextMenuEvent) Pos() *QPoint {
	ret := C.QContextMenuEvent_Pos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QContextMenuEvent) GlobalPos() *QPoint {
	ret := C.QContextMenuEvent_GlobalPos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QContextMenuEvent) Reason() uintptr {
	ret := C.QContextMenuEvent_Reason(this.h)
	return (uintptr)(ret)
}

func (this *QContextMenuEvent) Delete() {
	C.QContextMenuEvent_Delete(this.h)
}

type QInputMethodEvent struct {
	h *C.QInputMethodEvent
	*QEvent
}

func (this *QInputMethodEvent) cPointer() *C.QInputMethodEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInputMethodEvent(h *C.QInputMethodEvent) *QInputMethodEvent {
	if h == nil {
		return nil
	}
	return &QInputMethodEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQInputMethodEvent_U(h unsafe.Pointer) *QInputMethodEvent {
	return newQInputMethodEvent((*C.QInputMethodEvent)(h))
}

// NewQInputMethodEvent constructs a new QInputMethodEvent object.
func NewQInputMethodEvent() *QInputMethodEvent {
	ret := C.QInputMethodEvent_new()
	return newQInputMethodEvent(ret)
}

// NewQInputMethodEvent2 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent2(preeditText string, attributes []QInputMethodEvent__Attribute) *QInputMethodEvent {
	preeditText_Cstring := C.CString(preeditText)
	defer C.free(unsafe.Pointer(preeditText_Cstring))
	// For the C ABI, malloc a C array of raw pointers
	attributes_CArray := (*[0xffff]*C.QInputMethodEvent__Attribute)(C.malloc(C.ulong(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_CArray))
	for i := range attributes {
		attributes_CArray[i] = attributes[i].cPointer()
	}
	ret := C.QInputMethodEvent_new2(preeditText_Cstring, C.ulong(len(preeditText)), &attributes_CArray[0], C.ulong(len(attributes)))
	return newQInputMethodEvent(ret)
}

// NewQInputMethodEvent3 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent3(other *QInputMethodEvent) *QInputMethodEvent {
	ret := C.QInputMethodEvent_new3(other.cPointer())
	return newQInputMethodEvent(ret)
}

func (this *QInputMethodEvent) SetCommitString(commitString string) {
	commitString_Cstring := C.CString(commitString)
	defer C.free(unsafe.Pointer(commitString_Cstring))
	C.QInputMethodEvent_SetCommitString(this.h, commitString_Cstring, C.ulong(len(commitString)))
}

func (this *QInputMethodEvent) PreeditString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethodEvent_PreeditString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputMethodEvent) CommitString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QInputMethodEvent_CommitString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QInputMethodEvent) ReplacementStart() int {
	ret := C.QInputMethodEvent_ReplacementStart(this.h)
	return (int)(ret)
}

func (this *QInputMethodEvent) ReplacementLength() int {
	ret := C.QInputMethodEvent_ReplacementLength(this.h)
	return (int)(ret)
}

func (this *QInputMethodEvent) SetCommitString2(commitString string, replaceFrom int) {
	commitString_Cstring := C.CString(commitString)
	defer C.free(unsafe.Pointer(commitString_Cstring))
	C.QInputMethodEvent_SetCommitString2(this.h, commitString_Cstring, C.ulong(len(commitString)), (C.int)(replaceFrom))
}

func (this *QInputMethodEvent) SetCommitString3(commitString string, replaceFrom int, replaceLength int) {
	commitString_Cstring := C.CString(commitString)
	defer C.free(unsafe.Pointer(commitString_Cstring))
	C.QInputMethodEvent_SetCommitString3(this.h, commitString_Cstring, C.ulong(len(commitString)), (C.int)(replaceFrom), (C.int)(replaceLength))
}

func (this *QInputMethodEvent) Delete() {
	C.QInputMethodEvent_Delete(this.h)
}

type QInputMethodQueryEvent struct {
	h *C.QInputMethodQueryEvent
	*QEvent
}

func (this *QInputMethodQueryEvent) cPointer() *C.QInputMethodQueryEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInputMethodQueryEvent(h *C.QInputMethodQueryEvent) *QInputMethodQueryEvent {
	if h == nil {
		return nil
	}
	return &QInputMethodQueryEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQInputMethodQueryEvent_U(h unsafe.Pointer) *QInputMethodQueryEvent {
	return newQInputMethodQueryEvent((*C.QInputMethodQueryEvent)(h))
}

// NewQInputMethodQueryEvent constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent(queries int) *QInputMethodQueryEvent {
	ret := C.QInputMethodQueryEvent_new((C.int)(queries))
	return newQInputMethodQueryEvent(ret)
}

// NewQInputMethodQueryEvent2 constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent2(param1 *QInputMethodQueryEvent) *QInputMethodQueryEvent {
	ret := C.QInputMethodQueryEvent_new2(param1.cPointer())
	return newQInputMethodQueryEvent(ret)
}

func (this *QInputMethodQueryEvent) Queries() int {
	ret := C.QInputMethodQueryEvent_Queries(this.h)
	return (int)(ret)
}

func (this *QInputMethodQueryEvent) SetValue(query uintptr, value *QVariant) {
	C.QInputMethodQueryEvent_SetValue(this.h, (C.uintptr_t)(query), value.cPointer())
}

func (this *QInputMethodQueryEvent) Value(query uintptr) *QVariant {
	ret := C.QInputMethodQueryEvent_Value(this.h, (C.uintptr_t)(query))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVariant(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVariant) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QInputMethodQueryEvent) Delete() {
	C.QInputMethodQueryEvent_Delete(this.h)
}

type QDropEvent struct {
	h *C.QDropEvent
	*QEvent
}

func (this *QDropEvent) cPointer() *C.QDropEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDropEvent(h *C.QDropEvent) *QDropEvent {
	if h == nil {
		return nil
	}
	return &QDropEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDropEvent_U(h unsafe.Pointer) *QDropEvent {
	return newQDropEvent((*C.QDropEvent)(h))
}

// NewQDropEvent constructs a new QDropEvent object.
func NewQDropEvent(pos *QPointF, actions int, data *QMimeData, buttons int, modifiers int) *QDropEvent {
	ret := C.QDropEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers))
	return newQDropEvent(ret)
}

// NewQDropEvent2 constructs a new QDropEvent object.
func NewQDropEvent2(param1 *QDropEvent) *QDropEvent {
	ret := C.QDropEvent_new2(param1.cPointer())
	return newQDropEvent(ret)
}

// NewQDropEvent3 constructs a new QDropEvent object.
func NewQDropEvent3(pos *QPointF, actions int, data *QMimeData, buttons int, modifiers int, typeVal uintptr) *QDropEvent {
	ret := C.QDropEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(typeVal))
	return newQDropEvent(ret)
}

func (this *QDropEvent) Pos() *QPoint {
	ret := C.QDropEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDropEvent) PosF() *QPointF {
	ret := C.QDropEvent_PosF(this.h)
	return newQPointF_U(unsafe.Pointer(ret))
}

func (this *QDropEvent) MouseButtons() int {
	ret := C.QDropEvent_MouseButtons(this.h)
	return (int)(ret)
}

func (this *QDropEvent) KeyboardModifiers() int {
	ret := C.QDropEvent_KeyboardModifiers(this.h)
	return (int)(ret)
}

func (this *QDropEvent) PossibleActions() int {
	ret := C.QDropEvent_PossibleActions(this.h)
	return (int)(ret)
}

func (this *QDropEvent) ProposedAction() uintptr {
	ret := C.QDropEvent_ProposedAction(this.h)
	return (uintptr)(ret)
}

func (this *QDropEvent) AcceptProposedAction() {
	C.QDropEvent_AcceptProposedAction(this.h)
}

func (this *QDropEvent) DropAction() uintptr {
	ret := C.QDropEvent_DropAction(this.h)
	return (uintptr)(ret)
}

func (this *QDropEvent) SetDropAction(action uintptr) {
	C.QDropEvent_SetDropAction(this.h, (C.uintptr_t)(action))
}

func (this *QDropEvent) Source() *QObject {
	ret := C.QDropEvent_Source(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QDropEvent) MimeData() *QMimeData {
	ret := C.QDropEvent_MimeData(this.h)
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QDropEvent) Delete() {
	C.QDropEvent_Delete(this.h)
}

type QDragMoveEvent struct {
	h *C.QDragMoveEvent
	*QDropEvent
}

func (this *QDragMoveEvent) cPointer() *C.QDragMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDragMoveEvent(h *C.QDragMoveEvent) *QDragMoveEvent {
	if h == nil {
		return nil
	}
	return &QDragMoveEvent{h: h, QDropEvent: newQDropEvent_U(unsafe.Pointer(h))}
}

func newQDragMoveEvent_U(h unsafe.Pointer) *QDragMoveEvent {
	return newQDragMoveEvent((*C.QDragMoveEvent)(h))
}

// NewQDragMoveEvent constructs a new QDragMoveEvent object.
func NewQDragMoveEvent(pos *QPoint, actions int, data *QMimeData, buttons int, modifiers int) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers))
	return newQDragMoveEvent(ret)
}

// NewQDragMoveEvent2 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent2(param1 *QDragMoveEvent) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new2(param1.cPointer())
	return newQDragMoveEvent(ret)
}

// NewQDragMoveEvent3 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent3(pos *QPoint, actions int, data *QMimeData, buttons int, modifiers int, typeVal uintptr) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.uintptr_t)(typeVal))
	return newQDragMoveEvent(ret)
}

func (this *QDragMoveEvent) AnswerRect() *QRect {
	ret := C.QDragMoveEvent_AnswerRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRect(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRect) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QDragMoveEvent) Accept() {
	C.QDragMoveEvent_Accept(this.h)
}

func (this *QDragMoveEvent) Ignore() {
	C.QDragMoveEvent_Ignore(this.h)
}

func (this *QDragMoveEvent) AcceptWithQRect(r *QRect) {
	C.QDragMoveEvent_AcceptWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) IgnoreWithQRect(r *QRect) {
	C.QDragMoveEvent_IgnoreWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) Delete() {
	C.QDragMoveEvent_Delete(this.h)
}

type QDragEnterEvent struct {
	h *C.QDragEnterEvent
	*QDragMoveEvent
}

func (this *QDragEnterEvent) cPointer() *C.QDragEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDragEnterEvent(h *C.QDragEnterEvent) *QDragEnterEvent {
	if h == nil {
		return nil
	}
	return &QDragEnterEvent{h: h, QDragMoveEvent: newQDragMoveEvent_U(unsafe.Pointer(h))}
}

func newQDragEnterEvent_U(h unsafe.Pointer) *QDragEnterEvent {
	return newQDragEnterEvent((*C.QDragEnterEvent)(h))
}

// NewQDragEnterEvent constructs a new QDragEnterEvent object.
func NewQDragEnterEvent(pos *QPoint, actions int, data *QMimeData, buttons int, modifiers int) *QDragEnterEvent {
	ret := C.QDragEnterEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers))
	return newQDragEnterEvent(ret)
}

// NewQDragEnterEvent2 constructs a new QDragEnterEvent object.
func NewQDragEnterEvent2(param1 *QDragEnterEvent) *QDragEnterEvent {
	ret := C.QDragEnterEvent_new2(param1.cPointer())
	return newQDragEnterEvent(ret)
}

func (this *QDragEnterEvent) OperatorAssign(param1 *QDragEnterEvent) {
	C.QDragEnterEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDragEnterEvent) Delete() {
	C.QDragEnterEvent_Delete(this.h)
}

type QDragLeaveEvent struct {
	h *C.QDragLeaveEvent
	*QEvent
}

func (this *QDragLeaveEvent) cPointer() *C.QDragLeaveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQDragLeaveEvent(h *C.QDragLeaveEvent) *QDragLeaveEvent {
	if h == nil {
		return nil
	}
	return &QDragLeaveEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDragLeaveEvent_U(h unsafe.Pointer) *QDragLeaveEvent {
	return newQDragLeaveEvent((*C.QDragLeaveEvent)(h))
}

// NewQDragLeaveEvent constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent() *QDragLeaveEvent {
	ret := C.QDragLeaveEvent_new()
	return newQDragLeaveEvent(ret)
}

// NewQDragLeaveEvent2 constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent2(param1 *QDragLeaveEvent) *QDragLeaveEvent {
	ret := C.QDragLeaveEvent_new2(param1.cPointer())
	return newQDragLeaveEvent(ret)
}

func (this *QDragLeaveEvent) OperatorAssign(param1 *QDragLeaveEvent) {
	C.QDragLeaveEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QDragLeaveEvent) Delete() {
	C.QDragLeaveEvent_Delete(this.h)
}

type QHelpEvent struct {
	h *C.QHelpEvent
	*QEvent
}

func (this *QHelpEvent) cPointer() *C.QHelpEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQHelpEvent(h *C.QHelpEvent) *QHelpEvent {
	if h == nil {
		return nil
	}
	return &QHelpEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQHelpEvent_U(h unsafe.Pointer) *QHelpEvent {
	return newQHelpEvent((*C.QHelpEvent)(h))
}

// NewQHelpEvent constructs a new QHelpEvent object.
func NewQHelpEvent(typeVal uintptr, pos *QPoint, globalPos *QPoint) *QHelpEvent {
	ret := C.QHelpEvent_new((C.uintptr_t)(typeVal), pos.cPointer(), globalPos.cPointer())
	return newQHelpEvent(ret)
}

// NewQHelpEvent2 constructs a new QHelpEvent object.
func NewQHelpEvent2(param1 *QHelpEvent) *QHelpEvent {
	ret := C.QHelpEvent_new2(param1.cPointer())
	return newQHelpEvent(ret)
}

func (this *QHelpEvent) X() int {
	ret := C.QHelpEvent_X(this.h)
	return (int)(ret)
}

func (this *QHelpEvent) Y() int {
	ret := C.QHelpEvent_Y(this.h)
	return (int)(ret)
}

func (this *QHelpEvent) GlobalX() int {
	ret := C.QHelpEvent_GlobalX(this.h)
	return (int)(ret)
}

func (this *QHelpEvent) GlobalY() int {
	ret := C.QHelpEvent_GlobalY(this.h)
	return (int)(ret)
}

func (this *QHelpEvent) Pos() *QPoint {
	ret := C.QHelpEvent_Pos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QHelpEvent) GlobalPos() *QPoint {
	ret := C.QHelpEvent_GlobalPos(this.h)
	return newQPoint_U(unsafe.Pointer(ret))
}

func (this *QHelpEvent) Delete() {
	C.QHelpEvent_Delete(this.h)
}

type QStatusTipEvent struct {
	h *C.QStatusTipEvent
	*QEvent
}

func (this *QStatusTipEvent) cPointer() *C.QStatusTipEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQStatusTipEvent(h *C.QStatusTipEvent) *QStatusTipEvent {
	if h == nil {
		return nil
	}
	return &QStatusTipEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQStatusTipEvent_U(h unsafe.Pointer) *QStatusTipEvent {
	return newQStatusTipEvent((*C.QStatusTipEvent)(h))
}

// NewQStatusTipEvent constructs a new QStatusTipEvent object.
func NewQStatusTipEvent(tip string) *QStatusTipEvent {
	tip_Cstring := C.CString(tip)
	defer C.free(unsafe.Pointer(tip_Cstring))
	ret := C.QStatusTipEvent_new(tip_Cstring, C.ulong(len(tip)))
	return newQStatusTipEvent(ret)
}

// NewQStatusTipEvent2 constructs a new QStatusTipEvent object.
func NewQStatusTipEvent2(param1 *QStatusTipEvent) *QStatusTipEvent {
	ret := C.QStatusTipEvent_new2(param1.cPointer())
	return newQStatusTipEvent(ret)
}

func (this *QStatusTipEvent) Tip() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QStatusTipEvent_Tip(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QStatusTipEvent) Delete() {
	C.QStatusTipEvent_Delete(this.h)
}

type QWhatsThisClickedEvent struct {
	h *C.QWhatsThisClickedEvent
	*QEvent
}

func (this *QWhatsThisClickedEvent) cPointer() *C.QWhatsThisClickedEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWhatsThisClickedEvent(h *C.QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	if h == nil {
		return nil
	}
	return &QWhatsThisClickedEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQWhatsThisClickedEvent_U(h unsafe.Pointer) *QWhatsThisClickedEvent {
	return newQWhatsThisClickedEvent((*C.QWhatsThisClickedEvent)(h))
}

// NewQWhatsThisClickedEvent constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent(href string) *QWhatsThisClickedEvent {
	href_Cstring := C.CString(href)
	defer C.free(unsafe.Pointer(href_Cstring))
	ret := C.QWhatsThisClickedEvent_new(href_Cstring, C.ulong(len(href)))
	return newQWhatsThisClickedEvent(ret)
}

// NewQWhatsThisClickedEvent2 constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent2(param1 *QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	ret := C.QWhatsThisClickedEvent_new2(param1.cPointer())
	return newQWhatsThisClickedEvent(ret)
}

func (this *QWhatsThisClickedEvent) Href() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QWhatsThisClickedEvent_Href(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QWhatsThisClickedEvent) Delete() {
	C.QWhatsThisClickedEvent_Delete(this.h)
}

type QActionEvent struct {
	h *C.QActionEvent
	*QEvent
}

func (this *QActionEvent) cPointer() *C.QActionEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQActionEvent(h *C.QActionEvent) *QActionEvent {
	if h == nil {
		return nil
	}
	return &QActionEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQActionEvent_U(h unsafe.Pointer) *QActionEvent {
	return newQActionEvent((*C.QActionEvent)(h))
}

// NewQActionEvent constructs a new QActionEvent object.
func NewQActionEvent(typeVal int, action *QAction) *QActionEvent {
	ret := C.QActionEvent_new((C.int)(typeVal), action.cPointer())
	return newQActionEvent(ret)
}

// NewQActionEvent2 constructs a new QActionEvent object.
func NewQActionEvent2(param1 *QActionEvent) *QActionEvent {
	ret := C.QActionEvent_new2(param1.cPointer())
	return newQActionEvent(ret)
}

// NewQActionEvent3 constructs a new QActionEvent object.
func NewQActionEvent3(typeVal int, action *QAction, before *QAction) *QActionEvent {
	ret := C.QActionEvent_new3((C.int)(typeVal), action.cPointer(), before.cPointer())
	return newQActionEvent(ret)
}

func (this *QActionEvent) Action() *QAction {
	ret := C.QActionEvent_Action(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionEvent) Before() *QAction {
	ret := C.QActionEvent_Before(this.h)
	return newQAction_U(unsafe.Pointer(ret))
}

func (this *QActionEvent) OperatorAssign(param1 *QActionEvent) {
	C.QActionEvent_OperatorAssign(this.h, param1.cPointer())
}

func (this *QActionEvent) Delete() {
	C.QActionEvent_Delete(this.h)
}

type QFileOpenEvent struct {
	h *C.QFileOpenEvent
	*QEvent
}

func (this *QFileOpenEvent) cPointer() *C.QFileOpenEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQFileOpenEvent(h *C.QFileOpenEvent) *QFileOpenEvent {
	if h == nil {
		return nil
	}
	return &QFileOpenEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQFileOpenEvent_U(h unsafe.Pointer) *QFileOpenEvent {
	return newQFileOpenEvent((*C.QFileOpenEvent)(h))
}

// NewQFileOpenEvent constructs a new QFileOpenEvent object.
func NewQFileOpenEvent(file string) *QFileOpenEvent {
	file_Cstring := C.CString(file)
	defer C.free(unsafe.Pointer(file_Cstring))
	ret := C.QFileOpenEvent_new(file_Cstring, C.ulong(len(file)))
	return newQFileOpenEvent(ret)
}

// NewQFileOpenEvent2 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent2(url *QUrl) *QFileOpenEvent {
	ret := C.QFileOpenEvent_new2(url.cPointer())
	return newQFileOpenEvent(ret)
}

// NewQFileOpenEvent3 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent3(param1 *QFileOpenEvent) *QFileOpenEvent {
	ret := C.QFileOpenEvent_new3(param1.cPointer())
	return newQFileOpenEvent(ret)
}

func (this *QFileOpenEvent) File() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QFileOpenEvent_File(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QFileOpenEvent) Url() *QUrl {
	ret := C.QFileOpenEvent_Url(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QFileOpenEvent) OpenFile(file *QFile, flags int) bool {
	ret := C.QFileOpenEvent_OpenFile(this.h, file.cPointer(), (C.int)(flags))
	return (bool)(ret)
}

func (this *QFileOpenEvent) Delete() {
	C.QFileOpenEvent_Delete(this.h)
}

type QToolBarChangeEvent struct {
	h *C.QToolBarChangeEvent
	*QEvent
}

func (this *QToolBarChangeEvent) cPointer() *C.QToolBarChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQToolBarChangeEvent(h *C.QToolBarChangeEvent) *QToolBarChangeEvent {
	if h == nil {
		return nil
	}
	return &QToolBarChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQToolBarChangeEvent_U(h unsafe.Pointer) *QToolBarChangeEvent {
	return newQToolBarChangeEvent((*C.QToolBarChangeEvent)(h))
}

// NewQToolBarChangeEvent constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent(t bool) *QToolBarChangeEvent {
	ret := C.QToolBarChangeEvent_new((C.bool)(t))
	return newQToolBarChangeEvent(ret)
}

// NewQToolBarChangeEvent2 constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent2(param1 *QToolBarChangeEvent) *QToolBarChangeEvent {
	ret := C.QToolBarChangeEvent_new2(param1.cPointer())
	return newQToolBarChangeEvent(ret)
}

func (this *QToolBarChangeEvent) Toggle() bool {
	ret := C.QToolBarChangeEvent_Toggle(this.h)
	return (bool)(ret)
}

func (this *QToolBarChangeEvent) Delete() {
	C.QToolBarChangeEvent_Delete(this.h)
}

type QShortcutEvent struct {
	h *C.QShortcutEvent
	*QEvent
}

func (this *QShortcutEvent) cPointer() *C.QShortcutEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQShortcutEvent(h *C.QShortcutEvent) *QShortcutEvent {
	if h == nil {
		return nil
	}
	return &QShortcutEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQShortcutEvent_U(h unsafe.Pointer) *QShortcutEvent {
	return newQShortcutEvent((*C.QShortcutEvent)(h))
}

// NewQShortcutEvent constructs a new QShortcutEvent object.
func NewQShortcutEvent(key *QKeySequence, id int) *QShortcutEvent {
	ret := C.QShortcutEvent_new(key.cPointer(), (C.int)(id))
	return newQShortcutEvent(ret)
}

// NewQShortcutEvent2 constructs a new QShortcutEvent object.
func NewQShortcutEvent2(param1 *QShortcutEvent) *QShortcutEvent {
	ret := C.QShortcutEvent_new2(param1.cPointer())
	return newQShortcutEvent(ret)
}

// NewQShortcutEvent3 constructs a new QShortcutEvent object.
func NewQShortcutEvent3(key *QKeySequence, id int, ambiguous bool) *QShortcutEvent {
	ret := C.QShortcutEvent_new3(key.cPointer(), (C.int)(id), (C.bool)(ambiguous))
	return newQShortcutEvent(ret)
}

func (this *QShortcutEvent) Key() *QKeySequence {
	ret := C.QShortcutEvent_Key(this.h)
	return newQKeySequence_U(unsafe.Pointer(ret))
}

func (this *QShortcutEvent) ShortcutId() int {
	ret := C.QShortcutEvent_ShortcutId(this.h)
	return (int)(ret)
}

func (this *QShortcutEvent) IsAmbiguous() bool {
	ret := C.QShortcutEvent_IsAmbiguous(this.h)
	return (bool)(ret)
}

func (this *QShortcutEvent) Delete() {
	C.QShortcutEvent_Delete(this.h)
}

type QWindowStateChangeEvent struct {
	h *C.QWindowStateChangeEvent
	*QEvent
}

func (this *QWindowStateChangeEvent) cPointer() *C.QWindowStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQWindowStateChangeEvent(h *C.QWindowStateChangeEvent) *QWindowStateChangeEvent {
	if h == nil {
		return nil
	}
	return &QWindowStateChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQWindowStateChangeEvent_U(h unsafe.Pointer) *QWindowStateChangeEvent {
	return newQWindowStateChangeEvent((*C.QWindowStateChangeEvent)(h))
}

// NewQWindowStateChangeEvent constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent(aOldState int) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new((C.int)(aOldState))
	return newQWindowStateChangeEvent(ret)
}

// NewQWindowStateChangeEvent2 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent2(param1 *QWindowStateChangeEvent) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new2(param1.cPointer())
	return newQWindowStateChangeEvent(ret)
}

// NewQWindowStateChangeEvent3 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent3(aOldState int, isOverride bool) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new3((C.int)(aOldState), (C.bool)(isOverride))
	return newQWindowStateChangeEvent(ret)
}

func (this *QWindowStateChangeEvent) OldState() int {
	ret := C.QWindowStateChangeEvent_OldState(this.h)
	return (int)(ret)
}

func (this *QWindowStateChangeEvent) IsOverride() bool {
	ret := C.QWindowStateChangeEvent_IsOverride(this.h)
	return (bool)(ret)
}

func (this *QWindowStateChangeEvent) Delete() {
	C.QWindowStateChangeEvent_Delete(this.h)
}

type QPointingDeviceUniqueId struct {
	h *C.QPointingDeviceUniqueId
}

func (this *QPointingDeviceUniqueId) cPointer() *C.QPointingDeviceUniqueId {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPointingDeviceUniqueId(h *C.QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	if h == nil {
		return nil
	}
	return &QPointingDeviceUniqueId{h: h}
}

func newQPointingDeviceUniqueId_U(h unsafe.Pointer) *QPointingDeviceUniqueId {
	return newQPointingDeviceUniqueId((*C.QPointingDeviceUniqueId)(h))
}

// NewQPointingDeviceUniqueId constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId() *QPointingDeviceUniqueId {
	ret := C.QPointingDeviceUniqueId_new()
	return newQPointingDeviceUniqueId(ret)
}

// NewQPointingDeviceUniqueId2 constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId2(param1 *QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	ret := C.QPointingDeviceUniqueId_new2(param1.cPointer())
	return newQPointingDeviceUniqueId(ret)
}

func QPointingDeviceUniqueId_FromNumericId(id int64) *QPointingDeviceUniqueId {
	ret := C.QPointingDeviceUniqueId_FromNumericId((C.longlong)(id))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointingDeviceUniqueId(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointingDeviceUniqueId) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPointingDeviceUniqueId) IsValid() bool {
	ret := C.QPointingDeviceUniqueId_IsValid(this.h)
	return (bool)(ret)
}

func (this *QPointingDeviceUniqueId) NumericId() int64 {
	ret := C.QPointingDeviceUniqueId_NumericId(this.h)
	return (int64)(ret)
}

func (this *QPointingDeviceUniqueId) Delete() {
	C.QPointingDeviceUniqueId_Delete(this.h)
}

type QTouchEvent struct {
	h *C.QTouchEvent
	*QInputEvent
}

func (this *QTouchEvent) cPointer() *C.QTouchEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTouchEvent(h *C.QTouchEvent) *QTouchEvent {
	if h == nil {
		return nil
	}
	return &QTouchEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQTouchEvent_U(h unsafe.Pointer) *QTouchEvent {
	return newQTouchEvent((*C.QTouchEvent)(h))
}

// NewQTouchEvent constructs a new QTouchEvent object.
func NewQTouchEvent(eventType uintptr) *QTouchEvent {
	ret := C.QTouchEvent_new((C.uintptr_t)(eventType))
	return newQTouchEvent(ret)
}

// NewQTouchEvent2 constructs a new QTouchEvent object.
func NewQTouchEvent2(param1 *QTouchEvent) *QTouchEvent {
	ret := C.QTouchEvent_new2(param1.cPointer())
	return newQTouchEvent(ret)
}

// NewQTouchEvent3 constructs a new QTouchEvent object.
func NewQTouchEvent3(eventType uintptr, device *QTouchDevice) *QTouchEvent {
	ret := C.QTouchEvent_new3((C.uintptr_t)(eventType), device.cPointer())
	return newQTouchEvent(ret)
}

// NewQTouchEvent4 constructs a new QTouchEvent object.
func NewQTouchEvent4(eventType uintptr, device *QTouchDevice, modifiers int) *QTouchEvent {
	ret := C.QTouchEvent_new4((C.uintptr_t)(eventType), device.cPointer(), (C.int)(modifiers))
	return newQTouchEvent(ret)
}

// NewQTouchEvent5 constructs a new QTouchEvent object.
func NewQTouchEvent5(eventType uintptr, device *QTouchDevice, modifiers int, touchPointStates int) *QTouchEvent {
	ret := C.QTouchEvent_new5((C.uintptr_t)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates))
	return newQTouchEvent(ret)
}

// NewQTouchEvent6 constructs a new QTouchEvent object.
func NewQTouchEvent6(eventType uintptr, device *QTouchDevice, modifiers int, touchPointStates int, touchPoints []QTouchEvent__TouchPoint) *QTouchEvent {
	// For the C ABI, malloc a C array of raw pointers
	touchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.ulong(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	ret := C.QTouchEvent_new6((C.uintptr_t)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates), &touchPoints_CArray[0], C.ulong(len(touchPoints)))
	return newQTouchEvent(ret)
}

func (this *QTouchEvent) Window() *QWindow {
	ret := C.QTouchEvent_Window(this.h)
	return newQWindow_U(unsafe.Pointer(ret))
}

func (this *QTouchEvent) Target() *QObject {
	ret := C.QTouchEvent_Target(this.h)
	return newQObject_U(unsafe.Pointer(ret))
}

func (this *QTouchEvent) TouchPointStates() int {
	ret := C.QTouchEvent_TouchPointStates(this.h)
	return (int)(ret)
}

func (this *QTouchEvent) Device() *QTouchDevice {
	ret := C.QTouchEvent_Device(this.h)
	return newQTouchDevice_U(unsafe.Pointer(ret))
}

func (this *QTouchEvent) SetWindow(awindow *QWindow) {
	C.QTouchEvent_SetWindow(this.h, awindow.cPointer())
}

func (this *QTouchEvent) SetTarget(atarget *QObject) {
	C.QTouchEvent_SetTarget(this.h, atarget.cPointer())
}

func (this *QTouchEvent) SetTouchPointStates(aTouchPointStates int) {
	C.QTouchEvent_SetTouchPointStates(this.h, (C.int)(aTouchPointStates))
}

func (this *QTouchEvent) SetTouchPoints(atouchPoints []QTouchEvent__TouchPoint) {
	// For the C ABI, malloc a C array of raw pointers
	atouchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.ulong(8 * len(atouchPoints))))
	defer C.free(unsafe.Pointer(atouchPoints_CArray))
	for i := range atouchPoints {
		atouchPoints_CArray[i] = atouchPoints[i].cPointer()
	}
	C.QTouchEvent_SetTouchPoints(this.h, &atouchPoints_CArray[0], C.ulong(len(atouchPoints)))
}

func (this *QTouchEvent) SetDevice(adevice *QTouchDevice) {
	C.QTouchEvent_SetDevice(this.h, adevice.cPointer())
}

func (this *QTouchEvent) Delete() {
	C.QTouchEvent_Delete(this.h)
}

type QScrollPrepareEvent struct {
	h *C.QScrollPrepareEvent
	*QEvent
}

func (this *QScrollPrepareEvent) cPointer() *C.QScrollPrepareEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollPrepareEvent(h *C.QScrollPrepareEvent) *QScrollPrepareEvent {
	if h == nil {
		return nil
	}
	return &QScrollPrepareEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQScrollPrepareEvent_U(h unsafe.Pointer) *QScrollPrepareEvent {
	return newQScrollPrepareEvent((*C.QScrollPrepareEvent)(h))
}

// NewQScrollPrepareEvent constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent(startPos *QPointF) *QScrollPrepareEvent {
	ret := C.QScrollPrepareEvent_new(startPos.cPointer())
	return newQScrollPrepareEvent(ret)
}

// NewQScrollPrepareEvent2 constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent2(param1 *QScrollPrepareEvent) *QScrollPrepareEvent {
	ret := C.QScrollPrepareEvent_new2(param1.cPointer())
	return newQScrollPrepareEvent(ret)
}

func (this *QScrollPrepareEvent) StartPos() *QPointF {
	ret := C.QScrollPrepareEvent_StartPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollPrepareEvent) ViewportSize() *QSizeF {
	ret := C.QScrollPrepareEvent_ViewportSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollPrepareEvent) ContentPosRange() *QRectF {
	ret := C.QScrollPrepareEvent_ContentPosRange(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollPrepareEvent) ContentPos() *QPointF {
	ret := C.QScrollPrepareEvent_ContentPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollPrepareEvent) SetViewportSize(size *QSizeF) {
	C.QScrollPrepareEvent_SetViewportSize(this.h, size.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPosRange(rect *QRectF) {
	C.QScrollPrepareEvent_SetContentPosRange(this.h, rect.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPos(pos *QPointF) {
	C.QScrollPrepareEvent_SetContentPos(this.h, pos.cPointer())
}

func (this *QScrollPrepareEvent) Delete() {
	C.QScrollPrepareEvent_Delete(this.h)
}

type QScrollEvent struct {
	h *C.QScrollEvent
	*QEvent
}

func (this *QScrollEvent) cPointer() *C.QScrollEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScrollEvent(h *C.QScrollEvent) *QScrollEvent {
	if h == nil {
		return nil
	}
	return &QScrollEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQScrollEvent_U(h unsafe.Pointer) *QScrollEvent {
	return newQScrollEvent((*C.QScrollEvent)(h))
}

// NewQScrollEvent constructs a new QScrollEvent object.
func NewQScrollEvent(contentPos *QPointF, overshoot *QPointF, scrollState uintptr) *QScrollEvent {
	ret := C.QScrollEvent_new(contentPos.cPointer(), overshoot.cPointer(), (C.uintptr_t)(scrollState))
	return newQScrollEvent(ret)
}

// NewQScrollEvent2 constructs a new QScrollEvent object.
func NewQScrollEvent2(param1 *QScrollEvent) *QScrollEvent {
	ret := C.QScrollEvent_new2(param1.cPointer())
	return newQScrollEvent(ret)
}

func (this *QScrollEvent) ContentPos() *QPointF {
	ret := C.QScrollEvent_ContentPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollEvent) OvershootDistance() *QPointF {
	ret := C.QScrollEvent_OvershootDistance(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QScrollEvent) ScrollState() uintptr {
	ret := C.QScrollEvent_ScrollState(this.h)
	return (uintptr)(ret)
}

func (this *QScrollEvent) Delete() {
	C.QScrollEvent_Delete(this.h)
}

type QScreenOrientationChangeEvent struct {
	h *C.QScreenOrientationChangeEvent
	*QEvent
}

func (this *QScreenOrientationChangeEvent) cPointer() *C.QScreenOrientationChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQScreenOrientationChangeEvent(h *C.QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	if h == nil {
		return nil
	}
	return &QScreenOrientationChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQScreenOrientationChangeEvent_U(h unsafe.Pointer) *QScreenOrientationChangeEvent {
	return newQScreenOrientationChangeEvent((*C.QScreenOrientationChangeEvent)(h))
}

// NewQScreenOrientationChangeEvent constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent(screen *QScreen, orientation uintptr) *QScreenOrientationChangeEvent {
	ret := C.QScreenOrientationChangeEvent_new(screen.cPointer(), (C.uintptr_t)(orientation))
	return newQScreenOrientationChangeEvent(ret)
}

// NewQScreenOrientationChangeEvent2 constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent2(param1 *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	ret := C.QScreenOrientationChangeEvent_new2(param1.cPointer())
	return newQScreenOrientationChangeEvent(ret)
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	ret := C.QScreenOrientationChangeEvent_Screen(this.h)
	return newQScreen_U(unsafe.Pointer(ret))
}

func (this *QScreenOrientationChangeEvent) Orientation() uintptr {
	ret := C.QScreenOrientationChangeEvent_Orientation(this.h)
	return (uintptr)(ret)
}

func (this *QScreenOrientationChangeEvent) Delete() {
	C.QScreenOrientationChangeEvent_Delete(this.h)
}

type QApplicationStateChangeEvent struct {
	h *C.QApplicationStateChangeEvent
	*QEvent
}

func (this *QApplicationStateChangeEvent) cPointer() *C.QApplicationStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func newQApplicationStateChangeEvent(h *C.QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	if h == nil {
		return nil
	}
	return &QApplicationStateChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQApplicationStateChangeEvent_U(h unsafe.Pointer) *QApplicationStateChangeEvent {
	return newQApplicationStateChangeEvent((*C.QApplicationStateChangeEvent)(h))
}

// NewQApplicationStateChangeEvent constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent(state uintptr) *QApplicationStateChangeEvent {
	ret := C.QApplicationStateChangeEvent_new((C.uintptr_t)(state))
	return newQApplicationStateChangeEvent(ret)
}

// NewQApplicationStateChangeEvent2 constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent2(param1 *QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	ret := C.QApplicationStateChangeEvent_new2(param1.cPointer())
	return newQApplicationStateChangeEvent(ret)
}

func (this *QApplicationStateChangeEvent) ApplicationState() uintptr {
	ret := C.QApplicationStateChangeEvent_ApplicationState(this.h)
	return (uintptr)(ret)
}

func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_Delete(this.h)
}

type QInputMethodEvent__Attribute struct {
	h *C.QInputMethodEvent__Attribute
}

func (this *QInputMethodEvent__Attribute) cPointer() *C.QInputMethodEvent__Attribute {
	if this == nil {
		return nil
	}
	return this.h
}

func newQInputMethodEvent__Attribute(h *C.QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	if h == nil {
		return nil
	}
	return &QInputMethodEvent__Attribute{h: h}
}

func newQInputMethodEvent__Attribute_U(h unsafe.Pointer) *QInputMethodEvent__Attribute {
	return newQInputMethodEvent__Attribute((*C.QInputMethodEvent__Attribute)(h))
}

// NewQInputMethodEvent__Attribute constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute(typ uintptr, s int, l int, val QVariant) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new((C.uintptr_t)(typ), (C.int)(s), (C.int)(l), val.cPointer())
	return newQInputMethodEvent__Attribute(ret)
}

// NewQInputMethodEvent__Attribute2 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute2(typ uintptr, s int, l int) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new2((C.uintptr_t)(typ), (C.int)(s), (C.int)(l))
	return newQInputMethodEvent__Attribute(ret)
}

// NewQInputMethodEvent__Attribute3 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute3(param1 *QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new3(param1.cPointer())
	return newQInputMethodEvent__Attribute(ret)
}

func (this *QInputMethodEvent__Attribute) Delete() {
	C.QInputMethodEvent__Attribute_Delete(this.h)
}

type QTouchEvent__TouchPoint struct {
	h *C.QTouchEvent__TouchPoint
}

func (this *QTouchEvent__TouchPoint) cPointer() *C.QTouchEvent__TouchPoint {
	if this == nil {
		return nil
	}
	return this.h
}

func newQTouchEvent__TouchPoint(h *C.QTouchEvent__TouchPoint) *QTouchEvent__TouchPoint {
	if h == nil {
		return nil
	}
	return &QTouchEvent__TouchPoint{h: h}
}

func newQTouchEvent__TouchPoint_U(h unsafe.Pointer) *QTouchEvent__TouchPoint {
	return newQTouchEvent__TouchPoint((*C.QTouchEvent__TouchPoint)(h))
}

// NewQTouchEvent__TouchPoint constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint() *QTouchEvent__TouchPoint {
	ret := C.QTouchEvent__TouchPoint_new()
	return newQTouchEvent__TouchPoint(ret)
}

// NewQTouchEvent__TouchPoint2 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint2(other *QTouchEvent__TouchPoint) *QTouchEvent__TouchPoint {
	ret := C.QTouchEvent__TouchPoint_new2(other.cPointer())
	return newQTouchEvent__TouchPoint(ret)
}

// NewQTouchEvent__TouchPoint3 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint3(id int) *QTouchEvent__TouchPoint {
	ret := C.QTouchEvent__TouchPoint_new3((C.int)(id))
	return newQTouchEvent__TouchPoint(ret)
}

func (this *QTouchEvent__TouchPoint) Swap(other *QTouchEvent__TouchPoint) {
	C.QTouchEvent__TouchPoint_Swap(this.h, other.cPointer())
}

func (this *QTouchEvent__TouchPoint) Id() int {
	ret := C.QTouchEvent__TouchPoint_Id(this.h)
	return (int)(ret)
}

func (this *QTouchEvent__TouchPoint) UniqueId() *QPointingDeviceUniqueId {
	ret := C.QTouchEvent__TouchPoint_UniqueId(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointingDeviceUniqueId(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointingDeviceUniqueId) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) State() uintptr {
	ret := C.QTouchEvent__TouchPoint_State(this.h)
	return (uintptr)(ret)
}

func (this *QTouchEvent__TouchPoint) Pos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) StartPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_StartPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) LastPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_LastPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) ScenePos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) StartScenePos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_StartScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) LastScenePos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_LastScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) ScreenPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) StartScreenPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_StartScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) LastScreenPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_LastScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) NormalizedPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_NormalizedPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) StartNormalizedPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_StartNormalizedPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) LastNormalizedPos() *QPointF {
	ret := C.QTouchEvent__TouchPoint_LastNormalizedPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) Rect() *QRectF {
	ret := C.QTouchEvent__TouchPoint_Rect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) SceneRect() *QRectF {
	ret := C.QTouchEvent__TouchPoint_SceneRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) ScreenRect() *QRectF {
	ret := C.QTouchEvent__TouchPoint_ScreenRect(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQRectF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QRectF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) SetRect(rect *QRectF) {
	C.QTouchEvent__TouchPoint_SetRect(this.h, rect.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetSceneRect(sceneRect *QRectF) {
	C.QTouchEvent__TouchPoint_SetSceneRect(this.h, sceneRect.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScreenRect(screenRect *QRectF) {
	C.QTouchEvent__TouchPoint_SetScreenRect(this.h, screenRect.cPointer())
}

func (this *QTouchEvent__TouchPoint) Pressure() float64 {
	ret := C.QTouchEvent__TouchPoint_Pressure(this.h)
	return (float64)(ret)
}

func (this *QTouchEvent__TouchPoint) Rotation() float64 {
	ret := C.QTouchEvent__TouchPoint_Rotation(this.h)
	return (float64)(ret)
}

func (this *QTouchEvent__TouchPoint) EllipseDiameters() *QSizeF {
	ret := C.QTouchEvent__TouchPoint_EllipseDiameters(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) Velocity() *QVector2D {
	ret := C.QTouchEvent__TouchPoint_Velocity(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQVector2D(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QVector2D) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QTouchEvent__TouchPoint) Flags() int {
	ret := C.QTouchEvent__TouchPoint_Flags(this.h)
	return (int)(ret)
}

func (this *QTouchEvent__TouchPoint) RawScreenPositions() []QPointF {
	var _out **C.QPointF = nil
	var _out_len C.size_t = 0
	C.QTouchEvent__TouchPoint_RawScreenPositions(this.h, &_out, &_out_len)
	ret := make([]QPointF, int(_out_len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQPointF(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QTouchEvent__TouchPoint) SetId(id int) {
	C.QTouchEvent__TouchPoint_SetId(this.h, (C.int)(id))
}

func (this *QTouchEvent__TouchPoint) SetUniqueId(uid int64) {
	C.QTouchEvent__TouchPoint_SetUniqueId(this.h, (C.longlong)(uid))
}

func (this *QTouchEvent__TouchPoint) SetState(state int) {
	C.QTouchEvent__TouchPoint_SetState(this.h, (C.int)(state))
}

func (this *QTouchEvent__TouchPoint) SetPos(pos *QPointF) {
	C.QTouchEvent__TouchPoint_SetPos(this.h, pos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScenePos(scenePos *QPointF) {
	C.QTouchEvent__TouchPoint_SetScenePos(this.h, scenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScreenPos(screenPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetScreenPos(this.h, screenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetNormalizedPos(normalizedPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetNormalizedPos(this.h, normalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartPos(startPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetStartPos(this.h, startPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartScenePos(startScenePos *QPointF) {
	C.QTouchEvent__TouchPoint_SetStartScenePos(this.h, startScenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartScreenPos(startScreenPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetStartScreenPos(this.h, startScreenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartNormalizedPos(startNormalizedPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetStartNormalizedPos(this.h, startNormalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastPos(lastPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetLastPos(this.h, lastPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastScenePos(lastScenePos *QPointF) {
	C.QTouchEvent__TouchPoint_SetLastScenePos(this.h, lastScenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastScreenPos(lastScreenPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetLastScreenPos(this.h, lastScreenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastNormalizedPos(lastNormalizedPos *QPointF) {
	C.QTouchEvent__TouchPoint_SetLastNormalizedPos(this.h, lastNormalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetPressure(pressure float64) {
	C.QTouchEvent__TouchPoint_SetPressure(this.h, (C.double)(pressure))
}

func (this *QTouchEvent__TouchPoint) SetRotation(angle float64) {
	C.QTouchEvent__TouchPoint_SetRotation(this.h, (C.double)(angle))
}

func (this *QTouchEvent__TouchPoint) SetEllipseDiameters(dia *QSizeF) {
	C.QTouchEvent__TouchPoint_SetEllipseDiameters(this.h, dia.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetVelocity(v *QVector2D) {
	C.QTouchEvent__TouchPoint_SetVelocity(this.h, v.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetFlags(flags int) {
	C.QTouchEvent__TouchPoint_SetFlags(this.h, (C.int)(flags))
}

func (this *QTouchEvent__TouchPoint) SetRawScreenPositions(positions []QPointF) {
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.ulong(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	C.QTouchEvent__TouchPoint_SetRawScreenPositions(this.h, &positions_CArray[0], C.ulong(len(positions)))
}

func (this *QTouchEvent__TouchPoint) Delete() {
	C.QTouchEvent__TouchPoint_Delete(this.h)
}
