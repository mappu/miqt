package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qgraphicssceneevent.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
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
	return &QGraphicsSceneEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneEvent_U(h unsafe.Pointer) *QGraphicsSceneEvent {
	return newQGraphicsSceneEvent((*C.QGraphicsSceneEvent)(h))
}

func (this *QGraphicsSceneEvent) Widget() *QWidget {
	ret := C.QGraphicsSceneEvent_Widget(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsSceneEvent) SetWidget(widget *QWidget) {
	C.QGraphicsSceneEvent_SetWidget(this.h, widget.cPointer())
}

func (this *QGraphicsSceneEvent) Delete() {
	C.QGraphicsSceneEvent_Delete(this.h)
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
	return &QGraphicsSceneMouseEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneMouseEvent_U(h unsafe.Pointer) *QGraphicsSceneMouseEvent {
	return newQGraphicsSceneMouseEvent((*C.QGraphicsSceneMouseEvent)(h))
}

func (this *QGraphicsSceneMouseEvent) Pos() *QPointF {
	ret := C.QGraphicsSceneMouseEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneMouseEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneMouseEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastPos() *QPointF {
	ret := C.QGraphicsSceneMouseEvent_LastPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScenePos() *QPointF {
	ret := C.QGraphicsSceneMouseEvent_LastScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneMouseEvent_SetLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) LastScreenPos() *QPoint {
	ret := C.QGraphicsSceneMouseEvent_LastScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMouseEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneMouseEvent_SetLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMouseEvent) Delete() {
	C.QGraphicsSceneMouseEvent_Delete(this.h)
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
	return &QGraphicsSceneWheelEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneWheelEvent_U(h unsafe.Pointer) *QGraphicsSceneWheelEvent {
	return newQGraphicsSceneWheelEvent((*C.QGraphicsSceneWheelEvent)(h))
}

func (this *QGraphicsSceneWheelEvent) Pos() *QPointF {
	ret := C.QGraphicsSceneWheelEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneWheelEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneWheelEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneWheelEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneWheelEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneWheelEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneWheelEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneWheelEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneWheelEvent) Delta() int {
	ret := C.QGraphicsSceneWheelEvent_Delta(this.h)
	return (int)(ret)
}

func (this *QGraphicsSceneWheelEvent) SetDelta(delta int) {
	C.QGraphicsSceneWheelEvent_SetDelta(this.h, (C.int)(delta))
}

func (this *QGraphicsSceneWheelEvent) Delete() {
	C.QGraphicsSceneWheelEvent_Delete(this.h)
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
	return &QGraphicsSceneContextMenuEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneContextMenuEvent_U(h unsafe.Pointer) *QGraphicsSceneContextMenuEvent {
	return newQGraphicsSceneContextMenuEvent((*C.QGraphicsSceneContextMenuEvent)(h))
}

func (this *QGraphicsSceneContextMenuEvent) Pos() *QPointF {
	ret := C.QGraphicsSceneContextMenuEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneContextMenuEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneContextMenuEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneContextMenuEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneContextMenuEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneContextMenuEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneContextMenuEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneContextMenuEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneContextMenuEvent) Delete() {
	C.QGraphicsSceneContextMenuEvent_Delete(this.h)
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
	return &QGraphicsSceneHoverEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneHoverEvent_U(h unsafe.Pointer) *QGraphicsSceneHoverEvent {
	return newQGraphicsSceneHoverEvent((*C.QGraphicsSceneHoverEvent)(h))
}

func (this *QGraphicsSceneHoverEvent) Pos() *QPointF {
	ret := C.QGraphicsSceneHoverEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneHoverEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneHoverEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastPos() *QPointF {
	ret := C.QGraphicsSceneHoverEvent_LastPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetLastPos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetLastPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScenePos() *QPointF {
	ret := C.QGraphicsSceneHoverEvent_LastScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetLastScenePos(pos *QPointF) {
	C.QGraphicsSceneHoverEvent_SetLastScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) LastScreenPos() *QPoint {
	ret := C.QGraphicsSceneHoverEvent_LastScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHoverEvent) SetLastScreenPos(pos *QPoint) {
	C.QGraphicsSceneHoverEvent_SetLastScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHoverEvent) Delete() {
	C.QGraphicsSceneHoverEvent_Delete(this.h)
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
	return &QGraphicsSceneHelpEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneHelpEvent_U(h unsafe.Pointer) *QGraphicsSceneHelpEvent {
	return newQGraphicsSceneHelpEvent((*C.QGraphicsSceneHelpEvent)(h))
}

func (this *QGraphicsSceneHelpEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneHelpEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHelpEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneHelpEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHelpEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneHelpEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneHelpEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneHelpEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneHelpEvent) Delete() {
	C.QGraphicsSceneHelpEvent_Delete(this.h)
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
	return &QGraphicsSceneDragDropEvent{h: h, QGraphicsSceneEvent: newQGraphicsSceneEvent_U(unsafe.Pointer(h))}
}

func newQGraphicsSceneDragDropEvent_U(h unsafe.Pointer) *QGraphicsSceneDragDropEvent {
	return newQGraphicsSceneDragDropEvent((*C.QGraphicsSceneDragDropEvent)(h))
}

func (this *QGraphicsSceneDragDropEvent) Pos() *QPointF {
	ret := C.QGraphicsSceneDragDropEvent_Pos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneDragDropEvent) SetPos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_SetPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScenePos() *QPointF {
	ret := C.QGraphicsSceneDragDropEvent_ScenePos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneDragDropEvent) SetScenePos(pos *QPointF) {
	C.QGraphicsSceneDragDropEvent_SetScenePos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) ScreenPos() *QPoint {
	ret := C.QGraphicsSceneDragDropEvent_ScreenPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPoint(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPoint) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneDragDropEvent) SetScreenPos(pos *QPoint) {
	C.QGraphicsSceneDragDropEvent_SetScreenPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) AcceptProposedAction() {
	C.QGraphicsSceneDragDropEvent_AcceptProposedAction(this.h)
}

func (this *QGraphicsSceneDragDropEvent) Source() *QWidget {
	ret := C.QGraphicsSceneDragDropEvent_Source(this.h)
	return newQWidget_U(unsafe.Pointer(ret))
}

func (this *QGraphicsSceneDragDropEvent) SetSource(source *QWidget) {
	C.QGraphicsSceneDragDropEvent_SetSource(this.h, source.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) MimeData() *QMimeData {
	ret := C.QGraphicsSceneDragDropEvent_MimeData(this.h)
	return newQMimeData_U(unsafe.Pointer(ret))
}

func (this *QGraphicsSceneDragDropEvent) SetMimeData(data *QMimeData) {
	C.QGraphicsSceneDragDropEvent_SetMimeData(this.h, data.cPointer())
}

func (this *QGraphicsSceneDragDropEvent) Delete() {
	C.QGraphicsSceneDragDropEvent_Delete(this.h)
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
	ret := C.QGraphicsSceneResizeEvent_OldSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneResizeEvent) SetOldSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_SetOldSize(this.h, size.cPointer())
}

func (this *QGraphicsSceneResizeEvent) NewSize() *QSizeF {
	ret := C.QGraphicsSceneResizeEvent_NewSize(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQSizeF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QSizeF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneResizeEvent) SetNewSize(size *QSizeF) {
	C.QGraphicsSceneResizeEvent_SetNewSize(this.h, size.cPointer())
}

func (this *QGraphicsSceneResizeEvent) Delete() {
	C.QGraphicsSceneResizeEvent_Delete(this.h)
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
	ret := C.QGraphicsSceneMoveEvent_OldPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMoveEvent) SetOldPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_SetOldPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMoveEvent) NewPos() *QPointF {
	ret := C.QGraphicsSceneMoveEvent_NewPos(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPointF(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPointF) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QGraphicsSceneMoveEvent) SetNewPos(pos *QPointF) {
	C.QGraphicsSceneMoveEvent_SetNewPos(this.h, pos.cPointer())
}

func (this *QGraphicsSceneMoveEvent) Delete() {
	C.QGraphicsSceneMoveEvent_Delete(this.h)
}
