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
	h          *C.QInputEvent
	isSubclass bool
	*QEvent
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
func newQInputEvent(h *C.QInputEvent, h_QEvent *C.QEvent) *QInputEvent {
	if h == nil {
		return nil
	}
	return &QInputEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQInputEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QInputEvent {
	if h == nil {
		return nil
	}

	return &QInputEvent{h: (*C.QInputEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQInputEvent constructs a new QInputEvent object.
func NewQInputEvent(typeVal QEvent__Type) *QInputEvent {
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputEvent_new((C.int)(typeVal), &outptr_QInputEvent, &outptr_QEvent)
	ret := newQInputEvent(outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQInputEvent2 constructs a new QInputEvent object.
func NewQInputEvent2(param1 *QInputEvent) *QInputEvent {
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputEvent_new2(param1.cPointer(), &outptr_QInputEvent, &outptr_QEvent)
	ret := newQInputEvent(outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQInputEvent3 constructs a new QInputEvent object.
func NewQInputEvent3(typeVal QEvent__Type, modifiers KeyboardModifier) *QInputEvent {
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputEvent_new3((C.int)(typeVal), (C.int)(modifiers), &outptr_QInputEvent, &outptr_QEvent)
	ret := newQInputEvent(outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QInputEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QInputEvent_Modifiers(this.h))
}

func (this *QInputEvent) SetModifiers(amodifiers KeyboardModifier) {
	C.QInputEvent_SetModifiers(this.h, (C.int)(amodifiers))
}

func (this *QInputEvent) Timestamp() uint64 {
	return (uint64)(C.QInputEvent_Timestamp(this.h))
}

func (this *QInputEvent) SetTimestamp(atimestamp uint64) {
	C.QInputEvent_SetTimestamp(this.h, (C.ulong)(atimestamp))
}

// Delete this object from C++ memory.
func (this *QInputEvent) Delete() {
	C.QInputEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QEnterEvent struct {
	h          *C.QEnterEvent
	isSubclass bool
	*QEvent
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
func newQEnterEvent(h *C.QEnterEvent, h_QEvent *C.QEvent) *QEnterEvent {
	if h == nil {
		return nil
	}
	return &QEnterEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQEnterEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QEnterEvent {
	if h == nil {
		return nil
	}

	return &QEnterEvent{h: (*C.QEnterEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQEnterEvent constructs a new QEnterEvent object.
func NewQEnterEvent(localPos *QPointF, windowPos *QPointF, screenPos *QPointF) *QEnterEvent {
	var outptr_QEnterEvent *C.QEnterEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QEnterEvent_new(localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), &outptr_QEnterEvent, &outptr_QEvent)
	ret := newQEnterEvent(outptr_QEnterEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQEnterEvent2 constructs a new QEnterEvent object.
func NewQEnterEvent2(param1 *QEnterEvent) *QEnterEvent {
	var outptr_QEnterEvent *C.QEnterEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QEnterEvent_new2(param1.cPointer(), &outptr_QEnterEvent, &outptr_QEvent)
	ret := newQEnterEvent(outptr_QEnterEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QEnterEvent) Pos() *QPoint {
	_ret := C.QEnterEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) GlobalPos() *QPoint {
	_ret := C.QEnterEvent_GlobalPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QEnterEvent) X() int {
	return (int)(C.QEnterEvent_X(this.h))
}

func (this *QEnterEvent) Y() int {
	return (int)(C.QEnterEvent_Y(this.h))
}

func (this *QEnterEvent) GlobalX() int {
	return (int)(C.QEnterEvent_GlobalX(this.h))
}

func (this *QEnterEvent) GlobalY() int {
	return (int)(C.QEnterEvent_GlobalY(this.h))
}

func (this *QEnterEvent) LocalPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QEnterEvent_LocalPos(this.h)))
}

func (this *QEnterEvent) WindowPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QEnterEvent_WindowPos(this.h)))
}

func (this *QEnterEvent) ScreenPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QEnterEvent_ScreenPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QEnterEvent) Delete() {
	C.QEnterEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QEnterEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QEnterEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMouseEvent struct {
	h          *C.QMouseEvent
	isSubclass bool
	*QInputEvent
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
func newQMouseEvent(h *C.QMouseEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QMouseEvent {
	if h == nil {
		return nil
	}
	return &QMouseEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQMouseEvent constructs the type using only unsafe pointers.
func UnsafeNewQMouseEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QMouseEvent {
	if h == nil {
		return nil
	}

	return &QMouseEvent{h: (*C.QMouseEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQMouseEvent constructs a new QMouseEvent object.
func NewQMouseEvent(typeVal QEvent__Type, localPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	var outptr_QMouseEvent *C.QMouseEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMouseEvent_new((C.int)(typeVal), localPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), &outptr_QMouseEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQMouseEvent(outptr_QMouseEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQMouseEvent2 constructs a new QMouseEvent object.
func NewQMouseEvent2(typeVal QEvent__Type, localPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	var outptr_QMouseEvent *C.QMouseEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMouseEvent_new2((C.int)(typeVal), localPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), &outptr_QMouseEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQMouseEvent(outptr_QMouseEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQMouseEvent3 constructs a new QMouseEvent object.
func NewQMouseEvent3(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	var outptr_QMouseEvent *C.QMouseEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMouseEvent_new3((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), &outptr_QMouseEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQMouseEvent(outptr_QMouseEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQMouseEvent4 constructs a new QMouseEvent object.
func NewQMouseEvent4(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, source MouseEventSource) *QMouseEvent {
	var outptr_QMouseEvent *C.QMouseEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMouseEvent_new4((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), (C.int)(source), &outptr_QMouseEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQMouseEvent(outptr_QMouseEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQMouseEvent5 constructs a new QMouseEvent object.
func NewQMouseEvent5(param1 *QMouseEvent) *QMouseEvent {
	var outptr_QMouseEvent *C.QMouseEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMouseEvent_new5(param1.cPointer(), &outptr_QMouseEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQMouseEvent(outptr_QMouseEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QMouseEvent) Pos() *QPoint {
	_ret := C.QMouseEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) GlobalPos() *QPoint {
	_ret := C.QMouseEvent_GlobalPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QMouseEvent) X() int {
	return (int)(C.QMouseEvent_X(this.h))
}

func (this *QMouseEvent) Y() int {
	return (int)(C.QMouseEvent_Y(this.h))
}

func (this *QMouseEvent) GlobalX() int {
	return (int)(C.QMouseEvent_GlobalX(this.h))
}

func (this *QMouseEvent) GlobalY() int {
	return (int)(C.QMouseEvent_GlobalY(this.h))
}

func (this *QMouseEvent) LocalPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QMouseEvent_LocalPos(this.h)))
}

func (this *QMouseEvent) WindowPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QMouseEvent_WindowPos(this.h)))
}

func (this *QMouseEvent) ScreenPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QMouseEvent_ScreenPos(this.h)))
}

func (this *QMouseEvent) Button() MouseButton {
	return (MouseButton)(C.QMouseEvent_Button(this.h))
}

func (this *QMouseEvent) Buttons() MouseButton {
	return (MouseButton)(C.QMouseEvent_Buttons(this.h))
}

func (this *QMouseEvent) SetLocalPos(localPosition *QPointF) {
	C.QMouseEvent_SetLocalPos(this.h, localPosition.cPointer())
}

func (this *QMouseEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QMouseEvent_Source(this.h))
}

func (this *QMouseEvent) Flags() MouseEventFlag {
	return (MouseEventFlag)(C.QMouseEvent_Flags(this.h))
}

// Delete this object from C++ memory.
func (this *QMouseEvent) Delete() {
	C.QMouseEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMouseEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMouseEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHoverEvent struct {
	h          *C.QHoverEvent
	isSubclass bool
	*QInputEvent
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
func newQHoverEvent(h *C.QHoverEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QHoverEvent {
	if h == nil {
		return nil
	}
	return &QHoverEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQHoverEvent constructs the type using only unsafe pointers.
func UnsafeNewQHoverEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QHoverEvent {
	if h == nil {
		return nil
	}

	return &QHoverEvent{h: (*C.QHoverEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQHoverEvent constructs a new QHoverEvent object.
func NewQHoverEvent(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF) *QHoverEvent {
	var outptr_QHoverEvent *C.QHoverEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHoverEvent_new((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), &outptr_QHoverEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQHoverEvent(outptr_QHoverEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQHoverEvent2 constructs a new QHoverEvent object.
func NewQHoverEvent2(param1 *QHoverEvent) *QHoverEvent {
	var outptr_QHoverEvent *C.QHoverEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHoverEvent_new2(param1.cPointer(), &outptr_QHoverEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQHoverEvent(outptr_QHoverEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQHoverEvent3 constructs a new QHoverEvent object.
func NewQHoverEvent3(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF, modifiers KeyboardModifier) *QHoverEvent {
	var outptr_QHoverEvent *C.QHoverEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHoverEvent_new3((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers), &outptr_QHoverEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQHoverEvent(outptr_QHoverEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QHoverEvent) Pos() *QPoint {
	_ret := C.QHoverEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) OldPos() *QPoint {
	_ret := C.QHoverEvent_OldPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QHoverEvent) PosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QHoverEvent_PosF(this.h)))
}

func (this *QHoverEvent) OldPosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QHoverEvent_OldPosF(this.h)))
}

// Delete this object from C++ memory.
func (this *QHoverEvent) Delete() {
	C.QHoverEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHoverEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHoverEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWheelEvent struct {
	h          *C.QWheelEvent
	isSubclass bool
	*QInputEvent
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
func newQWheelEvent(h *C.QWheelEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QWheelEvent {
	if h == nil {
		return nil
	}
	return &QWheelEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQWheelEvent constructs the type using only unsafe pointers.
func UnsafeNewQWheelEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QWheelEvent {
	if h == nil {
		return nil
	}

	return &QWheelEvent{h: (*C.QWheelEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQWheelEvent constructs a new QWheelEvent object.
func NewQWheelEvent(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent2 constructs a new QWheelEvent object.
func NewQWheelEvent2(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new2(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent3 constructs a new QWheelEvent object.
func NewQWheelEvent3(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new3(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent4 constructs a new QWheelEvent object.
func NewQWheelEvent4(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new4(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent5 constructs a new QWheelEvent object.
func NewQWheelEvent5(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new5(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent6 constructs a new QWheelEvent object.
func NewQWheelEvent6(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource, inverted bool) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new6(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source), (C.bool)(inverted), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent7 constructs a new QWheelEvent object.
func NewQWheelEvent7(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new7(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent8 constructs a new QWheelEvent object.
func NewQWheelEvent8(param1 *QWheelEvent) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new8(param1.cPointer(), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent9 constructs a new QWheelEvent object.
func NewQWheelEvent9(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new9(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent10 constructs a new QWheelEvent object.
func NewQWheelEvent10(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new10(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWheelEvent11 constructs a new QWheelEvent object.
func NewQWheelEvent11(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool, source MouseEventSource) *QWheelEvent {
	var outptr_QWheelEvent *C.QWheelEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWheelEvent_new11(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), (C.int)(source), &outptr_QWheelEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQWheelEvent(outptr_QWheelEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QWheelEvent) PixelDelta() *QPoint {
	_ret := C.QWheelEvent_PixelDelta(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) AngleDelta() *QPoint {
	_ret := C.QWheelEvent_AngleDelta(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) Delta() int {
	return (int)(C.QWheelEvent_Delta(this.h))
}

func (this *QWheelEvent) Orientation() Orientation {
	return (Orientation)(C.QWheelEvent_Orientation(this.h))
}

func (this *QWheelEvent) Pos() *QPoint {
	_ret := C.QWheelEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) GlobalPos() *QPoint {
	_ret := C.QWheelEvent_GlobalPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) X() int {
	return (int)(C.QWheelEvent_X(this.h))
}

func (this *QWheelEvent) Y() int {
	return (int)(C.QWheelEvent_Y(this.h))
}

func (this *QWheelEvent) GlobalX() int {
	return (int)(C.QWheelEvent_GlobalX(this.h))
}

func (this *QWheelEvent) GlobalY() int {
	return (int)(C.QWheelEvent_GlobalY(this.h))
}

func (this *QWheelEvent) PosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QWheelEvent_PosF(this.h)))
}

func (this *QWheelEvent) GlobalPosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QWheelEvent_GlobalPosF(this.h)))
}

func (this *QWheelEvent) Position() *QPointF {
	_ret := C.QWheelEvent_Position(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) GlobalPosition() *QPointF {
	_ret := C.QWheelEvent_GlobalPosition(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QWheelEvent) Buttons() MouseButton {
	return (MouseButton)(C.QWheelEvent_Buttons(this.h))
}

func (this *QWheelEvent) Phase() ScrollPhase {
	return (ScrollPhase)(C.QWheelEvent_Phase(this.h))
}

func (this *QWheelEvent) Inverted() bool {
	return (bool)(C.QWheelEvent_Inverted(this.h))
}

func (this *QWheelEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QWheelEvent_Source(this.h))
}

// Delete this object from C++ memory.
func (this *QWheelEvent) Delete() {
	C.QWheelEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWheelEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWheelEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTabletEvent struct {
	h          *C.QTabletEvent
	isSubclass bool
	*QInputEvent
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
func newQTabletEvent(h *C.QTabletEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QTabletEvent {
	if h == nil {
		return nil
	}
	return &QTabletEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQTabletEvent constructs the type using only unsafe pointers.
func UnsafeNewQTabletEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QTabletEvent {
	if h == nil {
		return nil
	}

	return &QTabletEvent{h: (*C.QTabletEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQTabletEvent constructs a new QTabletEvent object.
func NewQTabletEvent(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64) *QTabletEvent {
	var outptr_QTabletEvent *C.QTabletEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTabletEvent_new((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID), &outptr_QTabletEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTabletEvent(outptr_QTabletEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTabletEvent2 constructs a new QTabletEvent object.
func NewQTabletEvent2(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64, button MouseButton, buttons MouseButton) *QTabletEvent {
	var outptr_QTabletEvent *C.QTabletEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTabletEvent_new2((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID), (C.int)(button), (C.int)(buttons), &outptr_QTabletEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTabletEvent(outptr_QTabletEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTabletEvent3 constructs a new QTabletEvent object.
func NewQTabletEvent3(param1 *QTabletEvent) *QTabletEvent {
	var outptr_QTabletEvent *C.QTabletEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTabletEvent_new3(param1.cPointer(), &outptr_QTabletEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTabletEvent(outptr_QTabletEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QTabletEvent) Pos() *QPoint {
	_ret := C.QTabletEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) GlobalPos() *QPoint {
	_ret := C.QTabletEvent_GlobalPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTabletEvent) PosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QTabletEvent_PosF(this.h)))
}

func (this *QTabletEvent) GlobalPosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QTabletEvent_GlobalPosF(this.h)))
}

func (this *QTabletEvent) X() int {
	return (int)(C.QTabletEvent_X(this.h))
}

func (this *QTabletEvent) Y() int {
	return (int)(C.QTabletEvent_Y(this.h))
}

func (this *QTabletEvent) GlobalX() int {
	return (int)(C.QTabletEvent_GlobalX(this.h))
}

func (this *QTabletEvent) GlobalY() int {
	return (int)(C.QTabletEvent_GlobalY(this.h))
}

func (this *QTabletEvent) HiResGlobalX() float64 {
	return (float64)(C.QTabletEvent_HiResGlobalX(this.h))
}

func (this *QTabletEvent) HiResGlobalY() float64 {
	return (float64)(C.QTabletEvent_HiResGlobalY(this.h))
}

func (this *QTabletEvent) Device() QTabletEvent__TabletDevice {
	return (QTabletEvent__TabletDevice)(C.QTabletEvent_Device(this.h))
}

func (this *QTabletEvent) DeviceType() QTabletEvent__TabletDevice {
	return (QTabletEvent__TabletDevice)(C.QTabletEvent_DeviceType(this.h))
}

func (this *QTabletEvent) PointerType() QTabletEvent__PointerType {
	return (QTabletEvent__PointerType)(C.QTabletEvent_PointerType(this.h))
}

func (this *QTabletEvent) UniqueId() int64 {
	return (int64)(C.QTabletEvent_UniqueId(this.h))
}

func (this *QTabletEvent) Pressure() float64 {
	return (float64)(C.QTabletEvent_Pressure(this.h))
}

func (this *QTabletEvent) Z() int {
	return (int)(C.QTabletEvent_Z(this.h))
}

func (this *QTabletEvent) TangentialPressure() float64 {
	return (float64)(C.QTabletEvent_TangentialPressure(this.h))
}

func (this *QTabletEvent) Rotation() float64 {
	return (float64)(C.QTabletEvent_Rotation(this.h))
}

func (this *QTabletEvent) XTilt() int {
	return (int)(C.QTabletEvent_XTilt(this.h))
}

func (this *QTabletEvent) YTilt() int {
	return (int)(C.QTabletEvent_YTilt(this.h))
}

func (this *QTabletEvent) Button() MouseButton {
	return (MouseButton)(C.QTabletEvent_Button(this.h))
}

func (this *QTabletEvent) Buttons() MouseButton {
	return (MouseButton)(C.QTabletEvent_Buttons(this.h))
}

// Delete this object from C++ memory.
func (this *QTabletEvent) Delete() {
	C.QTabletEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTabletEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QTabletEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QNativeGestureEvent struct {
	h          *C.QNativeGestureEvent
	isSubclass bool
	*QInputEvent
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
func newQNativeGestureEvent(h *C.QNativeGestureEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QNativeGestureEvent {
	if h == nil {
		return nil
	}
	return &QNativeGestureEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQNativeGestureEvent constructs the type using only unsafe pointers.
func UnsafeNewQNativeGestureEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QNativeGestureEvent {
	if h == nil {
		return nil
	}

	return &QNativeGestureEvent{h: (*C.QNativeGestureEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQNativeGestureEvent constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent(typeVal NativeGestureType, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	var outptr_QNativeGestureEvent *C.QNativeGestureEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QNativeGestureEvent_new((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument), &outptr_QNativeGestureEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQNativeGestureEvent(outptr_QNativeGestureEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQNativeGestureEvent2 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent2(typeVal NativeGestureType, dev *QTouchDevice, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	var outptr_QNativeGestureEvent *C.QNativeGestureEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QNativeGestureEvent_new2((C.int)(typeVal), dev.cPointer(), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument), &outptr_QNativeGestureEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQNativeGestureEvent(outptr_QNativeGestureEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQNativeGestureEvent3 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent3(param1 *QNativeGestureEvent) *QNativeGestureEvent {
	var outptr_QNativeGestureEvent *C.QNativeGestureEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QNativeGestureEvent_new3(param1.cPointer(), &outptr_QNativeGestureEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQNativeGestureEvent(outptr_QNativeGestureEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QNativeGestureEvent) GestureType() NativeGestureType {
	return (NativeGestureType)(C.QNativeGestureEvent_GestureType(this.h))
}

func (this *QNativeGestureEvent) Value() float64 {
	return (float64)(C.QNativeGestureEvent_Value(this.h))
}

func (this *QNativeGestureEvent) Pos() *QPoint {
	_ret := C.QNativeGestureEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) GlobalPos() *QPoint {
	_ret := C.QNativeGestureEvent_GlobalPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QNativeGestureEvent) LocalPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QNativeGestureEvent_LocalPos(this.h)))
}

func (this *QNativeGestureEvent) WindowPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QNativeGestureEvent_WindowPos(this.h)))
}

func (this *QNativeGestureEvent) ScreenPos() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QNativeGestureEvent_ScreenPos(this.h)))
}

func (this *QNativeGestureEvent) Device() *QTouchDevice {
	return UnsafeNewQTouchDevice(unsafe.Pointer(C.QNativeGestureEvent_Device(this.h)))
}

// Delete this object from C++ memory.
func (this *QNativeGestureEvent) Delete() {
	C.QNativeGestureEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QNativeGestureEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QNativeGestureEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QKeyEvent struct {
	h          *C.QKeyEvent
	isSubclass bool
	*QInputEvent
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
func newQKeyEvent(h *C.QKeyEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QKeyEvent {
	if h == nil {
		return nil
	}
	return &QKeyEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQKeyEvent constructs the type using only unsafe pointers.
func UnsafeNewQKeyEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QKeyEvent {
	if h == nil {
		return nil
	}

	return &QKeyEvent{h: (*C.QKeyEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQKeyEvent constructs a new QKeyEvent object.
func NewQKeyEvent(typeVal QEvent__Type, key int, modifiers KeyboardModifier) *QKeyEvent {
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent2 constructs a new QKeyEvent object.
func NewQKeyEvent2(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint) *QKeyEvent {
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new2((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent3 constructs a new QKeyEvent object.
func NewQKeyEvent3(param1 *QKeyEvent) *QKeyEvent {
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new3(param1.cPointer(), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent4 constructs a new QKeyEvent object.
func NewQKeyEvent4(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new4((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent5 constructs a new QKeyEvent object.
func NewQKeyEvent5(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new5((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent6 constructs a new QKeyEvent object.
func NewQKeyEvent6(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new6((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), text_ms, (C.bool)(autorep), (C.uint16_t)(count), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent7 constructs a new QKeyEvent object.
func NewQKeyEvent7(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new7((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent8 constructs a new QKeyEvent object.
func NewQKeyEvent8(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new8((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQKeyEvent9 constructs a new QKeyEvent object.
func NewQKeyEvent9(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var outptr_QKeyEvent *C.QKeyEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QKeyEvent_new9((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), text_ms, (C.bool)(autorep), (C.uint16_t)(count), &outptr_QKeyEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQKeyEvent(outptr_QKeyEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QKeyEvent) Key() int {
	return (int)(C.QKeyEvent_Key(this.h))
}

func (this *QKeyEvent) Matches(key QKeySequence__StandardKey) bool {
	return (bool)(C.QKeyEvent_Matches(this.h, (C.int)(key)))
}

func (this *QKeyEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QKeyEvent_Modifiers(this.h))
}

func (this *QKeyEvent) Text() string {
	var _ms C.struct_miqt_string = C.QKeyEvent_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QKeyEvent) IsAutoRepeat() bool {
	return (bool)(C.QKeyEvent_IsAutoRepeat(this.h))
}

func (this *QKeyEvent) Count() int {
	return (int)(C.QKeyEvent_Count(this.h))
}

func (this *QKeyEvent) NativeScanCode() uint {
	return (uint)(C.QKeyEvent_NativeScanCode(this.h))
}

func (this *QKeyEvent) NativeVirtualKey() uint {
	return (uint)(C.QKeyEvent_NativeVirtualKey(this.h))
}

func (this *QKeyEvent) NativeModifiers() uint {
	return (uint)(C.QKeyEvent_NativeModifiers(this.h))
}

// Delete this object from C++ memory.
func (this *QKeyEvent) Delete() {
	C.QKeyEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QKeyEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QKeyEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFocusEvent struct {
	h          *C.QFocusEvent
	isSubclass bool
	*QEvent
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
func newQFocusEvent(h *C.QFocusEvent, h_QEvent *C.QEvent) *QFocusEvent {
	if h == nil {
		return nil
	}
	return &QFocusEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQFocusEvent constructs the type using only unsafe pointers.
func UnsafeNewQFocusEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QFocusEvent {
	if h == nil {
		return nil
	}

	return &QFocusEvent{h: (*C.QFocusEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQFocusEvent constructs a new QFocusEvent object.
func NewQFocusEvent(typeVal QEvent__Type) *QFocusEvent {
	var outptr_QFocusEvent *C.QFocusEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFocusEvent_new((C.int)(typeVal), &outptr_QFocusEvent, &outptr_QEvent)
	ret := newQFocusEvent(outptr_QFocusEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQFocusEvent2 constructs a new QFocusEvent object.
func NewQFocusEvent2(param1 *QFocusEvent) *QFocusEvent {
	var outptr_QFocusEvent *C.QFocusEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFocusEvent_new2(param1.cPointer(), &outptr_QFocusEvent, &outptr_QEvent)
	ret := newQFocusEvent(outptr_QFocusEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQFocusEvent3 constructs a new QFocusEvent object.
func NewQFocusEvent3(typeVal QEvent__Type, reason FocusReason) *QFocusEvent {
	var outptr_QFocusEvent *C.QFocusEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFocusEvent_new3((C.int)(typeVal), (C.int)(reason), &outptr_QFocusEvent, &outptr_QEvent)
	ret := newQFocusEvent(outptr_QFocusEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QFocusEvent) GotFocus() bool {
	return (bool)(C.QFocusEvent_GotFocus(this.h))
}

func (this *QFocusEvent) LostFocus() bool {
	return (bool)(C.QFocusEvent_LostFocus(this.h))
}

func (this *QFocusEvent) Reason() FocusReason {
	return (FocusReason)(C.QFocusEvent_Reason(this.h))
}

// Delete this object from C++ memory.
func (this *QFocusEvent) Delete() {
	C.QFocusEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFocusEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QFocusEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPaintEvent struct {
	h          *C.QPaintEvent
	isSubclass bool
	*QEvent
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
func newQPaintEvent(h *C.QPaintEvent, h_QEvent *C.QEvent) *QPaintEvent {
	if h == nil {
		return nil
	}
	return &QPaintEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQPaintEvent constructs the type using only unsafe pointers.
func UnsafeNewQPaintEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QPaintEvent {
	if h == nil {
		return nil
	}

	return &QPaintEvent{h: (*C.QPaintEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQPaintEvent constructs a new QPaintEvent object.
func NewQPaintEvent(paintRegion *QRegion) *QPaintEvent {
	var outptr_QPaintEvent *C.QPaintEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QPaintEvent_new(paintRegion.cPointer(), &outptr_QPaintEvent, &outptr_QEvent)
	ret := newQPaintEvent(outptr_QPaintEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQPaintEvent2 constructs a new QPaintEvent object.
func NewQPaintEvent2(paintRect *QRect) *QPaintEvent {
	var outptr_QPaintEvent *C.QPaintEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QPaintEvent_new2(paintRect.cPointer(), &outptr_QPaintEvent, &outptr_QEvent)
	ret := newQPaintEvent(outptr_QPaintEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQPaintEvent3 constructs a new QPaintEvent object.
func NewQPaintEvent3(param1 *QPaintEvent) *QPaintEvent {
	var outptr_QPaintEvent *C.QPaintEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QPaintEvent_new3(param1.cPointer(), &outptr_QPaintEvent, &outptr_QEvent)
	ret := newQPaintEvent(outptr_QPaintEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QPaintEvent) Rect() *QRect {
	return UnsafeNewQRect(unsafe.Pointer(C.QPaintEvent_Rect(this.h)))
}

func (this *QPaintEvent) Region() *QRegion {
	return UnsafeNewQRegion(unsafe.Pointer(C.QPaintEvent_Region(this.h)))
}

// Delete this object from C++ memory.
func (this *QPaintEvent) Delete() {
	C.QPaintEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPaintEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPaintEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QMoveEvent struct {
	h          *C.QMoveEvent
	isSubclass bool
	*QEvent
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
func newQMoveEvent(h *C.QMoveEvent, h_QEvent *C.QEvent) *QMoveEvent {
	if h == nil {
		return nil
	}
	return &QMoveEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQMoveEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QMoveEvent {
	if h == nil {
		return nil
	}

	return &QMoveEvent{h: (*C.QMoveEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQMoveEvent constructs a new QMoveEvent object.
func NewQMoveEvent(pos *QPoint, oldPos *QPoint) *QMoveEvent {
	var outptr_QMoveEvent *C.QMoveEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMoveEvent_new(pos.cPointer(), oldPos.cPointer(), &outptr_QMoveEvent, &outptr_QEvent)
	ret := newQMoveEvent(outptr_QMoveEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQMoveEvent2 constructs a new QMoveEvent object.
func NewQMoveEvent2(param1 *QMoveEvent) *QMoveEvent {
	var outptr_QMoveEvent *C.QMoveEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QMoveEvent_new2(param1.cPointer(), &outptr_QMoveEvent, &outptr_QEvent)
	ret := newQMoveEvent(outptr_QMoveEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QMoveEvent) Pos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QMoveEvent_Pos(this.h)))
}

func (this *QMoveEvent) OldPos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QMoveEvent_OldPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QMoveEvent) Delete() {
	C.QMoveEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QExposeEvent struct {
	h          *C.QExposeEvent
	isSubclass bool
	*QEvent
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
func newQExposeEvent(h *C.QExposeEvent, h_QEvent *C.QEvent) *QExposeEvent {
	if h == nil {
		return nil
	}
	return &QExposeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQExposeEvent constructs the type using only unsafe pointers.
func UnsafeNewQExposeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QExposeEvent {
	if h == nil {
		return nil
	}

	return &QExposeEvent{h: (*C.QExposeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQExposeEvent constructs a new QExposeEvent object.
func NewQExposeEvent(rgn *QRegion) *QExposeEvent {
	var outptr_QExposeEvent *C.QExposeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QExposeEvent_new(rgn.cPointer(), &outptr_QExposeEvent, &outptr_QEvent)
	ret := newQExposeEvent(outptr_QExposeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQExposeEvent2 constructs a new QExposeEvent object.
func NewQExposeEvent2(param1 *QExposeEvent) *QExposeEvent {
	var outptr_QExposeEvent *C.QExposeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QExposeEvent_new2(param1.cPointer(), &outptr_QExposeEvent, &outptr_QEvent)
	ret := newQExposeEvent(outptr_QExposeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QExposeEvent) Region() *QRegion {
	return UnsafeNewQRegion(unsafe.Pointer(C.QExposeEvent_Region(this.h)))
}

// Delete this object from C++ memory.
func (this *QExposeEvent) Delete() {
	C.QExposeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QExposeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QExposeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPlatformSurfaceEvent struct {
	h          *C.QPlatformSurfaceEvent
	isSubclass bool
	*QEvent
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
func newQPlatformSurfaceEvent(h *C.QPlatformSurfaceEvent, h_QEvent *C.QEvent) *QPlatformSurfaceEvent {
	if h == nil {
		return nil
	}
	return &QPlatformSurfaceEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQPlatformSurfaceEvent constructs the type using only unsafe pointers.
func UnsafeNewQPlatformSurfaceEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QPlatformSurfaceEvent {
	if h == nil {
		return nil
	}

	return &QPlatformSurfaceEvent{h: (*C.QPlatformSurfaceEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQPlatformSurfaceEvent constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent(surfaceEventType QPlatformSurfaceEvent__SurfaceEventType) *QPlatformSurfaceEvent {
	var outptr_QPlatformSurfaceEvent *C.QPlatformSurfaceEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QPlatformSurfaceEvent_new((C.int)(surfaceEventType), &outptr_QPlatformSurfaceEvent, &outptr_QEvent)
	ret := newQPlatformSurfaceEvent(outptr_QPlatformSurfaceEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQPlatformSurfaceEvent2 constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent2(param1 *QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	var outptr_QPlatformSurfaceEvent *C.QPlatformSurfaceEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QPlatformSurfaceEvent_new2(param1.cPointer(), &outptr_QPlatformSurfaceEvent, &outptr_QEvent)
	ret := newQPlatformSurfaceEvent(outptr_QPlatformSurfaceEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QPlatformSurfaceEvent) SurfaceEventType() QPlatformSurfaceEvent__SurfaceEventType {
	return (QPlatformSurfaceEvent__SurfaceEventType)(C.QPlatformSurfaceEvent_SurfaceEventType(this.h))
}

// Delete this object from C++ memory.
func (this *QPlatformSurfaceEvent) Delete() {
	C.QPlatformSurfaceEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPlatformSurfaceEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QPlatformSurfaceEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QResizeEvent struct {
	h          *C.QResizeEvent
	isSubclass bool
	*QEvent
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
func newQResizeEvent(h *C.QResizeEvent, h_QEvent *C.QEvent) *QResizeEvent {
	if h == nil {
		return nil
	}
	return &QResizeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQResizeEvent constructs the type using only unsafe pointers.
func UnsafeNewQResizeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QResizeEvent {
	if h == nil {
		return nil
	}

	return &QResizeEvent{h: (*C.QResizeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQResizeEvent constructs a new QResizeEvent object.
func NewQResizeEvent(size *QSize, oldSize *QSize) *QResizeEvent {
	var outptr_QResizeEvent *C.QResizeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QResizeEvent_new(size.cPointer(), oldSize.cPointer(), &outptr_QResizeEvent, &outptr_QEvent)
	ret := newQResizeEvent(outptr_QResizeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQResizeEvent2 constructs a new QResizeEvent object.
func NewQResizeEvent2(param1 *QResizeEvent) *QResizeEvent {
	var outptr_QResizeEvent *C.QResizeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QResizeEvent_new2(param1.cPointer(), &outptr_QResizeEvent, &outptr_QEvent)
	ret := newQResizeEvent(outptr_QResizeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QResizeEvent) Size() *QSize {
	return UnsafeNewQSize(unsafe.Pointer(C.QResizeEvent_Size(this.h)))
}

func (this *QResizeEvent) OldSize() *QSize {
	return UnsafeNewQSize(unsafe.Pointer(C.QResizeEvent_OldSize(this.h)))
}

// Delete this object from C++ memory.
func (this *QResizeEvent) Delete() {
	C.QResizeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QResizeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QResizeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QCloseEvent struct {
	h          *C.QCloseEvent
	isSubclass bool
	*QEvent
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
func newQCloseEvent(h *C.QCloseEvent, h_QEvent *C.QEvent) *QCloseEvent {
	if h == nil {
		return nil
	}
	return &QCloseEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQCloseEvent constructs the type using only unsafe pointers.
func UnsafeNewQCloseEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QCloseEvent {
	if h == nil {
		return nil
	}

	return &QCloseEvent{h: (*C.QCloseEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQCloseEvent constructs a new QCloseEvent object.
func NewQCloseEvent() *QCloseEvent {
	var outptr_QCloseEvent *C.QCloseEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QCloseEvent_new(&outptr_QCloseEvent, &outptr_QEvent)
	ret := newQCloseEvent(outptr_QCloseEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQCloseEvent2 constructs a new QCloseEvent object.
func NewQCloseEvent2(param1 *QCloseEvent) *QCloseEvent {
	var outptr_QCloseEvent *C.QCloseEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QCloseEvent_new2(param1.cPointer(), &outptr_QCloseEvent, &outptr_QEvent)
	ret := newQCloseEvent(outptr_QCloseEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QCloseEvent) OperatorAssign(param1 *QCloseEvent) {
	C.QCloseEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QCloseEvent) Delete() {
	C.QCloseEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCloseEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QCloseEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QIconDragEvent struct {
	h          *C.QIconDragEvent
	isSubclass bool
	*QEvent
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
func newQIconDragEvent(h *C.QIconDragEvent, h_QEvent *C.QEvent) *QIconDragEvent {
	if h == nil {
		return nil
	}
	return &QIconDragEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQIconDragEvent constructs the type using only unsafe pointers.
func UnsafeNewQIconDragEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QIconDragEvent {
	if h == nil {
		return nil
	}

	return &QIconDragEvent{h: (*C.QIconDragEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQIconDragEvent constructs a new QIconDragEvent object.
func NewQIconDragEvent() *QIconDragEvent {
	var outptr_QIconDragEvent *C.QIconDragEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QIconDragEvent_new(&outptr_QIconDragEvent, &outptr_QEvent)
	ret := newQIconDragEvent(outptr_QIconDragEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQIconDragEvent2 constructs a new QIconDragEvent object.
func NewQIconDragEvent2(param1 *QIconDragEvent) *QIconDragEvent {
	var outptr_QIconDragEvent *C.QIconDragEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QIconDragEvent_new2(param1.cPointer(), &outptr_QIconDragEvent, &outptr_QEvent)
	ret := newQIconDragEvent(outptr_QIconDragEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QIconDragEvent) OperatorAssign(param1 *QIconDragEvent) {
	C.QIconDragEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QIconDragEvent) Delete() {
	C.QIconDragEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QIconDragEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QIconDragEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QShowEvent struct {
	h          *C.QShowEvent
	isSubclass bool
	*QEvent
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
func newQShowEvent(h *C.QShowEvent, h_QEvent *C.QEvent) *QShowEvent {
	if h == nil {
		return nil
	}
	return &QShowEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQShowEvent constructs the type using only unsafe pointers.
func UnsafeNewQShowEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QShowEvent {
	if h == nil {
		return nil
	}

	return &QShowEvent{h: (*C.QShowEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQShowEvent constructs a new QShowEvent object.
func NewQShowEvent() *QShowEvent {
	var outptr_QShowEvent *C.QShowEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QShowEvent_new(&outptr_QShowEvent, &outptr_QEvent)
	ret := newQShowEvent(outptr_QShowEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQShowEvent2 constructs a new QShowEvent object.
func NewQShowEvent2(param1 *QShowEvent) *QShowEvent {
	var outptr_QShowEvent *C.QShowEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QShowEvent_new2(param1.cPointer(), &outptr_QShowEvent, &outptr_QEvent)
	ret := newQShowEvent(outptr_QShowEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QShowEvent) OperatorAssign(param1 *QShowEvent) {
	C.QShowEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QShowEvent) Delete() {
	C.QShowEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShowEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QShowEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHideEvent struct {
	h          *C.QHideEvent
	isSubclass bool
	*QEvent
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
func newQHideEvent(h *C.QHideEvent, h_QEvent *C.QEvent) *QHideEvent {
	if h == nil {
		return nil
	}
	return &QHideEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQHideEvent constructs the type using only unsafe pointers.
func UnsafeNewQHideEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QHideEvent {
	if h == nil {
		return nil
	}

	return &QHideEvent{h: (*C.QHideEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQHideEvent constructs a new QHideEvent object.
func NewQHideEvent() *QHideEvent {
	var outptr_QHideEvent *C.QHideEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHideEvent_new(&outptr_QHideEvent, &outptr_QEvent)
	ret := newQHideEvent(outptr_QHideEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQHideEvent2 constructs a new QHideEvent object.
func NewQHideEvent2(param1 *QHideEvent) *QHideEvent {
	var outptr_QHideEvent *C.QHideEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHideEvent_new2(param1.cPointer(), &outptr_QHideEvent, &outptr_QEvent)
	ret := newQHideEvent(outptr_QHideEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QHideEvent) OperatorAssign(param1 *QHideEvent) {
	C.QHideEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QHideEvent) Delete() {
	C.QHideEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHideEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHideEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QContextMenuEvent struct {
	h          *C.QContextMenuEvent
	isSubclass bool
	*QInputEvent
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
func newQContextMenuEvent(h *C.QContextMenuEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QContextMenuEvent {
	if h == nil {
		return nil
	}
	return &QContextMenuEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQContextMenuEvent constructs the type using only unsafe pointers.
func UnsafeNewQContextMenuEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QContextMenuEvent {
	if h == nil {
		return nil
	}

	return &QContextMenuEvent{h: (*C.QContextMenuEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQContextMenuEvent constructs a new QContextMenuEvent object.
func NewQContextMenuEvent(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint, modifiers KeyboardModifier) *QContextMenuEvent {
	var outptr_QContextMenuEvent *C.QContextMenuEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QContextMenuEvent_new((C.int)(reason), pos.cPointer(), globalPos.cPointer(), (C.int)(modifiers), &outptr_QContextMenuEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQContextMenuEvent(outptr_QContextMenuEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQContextMenuEvent2 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent2(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint) *QContextMenuEvent {
	var outptr_QContextMenuEvent *C.QContextMenuEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QContextMenuEvent_new2((C.int)(reason), pos.cPointer(), globalPos.cPointer(), &outptr_QContextMenuEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQContextMenuEvent(outptr_QContextMenuEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQContextMenuEvent3 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent3(reason QContextMenuEvent__Reason, pos *QPoint) *QContextMenuEvent {
	var outptr_QContextMenuEvent *C.QContextMenuEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QContextMenuEvent_new3((C.int)(reason), pos.cPointer(), &outptr_QContextMenuEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQContextMenuEvent(outptr_QContextMenuEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQContextMenuEvent4 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent4(param1 *QContextMenuEvent) *QContextMenuEvent {
	var outptr_QContextMenuEvent *C.QContextMenuEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QContextMenuEvent_new4(param1.cPointer(), &outptr_QContextMenuEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQContextMenuEvent(outptr_QContextMenuEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QContextMenuEvent) X() int {
	return (int)(C.QContextMenuEvent_X(this.h))
}

func (this *QContextMenuEvent) Y() int {
	return (int)(C.QContextMenuEvent_Y(this.h))
}

func (this *QContextMenuEvent) GlobalX() int {
	return (int)(C.QContextMenuEvent_GlobalX(this.h))
}

func (this *QContextMenuEvent) GlobalY() int {
	return (int)(C.QContextMenuEvent_GlobalY(this.h))
}

func (this *QContextMenuEvent) Pos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QContextMenuEvent_Pos(this.h)))
}

func (this *QContextMenuEvent) GlobalPos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QContextMenuEvent_GlobalPos(this.h)))
}

func (this *QContextMenuEvent) Reason() QContextMenuEvent__Reason {
	return (QContextMenuEvent__Reason)(C.QContextMenuEvent_Reason(this.h))
}

// Delete this object from C++ memory.
func (this *QContextMenuEvent) Delete() {
	C.QContextMenuEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QContextMenuEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QContextMenuEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodEvent struct {
	h          *C.QInputMethodEvent
	isSubclass bool
	*QEvent
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
func newQInputMethodEvent(h *C.QInputMethodEvent, h_QEvent *C.QEvent) *QInputMethodEvent {
	if h == nil {
		return nil
	}
	return &QInputMethodEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQInputMethodEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QInputMethodEvent {
	if h == nil {
		return nil
	}

	return &QInputMethodEvent{h: (*C.QInputMethodEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQInputMethodEvent constructs a new QInputMethodEvent object.
func NewQInputMethodEvent() *QInputMethodEvent {
	var outptr_QInputMethodEvent *C.QInputMethodEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputMethodEvent_new(&outptr_QInputMethodEvent, &outptr_QEvent)
	ret := newQInputMethodEvent(outptr_QInputMethodEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQInputMethodEvent2 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent2(preeditText string, attributes []QInputMethodEvent__Attribute) *QInputMethodEvent {
	preeditText_ms := C.struct_miqt_string{}
	preeditText_ms.data = C.CString(preeditText)
	preeditText_ms.len = C.size_t(len(preeditText))
	defer C.free(unsafe.Pointer(preeditText_ms.data))
	attributes_CArray := (*[0xffff]*C.QInputMethodEvent__Attribute)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_CArray))
	for i := range attributes {
		attributes_CArray[i] = attributes[i].cPointer()
	}
	attributes_ma := C.struct_miqt_array{len: C.size_t(len(attributes)), data: unsafe.Pointer(attributes_CArray)}
	var outptr_QInputMethodEvent *C.QInputMethodEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputMethodEvent_new2(preeditText_ms, attributes_ma, &outptr_QInputMethodEvent, &outptr_QEvent)
	ret := newQInputMethodEvent(outptr_QInputMethodEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQInputMethodEvent3 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent3(other *QInputMethodEvent) *QInputMethodEvent {
	var outptr_QInputMethodEvent *C.QInputMethodEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputMethodEvent_new3(other.cPointer(), &outptr_QInputMethodEvent, &outptr_QEvent)
	ret := newQInputMethodEvent(outptr_QInputMethodEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QInputMethodEvent) SetCommitString(commitString string) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_SetCommitString(this.h, commitString_ms)
}

func (this *QInputMethodEvent) Attributes() []QInputMethodEvent__Attribute {
	var _ma C.struct_miqt_array = C.QInputMethodEvent_Attributes(this.h)
	_ret := make([]QInputMethodEvent__Attribute, int(_ma.len))
	_outCast := (*[0xffff]*C.QInputMethodEvent__Attribute)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQInputMethodEvent__Attribute(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QInputMethodEvent) PreeditString() string {
	var _ms C.struct_miqt_string = C.QInputMethodEvent_PreeditString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) CommitString() string {
	var _ms C.struct_miqt_string = C.QInputMethodEvent_CommitString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QInputMethodEvent) ReplacementStart() int {
	return (int)(C.QInputMethodEvent_ReplacementStart(this.h))
}

func (this *QInputMethodEvent) ReplacementLength() int {
	return (int)(C.QInputMethodEvent_ReplacementLength(this.h))
}

func (this *QInputMethodEvent) SetCommitString2(commitString string, replaceFrom int) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_SetCommitString2(this.h, commitString_ms, (C.int)(replaceFrom))
}

func (this *QInputMethodEvent) SetCommitString3(commitString string, replaceFrom int, replaceLength int) {
	commitString_ms := C.struct_miqt_string{}
	commitString_ms.data = C.CString(commitString)
	commitString_ms.len = C.size_t(len(commitString))
	defer C.free(unsafe.Pointer(commitString_ms.data))
	C.QInputMethodEvent_SetCommitString3(this.h, commitString_ms, (C.int)(replaceFrom), (C.int)(replaceLength))
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent) Delete() {
	C.QInputMethodEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodQueryEvent struct {
	h          *C.QInputMethodQueryEvent
	isSubclass bool
	*QEvent
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
func newQInputMethodQueryEvent(h *C.QInputMethodQueryEvent, h_QEvent *C.QEvent) *QInputMethodQueryEvent {
	if h == nil {
		return nil
	}
	return &QInputMethodQueryEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQInputMethodQueryEvent constructs the type using only unsafe pointers.
func UnsafeNewQInputMethodQueryEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QInputMethodQueryEvent {
	if h == nil {
		return nil
	}

	return &QInputMethodQueryEvent{h: (*C.QInputMethodQueryEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQInputMethodQueryEvent constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent(queries InputMethodQuery) *QInputMethodQueryEvent {
	var outptr_QInputMethodQueryEvent *C.QInputMethodQueryEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputMethodQueryEvent_new((C.int)(queries), &outptr_QInputMethodQueryEvent, &outptr_QEvent)
	ret := newQInputMethodQueryEvent(outptr_QInputMethodQueryEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQInputMethodQueryEvent2 constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent2(param1 *QInputMethodQueryEvent) *QInputMethodQueryEvent {
	var outptr_QInputMethodQueryEvent *C.QInputMethodQueryEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QInputMethodQueryEvent_new2(param1.cPointer(), &outptr_QInputMethodQueryEvent, &outptr_QEvent)
	ret := newQInputMethodQueryEvent(outptr_QInputMethodQueryEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QInputMethodQueryEvent) Queries() InputMethodQuery {
	return (InputMethodQuery)(C.QInputMethodQueryEvent_Queries(this.h))
}

func (this *QInputMethodQueryEvent) SetValue(query InputMethodQuery, value *QVariant) {
	C.QInputMethodQueryEvent_SetValue(this.h, (C.int)(query), value.cPointer())
}

func (this *QInputMethodQueryEvent) Value(query InputMethodQuery) *QVariant {
	_ret := C.QInputMethodQueryEvent_Value(this.h, (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QInputMethodQueryEvent) Delete() {
	C.QInputMethodQueryEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodQueryEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodQueryEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDropEvent struct {
	h          *C.QDropEvent
	isSubclass bool
	*QEvent
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
func newQDropEvent(h *C.QDropEvent, h_QEvent *C.QEvent) *QDropEvent {
	if h == nil {
		return nil
	}
	return &QDropEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQDropEvent constructs the type using only unsafe pointers.
func UnsafeNewQDropEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QDropEvent {
	if h == nil {
		return nil
	}

	return &QDropEvent{h: (*C.QDropEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQDropEvent constructs a new QDropEvent object.
func NewQDropEvent(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDropEvent {
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDropEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDropEvent(outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDropEvent2 constructs a new QDropEvent object.
func NewQDropEvent2(param1 *QDropEvent) *QDropEvent {
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDropEvent_new2(param1.cPointer(), &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDropEvent(outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDropEvent3 constructs a new QDropEvent object.
func NewQDropEvent3(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDropEvent {
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDropEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal), &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDropEvent(outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QDropEvent) Pos() *QPoint {
	_ret := C.QDropEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) PosF() *QPointF {
	return UnsafeNewQPointF(unsafe.Pointer(C.QDropEvent_PosF(this.h)))
}

func (this *QDropEvent) MouseButtons() MouseButton {
	return (MouseButton)(C.QDropEvent_MouseButtons(this.h))
}

func (this *QDropEvent) KeyboardModifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QDropEvent_KeyboardModifiers(this.h))
}

func (this *QDropEvent) PossibleActions() DropAction {
	return (DropAction)(C.QDropEvent_PossibleActions(this.h))
}

func (this *QDropEvent) ProposedAction() DropAction {
	return (DropAction)(C.QDropEvent_ProposedAction(this.h))
}

func (this *QDropEvent) AcceptProposedAction() {
	C.QDropEvent_AcceptProposedAction(this.h)
}

func (this *QDropEvent) DropAction() DropAction {
	return (DropAction)(C.QDropEvent_DropAction(this.h))
}

func (this *QDropEvent) SetDropAction(action DropAction) {
	C.QDropEvent_SetDropAction(this.h, (C.int)(action))
}

func (this *QDropEvent) Source() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QDropEvent_Source(this.h)))
}

func (this *QDropEvent) MimeData() *QMimeData {
	return UnsafeNewQMimeData(unsafe.Pointer(C.QDropEvent_MimeData(this.h)), nil)
}

// Delete this object from C++ memory.
func (this *QDropEvent) Delete() {
	C.QDropEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDropEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDropEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragMoveEvent struct {
	h          *C.QDragMoveEvent
	isSubclass bool
	*QDropEvent
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
func newQDragMoveEvent(h *C.QDragMoveEvent, h_QDropEvent *C.QDropEvent, h_QEvent *C.QEvent) *QDragMoveEvent {
	if h == nil {
		return nil
	}
	return &QDragMoveEvent{h: h,
		QDropEvent: newQDropEvent(h_QDropEvent, h_QEvent)}
}

// UnsafeNewQDragMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragMoveEvent(h unsafe.Pointer, h_QDropEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QDragMoveEvent {
	if h == nil {
		return nil
	}

	return &QDragMoveEvent{h: (*C.QDragMoveEvent)(h),
		QDropEvent: UnsafeNewQDropEvent(h_QDropEvent, h_QEvent)}
}

// NewQDragMoveEvent constructs a new QDragMoveEvent object.
func NewQDragMoveEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragMoveEvent {
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragMoveEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), &outptr_QDragMoveEvent, &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDragMoveEvent(outptr_QDragMoveEvent, outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDragMoveEvent2 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent2(param1 *QDragMoveEvent) *QDragMoveEvent {
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragMoveEvent_new2(param1.cPointer(), &outptr_QDragMoveEvent, &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDragMoveEvent(outptr_QDragMoveEvent, outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDragMoveEvent3 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent3(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDragMoveEvent {
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragMoveEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal), &outptr_QDragMoveEvent, &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDragMoveEvent(outptr_QDragMoveEvent, outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QDragMoveEvent) AnswerRect() *QRect {
	_ret := C.QDragMoveEvent_AnswerRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

// Delete this object from C++ memory.
func (this *QDragMoveEvent) Delete() {
	C.QDragMoveEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragEnterEvent struct {
	h          *C.QDragEnterEvent
	isSubclass bool
	*QDragMoveEvent
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
func newQDragEnterEvent(h *C.QDragEnterEvent, h_QDragMoveEvent *C.QDragMoveEvent, h_QDropEvent *C.QDropEvent, h_QEvent *C.QEvent) *QDragEnterEvent {
	if h == nil {
		return nil
	}
	return &QDragEnterEvent{h: h,
		QDragMoveEvent: newQDragMoveEvent(h_QDragMoveEvent, h_QDropEvent, h_QEvent)}
}

// UnsafeNewQDragEnterEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragEnterEvent(h unsafe.Pointer, h_QDragMoveEvent unsafe.Pointer, h_QDropEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QDragEnterEvent {
	if h == nil {
		return nil
	}

	return &QDragEnterEvent{h: (*C.QDragEnterEvent)(h),
		QDragMoveEvent: UnsafeNewQDragMoveEvent(h_QDragMoveEvent, h_QDropEvent, h_QEvent)}
}

// NewQDragEnterEvent constructs a new QDragEnterEvent object.
func NewQDragEnterEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragEnterEvent {
	var outptr_QDragEnterEvent *C.QDragEnterEvent = nil
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragEnterEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), &outptr_QDragEnterEvent, &outptr_QDragMoveEvent, &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDragEnterEvent(outptr_QDragEnterEvent, outptr_QDragMoveEvent, outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDragEnterEvent2 constructs a new QDragEnterEvent object.
func NewQDragEnterEvent2(param1 *QDragEnterEvent) *QDragEnterEvent {
	var outptr_QDragEnterEvent *C.QDragEnterEvent = nil
	var outptr_QDragMoveEvent *C.QDragMoveEvent = nil
	var outptr_QDropEvent *C.QDropEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragEnterEvent_new2(param1.cPointer(), &outptr_QDragEnterEvent, &outptr_QDragMoveEvent, &outptr_QDropEvent, &outptr_QEvent)
	ret := newQDragEnterEvent(outptr_QDragEnterEvent, outptr_QDragMoveEvent, outptr_QDropEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QDragEnterEvent) OperatorAssign(param1 *QDragEnterEvent) {
	C.QDragEnterEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDragEnterEvent) Delete() {
	C.QDragEnterEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragEnterEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragEnterEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QDragLeaveEvent struct {
	h          *C.QDragLeaveEvent
	isSubclass bool
	*QEvent
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
func newQDragLeaveEvent(h *C.QDragLeaveEvent, h_QEvent *C.QEvent) *QDragLeaveEvent {
	if h == nil {
		return nil
	}
	return &QDragLeaveEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQDragLeaveEvent constructs the type using only unsafe pointers.
func UnsafeNewQDragLeaveEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QDragLeaveEvent {
	if h == nil {
		return nil
	}

	return &QDragLeaveEvent{h: (*C.QDragLeaveEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQDragLeaveEvent constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent() *QDragLeaveEvent {
	var outptr_QDragLeaveEvent *C.QDragLeaveEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragLeaveEvent_new(&outptr_QDragLeaveEvent, &outptr_QEvent)
	ret := newQDragLeaveEvent(outptr_QDragLeaveEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQDragLeaveEvent2 constructs a new QDragLeaveEvent object.
func NewQDragLeaveEvent2(param1 *QDragLeaveEvent) *QDragLeaveEvent {
	var outptr_QDragLeaveEvent *C.QDragLeaveEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QDragLeaveEvent_new2(param1.cPointer(), &outptr_QDragLeaveEvent, &outptr_QEvent)
	ret := newQDragLeaveEvent(outptr_QDragLeaveEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QDragLeaveEvent) OperatorAssign(param1 *QDragLeaveEvent) {
	C.QDragLeaveEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QDragLeaveEvent) Delete() {
	C.QDragLeaveEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDragLeaveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QDragLeaveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHelpEvent struct {
	h          *C.QHelpEvent
	isSubclass bool
	*QEvent
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
func newQHelpEvent(h *C.QHelpEvent, h_QEvent *C.QEvent) *QHelpEvent {
	if h == nil {
		return nil
	}
	return &QHelpEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQHelpEvent constructs the type using only unsafe pointers.
func UnsafeNewQHelpEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QHelpEvent {
	if h == nil {
		return nil
	}

	return &QHelpEvent{h: (*C.QHelpEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQHelpEvent constructs a new QHelpEvent object.
func NewQHelpEvent(typeVal QEvent__Type, pos *QPoint, globalPos *QPoint) *QHelpEvent {
	var outptr_QHelpEvent *C.QHelpEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHelpEvent_new((C.int)(typeVal), pos.cPointer(), globalPos.cPointer(), &outptr_QHelpEvent, &outptr_QEvent)
	ret := newQHelpEvent(outptr_QHelpEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQHelpEvent2 constructs a new QHelpEvent object.
func NewQHelpEvent2(param1 *QHelpEvent) *QHelpEvent {
	var outptr_QHelpEvent *C.QHelpEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QHelpEvent_new2(param1.cPointer(), &outptr_QHelpEvent, &outptr_QEvent)
	ret := newQHelpEvent(outptr_QHelpEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QHelpEvent) X() int {
	return (int)(C.QHelpEvent_X(this.h))
}

func (this *QHelpEvent) Y() int {
	return (int)(C.QHelpEvent_Y(this.h))
}

func (this *QHelpEvent) GlobalX() int {
	return (int)(C.QHelpEvent_GlobalX(this.h))
}

func (this *QHelpEvent) GlobalY() int {
	return (int)(C.QHelpEvent_GlobalY(this.h))
}

func (this *QHelpEvent) Pos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QHelpEvent_Pos(this.h)))
}

func (this *QHelpEvent) GlobalPos() *QPoint {
	return UnsafeNewQPoint(unsafe.Pointer(C.QHelpEvent_GlobalPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QHelpEvent) Delete() {
	C.QHelpEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHelpEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QHelpEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStatusTipEvent struct {
	h          *C.QStatusTipEvent
	isSubclass bool
	*QEvent
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
func newQStatusTipEvent(h *C.QStatusTipEvent, h_QEvent *C.QEvent) *QStatusTipEvent {
	if h == nil {
		return nil
	}
	return &QStatusTipEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQStatusTipEvent constructs the type using only unsafe pointers.
func UnsafeNewQStatusTipEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QStatusTipEvent {
	if h == nil {
		return nil
	}

	return &QStatusTipEvent{h: (*C.QStatusTipEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQStatusTipEvent constructs a new QStatusTipEvent object.
func NewQStatusTipEvent(tip string) *QStatusTipEvent {
	tip_ms := C.struct_miqt_string{}
	tip_ms.data = C.CString(tip)
	tip_ms.len = C.size_t(len(tip))
	defer C.free(unsafe.Pointer(tip_ms.data))
	var outptr_QStatusTipEvent *C.QStatusTipEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QStatusTipEvent_new(tip_ms, &outptr_QStatusTipEvent, &outptr_QEvent)
	ret := newQStatusTipEvent(outptr_QStatusTipEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQStatusTipEvent2 constructs a new QStatusTipEvent object.
func NewQStatusTipEvent2(param1 *QStatusTipEvent) *QStatusTipEvent {
	var outptr_QStatusTipEvent *C.QStatusTipEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QStatusTipEvent_new2(param1.cPointer(), &outptr_QStatusTipEvent, &outptr_QEvent)
	ret := newQStatusTipEvent(outptr_QStatusTipEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QStatusTipEvent) Tip() string {
	var _ms C.struct_miqt_string = C.QStatusTipEvent_Tip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStatusTipEvent) Delete() {
	C.QStatusTipEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStatusTipEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QStatusTipEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWhatsThisClickedEvent struct {
	h          *C.QWhatsThisClickedEvent
	isSubclass bool
	*QEvent
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
func newQWhatsThisClickedEvent(h *C.QWhatsThisClickedEvent, h_QEvent *C.QEvent) *QWhatsThisClickedEvent {
	if h == nil {
		return nil
	}
	return &QWhatsThisClickedEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQWhatsThisClickedEvent constructs the type using only unsafe pointers.
func UnsafeNewQWhatsThisClickedEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QWhatsThisClickedEvent {
	if h == nil {
		return nil
	}

	return &QWhatsThisClickedEvent{h: (*C.QWhatsThisClickedEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQWhatsThisClickedEvent constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent(href string) *QWhatsThisClickedEvent {
	href_ms := C.struct_miqt_string{}
	href_ms.data = C.CString(href)
	href_ms.len = C.size_t(len(href))
	defer C.free(unsafe.Pointer(href_ms.data))
	var outptr_QWhatsThisClickedEvent *C.QWhatsThisClickedEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWhatsThisClickedEvent_new(href_ms, &outptr_QWhatsThisClickedEvent, &outptr_QEvent)
	ret := newQWhatsThisClickedEvent(outptr_QWhatsThisClickedEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWhatsThisClickedEvent2 constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent2(param1 *QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	var outptr_QWhatsThisClickedEvent *C.QWhatsThisClickedEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWhatsThisClickedEvent_new2(param1.cPointer(), &outptr_QWhatsThisClickedEvent, &outptr_QEvent)
	ret := newQWhatsThisClickedEvent(outptr_QWhatsThisClickedEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QWhatsThisClickedEvent) Href() string {
	var _ms C.struct_miqt_string = C.QWhatsThisClickedEvent_Href(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWhatsThisClickedEvent) Delete() {
	C.QWhatsThisClickedEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWhatsThisClickedEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWhatsThisClickedEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QActionEvent struct {
	h          *C.QActionEvent
	isSubclass bool
	*QEvent
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
func newQActionEvent(h *C.QActionEvent, h_QEvent *C.QEvent) *QActionEvent {
	if h == nil {
		return nil
	}
	return &QActionEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQActionEvent constructs the type using only unsafe pointers.
func UnsafeNewQActionEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QActionEvent {
	if h == nil {
		return nil
	}

	return &QActionEvent{h: (*C.QActionEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQActionEvent constructs a new QActionEvent object.
func NewQActionEvent(typeVal int, action *QAction) *QActionEvent {
	var outptr_QActionEvent *C.QActionEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QActionEvent_new((C.int)(typeVal), action.cPointer(), &outptr_QActionEvent, &outptr_QEvent)
	ret := newQActionEvent(outptr_QActionEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQActionEvent2 constructs a new QActionEvent object.
func NewQActionEvent2(param1 *QActionEvent) *QActionEvent {
	var outptr_QActionEvent *C.QActionEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QActionEvent_new2(param1.cPointer(), &outptr_QActionEvent, &outptr_QEvent)
	ret := newQActionEvent(outptr_QActionEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQActionEvent3 constructs a new QActionEvent object.
func NewQActionEvent3(typeVal int, action *QAction, before *QAction) *QActionEvent {
	var outptr_QActionEvent *C.QActionEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QActionEvent_new3((C.int)(typeVal), action.cPointer(), before.cPointer(), &outptr_QActionEvent, &outptr_QEvent)
	ret := newQActionEvent(outptr_QActionEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QActionEvent) Action() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QActionEvent_Action(this.h)), nil)
}

func (this *QActionEvent) Before() *QAction {
	return UnsafeNewQAction(unsafe.Pointer(C.QActionEvent_Before(this.h)), nil)
}

func (this *QActionEvent) OperatorAssign(param1 *QActionEvent) {
	C.QActionEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QActionEvent) Delete() {
	C.QActionEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QActionEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QActionEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QFileOpenEvent struct {
	h          *C.QFileOpenEvent
	isSubclass bool
	*QEvent
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
func newQFileOpenEvent(h *C.QFileOpenEvent, h_QEvent *C.QEvent) *QFileOpenEvent {
	if h == nil {
		return nil
	}
	return &QFileOpenEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQFileOpenEvent constructs the type using only unsafe pointers.
func UnsafeNewQFileOpenEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QFileOpenEvent {
	if h == nil {
		return nil
	}

	return &QFileOpenEvent{h: (*C.QFileOpenEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQFileOpenEvent constructs a new QFileOpenEvent object.
func NewQFileOpenEvent(file string) *QFileOpenEvent {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	var outptr_QFileOpenEvent *C.QFileOpenEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFileOpenEvent_new(file_ms, &outptr_QFileOpenEvent, &outptr_QEvent)
	ret := newQFileOpenEvent(outptr_QFileOpenEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQFileOpenEvent2 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent2(url *QUrl) *QFileOpenEvent {
	var outptr_QFileOpenEvent *C.QFileOpenEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFileOpenEvent_new2(url.cPointer(), &outptr_QFileOpenEvent, &outptr_QEvent)
	ret := newQFileOpenEvent(outptr_QFileOpenEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQFileOpenEvent3 constructs a new QFileOpenEvent object.
func NewQFileOpenEvent3(param1 *QFileOpenEvent) *QFileOpenEvent {
	var outptr_QFileOpenEvent *C.QFileOpenEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QFileOpenEvent_new3(param1.cPointer(), &outptr_QFileOpenEvent, &outptr_QEvent)
	ret := newQFileOpenEvent(outptr_QFileOpenEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QFileOpenEvent) File() string {
	var _ms C.struct_miqt_string = C.QFileOpenEvent_File(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QFileOpenEvent) Url() *QUrl {
	_ret := C.QFileOpenEvent_Url(this.h)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileOpenEvent) OpenFile(file *QFile, flags QIODevice__OpenModeFlag) bool {
	return (bool)(C.QFileOpenEvent_OpenFile(this.h, file.cPointer(), (C.int)(flags)))
}

// Delete this object from C++ memory.
func (this *QFileOpenEvent) Delete() {
	C.QFileOpenEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileOpenEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileOpenEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QToolBarChangeEvent struct {
	h          *C.QToolBarChangeEvent
	isSubclass bool
	*QEvent
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
func newQToolBarChangeEvent(h *C.QToolBarChangeEvent, h_QEvent *C.QEvent) *QToolBarChangeEvent {
	if h == nil {
		return nil
	}
	return &QToolBarChangeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQToolBarChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQToolBarChangeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QToolBarChangeEvent {
	if h == nil {
		return nil
	}

	return &QToolBarChangeEvent{h: (*C.QToolBarChangeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQToolBarChangeEvent constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent(t bool) *QToolBarChangeEvent {
	var outptr_QToolBarChangeEvent *C.QToolBarChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QToolBarChangeEvent_new((C.bool)(t), &outptr_QToolBarChangeEvent, &outptr_QEvent)
	ret := newQToolBarChangeEvent(outptr_QToolBarChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQToolBarChangeEvent2 constructs a new QToolBarChangeEvent object.
func NewQToolBarChangeEvent2(param1 *QToolBarChangeEvent) *QToolBarChangeEvent {
	var outptr_QToolBarChangeEvent *C.QToolBarChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QToolBarChangeEvent_new2(param1.cPointer(), &outptr_QToolBarChangeEvent, &outptr_QEvent)
	ret := newQToolBarChangeEvent(outptr_QToolBarChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QToolBarChangeEvent) Toggle() bool {
	return (bool)(C.QToolBarChangeEvent_Toggle(this.h))
}

// Delete this object from C++ memory.
func (this *QToolBarChangeEvent) Delete() {
	C.QToolBarChangeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QToolBarChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QToolBarChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QShortcutEvent struct {
	h          *C.QShortcutEvent
	isSubclass bool
	*QEvent
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
func newQShortcutEvent(h *C.QShortcutEvent, h_QEvent *C.QEvent) *QShortcutEvent {
	if h == nil {
		return nil
	}
	return &QShortcutEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQShortcutEvent constructs the type using only unsafe pointers.
func UnsafeNewQShortcutEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QShortcutEvent {
	if h == nil {
		return nil
	}

	return &QShortcutEvent{h: (*C.QShortcutEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQShortcutEvent constructs a new QShortcutEvent object.
func NewQShortcutEvent(key *QKeySequence, id int) *QShortcutEvent {
	var outptr_QShortcutEvent *C.QShortcutEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QShortcutEvent_new(key.cPointer(), (C.int)(id), &outptr_QShortcutEvent, &outptr_QEvent)
	ret := newQShortcutEvent(outptr_QShortcutEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQShortcutEvent2 constructs a new QShortcutEvent object.
func NewQShortcutEvent2(param1 *QShortcutEvent) *QShortcutEvent {
	var outptr_QShortcutEvent *C.QShortcutEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QShortcutEvent_new2(param1.cPointer(), &outptr_QShortcutEvent, &outptr_QEvent)
	ret := newQShortcutEvent(outptr_QShortcutEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQShortcutEvent3 constructs a new QShortcutEvent object.
func NewQShortcutEvent3(key *QKeySequence, id int, ambiguous bool) *QShortcutEvent {
	var outptr_QShortcutEvent *C.QShortcutEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QShortcutEvent_new3(key.cPointer(), (C.int)(id), (C.bool)(ambiguous), &outptr_QShortcutEvent, &outptr_QEvent)
	ret := newQShortcutEvent(outptr_QShortcutEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QShortcutEvent) Key() *QKeySequence {
	return UnsafeNewQKeySequence(unsafe.Pointer(C.QShortcutEvent_Key(this.h)))
}

func (this *QShortcutEvent) ShortcutId() int {
	return (int)(C.QShortcutEvent_ShortcutId(this.h))
}

func (this *QShortcutEvent) IsAmbiguous() bool {
	return (bool)(C.QShortcutEvent_IsAmbiguous(this.h))
}

// Delete this object from C++ memory.
func (this *QShortcutEvent) Delete() {
	C.QShortcutEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QShortcutEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QShortcutEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QWindowStateChangeEvent struct {
	h          *C.QWindowStateChangeEvent
	isSubclass bool
	*QEvent
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
func newQWindowStateChangeEvent(h *C.QWindowStateChangeEvent, h_QEvent *C.QEvent) *QWindowStateChangeEvent {
	if h == nil {
		return nil
	}
	return &QWindowStateChangeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQWindowStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQWindowStateChangeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QWindowStateChangeEvent {
	if h == nil {
		return nil
	}

	return &QWindowStateChangeEvent{h: (*C.QWindowStateChangeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQWindowStateChangeEvent constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent(aOldState WindowState) *QWindowStateChangeEvent {
	var outptr_QWindowStateChangeEvent *C.QWindowStateChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWindowStateChangeEvent_new((C.int)(aOldState), &outptr_QWindowStateChangeEvent, &outptr_QEvent)
	ret := newQWindowStateChangeEvent(outptr_QWindowStateChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWindowStateChangeEvent2 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent2(param1 *QWindowStateChangeEvent) *QWindowStateChangeEvent {
	var outptr_QWindowStateChangeEvent *C.QWindowStateChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWindowStateChangeEvent_new2(param1.cPointer(), &outptr_QWindowStateChangeEvent, &outptr_QEvent)
	ret := newQWindowStateChangeEvent(outptr_QWindowStateChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQWindowStateChangeEvent3 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent3(aOldState WindowState, isOverride bool) *QWindowStateChangeEvent {
	var outptr_QWindowStateChangeEvent *C.QWindowStateChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QWindowStateChangeEvent_new3((C.int)(aOldState), (C.bool)(isOverride), &outptr_QWindowStateChangeEvent, &outptr_QEvent)
	ret := newQWindowStateChangeEvent(outptr_QWindowStateChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QWindowStateChangeEvent) OldState() WindowState {
	return (WindowState)(C.QWindowStateChangeEvent_OldState(this.h))
}

func (this *QWindowStateChangeEvent) IsOverride() bool {
	return (bool)(C.QWindowStateChangeEvent_IsOverride(this.h))
}

// Delete this object from C++ memory.
func (this *QWindowStateChangeEvent) Delete() {
	C.QWindowStateChangeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QWindowStateChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QWindowStateChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPointingDeviceUniqueId struct {
	h          *C.QPointingDeviceUniqueId
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QPointingDeviceUniqueId{h: (*C.QPointingDeviceUniqueId)(h)}
}

// NewQPointingDeviceUniqueId constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId() *QPointingDeviceUniqueId {
	var outptr_QPointingDeviceUniqueId *C.QPointingDeviceUniqueId = nil

	C.QPointingDeviceUniqueId_new(&outptr_QPointingDeviceUniqueId)
	ret := newQPointingDeviceUniqueId(outptr_QPointingDeviceUniqueId)
	ret.isSubclass = true
	return ret
}

// NewQPointingDeviceUniqueId2 constructs a new QPointingDeviceUniqueId object.
func NewQPointingDeviceUniqueId2(param1 *QPointingDeviceUniqueId) *QPointingDeviceUniqueId {
	var outptr_QPointingDeviceUniqueId *C.QPointingDeviceUniqueId = nil

	C.QPointingDeviceUniqueId_new2(param1.cPointer(), &outptr_QPointingDeviceUniqueId)
	ret := newQPointingDeviceUniqueId(outptr_QPointingDeviceUniqueId)
	ret.isSubclass = true
	return ret
}

func QPointingDeviceUniqueId_FromNumericId(id int64) *QPointingDeviceUniqueId {
	_ret := C.QPointingDeviceUniqueId_FromNumericId((C.longlong)(id))
	_goptr := newQPointingDeviceUniqueId(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QPointingDeviceUniqueId) IsValid() bool {
	return (bool)(C.QPointingDeviceUniqueId_IsValid(this.h))
}

func (this *QPointingDeviceUniqueId) NumericId() int64 {
	return (int64)(C.QPointingDeviceUniqueId_NumericId(this.h))
}

// Delete this object from C++ memory.
func (this *QPointingDeviceUniqueId) Delete() {
	C.QPointingDeviceUniqueId_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPointingDeviceUniqueId) GoGC() {
	runtime.SetFinalizer(this, func(this *QPointingDeviceUniqueId) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTouchEvent struct {
	h          *C.QTouchEvent
	isSubclass bool
	*QInputEvent
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
func newQTouchEvent(h *C.QTouchEvent, h_QInputEvent *C.QInputEvent, h_QEvent *C.QEvent) *QTouchEvent {
	if h == nil {
		return nil
	}
	return &QTouchEvent{h: h,
		QInputEvent: newQInputEvent(h_QInputEvent, h_QEvent)}
}

// UnsafeNewQTouchEvent constructs the type using only unsafe pointers.
func UnsafeNewQTouchEvent(h unsafe.Pointer, h_QInputEvent unsafe.Pointer, h_QEvent unsafe.Pointer) *QTouchEvent {
	if h == nil {
		return nil
	}

	return &QTouchEvent{h: (*C.QTouchEvent)(h),
		QInputEvent: UnsafeNewQInputEvent(h_QInputEvent, h_QEvent)}
}

// NewQTouchEvent constructs a new QTouchEvent object.
func NewQTouchEvent(eventType QEvent__Type) *QTouchEvent {
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new((C.int)(eventType), &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent2 constructs a new QTouchEvent object.
func NewQTouchEvent2(param1 *QTouchEvent) *QTouchEvent {
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new2(param1.cPointer(), &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent3 constructs a new QTouchEvent object.
func NewQTouchEvent3(eventType QEvent__Type, device *QTouchDevice) *QTouchEvent {
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new3((C.int)(eventType), device.cPointer(), &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent4 constructs a new QTouchEvent object.
func NewQTouchEvent4(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier) *QTouchEvent {
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new4((C.int)(eventType), device.cPointer(), (C.int)(modifiers), &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent5 constructs a new QTouchEvent object.
func NewQTouchEvent5(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState) *QTouchEvent {
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new5((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates), &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent6 constructs a new QTouchEvent object.
func NewQTouchEvent6(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState, touchPoints []QTouchEvent__TouchPoint) *QTouchEvent {
	touchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	touchPoints_ma := C.struct_miqt_array{len: C.size_t(len(touchPoints)), data: unsafe.Pointer(touchPoints_CArray)}
	var outptr_QTouchEvent *C.QTouchEvent = nil
	var outptr_QInputEvent *C.QInputEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QTouchEvent_new6((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates), touchPoints_ma, &outptr_QTouchEvent, &outptr_QInputEvent, &outptr_QEvent)
	ret := newQTouchEvent(outptr_QTouchEvent, outptr_QInputEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QTouchEvent) Window() *QWindow {
	return UnsafeNewQWindow(unsafe.Pointer(C.QTouchEvent_Window(this.h)), nil, nil)
}

func (this *QTouchEvent) Target() *QObject {
	return UnsafeNewQObject(unsafe.Pointer(C.QTouchEvent_Target(this.h)))
}

func (this *QTouchEvent) TouchPointStates() TouchPointState {
	return (TouchPointState)(C.QTouchEvent_TouchPointStates(this.h))
}

func (this *QTouchEvent) TouchPoints() []QTouchEvent__TouchPoint {
	var _ma C.struct_miqt_array = C.QTouchEvent_TouchPoints(this.h)
	_ret := make([]QTouchEvent__TouchPoint, int(_ma.len))
	_outCast := (*[0xffff]*C.QTouchEvent__TouchPoint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTouchEvent__TouchPoint(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func (this *QTouchEvent) Device() *QTouchDevice {
	return UnsafeNewQTouchDevice(unsafe.Pointer(C.QTouchEvent_Device(this.h)))
}

func (this *QTouchEvent) SetWindow(awindow *QWindow) {
	C.QTouchEvent_SetWindow(this.h, awindow.cPointer())
}

func (this *QTouchEvent) SetTarget(atarget *QObject) {
	C.QTouchEvent_SetTarget(this.h, atarget.cPointer())
}

func (this *QTouchEvent) SetTouchPointStates(aTouchPointStates TouchPointState) {
	C.QTouchEvent_SetTouchPointStates(this.h, (C.int)(aTouchPointStates))
}

func (this *QTouchEvent) SetTouchPoints(atouchPoints []QTouchEvent__TouchPoint) {
	atouchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(atouchPoints))))
	defer C.free(unsafe.Pointer(atouchPoints_CArray))
	for i := range atouchPoints {
		atouchPoints_CArray[i] = atouchPoints[i].cPointer()
	}
	atouchPoints_ma := C.struct_miqt_array{len: C.size_t(len(atouchPoints)), data: unsafe.Pointer(atouchPoints_CArray)}
	C.QTouchEvent_SetTouchPoints(this.h, atouchPoints_ma)
}

func (this *QTouchEvent) SetDevice(adevice *QTouchDevice) {
	C.QTouchEvent_SetDevice(this.h, adevice.cPointer())
}

// Delete this object from C++ memory.
func (this *QTouchEvent) Delete() {
	C.QTouchEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTouchEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QTouchEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScrollPrepareEvent struct {
	h          *C.QScrollPrepareEvent
	isSubclass bool
	*QEvent
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
func newQScrollPrepareEvent(h *C.QScrollPrepareEvent, h_QEvent *C.QEvent) *QScrollPrepareEvent {
	if h == nil {
		return nil
	}
	return &QScrollPrepareEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQScrollPrepareEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollPrepareEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QScrollPrepareEvent {
	if h == nil {
		return nil
	}

	return &QScrollPrepareEvent{h: (*C.QScrollPrepareEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQScrollPrepareEvent constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent(startPos *QPointF) *QScrollPrepareEvent {
	var outptr_QScrollPrepareEvent *C.QScrollPrepareEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScrollPrepareEvent_new(startPos.cPointer(), &outptr_QScrollPrepareEvent, &outptr_QEvent)
	ret := newQScrollPrepareEvent(outptr_QScrollPrepareEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQScrollPrepareEvent2 constructs a new QScrollPrepareEvent object.
func NewQScrollPrepareEvent2(param1 *QScrollPrepareEvent) *QScrollPrepareEvent {
	var outptr_QScrollPrepareEvent *C.QScrollPrepareEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScrollPrepareEvent_new2(param1.cPointer(), &outptr_QScrollPrepareEvent, &outptr_QEvent)
	ret := newQScrollPrepareEvent(outptr_QScrollPrepareEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QScrollPrepareEvent) StartPos() *QPointF {
	_ret := C.QScrollPrepareEvent_StartPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ViewportSize() *QSizeF {
	_ret := C.QScrollPrepareEvent_ViewportSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPosRange() *QRectF {
	_ret := C.QScrollPrepareEvent_ContentPosRange(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollPrepareEvent) ContentPos() *QPointF {
	_ret := C.QScrollPrepareEvent_ContentPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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

// Delete this object from C++ memory.
func (this *QScrollPrepareEvent) Delete() {
	C.QScrollPrepareEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollPrepareEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollPrepareEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScrollEvent struct {
	h          *C.QScrollEvent
	isSubclass bool
	*QEvent
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
func newQScrollEvent(h *C.QScrollEvent, h_QEvent *C.QEvent) *QScrollEvent {
	if h == nil {
		return nil
	}
	return &QScrollEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQScrollEvent constructs the type using only unsafe pointers.
func UnsafeNewQScrollEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QScrollEvent {
	if h == nil {
		return nil
	}

	return &QScrollEvent{h: (*C.QScrollEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQScrollEvent constructs a new QScrollEvent object.
func NewQScrollEvent(contentPos *QPointF, overshoot *QPointF, scrollState QScrollEvent__ScrollState) *QScrollEvent {
	var outptr_QScrollEvent *C.QScrollEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScrollEvent_new(contentPos.cPointer(), overshoot.cPointer(), (C.int)(scrollState), &outptr_QScrollEvent, &outptr_QEvent)
	ret := newQScrollEvent(outptr_QScrollEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQScrollEvent2 constructs a new QScrollEvent object.
func NewQScrollEvent2(param1 *QScrollEvent) *QScrollEvent {
	var outptr_QScrollEvent *C.QScrollEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScrollEvent_new2(param1.cPointer(), &outptr_QScrollEvent, &outptr_QEvent)
	ret := newQScrollEvent(outptr_QScrollEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QScrollEvent) ContentPos() *QPointF {
	_ret := C.QScrollEvent_ContentPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) OvershootDistance() *QPointF {
	_ret := C.QScrollEvent_OvershootDistance(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QScrollEvent) ScrollState() QScrollEvent__ScrollState {
	return (QScrollEvent__ScrollState)(C.QScrollEvent_ScrollState(this.h))
}

// Delete this object from C++ memory.
func (this *QScrollEvent) Delete() {
	C.QScrollEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScrollEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScrollEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QScreenOrientationChangeEvent struct {
	h          *C.QScreenOrientationChangeEvent
	isSubclass bool
	*QEvent
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
func newQScreenOrientationChangeEvent(h *C.QScreenOrientationChangeEvent, h_QEvent *C.QEvent) *QScreenOrientationChangeEvent {
	if h == nil {
		return nil
	}
	return &QScreenOrientationChangeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQScreenOrientationChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQScreenOrientationChangeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QScreenOrientationChangeEvent {
	if h == nil {
		return nil
	}

	return &QScreenOrientationChangeEvent{h: (*C.QScreenOrientationChangeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQScreenOrientationChangeEvent constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent(screen *QScreen, orientation ScreenOrientation) *QScreenOrientationChangeEvent {
	var outptr_QScreenOrientationChangeEvent *C.QScreenOrientationChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScreenOrientationChangeEvent_new(screen.cPointer(), (C.int)(orientation), &outptr_QScreenOrientationChangeEvent, &outptr_QEvent)
	ret := newQScreenOrientationChangeEvent(outptr_QScreenOrientationChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQScreenOrientationChangeEvent2 constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent2(param1 *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	var outptr_QScreenOrientationChangeEvent *C.QScreenOrientationChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QScreenOrientationChangeEvent_new2(param1.cPointer(), &outptr_QScreenOrientationChangeEvent, &outptr_QEvent)
	ret := newQScreenOrientationChangeEvent(outptr_QScreenOrientationChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	return UnsafeNewQScreen(unsafe.Pointer(C.QScreenOrientationChangeEvent_Screen(this.h)), nil)
}

func (this *QScreenOrientationChangeEvent) Orientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreenOrientationChangeEvent_Orientation(this.h))
}

// Delete this object from C++ memory.
func (this *QScreenOrientationChangeEvent) Delete() {
	C.QScreenOrientationChangeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QScreenOrientationChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QScreenOrientationChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QApplicationStateChangeEvent struct {
	h          *C.QApplicationStateChangeEvent
	isSubclass bool
	*QEvent
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
func newQApplicationStateChangeEvent(h *C.QApplicationStateChangeEvent, h_QEvent *C.QEvent) *QApplicationStateChangeEvent {
	if h == nil {
		return nil
	}
	return &QApplicationStateChangeEvent{h: h,
		QEvent: newQEvent(h_QEvent)}
}

// UnsafeNewQApplicationStateChangeEvent constructs the type using only unsafe pointers.
func UnsafeNewQApplicationStateChangeEvent(h unsafe.Pointer, h_QEvent unsafe.Pointer) *QApplicationStateChangeEvent {
	if h == nil {
		return nil
	}

	return &QApplicationStateChangeEvent{h: (*C.QApplicationStateChangeEvent)(h),
		QEvent: UnsafeNewQEvent(h_QEvent)}
}

// NewQApplicationStateChangeEvent constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent(state ApplicationState) *QApplicationStateChangeEvent {
	var outptr_QApplicationStateChangeEvent *C.QApplicationStateChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QApplicationStateChangeEvent_new((C.int)(state), &outptr_QApplicationStateChangeEvent, &outptr_QEvent)
	ret := newQApplicationStateChangeEvent(outptr_QApplicationStateChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

// NewQApplicationStateChangeEvent2 constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent2(param1 *QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	var outptr_QApplicationStateChangeEvent *C.QApplicationStateChangeEvent = nil
	var outptr_QEvent *C.QEvent = nil

	C.QApplicationStateChangeEvent_new2(param1.cPointer(), &outptr_QApplicationStateChangeEvent, &outptr_QEvent)
	ret := newQApplicationStateChangeEvent(outptr_QApplicationStateChangeEvent, outptr_QEvent)
	ret.isSubclass = true
	return ret
}

func (this *QApplicationStateChangeEvent) ApplicationState() ApplicationState {
	return (ApplicationState)(C.QApplicationStateChangeEvent_ApplicationState(this.h))
}

// Delete this object from C++ memory.
func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QApplicationStateChangeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QApplicationStateChangeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QInputMethodEvent__Attribute struct {
	h          *C.QInputMethodEvent__Attribute
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QInputMethodEvent__Attribute{h: (*C.QInputMethodEvent__Attribute)(h)}
}

// NewQInputMethodEvent__Attribute constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute(typ QInputMethodEvent__AttributeType, s int, l int, val QVariant) *QInputMethodEvent__Attribute {
	var outptr_QInputMethodEvent__Attribute *C.QInputMethodEvent__Attribute = nil

	C.QInputMethodEvent__Attribute_new((C.int)(typ), (C.int)(s), (C.int)(l), val.cPointer(), &outptr_QInputMethodEvent__Attribute)
	ret := newQInputMethodEvent__Attribute(outptr_QInputMethodEvent__Attribute)
	ret.isSubclass = true
	return ret
}

// NewQInputMethodEvent__Attribute2 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute2(typ QInputMethodEvent__AttributeType, s int, l int) *QInputMethodEvent__Attribute {
	var outptr_QInputMethodEvent__Attribute *C.QInputMethodEvent__Attribute = nil

	C.QInputMethodEvent__Attribute_new2((C.int)(typ), (C.int)(s), (C.int)(l), &outptr_QInputMethodEvent__Attribute)
	ret := newQInputMethodEvent__Attribute(outptr_QInputMethodEvent__Attribute)
	ret.isSubclass = true
	return ret
}

// NewQInputMethodEvent__Attribute3 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute3(param1 *QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	var outptr_QInputMethodEvent__Attribute *C.QInputMethodEvent__Attribute = nil

	C.QInputMethodEvent__Attribute_new3(param1.cPointer(), &outptr_QInputMethodEvent__Attribute)
	ret := newQInputMethodEvent__Attribute(outptr_QInputMethodEvent__Attribute)
	ret.isSubclass = true
	return ret
}

func (this *QInputMethodEvent__Attribute) OperatorAssign(param1 *QInputMethodEvent__Attribute) {
	C.QInputMethodEvent__Attribute_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent__Attribute) Delete() {
	C.QInputMethodEvent__Attribute_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QInputMethodEvent__Attribute) GoGC() {
	runtime.SetFinalizer(this, func(this *QInputMethodEvent__Attribute) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTouchEvent__TouchPoint struct {
	h          *C.QTouchEvent__TouchPoint
	isSubclass bool
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
	if h == nil {
		return nil
	}

	return &QTouchEvent__TouchPoint{h: (*C.QTouchEvent__TouchPoint)(h)}
}

// NewQTouchEvent__TouchPoint constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint() *QTouchEvent__TouchPoint {
	var outptr_QTouchEvent__TouchPoint *C.QTouchEvent__TouchPoint = nil

	C.QTouchEvent__TouchPoint_new(&outptr_QTouchEvent__TouchPoint)
	ret := newQTouchEvent__TouchPoint(outptr_QTouchEvent__TouchPoint)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent__TouchPoint2 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint2(other *QTouchEvent__TouchPoint) *QTouchEvent__TouchPoint {
	var outptr_QTouchEvent__TouchPoint *C.QTouchEvent__TouchPoint = nil

	C.QTouchEvent__TouchPoint_new2(other.cPointer(), &outptr_QTouchEvent__TouchPoint)
	ret := newQTouchEvent__TouchPoint(outptr_QTouchEvent__TouchPoint)
	ret.isSubclass = true
	return ret
}

// NewQTouchEvent__TouchPoint3 constructs a new QTouchEvent::TouchPoint object.
func NewQTouchEvent__TouchPoint3(id int) *QTouchEvent__TouchPoint {
	var outptr_QTouchEvent__TouchPoint *C.QTouchEvent__TouchPoint = nil

	C.QTouchEvent__TouchPoint_new3((C.int)(id), &outptr_QTouchEvent__TouchPoint)
	ret := newQTouchEvent__TouchPoint(outptr_QTouchEvent__TouchPoint)
	ret.isSubclass = true
	return ret
}

func (this *QTouchEvent__TouchPoint) OperatorAssign(other *QTouchEvent__TouchPoint) {
	C.QTouchEvent__TouchPoint_OperatorAssign(this.h, other.cPointer())
}

func (this *QTouchEvent__TouchPoint) Swap(other *QTouchEvent__TouchPoint) {
	C.QTouchEvent__TouchPoint_Swap(this.h, other.cPointer())
}

func (this *QTouchEvent__TouchPoint) Id() int {
	return (int)(C.QTouchEvent__TouchPoint_Id(this.h))
}

func (this *QTouchEvent__TouchPoint) UniqueId() *QPointingDeviceUniqueId {
	_ret := C.QTouchEvent__TouchPoint_UniqueId(this.h)
	_goptr := newQPointingDeviceUniqueId(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) State() TouchPointState {
	return (TouchPointState)(C.QTouchEvent__TouchPoint_State(this.h))
}

func (this *QTouchEvent__TouchPoint) Pos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_StartPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_LastPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScenePos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartScenePos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_StartScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastScenePos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_LastScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScreenPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_ScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartScreenPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_StartScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastScreenPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_LastScreenPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) NormalizedPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_NormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) StartNormalizedPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_StartNormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) LastNormalizedPos() *QPointF {
	_ret := C.QTouchEvent__TouchPoint_LastNormalizedPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Rect() *QRectF {
	_ret := C.QTouchEvent__TouchPoint_Rect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) SceneRect() *QRectF {
	_ret := C.QTouchEvent__TouchPoint_SceneRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) ScreenRect() *QRectF {
	_ret := C.QTouchEvent__TouchPoint_ScreenRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
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
	return (float64)(C.QTouchEvent__TouchPoint_Pressure(this.h))
}

func (this *QTouchEvent__TouchPoint) Rotation() float64 {
	return (float64)(C.QTouchEvent__TouchPoint_Rotation(this.h))
}

func (this *QTouchEvent__TouchPoint) EllipseDiameters() *QSizeF {
	_ret := C.QTouchEvent__TouchPoint_EllipseDiameters(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Velocity() *QVector2D {
	_ret := C.QTouchEvent__TouchPoint_Velocity(this.h)
	_goptr := newQVector2D(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTouchEvent__TouchPoint) Flags() QTouchEvent__TouchPoint__InfoFlag {
	return (QTouchEvent__TouchPoint__InfoFlag)(C.QTouchEvent__TouchPoint_Flags(this.h))
}

func (this *QTouchEvent__TouchPoint) RawScreenPositions() []QPointF {
	var _ma C.struct_miqt_array = C.QTouchEvent__TouchPoint_RawScreenPositions(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQPointF(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	return _ret
}

func (this *QTouchEvent__TouchPoint) SetId(id int) {
	C.QTouchEvent__TouchPoint_SetId(this.h, (C.int)(id))
}

func (this *QTouchEvent__TouchPoint) SetUniqueId(uid int64) {
	C.QTouchEvent__TouchPoint_SetUniqueId(this.h, (C.longlong)(uid))
}

func (this *QTouchEvent__TouchPoint) SetState(state TouchPointState) {
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

func (this *QTouchEvent__TouchPoint) SetFlags(flags QTouchEvent__TouchPoint__InfoFlag) {
	C.QTouchEvent__TouchPoint_SetFlags(this.h, (C.int)(flags))
}

func (this *QTouchEvent__TouchPoint) SetRawScreenPositions(positions []QPointF) {
	positions_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	positions_ma := C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray)}
	C.QTouchEvent__TouchPoint_SetRawScreenPositions(this.h, positions_ma)
}

// Delete this object from C++ memory.
func (this *QTouchEvent__TouchPoint) Delete() {
	C.QTouchEvent__TouchPoint_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTouchEvent__TouchPoint) GoGC() {
	runtime.SetFinalizer(this, func(this *QTouchEvent__TouchPoint) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
