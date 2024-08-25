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
	return &QInputEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQInputEvent_U(h unsafe.Pointer) *QInputEvent {
	return newQInputEvent((*C.QInputEvent)(h))
}

// NewQInputEvent constructs a new QInputEvent object.
func NewQInputEvent(param1 *QInputEvent) *QInputEvent {
	ret := C.QInputEvent_new(param1.cPointer())
	return newQInputEvent(ret)
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
	return &QMouseEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQMouseEvent_U(h unsafe.Pointer) *QMouseEvent {
	return newQMouseEvent((*C.QMouseEvent)(h))
}

// NewQMouseEvent constructs a new QMouseEvent object.
func NewQMouseEvent(param1 *QMouseEvent) *QMouseEvent {
	ret := C.QMouseEvent_new(param1.cPointer())
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

func (this *QMouseEvent) SetLocalPos(localPosition *QPointF) {
	C.QMouseEvent_SetLocalPos(this.h, localPosition.cPointer())
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
	return &QHoverEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQHoverEvent_U(h unsafe.Pointer) *QHoverEvent {
	return newQHoverEvent((*C.QHoverEvent)(h))
}

// NewQHoverEvent constructs a new QHoverEvent object.
func NewQHoverEvent(param1 *QHoverEvent) *QHoverEvent {
	ret := C.QHoverEvent_new(param1.cPointer())
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
	return &QWheelEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQWheelEvent_U(h unsafe.Pointer) *QWheelEvent {
	return newQWheelEvent((*C.QWheelEvent)(h))
}

// NewQWheelEvent constructs a new QWheelEvent object.
func NewQWheelEvent(param1 *QWheelEvent) *QWheelEvent {
	ret := C.QWheelEvent_new(param1.cPointer())
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

func (this *QWheelEvent) Inverted() bool {
	ret := C.QWheelEvent_Inverted(this.h)
	return (bool)(ret)
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
	return &QTabletEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQTabletEvent_U(h unsafe.Pointer) *QTabletEvent {
	return newQTabletEvent((*C.QTabletEvent)(h))
}

// NewQTabletEvent constructs a new QTabletEvent object.
func NewQTabletEvent(param1 *QTabletEvent) *QTabletEvent {
	ret := C.QTabletEvent_new(param1.cPointer())
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
	return &QNativeGestureEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQNativeGestureEvent_U(h unsafe.Pointer) *QNativeGestureEvent {
	return newQNativeGestureEvent((*C.QNativeGestureEvent)(h))
}

// NewQNativeGestureEvent constructs a new QNativeGestureEvent object.
func NewQNativeGestureEvent(param1 *QNativeGestureEvent) *QNativeGestureEvent {
	ret := C.QNativeGestureEvent_new(param1.cPointer())
	return newQNativeGestureEvent(ret)
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
	return &QKeyEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQKeyEvent_U(h unsafe.Pointer) *QKeyEvent {
	return newQKeyEvent((*C.QKeyEvent)(h))
}

// NewQKeyEvent constructs a new QKeyEvent object.
func NewQKeyEvent(param1 *QKeyEvent) *QKeyEvent {
	ret := C.QKeyEvent_new(param1.cPointer())
	return newQKeyEvent(ret)
}

func (this *QKeyEvent) Key() int {
	ret := C.QKeyEvent_Key(this.h)
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

func (this *QKeyEvent) NativeScanCode() uint32 {
	ret := C.QKeyEvent_NativeScanCode(this.h)
	return (uint32)(ret)
}

func (this *QKeyEvent) NativeVirtualKey() uint32 {
	ret := C.QKeyEvent_NativeVirtualKey(this.h)
	return (uint32)(ret)
}

func (this *QKeyEvent) NativeModifiers() uint32 {
	ret := C.QKeyEvent_NativeModifiers(this.h)
	return (uint32)(ret)
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
	return &QFocusEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQFocusEvent_U(h unsafe.Pointer) *QFocusEvent {
	return newQFocusEvent((*C.QFocusEvent)(h))
}

// NewQFocusEvent constructs a new QFocusEvent object.
func NewQFocusEvent(param1 *QFocusEvent) *QFocusEvent {
	ret := C.QFocusEvent_new(param1.cPointer())
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
	return &QPlatformSurfaceEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQPlatformSurfaceEvent_U(h unsafe.Pointer) *QPlatformSurfaceEvent {
	return newQPlatformSurfaceEvent((*C.QPlatformSurfaceEvent)(h))
}

// NewQPlatformSurfaceEvent constructs a new QPlatformSurfaceEvent object.
func NewQPlatformSurfaceEvent(param1 *QPlatformSurfaceEvent) *QPlatformSurfaceEvent {
	ret := C.QPlatformSurfaceEvent_new(param1.cPointer())
	return newQPlatformSurfaceEvent(ret)
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
	return &QContextMenuEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQContextMenuEvent_U(h unsafe.Pointer) *QContextMenuEvent {
	return newQContextMenuEvent((*C.QContextMenuEvent)(h))
}

// NewQContextMenuEvent constructs a new QContextMenuEvent object.
func NewQContextMenuEvent(param1 *QContextMenuEvent) *QContextMenuEvent {
	ret := C.QContextMenuEvent_new(param1.cPointer())
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
func NewQInputMethodEvent2(other *QInputMethodEvent) *QInputMethodEvent {
	ret := C.QInputMethodEvent_new2(other.cPointer())
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
	return &QInputMethodQueryEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQInputMethodQueryEvent_U(h unsafe.Pointer) *QInputMethodQueryEvent {
	return newQInputMethodQueryEvent((*C.QInputMethodQueryEvent)(h))
}

// NewQInputMethodQueryEvent constructs a new QInputMethodQueryEvent object.
func NewQInputMethodQueryEvent(param1 *QInputMethodQueryEvent) *QInputMethodQueryEvent {
	ret := C.QInputMethodQueryEvent_new(param1.cPointer())
	return newQInputMethodQueryEvent(ret)
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
	return &QDropEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQDropEvent_U(h unsafe.Pointer) *QDropEvent {
	return newQDropEvent((*C.QDropEvent)(h))
}

// NewQDropEvent constructs a new QDropEvent object.
func NewQDropEvent(param1 *QDropEvent) *QDropEvent {
	ret := C.QDropEvent_new(param1.cPointer())
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

func (this *QDropEvent) AcceptProposedAction() {
	C.QDropEvent_AcceptProposedAction(this.h)
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
	return &QDragMoveEvent{h: h, QDropEvent: newQDropEvent_U(unsafe.Pointer(h))}
}

func newQDragMoveEvent_U(h unsafe.Pointer) *QDragMoveEvent {
	return newQDragMoveEvent((*C.QDragMoveEvent)(h))
}

// NewQDragMoveEvent constructs a new QDragMoveEvent object.
func NewQDragMoveEvent(param1 *QDragMoveEvent) *QDragMoveEvent {
	ret := C.QDragMoveEvent_new(param1.cPointer())
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
	return &QDragEnterEvent{h: h, QDragMoveEvent: newQDragMoveEvent_U(unsafe.Pointer(h))}
}

func newQDragEnterEvent_U(h unsafe.Pointer) *QDragEnterEvent {
	return newQDragEnterEvent((*C.QDragEnterEvent)(h))
}

// NewQDragEnterEvent constructs a new QDragEnterEvent object.
func NewQDragEnterEvent(param1 *QDragEnterEvent) *QDragEnterEvent {
	ret := C.QDragEnterEvent_new(param1.cPointer())
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
	return &QHelpEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQHelpEvent_U(h unsafe.Pointer) *QHelpEvent {
	return newQHelpEvent((*C.QHelpEvent)(h))
}

// NewQHelpEvent constructs a new QHelpEvent object.
func NewQHelpEvent(param1 *QHelpEvent) *QHelpEvent {
	ret := C.QHelpEvent_new(param1.cPointer())
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
	return &QWindowStateChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQWindowStateChangeEvent_U(h unsafe.Pointer) *QWindowStateChangeEvent {
	return newQWindowStateChangeEvent((*C.QWindowStateChangeEvent)(h))
}

// NewQWindowStateChangeEvent constructs a new QWindowStateChangeEvent object.
func NewQWindowStateChangeEvent(param1 *QWindowStateChangeEvent) *QWindowStateChangeEvent {
	ret := C.QWindowStateChangeEvent_new(param1.cPointer())
	return newQWindowStateChangeEvent(ret)
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
	ret := C.QPointingDeviceUniqueId_FromNumericId((C.int64_t)(id))
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
	return &QTouchEvent{h: h, QInputEvent: newQInputEvent_U(unsafe.Pointer(h))}
}

func newQTouchEvent_U(h unsafe.Pointer) *QTouchEvent {
	return newQTouchEvent((*C.QTouchEvent)(h))
}

// NewQTouchEvent constructs a new QTouchEvent object.
func NewQTouchEvent(param1 *QTouchEvent) *QTouchEvent {
	ret := C.QTouchEvent_new(param1.cPointer())
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
	return &QScrollEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQScrollEvent_U(h unsafe.Pointer) *QScrollEvent {
	return newQScrollEvent((*C.QScrollEvent)(h))
}

// NewQScrollEvent constructs a new QScrollEvent object.
func NewQScrollEvent(param1 *QScrollEvent) *QScrollEvent {
	ret := C.QScrollEvent_new(param1.cPointer())
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
	return &QScreenOrientationChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQScreenOrientationChangeEvent_U(h unsafe.Pointer) *QScreenOrientationChangeEvent {
	return newQScreenOrientationChangeEvent((*C.QScreenOrientationChangeEvent)(h))
}

// NewQScreenOrientationChangeEvent constructs a new QScreenOrientationChangeEvent object.
func NewQScreenOrientationChangeEvent(param1 *QScreenOrientationChangeEvent) *QScreenOrientationChangeEvent {
	ret := C.QScreenOrientationChangeEvent_new(param1.cPointer())
	return newQScreenOrientationChangeEvent(ret)
}

func (this *QScreenOrientationChangeEvent) Screen() *QScreen {
	ret := C.QScreenOrientationChangeEvent_Screen(this.h)
	return newQScreen_U(unsafe.Pointer(ret))
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
	return &QApplicationStateChangeEvent{h: h, QEvent: newQEvent_U(unsafe.Pointer(h))}
}

func newQApplicationStateChangeEvent_U(h unsafe.Pointer) *QApplicationStateChangeEvent {
	return newQApplicationStateChangeEvent((*C.QApplicationStateChangeEvent)(h))
}

// NewQApplicationStateChangeEvent constructs a new QApplicationStateChangeEvent object.
func NewQApplicationStateChangeEvent(param1 *QApplicationStateChangeEvent) *QApplicationStateChangeEvent {
	ret := C.QApplicationStateChangeEvent_new(param1.cPointer())
	return newQApplicationStateChangeEvent(ret)
}

func (this *QApplicationStateChangeEvent) Delete() {
	C.QApplicationStateChangeEvent_Delete(this.h)
}
