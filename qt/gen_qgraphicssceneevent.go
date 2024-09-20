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
	QGraphicsSceneContextMenuEvent__Reason__Mouse    QGraphicsSceneContextMenuEvent__Reason = 0
	QGraphicsSceneContextMenuEvent__Reason__Keyboard QGraphicsSceneContextMenuEvent__Reason = 1
	QGraphicsSceneContextMenuEvent__Reason__Other    QGraphicsSceneContextMenuEvent__Reason = 2
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

func newQGraphicsSceneEvent(h *C.QGraphicsSceneEvent) *QGraphicsSceneEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneEvent_U(h unsafe.Pointer) *QGraphicsSceneEvent {
	return newQGraphicsSceneEvent((*C.QGraphicsSceneEvent)(h))
}

// NewQGraphicsSceneEvent constructs a new QGraphicsSceneEvent object.
func NewQGraphicsSceneEvent(typeVal QEvent__Type) *QGraphicsSceneEvent {
	ret := C.QGraphicsSceneEvent_new((C.int)(typeVal))
	return newQGraphicsSceneEvent(ret)
}

func (this *QGraphicsSceneEvent) Widget() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QGraphicsSceneEvent_Widget(this.h)))
}

func (this *QGraphicsSceneEvent) SetWidget(widget *QWidget) {
	C.QGraphicsSceneEvent_SetWidget(this.h, widget.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneEvent) Delete() {
	C.QGraphicsSceneEvent_Delete(this.h)
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

func newQGraphicsSceneMouseEvent(h *C.QGraphicsSceneMouseEvent) *QGraphicsSceneMouseEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneMouseEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneMouseEvent_U(h unsafe.Pointer) *QGraphicsSceneMouseEvent {
	return newQGraphicsSceneMouseEvent((*C.QGraphicsSceneMouseEvent)(h))
}

// NewQGraphicsSceneMouseEvent constructs a new QGraphicsSceneMouseEvent object.
func NewQGraphicsSceneMouseEvent() *QGraphicsSceneMouseEvent {
	ret := C.QGraphicsSceneMouseEvent_new()
	return newQGraphicsSceneMouseEvent(ret)
}

// NewQGraphicsSceneMouseEvent2 constructs a new QGraphicsSceneMouseEvent object.
func NewQGraphicsSceneMouseEvent2(typeVal QEvent__Type) *QGraphicsSceneMouseEvent {
	ret := C.QGraphicsSceneMouseEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneMouseEvent(ret)
}

func (this *QGraphicsSceneMouseEvent) Pos() *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneMouseEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownPos(button MouseButton) *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_ButtonDownPos(this.h, (C.int)(button))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownPos(button MouseButton, pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetButtonDownPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScenePos(button MouseButton) *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_ButtonDownScenePos(this.h, (C.int)(button))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScenePos(button MouseButton, pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetButtonDownScenePos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ButtonDownScreenPos(button MouseButton) *QPoint {
	_ret := C.QGraphicsSceneMouseEvent_ButtonDownScreenPos(this.h, (C.int)(button))
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetButtonDownScreenPos(button MouseButton, pos *QPoint) {
	C.QGraphicsSceneMouseEvent_SetButtonDownScreenPos(this.h, (C.int)(button), pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastPos() *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_LastPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScenePos() *QPointF {
	_ret := C.QGraphicsSceneMouseEvent_LastScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScreenPos() *QPoint {
	_ret := C.QGraphicsSceneMouseEvent_LastScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMouseEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_SetLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneMouseEvent_Buttons(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneMouseEvent_SetButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneMouseEvent) Button() MouseButton {
	return (MouseButton)(C.QGraphicsSceneMouseEvent_Button(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetButton(button MouseButton) {
	C.QGraphicsSceneMouseEvent_SetButton(this.h, (C.int)(button))
}

func (this *QGraphicsSceneMouseEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneMouseEvent_Modifiers(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneMouseEvent_SetModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneMouseEvent) Source() MouseEventSource {
	return (MouseEventSource)(C.QGraphicsSceneMouseEvent_Source(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetSource(source MouseEventSource) {
	C.QGraphicsSceneMouseEvent_SetSource(this.h, (C.int)(source))
}

func (this *QGraphicsSceneMouseEvent) Flags() MouseEventFlag {
	return (MouseEventFlag)(C.QGraphicsSceneMouseEvent_Flags(this.h))
}

func (this *QGraphicsSceneMouseEvent) SetFlags(flags MouseEventFlag) {
	C.QGraphicsSceneMouseEvent_SetFlags(this.h, (C.int)(flags))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMouseEvent) Delete() {
	C.QGraphicsSceneMouseEvent_Delete(this.h)
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

func newQGraphicsSceneWheelEvent(h *C.QGraphicsSceneWheelEvent) *QGraphicsSceneWheelEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneWheelEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneWheelEvent_U(h unsafe.Pointer) *QGraphicsSceneWheelEvent {
	return newQGraphicsSceneWheelEvent((*C.QGraphicsSceneWheelEvent)(h))
}

// NewQGraphicsSceneWheelEvent constructs a new QGraphicsSceneWheelEvent object.
func NewQGraphicsSceneWheelEvent() *QGraphicsSceneWheelEvent {
	ret := C.QGraphicsSceneWheelEvent_new()
	return newQGraphicsSceneWheelEvent(ret)
}

// NewQGraphicsSceneWheelEvent2 constructs a new QGraphicsSceneWheelEvent object.
func NewQGraphicsSceneWheelEvent2(typeVal QEvent__Type) *QGraphicsSceneWheelEvent {
	ret := C.QGraphicsSceneWheelEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneWheelEvent(ret)
}

func (this *QGraphicsSceneWheelEvent) Pos() *QPointF {
	_ret := C.QGraphicsSceneWheelEvent_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneWheelEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneWheelEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneWheelEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneWheelEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneWheelEvent_Buttons(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneWheelEvent_SetButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneWheelEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneWheelEvent_Modifiers(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneWheelEvent_SetModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneWheelEvent) Delta() int {
	return (int)(C.QGraphicsSceneWheelEvent_Delta(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetDelta(delta int) {
	C.QGraphicsSceneWheelEvent_SetDelta(this.h, (C.int)(delta))
}

func (this *QGraphicsSceneWheelEvent) Orientation() Orientation {
	return (Orientation)(C.QGraphicsSceneWheelEvent_Orientation(this.h))
}

func (this *QGraphicsSceneWheelEvent) SetOrientation(orientation Orientation) {
	C.QGraphicsSceneWheelEvent_SetOrientation(this.h, (C.int)(orientation))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneWheelEvent) Delete() {
	C.QGraphicsSceneWheelEvent_Delete(this.h)
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

func newQGraphicsSceneContextMenuEvent(h *C.QGraphicsSceneContextMenuEvent) *QGraphicsSceneContextMenuEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneContextMenuEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneContextMenuEvent_U(h unsafe.Pointer) *QGraphicsSceneContextMenuEvent {
	return newQGraphicsSceneContextMenuEvent((*C.QGraphicsSceneContextMenuEvent)(h))
}

// NewQGraphicsSceneContextMenuEvent constructs a new QGraphicsSceneContextMenuEvent object.
func NewQGraphicsSceneContextMenuEvent() *QGraphicsSceneContextMenuEvent {
	ret := C.QGraphicsSceneContextMenuEvent_new()
	return newQGraphicsSceneContextMenuEvent(ret)
}

// NewQGraphicsSceneContextMenuEvent2 constructs a new QGraphicsSceneContextMenuEvent object.
func NewQGraphicsSceneContextMenuEvent2(typeVal QEvent__Type) *QGraphicsSceneContextMenuEvent {
	ret := C.QGraphicsSceneContextMenuEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneContextMenuEvent(ret)
}

func (this *QGraphicsSceneContextMenuEvent) Pos() *QPointF {
	_ret := C.QGraphicsSceneContextMenuEvent_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneContextMenuEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneContextMenuEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneContextMenuEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneContextMenuEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneContextMenuEvent_Modifiers(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneContextMenuEvent_SetModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneContextMenuEvent) Reason() QGraphicsSceneContextMenuEvent__Reason {
	return (QGraphicsSceneContextMenuEvent__Reason)(C.QGraphicsSceneContextMenuEvent_Reason(this.h))
}

func (this *QGraphicsSceneContextMenuEvent) SetReason(reason QGraphicsSceneContextMenuEvent__Reason) {
	C.QGraphicsSceneContextMenuEvent_SetReason(this.h, (C.int)(reason))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneContextMenuEvent) Delete() {
	C.QGraphicsSceneContextMenuEvent_Delete(this.h)
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

func newQGraphicsSceneHoverEvent(h *C.QGraphicsSceneHoverEvent) *QGraphicsSceneHoverEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneHoverEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneHoverEvent_U(h unsafe.Pointer) *QGraphicsSceneHoverEvent {
	return newQGraphicsSceneHoverEvent((*C.QGraphicsSceneHoverEvent)(h))
}

// NewQGraphicsSceneHoverEvent constructs a new QGraphicsSceneHoverEvent object.
func NewQGraphicsSceneHoverEvent() *QGraphicsSceneHoverEvent {
	ret := C.QGraphicsSceneHoverEvent_new()
	return newQGraphicsSceneHoverEvent(ret)
}

// NewQGraphicsSceneHoverEvent2 constructs a new QGraphicsSceneHoverEvent object.
func NewQGraphicsSceneHoverEvent2(typeVal QEvent__Type) *QGraphicsSceneHoverEvent {
	ret := C.QGraphicsSceneHoverEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneHoverEvent(ret)
}

func (this *QGraphicsSceneHoverEvent) Pos() *QPointF {
	_ret := C.QGraphicsSceneHoverEvent_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneHoverEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneHoverEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastPos() *QPointF {
	_ret := C.QGraphicsSceneHoverEvent_LastPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScenePos() *QPointF {
	_ret := C.QGraphicsSceneHoverEvent_LastScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScreenPos() *QPoint {
	_ret := C.QGraphicsSceneHoverEvent_LastScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHoverEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_SetLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneHoverEvent_Modifiers(this.h))
}

func (this *QGraphicsSceneHoverEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneHoverEvent_SetModifiers(this.h, (C.int)(modifiers))
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHoverEvent) Delete() {
	C.QGraphicsSceneHoverEvent_Delete(this.h)
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

func newQGraphicsSceneHelpEvent(h *C.QGraphicsSceneHelpEvent) *QGraphicsSceneHelpEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneHelpEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneHelpEvent_U(h unsafe.Pointer) *QGraphicsSceneHelpEvent {
	return newQGraphicsSceneHelpEvent((*C.QGraphicsSceneHelpEvent)(h))
}

// NewQGraphicsSceneHelpEvent constructs a new QGraphicsSceneHelpEvent object.
func NewQGraphicsSceneHelpEvent() *QGraphicsSceneHelpEvent {
	ret := C.QGraphicsSceneHelpEvent_new()
	return newQGraphicsSceneHelpEvent(ret)
}

// NewQGraphicsSceneHelpEvent2 constructs a new QGraphicsSceneHelpEvent object.
func NewQGraphicsSceneHelpEvent2(typeVal QEvent__Type) *QGraphicsSceneHelpEvent {
	ret := C.QGraphicsSceneHelpEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneHelpEvent(ret)
}

func (this *QGraphicsSceneHelpEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneHelpEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHelpEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHelpEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneHelpEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneHelpEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHelpEvent_SetScreenPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneHelpEvent) Delete() {
	C.QGraphicsSceneHelpEvent_Delete(this.h)
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

func newQGraphicsSceneDragDropEvent(h *C.QGraphicsSceneDragDropEvent) *QGraphicsSceneDragDropEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneDragDropEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneDragDropEvent_U(h unsafe.Pointer) *QGraphicsSceneDragDropEvent {
	return newQGraphicsSceneDragDropEvent((*C.QGraphicsSceneDragDropEvent)(h))
}

// NewQGraphicsSceneDragDropEvent constructs a new QGraphicsSceneDragDropEvent object.
func NewQGraphicsSceneDragDropEvent() *QGraphicsSceneDragDropEvent {
	ret := C.QGraphicsSceneDragDropEvent_new()
	return newQGraphicsSceneDragDropEvent(ret)
}

// NewQGraphicsSceneDragDropEvent2 constructs a new QGraphicsSceneDragDropEvent object.
func NewQGraphicsSceneDragDropEvent2(typeVal QEvent__Type) *QGraphicsSceneDragDropEvent {
	ret := C.QGraphicsSceneDragDropEvent_new2((C.int)(typeVal))
	return newQGraphicsSceneDragDropEvent(ret)
}

func (this *QGraphicsSceneDragDropEvent) Pos() *QPointF {
	_ret := C.QGraphicsSceneDragDropEvent_Pos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScenePos() *QPointF {
	_ret := C.QGraphicsSceneDragDropEvent_ScenePos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScreenPos() *QPoint {
	_ret := C.QGraphicsSceneDragDropEvent_ScreenPos(this.h)
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneDragDropEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneDragDropEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) Buttons() MouseButton {
	return (MouseButton)(C.QGraphicsSceneDragDropEvent_Buttons(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetButtons(buttons MouseButton) {
	C.QGraphicsSceneDragDropEvent_SetButtons(this.h, (C.int)(buttons))
}

func (this *QGraphicsSceneDragDropEvent) Modifiers() KeyboardModifier {
	return (KeyboardModifier)(C.QGraphicsSceneDragDropEvent_Modifiers(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetModifiers(modifiers KeyboardModifier) {
	C.QGraphicsSceneDragDropEvent_SetModifiers(this.h, (C.int)(modifiers))
}

func (this *QGraphicsSceneDragDropEvent) PossibleActions() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_PossibleActions(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetPossibleActions(actions DropAction) {
	C.QGraphicsSceneDragDropEvent_SetPossibleActions(this.h, (C.int)(actions))
}

func (this *QGraphicsSceneDragDropEvent) ProposedAction() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_ProposedAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetProposedAction(action DropAction) {
	C.QGraphicsSceneDragDropEvent_SetProposedAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) AcceptProposedAction() {
	C.QGraphicsSceneDragDropEvent_AcceptProposedAction(this.h)
}

func (this *QGraphicsSceneDragDropEvent) DropAction() DropAction {
	return (DropAction)(C.QGraphicsSceneDragDropEvent_DropAction(this.h))
}

func (this *QGraphicsSceneDragDropEvent) SetDropAction(action DropAction) {
	C.QGraphicsSceneDragDropEvent_SetDropAction(this.h, (C.int)(action))
}

func (this *QGraphicsSceneDragDropEvent) Source() *QWidget {
	return newQWidget_U(unsafe.Pointer(C.QGraphicsSceneDragDropEvent_Source(this.h)))
}

func (this *QGraphicsSceneDragDropEvent) SetSource(source *QWidget) {
	C.QGraphicsSceneDragDropEvent_SetSource(this.h, source.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) MimeData() *QMimeData {
	return newQMimeData_U(unsafe.Pointer(C.QGraphicsSceneDragDropEvent_MimeData(this.h)))
}

func (this *QGraphicsSceneDragDropEvent) SetMimeData(data *QMimeData) {
	C.QGraphicsSceneDragDropEvent_SetMimeData(this.h, data.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneDragDropEvent) Delete() {
	C.QGraphicsSceneDragDropEvent_Delete(this.h)
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

func newQGraphicsSceneResizeEvent(h *C.QGraphicsSceneResizeEvent) *QGraphicsSceneResizeEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneResizeEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneResizeEvent_U(h unsafe.Pointer) *QGraphicsSceneResizeEvent {
	return newQGraphicsSceneResizeEvent((*C.QGraphicsSceneResizeEvent)(h))
}

// NewQGraphicsSceneResizeEvent constructs a new QGraphicsSceneResizeEvent object.
func NewQGraphicsSceneResizeEvent() *QGraphicsSceneResizeEvent {
	ret := C.QGraphicsSceneResizeEvent_new()
	return newQGraphicsSceneResizeEvent(ret)
}

func (this *QGraphicsSceneResizeEvent) OldSize() *QSizeF {
	_ret := C.QGraphicsSceneResizeEvent_OldSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetOldSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_SetOldSize(this.h, size.cPointer())
}

func (this *QGraphicsSceneResizeEvent) NewSize() *QSizeF {
	_ret := C.QGraphicsSceneResizeEvent_NewSize(this.h)
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneResizeEvent) SetNewSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_SetNewSize(this.h, size.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneResizeEvent) Delete() {
	C.QGraphicsSceneResizeEvent_Delete(this.h)
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

func newQGraphicsSceneMoveEvent(h *C.QGraphicsSceneMoveEvent) *QGraphicsSceneMoveEvent {
	if h == nil {
		return nil
	}
	return &QGraphicsSceneMoveEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneMoveEvent_U(h unsafe.Pointer) *QGraphicsSceneMoveEvent {
	return newQGraphicsSceneMoveEvent((*C.QGraphicsSceneMoveEvent)(h))
}

// NewQGraphicsSceneMoveEvent constructs a new QGraphicsSceneMoveEvent object.
func NewQGraphicsSceneMoveEvent() *QGraphicsSceneMoveEvent {
	ret := C.QGraphicsSceneMoveEvent_new()
	return newQGraphicsSceneMoveEvent(ret)
}

func (this *QGraphicsSceneMoveEvent) OldPos() *QPointF {
	_ret := C.QGraphicsSceneMoveEvent_OldPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetOldPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_SetOldPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMoveEvent) NewPos() *QPointF {
	_ret := C.QGraphicsSceneMoveEvent_NewPos(this.h)
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSceneMoveEvent) SetNewPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_SetNewPos(this.h, pos.cPointer())
}

// Delete this object from C++ memory.
func (this *QGraphicsSceneMoveEvent) Delete() {
	C.QGraphicsSceneMoveEvent_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSceneMoveEvent) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSceneMoveEvent) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
