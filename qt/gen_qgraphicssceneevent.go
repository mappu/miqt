package qt

/*

#include "gen_qgraphicssceneevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGraphicsSceneContextMenuEvent__Reason int

const (
	QGraphicsSceneContextMenuEvent__Mouse    QGraphicsSceneContextMenuEvent__Reason = 0
	QGraphicsSceneContextMenuEvent__Keyboard QGraphicsSceneContextMenuEvent__Reason = 1
	QGraphicsSceneContextMenuEvent__Other    QGraphicsSceneContextMenuEvent__Reason = 2
)

type QGraphicsSceneEvent struct {
	h *C.QGraphicsSceneEvent
	*QEvent
}

func (this *QGraphicsSceneEvent) cPointer() *C.QGraphicsSceneEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneEvent constructs the type using only CGO pointers.
func newQGraphicsSceneEvent(h *C.QGraphicsSceneEvent) *QGraphicsSceneEvent {
	if h == nil {
		return nil
	}
	var outptr_QEvent *C.QEvent = nil
	C.QGraphicsSceneEvent_virtbase(h, &outptr_QEvent)

	return &QGraphicsSceneEvent{h: h,
		QEvent: newQEvent(outptr_QEvent)}
}

// UnsafeNewQGraphicsSceneEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneEvent(h unsafe.Pointer) *QGraphicsSceneEvent {
	return newQGraphicsSceneEvent((*C.QGraphicsSceneEvent)(h))
}

// NewQGraphicsSceneEvent constructs a new QGraphicsSceneEvent object.
func NewQGraphicsSceneEvent(typeVal QEvent__Type) *QGraphicsSceneEvent {

	return newQGraphicsSceneEvent(C.QGraphicsSceneEvent_new((C.int)(typeVal)))
}

func (this *QGraphicsSceneEvent) Widget() *QWidget {
	return newQWidget(C.QGraphicsSceneEvent_widget(this.h))
}

func (this *QGraphicsSceneEvent) SetWidget(widget *QWidget) {
	C.QGraphicsSceneEvent_setWidget(this.h, widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneEvent) Delete() {
	C.QGraphicsSceneEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneMouseEvent struct {
	h *C.QGraphicsSceneMouseEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneMouseEvent) cPointer() *C.QGraphicsSceneMouseEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneMouseEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneMouseEvent constructs the type using only CGO pointers.
func newQGraphicsSceneMouseEvent(h *C.QGraphicsSceneMouseEvent) *QGraphicsSceneMouseEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneMouseEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneMouseEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneMouseEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneMouseEvent(h unsafe.Pointer) *QGraphicsSceneMouseEvent {
	return newQGraphicsSceneMouseEvent((*C.QGraphicsSceneMouseEvent)(h))
}

// NewQGraphicsSceneMouseEvent constructs a new QGraphicsSceneMouseEvent object.
func NewQGraphicsSceneMouseEvent() *QGraphicsSceneMouseEvent {

	return newQGraphicsSceneMouseEvent(C.QGraphicsSceneMouseEvent_new())
}

// NewQGraphicsSceneMouseEvent2 constructs a new QGraphicsSceneMouseEvent object.
func NewQGraphicsSceneMouseEvent2(typeVal QEvent__Type) *QGraphicsSceneMouseEvent {

	return newQGraphicsSceneMouseEvent(C.QGraphicsSceneMouseEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneMouseEvent) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownPos(button MouseButton) *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_buttonDownPos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownPos(button MouseButton, pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setButtonDownPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScenePos(button MouseButton) *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_buttonDownScenePos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScenePos(button MouseButton, pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setButtonDownScenePos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScreenPos(button MouseButton) *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_buttonDownScreenPos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScreenPos(button MouseButton, pos *QPoint) {
	C.QGraphicsSceneMouseEvent_setButtonDownScreenPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastPos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_setLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_setLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneMouseEvent_buttons(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneMouseEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneMouseEvent) Button() MouseButton {
	return (MouseButton)(C.QGraphicsSceneMouseEvent_button(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButton(button MouseButton) {
	C.QGraphicsSceneMouseEvent_setButton(this.h, (C.int)(button))
}

func (this *QGraphicsSceneMouseEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneMouseEvent_modifiers(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneMouseEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneMouseEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QGraphicsSceneMouseEvent_source(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetSource(source MouseEventSource) {
	C.QGraphicsSceneMouseEvent_setSource(this.h, (C.int)(source))
}

func (this *QGraphicsSceneMouseEvent) Flags() MouseEventFlag {
	return (MouseEventFlag)(C.QGraphicsSceneMouseEvent_flags(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetFlags(flags MouseEventFlag) {
	C.QGraphicsSceneMouseEvent_setFlags(this.h, (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMouseEvent) Delete() {
	C.QGraphicsSceneMouseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneMouseEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneMouseEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneWheelEvent struct {
	h *C.QGraphicsSceneWheelEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneWheelEvent) cPointer() *C.QGraphicsSceneWheelEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneWheelEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneWheelEvent constructs the type using only CGO pointers.
func newQGraphicsSceneWheelEvent(h *C.QGraphicsSceneWheelEvent) *QGraphicsSceneWheelEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneWheelEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneWheelEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneWheelEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneWheelEvent(h unsafe.Pointer) *QGraphicsSceneWheelEvent {
	return newQGraphicsSceneWheelEvent((*C.QGraphicsSceneWheelEvent)(h))
}

// NewQGraphicsSceneWheelEvent constructs a new QGraphicsSceneWheelEvent object.
func NewQGraphicsSceneWheelEvent() *QGraphicsSceneWheelEvent {

	return newQGraphicsSceneWheelEvent(C.QGraphicsSceneWheelEvent_new())
}

// NewQGraphicsSceneWheelEvent2 constructs a new QGraphicsSceneWheelEvent object.
func NewQGraphicsSceneWheelEvent2(typeVal QEvent__Type) *QGraphicsSceneWheelEvent {

	return newQGraphicsSceneWheelEvent(C.QGraphicsSceneWheelEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneWheelEvent) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneWheelEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneWheelEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneWheelEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneWheelEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneWheelEvent_buttons(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneWheelEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneWheelEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneWheelEvent_modifiers(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneWheelEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneWheelEvent) Delta() int {
	return (int)(C.QGraphicsSceneWheelEvent_delta(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetDelta(delta int) {
	C.QGraphicsSceneWheelEvent_setDelta(this.h, (C.int)(delta))
}

func (this *QGraphicsSceneWheelEvent) Orientation() Orientation {
	return (Orientation)(C.QGraphicsSceneWheelEvent_orientation(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetOrientation(orientation Orientation) {
	C.QGraphicsSceneWheelEvent_setOrientation(this.h, (C.int)(orientation))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneWheelEvent) Delete() {
	C.QGraphicsSceneWheelEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneWheelEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneWheelEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneContextMenuEvent struct {
	h *C.QGraphicsSceneContextMenuEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneContextMenuEvent) cPointer() *C.QGraphicsSceneContextMenuEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneContextMenuEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneContextMenuEvent constructs the type using only CGO pointers.
func newQGraphicsSceneContextMenuEvent(h *C.QGraphicsSceneContextMenuEvent) *QGraphicsSceneContextMenuEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneContextMenuEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneContextMenuEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneContextMenuEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneContextMenuEvent(h unsafe.Pointer) *QGraphicsSceneContextMenuEvent {
	return newQGraphicsSceneContextMenuEvent((*C.QGraphicsSceneContextMenuEvent)(h))
}

// NewQGraphicsSceneContextMenuEvent constructs a new QGraphicsSceneContextMenuEvent object.
func NewQGraphicsSceneContextMenuEvent() *QGraphicsSceneContextMenuEvent {

	return newQGraphicsSceneContextMenuEvent(C.QGraphicsSceneContextMenuEvent_new())
}

// NewQGraphicsSceneContextMenuEvent2 constructs a new QGraphicsSceneContextMenuEvent object.
func NewQGraphicsSceneContextMenuEvent2(typeVal QEvent__Type) *QGraphicsSceneContextMenuEvent {

	return newQGraphicsSceneContextMenuEvent(C.QGraphicsSceneContextMenuEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneContextMenuEvent) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneContextMenuEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneContextMenuEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneContextMenuEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneContextMenuEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneContextMenuEvent_modifiers(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneContextMenuEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneContextMenuEvent) Reason() QGraphicsSceneContextMenuEvent__Reason {
	return (QGraphicsSceneContextMenuEvent__Reason)(C.QGraphicsSceneContextMenuEvent_reason(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetReason(reason QGraphicsSceneContextMenuEvent__Reason) {
	C.QGraphicsSceneContextMenuEvent_setReason(this.h, (C.int)(reason))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneContextMenuEvent) Delete() {
	C.QGraphicsSceneContextMenuEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneContextMenuEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneContextMenuEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneHoverEvent struct {
	h *C.QGraphicsSceneHoverEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneHoverEvent) cPointer() *C.QGraphicsSceneHoverEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneHoverEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneHoverEvent constructs the type using only CGO pointers.
func newQGraphicsSceneHoverEvent(h *C.QGraphicsSceneHoverEvent) *QGraphicsSceneHoverEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneHoverEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneHoverEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneHoverEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneHoverEvent(h unsafe.Pointer) *QGraphicsSceneHoverEvent {
	return newQGraphicsSceneHoverEvent((*C.QGraphicsSceneHoverEvent)(h))
}

// NewQGraphicsSceneHoverEvent constructs a new QGraphicsSceneHoverEvent object.
func NewQGraphicsSceneHoverEvent() *QGraphicsSceneHoverEvent {

	return newQGraphicsSceneHoverEvent(C.QGraphicsSceneHoverEvent_new())
}

// NewQGraphicsSceneHoverEvent2 constructs a new QGraphicsSceneHoverEvent object.
func NewQGraphicsSceneHoverEvent2(typeVal QEvent__Type) *QGraphicsSceneHoverEvent {

	return newQGraphicsSceneHoverEvent(C.QGraphicsSceneHoverEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneHoverEvent) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneHoverEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastPos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_setLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_setLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneHoverEvent_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_setLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneHoverEvent_modifiers(this.h))
}

func (this *QGraphicsSceneHoverEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneHoverEvent_setModifiers(this.h, (C.int)(modifiers))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHoverEvent) Delete() {
	C.QGraphicsSceneHoverEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneHoverEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneHoverEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneHelpEvent struct {
	h *C.QGraphicsSceneHelpEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneHelpEvent) cPointer() *C.QGraphicsSceneHelpEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneHelpEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneHelpEvent constructs the type using only CGO pointers.
func newQGraphicsSceneHelpEvent(h *C.QGraphicsSceneHelpEvent) *QGraphicsSceneHelpEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneHelpEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneHelpEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneHelpEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneHelpEvent(h unsafe.Pointer) *QGraphicsSceneHelpEvent {
	return newQGraphicsSceneHelpEvent((*C.QGraphicsSceneHelpEvent)(h))
}

// NewQGraphicsSceneHelpEvent constructs a new QGraphicsSceneHelpEvent object.
func NewQGraphicsSceneHelpEvent() *QGraphicsSceneHelpEvent {

	return newQGraphicsSceneHelpEvent(C.QGraphicsSceneHelpEvent_new())
}

// NewQGraphicsSceneHelpEvent2 constructs a new QGraphicsSceneHelpEvent object.
func NewQGraphicsSceneHelpEvent2(typeVal QEvent__Type) *QGraphicsSceneHelpEvent {

	return newQGraphicsSceneHelpEvent(C.QGraphicsSceneHelpEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneHelpEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneHelpEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHelpEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHelpEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneHelpEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHelpEvent_setScreenPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHelpEvent) Delete() {
	C.QGraphicsSceneHelpEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneHelpEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneHelpEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneDragDropEvent struct {
	h *C.QGraphicsSceneDragDropEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneDragDropEvent) cPointer() *C.QGraphicsSceneDragDropEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneDragDropEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneDragDropEvent constructs the type using only CGO pointers.
func newQGraphicsSceneDragDropEvent(h *C.QGraphicsSceneDragDropEvent) *QGraphicsSceneDragDropEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneDragDropEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneDragDropEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneDragDropEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneDragDropEvent(h unsafe.Pointer) *QGraphicsSceneDragDropEvent {
	return newQGraphicsSceneDragDropEvent((*C.QGraphicsSceneDragDropEvent)(h))
}

// NewQGraphicsSceneDragDropEvent constructs a new QGraphicsSceneDragDropEvent object.
func NewQGraphicsSceneDragDropEvent() *QGraphicsSceneDragDropEvent {

	return newQGraphicsSceneDragDropEvent(C.QGraphicsSceneDragDropEvent_new())
}

// NewQGraphicsSceneDragDropEvent2 constructs a new QGraphicsSceneDragDropEvent object.
func NewQGraphicsSceneDragDropEvent2(typeVal QEvent__Type) *QGraphicsSceneDragDropEvent {

	return newQGraphicsSceneDragDropEvent(C.QGraphicsSceneDragDropEvent_new2((C.int)(typeVal)))
}

func (this *QGraphicsSceneDragDropEvent) Pos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneDragDropEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScenePos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneDragDropEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScreenPos() *QPoint {
	_goptr := newQPoint(C.QGraphicsSceneDragDropEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneDragDropEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneDragDropEvent_buttons(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneDragDropEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneDragDropEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneDragDropEvent_modifiers(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneDragDropEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneDragDropEvent) PossibleActions() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_possibleActions(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetPossibleActions(actions DropAction) {
	C.QGraphicsSceneDragDropEvent_setPossibleActions(this.h, (C.int)(actions))
}

func (this *QGraphicsSceneDragDropEvent) ProposedAction() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_proposedAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetProposedAction(action DropAction) {
	C.QGraphicsSceneDragDropEvent_setProposedAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) AcceptProposedAction() {
	C.QGraphicsSceneDragDropEvent_acceptProposedAction(this.h)
}

func (this *QGraphicsSceneDragDropEvent) DropAction() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_dropAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetDropAction(action DropAction) {
	C.QGraphicsSceneDragDropEvent_setDropAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) Source() *QWidget {
	return newQWidget(C.QGraphicsSceneDragDropEvent_source(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetSource(source *QWidget) {
	C.QGraphicsSceneDragDropEvent_setSource(this.h, source.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) MimeData() *QMimeData {
	return newQMimeData(C.QGraphicsSceneDragDropEvent_mimeData(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetMimeData(data *QMimeData) {
	C.QGraphicsSceneDragDropEvent_setMimeData(this.h, data.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneDragDropEvent) Delete() {
	C.QGraphicsSceneDragDropEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneDragDropEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneDragDropEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneResizeEvent struct {
	h *C.QGraphicsSceneResizeEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneResizeEvent) cPointer() *C.QGraphicsSceneResizeEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneResizeEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneResizeEvent constructs the type using only CGO pointers.
func newQGraphicsSceneResizeEvent(h *C.QGraphicsSceneResizeEvent) *QGraphicsSceneResizeEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneResizeEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneResizeEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneResizeEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneResizeEvent(h unsafe.Pointer) *QGraphicsSceneResizeEvent {
	return newQGraphicsSceneResizeEvent((*C.QGraphicsSceneResizeEvent)(h))
}

// NewQGraphicsSceneResizeEvent constructs a new QGraphicsSceneResizeEvent object.
func NewQGraphicsSceneResizeEvent() *QGraphicsSceneResizeEvent {

	return newQGraphicsSceneResizeEvent(C.QGraphicsSceneResizeEvent_new())
}

func (this *QGraphicsSceneResizeEvent) OldSize() *QSizeF {
	_goptr := newQSizeF(C.QGraphicsSceneResizeEvent_oldSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetOldSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_setOldSize(this.h, size.cPointer())
}

func (this *QGraphicsSceneResizeEvent) NewSize() *QSizeF {
	_goptr := newQSizeF(C.QGraphicsSceneResizeEvent_newSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetNewSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_setNewSize(this.h, size.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneResizeEvent) Delete() {
	C.QGraphicsSceneResizeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneResizeEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneResizeEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QGraphicsSceneMoveEvent struct {
	h *C.QGraphicsSceneMoveEvent
	*QGraphicsSceneEvent
}

func (this *QGraphicsSceneMoveEvent) cPointer() *C.QGraphicsSceneMoveEvent {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSceneMoveEvent) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSceneMoveEvent constructs the type using only CGO pointers.
func newQGraphicsSceneMoveEvent(h *C.QGraphicsSceneMoveEvent) *QGraphicsSceneMoveEvent {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsSceneEvent *C.QGraphicsSceneEvent = nil
	C.QGraphicsSceneMoveEvent_virtbase(h, &outptr_QGraphicsSceneEvent)

	return &QGraphicsSceneMoveEvent{h: h,
		QGraphicsSceneEvent: newQGraphicsSceneEvent(outptr_QGraphicsSceneEvent)}
}

// UnsafeNewQGraphicsSceneMoveEvent constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSceneMoveEvent(h unsafe.Pointer) *QGraphicsSceneMoveEvent {
	return newQGraphicsSceneMoveEvent((*C.QGraphicsSceneMoveEvent)(h))
}

// NewQGraphicsSceneMoveEvent constructs a new QGraphicsSceneMoveEvent object.
func NewQGraphicsSceneMoveEvent() *QGraphicsSceneMoveEvent {

	return newQGraphicsSceneMoveEvent(C.QGraphicsSceneMoveEvent_new())
}

func (this *QGraphicsSceneMoveEvent) OldPos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMoveEvent_oldPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetOldPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_setOldPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMoveEvent) NewPos() *QPointF {
	_goptr := newQPointF(C.QGraphicsSceneMoveEvent_newPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetNewPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_setNewPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMoveEvent) Delete() {
	C.QGraphicsSceneMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
