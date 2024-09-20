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
	QWheelEvent____DefaultDeltasPerStep QWheelEvent__ = 120
)

type QTabletEvent__TabletDevice int

const (
	QTabletEvent__TabletDevice__NoDevice       QTabletEvent__TabletDevice = 0
	QTabletEvent__TabletDevice__Puck           QTabletEvent__TabletDevice = 1
	QTabletEvent__TabletDevice__Stylus         QTabletEvent__TabletDevice = 2
	QTabletEvent__TabletDevice__Airbrush       QTabletEvent__TabletDevice = 3
	QTabletEvent__TabletDevice__FourDMouse     QTabletEvent__TabletDevice = 4
	QTabletEvent__TabletDevice__XFreeEraser    QTabletEvent__TabletDevice = 5
	QTabletEvent__TabletDevice__RotationStylus QTabletEvent__TabletDevice = 6
)

type QTabletEvent__PointerType int

const (
	QTabletEvent__PointerType__UnknownPointer QTabletEvent__PointerType = 0
	QTabletEvent__PointerType__Pen            QTabletEvent__PointerType = 1
	QTabletEvent__PointerType__Cursor         QTabletEvent__PointerType = 2
	QTabletEvent__PointerType__Eraser         QTabletEvent__PointerType = 3
)

type QPlatformSurfaceEvent__SurfaceEventType int

const (
	QPlatformSurfaceEvent__SurfaceEventType__SurfaceCreated            QPlatformSurfaceEvent__SurfaceEventType = 0
	QPlatformSurfaceEvent__SurfaceEventType__SurfaceAboutToBeDestroyed QPlatformSurfaceEvent__SurfaceEventType = 1
)

type QContextMenuEvent__Reason int

const (
	QContextMenuEvent__Reason__Mouse    QContextMenuEvent__Reason = 0
	QContextMenuEvent__Reason__Keyboard QContextMenuEvent__Reason = 1
	QContextMenuEvent__Reason__Other    QContextMenuEvent__Reason = 2
)

type QInputMethodEvent__AttributeType int

const (
	QInputMethodEvent__AttributeType__TextFormat QInputMethodEvent__AttributeType = 0
	QInputMethodEvent__AttributeType__Cursor     QInputMethodEvent__AttributeType = 1
	QInputMethodEvent__AttributeType__Language   QInputMethodEvent__AttributeType = 2
	QInputMethodEvent__AttributeType__Ruby       QInputMethodEvent__AttributeType = 3
	QInputMethodEvent__AttributeType__Selection  QInputMethodEvent__AttributeType = 4
)

type QScrollEvent__ScrollState int

const (
	QScrollEvent__ScrollState__ScrollStarted  QScrollEvent__ScrollState = 0
	QScrollEvent__ScrollState__ScrollUpdated  QScrollEvent__ScrollState = 1
	QScrollEvent__ScrollState__ScrollFinished QScrollEvent__ScrollState = 2
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
func NewQInputEvent(typeVal QEvent__Type) *QInputEvent {
	ret := C.QInputEvent_new((C.int)(typeVal))
	return newQInputEvent(ret)
}

// NewQInputEvent2 constructs a new QInputEvent object.
func NewQInputEvent2(param1 *QInputEvent) *QInputEvent {
	ret := C.QInputEvent_new2(param1.cPointer())
	return newQInputEvent(ret)
}

// NewQInputEvent3 constructs a new QInputEvent object.
func NewQInputEvent3(typeVal QEvent__Type, modifiers KeyboardModifier) *QInputEvent {
	ret := C.QInputEvent_new3((C.int)(typeVal), (C.int)(modifiers))
	return newQInputEvent(ret)
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
	C.QInputEvent_Delete(this.h)
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
	return newQPointF_U(unsafe.Pointer(C.QEnterEvent_LocalPos(this.h)))
}

func (this *QEnterEvent) WindowPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QEnterEvent_WindowPos(this.h)))
}

func (this *QEnterEvent) ScreenPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QEnterEvent_ScreenPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QEnterEvent) Delete() {
	C.QEnterEvent_Delete(this.h)
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
func NewQMouseEvent(typeVal QEvent__Type, localPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	ret := C.QMouseEvent_new((C.int)(typeVal), localPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent2 constructs a new QMouseEvent object.
func NewQMouseEvent2(typeVal QEvent__Type, localPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	ret := C.QMouseEvent_new2((C.int)(typeVal), localPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent3 constructs a new QMouseEvent object.
func NewQMouseEvent3(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier) *QMouseEvent {
	ret := C.QMouseEvent_new3((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers))
	return newQMouseEvent(ret)
}

// NewQMouseEvent4 constructs a new QMouseEvent object.
func NewQMouseEvent4(typeVal QEvent__Type, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, button MouseButton, buttons MouseButton, modifiers KeyboardModifier, source MouseEventSource) *QMouseEvent {
	ret := C.QMouseEvent_new4((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.int)(button), (C.int)(buttons), (C.int)(modifiers), (C.int)(source))
	return newQMouseEvent(ret)
}

// NewQMouseEvent5 constructs a new QMouseEvent object.
func NewQMouseEvent5(param1 *QMouseEvent) *QMouseEvent {
	ret := C.QMouseEvent_new5(param1.cPointer())
	return newQMouseEvent(ret)
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
	return newQPointF_U(unsafe.Pointer(C.QMouseEvent_LocalPos(this.h)))
}

func (this *QMouseEvent) WindowPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QMouseEvent_WindowPos(this.h)))
}

func (this *QMouseEvent) ScreenPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QMouseEvent_ScreenPos(this.h)))
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
	C.QMouseEvent_Delete(this.h)
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
func NewQHoverEvent(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF) *QHoverEvent {
	ret := C.QHoverEvent_new((C.int)(typeVal), pos.cPointer(), oldPos.cPointer())
	return newQHoverEvent(ret)
}

