package multimedia

/*

#include "gen_qgraphicsvideoitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsVideoItem__ int

const (
	QGraphicsVideoItem__Type QGraphicsVideoItem__ = 14
)

type QGraphicsVideoItem struct {
	h *C.QGraphicsVideoItem
	*qt6.QGraphicsObject
}

func (this *QGraphicsVideoItem) cPointer() *C.QGraphicsVideoItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsVideoItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsVideoItem constructs the type using only CGO pointers.
func newQGraphicsVideoItem(h *C.QGraphicsVideoItem) *QGraphicsVideoItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	C.QGraphicsVideoItem_virtbase(h, &outptr_QGraphicsObject)

	return &QGraphicsVideoItem{h: h,
		QGraphicsObject: qt6.UnsafeNewQGraphicsObject(unsafe.Pointer(outptr_QGraphicsObject))}
}

// UnsafeNewQGraphicsVideoItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsVideoItem(h unsafe.Pointer) *QGraphicsVideoItem {
	return newQGraphicsVideoItem((*C.QGraphicsVideoItem)(h))
}

// NewQGraphicsVideoItem constructs a new QGraphicsVideoItem object.
func NewQGraphicsVideoItem() *QGraphicsVideoItem {

	return newQGraphicsVideoItem(C.QGraphicsVideoItem_new())
}

// NewQGraphicsVideoItem2 constructs a new QGraphicsVideoItem object.
func NewQGraphicsVideoItem2(parent *qt6.QGraphicsItem) *QGraphicsVideoItem {

	return newQGraphicsVideoItem(C.QGraphicsVideoItem_new2((*C.QGraphicsItem)(parent.UnsafePointer())))
}

func (this *QGraphicsVideoItem) MetaObject() *qt6.QMetaObject {
	return qt6.UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsVideoItem_MetaObject(this.h)))
}

func (this *QGraphicsVideoItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsVideoItem_Metacast(this.h, param1_Cstring))
}

func QGraphicsVideoItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsVideoItem) VideoSink() *QVideoSink {
	return newQVideoSink(C.QGraphicsVideoItem_VideoSink(this.h))
}

func (this *QGraphicsVideoItem) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QGraphicsVideoItem_AspectRatioMode(this.h))
}

func (this *QGraphicsVideoItem) SetAspectRatioMode(mode qt6.AspectRatioMode) {
	C.QGraphicsVideoItem_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QGraphicsVideoItem) Offset() *qt6.QPointF {
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(C.QGraphicsVideoItem_Offset(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetOffset(offset *qt6.QPointF) {
	C.QGraphicsVideoItem_SetOffset(this.h, (*C.QPointF)(offset.UnsafePointer()))
}

func (this *QGraphicsVideoItem) Size() *qt6.QSizeF {
	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsVideoItem_Size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetSize(size *qt6.QSizeF) {
	C.QGraphicsVideoItem_SetSize(this.h, (*C.QSizeF)(size.UnsafePointer()))
}

func (this *QGraphicsVideoItem) NativeSize() *qt6.QSizeF {
	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsVideoItem_NativeSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) BoundingRect() *qt6.QRectF {
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsVideoItem_BoundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) Paint(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {
	C.QGraphicsVideoItem_Paint(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QGraphicsVideoItem) Type() int {
	return (int)(C.QGraphicsVideoItem_Type(this.h))
}

func (this *QGraphicsVideoItem) NativeSizeChanged(size *qt6.QSizeF) {
	C.QGraphicsVideoItem_NativeSizeChanged(this.h, (*C.QSizeF)(size.UnsafePointer()))
}
func (this *QGraphicsVideoItem) OnNativeSizeChanged(slot func(size *qt6.QSizeF)) {
	C.QGraphicsVideoItem_connect_NativeSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsVideoItem_NativeSizeChanged
func miqt_exec_callback_QGraphicsVideoItem_NativeSizeChanged(cb C.intptr_t, size *C.QSizeF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *qt6.QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQSizeF(unsafe.Pointer(size))

	gofunc(slotval1)
}

func QGraphicsVideoItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsVideoItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsVideoItem) callVirtualBase_BoundingRect() *qt6.QRectF {

	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnBoundingRect(slot func(super func() *qt6.QRectF) *qt6.QRectF) {
	ok := C.QGraphicsVideoItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_BoundingRect
func miqt_exec_callback_QGraphicsVideoItem_BoundingRect(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QRectF) *qt6.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Paint(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget) {

	C.QGraphicsVideoItem_virtualbase_Paint(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnPaint(slot func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget)) {
	ok := C.QGraphicsVideoItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Paint
func miqt_exec_callback_QGraphicsVideoItem_Paint(self *C.QGraphicsVideoItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsVideoItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsVideoItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsVideoItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsVideoItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Type
func miqt_exec_callback_QGraphicsVideoItem_Type(self *C.QGraphicsVideoItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_TimerEvent(event *qt6.QTimerEvent) {

	C.QGraphicsVideoItem_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnTimerEvent(slot func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_TimerEvent
func miqt_exec_callback_QGraphicsVideoItem_TimerEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_ItemChange(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnItemChange(slot func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_ItemChange
func miqt_exec_callback_QGraphicsVideoItem_ItemChange(self *C.QGraphicsVideoItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Event(ev *qt6.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(ev.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnEvent(slot func(super func(ev *qt6.QEvent) bool, ev *qt6.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Event
func miqt_exec_callback_QGraphicsVideoItem_Event(self *C.QGraphicsVideoItem, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *qt6.QEvent) bool, ev *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(ev))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_EventFilter(watched *qt6.QObject, event *qt6.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnEventFilter(slot func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_EventFilter
func miqt_exec_callback_QGraphicsVideoItem_EventFilter(self *C.QGraphicsVideoItem, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QObject, event *qt6.QEvent) bool, watched *qt6.QObject, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_ChildEvent(event *qt6.QChildEvent) {

	C.QGraphicsVideoItem_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnChildEvent(slot func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_ChildEvent
func miqt_exec_callback_QGraphicsVideoItem_ChildEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QChildEvent), event *qt6.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_CustomEvent(event *qt6.QEvent) {

	C.QGraphicsVideoItem_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnCustomEvent(slot func(super func(event *qt6.QEvent), event *qt6.QEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_CustomEvent
func miqt_exec_callback_QGraphicsVideoItem_CustomEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent), event *qt6.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_ConnectNotify(signal *qt6.QMetaMethod) {

	C.QGraphicsVideoItem_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnConnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGraphicsVideoItem_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_ConnectNotify
func miqt_exec_callback_QGraphicsVideoItem_ConnectNotify(self *C.QGraphicsVideoItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DisconnectNotify(signal *qt6.QMetaMethod) {

	C.QGraphicsVideoItem_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDisconnectNotify(slot func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod)) {
	ok := C.QGraphicsVideoItem_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_DisconnectNotify
func miqt_exec_callback_QGraphicsVideoItem_DisconnectNotify(self *C.QGraphicsVideoItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt6.QMetaMethod), signal *qt6.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsVideoItem_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsVideoItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsVideoItem_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Advance
func miqt_exec_callback_QGraphicsVideoItem_Advance(self *C.QGraphicsVideoItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_Shape() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_Shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnShape(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QGraphicsVideoItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Shape
func miqt_exec_callback_QGraphicsVideoItem_Shape(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Contains(point *qt6.QPointF) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_Contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnContains(slot func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Contains
func miqt_exec_callback_QGraphicsVideoItem_Contains(self *C.QGraphicsVideoItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt6.QPointF) bool, point *qt6.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_CollidesWithItem(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsVideoItem) OnCollidesWithItem(slot func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_CollidesWithItem
func miqt_exec_callback_QGraphicsVideoItem_CollidesWithItem(self *C.QGraphicsVideoItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool, other *qt6.QGraphicsItem, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_CollidesWithPath(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsVideoItem) OnCollidesWithPath(slot func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_CollidesWithPath
func miqt_exec_callback_QGraphicsVideoItem_CollidesWithPath(self *C.QGraphicsVideoItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool, path *qt6.QPainterPath, mode qt6.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt6.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_IsObscuredBy(item *qt6.QGraphicsItem) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnIsObscuredBy(slot func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_IsObscuredBy
func miqt_exec_callback_QGraphicsVideoItem_IsObscuredBy(self *C.QGraphicsVideoItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt6.QGraphicsItem) bool, item *qt6.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_OpaqueArea() *qt6.QPainterPath {

	_goptr := qt6.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnOpaqueArea(slot func(super func() *qt6.QPainterPath) *qt6.QPainterPath) {
	ok := C.QGraphicsVideoItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_OpaqueArea
func miqt_exec_callback_QGraphicsVideoItem_OpaqueArea(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt6.QPainterPath) *qt6.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_SceneEventFilter(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnSceneEventFilter(slot func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_SceneEventFilter
func miqt_exec_callback_QGraphicsVideoItem_SceneEventFilter(self *C.QGraphicsVideoItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt6.QGraphicsItem, event *qt6.QEvent) bool, watched *qt6.QGraphicsItem, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_SceneEvent(event *qt6.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_SceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnSceneEvent(slot func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_SceneEvent
func miqt_exec_callback_QGraphicsVideoItem_SceneEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QEvent) bool, event *qt6.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_ContextMenuEvent(event *qt6.QGraphicsSceneContextMenuEvent) {

	C.QGraphicsVideoItem_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnContextMenuEvent(slot func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_ContextMenuEvent
func miqt_exec_callback_QGraphicsVideoItem_ContextMenuEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneContextMenuEvent), event *qt6.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragEnterEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragEnterEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_DragEnterEvent
func miqt_exec_callback_QGraphicsVideoItem_DragEnterEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragLeaveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_DragLeaveEvent
func miqt_exec_callback_QGraphicsVideoItem_DragLeaveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragMoveEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragMoveEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_DragMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_DragMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DropEvent(event *qt6.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDropEvent(slot func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_DropEvent
func miqt_exec_callback_QGraphicsVideoItem_DropEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneDragDropEvent), event *qt6.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_FocusInEvent(event *qt6.QFocusEvent) {

	C.QGraphicsVideoItem_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnFocusInEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_FocusInEvent
func miqt_exec_callback_QGraphicsVideoItem_FocusInEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_FocusOutEvent(event *qt6.QFocusEvent) {

	C.QGraphicsVideoItem_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnFocusOutEvent(slot func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_FocusOutEvent
func miqt_exec_callback_QGraphicsVideoItem_FocusOutEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QFocusEvent), event *qt6.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverEnterEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverEnterEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_HoverEnterEvent
func miqt_exec_callback_QGraphicsVideoItem_HoverEnterEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverMoveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverMoveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_HoverMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_HoverMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverLeaveEvent(event *qt6.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverLeaveEvent(slot func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_HoverLeaveEvent
func miqt_exec_callback_QGraphicsVideoItem_HoverLeaveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneHoverEvent), event *qt6.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_KeyPressEvent(event *qt6.QKeyEvent) {

	C.QGraphicsVideoItem_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnKeyPressEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_KeyPressEvent
func miqt_exec_callback_QGraphicsVideoItem_KeyPressEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_KeyReleaseEvent(event *qt6.QKeyEvent) {

	C.QGraphicsVideoItem_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnKeyReleaseEvent(slot func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_KeyReleaseEvent
func miqt_exec_callback_QGraphicsVideoItem_KeyReleaseEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QKeyEvent), event *qt6.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MousePressEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMousePressEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_MousePressEvent
func miqt_exec_callback_QGraphicsVideoItem_MousePressEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseMoveEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseMoveEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_MouseMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_MouseMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseReleaseEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseReleaseEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_MouseReleaseEvent
func miqt_exec_callback_QGraphicsVideoItem_MouseReleaseEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseDoubleClickEvent(event *qt6.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseDoubleClickEvent(slot func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsVideoItem_MouseDoubleClickEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneMouseEvent), event *qt6.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_WheelEvent(event *qt6.QGraphicsSceneWheelEvent) {

	C.QGraphicsVideoItem_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnWheelEvent(slot func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_WheelEvent
func miqt_exec_callback_QGraphicsVideoItem_WheelEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QGraphicsSceneWheelEvent), event *qt6.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_InputMethodEvent(event *qt6.QInputMethodEvent) {

	C.QGraphicsVideoItem_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnInputMethodEvent(slot func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_InputMethodEvent
func miqt_exec_callback_QGraphicsVideoItem_InputMethodEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QInputMethodEvent), event *qt6.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_InputMethodQuery(query qt6.InputMethodQuery) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnInputMethodQuery(slot func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_InputMethodQuery
func miqt_exec_callback_QGraphicsVideoItem_InputMethodQuery(self *C.QGraphicsVideoItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt6.InputMethodQuery) *qt6.QVariant, query qt6.InputMethodQuery) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_SupportsExtension(extension qt6.QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsVideoItem) OnSupportsExtension(slot func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_SupportsExtension
func miqt_exec_callback_QGraphicsVideoItem_SupportsExtension(self *C.QGraphicsVideoItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension) bool, extension qt6.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_SetExtension(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant) {

	C.QGraphicsVideoItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnSetExtension(slot func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant)) {
	ok := C.QGraphicsVideoItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_SetExtension
func miqt_exec_callback_QGraphicsVideoItem_SetExtension(self *C.QGraphicsVideoItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant), extension qt6.QGraphicsItem__Extension, variant *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt6.QGraphicsItem__Extension)(extension)

	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsVideoItem) callVirtualBase_Extension(variant *qt6.QVariant) *qt6.QVariant {

	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_Extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnExtension(slot func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_Extension
func miqt_exec_callback_QGraphicsVideoItem_Extension(self *C.QGraphicsVideoItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt6.QVariant) *qt6.QVariant, variant *qt6.QVariant) *qt6.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QGraphicsVideoItem) Delete() {
	C.QGraphicsVideoItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsVideoItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsVideoItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
