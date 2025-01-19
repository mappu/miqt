package svg

/*

#include "gen_qgraphicssvgitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsSvgItem__ int

const (
	QGraphicsSvgItem__Type QGraphicsSvgItem__ = 13
)

type QGraphicsSvgItem struct {
	h *C.QGraphicsSvgItem
	*qt.QGraphicsObject
}

func (this *QGraphicsSvgItem) cPointer() *C.QGraphicsSvgItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsSvgItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsSvgItem constructs the type using only CGO pointers.
func newQGraphicsSvgItem(h *C.QGraphicsSvgItem) *QGraphicsSvgItem {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	C.QGraphicsSvgItem_virtbase(h, &outptr_QGraphicsObject)

	return &QGraphicsSvgItem{h: h,
		QGraphicsObject: qt.UnsafeNewQGraphicsObject(unsafe.Pointer(outptr_QGraphicsObject))}
}

// UnsafeNewQGraphicsSvgItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSvgItem(h unsafe.Pointer) *QGraphicsSvgItem {
	return newQGraphicsSvgItem((*C.QGraphicsSvgItem)(h))
}

// NewQGraphicsSvgItem constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem() *QGraphicsSvgItem {

	return newQGraphicsSvgItem(C.QGraphicsSvgItem_new())
}

// NewQGraphicsSvgItem2 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem2(fileName string) *QGraphicsSvgItem {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQGraphicsSvgItem(C.QGraphicsSvgItem_new2(fileName_ms))
}

// NewQGraphicsSvgItem3 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem3(parentItem *qt.QGraphicsItem) *QGraphicsSvgItem {

	return newQGraphicsSvgItem(C.QGraphicsSvgItem_new3((*C.QGraphicsItem)(parentItem.UnsafePointer())))
}

// NewQGraphicsSvgItem4 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem4(fileName string, parentItem *qt.QGraphicsItem) *QGraphicsSvgItem {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))

	return newQGraphicsSvgItem(C.QGraphicsSvgItem_new4(fileName_ms, (*C.QGraphicsItem)(parentItem.UnsafePointer())))
}

func (this *QGraphicsSvgItem) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsSvgItem_MetaObject(this.h)))
}

func (this *QGraphicsSvgItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsSvgItem_Metacast(this.h, param1_Cstring))
}

func QGraphicsSvgItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsSvgItem_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsSvgItem) SetSharedRenderer(renderer *QSvgRenderer) {
	C.QGraphicsSvgItem_SetSharedRenderer(this.h, renderer.cPointer())
}

func (this *QGraphicsSvgItem) Renderer() *QSvgRenderer {
	return newQSvgRenderer(C.QGraphicsSvgItem_Renderer(this.h))
}

func (this *QGraphicsSvgItem) SetElementId(id string) {
	id_ms := C.struct_miqt_string{}
	id_ms.data = C.CString(id)
	id_ms.len = C.size_t(len(id))
	defer C.free(unsafe.Pointer(id_ms.data))
	C.QGraphicsSvgItem_SetElementId(this.h, id_ms)
}

func (this *QGraphicsSvgItem) ElementId() string {
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_ElementId(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsSvgItem) SetCachingEnabled(cachingEnabled bool) {
	C.QGraphicsSvgItem_SetCachingEnabled(this.h, (C.bool)(cachingEnabled))
}

func (this *QGraphicsSvgItem) IsCachingEnabled() bool {
	return (bool)(C.QGraphicsSvgItem_IsCachingEnabled(this.h))
}

func (this *QGraphicsSvgItem) SetMaximumCacheSize(size *qt.QSize) {
	C.QGraphicsSvgItem_SetMaximumCacheSize(this.h, (*C.QSize)(size.UnsafePointer()))
}

func (this *QGraphicsSvgItem) MaximumCacheSize() *qt.QSize {
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(C.QGraphicsSvgItem_MaximumCacheSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSvgItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsSvgItem_BoundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSvgItem) Paint(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {
	C.QGraphicsSvgItem_Paint(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QGraphicsSvgItem) Type() int {
	return (int)(C.QGraphicsSvgItem_Type(this.h))
}

func QGraphicsSvgItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsSvgItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsSvgItem_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsSvgItem_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsSvgItem_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsSvgItem) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QGraphicsSvgItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_BoundingRect
func miqt_exec_callback_QGraphicsSvgItem_BoundingRect(self *C.QGraphicsSvgItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsSvgItem) callVirtualBase_Paint(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsSvgItem_virtualbase_Paint(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnPaint(slot func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsSvgItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Paint
func miqt_exec_callback_QGraphicsSvgItem_Paint(self *C.QGraphicsSvgItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsSvgItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsSvgItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsSvgItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsSvgItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Type
func miqt_exec_callback_QGraphicsSvgItem_Type(self *C.QGraphicsSvgItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_Event(ev *qt.QEvent) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_Event(unsafe.Pointer(this.h), (*C.QEvent)(ev.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnEvent(slot func(super func(ev *qt.QEvent) bool, ev *qt.QEvent) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Event
func miqt_exec_callback_QGraphicsSvgItem_Event(self *C.QGraphicsSvgItem, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *qt.QEvent) bool, ev *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(ev))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_EventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_EventFilter
func miqt_exec_callback_QGraphicsSvgItem_EventFilter(self *C.QGraphicsSvgItem, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QGraphicsSvgItem_virtualbase_TimerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_TimerEvent
func miqt_exec_callback_QGraphicsSvgItem_TimerEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QGraphicsSvgItem_virtualbase_ChildEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_ChildEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_ChildEvent
func miqt_exec_callback_QGraphicsSvgItem_ChildEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QGraphicsSvgItem_virtualbase_CustomEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_CustomEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_CustomEvent
func miqt_exec_callback_QGraphicsSvgItem_CustomEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsSvgItem_virtualbase_ConnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsSvgItem_override_virtual_ConnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_ConnectNotify
func miqt_exec_callback_QGraphicsSvgItem_ConnectNotify(self *C.QGraphicsSvgItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsSvgItem_virtualbase_DisconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsSvgItem_override_virtual_DisconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_DisconnectNotify
func miqt_exec_callback_QGraphicsSvgItem_DisconnectNotify(self *C.QGraphicsSvgItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsSvgItem_virtualbase_Advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsSvgItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsSvgItem_override_virtual_Advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Advance
func miqt_exec_callback_QGraphicsSvgItem_Advance(self *C.QGraphicsSvgItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_Shape() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_Shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnShape(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsSvgItem_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Shape
func miqt_exec_callback_QGraphicsSvgItem_Shape(self *C.QGraphicsSvgItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsSvgItem) callVirtualBase_Contains(point *qt.QPointF) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_Contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnContains(slot func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_Contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Contains
func miqt_exec_callback_QGraphicsSvgItem_Contains(self *C.QGraphicsSvgItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_CollidesWithItem(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_CollidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsSvgItem) OnCollidesWithItem(slot func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_CollidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_CollidesWithItem
func miqt_exec_callback_QGraphicsSvgItem_CollidesWithItem(self *C.QGraphicsSvgItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_CollidesWithPath(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_CollidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsSvgItem) OnCollidesWithPath(slot func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_CollidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_CollidesWithPath
func miqt_exec_callback_QGraphicsSvgItem_CollidesWithPath(self *C.QGraphicsSvgItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_IsObscuredBy(item *qt.QGraphicsItem) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_IsObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnIsObscuredBy(slot func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_IsObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_IsObscuredBy
func miqt_exec_callback_QGraphicsSvgItem_IsObscuredBy(self *C.QGraphicsSvgItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_OpaqueArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_OpaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnOpaqueArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsSvgItem_override_virtual_OpaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_OpaqueArea
func miqt_exec_callback_QGraphicsSvgItem_OpaqueArea(self *C.QGraphicsSvgItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsSvgItem) callVirtualBase_SceneEventFilter(watched *qt.QGraphicsItem, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_SceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnSceneEventFilter(slot func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_SceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_SceneEventFilter
func miqt_exec_callback_QGraphicsSvgItem_SceneEventFilter(self *C.QGraphicsSvgItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_SceneEvent(event *qt.QEvent) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_SceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsSvgItem) OnSceneEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_SceneEvent
func miqt_exec_callback_QGraphicsSvgItem_SceneEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_ContextMenuEvent(event *qt.QGraphicsSceneContextMenuEvent) {

	C.QGraphicsSvgItem_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnContextMenuEvent(slot func(super func(event *qt.QGraphicsSceneContextMenuEvent), event *qt.QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_ContextMenuEvent
func miqt_exec_callback_QGraphicsSvgItem_ContextMenuEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneContextMenuEvent), event *qt.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_DragEnterEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsSvgItem_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnDragEnterEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_DragEnterEvent
func miqt_exec_callback_QGraphicsSvgItem_DragEnterEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_DragLeaveEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsSvgItem_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnDragLeaveEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_DragLeaveEvent
func miqt_exec_callback_QGraphicsSvgItem_DragLeaveEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_DragMoveEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsSvgItem_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnDragMoveEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_DragMoveEvent
func miqt_exec_callback_QGraphicsSvgItem_DragMoveEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_DropEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsSvgItem_virtualbase_DropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnDropEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_DropEvent
func miqt_exec_callback_QGraphicsSvgItem_DropEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QGraphicsSvgItem_virtualbase_FocusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_FocusInEvent
func miqt_exec_callback_QGraphicsSvgItem_FocusInEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QGraphicsSvgItem_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_FocusOutEvent
func miqt_exec_callback_QGraphicsSvgItem_FocusOutEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_HoverEnterEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsSvgItem_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnHoverEnterEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_HoverEnterEvent
func miqt_exec_callback_QGraphicsSvgItem_HoverEnterEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_HoverMoveEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsSvgItem_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnHoverMoveEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_HoverMoveEvent
func miqt_exec_callback_QGraphicsSvgItem_HoverMoveEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_HoverLeaveEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsSvgItem_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnHoverLeaveEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_HoverLeaveEvent
func miqt_exec_callback_QGraphicsSvgItem_HoverLeaveEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QGraphicsSvgItem_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_KeyPressEvent
func miqt_exec_callback_QGraphicsSvgItem_KeyPressEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QGraphicsSvgItem_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_KeyReleaseEvent
func miqt_exec_callback_QGraphicsSvgItem_KeyReleaseEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_MousePressEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsSvgItem_virtualbase_MousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnMousePressEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_MousePressEvent
func miqt_exec_callback_QGraphicsSvgItem_MousePressEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_MouseMoveEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsSvgItem_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnMouseMoveEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_MouseMoveEvent
func miqt_exec_callback_QGraphicsSvgItem_MouseMoveEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_MouseReleaseEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsSvgItem_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnMouseReleaseEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_MouseReleaseEvent
func miqt_exec_callback_QGraphicsSvgItem_MouseReleaseEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_MouseDoubleClickEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsSvgItem_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnMouseDoubleClickEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsSvgItem_MouseDoubleClickEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_WheelEvent(event *qt.QGraphicsSceneWheelEvent) {

	C.QGraphicsSvgItem_virtualbase_WheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnWheelEvent(slot func(super func(event *qt.QGraphicsSceneWheelEvent), event *qt.QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_WheelEvent
func miqt_exec_callback_QGraphicsSvgItem_WheelEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneWheelEvent), event *qt.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_InputMethodEvent(event *qt.QInputMethodEvent) {

	C.QGraphicsSvgItem_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnInputMethodEvent(slot func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent)) {
	ok := C.QGraphicsSvgItem_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_InputMethodEvent
func miqt_exec_callback_QGraphicsSvgItem_InputMethodEvent(self *C.QGraphicsSvgItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsSvgItem) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QGraphicsSvgItem_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_InputMethodQuery
func miqt_exec_callback_QGraphicsSvgItem_InputMethodQuery(self *C.QGraphicsSvgItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsSvgItem) callVirtualBase_ItemChange(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnItemChange(slot func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsSvgItem_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_ItemChange
func miqt_exec_callback_QGraphicsSvgItem_ItemChange(self *C.QGraphicsSvgItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsSvgItem) callVirtualBase_SupportsExtension(extension qt.QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsSvgItem_virtualbase_SupportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsSvgItem) OnSupportsExtension(slot func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsSvgItem_override_virtual_SupportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_SupportsExtension
func miqt_exec_callback_QGraphicsSvgItem_SupportsExtension(self *C.QGraphicsSvgItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsSvgItem) callVirtualBase_SetExtension(extension qt.QGraphicsItem__Extension, variant *qt.QVariant) {

	C.QGraphicsSvgItem_virtualbase_SetExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QGraphicsSvgItem) OnSetExtension(slot func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant)) {
	ok := C.QGraphicsSvgItem_override_virtual_SetExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_SetExtension
func miqt_exec_callback_QGraphicsSvgItem_SetExtension(self *C.QGraphicsSvgItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsSvgItem) callVirtualBase_Extension(variant *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsSvgItem_virtualbase_Extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnExtension(slot func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsSvgItem_override_virtual_Extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsSvgItem_Extension
func miqt_exec_callback_QGraphicsSvgItem_Extension(self *C.QGraphicsSvgItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QGraphicsSvgItem) Delete() {
	C.QGraphicsSvgItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSvgItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSvgItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