// NewQHoverEvent2 constructs a new QHoverEvent object.
func NewQHoverEvent2(param1 *QHoverEvent) *QHoverEvent {
	ret := C.QHoverEvent_new2(param1.cPointer())
	return newQHoverEvent(ret)
}

// NewQHoverEvent3 constructs a new QHoverEvent object.
func NewQHoverEvent3(typeVal QEvent__Type, pos *QPointF, oldPos *QPointF, modifiers KeyboardModifier) *QHoverEvent {
	ret := C.QHoverEvent_new3((C.int)(typeVal), pos.cPointer(), oldPos.cPointer(), (C.int)(modifiers))
	return newQHoverEvent(ret)
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
	return newQPointF_U(unsafe.Pointer(C.QHoverEvent_PosF(this.h)))
}

func (this *QHoverEvent) OldPosF() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QHoverEvent_OldPosF(this.h)))
}

// Delete this object from C++ memory.
func (this *QHoverEvent) Delete() {
	C.QHoverEvent_Delete(this.h)
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
func NewQWheelEvent(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	ret := C.QWheelEvent_new(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent2 constructs a new QWheelEvent object.
func NewQWheelEvent2(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	ret := C.QWheelEvent_new2(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent3 constructs a new QWheelEvent object.
func NewQWheelEvent3(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier) *QWheelEvent {
	ret := C.QWheelEvent_new3(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers))
	return newQWheelEvent(ret)
}

// NewQWheelEvent4 constructs a new QWheelEvent object.
func NewQWheelEvent4(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase) *QWheelEvent {
	ret := C.QWheelEvent_new4(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase))
	return newQWheelEvent(ret)
}

// NewQWheelEvent5 constructs a new QWheelEvent object.
func NewQWheelEvent5(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource) *QWheelEvent {
	ret := C.QWheelEvent_new5(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source))
	return newQWheelEvent(ret)
}

// NewQWheelEvent6 constructs a new QWheelEvent object.
func NewQWheelEvent6(pos *QPointF, globalPos *QPointF, pixelDelta QPoint, angleDelta QPoint, qt4Delta int, qt4Orientation Orientation, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, source MouseEventSource, inverted bool) *QWheelEvent {
	ret := C.QWheelEvent_new6(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(qt4Delta), (C.int)(qt4Orientation), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.int)(source), (C.bool)(inverted))
	return newQWheelEvent(ret)
}

// NewQWheelEvent7 constructs a new QWheelEvent object.
func NewQWheelEvent7(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool) *QWheelEvent {
	ret := C.QWheelEvent_new7(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted))
	return newQWheelEvent(ret)
}

// NewQWheelEvent8 constructs a new QWheelEvent object.
func NewQWheelEvent8(param1 *QWheelEvent) *QWheelEvent {
	ret := C.QWheelEvent_new8(param1.cPointer())
	return newQWheelEvent(ret)
}

// NewQWheelEvent9 constructs a new QWheelEvent object.
func NewQWheelEvent9(pos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	ret := C.QWheelEvent_new9(pos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient))
	return newQWheelEvent(ret)
}

// NewQWheelEvent10 constructs a new QWheelEvent object.
func NewQWheelEvent10(pos *QPointF, globalPos *QPointF, delta int, buttons MouseButton, modifiers KeyboardModifier, orient Orientation) *QWheelEvent {
	ret := C.QWheelEvent_new10(pos.cPointer(), globalPos.cPointer(), (C.int)(delta), (C.int)(buttons), (C.int)(modifiers), (C.int)(orient))
	return newQWheelEvent(ret)
}

// NewQWheelEvent11 constructs a new QWheelEvent object.
func NewQWheelEvent11(pos QPointF, globalPos QPointF, pixelDelta QPoint, angleDelta QPoint, buttons MouseButton, modifiers KeyboardModifier, phase ScrollPhase, inverted bool, source MouseEventSource) *QWheelEvent {
	ret := C.QWheelEvent_new11(pos.cPointer(), globalPos.cPointer(), pixelDelta.cPointer(), angleDelta.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(phase), (C.bool)(inverted), (C.int)(source))
	return newQWheelEvent(ret)
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
	return newQPointF_U(unsafe.Pointer(C.QWheelEvent_PosF(this.h)))
}

func (this *QWheelEvent) GlobalPosF() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QWheelEvent_GlobalPosF(this.h)))
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
	C.QWheelEvent_Delete(this.h)
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
func NewQTabletEvent(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64) *QTabletEvent {
	ret := C.QTabletEvent_new((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID))
	return newQTabletEvent(ret)
}

