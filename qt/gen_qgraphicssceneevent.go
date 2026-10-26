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
	h  *C.QGraphicsSceneEvent
	gc *[1]unsafe.Pointer
	*QEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	return newQWidget(C.QGraphicsSceneEvent_widget(this.h))
}

func (this *QGraphicsSceneEvent) SetWidget(widget *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(widget)
	C.QGraphicsSceneEvent_setWidget(this.h, widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneEvent) Delete() {
	C.QGraphicsSceneEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneEvent_delete((*C.QGraphicsSceneEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneMouseEvent struct {
	h  *C.QGraphicsSceneMouseEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneMouseEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownPos(button MouseButton) *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_buttonDownPos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownPos(button MouseButton, pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setButtonDownPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScenePos(button MouseButton) *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_buttonDownScenePos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScenePos(button MouseButton, pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setButtonDownScenePos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScreenPos(button MouseButton) *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_buttonDownScreenPos(this.h, (C.int)(button)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScreenPos(button MouseButton, pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setButtonDownScreenPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMouseEvent_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneMouseEvent_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMouseEvent_setLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QGraphicsSceneMouseEvent_buttons(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButtons(buttons MouseButton) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneMouseEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneMouseEvent) Button() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QGraphicsSceneMouseEvent_button(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButton(button MouseButton) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneMouseEvent_setButton(this.h, (C.int)(button))
}

func (this *QGraphicsSceneMouseEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QGraphicsSceneMouseEvent_modifiers(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetModifiers(modifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneMouseEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneMouseEvent) Source() MouseEventSource {
	defer runtime.KeepAlive(this)
	return (MouseEventSource)(C.QGraphicsSceneMouseEvent_source(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetSource(source MouseEventSource) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneMouseEvent_setSource(this.h, (C.int)(source))
}

func (this *QGraphicsSceneMouseEvent) Flags() MouseEventFlag {
	defer runtime.KeepAlive(this)
	return (MouseEventFlag)(C.QGraphicsSceneMouseEvent_flags(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetFlags(flags MouseEventFlag) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneMouseEvent_setFlags(this.h, (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMouseEvent) Delete() {
	C.QGraphicsSceneMouseEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneMouseEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneMouseEvent_delete((*C.QGraphicsSceneMouseEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneWheelEvent struct {
	h  *C.QGraphicsSceneWheelEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneWheelEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneWheelEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneWheelEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneWheelEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneWheelEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneWheelEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneWheelEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QGraphicsSceneWheelEvent_buttons(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetButtons(buttons MouseButton) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneWheelEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneWheelEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QGraphicsSceneWheelEvent_modifiers(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetModifiers(modifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneWheelEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneWheelEvent) Delta() int {
	defer runtime.KeepAlive(this)
	return (int)(C.QGraphicsSceneWheelEvent_delta(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetDelta(delta int) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneWheelEvent_setDelta(this.h, (C.int)(delta))
}

func (this *QGraphicsSceneWheelEvent) Orientation() Orientation {
	defer runtime.KeepAlive(this)
	return (Orientation)(C.QGraphicsSceneWheelEvent_orientation(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetOrientation(orientation Orientation) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneWheelEvent_setOrientation(this.h, (C.int)(orientation))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneWheelEvent) Delete() {
	C.QGraphicsSceneWheelEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneWheelEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneWheelEvent_delete((*C.QGraphicsSceneWheelEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneContextMenuEvent struct {
	h  *C.QGraphicsSceneContextMenuEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneContextMenuEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneContextMenuEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneContextMenuEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneContextMenuEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneContextMenuEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneContextMenuEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneContextMenuEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QGraphicsSceneContextMenuEvent_modifiers(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetModifiers(modifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneContextMenuEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneContextMenuEvent) Reason() QGraphicsSceneContextMenuEvent__Reason {
	defer runtime.KeepAlive(this)
	return (QGraphicsSceneContextMenuEvent__Reason)(C.QGraphicsSceneContextMenuEvent_reason(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetReason(reason QGraphicsSceneContextMenuEvent__Reason) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneContextMenuEvent_setReason(this.h, (C.int)(reason))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneContextMenuEvent) Delete() {
	C.QGraphicsSceneContextMenuEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneContextMenuEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneContextMenuEvent_delete((*C.QGraphicsSceneContextMenuEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneHoverEvent struct {
	h  *C.QGraphicsSceneHoverEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneHoverEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneHoverEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_lastPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneHoverEvent_lastScenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneHoverEvent_lastScreenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHoverEvent_setLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QGraphicsSceneHoverEvent_modifiers(this.h))
}

func (this *QGraphicsSceneHoverEvent) SetModifiers(modifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneHoverEvent_setModifiers(this.h, (C.int)(modifiers))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHoverEvent) Delete() {
	C.QGraphicsSceneHoverEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneHoverEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneHoverEvent_delete((*C.QGraphicsSceneHoverEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneHelpEvent struct {
	h  *C.QGraphicsSceneHelpEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneHelpEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneHelpEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHelpEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHelpEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneHelpEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneHelpEvent_setScreenPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHelpEvent) Delete() {
	C.QGraphicsSceneHelpEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneHelpEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneHelpEvent_delete((*C.QGraphicsSceneHelpEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneDragDropEvent struct {
	h  *C.QGraphicsSceneDragDropEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneDragDropEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneDragDropEvent_pos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneDragDropEvent_setPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScenePos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneDragDropEvent_scenePos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScenePos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneDragDropEvent_setScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScreenPos() *QPoint {
	defer runtime.KeepAlive(this)
	_goptr := newQPoint(C.QGraphicsSceneDragDropEvent_screenPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScreenPos(pos *QPoint) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneDragDropEvent_setScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) Buttons() MouseButton {
	defer runtime.KeepAlive(this)
	return (MouseButton)(C.QGraphicsSceneDragDropEvent_buttons(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetButtons(buttons MouseButton) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_setButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneDragDropEvent) Modifiers() KeyboardModifier {
	defer runtime.KeepAlive(this)
	return (KeyboardModifier)(C.QGraphicsSceneDragDropEvent_modifiers(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetModifiers(modifiers KeyboardModifier) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_setModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneDragDropEvent) PossibleActions() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QGraphicsSceneDragDropEvent_possibleActions(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetPossibleActions(actions DropAction) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_setPossibleActions(this.h, (C.int)(actions))
}

func (this *QGraphicsSceneDragDropEvent) ProposedAction() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QGraphicsSceneDragDropEvent_proposedAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetProposedAction(action DropAction) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_setProposedAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) AcceptProposedAction() {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_acceptProposedAction(this.h)
}

func (this *QGraphicsSceneDragDropEvent) DropAction() DropAction {
	defer runtime.KeepAlive(this)
	return (DropAction)(C.QGraphicsSceneDragDropEvent_dropAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetDropAction(action DropAction) {
	defer runtime.KeepAlive(this)
	C.QGraphicsSceneDragDropEvent_setDropAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) Source() *QWidget {
	defer runtime.KeepAlive(this)
	return newQWidget(C.QGraphicsSceneDragDropEvent_source(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetSource(source *QWidget) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(source)
	C.QGraphicsSceneDragDropEvent_setSource(this.h, source.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) MimeData() *QMimeData {
	defer runtime.KeepAlive(this)
	return newQMimeData(C.QGraphicsSceneDragDropEvent_mimeData(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetMimeData(data *QMimeData) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(data)
	C.QGraphicsSceneDragDropEvent_setMimeData(this.h, data.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneDragDropEvent) Delete() {
	C.QGraphicsSceneDragDropEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneDragDropEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneDragDropEvent_delete((*C.QGraphicsSceneDragDropEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneResizeEvent struct {
	h  *C.QGraphicsSceneResizeEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneResizeEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsSceneResizeEvent_oldSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetOldSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QGraphicsSceneResizeEvent_setOldSize(this.h, size.cPointer())
}

func (this *QGraphicsSceneResizeEvent) NewSize() *QSizeF {
	defer runtime.KeepAlive(this)
	_goptr := newQSizeF(C.QGraphicsSceneResizeEvent_newSize(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetNewSize(size *QSizeF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(size)
	C.QGraphicsSceneResizeEvent_setNewSize(this.h, size.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneResizeEvent) Delete() {
	C.QGraphicsSceneResizeEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneResizeEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneResizeEvent_delete((*C.QGraphicsSceneResizeEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}

type QGraphicsSceneMoveEvent struct {
	h  *C.QGraphicsSceneMoveEvent
	gc *[1]unsafe.Pointer
	*QGraphicsSceneEvent
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGraphicsSceneMoveEvent) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
	this.QGraphicsSceneEvent.miqtSetGC(gc)
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
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMoveEvent_oldPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetOldPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMoveEvent_setOldPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMoveEvent) NewPos() *QPointF {
	defer runtime.KeepAlive(this)
	_goptr := newQPointF(C.QGraphicsSceneMoveEvent_newPos(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetNewPos(pos *QPointF) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(pos)
	C.QGraphicsSceneMoveEvent_setNewPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMoveEvent) Delete() {
	C.QGraphicsSceneMoveEvent_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGraphicsSceneMoveEvent) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGraphicsSceneMoveEvent_delete((*C.QGraphicsSceneMoveEvent)(gc[0]))
	})
	this.miqtSetGC(gc)
}
