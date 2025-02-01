package qt

/*

#include "gen_qgraphicsproxywidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsProxyWidget__ int

const (
	QGraphicsProxyWidget__Type QGraphicsProxyWidget__ = 12
)

type QGraphicsProxyWidget struct {
	h *C.QGraphicsProxyWidget
	*QGraphicsWidget
}

func (this *QGraphicsProxyWidget) cPointer() *C.QGraphicsProxyWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsProxyWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGraphicsProxyWidget constructs the type using only CGO pointers.
func newQGraphicsProxyWidget(h *C.QGraphicsProxyWidget) *QGraphicsProxyWidget {
	if h == nil {
		return nil
	}
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	C.QGraphicsProxyWidget_virtbase(h, &outptr_QGraphicsWidget)

	return &QGraphicsProxyWidget{h: h,
		QGraphicsWidget: newQGraphicsWidget(outptr_QGraphicsWidget)}
}

// UnsafeNewQGraphicsProxyWidget constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsProxyWidget(h unsafe.Pointer) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget((*C.QGraphicsProxyWidget)(h))
}

// NewQGraphicsProxyWidget constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget() *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new())
}

// NewQGraphicsProxyWidget2 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget2(parent *QGraphicsItem) *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new2(parent.cPointer()))
}

// NewQGraphicsProxyWidget3 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsProxyWidget {

	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_new3(parent.cPointer(), (C.int)(wFlags)))
}

func (this *QGraphicsProxyWidget) MetaObject() *QMetaObject {
	return newQMetaObject(C.QGraphicsProxyWidget_metaObject(this.h))
}

func (this *QGraphicsProxyWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsProxyWidget_metacast(this.h, param1_Cstring))
}

func QGraphicsProxyWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) SetWidget(widget *QWidget) {
	C.QGraphicsProxyWidget_setWidget(this.h, widget.cPointer())
}

func (this *QGraphicsProxyWidget) Widget() *QWidget {
	return newQWidget(C.QGraphicsProxyWidget_widget(this.h))
}

func (this *QGraphicsProxyWidget) SubWidgetRect(widget *QWidget) *QRectF {
	_goptr := newQRectF(C.QGraphicsProxyWidget_subWidgetRect(this.h, widget.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsProxyWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsProxyWidget_setGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsProxyWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsProxyWidget_paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsProxyWidget) Type() int {
	return (int)(C.QGraphicsProxyWidget_type(this.h))
}

func (this *QGraphicsProxyWidget) CreateProxyForChildWidget(child *QWidget) *QGraphicsProxyWidget {
	return newQGraphicsProxyWidget(C.QGraphicsProxyWidget_createProxyForChildWidget(this.h, child.cPointer()))
}

func QGraphicsProxyWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsProxyWidget_virtualbase_setGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsProxyWidget) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	ok := C.QGraphicsProxyWidget_override_virtual_setGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_setGeometry
func miqt_exec_callback_QGraphicsProxyWidget_setGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQRectF(rect)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsProxyWidget_virtualbase_paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsProxyWidget_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_paint
func miqt_exec_callback_QGraphicsProxyWidget_paint(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Type() int {

	return (int)(C.QGraphicsProxyWidget_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsProxyWidget) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsProxyWidget_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_type
func miqt_exec_callback_QGraphicsProxyWidget_type(self *C.QGraphicsProxyWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_itemChange
func miqt_exec_callback_QGraphicsProxyWidget_itemChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_event
func miqt_exec_callback_QGraphicsProxyWidget_event(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_eventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_eventFilter
func miqt_exec_callback_QGraphicsProxyWidget_eventFilter(self *C.QGraphicsProxyWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(object)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsProxyWidget_virtualbase_showEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_showEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_showEvent
func miqt_exec_callback_QGraphicsProxyWidget_showEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsProxyWidget_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_hideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_hideEvent
func miqt_exec_callback_QGraphicsProxyWidget_hideEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsProxyWidget_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_contextMenuEvent
func miqt_exec_callback_QGraphicsProxyWidget_contextMenuEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneContextMenuEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_dragEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_dragEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_dragLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_dragLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_dragMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_dragMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_dropEvent
func miqt_exec_callback_QGraphicsProxyWidget_dropEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneDragDropEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_hoverEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_hoverEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_hoverLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_hoverLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_hoverMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_hoverMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneHoverEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_grabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_grabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_grabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_grabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_ungrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ungrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ungrabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_ungrabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_mouseMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_mouseMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_mousePressEvent
func miqt_exec_callback_QGraphicsProxyWidget_mousePressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_mouseReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_mouseReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsProxyWidget_mouseDoubleClickEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMouseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsProxyWidget_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_wheelEvent
func miqt_exec_callback_QGraphicsProxyWidget_wheelEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneWheelEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_keyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_keyPressEvent
func miqt_exec_callback_QGraphicsProxyWidget_keyPressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_keyReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_keyReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_focusInEvent
func miqt_exec_callback_QGraphicsProxyWidget_focusInEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_focusOutEvent
func miqt_exec_callback_QGraphicsProxyWidget_focusOutEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsProxyWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_focusNextPrevChild
func miqt_exec_callback_QGraphicsProxyWidget_focusNextPrevChild(self *C.QGraphicsProxyWidget, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_InputMethodQuery(query InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_inputMethodQuery
func miqt_exec_callback_QGraphicsProxyWidget_inputMethodQuery(self *C.QGraphicsProxyWidget, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_InputMethodEvent(event *QInputMethodEvent) {

	C.QGraphicsProxyWidget_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_inputMethodEvent
func miqt_exec_callback_QGraphicsProxyWidget_inputMethodEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_goptr := newQSizeF(C.QGraphicsProxyWidget_virtualbase_sizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	ok := C.QGraphicsProxyWidget_override_virtual_sizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_sizeHint
func miqt_exec_callback_QGraphicsProxyWidget_sizeHint(self *C.QGraphicsProxyWidget, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := newQSizeF(constraint)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_ResizeEvent(event *QGraphicsSceneResizeEvent) {

	C.QGraphicsProxyWidget_virtualbase_resizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnResizeEvent(slot func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_resizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_resizeEvent
func miqt_exec_callback_QGraphicsProxyWidget_resizeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneResizeEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsProxyWidget_virtualbase_getContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsProxyWidget) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	ok := C.QGraphicsProxyWidget_override_virtual_getContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_getContentsMargins
func miqt_exec_callback_QGraphicsProxyWidget_getContentsMargins(self *C.QGraphicsProxyWidget, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (*float64)(unsafe.Pointer(left))

	slotval2 := (*float64)(unsafe.Pointer(top))

	slotval3 := (*float64)(unsafe.Pointer(right))

	slotval4 := (*float64)(unsafe.Pointer(bottom))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GetContentsMargins, slotval1, slotval2, slotval3, slotval4)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PaintWindowFrame(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsProxyWidget_virtualbase_paintWindowFrame(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaintWindowFrame(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	ok := C.QGraphicsProxyWidget_override_virtual_paintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_paintWindowFrame
func miqt_exec_callback_QGraphicsProxyWidget_paintWindowFrame(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	slotval2 := newQStyleOptionGraphicsItem(option)

	slotval3 := newQWidget(widget)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_BoundingRect() *QRectF {

	_goptr := newQRectF(C.QGraphicsProxyWidget_virtualbase_boundingRect(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	ok := C.QGraphicsProxyWidget_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_boundingRect
func miqt_exec_callback_QGraphicsProxyWidget_boundingRect(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Shape() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsProxyWidget_virtualbase_shape(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsProxyWidget_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_shape
func miqt_exec_callback_QGraphicsProxyWidget_shape(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QGraphicsProxyWidget_virtualbase_initStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsProxyWidget) OnInitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	ok := C.QGraphicsProxyWidget_override_virtual_initStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_initStyleOption
func miqt_exec_callback_QGraphicsProxyWidget_initStyleOption(self *C.QGraphicsProxyWidget, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQStyleOption(option)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UpdateGeometry() {

	C.QGraphicsProxyWidget_virtualbase_updateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnUpdateGeometry(slot func(super func())) {
	ok := C.QGraphicsProxyWidget_override_virtual_updateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_updateGeometry
func miqt_exec_callback_QGraphicsProxyWidget_updateGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UpdateGeometry)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PropertyChange(propertyName string, value *QVariant) *QVariant {
	propertyName_ms := C.struct_miqt_string{}
	propertyName_ms.data = C.CString(propertyName)
	propertyName_ms.len = C.size_t(len(propertyName))
	defer C.free(unsafe.Pointer(propertyName_ms.data))

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_propertyChange(unsafe.Pointer(this.h), propertyName_ms, value.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnPropertyChange(slot func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_propertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_propertyChange
func miqt_exec_callback_QGraphicsProxyWidget_propertyChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := newQVariant(value)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_sceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_sceneEvent
func miqt_exec_callback_QGraphicsProxyWidget_sceneEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameEvent(e *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_windowFrameEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_windowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_windowFrameEvent
func miqt_exec_callback_QGraphicsProxyWidget_windowFrameEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(e)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameSectionAt(pos *QPointF) WindowFrameSection {

	return (WindowFrameSection)(C.QGraphicsProxyWidget_virtualbase_windowFrameSectionAt(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameSectionAt(slot func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection) {
	ok := C.QGraphicsProxyWidget_override_virtual_windowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_windowFrameSectionAt
func miqt_exec_callback_QGraphicsProxyWidget_windowFrameSectionAt(self *C.QGraphicsProxyWidget, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(pos)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_changeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_changeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_changeEvent
func miqt_exec_callback_QGraphicsProxyWidget_changeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsProxyWidget_virtualbase_closeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_closeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_closeEvent
func miqt_exec_callback_QGraphicsProxyWidget_closeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MoveEvent(event *QGraphicsSceneMoveEvent) {

	C.QGraphicsProxyWidget_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMoveEvent(slot func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_moveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_moveEvent
func miqt_exec_callback_QGraphicsProxyWidget_moveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsSceneMoveEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PolishEvent() {

	C.QGraphicsProxyWidget_virtualbase_polishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnPolishEvent(slot func(super func())) {
	ok := C.QGraphicsProxyWidget_override_virtual_polishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_polishEvent
func miqt_exec_callback_QGraphicsProxyWidget_polishEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_grabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_grabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_grabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_grabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_ungrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_ungrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_ungrabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_ungrabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QGraphicsProxyWidget_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_timerEvent
func miqt_exec_callback_QGraphicsProxyWidget_timerEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QGraphicsProxyWidget_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_childEvent
func miqt_exec_callback_QGraphicsProxyWidget_childEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CustomEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	ok := C.QGraphicsProxyWidget_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_customEvent
func miqt_exec_callback_QGraphicsProxyWidget_customEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QGraphicsProxyWidget_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsProxyWidget) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsProxyWidget_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_connectNotify
func miqt_exec_callback_QGraphicsProxyWidget_connectNotify(self *C.QGraphicsProxyWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QGraphicsProxyWidget_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QGraphicsProxyWidget) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	ok := C.QGraphicsProxyWidget_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_disconnectNotify
func miqt_exec_callback_QGraphicsProxyWidget_disconnectNotify(self *C.QGraphicsProxyWidget, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Advance(phase int) {

	C.QGraphicsProxyWidget_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsProxyWidget) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsProxyWidget_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_advance
func miqt_exec_callback_QGraphicsProxyWidget_advance(self *C.QGraphicsProxyWidget, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Contains(point *QPointF) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_contains(unsafe.Pointer(this.h), point.cPointer()))

}
func (this *QGraphicsProxyWidget) OnContains(slot func(super func(point *QPointF) bool, point *QPointF) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_contains
func miqt_exec_callback_QGraphicsProxyWidget_contains(self *C.QGraphicsProxyWidget, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *QPointF) bool, point *QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPointF(point)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CollidesWithItem(other *QGraphicsItem, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_collidesWithItem(unsafe.Pointer(this.h), other.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsProxyWidget) OnCollidesWithItem(slot func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_collidesWithItem
func miqt_exec_callback_QGraphicsProxyWidget_collidesWithItem(self *C.QGraphicsProxyWidget, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *QGraphicsItem, mode ItemSelectionMode) bool, other *QGraphicsItem, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(other)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CollidesWithPath(path *QPainterPath, mode ItemSelectionMode) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_collidesWithPath(unsafe.Pointer(this.h), path.cPointer(), (C.int)(mode)))

}
func (this *QGraphicsProxyWidget) OnCollidesWithPath(slot func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_collidesWithPath
func miqt_exec_callback_QGraphicsProxyWidget_collidesWithPath(self *C.QGraphicsProxyWidget, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *QPainterPath, mode ItemSelectionMode) bool, path *QPainterPath, mode ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainterPath(path)

	slotval2 := (ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_IsObscuredBy(item *QGraphicsItem) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_isObscuredBy(unsafe.Pointer(this.h), item.cPointer()))

}
func (this *QGraphicsProxyWidget) OnIsObscuredBy(slot func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_isObscuredBy
func miqt_exec_callback_QGraphicsProxyWidget_isObscuredBy(self *C.QGraphicsProxyWidget, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *QGraphicsItem) bool, item *QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(item)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_OpaqueArea() *QPainterPath {

	_goptr := newQPainterPath(C.QGraphicsProxyWidget_virtualbase_opaqueArea(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnOpaqueArea(slot func(super func() *QPainterPath) *QPainterPath) {
	ok := C.QGraphicsProxyWidget_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_opaqueArea
func miqt_exec_callback_QGraphicsProxyWidget_opaqueArea(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_OpaqueArea)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_SceneEventFilter(watched *QGraphicsItem, event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), watched.cPointer(), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnSceneEventFilter(slot func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_sceneEventFilter
func miqt_exec_callback_QGraphicsProxyWidget_sceneEventFilter(self *C.QGraphicsProxyWidget, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *QGraphicsItem, event *QEvent) bool, watched *QGraphicsItem, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQGraphicsItem(watched)

	slotval2 := newQEvent(event)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SupportsExtension(extension QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsProxyWidget) OnSupportsExtension(slot func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsProxyWidget_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_supportsExtension
func miqt_exec_callback_QGraphicsProxyWidget_supportsExtension(self *C.QGraphicsProxyWidget, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension) bool, extension QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SetExtension(extension QGraphicsItem__Extension, variant *QVariant) {

	C.QGraphicsProxyWidget_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), variant.cPointer())

}
func (this *QGraphicsProxyWidget) OnSetExtension(slot func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant)) {
	ok := C.QGraphicsProxyWidget_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_setExtension
func miqt_exec_callback_QGraphicsProxyWidget_setExtension(self *C.QGraphicsProxyWidget, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension QGraphicsItem__Extension, variant *QVariant), extension QGraphicsItem__Extension, variant *QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__Extension)(extension)

	slotval2 := newQVariant(variant)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Extension(variant *QVariant) *QVariant {

	_goptr := newQVariant(C.QGraphicsProxyWidget_virtualbase_extension(unsafe.Pointer(this.h), variant.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnExtension(slot func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant) {
	ok := C.QGraphicsProxyWidget_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsProxyWidget_extension
func miqt_exec_callback_QGraphicsProxyWidget_extension(self *C.QGraphicsProxyWidget, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *QVariant) *QVariant, variant *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQVariant(variant)

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Extension, slotval1)

	return virtualReturn.cPointer()

}

// Delete this object from C++ memory.
func (this *QGraphicsProxyWidget) Delete() {
	C.QGraphicsProxyWidget_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsProxyWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsProxyWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