// NewQTabletEvent2 constructs a new QTabletEvent object.
func NewQTabletEvent2(t QEvent__Type, pos *QPointF, globalPos *QPointF, device int, pointerType int, pressure float64, xTilt int, yTilt int, tangentialPressure float64, rotation float64, z int, keyState KeyboardModifier, uniqueID int64, button MouseButton, buttons MouseButton) *QTabletEvent {
	ret := C.QTabletEvent_new2((C.int)(t), pos.cPointer(), globalPos.cPointer(), (C.int)(device), (C.int)(pointerType), (C.double)(pressure), (C.int)(xTilt), (C.int)(yTilt), (C.double)(tangentialPressure), (C.double)(rotation), (C.int)(z), (C.int)(keyState), (C.longlong)(uniqueID), (C.int)(button), (C.int)(buttons))
	return newQTabletEvent(ret)
}

// NewQTabletEvent3 constructs a new QTabletEvent object.
func NewQTabletEvent3(param1 *QTabletEvent) *QTabletEvent {
	ret := C.QTabletEvent_new3(param1.cPointer())
	return newQTabletEvent(ret)
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
	return newQPointF_U(unsafe.Pointer(C.QTabletEvent_PosF(this.h)))
}

func (this *QTabletEvent) GlobalPosF() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QTabletEvent_GlobalPosF(this.h)))
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
	C.QTabletEvent_Delete(this.h)
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
func NewQNativeGestureEvent(typeVal NativeGestureType, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new((C.int)(typeVal), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument))
	return newQNativeGestureEvent(ret)
}

// NewQNativeGestureEvent2 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent2(typeVal NativeGestureType, dev *QTouchDevice, localPos *QPointF, windowPos *QPointF, screenPos *QPointF, value float64, sequenceId uint64, intArgument uint64) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new2((C.int)(typeVal), dev.cPointer(), localPos.cPointer(), windowPos.cPointer(), screenPos.cPointer(), (C.double)(value), (C.ulong)(sequenceId), (C.ulonglong)(intArgument))
	return newQNativeGestureEvent(ret)
}

// NewQNativeGestureEvent3 constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent3(param1 *QNativeGestureEvent) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new3(param1.cPointer())
	return newQNativeGestureEvent(ret)
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
	return newQPointF_U(unsafe.Pointer(C.QNativeGestureEvent_LocalPos(this.h)))
}

func (this *QNativeGestureEvent) WindowPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QNativeGestureEvent_WindowPos(this.h)))
}

func (this *QNativeGestureEvent) ScreenPos() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QNativeGestureEvent_ScreenPos(this.h)))
}

func (this *QNativeGestureEvent) Device() *QTouchDevice {
	return newQTouchDevice_U(unsafe.Pointer(C.QNativeGestureEvent_Device(this.h)))
}

