package qt

/*

#include "gen_qevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QWheelEvent__ int

const (
	QWheelEvent__DefaultDeltasPerStep QWheelEvent__ = 120
)

type QTabletEvent__TabletDevice int

const (
	QTabletEvent__NoDevice       QTabletEvent__TabletDevice = 0
	QTabletEvent__Puck           QTabletEvent__TabletDevice = 1
	QTabletEvent__Stylus         QTabletEvent__TabletDevice = 2
	QTabletEvent__Airbrush       QTabletEvent__TabletDevice = 3
	QTabletEvent__FourDMouse     QTabletEvent__TabletDevice = 4
	QTabletEvent__XFreeEraser    QTabletEvent__TabletDevice = 5
	QTabletEvent__RotationStylus QTabletEvent__TabletDevice = 6
)

type QTabletEvent__PointerType int

const (
	QTabletEvent__UnknownPointer QTabletEvent__PointerType = 0
	QTabletEvent__Pen            QTabletEvent__PointerType = 1
	QTabletEvent__Cursor         QTabletEvent__PointerType = 2
	QTabletEvent__Eraser         QTabletEvent__PointerType = 3
)

type QPlatformSurfaceEvent__SurfaceEventType int

const (
	QPlatformSurfaceEvent__SurfaceCreated            QPlatformSurfaceEvent__SurfaceEventType = 0
	QPlatformSurfaceEvent__SurfaceAboutToBeDestroyed QPlatformSurfaceEvent__SurfaceEventType = 1
)

type QContextMenuEvent__Reason int

const (
	QContextMenuEvent__Mouse    QContextMenuEvent__Reason = 0
	QContextMenuEvent__Keyboard QContextMenuEvent__Reason = 1
	QContextMenuEvent__Other    QContextMenuEvent__Reason = 2
)

type QInputMethodEvent__AttributeType int

const (
	QInputMethodEvent__TextFormat QInputMethodEvent__AttributeType = 0
	QInputMethodEvent__Cursor     QInputMethodEvent__AttributeType = 1
	QInputMethodEvent__Language   QInputMethodEvent__AttributeType = 2
	QInputMethodEvent__Ruby       QInputMethodEvent__AttributeType = 3
	QInputMethodEvent__Selection  QInputMethodEvent__AttributeType = 4
)

type QTouchEvent__TouchPoint__InfoFlag int

const (
	QTouchEvent__TouchPoint__Pen   QTouchEvent__TouchPoint__InfoFlag = 1
	QTouchEvent__TouchPoint__Token QTouchEvent__TouchPoint__InfoFlag = 2
)

type QScrollEvent__ScrollState int

const (
	QScrollEvent__ScrollStarted  QScrollEvent__ScrollState = 0
	QScrollEvent__ScrollUpdated  QScrollEvent__ScrollState = 1
	QScrollEvent__ScrollFinished QScrollEvent__ScrollState = 2
)

type QInputEvent struct {
	h  *C.QInputEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QInputEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QInputEvent) cPointer() *C.QInputEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputEvent constructs the type using only CGO pointers.
func newQInputEvent(h *C.QInputEvent) *QInputEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputEvent_virtbase(h, &outptr_QEvent)

	return &QInputEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputEvent(h unsafe.Pointer) *QInputEvent {
	return newQInputEvent((*C.QInputEvent)(h))
}

// NewQInputEvent constructs a new QInputEvent object.
func NewQInputEvent(typeVal QEvent__Type) *QInputEvent {

	return newQInputEvent(C.QInputEvent_new((C.int)(typeVal)))
}

// NewQInputEvent2 constructs a new QInputEvent object.
func NewQInputEvent2(param1 *QInputEvent) *QInputEvent {
	defer runtime.KeepAlive(param1)

	return newQInputEvent(C.QInputEvent_new2(param1.cPointer()))
}

// NewQInputEvent3 constructs a new QInputEvent object.
func NewQInputEvent3(typeVal QEvent__Type, modifiers KeyboardModifier) *QInputEvent {

	return newQInputEvent(C.QInputEvent_new3((C.int)(typeVal), (C.int)(modifiers)))
}

func (this *QInputEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QInputEvent_modifiers(this.h))
}

func (this *QInputEvent) SetModifiers(amodifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QInputEvent_setModifiers(this.h, (C.int)(amodifiers))
}

func (this *QInputEvent) Timestamp() uint64 {
	defer runtime.KeepAlive(this)
	return (uint64)(C.QInputEvent_timestamp(this.h))
}

func (this *QInputEvent) SetTimestamp(atimestamp uint64) {
	defer runtime.KeepAlive(this)
	C.QInputEvent_setTimestamp(this.h, (C.ulong)(atimestamp))
}

func (this *QInputEvent) OperatorAssign(param1 *QInputEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QInputEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputEvent) Delete() {
	C.QInputEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QInputEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QInputEvent_delete((*C.QInputEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QEnterEvent struct {
	h  *C.QEnterEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QEnterEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QEnterEvent) cPointer() *C.QEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QEnterEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQEnterEvent constructs the type using only CGO pointers.
func newQEnterEvent(h *C.QEnterEvent) *QEnterEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QEnterEvent_virtbase(h, &outptr_QEvent)

	return &QEnterEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQEnterEvent(h unsafe.Pointer) *QEnterEvent {
	return newQEnterEvent((*C.QEnterEvent)(h))
}

// NewQEnterEvent constructs a new QEnterEvent object.
func NewQEnterEvent(localPos *QPointF, windowPos *QPointF, screenPos *QPointF) *QEnterEvent {
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(windowPos)
	defer runtime.KeepAlive(screenPos)

	return newQEnterEvent(C.QEnterEvent_new(localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer()))
}

// NewQEnterEvent2 constructs a new QEnterEvent object.
func NewQEnterEvent2(param1 *QEnterEvent) *QEnterEvent {
	defer runtime.KeepAlive(param1)

	return newQEnterEvent(C.QEnterEvent_new2(param1.cPointer()))
}

func (this *QEnterEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QEnterEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QEnterEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QEnterEvent_x(this.h))
}

func (this *QEnterEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QEnterEvent_y(this.h))
}

func (this *QEnterEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QEnterEvent_globalX(this.h))
}

func (this *QEnterEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QEnterEvent_globalY(this.h))
}

func (this *QEnterEvent) LocalPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QEnterEvent_localPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QEnterEvent) WindowPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QEnterEvent_windowPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QEnterEvent) ScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QEnterEvent_screenPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QEnterEvent) OperatorAssign(param1 *QEnterEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QEnterEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QEnterEvent) Delete() {
	C.QEnterEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QEnterEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QEnterEvent_delete((*C.QEnterEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMouseEvent struct {
	h  *C.QMouseEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMouseEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QMouseEvent) cPointer() *C.QMouseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMouseEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMouseEvent constructs the type using only CGO pointers.
func newQMouseEvent(h *C.QMouseEvent) *QMouseEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QMouseEvent_virtbase(h, &outptr_QInputEvent)

	return &QMouseEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQMouseEvent constructs the type using only unsafe pointers.
func UnsafeNewQMouseEvent(h unsafe.Pointer) *QMouseEvent {
	return newQMouseEvent((*C.QMouseEvent)(h))
}

// NewQMouseEvent constructs a new QMouseEvent object.
func NewQMouseEvent(typeVal QEvent__Type, localPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	defer runtime.KeepAlive(localPos)

	return newQMouseEvent(C.QMouseEvent_new((C.int)(typeVal), localPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent2 constructs a new QMouseEvent object.
func NewQMouseEvent2(typeVal QEvent__Type, localPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(screenPos)

	return newQMouseEvent(C.QMouseEvent_new2((C.int)(typeVal), localPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent3 constructs a new QMouseEvent object.
func NewQMouseEvent3(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(windowPos)
	defer runtime.KeepAlive(screenPos)

	return newQMouseEvent(C.QMouseEvent_new3((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQMouseEvent4 constructs a new QMouseEvent object.
func NewQMouseEvent4(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, source MouseEventSource) *QMouseEvent {
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(windowPos)
	defer runtime.KeepAlive(screenPos)

	return newQMouseEvent(C.QMouseEvent_new4((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), (C.int)(source)))
}

// NewQMouseEvent5 constructs a new QMouseEvent object.
func NewQMouseEvent5(param1 *QMouseEvent) *QMouseEvent {
	defer runtime.KeepAlive(param1)

	return newQMouseEvent(C.QMouseEvent_new5(param1.cPointer()))
}

func (this *QMouseEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QMouseEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QMouseEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMouseEvent_x(this.h))
}

func (this *QMouseEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMouseEvent_y(this.h))
}

func (this *QMouseEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMouseEvent_globalX(this.h))
}

func (this *QMouseEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QMouseEvent_globalY(this.h))
}

func (this *QMouseEvent) LocalPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QMouseEvent_localPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMouseEvent) WindowPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QMouseEvent_windowPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMouseEvent) ScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QMouseEvent_screenPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMouseEvent) Button() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QMouseEvent_button(this.h))
}

func (this *QMouseEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QMouseEvent_buttons(this.h))
}

func (this *QMouseEvent) SetLocalPos(localPosition *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(localPosition)
	C.QMouseEvent_setLocalPos(this.h, localPosition.cPointer())
}

func (this *QMouseEvent) Source() MouseEventSource {
	defer runtime.KeepAlive(this)
	return (MouseEventSource)(C.QMouseEvent_source(this.h))
}

func (this *QMouseEvent) Flags() MouseEventFlag {
	defer runtime.KeepAlive(this)
	return (MouseEventFlag)(C.QMouseEvent_flags(this.h))
}

func (this *QMouseEvent) OperatorAssign(param1 *QMouseEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMouseEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMouseEvent) Delete() {
	C.QMouseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMouseEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMouseEvent_delete((*C.QMouseEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QHoverEvent struct {
	h  *C.QHoverEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHoverEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QHoverEvent) cPointer() *C.QHoverEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHoverEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHoverEvent constructs the type using only CGO pointers.
func newQHoverEvent(h *C.QHoverEvent) *QHoverEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QHoverEvent_virtbase(h, &outptr_QInputEvent)

	return &QHoverEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQHoverEvent constructs the type using only unsafe pointers.
func UnsafeNewQHoverEvent(h unsafe.Pointer) *QHoverEvent {
	return newQHoverEvent((*C.QHoverEvent)(h))
}

// NewQHoverEvent constructs a new QHoverEvent object.
func NewQHoverEvent(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF) *QHoverEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(oldPos)

	return newQHoverEvent(C.QHoverEvent_new((C.int)(typeVal), pos.cPointer(), oldPos.cPointer()))
}

// NewQHoverEvent2 constructs a new QHoverEvent object.
func NewQHoverEvent2(param1 *QHoverEvent) *QHoverEvent {
	defer runtime.KeepAlive(param1)

	return newQHoverEvent(C.QHoverEvent_new2(param1.cPointer()))
}

// NewQHoverEvent3 constructs a new QHoverEvent object.
func NewQHoverEvent3(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF, modifiers KeyboardModifier) *QHoverEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(oldPos)

	return newQHoverEvent(C.QHoverEvent_new3((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers)))
}

func (this *QHoverEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QHoverEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) OldPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QHoverEvent_oldPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) PosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QHoverEvent_posF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QHoverEvent) OldPosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QHoverEvent_oldPosF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QHoverEvent) OperatorAssign(param1 *QHoverEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QHoverEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QHoverEvent) Delete() {
	C.QHoverEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHoverEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHoverEvent_delete((*C.QHoverEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWheelEvent struct {
	h  *C.QWheelEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWheelEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QWheelEvent) cPointer() *C.QWheelEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWheelEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWheelEvent constructs the type using only CGO pointers.
func newQWheelEvent(h *C.QWheelEvent) *QWheelEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QWheelEvent_virtbase(h, &outptr_QInputEvent)

	return &QWheelEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQWheelEvent constructs the type using only unsafe pointers.
func UnsafeNewQWheelEvent(h unsafe.Pointer) *QWheelEvent {
	return newQWheelEvent((*C.QWheelEvent)(h))
}

// NewQWheelEvent constructs a new QWheelEvent object.
func NewQWheelEvent(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	defer runtime.KeepAlive(pos)

	return newQWheelEvent(C.QWheelEvent_new(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQWheelEvent2 constructs a new QWheelEvent object.
func NewQWheelEvent2(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQWheelEvent(C.QWheelEvent_new2(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQWheelEvent3 constructs a new QWheelEvent object.
func NewQWheelEvent3(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new3(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQWheelEvent4 constructs a new QWheelEvent object.
func NewQWheelEvent4(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new4(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase)))
}

// NewQWheelEvent5 constructs a new QWheelEvent object.
func NewQWheelEvent5(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new5(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source)))
}

// NewQWheelEvent6 constructs a new QWheelEvent object.
func NewQWheelEvent6(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource, inverted bool) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new6(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source), (C.bool)(inverted)))
}

// NewQWheelEvent7 constructs a new QWheelEvent object.
func NewQWheelEvent7(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new7(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted)))
}

// NewQWheelEvent8 constructs a new QWheelEvent object.
func NewQWheelEvent8(param1 *QWheelEvent) *QWheelEvent {
	defer runtime.KeepAlive(param1)

	return newQWheelEvent(C.QWheelEvent_new8(param1.cPointer()))
}

// NewQWheelEvent9 constructs a new QWheelEvent object.
func NewQWheelEvent9(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	defer runtime.KeepAlive(pos)

	return newQWheelEvent(C.QWheelEvent_new9(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient)))
}

// NewQWheelEvent10 constructs a new QWheelEvent object.
func NewQWheelEvent10(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQWheelEvent(C.QWheelEvent_new10(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient)))
}

// NewQWheelEvent11 constructs a new QWheelEvent object.
func NewQWheelEvent11(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool, source MouseEventSource) *QWheelEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)
	defer runtime.KeepAlive(pixelDelta)
	defer runtime.KeepAlive(angleDelta)

	return newQWheelEvent(C.QWheelEvent_new11(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), (C.int)(source)))
}

func (this *QWheelEvent) PixelDelta() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QWheelEvent_pixelDelta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) AngleDelta() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QWheelEvent_angleDelta(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) Delta() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWheelEvent_delta(this.h))
}

func (this *QWheelEvent) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QWheelEvent_orientation(this.h))
}

func (this *QWheelEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QWheelEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QWheelEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWheelEvent_x(this.h))
}

func (this *QWheelEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWheelEvent_y(this.h))
}

func (this *QWheelEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWheelEvent_globalX(this.h))
}

func (this *QWheelEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QWheelEvent_globalY(this.h))
}

func (this *QWheelEvent) PosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QWheelEvent_posF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QWheelEvent) GlobalPosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QWheelEvent_globalPosF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QWheelEvent) Position() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QWheelEvent_position(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) GlobalPosition() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QWheelEvent_globalPosition(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QWheelEvent_buttons(this.h))
}

func (this *QWheelEvent) Phase() ScrollPhase {
	defer runtime.KeepAlive(this)
	return (ScrollPhase)(C.QWheelEvent_phase(this.h))
}

func (this *QWheelEvent) Inverted() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWheelEvent_inverted(this.h))
}

func (this *QWheelEvent) Source() MouseEventSource {
	defer runtime.KeepAlive(this)
	return (MouseEventSource)(C.QWheelEvent_source(this.h))
}

func (this *QWheelEvent) OperatorAssign(param1 *QWheelEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QWheelEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWheelEvent) Delete() {
	C.QWheelEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWheelEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWheelEvent_delete((*C.QWheelEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QTabletEvent struct {
	h  *C.QTabletEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTabletEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QTabletEvent) cPointer() *C.QTabletEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTabletEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTabletEvent constructs the type using only CGO pointers.
func newQTabletEvent(h *C.QTabletEvent) *QTabletEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QTabletEvent_virtbase(h, &outptr_QInputEvent)

	return &QTabletEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQTabletEvent constructs the type using only unsafe pointers.
func UnsafeNewQTabletEvent(h unsafe.Pointer) *QTabletEvent {
	return newQTabletEvent((*C.QTabletEvent)(h))
}

// NewQTabletEvent constructs a new QTabletEvent object.
func NewQTabletEvent(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64) *QTabletEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQTabletEvent(C.QTabletEvent_new((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID)))
}

// NewQTabletEvent2 constructs a new QTabletEvent object.
func NewQTabletEvent2(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64, button MouseButton, buttons MouseButton) *QTabletEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQTabletEvent(C.QTabletEvent_new2((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID), (C.int)(button), (C.int)(buttons)))
}

// NewQTabletEvent3 constructs a new QTabletEvent object.
func NewQTabletEvent3(param1 *QTabletEvent) *QTabletEvent {
	defer runtime.KeepAlive(param1)

	return newQTabletEvent(C.QTabletEvent_new3(param1.cPointer()))
}

func (this *QTabletEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QTabletEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QTabletEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) PosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QTabletEvent_posF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTabletEvent) GlobalPosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QTabletEvent_globalPosF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QTabletEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_x(this.h))
}

func (this *QTabletEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_y(this.h))
}

func (this *QTabletEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_globalX(this.h))
}

func (this *QTabletEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_globalY(this.h))
}

func (this *QTabletEvent) HiResGlobalX() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTabletEvent_hiResGlobalX(this.h))
}

func (this *QTabletEvent) HiResGlobalY() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTabletEvent_hiResGlobalY(this.h))
}

func (this *QTabletEvent) Device() QTabletEvent__TabletDevice {
	defer runtime.KeepAlive(this)
	return (QTabletEvent__TabletDevice)(C.QTabletEvent_device(this.h))
}

func (this *QTabletEvent) DeviceType() QTabletEvent__TabletDevice {
	defer runtime.KeepAlive(this)
	return (QTabletEvent__TabletDevice)(C.QTabletEvent_deviceType(this.h))
}

func (this *QTabletEvent) PointerType() QTabletEvent__PointerType {
	defer runtime.KeepAlive(this)
	return (QTabletEvent__PointerType)(C.QTabletEvent_pointerType(this.h))
}

func (this *QTabletEvent) UniqueId() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QTabletEvent_uniqueId(this.h))
}

func (this *QTabletEvent) Pressure() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTabletEvent_pressure(this.h))
}

func (this *QTabletEvent) Z() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_z(this.h))
}

func (this *QTabletEvent) TangentialPressure() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTabletEvent_tangentialPressure(this.h))
}

func (this *QTabletEvent) Rotation() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTabletEvent_rotation(this.h))
}

func (this *QTabletEvent) XTilt() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_xTilt(this.h))
}

func (this *QTabletEvent) YTilt() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTabletEvent_yTilt(this.h))
}

func (this *QTabletEvent) Button() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QTabletEvent_button(this.h))
}

func (this *QTabletEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QTabletEvent_buttons(this.h))
}

func (this *QTabletEvent) OperatorAssign(param1 *QTabletEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTabletEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTabletEvent) Delete() {
	C.QTabletEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTabletEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTabletEvent_delete((*C.QTabletEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QNativeGestureEvent struct {
	h  *C.QNativeGestureEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QNativeGestureEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QNativeGestureEvent) cPointer() *C.QNativeGestureEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QNativeGestureEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQNativeGestureEvent constructs the type using only CGO pointers.
func newQNativeGestureEvent(h *C.QNativeGestureEvent) *QNativeGestureEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QNativeGestureEvent_virtbase(h, &outptr_QInputEvent)

	return &QNativeGestureEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQNativeGestureEvent constructs the type using only unsafe pointers.
func UnsafeNewQNativeGestureEvent(h unsafe.Pointer) *QNativeGestureEvent {
	return newQNativeGestureEvent((*C.QNativeGestureEvent)(h))
}

// NewQNativeGestureEvent constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent(typeVal NativeGestureType, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(windowPos)
	defer runtime.KeepAlive(screenPos)

	return newQNativeGestureEvent(C.QNativeGestureEvent_new((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument)))
}

// NewQNativeGestureEvent2 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent2(typeVal NativeGestureType, dev *QTouchDevice, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	defer runtime.KeepAlive(dev)
	defer runtime.KeepAlive(localPos)
	defer runtime.KeepAlive(windowPos)
	defer runtime.KeepAlive(screenPos)

	return newQNativeGestureEvent(C.QNativeGestureEvent_new2((C.int)(typeVal), dev.cPointer(), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument)))
}

// NewQNativeGestureEvent3 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent3(param1 *QNativeGestureEvent) *QNativeGestureEvent {
	defer runtime.KeepAlive(param1)

	return newQNativeGestureEvent(C.QNativeGestureEvent_new3(param1.cPointer()))
}

func (this *QNativeGestureEvent) GestureType() NativeGestureType {
	defer runtime.KeepAlive(this)
	return (NativeGestureType)(C.QNativeGestureEvent_gestureType(this.h))
}

func (this *QNativeGestureEvent) Value() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QNativeGestureEvent_value(this.h))
}

func (this *QNativeGestureEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QNativeGestureEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QNativeGestureEvent_globalPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) LocalPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QNativeGestureEvent_localPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNativeGestureEvent) WindowPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QNativeGestureEvent_windowPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNativeGestureEvent) ScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QNativeGestureEvent_screenPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QNativeGestureEvent) Device() *QTouchDevice {
	defer runtime.KeepAlive(this)
	return newQTouchDevice(C.QNativeGestureEvent_device(this.h))
}

func (this *QNativeGestureEvent) OperatorAssign(param1 *QNativeGestureEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QNativeGestureEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QNativeGestureEvent) Delete() {
	C.QNativeGestureEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QNativeGestureEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QNativeGestureEvent_delete((*C.QNativeGestureEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QKeyEvent struct {
	h  *C.QKeyEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QKeyEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QKeyEvent) cPointer() *C.QKeyEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QKeyEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQKeyEvent constructs the type using only CGO pointers.
func newQKeyEvent(h *C.QKeyEvent) *QKeyEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QKeyEvent_virtbase(h, &outptr_QInputEvent)

	return &QKeyEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQKeyEvent constructs the type using only unsafe pointers.
func UnsafeNewQKeyEvent(h unsafe.Pointer) *QKeyEvent {
	return newQKeyEvent((*C.QKeyEvent)(h))
}

// NewQKeyEvent constructs a new QKeyEvent object.
func NewQKeyEvent(typeVal QEvent__Type, key int, modifiers KeyboardModifier) *QKeyEvent {

	return newQKeyEvent(C.QKeyEvent_new((C.int)(typeVal), (C.int)(key), (C.int)(modifiers)))
}

// NewQKeyEvent2 constructs a new QKeyEvent object.
func NewQKeyEvent2(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint) *QKeyEvent {

	return newQKeyEvent(C.QKeyEvent_new2((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers)))
}

// NewQKeyEvent3 constructs a new QKeyEvent object.
func NewQKeyEvent3(param1 *QKeyEvent) *QKeyEvent {
	defer runtime.KeepAlive(param1)

	return newQKeyEvent(C.QKeyEvent_new3(param1.cPointer()))
}

// NewQKeyEvent4 constructs a new QKeyEvent object.
func NewQKeyEvent4(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new4((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms))
}

// NewQKeyEvent5 constructs a new QKeyEvent object.
func NewQKeyEvent5(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new5((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep)))
}

// NewQKeyEvent6 constructs a new QKeyEvent object.
func NewQKeyEvent6(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new6((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep), (C.ushort)(count)))
}

// NewQKeyEvent7 constructs a new QKeyEvent object.
func NewQKeyEvent7(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new7((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms))
}

// NewQKeyEvent8 constructs a new QKeyEvent object.
func NewQKeyEvent8(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new8((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep)))
}

// NewQKeyEvent9 constructs a new QKeyEvent object.
func NewQKeyEvent9(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))

	return newQKeyEvent(C.QKeyEvent_new9((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep), (C.ushort)(count)))
}

func (this *QKeyEvent) Key() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QKeyEvent_key(this.h))
}

func (this *QKeyEvent) Matches(key QKeySequence__StandardKey) bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QKeyEvent_matches(this.h, (C.int)(key)))
}

func (this *QKeyEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QKeyEvent_modifiers(this.h))
}

func (this *QKeyEvent) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QKeyEvent_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEvent) IsAutoRepeat() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QKeyEvent_isAutoRepeat(this.h))
}

func (this *QKeyEvent) Count() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QKeyEvent_count(this.h))
}

func (this *QKeyEvent) NativeScanCode() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QKeyEvent_nativeScanCode(this.h))
}

func (this *QKeyEvent) NativeVirtualKey() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QKeyEvent_nativeVirtualKey(this.h))
}

func (this *QKeyEvent) NativeModifiers() uint {
	defer runtime.KeepAlive(this)
	return (uint)(C.QKeyEvent_nativeModifiers(this.h))
}

func (this *QKeyEvent) OperatorAssign(param1 *QKeyEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QKeyEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QKeyEvent) Delete() {
	C.QKeyEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QKeyEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QKeyEvent_delete((*C.QKeyEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QFocusEvent struct {
	h  *C.QFocusEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QFocusEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QFocusEvent) cPointer() *C.QFocusEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFocusEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFocusEvent constructs the type using only CGO pointers.
func newQFocusEvent(h *C.QFocusEvent) *QFocusEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QFocusEvent_virtbase(h, &outptr_QEvent)

	return &QFocusEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQFocusEvent constructs the type using only unsafe pointers.
func UnsafeNewQFocusEvent(h unsafe.Pointer) *QFocusEvent {
	return newQFocusEvent((*C.QFocusEvent)(h))
}

// NewQFocusEvent constructs a new QFocusEvent object.
func NewQFocusEvent(typeVal QEvent__Type) *QFocusEvent {

	return newQFocusEvent(C.QFocusEvent_new((C.int)(typeVal)))
}

// NewQFocusEvent2 constructs a new QFocusEvent object.
func NewQFocusEvent2(param1 *QFocusEvent) *QFocusEvent {
	defer runtime.KeepAlive(param1)

	return newQFocusEvent(C.QFocusEvent_new2(param1.cPointer()))
}

// NewQFocusEvent3 constructs a new QFocusEvent object.
func NewQFocusEvent3(typeVal QEvent__Type, reason FocusReason) *QFocusEvent {

	return newQFocusEvent(C.QFocusEvent_new3((C.int)(typeVal), (C.int)(reason)))
}

func (this *QFocusEvent) GotFocus() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFocusEvent_gotFocus(this.h))
}

func (this *QFocusEvent) LostFocus() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QFocusEvent_lostFocus(this.h))
}

func (this *QFocusEvent) Reason() FocusReason {
	defer runtime.KeepAlive(this)
	return (FocusReason)(C.QFocusEvent_reason(this.h))
}

func (this *QFocusEvent) OperatorAssign(param1 *QFocusEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QFocusEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QFocusEvent) Delete() {
	C.QFocusEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QFocusEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QFocusEvent_delete((*C.QFocusEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPaintEvent struct {
	h  *C.QPaintEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPaintEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QPaintEvent) cPointer() *C.QPaintEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPaintEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPaintEvent constructs the type using only CGO pointers.
func newQPaintEvent(h *C.QPaintEvent) *QPaintEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QPaintEvent_virtbase(h, &outptr_QEvent)

	return &QPaintEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQPaintEvent constructs the type using only unsafe pointers.
func UnsafeNewQPaintEvent(h unsafe.Pointer) *QPaintEvent {
	return newQPaintEvent((*C.QPaintEvent)(h))
}

// NewQPaintEvent constructs a new QPaintEvent object.
func NewQPaintEvent(paintRegion *QRegion) *QPaintEvent {
	defer runtime.KeepAlive(paintRegion)

	return newQPaintEvent(C.QPaintEvent_new(paintRegion.cPointer()))
}

// NewQPaintEvent2 constructs a new QPaintEvent object.
func NewQPaintEvent2(paintRect *QRect) *QPaintEvent {
	defer runtime.KeepAlive(paintRect)

	return newQPaintEvent(C.QPaintEvent_new2(paintRect.cPointer()))
}

// NewQPaintEvent3 constructs a new QPaintEvent object.
func NewQPaintEvent3(param1 *QPaintEvent) *QPaintEvent {
	defer runtime.KeepAlive(param1)

	return newQPaintEvent(C.QPaintEvent_new3(param1.cPointer()))
}

func (this *QPaintEvent) Rect() *QRect {
	defer runtime.KeepAlive(this)
	_ret := newQRect(C.QPaintEvent_rect(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPaintEvent) Region() *QRegion {
	defer runtime.KeepAlive(this)
	_ret := newQRegion(C.QPaintEvent_region(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QPaintEvent) OperatorAssign(param1 *QPaintEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QPaintEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QPaintEvent) Delete() {
	C.QPaintEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPaintEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPaintEvent_delete((*C.QPaintEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QMoveEvent struct {
	h  *C.QMoveEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QMoveEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QMoveEvent) cPointer() *C.QMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QMoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQMoveEvent constructs the type using only CGO pointers.
func newQMoveEvent(h *C.QMoveEvent) *QMoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QMoveEvent_virtbase(h, &outptr_QEvent)

	return &QMoveEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQMoveEvent(h unsafe.Pointer) *QMoveEvent {
	return newQMoveEvent((*C.QMoveEvent)(h))
}

// NewQMoveEvent constructs a new QMoveEvent object.
func NewQMoveEvent(pos *QPoint, oldPos *QPoint) *QMoveEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(oldPos)

	return newQMoveEvent(C.QMoveEvent_new(pos.cPointer(), oldPos.cPointer()))
}

// NewQMoveEvent2 constructs a new QMoveEvent object.
func NewQMoveEvent2(param1 *QMoveEvent) *QMoveEvent {
	defer runtime.KeepAlive(param1)

	return newQMoveEvent(C.QMoveEvent_new2(param1.cPointer()))
}

func (this *QMoveEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QMoveEvent_pos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMoveEvent) OldPos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QMoveEvent_oldPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QMoveEvent) OperatorAssign(param1 *QMoveEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QMoveEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QMoveEvent) Delete() {
	C.QMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QMoveEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QMoveEvent_delete((*C.QMoveEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QExposeEvent struct {
	h  *C.QExposeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QExposeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QExposeEvent) cPointer() *C.QExposeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QExposeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQExposeEvent constructs the type using only CGO pointers.
func newQExposeEvent(h *C.QExposeEvent) *QExposeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QExposeEvent_virtbase(h, &outptr_QEvent)

	return &QExposeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQExposeEvent constructs the type using only unsafe pointers.
func UnsafeNewQExposeEvent(h unsafe.Pointer) *QExposeEvent {
	return newQExposeEvent((*C.QExposeEvent)(h))
}

// NewQExposeEvent constructs a new QExposeEvent object.
func NewQExposeEvent(rgn *QRegion) *QExposeEvent {
	defer runtime.KeepAlive(rgn)

	return newQExposeEvent(C.QExposeEvent_new(rgn.cPointer()))
}

// NewQExposeEvent2 constructs a new QExposeEvent object.
func NewQExposeEvent2(param1 *QExposeEvent) *QExposeEvent {
	defer runtime.KeepAlive(param1)

	return newQExposeEvent(C.QExposeEvent_new2(param1.cPointer()))
}

func (this *QExposeEvent) Region() *QRegion {
	defer runtime.KeepAlive(this)
	_ret := newQRegion(C.QExposeEvent_region(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QExposeEvent) OperatorAssign(param1 *QExposeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QExposeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QExposeEvent) Delete() {
	C.QExposeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QExposeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QExposeEvent_delete((*C.QExposeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPlatformSurfaceEvent struct {
	h  *C.QPlatformSurfaceEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPlatformSurfaceEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QPlatformSurfaceEvent) cPointer() *C.QPlatformSurfaceEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPlatformSurfaceEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPlatformSurfaceEvent constructs the type using only CGO pointers.
func newQPlatformSurfaceEvent(h *C.QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QPlatformSurfaceEvent_virtbase(h, &outptr_QEvent)

	return &QPlatformSurfaceEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQPlatformSurfaceEvent constructs the type using only unsafe pointers.
func UnsafeNewQPlatformSurfaceEvent(h unsafe.Pointer) *QPlatformSurfaceEvent {
	return newQPlatformSurfaceEvent((*C.QPlatformSurfaceEvent)(h))
}

// NewQPlatformSurfaceEvent constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent(surfaceEventType QPlatformSurfaceEvent__SurfaceEventType) *QPlatformSurfaceEvent {

	return newQPlatformSurfaceEvent(C.QPlatformSurfaceEvent_new((C.int)(surfaceEventType)))
}

// NewQPlatformSurfaceEvent2 constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent2(param1 *QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	defer runtime.KeepAlive(param1)

	return newQPlatformSurfaceEvent(C.QPlatformSurfaceEvent_new2(param1.cPointer()))
}

func (this *QPlatformSurfaceEvent) SurfaceEventType() QPlatformSurfaceEvent__SurfaceEventType {
	defer runtime.KeepAlive(this)
	return (QPlatformSurfaceEvent__SurfaceEventType)(C.QPlatformSurfaceEvent_surfaceEventType(this.h))
}

func (this *QPlatformSurfaceEvent) OperatorAssign(param1 *QPlatformSurfaceEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QPlatformSurfaceEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QPlatformSurfaceEvent) Delete() {
	C.QPlatformSurfaceEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPlatformSurfaceEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPlatformSurfaceEvent_delete((*C.QPlatformSurfaceEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QResizeEvent struct {
	h  *C.QResizeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QResizeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QResizeEvent) cPointer() *C.QResizeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QResizeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQResizeEvent constructs the type using only CGO pointers.
func newQResizeEvent(h *C.QResizeEvent) *QResizeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QResizeEvent_virtbase(h, &outptr_QEvent)

	return &QResizeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQResizeEvent constructs the type using only unsafe pointers.
func UnsafeNewQResizeEvent(h unsafe.Pointer) *QResizeEvent {
	return newQResizeEvent((*C.QResizeEvent)(h))
}

// NewQResizeEvent constructs a new QResizeEvent object.
func NewQResizeEvent(size *QSize, oldSize *QSize) *QResizeEvent {
	defer runtime.KeepAlive(size)
	defer runtime.KeepAlive(oldSize)

	return newQResizeEvent(C.QResizeEvent_new(size.cPointer(), oldSize.cPointer()))
}

// NewQResizeEvent2 constructs a new QResizeEvent object.
func NewQResizeEvent2(param1 *QResizeEvent) *QResizeEvent {
	defer runtime.KeepAlive(param1)

	return newQResizeEvent(C.QResizeEvent_new2(param1.cPointer()))
}

func (this *QResizeEvent) Size() *QSize {
	defer runtime.KeepAlive(this)
	_ret := newQSize(C.QResizeEvent_size(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QResizeEvent) OldSize() *QSize {
	defer runtime.KeepAlive(this)
	_ret := newQSize(C.QResizeEvent_oldSize(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QResizeEvent) OperatorAssign(param1 *QResizeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QResizeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QResizeEvent) Delete() {
	C.QResizeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QResizeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QResizeEvent_delete((*C.QResizeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QCloseEvent struct {
	h  *C.QCloseEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QCloseEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QCloseEvent) cPointer() *C.QCloseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCloseEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQCloseEvent constructs the type using only CGO pointers.
func newQCloseEvent(h *C.QCloseEvent) *QCloseEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QCloseEvent_virtbase(h, &outptr_QEvent)

	return &QCloseEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQCloseEvent constructs the type using only unsafe pointers.
func UnsafeNewQCloseEvent(h unsafe.Pointer) *QCloseEvent {
	return newQCloseEvent((*C.QCloseEvent)(h))
}

// NewQCloseEvent constructs a new QCloseEvent object.
func NewQCloseEvent() *QCloseEvent {

	return newQCloseEvent(C.QCloseEvent_new())
}

// NewQCloseEvent2 constructs a new QCloseEvent object.
func NewQCloseEvent2(param1 *QCloseEvent) *QCloseEvent {
	defer runtime.KeepAlive(param1)

	return newQCloseEvent(C.QCloseEvent_new2(param1.cPointer()))
}

func (this *QCloseEvent) OperatorAssign(param1 *QCloseEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QCloseEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QCloseEvent) Delete() {
	C.QCloseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QCloseEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QCloseEvent_delete((*C.QCloseEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QIconDragEvent struct {
	h  *C.QIconDragEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QIconDragEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QIconDragEvent) cPointer() *C.QIconDragEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QIconDragEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQIconDragEvent constructs the type using only CGO pointers.
func newQIconDragEvent(h *C.QIconDragEvent) *QIconDragEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QIconDragEvent_virtbase(h, &outptr_QEvent)

	return &QIconDragEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQIconDragEvent constructs the type using only unsafe pointers.
func UnsafeNewQIconDragEvent(h unsafe.Pointer) *QIconDragEvent {
	return newQIconDragEvent((*C.QIconDragEvent)(h))
}

// NewQIconDragEvent constructs a new QIconDragEvent object.
func NewQIconDragEvent() *QIconDragEvent {

	return newQIconDragEvent(C.QIconDragEvent_new())
}

// NewQIconDragEvent2 constructs a new QIconDragEvent object.
func NewQIconDragEvent2(param1 *QIconDragEvent) *QIconDragEvent {
	defer runtime.KeepAlive(param1)

	return newQIconDragEvent(C.QIconDragEvent_new2(param1.cPointer()))
}

func (this *QIconDragEvent) OperatorAssign(param1 *QIconDragEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QIconDragEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QIconDragEvent) Delete() {
	C.QIconDragEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QIconDragEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QIconDragEvent_delete((*C.QIconDragEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QShowEvent struct {
	h  *C.QShowEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QShowEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QShowEvent) cPointer() *C.QShowEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QShowEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQShowEvent constructs the type using only CGO pointers.
func newQShowEvent(h *C.QShowEvent) *QShowEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QShowEvent_virtbase(h, &outptr_QEvent)

	return &QShowEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQShowEvent constructs the type using only unsafe pointers.
func UnsafeNewQShowEvent(h unsafe.Pointer) *QShowEvent {
	return newQShowEvent((*C.QShowEvent)(h))
}

// NewQShowEvent constructs a new QShowEvent object.
func NewQShowEvent() *QShowEvent {

	return newQShowEvent(C.QShowEvent_new())
}

// NewQShowEvent2 constructs a new QShowEvent object.
func NewQShowEvent2(param1 *QShowEvent) *QShowEvent {
	defer runtime.KeepAlive(param1)

	return newQShowEvent(C.QShowEvent_new2(param1.cPointer()))
}

func (this *QShowEvent) OperatorAssign(param1 *QShowEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QShowEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QShowEvent) Delete() {
	C.QShowEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QShowEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QShowEvent_delete((*C.QShowEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QHideEvent struct {
	h  *C.QHideEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHideEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QHideEvent) cPointer() *C.QHideEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHideEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHideEvent constructs the type using only CGO pointers.
func newQHideEvent(h *C.QHideEvent) *QHideEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QHideEvent_virtbase(h, &outptr_QEvent)

	return &QHideEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQHideEvent constructs the type using only unsafe pointers.
func UnsafeNewQHideEvent(h unsafe.Pointer) *QHideEvent {
	return newQHideEvent((*C.QHideEvent)(h))
}

// NewQHideEvent constructs a new QHideEvent object.
func NewQHideEvent() *QHideEvent {

	return newQHideEvent(C.QHideEvent_new())
}

// NewQHideEvent2 constructs a new QHideEvent object.
func NewQHideEvent2(param1 *QHideEvent) *QHideEvent {
	defer runtime.KeepAlive(param1)

	return newQHideEvent(C.QHideEvent_new2(param1.cPointer()))
}

func (this *QHideEvent) OperatorAssign(param1 *QHideEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QHideEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QHideEvent) Delete() {
	C.QHideEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHideEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHideEvent_delete((*C.QHideEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QContextMenuEvent struct {
	h  *C.QContextMenuEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QContextMenuEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QContextMenuEvent) cPointer() *C.QContextMenuEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QContextMenuEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQContextMenuEvent constructs the type using only CGO pointers.
func newQContextMenuEvent(h *C.QContextMenuEvent) *QContextMenuEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QContextMenuEvent_virtbase(h, &outptr_QInputEvent)

	return &QContextMenuEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQContextMenuEvent constructs the type using only unsafe pointers.
func UnsafeNewQContextMenuEvent(h unsafe.Pointer) *QContextMenuEvent {
	return newQContextMenuEvent((*C.QContextMenuEvent)(h))
}

// NewQContextMenuEvent constructs a new QContextMenuEvent object.
func NewQContextMenuEvent(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint, modifiers KeyboardModifier) *QContextMenuEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQContextMenuEvent(C.QContextMenuEvent_new((C.int)(reason), pos.cPointer(), globalPos.cPointer(), (C.int)(modifiers)))
}

// NewQContextMenuEvent2 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent2(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint) *QContextMenuEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQContextMenuEvent(C.QContextMenuEvent_new2((C.int)(reason), pos.cPointer(), globalPos.cPointer()))
}

// NewQContextMenuEvent3 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent3(reason QContextMenuEvent__Reason, pos *QPoint) *QContextMenuEvent {
	defer runtime.KeepAlive(pos)

	return newQContextMenuEvent(C.QContextMenuEvent_new3((C.int)(reason), pos.cPointer()))
}

// NewQContextMenuEvent4 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent4(param1 *QContextMenuEvent) *QContextMenuEvent {
	defer runtime.KeepAlive(param1)

	return newQContextMenuEvent(C.QContextMenuEvent_new4(param1.cPointer()))
}

func (this *QContextMenuEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QContextMenuEvent_x(this.h))
}

func (this *QContextMenuEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QContextMenuEvent_y(this.h))
}

func (this *QContextMenuEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QContextMenuEvent_globalX(this.h))
}

func (this *QContextMenuEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QContextMenuEvent_globalY(this.h))
}

func (this *QContextMenuEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QContextMenuEvent_pos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QContextMenuEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QContextMenuEvent_globalPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QContextMenuEvent) Reason() QContextMenuEvent__Reason {
	defer runtime.KeepAlive(this)
	return (QContextMenuEvent__Reason)(C.QContextMenuEvent_reason(this.h))
}

func (this *QContextMenuEvent) OperatorAssign(param1 *QContextMenuEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QContextMenuEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QContextMenuEvent) Delete() {
	C.QContextMenuEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QContextMenuEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QContextMenuEvent_delete((*C.QContextMenuEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QInputMethodEvent struct {
	h  *C.QInputMethodEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QInputMethodEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QInputMethodEvent) cPointer() *C.QInputMethodEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodEvent constructs the type using only CGO pointers.
func newQInputMethodEvent(h *C.QInputMethodEvent) *QInputMethodEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputMethodEvent_virtbase(h, &outptr_QEvent)

	return &QInputMethodEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputMethodEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodEvent(h unsafe.Pointer) *QInputMethodEvent {
	return newQInputMethodEvent((*C.QInputMethodEvent)(h))
}

// NewQInputMethodEvent constructs a new QInputMethodEvent object.
func NewQInputMethodEvent() *QInputMethodEvent {

	return newQInputMethodEvent(C.QInputMethodEvent_new())
}

// NewQInputMethodEvent2 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent2(preeditText string, attributes []QInputMethodEvent__Attribute) *QInputMethodEvent {
	defer runtime.KeepAlive(attributes)
	preeditText_ms := C.struct_miqt_string{}
	preeditText_ms.data = C.CString(preeditText)
	preeditText_ms.len = C.size_t(len(preeditText))
	defer C.free(unsafe.Pointer(preeditText_ms.data))
	attributes_CArray_ptr := (**C.QInputMethodEvent__Attribute)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_CArray_ptr))
	attributes_CArray := unsafe.Slice(attributes_CArray_ptr, len(attributes))
	for i := range attributes {
		attributes_CArray[i] = attributes[i].cPointer()
	}
	attributes_ma := C.struct_miqt_array{len: C.size_t(len(attributes)), data: unsafe.Pointer(attributes_CArray_ptr)}

	return newQInputMethodEvent(C.QInputMethodEvent_new2(preeditText_ms, attributes_ma))
}

// NewQInputMethodEvent3 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent3(other *QInputMethodEvent) *QInputMethodEvent {
	defer runtime.KeepAlive(other)

	return newQInputMethodEvent(C.QInputMethodEvent_new3(other.cPointer()))
}

func (this *QInputMethodEvent) SetCommitString(commitString string) {
	defer runtime.KeepAlive(this)
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString(this.h, commitString_ms)
}

func (this *QInputMethodEvent) Attributes() []QInputMethodEvent__Attribute {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QInputMethodEvent_attributes(this.h)
	_ret := make([]QInputMethodEvent__Attribute, int(_ma.len))
	_outCast := unsafe.Slice((**C.QInputMethodEvent__Attribute)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQInputMethodEvent__Attribute(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QInputMethodEvent) PreeditString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QInputMethodEvent_preeditString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) CommitString() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QInputMethodEvent_commitString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) ReplacementStart() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QInputMethodEvent_replacementStart(this.h))
}

func (this *QInputMethodEvent) ReplacementLength() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QInputMethodEvent_replacementLength(this.h))
}

func (this *QInputMethodEvent) OperatorAssign(param1 *QInputMethodEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QInputMethodEvent_operatorAssign(this.h, param1.cPointer())
}

func (this *QInputMethodEvent) SetCommitString2(commitString string, replaceFrom int) {
	defer runtime.KeepAlive(this)
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString2(this.h, commitString_ms, (C.int)(replaceFrom))
}

func (this *QInputMethodEvent) SetCommitString3(commitString string, replaceFrom int, replaceLength int) {
	defer runtime.KeepAlive(this)
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_setCommitString3(this.h, commitString_ms, (C.int)(replaceFrom), (C.int)(replaceLength))
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent) Delete() {
	C.QInputMethodEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QInputMethodEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QInputMethodEvent_delete((*C.QInputMethodEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QInputMethodQueryEvent struct {
	h  *C.QInputMethodQueryEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QInputMethodQueryEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QInputMethodQueryEvent) cPointer() *C.QInputMethodQueryEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodQueryEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodQueryEvent constructs the type using only CGO pointers.
func newQInputMethodQueryEvent(h *C.QInputMethodQueryEvent) *QInputMethodQueryEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QInputMethodQueryEvent_virtbase(h, &outptr_QEvent)

	return &QInputMethodQueryEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQInputMethodQueryEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodQueryEvent(h unsafe.Pointer) *QInputMethodQueryEvent {
	return newQInputMethodQueryEvent((*C.QInputMethodQueryEvent)(h))
}

// NewQInputMethodQueryEvent constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent(queries InputMethodQuery) *QInputMethodQueryEvent {

	return newQInputMethodQueryEvent(C.QInputMethodQueryEvent_new((C.int)(queries)))
}

// NewQInputMethodQueryEvent2 constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent2(param1 *QInputMethodQueryEvent) *QInputMethodQueryEvent {
	defer runtime.KeepAlive(param1)

	return newQInputMethodQueryEvent(C.QInputMethodQueryEvent_new2(param1.cPointer()))
}

func (this *QInputMethodQueryEvent) Queries() InputMethodQuery {
	defer runtime.KeepAlive(this)
	return (InputMethodQuery)(C.QInputMethodQueryEvent_queries(this.h))
}

func (this *QInputMethodQueryEvent) SetValue(query InputMethodQuery, value *QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QInputMethodQueryEvent_setValue(this.h, (C.int)(query), value.cPointer())
}

func (this *QInputMethodQueryEvent) Value(query InputMethodQuery) *QVariant {
	defer runtime.KeepAlive(this)
	_goptr := newQVariant(C.QInputMethodQueryEvent_value(this.h, (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QInputMethodQueryEvent) OperatorAssign(param1 *QInputMethodQueryEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QInputMethodQueryEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputMethodQueryEvent) Delete() {
	C.QInputMethodQueryEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QInputMethodQueryEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QInputMethodQueryEvent_delete((*C.QInputMethodQueryEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDropEvent struct {
	h  *C.QDropEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDropEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QDropEvent) cPointer() *C.QDropEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDropEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDropEvent constructs the type using only CGO pointers.
func newQDropEvent(h *C.QDropEvent) *QDropEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QDropEvent_virtbase(h, &outptr_QEvent)

	return &QDropEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQDropEvent constructs the type using only unsafe pointers.
func UnsafeNewQDropEvent(h unsafe.Pointer) *QDropEvent {
	return newQDropEvent((*C.QDropEvent)(h))
}

// NewQDropEvent constructs a new QDropEvent object.
func NewQDropEvent(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDropEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(data)

	return newQDropEvent(C.QDropEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQDropEvent2 constructs a new QDropEvent object.
func NewQDropEvent2(param1 *QDropEvent) *QDropEvent {
	defer runtime.KeepAlive(param1)

	return newQDropEvent(C.QDropEvent_new2(param1.cPointer()))
}

// NewQDropEvent3 constructs a new QDropEvent object.
func NewQDropEvent3(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDropEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(data)

	return newQDropEvent(C.QDropEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal)))
}

func (this *QDropEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QDropEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) PosF() *QPointF {
	defer runtime.KeepAlive(this)
	_ret := newQPointF(C.QDropEvent_posF(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QDropEvent) MouseButtons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QDropEvent_mouseButtons(this.h))
}

func (this *QDropEvent) KeyboardModifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QDropEvent_keyboardModifiers(this.h))
}

func (this *QDropEvent) PossibleActions() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QDropEvent_possibleActions(this.h))
}

func (this *QDropEvent) ProposedAction() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QDropEvent_proposedAction(this.h))
}

func (this *QDropEvent) AcceptProposedAction() {
	defer runtime.KeepAlive(this)
	C.QDropEvent_acceptProposedAction(this.h)
}

func (this *QDropEvent) DropAction() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QDropEvent_dropAction(this.h))
}

func (this *QDropEvent) SetDropAction(action DropAction) {
	defer runtime.KeepAlive(this)
	C.QDropEvent_setDropAction(this.h, (C.int)(action))
}

func (this *QDropEvent) Source() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QDropEvent_source(this.h))
}

func (this *QDropEvent) MimeData() *QMimeData {
	defer runtime.KeepAlive(this)
	return newQMimeData(C.QDropEvent_mimeData(this.h))
}

func (this *QDropEvent) OperatorAssign(param1 *QDropEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDropEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDropEvent) Delete() {
	C.QDropEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDropEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDropEvent_delete((*C.QDropEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDragMoveEvent struct {
	h  *C.QDragMoveEvent
	gc *[1]unsafe.Pointer
	*QDropEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDragMoveEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QDropEvent.miqtSetGC(gc)
}

func (this *QDragMoveEvent) cPointer() *C.QDragMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragMoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragMoveEvent constructs the type using only CGO pointers.
func newQDragMoveEvent(h *C.QDragMoveEvent) *QDragMoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QDropEvent *C.QDropEvent = nil
	C.QDragMoveEvent_virtbase(h, &outptr_QDropEvent)

	return &QDragMoveEvent{h: h,
		QDropEvent: newQDropEvent(outptr_QDropEvent)}
}

// UnsafeNewQDragMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragMoveEvent(h unsafe.Pointer) *QDragMoveEvent {
	return newQDragMoveEvent((*C.QDragMoveEvent)(h))
}

// NewQDragMoveEvent constructs a new QDragMoveEvent object.
func NewQDragMoveEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragMoveEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(data)

	return newQDragMoveEvent(C.QDragMoveEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQDragMoveEvent2 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent2(param1 *QDragMoveEvent) *QDragMoveEvent {
	defer runtime.KeepAlive(param1)

	return newQDragMoveEvent(C.QDragMoveEvent_new2(param1.cPointer()))
}

// NewQDragMoveEvent3 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent3(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDragMoveEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(data)

	return newQDragMoveEvent(C.QDragMoveEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal)))
}

func (this *QDragMoveEvent) AnswerRect() *QRect {
	defer runtime.KeepAlive(this)
	_goptr := newQRect(C.QDragMoveEvent_answerRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDragMoveEvent) Accept() {
	defer runtime.KeepAlive(this)
	C.QDragMoveEvent_accept(this.h)
}

func (this *QDragMoveEvent) Ignore() {
	defer runtime.KeepAlive(this)
	C.QDragMoveEvent_ignore(this.h)
}

func (this *QDragMoveEvent) AcceptWithQRect(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QDragMoveEvent_acceptWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) IgnoreWithQRect(r *QRect) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(r)
	C.QDragMoveEvent_ignoreWithQRect(this.h, r.cPointer())
}

func (this *QDragMoveEvent) OperatorAssign(param1 *QDragMoveEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDragMoveEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDragMoveEvent) Delete() {
	C.QDragMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDragMoveEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDragMoveEvent_delete((*C.QDragMoveEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDragEnterEvent struct {
	h  *C.QDragEnterEvent
	gc *[1]unsafe.Pointer
	*QDragMoveEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDragEnterEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QDragMoveEvent.miqtSetGC(gc)
}

func (this *QDragEnterEvent) cPointer() *C.QDragEnterEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragEnterEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragEnterEvent constructs the type using only CGO pointers.
func newQDragEnterEvent(h *C.QDragEnterEvent) *QDragEnterEvent {
	if h == nil {
		return nil
	}
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	C.QDragEnterEvent_virtbase(h, &outptr_QDragMoveEvent)

	return &QDragEnterEvent{h: h,
		QDragMoveEvent: newQDragMoveEvent(outptr_QDragMoveEvent)}
}

// UnsafeNewQDragEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragEnterEvent(h unsafe.Pointer) *QDragEnterEvent {
	return newQDragEnterEvent((*C.QDragEnterEvent)(h))
}

// NewQDragEnterEvent constructs a new QDragEnterEvent object.
func NewQDragEnterEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragEnterEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(data)

	return newQDragEnterEvent(C.QDragEnterEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers)))
}

// NewQDragEnterEvent2 constructs a new QDragEnterEvent object.
func NewQDragEnterEvent2(param1 *QDragEnterEvent) *QDragEnterEvent {
	defer runtime.KeepAlive(param1)

	return newQDragEnterEvent(C.QDragEnterEvent_new2(param1.cPointer()))
}

func (this *QDragEnterEvent) OperatorAssign(param1 *QDragEnterEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDragEnterEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDragEnterEvent) Delete() {
	C.QDragEnterEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDragEnterEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDragEnterEvent_delete((*C.QDragEnterEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QDragLeaveEvent struct {
	h  *C.QDragLeaveEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QDragLeaveEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QDragLeaveEvent) cPointer() *C.QDragLeaveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDragLeaveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDragLeaveEvent constructs the type using only CGO pointers.
func newQDragLeaveEvent(h *C.QDragLeaveEvent) *QDragLeaveEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QDragLeaveEvent_virtbase(h, &outptr_QEvent)

	return &QDragLeaveEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQDragLeaveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragLeaveEvent(h unsafe.Pointer) *QDragLeaveEvent {
	return newQDragLeaveEvent((*C.QDragLeaveEvent)(h))
}

// NewQDragLeaveEvent constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent() *QDragLeaveEvent {

	return newQDragLeaveEvent(C.QDragLeaveEvent_new())
}

// NewQDragLeaveEvent2 constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent2(param1 *QDragLeaveEvent) *QDragLeaveEvent {
	defer runtime.KeepAlive(param1)

	return newQDragLeaveEvent(C.QDragLeaveEvent_new2(param1.cPointer()))
}

func (this *QDragLeaveEvent) OperatorAssign(param1 *QDragLeaveEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QDragLeaveEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDragLeaveEvent) Delete() {
	C.QDragLeaveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QDragLeaveEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QDragLeaveEvent_delete((*C.QDragLeaveEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QHelpEvent struct {
	h  *C.QHelpEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QHelpEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QHelpEvent) cPointer() *C.QHelpEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHelpEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQHelpEvent constructs the type using only CGO pointers.
func newQHelpEvent(h *C.QHelpEvent) *QHelpEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QHelpEvent_virtbase(h, &outptr_QEvent)

	return &QHelpEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQHelpEvent constructs the type using only unsafe pointers.
func UnsafeNewQHelpEvent(h unsafe.Pointer) *QHelpEvent {
	return newQHelpEvent((*C.QHelpEvent)(h))
}

// NewQHelpEvent constructs a new QHelpEvent object.
func NewQHelpEvent(typeVal QEvent__Type, pos *QPoint, globalPos *QPoint) *QHelpEvent {
	defer runtime.KeepAlive(pos)
	defer runtime.KeepAlive(globalPos)

	return newQHelpEvent(C.QHelpEvent_new((C.int)(typeVal), pos.cPointer(), globalPos.cPointer()))
}

// NewQHelpEvent2 constructs a new QHelpEvent object.
func NewQHelpEvent2(param1 *QHelpEvent) *QHelpEvent {
	defer runtime.KeepAlive(param1)

	return newQHelpEvent(C.QHelpEvent_new2(param1.cPointer()))
}

func (this *QHelpEvent) X() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHelpEvent_x(this.h))
}

func (this *QHelpEvent) Y() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHelpEvent_y(this.h))
}

func (this *QHelpEvent) GlobalX() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHelpEvent_globalX(this.h))
}

func (this *QHelpEvent) GlobalY() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QHelpEvent_globalY(this.h))
}

func (this *QHelpEvent) Pos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QHelpEvent_pos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QHelpEvent) GlobalPos() *QPoint {
	defer runtime.KeepAlive(this)
	_ret := newQPoint(C.QHelpEvent_globalPos(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QHelpEvent) OperatorAssign(param1 *QHelpEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QHelpEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QHelpEvent) Delete() {
	C.QHelpEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QHelpEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QHelpEvent_delete((*C.QHelpEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QStatusTipEvent struct {
	h  *C.QStatusTipEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QStatusTipEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QStatusTipEvent) cPointer() *C.QStatusTipEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStatusTipEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStatusTipEvent constructs the type using only CGO pointers.
func newQStatusTipEvent(h *C.QStatusTipEvent) *QStatusTipEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QStatusTipEvent_virtbase(h, &outptr_QEvent)

	return &QStatusTipEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQStatusTipEvent constructs the type using only unsafe pointers.
func UnsafeNewQStatusTipEvent(h unsafe.Pointer) *QStatusTipEvent {
	return newQStatusTipEvent((*C.QStatusTipEvent)(h))
}

// NewQStatusTipEvent constructs a new QStatusTipEvent object.
func NewQStatusTipEvent(tip string) *QStatusTipEvent {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))

	return newQStatusTipEvent(C.QStatusTipEvent_new(tip_ms))
}

// NewQStatusTipEvent2 constructs a new QStatusTipEvent object.
func NewQStatusTipEvent2(param1 *QStatusTipEvent) *QStatusTipEvent {
	defer runtime.KeepAlive(param1)

	return newQStatusTipEvent(C.QStatusTipEvent_new2(param1.cPointer()))
}

func (this *QStatusTipEvent) Tip() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QStatusTipEvent_tip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QStatusTipEvent) OperatorAssign(param1 *QStatusTipEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QStatusTipEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QStatusTipEvent) Delete() {
	C.QStatusTipEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QStatusTipEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QStatusTipEvent_delete((*C.QStatusTipEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWhatsThisClickedEvent struct {
	h  *C.QWhatsThisClickedEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWhatsThisClickedEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QWhatsThisClickedEvent) cPointer() *C.QWhatsThisClickedEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWhatsThisClickedEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWhatsThisClickedEvent constructs the type using only CGO pointers.
func newQWhatsThisClickedEvent(h *C.QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QWhatsThisClickedEvent_virtbase(h, &outptr_QEvent)

	return &QWhatsThisClickedEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQWhatsThisClickedEvent constructs the type using only unsafe pointers.
func UnsafeNewQWhatsThisClickedEvent(h unsafe.Pointer) *QWhatsThisClickedEvent {
	return newQWhatsThisClickedEvent((*C.QWhatsThisClickedEvent)(h))
}

// NewQWhatsThisClickedEvent constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent(href string) *QWhatsThisClickedEvent {
	href_ms := C.struct_miqt_string{}
	href_ms.data = C.CString(href)
	href_ms.len = C.size_t(len(href))
	defer C.free(unsafe.Pointer(href_ms.data))

	return newQWhatsThisClickedEvent(C.QWhatsThisClickedEvent_new(href_ms))
}

// NewQWhatsThisClickedEvent2 constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent2(param1 *QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	defer runtime.KeepAlive(param1)

	return newQWhatsThisClickedEvent(C.QWhatsThisClickedEvent_new2(param1.cPointer()))
}

func (this *QWhatsThisClickedEvent) Href() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QWhatsThisClickedEvent_href(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QWhatsThisClickedEvent) OperatorAssign(param1 *QWhatsThisClickedEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QWhatsThisClickedEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWhatsThisClickedEvent) Delete() {
	C.QWhatsThisClickedEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWhatsThisClickedEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWhatsThisClickedEvent_delete((*C.QWhatsThisClickedEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QActionEvent struct {
	h  *C.QActionEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QActionEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QActionEvent) cPointer() *C.QActionEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QActionEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQActionEvent constructs the type using only CGO pointers.
func newQActionEvent(h *C.QActionEvent) *QActionEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QActionEvent_virtbase(h, &outptr_QEvent)

	return &QActionEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQActionEvent constructs the type using only unsafe pointers.
func UnsafeNewQActionEvent(h unsafe.Pointer) *QActionEvent {
	return newQActionEvent((*C.QActionEvent)(h))
}

// NewQActionEvent constructs a new QActionEvent object.
func NewQActionEvent(typeVal int, action *QAction) *QActionEvent {
	defer runtime.KeepAlive(action)

	return newQActionEvent(C.QActionEvent_new((C.int)(typeVal), action.cPointer()))
}

// NewQActionEvent2 constructs a new QActionEvent object.
func NewQActionEvent2(param1 *QActionEvent) *QActionEvent {
	defer runtime.KeepAlive(param1)

	return newQActionEvent(C.QActionEvent_new2(param1.cPointer()))
}

// NewQActionEvent3 constructs a new QActionEvent object.
func NewQActionEvent3(typeVal int, action *QAction, before *QAction) *QActionEvent {
	defer runtime.KeepAlive(action)
	defer runtime.KeepAlive(before)

	return newQActionEvent(C.QActionEvent_new3((C.int)(typeVal), action.cPointer(), before.cPointer()))
}

func (this *QActionEvent) Action() *QAction {
	defer runtime.KeepAlive(this)
	return newQAction(C.QActionEvent_action(this.h))
}

func (this *QActionEvent) Before() *QAction {
	defer runtime.KeepAlive(this)
	return newQAction(C.QActionEvent_before(this.h))
}

func (this *QActionEvent) OperatorAssign(param1 *QActionEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QActionEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QActionEvent) Delete() {
	C.QActionEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QActionEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QActionEvent_delete((*C.QActionEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QFileOpenEvent struct {
	h  *C.QFileOpenEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QFileOpenEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QFileOpenEvent) cPointer() *C.QFileOpenEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileOpenEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileOpenEvent constructs the type using only CGO pointers.
func newQFileOpenEvent(h *C.QFileOpenEvent) *QFileOpenEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QFileOpenEvent_virtbase(h, &outptr_QEvent)

	return &QFileOpenEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQFileOpenEvent constructs the type using only unsafe pointers.
func UnsafeNewQFileOpenEvent(h unsafe.Pointer) *QFileOpenEvent {
	return newQFileOpenEvent((*C.QFileOpenEvent)(h))
}

// NewQFileOpenEvent constructs a new QFileOpenEvent object.
func NewQFileOpenEvent(file string) *QFileOpenEvent {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))

	return newQFileOpenEvent(C.QFileOpenEvent_new(file_ms))
}

// NewQFileOpenEvent2 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent2(url *QUrl) *QFileOpenEvent {
	defer runtime.KeepAlive(url)

	return newQFileOpenEvent(C.QFileOpenEvent_new2(url.cPointer()))
}

// NewQFileOpenEvent3 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent3(param1 *QFileOpenEvent) *QFileOpenEvent {
	defer runtime.KeepAlive(param1)

	return newQFileOpenEvent(C.QFileOpenEvent_new3(param1.cPointer()))
}

func (this *QFileOpenEvent) File() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QFileOpenEvent_file(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileOpenEvent) Url() *QUrl {
	defer runtime.KeepAlive(this)
	_goptr := newQUrl(C.QFileOpenEvent_url(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileOpenEvent) OpenFile(file *QFile, flags QIODevice__OpenModeFlag) bool {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(file)
	return (bool)(C.QFileOpenEvent_openFile(this.h, file.cPointer(), (C.int)(flags)))
}

func (this *QFileOpenEvent) OperatorAssign(param1 *QFileOpenEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QFileOpenEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QFileOpenEvent) Delete() {
	C.QFileOpenEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QFileOpenEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QFileOpenEvent_delete((*C.QFileOpenEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QToolBarChangeEvent struct {
	h  *C.QToolBarChangeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QToolBarChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QToolBarChangeEvent) cPointer() *C.QToolBarChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QToolBarChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQToolBarChangeEvent constructs the type using only CGO pointers.
func newQToolBarChangeEvent(h *C.QToolBarChangeEvent) *QToolBarChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QToolBarChangeEvent_virtbase(h, &outptr_QEvent)

	return &QToolBarChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQToolBarChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQToolBarChangeEvent(h unsafe.Pointer) *QToolBarChangeEvent {
	return newQToolBarChangeEvent((*C.QToolBarChangeEvent)(h))
}

// NewQToolBarChangeEvent constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent(t bool) *QToolBarChangeEvent {

	return newQToolBarChangeEvent(C.QToolBarChangeEvent_new((C.bool)(t)))
}

// NewQToolBarChangeEvent2 constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent2(param1 *QToolBarChangeEvent) *QToolBarChangeEvent {
	defer runtime.KeepAlive(param1)

	return newQToolBarChangeEvent(C.QToolBarChangeEvent_new2(param1.cPointer()))
}

func (this *QToolBarChangeEvent) Toggle() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QToolBarChangeEvent_toggle(this.h))
}

func (this *QToolBarChangeEvent) OperatorAssign(param1 *QToolBarChangeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QToolBarChangeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QToolBarChangeEvent) Delete() {
	C.QToolBarChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QToolBarChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QToolBarChangeEvent_delete((*C.QToolBarChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QShortcutEvent struct {
	h  *C.QShortcutEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QShortcutEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QShortcutEvent) cPointer() *C.QShortcutEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QShortcutEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQShortcutEvent constructs the type using only CGO pointers.
func newQShortcutEvent(h *C.QShortcutEvent) *QShortcutEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QShortcutEvent_virtbase(h, &outptr_QEvent)

	return &QShortcutEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQShortcutEvent constructs the type using only unsafe pointers.
func UnsafeNewQShortcutEvent(h unsafe.Pointer) *QShortcutEvent {
	return newQShortcutEvent((*C.QShortcutEvent)(h))
}

// NewQShortcutEvent constructs a new QShortcutEvent object.
func NewQShortcutEvent(key *QKeySequence, id int) *QShortcutEvent {
	defer runtime.KeepAlive(key)

	return newQShortcutEvent(C.QShortcutEvent_new(key.cPointer(), (C.int)(id)))
}

// NewQShortcutEvent2 constructs a new QShortcutEvent object.
func NewQShortcutEvent2(param1 *QShortcutEvent) *QShortcutEvent {
	defer runtime.KeepAlive(param1)

	return newQShortcutEvent(C.QShortcutEvent_new2(param1.cPointer()))
}

// NewQShortcutEvent3 constructs a new QShortcutEvent object.
func NewQShortcutEvent3(key *QKeySequence, id int, ambiguous bool) *QShortcutEvent {
	defer runtime.KeepAlive(key)

	return newQShortcutEvent(C.QShortcutEvent_new3(key.cPointer(), (C.int)(id), (C.bool)(ambiguous)))
}

func (this *QShortcutEvent) Key() *QKeySequence {
	defer runtime.KeepAlive(this)
	_ret := newQKeySequence(C.QShortcutEvent_key(this.h))
	_ret.miqtSetGC(this.gc)
	return _ret
}

func (this *QShortcutEvent) ShortcutId() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QShortcutEvent_shortcutId(this.h))
}

func (this *QShortcutEvent) IsAmbiguous() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QShortcutEvent_isAmbiguous(this.h))
}

func (this *QShortcutEvent) OperatorAssign(param1 *QShortcutEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QShortcutEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QShortcutEvent) Delete() {
	C.QShortcutEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QShortcutEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QShortcutEvent_delete((*C.QShortcutEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QWindowStateChangeEvent struct {
	h  *C.QWindowStateChangeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QWindowStateChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QWindowStateChangeEvent) cPointer() *C.QWindowStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QWindowStateChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQWindowStateChangeEvent constructs the type using only CGO pointers.
func newQWindowStateChangeEvent(h *C.QWindowStateChangeEvent) *QWindowStateChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QWindowStateChangeEvent_virtbase(h, &outptr_QEvent)

	return &QWindowStateChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQWindowStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQWindowStateChangeEvent(h unsafe.Pointer) *QWindowStateChangeEvent {
	return newQWindowStateChangeEvent((*C.QWindowStateChangeEvent)(h))
}

// NewQWindowStateChangeEvent constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent(aOldState WindowState) *QWindowStateChangeEvent {

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_new((C.int)(aOldState)))
}

// NewQWindowStateChangeEvent2 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent2(param1 *QWindowStateChangeEvent) *QWindowStateChangeEvent {
	defer runtime.KeepAlive(param1)

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_new2(param1.cPointer()))
}

// NewQWindowStateChangeEvent3 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent3(aOldState WindowState, isOverride bool) *QWindowStateChangeEvent {

	return newQWindowStateChangeEvent(C.QWindowStateChangeEvent_new3((C.int)(aOldState), (C.bool)(isOverride)))
}

func (this *QWindowStateChangeEvent) OldState() WindowState {
	defer runtime.KeepAlive(this)
	return (WindowState)(C.QWindowStateChangeEvent_oldState(this.h))
}

func (this *QWindowStateChangeEvent) IsOverride() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QWindowStateChangeEvent_isOverride(this.h))
}

func (this *QWindowStateChangeEvent) OperatorAssign(param1 *QWindowStateChangeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QWindowStateChangeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QWindowStateChangeEvent) Delete() {
	C.QWindowStateChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QWindowStateChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QWindowStateChangeEvent_delete((*C.QWindowStateChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QPointingDeviceUniqueId struct {
	h  *C.QPointingDeviceUniqueId
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QPointingDeviceUniqueId) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QPointingDeviceUniqueId) cPointer() *C.QPointingDeviceUniqueId {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPointingDeviceUniqueId) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPointingDeviceUniqueId constructs the type using only CGO pointers.
func newQPointingDeviceUniqueId(h *C.QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	if h == nil {
		return nil
	}

	return &QPointingDeviceUniqueId{h: h}
}

// UnsafeNewQPointingDeviceUniqueId constructs the type using only unsafe pointers.
func UnsafeNewQPointingDeviceUniqueId(h unsafe.Pointer) *QPointingDeviceUniqueId {
	return newQPointingDeviceUniqueId((*C.QPointingDeviceUniqueId)(h))
}

// NewQPointingDeviceUniqueId constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId() *QPointingDeviceUniqueId {

	return newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_new())
}

// NewQPointingDeviceUniqueId2 constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId2(param1 *QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	defer runtime.KeepAlive(param1)

	return newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_new2(param1.cPointer()))
}

func QPointingDeviceUniqueId_FromNumericId(id int64) *QPointingDeviceUniqueId {
	_goptr := newQPointingDeviceUniqueId(C.QPointingDeviceUniqueId_fromNumericId((C.longlong)(id)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointingDeviceUniqueId) IsValid() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QPointingDeviceUniqueId_isValid(this.h))
}

func (this *QPointingDeviceUniqueId) NumericId() int64 {
	defer runtime.KeepAlive(this)
	return (int64)(C.QPointingDeviceUniqueId_numericId(this.h))
}

// Delete this object from C++ memory.
func (this *QPointingDeviceUniqueId) Delete() {
	C.QPointingDeviceUniqueId_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QPointingDeviceUniqueId) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QPointingDeviceUniqueId_delete((*C.QPointingDeviceUniqueId)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QTouchEvent struct {
	h  *C.QTouchEvent
	gc *[1]unsafe.Pointer
	*QInputEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTouchEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QInputEvent.miqtSetGC(gc)
}

func (this *QTouchEvent) cPointer() *C.QTouchEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTouchEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTouchEvent constructs the type using only CGO pointers.
func newQTouchEvent(h *C.QTouchEvent) *QTouchEvent {
	if h == nil {
		return nil
	}
	var outptr_QInputEvent *C.QInputEvent = nil
	C.QTouchEvent_virtbase(h, &outptr_QInputEvent)

	return &QTouchEvent{h: h,
		QInputEvent: newQInputEvent(outptr_QInputEvent)}
}

// UnsafeNewQTouchEvent constructs the type using only unsafe pointers.
func UnsafeNewQTouchEvent(h unsafe.Pointer) *QTouchEvent {
	return newQTouchEvent((*C.QTouchEvent)(h))
}

// NewQTouchEvent constructs a new QTouchEvent object.
func NewQTouchEvent(eventType QEvent__Type) *QTouchEvent {

	return newQTouchEvent(C.QTouchEvent_new((C.int)(eventType)))
}

// NewQTouchEvent2 constructs a new QTouchEvent object.
func NewQTouchEvent2(param1 *QTouchEvent) *QTouchEvent {
	defer runtime.KeepAlive(param1)

	return newQTouchEvent(C.QTouchEvent_new2(param1.cPointer()))
}

// NewQTouchEvent3 constructs a new QTouchEvent object.
func NewQTouchEvent3(eventType QEvent__Type, device *QTouchDevice) *QTouchEvent {
	defer runtime.KeepAlive(device)

	return newQTouchEvent(C.QTouchEvent_new3((C.int)(eventType), device.cPointer()))
}

// NewQTouchEvent4 constructs a new QTouchEvent object.
func NewQTouchEvent4(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier) *QTouchEvent {
	defer runtime.KeepAlive(device)

	return newQTouchEvent(C.QTouchEvent_new4((C.int)(eventType), device.cPointer(), (C.int)(modifiers)))
}

// NewQTouchEvent5 constructs a new QTouchEvent object.
func NewQTouchEvent5(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState) *QTouchEvent {
	defer runtime.KeepAlive(device)

	return newQTouchEvent(C.QTouchEvent_new5((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates)))
}

// NewQTouchEvent6 constructs a new QTouchEvent object.
func NewQTouchEvent6(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState, touchPoints []QTouchEvent__TouchPoint) *QTouchEvent {
	defer runtime.KeepAlive(device)
	defer runtime.KeepAlive(touchPoints)
	touchPoints_CArray_ptr := (**C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray_ptr))
	touchPoints_CArray := unsafe.Slice(touchPoints_CArray_ptr, len(touchPoints))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	touchPoints_ma := C.struct_miqt_array{len: C.size_t(len(touchPoints)), data: unsafe.Pointer(touchPoints_CArray_ptr)}

	return newQTouchEvent(C.QTouchEvent_new6((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates), touchPoints_ma))
}

func (this *QTouchEvent) Window() *QWindow {
	defer runtime.KeepAlive(this)
	return newQWindow(C.QTouchEvent_window(this.h))
}

func (this *QTouchEvent) Target() *QObject {
	defer runtime.KeepAlive(this)
	return newQObject(C.QTouchEvent_target(this.h))
}

func (this *QTouchEvent) TouchPointStates() TouchPointState {
	defer runtime.KeepAlive(this)
	return (TouchPointState)(C.QTouchEvent_touchPointStates(this.h))
}

func (this *QTouchEvent) TouchPoints() []QTouchEvent__TouchPoint {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QTouchEvent_touchPoints(this.h)
	_ret := make([]QTouchEvent__TouchPoint, int(_ma.len))
	_outCast := unsafe.Slice((**C.QTouchEvent__TouchPoint)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_lv_goptr := newQTouchEvent__TouchPoint(_outCast[i])
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTouchEvent) Device() *QTouchDevice {
	defer runtime.KeepAlive(this)
	return newQTouchDevice(C.QTouchEvent_device(this.h))
}

func (this *QTouchEvent) SetWindow(awindow *QWindow) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(awindow)
	C.QTouchEvent_setWindow(this.h, awindow.cPointer())
}

func (this *QTouchEvent) SetTarget(atarget *QObject) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(atarget)
	C.QTouchEvent_setTarget(this.h, atarget.cPointer())
}

func (this *QTouchEvent) SetTouchPointStates(aTouchPointStates TouchPointState) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent_setTouchPointStates(this.h, (C.int)(aTouchPointStates))
}

func (this *QTouchEvent) SetTouchPoints(atouchPoints []QTouchEvent__TouchPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(atouchPoints)
	atouchPoints_CArray_ptr := (**C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(atouchPoints))))
	defer C.free(unsafe.Pointer(atouchPoints_CArray_ptr))
	atouchPoints_CArray := unsafe.Slice(atouchPoints_CArray_ptr, len(atouchPoints))
	for i := range atouchPoints {
		atouchPoints_CArray[i] = atouchPoints[i].cPointer()
	}
	atouchPoints_ma := C.struct_miqt_array{len: C.size_t(len(atouchPoints)), data: unsafe.Pointer(atouchPoints_CArray_ptr)}
	C.QTouchEvent_setTouchPoints(this.h, atouchPoints_ma)
}

func (this *QTouchEvent) SetDevice(adevice *QTouchDevice) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(adevice)
	C.QTouchEvent_setDevice(this.h, adevice.cPointer())
}

func (this *QTouchEvent) OperatorAssign(param1 *QTouchEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QTouchEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QTouchEvent) Delete() {
	C.QTouchEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTouchEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTouchEvent_delete((*C.QTouchEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QScrollPrepareEvent struct {
	h  *C.QScrollPrepareEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScrollPrepareEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QScrollPrepareEvent) cPointer() *C.QScrollPrepareEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollPrepareEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollPrepareEvent constructs the type using only CGO pointers.
func newQScrollPrepareEvent(h *C.QScrollPrepareEvent) *QScrollPrepareEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScrollPrepareEvent_virtbase(h, &outptr_QEvent)

	return &QScrollPrepareEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScrollPrepareEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollPrepareEvent(h unsafe.Pointer) *QScrollPrepareEvent {
	return newQScrollPrepareEvent((*C.QScrollPrepareEvent)(h))
}

// NewQScrollPrepareEvent constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent(startPos *QPointF) *QScrollPrepareEvent {
	defer runtime.KeepAlive(startPos)

	return newQScrollPrepareEvent(C.QScrollPrepareEvent_new(startPos.cPointer()))
}

// NewQScrollPrepareEvent2 constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent2(param1 *QScrollPrepareEvent) *QScrollPrepareEvent {
	defer runtime.KeepAlive(param1)

	return newQScrollPrepareEvent(C.QScrollPrepareEvent_new2(param1.cPointer()))
}

func (this *QScrollPrepareEvent) StartPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QScrollPrepareEvent_startPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ViewportSize() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QScrollPrepareEvent_viewportSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPosRange() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QScrollPrepareEvent_contentPosRange(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QScrollPrepareEvent_contentPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) SetViewportSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QScrollPrepareEvent_setViewportSize(this.h, size.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPosRange(rect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QScrollPrepareEvent_setContentPosRange(this.h, rect.cPointer())
}

func (this *QScrollPrepareEvent) SetContentPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QScrollPrepareEvent_setContentPos(this.h, pos.cPointer())
}

func (this *QScrollPrepareEvent) OperatorAssign(param1 *QScrollPrepareEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QScrollPrepareEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QScrollPrepareEvent) Delete() {
	C.QScrollPrepareEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScrollPrepareEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScrollPrepareEvent_delete((*C.QScrollPrepareEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QScrollEvent struct {
	h  *C.QScrollEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScrollEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QScrollEvent) cPointer() *C.QScrollEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScrollEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScrollEvent constructs the type using only CGO pointers.
func newQScrollEvent(h *C.QScrollEvent) *QScrollEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScrollEvent_virtbase(h, &outptr_QEvent)

	return &QScrollEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScrollEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollEvent(h unsafe.Pointer) *QScrollEvent {
	return newQScrollEvent((*C.QScrollEvent)(h))
}

// NewQScrollEvent constructs a new QScrollEvent object.
func NewQScrollEvent(contentPos *QPointF, overshoot *QPointF, scrollState QScrollEvent__ScrollState) *QScrollEvent {
	defer runtime.KeepAlive(contentPos)
	defer runtime.KeepAlive(overshoot)

	return newQScrollEvent(C.QScrollEvent_new(contentPos.cPointer(), overshoot.cPointer(), (C.int)(scrollState)))
}

// NewQScrollEvent2 constructs a new QScrollEvent object.
func NewQScrollEvent2(param1 *QScrollEvent) *QScrollEvent {
	defer runtime.KeepAlive(param1)

	return newQScrollEvent(C.QScrollEvent_new2(param1.cPointer()))
}

func (this *QScrollEvent) ContentPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QScrollEvent_contentPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) OvershootDistance() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QScrollEvent_overshootDistance(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) ScrollState() QScrollEvent__ScrollState {
	defer runtime.KeepAlive(this)
	return (QScrollEvent__ScrollState)(C.QScrollEvent_scrollState(this.h))
}

func (this *QScrollEvent) OperatorAssign(param1 *QScrollEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QScrollEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QScrollEvent) Delete() {
	C.QScrollEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScrollEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScrollEvent_delete((*C.QScrollEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QScreenOrientationChangeEvent struct {
	h  *C.QScreenOrientationChangeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QScreenOrientationChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QScreenOrientationChangeEvent) cPointer() *C.QScreenOrientationChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QScreenOrientationChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQScreenOrientationChangeEvent constructs the type using only CGO pointers.
func newQScreenOrientationChangeEvent(h *C.QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QScreenOrientationChangeEvent_virtbase(h, &outptr_QEvent)

	return &QScreenOrientationChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQScreenOrientationChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQScreenOrientationChangeEvent(h unsafe.Pointer) *QScreenOrientationChangeEvent {
	return newQScreenOrientationChangeEvent((*C.QScreenOrientationChangeEvent)(h))
}

// NewQScreenOrientationChangeEvent constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent(screen *QScreen, orientation ScreenOrientation) *QScreenOrientationChangeEvent {
	defer runtime.KeepAlive(screen)

	return newQScreenOrientationChangeEvent(C.QScreenOrientationChangeEvent_new(screen.cPointer(), (C.int)(orientation)))
}

// NewQScreenOrientationChangeEvent2 constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent2(param1 *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	defer runtime.KeepAlive(param1)

	return newQScreenOrientationChangeEvent(C.QScreenOrientationChangeEvent_new2(param1.cPointer()))
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	defer runtime.KeepAlive(this)
	return newQScreen(C.QScreenOrientationChangeEvent_screen(this.h))
}

func (this *QScreenOrientationChangeEvent) Orientation() ScreenOrientation {
	defer runtime.KeepAlive(this)
	return (ScreenOrientation)(C.QScreenOrientationChangeEvent_orientation(this.h))
}

func (this *QScreenOrientationChangeEvent) OperatorAssign(param1 *QScreenOrientationChangeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QScreenOrientationChangeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QScreenOrientationChangeEvent) Delete() {
	C.QScreenOrientationChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QScreenOrientationChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QScreenOrientationChangeEvent_delete((*C.QScreenOrientationChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QApplicationStateChangeEvent struct {
	h  *C.QApplicationStateChangeEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QApplicationStateChangeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
}

func (this *QApplicationStateChangeEvent) cPointer() *C.QApplicationStateChangeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QApplicationStateChangeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQApplicationStateChangeEvent constructs the type using only CGO pointers.
func newQApplicationStateChangeEvent(h *C.QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QApplicationStateChangeEvent_virtbase(h, &outptr_QEvent)

	return &QApplicationStateChangeEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQApplicationStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQApplicationStateChangeEvent(h unsafe.Pointer) *QApplicationStateChangeEvent {
	return newQApplicationStateChangeEvent((*C.QApplicationStateChangeEvent)(h))
}

// NewQApplicationStateChangeEvent constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent(state ApplicationState) *QApplicationStateChangeEvent {

	return newQApplicationStateChangeEvent(C.QApplicationStateChangeEvent_new((C.int)(state)))
}

// NewQApplicationStateChangeEvent2 constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent2(param1 *QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	defer runtime.KeepAlive(param1)

	return newQApplicationStateChangeEvent(C.QApplicationStateChangeEvent_new2(param1.cPointer()))
}

func (this *QApplicationStateChangeEvent) ApplicationState() ApplicationState {
	defer runtime.KeepAlive(this)
	return (ApplicationState)(C.QApplicationStateChangeEvent_applicationState(this.h))
}

func (this *QApplicationStateChangeEvent) OperatorAssign(param1 *QApplicationStateChangeEvent) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QApplicationStateChangeEvent_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QApplicationStateChangeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QApplicationStateChangeEvent_delete((*C.QApplicationStateChangeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QInputMethodEvent__Attribute struct {
	h  *C.QInputMethodEvent__Attribute
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QInputMethodEvent__Attribute) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QInputMethodEvent__Attribute) cPointer() *C.QInputMethodEvent__Attribute {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QInputMethodEvent__Attribute) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQInputMethodEvent__Attribute constructs the type using only CGO pointers.
func newQInputMethodEvent__Attribute(h *C.QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	if h == nil {
		return nil
	}

	return &QInputMethodEvent__Attribute{h: h}
}

// UnsafeNewQInputMethodEvent__Attribute constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodEvent__Attribute(h unsafe.Pointer) *QInputMethodEvent__Attribute {
	return newQInputMethodEvent__Attribute((*C.QInputMethodEvent__Attribute)(h))
}

// NewQInputMethodEvent__Attribute constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute(typ QInputMethodEvent__AttributeType, s int, l int, val QVariant) *QInputMethodEvent__Attribute {
	defer runtime.KeepAlive(val)

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new((C.int)(typ), (C.int)(s), (C.int)(l), val.cPointer()))
}

// NewQInputMethodEvent__Attribute2 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute2(typ QInputMethodEvent__AttributeType, s int, l int) *QInputMethodEvent__Attribute {

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new2((C.int)(typ), (C.int)(s), (C.int)(l)))
}

// NewQInputMethodEvent__Attribute3 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute3(param1 *QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	defer runtime.KeepAlive(param1)

	return newQInputMethodEvent__Attribute(C.QInputMethodEvent__Attribute_new3(param1.cPointer()))
}

func (this *QInputMethodEvent__Attribute) Type() QInputMethodEvent__AttributeType {
	defer runtime.KeepAlive(this)
	return (QInputMethodEvent__AttributeType)(C.QInputMethodEvent__Attribute_type(this.h))
}

func (this *QInputMethodEvent__Attribute) SetType(typeVal QInputMethodEvent__AttributeType) {
	defer runtime.KeepAlive(this)
	C.QInputMethodEvent__Attribute_setType(this.h, (C.int)(typeVal))
}

func (this *QInputMethodEvent__Attribute) Start() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QInputMethodEvent__Attribute_start(this.h))
}

func (this *QInputMethodEvent__Attribute) SetStart(start int) {
	defer runtime.KeepAlive(this)
	C.QInputMethodEvent__Attribute_setStart(this.h, (C.int)(start))
}

func (this *QInputMethodEvent__Attribute) Length() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QInputMethodEvent__Attribute_length(this.h))
}

func (this *QInputMethodEvent__Attribute) SetLength(length int) {
	defer runtime.KeepAlive(this)
	C.QInputMethodEvent__Attribute_setLength(this.h, (C.int)(length))
}

func (this *QInputMethodEvent__Attribute) Value() *QVariant {
	defer runtime.KeepAlive(this)
	value_goptr := newQVariant(C.QInputMethodEvent__Attribute_value(this.h))
	value_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return value_goptr
}

func (this *QInputMethodEvent__Attribute) SetValue(value QVariant) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(value)
	C.QInputMethodEvent__Attribute_setValue(this.h, value.cPointer())
}

func (this *QInputMethodEvent__Attribute) OperatorAssign(param1 *QInputMethodEvent__Attribute) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(param1)
	C.QInputMethodEvent__Attribute_operatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent__Attribute) Delete() {
	C.QInputMethodEvent__Attribute_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QInputMethodEvent__Attribute) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QInputMethodEvent__Attribute_delete((*C.QInputMethodEvent__Attribute)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QTouchEvent__TouchPoint struct {
	h  *C.QTouchEvent__TouchPoint
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QTouchEvent__TouchPoint) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QTouchEvent__TouchPoint) cPointer() *C.QTouchEvent__TouchPoint {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTouchEvent__TouchPoint) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQTouchEvent__TouchPoint constructs the type using only CGO pointers.
func newQTouchEvent__TouchPoint(h *C.QTouchEvent__TouchPoint) *QTouchEvent__TouchPoint {
	if h == nil {
		return nil
	}

	return &QTouchEvent__TouchPoint{h: h}
}

// UnsafeNewQTouchEvent__TouchPoint constructs the type using only unsafe pointers.
func UnsafeNewQTouchEvent__TouchPoint(h unsafe.Pointer) *QTouchEvent__TouchPoint {
	return newQTouchEvent__TouchPoint((*C.QTouchEvent__TouchPoint)(h))
}

// NewQTouchEvent__TouchPoint constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint() *QTouchEvent__TouchPoint {

	return newQTouchEvent__TouchPoint(C.QTouchEvent__TouchPoint_new())
}

// NewQTouchEvent__TouchPoint2 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint2(other *QTouchEvent__TouchPoint) *QTouchEvent__TouchPoint {
	defer runtime.KeepAlive(other)

	return newQTouchEvent__TouchPoint(C.QTouchEvent__TouchPoint_new2(other.cPointer()))
}

// NewQTouchEvent__TouchPoint3 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint3(id int) *QTouchEvent__TouchPoint {

	return newQTouchEvent__TouchPoint(C.QTouchEvent__TouchPoint_new3((C.int)(id)))
}

func (this *QTouchEvent__TouchPoint) OperatorAssign(other *QTouchEvent__TouchPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QTouchEvent__TouchPoint_operatorAssign(this.h, other.cPointer())
}

func (this *QTouchEvent__TouchPoint) Swap(other *QTouchEvent__TouchPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QTouchEvent__TouchPoint_swap(this.h, other.cPointer())
}

func (this *QTouchEvent__TouchPoint) Id() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QTouchEvent__TouchPoint_id(this.h))
}

func (this *QTouchEvent__TouchPoint) UniqueId() *QPointingDeviceUniqueId {
	defer runtime.KeepAlive(this)
	_goptr := newQPointingDeviceUniqueId(C.QTouchEvent__TouchPoint_uniqueId(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) State() TouchPointState {
	defer runtime.KeepAlive(this)
	return (TouchPointState)(C.QTouchEvent__TouchPoint_state(this.h))
}

func (this *QTouchEvent__TouchPoint) Pos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_startPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_startScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_startScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastScreenPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) NormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_normalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartNormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_startNormalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastNormalizedPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QTouchEvent__TouchPoint_lastNormalizedPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Rect() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QTouchEvent__TouchPoint_rect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) SceneRect() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QTouchEvent__TouchPoint_sceneRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScreenRect() *QRectF {
	defer runtime.KeepAlive(this)
	_goptr := newQRectF(C.QTouchEvent__TouchPoint_screenRect(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) SetRect(rect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(rect)
	C.QTouchEvent__TouchPoint_setRect(this.h, rect.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetSceneRect(sceneRect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(sceneRect)
	C.QTouchEvent__TouchPoint_setSceneRect(this.h, sceneRect.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScreenRect(screenRect *QRectF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(screenRect)
	C.QTouchEvent__TouchPoint_setScreenRect(this.h, screenRect.cPointer())
}

func (this *QTouchEvent__TouchPoint) Pressure() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTouchEvent__TouchPoint_pressure(this.h))
}

func (this *QTouchEvent__TouchPoint) Rotation() float64 {
	defer runtime.KeepAlive(this)
	return (float64)(C.QTouchEvent__TouchPoint_rotation(this.h))
}

func (this *QTouchEvent__TouchPoint) EllipseDiameters() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QTouchEvent__TouchPoint_ellipseDiameters(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Velocity() *QVector2D {
	defer runtime.KeepAlive(this)
	_goptr := newQVector2D(C.QTouchEvent__TouchPoint_velocity(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Flags() QTouchEvent__TouchPoint__InfoFlag {
	defer runtime.KeepAlive(this)
	return (QTouchEvent__TouchPoint__InfoFlag)(C.QTouchEvent__TouchPoint_flags(this.h))
}

func (this *QTouchEvent__TouchPoint) RawScreenPositions() []QPointF {
	defer runtime.KeepAlive(this)
	var _ma C.struct_miqt_array = C.QTouchEvent__TouchPoint_rawScreenPositions(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := unsafe.Slice((**C.QPointF)(unsafe.Pointer(_ma.data)), int(_ma.len))
	for i := 0; i < int(_ma.len); i++ {
		_vv_goptr := newQPointF(_outCast[i])
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QTouchEvent__TouchPoint) SetId(id int) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setId(this.h, (C.int)(id))
}

func (this *QTouchEvent__TouchPoint) SetUniqueId(uid int64) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setUniqueId(this.h, (C.longlong)(uid))
}

func (this *QTouchEvent__TouchPoint) SetState(state TouchPointState) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setState(this.h, (C.int)(state))
}

func (this *QTouchEvent__TouchPoint) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QTouchEvent__TouchPoint_setPos(this.h, pos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScenePos(scenePos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(scenePos)
	C.QTouchEvent__TouchPoint_setScenePos(this.h, scenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetScreenPos(screenPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(screenPos)
	C.QTouchEvent__TouchPoint_setScreenPos(this.h, screenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetNormalizedPos(normalizedPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(normalizedPos)
	C.QTouchEvent__TouchPoint_setNormalizedPos(this.h, normalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartPos(startPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(startPos)
	C.QTouchEvent__TouchPoint_setStartPos(this.h, startPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartScenePos(startScenePos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(startScenePos)
	C.QTouchEvent__TouchPoint_setStartScenePos(this.h, startScenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartScreenPos(startScreenPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(startScreenPos)
	C.QTouchEvent__TouchPoint_setStartScreenPos(this.h, startScreenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetStartNormalizedPos(startNormalizedPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(startNormalizedPos)
	C.QTouchEvent__TouchPoint_setStartNormalizedPos(this.h, startNormalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastPos(lastPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lastPos)
	C.QTouchEvent__TouchPoint_setLastPos(this.h, lastPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastScenePos(lastScenePos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lastScenePos)
	C.QTouchEvent__TouchPoint_setLastScenePos(this.h, lastScenePos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastScreenPos(lastScreenPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lastScreenPos)
	C.QTouchEvent__TouchPoint_setLastScreenPos(this.h, lastScreenPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetLastNormalizedPos(lastNormalizedPos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(lastNormalizedPos)
	C.QTouchEvent__TouchPoint_setLastNormalizedPos(this.h, lastNormalizedPos.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetPressure(pressure float64) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setPressure(this.h, (C.double)(pressure))
}

func (this *QTouchEvent__TouchPoint) SetRotation(angle float64) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setRotation(this.h, (C.double)(angle))
}

func (this *QTouchEvent__TouchPoint) SetEllipseDiameters(dia *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(dia)
	C.QTouchEvent__TouchPoint_setEllipseDiameters(this.h, dia.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetVelocity(v *QVector2D) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(v)
	C.QTouchEvent__TouchPoint_setVelocity(this.h, v.cPointer())
}

func (this *QTouchEvent__TouchPoint) SetFlags(flags QTouchEvent__TouchPoint__InfoFlag) {
	defer runtime.KeepAlive(this)
	C.QTouchEvent__TouchPoint_setFlags(this.h, (C.int)(flags))
}

func (this *QTouchEvent__TouchPoint) SetRawScreenPositions(positions []QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(positions)
	positions_CArray_ptr := (**C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray_ptr))
	positions_CArray := unsafe.Slice(positions_CArray_ptr, len(positions))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray_ptr)}
	C.QTouchEvent__TouchPoint_setRawScreenPositions(this.h, positions_ma)
}

// Delete this object from C++ memory.
func (this *QTouchEvent__TouchPoint) Delete() {
	C.QTouchEvent__TouchPoint_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QTouchEvent__TouchPoint) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QTouchEvent__TouchPoint_delete((*C.QTouchEvent__TouchPoint)(gc[0]))
	})
	this.miqtSetGC(gc)
}