// Delete this object from C++ memory.
func (this *QNativeGestureEvent) Delete() {
	C.QNativeGestureEvent_Delete(this.h)
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
func NewQKeyEvent(typeVal QEvent__Type, key int, modifiers KeyboardModifier) *QKeyEvent {
	ret := C.QKeyEvent_new((C.int)(typeVal), (C.int)(key), (C.int)(modifiers))
	return newQKeyEvent(ret)
}

// NewQKeyEvent2 constructs a new QKeyEvent object.
func NewQKeyEvent2(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint) *QKeyEvent {
	ret := C.QKeyEvent_new2((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers))
	return newQKeyEvent(ret)
}

// NewQKeyEvent3 constructs a new QKeyEvent object.
func NewQKeyEvent3(param1 *QKeyEvent) *QKeyEvent {
	ret := C.QKeyEvent_new3(param1.cPointer())
	return newQKeyEvent(ret)
}

// NewQKeyEvent4 constructs a new QKeyEvent object.
func NewQKeyEvent4(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new4((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (*C.struct_miqt_string)(text_ms))
	return newQKeyEvent(ret)
}

// NewQKeyEvent5 constructs a new QKeyEvent object.
func NewQKeyEvent5(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new5((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (*C.struct_miqt_string)(text_ms), (C.bool)(autorep))
	return newQKeyEvent(ret)
}

// NewQKeyEvent6 constructs a new QKeyEvent object.
func NewQKeyEvent6(typeVal QEvent__Type, key int, modifiers KeyboardModifier, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new6((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (*C.struct_miqt_string)(text_ms), (C.bool)(autorep), (C.uint16_t)(count))
	return newQKeyEvent(ret)
}

// NewQKeyEvent7 constructs a new QKeyEvent object.
func NewQKeyEvent7(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new7((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), (*C.struct_miqt_string)(text_ms))
	return newQKeyEvent(ret)
}

// NewQKeyEvent8 constructs a new QKeyEvent object.
func NewQKeyEvent8(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new8((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), (*C.struct_miqt_string)(text_ms), (C.bool)(autorep))
	return newQKeyEvent(ret)
}

// NewQKeyEvent9 constructs a new QKeyEvent object.
func NewQKeyEvent9(typeVal QEvent__Type, key int, modifiers KeyboardModifier, nativeScanCode uint, nativeVirtualKey uint, nativeModifiers uint, text string, autorep bool, count uint16) *QKeyEvent {
	text_ms := miqt_strdupg(text)
	defer C.free(text_ms)
	ret := C.QKeyEvent_new9((C.int)(typeVal), (C.int)(key), (C.int)(modifiers), (C.uint)(nativeScanCode), (C.uint)(nativeVirtualKey), (C.uint)(nativeModifiers), (*C.struct_miqt_string)(text_ms), (C.bool)(autorep), (C.uint16_t)(count))
	return newQKeyEvent(ret)
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
	var _ms *C.struct_miqt_string = C.QKeyEvent_Text(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	C.QKeyEvent_Delete(this.h)
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
func NewQFocusEvent(typeVal QEvent__Type) *QFocusEvent {
	ret := C.QFocusEvent_new((C.int)(typeVal))
	return newQFocusEvent(ret)
}

// NewQFocusEvent2 constructs a new QFocusEvent object.
func NewQFocusEvent2(param1 *QFocusEvent) *QFocusEvent {
	ret := C.QFocusEvent_new2(param1.cPointer())
	return newQFocusEvent(ret)
}

// NewQFocusEvent3 constructs a new QFocusEvent object.
func NewQFocusEvent3(typeVal QEvent__Type, reason FocusReason) *QFocusEvent {
	ret := C.QFocusEvent_new3((C.int)(typeVal), (C.int)(reason))
	return newQFocusEvent(ret)
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
	C.QFocusEvent_Delete(this.h)
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
	return newQRect_U(unsafe.Pointer(C.QPaintEvent_Rect(this.h)))
}

func (this *QPaintEvent) Region() *QRegion {
	return newQRegion_U(unsafe.Pointer(C.QPaintEvent_Region(this.h)))
}

// Delete this object from C++ memory.
func (this *QPaintEvent) Delete() {
	C.QPaintEvent_Delete(this.h)
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
	return newQPoint_U(unsafe.Pointer(C.QMoveEvent_Pos(this.h)))
}

func (this *QMoveEvent) OldPos() *QPoint {
	return newQPoint_U(unsafe.Pointer(C.QMoveEvent_OldPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QMoveEvent) Delete() {
	C.QMoveEvent_Delete(this.h)
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
	return newQRegion_U(unsafe.Pointer(C.QExposeEvent_Region(this.h)))
}

// Delete this object from C++ memory.
func (this *QExposeEvent) Delete() {
	C.QExposeEvent_Delete(this.h)
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
func NewQPlatformSurfaceEvent(surfaceEventType QPlatformSurfaceEvent__SurfaceEventType) *QPlatformSurfaceEvent {
	ret := C.QPlatformSurfaceEvent_new((C.int)(surfaceEventType))
	return newQPlatformSurfaceEvent(ret)
}

// NewQPlatformSurfaceEvent2 constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent2(param1 *QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	ret := C.QPlatformSurfaceEvent_new2(param1.cPointer())
	return newQPlatformSurfaceEvent(ret)
}

func (this *QPlatformSurfaceEvent) SurfaceEventType() QPlatformSurfaceEvent__SurfaceEventType {
	return (QPlatformSurfaceEvent__SurfaceEventType)(C.QPlatformSurfaceEvent_SurfaceEventType(this.h))
}

// Delete this object from C++ memory.
func (this *QPlatformSurfaceEvent) Delete() {
	C.QPlatformSurfaceEvent_Delete(this.h)
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
	return newQSize_U(unsafe.Pointer(C.QResizeEvent_Size(this.h)))
}

func (this *QResizeEvent) OldSize() *QSize {
	return newQSize_U(unsafe.Pointer(C.QResizeEvent_OldSize(this.h)))
}

// Delete this object from C++ memory.
func (this *QResizeEvent) Delete() {
	C.QResizeEvent_Delete(this.h)
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

// Delete this object from C++ memory.
func (this *QCloseEvent) Delete() {
	C.QCloseEvent_Delete(this.h)
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

// Delete this object from C++ memory.
func (this *QIconDragEvent) Delete() {
	C.QIconDragEvent_Delete(this.h)
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

// Delete this object from C++ memory.
func (this *QShowEvent) Delete() {
	C.QShowEvent_Delete(this.h)
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

// Delete this object from C++ memory.
func (this *QHideEvent) Delete() {
	C.QHideEvent_Delete(this.h)
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
func NewQContextMenuEvent(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint, modifiers KeyboardModifier) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new((C.int)(reason), pos.cPointer(), globalPos.cPointer(), (C.int)(modifiers))
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent2 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent2(reason QContextMenuEvent__Reason, pos *QPoint, globalPos *QPoint) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new2((C.int)(reason), pos.cPointer(), globalPos.cPointer())
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent3 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent3(reason QContextMenuEvent__Reason, pos *QPoint) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new3((C.int)(reason), pos.cPointer())
	return newQContextMenuEvent(ret)
}

// NewQContextMenuEvent4 constructs a new QContextMenuEvent object.
func NewQContextMenuEvent4(param1 *QContextMenuEvent) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new4(param1.cPointer())
	return newQContextMenuEvent(ret)
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
	return newQPoint_U(unsafe.Pointer(C.QContextMenuEvent_Pos(this.h)))
}

func (this *QContextMenuEvent) GlobalPos() *QPoint {
	return newQPoint_U(unsafe.Pointer(C.QContextMenuEvent_GlobalPos(this.h)))
}

func (this *QContextMenuEvent) Reason() QContextMenuEvent__Reason {
	return (QContextMenuEvent__Reason)(C.QContextMenuEvent_Reason(this.h))
}

// Delete this object from C++ memory.
func (this *QContextMenuEvent) Delete() {
	C.QContextMenuEvent_Delete(this.h)
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
	preeditText_ms := miqt_strdupg(preeditText)
	defer C.free(preeditText_ms)
	// For the C ABI, malloc a C array of raw pointers
	attributes_CArray := (*[0xffff]*C.QInputMethodEvent__Attribute)(C.malloc(C.size_t(8 * len(attributes))))
	defer C.free(unsafe.Pointer(attributes_CArray))
	for i := range attributes {
		attributes_CArray[i] = attributes[i].cPointer()
	}
	attributes_ma := &C.struct_miqt_array{len: C.size_t(len(attributes)), data: unsafe.Pointer(attributes_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(attributes_ma))
	ret := C.QInputMethodEvent_new2((*C.struct_miqt_string)(preeditText_ms), attributes_ma)
	return newQInputMethodEvent(ret)
}

// NewQInputMethodEvent3 constructs a new QInputMethodEvent object.
func NewQInputMethodEvent3(other *QInputMethodEvent) *QInputMethodEvent {
	ret := C.QInputMethodEvent_new3(other.cPointer())
	return newQInputMethodEvent(ret)
}

func (this *QInputMethodEvent) SetCommitString(commitString string) {
	commitString_ms := miqt_strdupg(commitString)
	defer C.free(commitString_ms)
	C.QInputMethodEvent_SetCommitString(this.h, (*C.struct_miqt_string)(commitString_ms))
}

func (this *QInputMethodEvent) Attributes() []QInputMethodEvent__Attribute {
	var _ma *C.struct_miqt_array = C.QInputMethodEvent_Attributes(this.h)
	_ret := make([]QInputMethodEvent__Attribute, int(_ma.len))
	_outCast := (*[0xffff]*C.QInputMethodEvent__Attribute)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQInputMethodEvent__Attribute(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QInputMethodEvent) PreeditString() string {
	var _ms *C.struct_miqt_string = C.QInputMethodEvent_PreeditString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QInputMethodEvent) CommitString() string {
	var _ms *C.struct_miqt_string = C.QInputMethodEvent_CommitString(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

func (this *QInputMethodEvent) ReplacementStart() int {
	return (int)(C.QInputMethodEvent_ReplacementStart(this.h))
}

func (this *QInputMethodEvent) ReplacementLength() int {
	return (int)(C.QInputMethodEvent_ReplacementLength(this.h))
}

func (this *QInputMethodEvent) SetCommitString2(commitString string, replaceFrom int) {
	commitString_ms := miqt_strdupg(commitString)
	defer C.free(commitString_ms)
	C.QInputMethodEvent_SetCommitString2(this.h, (*C.struct_miqt_string)(commitString_ms), (C.int)(replaceFrom))
}

func (this *QInputMethodEvent) SetCommitString3(commitString string, replaceFrom int, replaceLength int) {
	commitString_ms := miqt_strdupg(commitString)
	defer C.free(commitString_ms)
	C.QInputMethodEvent_SetCommitString3(this.h, (*C.struct_miqt_string)(commitString_ms), (C.int)(replaceFrom), (C.int)(replaceLength))
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent) Delete() {
	C.QInputMethodEvent_Delete(this.h)
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
func NewQInputMethodQueryEvent(queries InputMethodQuery) *QInputMethodQueryEvent {
	ret := C.QInputMethodQueryEvent_new((C.int)(queries))
	return newQInputMethodQueryEvent(ret)
}

// NewQInputMethodQueryEvent2 constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent2(param1 *QInputMethodQueryEvent) *QInputMethodQueryEvent {
	ret := C.QInputMethodQueryEvent_new2(param1.cPointer())
	return newQInputMethodQueryEvent(ret)
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
	C.QInputMethodQueryEvent_Delete(this.h)
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
func NewQDropEvent(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDropEvent {
	ret := C.QDropEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers))
	return newQDropEvent(ret)
}

// NewQDropEvent2 constructs a new QDropEvent object.
func NewQDropEvent2(param1 *QDropEvent) *QDropEvent {
	ret := C.QDropEvent_new2(param1.cPointer())
	return newQDropEvent(ret)
}

// NewQDropEvent3 constructs a new QDropEvent object.
func NewQDropEvent3(pos *QPointF, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDropEvent {
	ret := C.QDropEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal))
	return newQDropEvent(ret)
}

func (this *QDropEvent) Pos() *QPoint {
	_ret := C.QDropEvent_Pos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDropEvent) PosF() *QPointF {
	return newQPointF_U(unsafe.Pointer(C.QDropEvent_PosF(this.h)))
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
	return newQObject_U(unsafe.Pointer(C.QDropEvent_Source(this.h)))
}

func (this *QDropEvent) MimeData() *QMimeData {
	return newQMimeData_U(unsafe.Pointer(C.QDropEvent_MimeData(this.h)))
}

// Delete this object from C++ memory.
func (this *QDropEvent) Delete() {
	C.QDropEvent_Delete(this.h)
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
func NewQDragMoveEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers))
	return newQDragMoveEvent(ret)
}

// NewQDragMoveEvent2 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent2(param1 *QDragMoveEvent) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new2(param1.cPointer())
	return newQDragMoveEvent(ret)
}

// NewQDragMoveEvent3 constructs a new QDragMoveEvent object.
func NewQDragMoveEvent3(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier, typeVal QEvent__Type) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new3(pos.cPointer(), (C.int)(actions), data.cPointer(), (C.int)(buttons), (C.int)(modifiers), (C.int)(typeVal))
	return newQDragMoveEvent(ret)
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
	C.QDragMoveEvent_Delete(this.h)
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
func NewQDragEnterEvent(pos *QPoint, actions DropAction, data *QMimeData, buttons MouseButton, modifiers KeyboardModifier) *QDragEnterEvent {
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

// Delete this object from C++ memory.
func (this *QDragEnterEvent) Delete() {
	C.QDragEnterEvent_Delete(this.h)
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

// Delete this object from C++ memory.
func (this *QDragLeaveEvent) Delete() {
	C.QDragLeaveEvent_Delete(this.h)
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
func NewQHelpEvent(typeVal QEvent__Type, pos *QPoint, globalPos *QPoint) *QHelpEvent {
	ret := C.QHelpEvent_new((C.int)(typeVal), pos.cPointer(), globalPos.cPointer())
	return newQHelpEvent(ret)
}

// NewQHelpEvent2 constructs a new QHelpEvent object.
func NewQHelpEvent2(param1 *QHelpEvent) *QHelpEvent {
	ret := C.QHelpEvent_new2(param1.cPointer())
	return newQHelpEvent(ret)
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
	return newQPoint_U(unsafe.Pointer(C.QHelpEvent_Pos(this.h)))
}

func (this *QHelpEvent) GlobalPos() *QPoint {
	return newQPoint_U(unsafe.Pointer(C.QHelpEvent_GlobalPos(this.h)))
}

// Delete this object from C++ memory.
func (this *QHelpEvent) Delete() {
	C.QHelpEvent_Delete(this.h)
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
	tip_ms := miqt_strdupg(tip)
	defer C.free(tip_ms)
	ret := C.QStatusTipEvent_new((*C.struct_miqt_string)(tip_ms))
	return newQStatusTipEvent(ret)
}

// NewQStatusTipEvent2 constructs a new QStatusTipEvent object.
func NewQStatusTipEvent2(param1 *QStatusTipEvent) *QStatusTipEvent {
	ret := C.QStatusTipEvent_new2(param1.cPointer())
	return newQStatusTipEvent(ret)
}

func (this *QStatusTipEvent) Tip() string {
	var _ms *C.struct_miqt_string = C.QStatusTipEvent_Tip(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QStatusTipEvent) Delete() {
	C.QStatusTipEvent_Delete(this.h)
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
	href_ms := miqt_strdupg(href)
	defer C.free(href_ms)
	ret := C.QWhatsThisClickedEvent_new((*C.struct_miqt_string)(href_ms))
	return newQWhatsThisClickedEvent(ret)
}

// NewQWhatsThisClickedEvent2 constructs a new QWhatsThisClickedEvent object.
func NewQWhatsThisClickedEvent2(param1 *QWhatsThisClickedEvent) *QWhatsThisClickedEvent {
	ret := C.QWhatsThisClickedEvent_new2(param1.cPointer())
	return newQWhatsThisClickedEvent(ret)
}

func (this *QWhatsThisClickedEvent) Href() string {
	var _ms *C.struct_miqt_string = C.QWhatsThisClickedEvent_Href(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
	return _ret
}

// Delete this object from C++ memory.
func (this *QWhatsThisClickedEvent) Delete() {
	C.QWhatsThisClickedEvent_Delete(this.h)
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
	return newQAction_U(unsafe.Pointer(C.QActionEvent_Action(this.h)))
}

func (this *QActionEvent) Before() *QAction {
	return newQAction_U(unsafe.Pointer(C.QActionEvent_Before(this.h)))
}

func (this *QActionEvent) OperatorAssign(param1 *QActionEvent) {
	C.QActionEvent_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QActionEvent) Delete() {
	C.QActionEvent_Delete(this.h)
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
	file_ms := miqt_strdupg(file)
	defer C.free(file_ms)
	ret := C.QFileOpenEvent_new((*C.struct_miqt_string)(file_ms))
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
	var _ms *C.struct_miqt_string = C.QFileOpenEvent_File(this.h)
	_ret := C.GoStringN(&_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms))
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
	C.QFileOpenEvent_Delete(this.h)
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
	return (bool)(C.QToolBarChangeEvent_Toggle(this.h))
}

// Delete this object from C++ memory.
func (this *QToolBarChangeEvent) Delete() {
	C.QToolBarChangeEvent_Delete(this.h)
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
	return newQKeySequence_U(unsafe.Pointer(C.QShortcutEvent_Key(this.h)))
}

func (this *QShortcutEvent) ShortcutId() int {
	return (int)(C.QShortcutEvent_ShortcutId(this.h))
}

func (this *QShortcutEvent) IsAmbiguous() bool {
	return (bool)(C.QShortcutEvent_IsAmbiguous(this.h))
}

// Delete this object from C++ memory.
func (this *QShortcutEvent) Delete() {
	C.QShortcutEvent_Delete(this.h)
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
func NewQWindowStateChangeEvent(aOldState WindowState) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new((C.int)(aOldState))
	return newQWindowStateChangeEvent(ret)
}

// NewQWindowStateChangeEvent2 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent2(param1 *QWindowStateChangeEvent) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new2(param1.cPointer())
	return newQWindowStateChangeEvent(ret)
}

// NewQWindowStateChangeEvent3 constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent3(aOldState WindowState, isOverride bool) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new3((C.int)(aOldState), (C.bool)(isOverride))
	return newQWindowStateChangeEvent(ret)
}

func (this *QWindowStateChangeEvent) OldState() WindowState {
	return (WindowState)(C.QWindowStateChangeEvent_OldState(this.h))
}

func (this *QWindowStateChangeEvent) IsOverride() bool {
	return (bool)(C.QWindowStateChangeEvent_IsOverride(this.h))
}

// Delete this object from C++ memory.
func (this *QWindowStateChangeEvent) Delete() {
	C.QWindowStateChangeEvent_Delete(this.h)
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
	C.QPointingDeviceUniqueId_Delete(this.h)
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
func NewQTouchEvent(eventType QEvent__Type) *QTouchEvent {
	ret := C.QTouchEvent_new((C.int)(eventType))
	return newQTouchEvent(ret)
}

// NewQTouchEvent2 constructs a new QTouchEvent object.
func NewQTouchEvent2(param1 *QTouchEvent) *QTouchEvent {
	ret := C.QTouchEvent_new2(param1.cPointer())
	return newQTouchEvent(ret)
}

// NewQTouchEvent3 constructs a new QTouchEvent object.
func NewQTouchEvent3(eventType QEvent__Type, device *QTouchDevice) *QTouchEvent {
	ret := C.QTouchEvent_new3((C.int)(eventType), device.cPointer())
	return newQTouchEvent(ret)
}

// NewQTouchEvent4 constructs a new QTouchEvent object.
func NewQTouchEvent4(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier) *QTouchEvent {
	ret := C.QTouchEvent_new4((C.int)(eventType), device.cPointer(), (C.int)(modifiers))
	return newQTouchEvent(ret)
}

// NewQTouchEvent5 constructs a new QTouchEvent object.
func NewQTouchEvent5(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState) *QTouchEvent {
	ret := C.QTouchEvent_new5((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates))
	return newQTouchEvent(ret)
}

// NewQTouchEvent6 constructs a new QTouchEvent object.
func NewQTouchEvent6(eventType QEvent__Type, device *QTouchDevice, modifiers KeyboardModifier, touchPointStates TouchPointState, touchPoints []QTouchEvent__TouchPoint) *QTouchEvent {
	// For the C ABI, malloc a C array of raw pointers
	touchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(touchPoints))))
	defer C.free(unsafe.Pointer(touchPoints_CArray))
	for i := range touchPoints {
		touchPoints_CArray[i] = touchPoints[i].cPointer()
	}
	touchPoints_ma := &C.struct_miqt_array{len: C.size_t(len(touchPoints)), data: unsafe.Pointer(touchPoints_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(touchPoints_ma))
	ret := C.QTouchEvent_new6((C.int)(eventType), device.cPointer(), (C.int)(modifiers), (C.int)(touchPointStates), touchPoints_ma)
	return newQTouchEvent(ret)
}

func (this *QTouchEvent) Window() *QWindow {
	return newQWindow_U(unsafe.Pointer(C.QTouchEvent_Window(this.h)))
}

func (this *QTouchEvent) Target() *QObject {
	return newQObject_U(unsafe.Pointer(C.QTouchEvent_Target(this.h)))
}

func (this *QTouchEvent) TouchPointStates() TouchPointState {
	return (TouchPointState)(C.QTouchEvent_TouchPointStates(this.h))
}

func (this *QTouchEvent) TouchPoints() []QTouchEvent__TouchPoint {
	var _ma *C.struct_miqt_array = C.QTouchEvent_TouchPoints(this.h)
	_ret := make([]QTouchEvent__TouchPoint, int(_ma.len))
	_outCast := (*[0xffff]*C.QTouchEvent__TouchPoint)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQTouchEvent__TouchPoint(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QTouchEvent) Device() *QTouchDevice {
	return newQTouchDevice_U(unsafe.Pointer(C.QTouchEvent_Device(this.h)))
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
	// For the C ABI, malloc a C array of raw pointers
	atouchPoints_CArray := (*[0xffff]*C.QTouchEvent__TouchPoint)(C.malloc(C.size_t(8 * len(atouchPoints))))
	defer C.free(unsafe.Pointer(atouchPoints_CArray))
	for i := range atouchPoints {
		atouchPoints_CArray[i] = atouchPoints[i].cPointer()
	}
	atouchPoints_ma := &C.struct_miqt_array{len: C.size_t(len(atouchPoints)), data: unsafe.Pointer(atouchPoints_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(atouchPoints_ma))
	C.QTouchEvent_SetTouchPoints(this.h, atouchPoints_ma)
}

func (this *QTouchEvent) SetDevice(adevice *QTouchDevice) {
	C.QTouchEvent_SetDevice(this.h, adevice.cPointer())
}

// Delete this object from C++ memory.
func (this *QTouchEvent) Delete() {
	C.QTouchEvent_Delete(this.h)
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
	C.QScrollPrepareEvent_Delete(this.h)
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
func NewQScrollEvent(contentPos *QPointF, overshoot *QPointF, scrollState QScrollEvent__ScrollState) *QScrollEvent {
	ret := C.QScrollEvent_new(contentPos.cPointer(), overshoot.cPointer(), (C.int)(scrollState))
	return newQScrollEvent(ret)
}

// NewQScrollEvent2 constructs a new QScrollEvent object.
func NewQScrollEvent2(param1 *QScrollEvent) *QScrollEvent {
	ret := C.QScrollEvent_new2(param1.cPointer())
	return newQScrollEvent(ret)
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
	C.QScrollEvent_Delete(this.h)
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
func NewQScreenOrientationChangeEvent(screen *QScreen, orientation ScreenOrientation) *QScreenOrientationChangeEvent {
	ret := C.QScreenOrientationChangeEvent_new(screen.cPointer(), (C.int)(orientation))
	return newQScreenOrientationChangeEvent(ret)
}

// NewQScreenOrientationChangeEvent2 constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent2(param1 *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	ret := C.QScreenOrientationChangeEvent_new2(param1.cPointer())
	return newQScreenOrientationChangeEvent(ret)
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	return newQScreen_U(unsafe.Pointer(C.QScreenOrientationChangeEvent_Screen(this.h)))
}

func (this *QScreenOrientationChangeEvent) Orientation() ScreenOrientation {
	return (ScreenOrientation)(C.QScreenOrientationChangeEvent_Orientation(this.h))
}

// Delete this object from C++ memory.
func (this *QScreenOrientationChangeEvent) Delete() {
	C.QScreenOrientationChangeEvent_Delete(this.h)
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
func NewQApplicationStateChangeEvent(state ApplicationState) *QApplicationStateChangeEvent {
	ret := C.QApplicationStateChangeEvent_new((C.int)(state))
	return newQApplicationStateChangeEvent(ret)
}

// NewQApplicationStateChangeEvent2 constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent2(param1 *QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	ret := C.QApplicationStateChangeEvent_new2(param1.cPointer())
	return newQApplicationStateChangeEvent(ret)
}

func (this *QApplicationStateChangeEvent) ApplicationState() ApplicationState {
	return (ApplicationState)(C.QApplicationStateChangeEvent_ApplicationState(this.h))
}

// Delete this object from C++ memory.
func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_Delete(this.h)
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
func NewQInputMethodEvent__Attribute(typ QInputMethodEvent__AttributeType, s int, l int, val QVariant) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new((C.int)(typ), (C.int)(s), (C.int)(l), val.cPointer())
	return newQInputMethodEvent__Attribute(ret)
}

// NewQInputMethodEvent__Attribute2 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute2(typ QInputMethodEvent__AttributeType, s int, l int) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new2((C.int)(typ), (C.int)(s), (C.int)(l))
	return newQInputMethodEvent__Attribute(ret)
}

// NewQInputMethodEvent__Attribute3 constructs a new QInputMethodEvent::Attribute object.
func NewQInputMethodEvent__Attribute3(param1 *QInputMethodEvent__Attribute) *QInputMethodEvent__Attribute {
	ret := C.QInputMethodEvent__Attribute_new3(param1.cPointer())
	return newQInputMethodEvent__Attribute(ret)
}

func (this *QInputMethodEvent__Attribute) OperatorAssign(param1 *QInputMethodEvent__Attribute) {
	C.QInputMethodEvent__Attribute_OperatorAssign(this.h, param1.cPointer())
}

// Delete this object from C++ memory.
func (this *QInputMethodEvent__Attribute) Delete() {
	C.QInputMethodEvent__Attribute_Delete(this.h)
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
	var _ma *C.struct_miqt_array = C.QTouchEvent__TouchPoint_RawScreenPositions(this.h)
	_ret := make([]QPointF, int(_ma.len))
	_outCast := (*[0xffff]*C.QPointF)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_vv_ret := _outCast[i]
		_vv_goptr := newQPointF(_vv_ret)
		_vv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_vv_goptr
	}
	C.free(unsafe.Pointer(_ma))
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
	// For the C ABI, malloc a C array of raw pointers
	positions_CArray := (*[0xffff]*C.QPointF)(C.malloc(C.size_t(8 * len(positions))))
	defer C.free(unsafe.Pointer(positions_CArray))
	for i := range positions {
		positions_CArray[i] = positions[i].cPointer()
	}
	positions_ma := &C.struct_miqt_array{len: C.size_t(len(positions)), data: unsafe.Pointer(positions_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(positions_ma))
	C.QTouchEvent__TouchPoint_SetRawScreenPositions(this.h, positions_ma)
}

// Delete this object from C++ memory.
func (this *QTouchEvent__TouchPoint) Delete() {
	C.QTouchEvent__TouchPoint_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTouchEvent__TouchPoint) GoGC() {
	runtime.SetFinalizer(this, func(this *QTouchEvent__TouchPoint) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
