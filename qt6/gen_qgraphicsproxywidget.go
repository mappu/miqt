package qt6

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
	h          *C.QGraphicsProxyWidget
	isSubclass bool
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
func newQGraphicsProxyWidget(h *C.QGraphicsProxyWidget, h_QGraphicsWidget *C.QGraphicsWidget, h_QGraphicsObject *C.QGraphicsObject, h_QObject *C.QObject, h_QGraphicsItem *C.QGraphicsItem, h_QGraphicsLayoutItem *C.QGraphicsLayoutItem) *QGraphicsProxyWidget {
	if h == nil {
		return nil
	}
	return &QGraphicsProxyWidget{h: h,
		QGraphicsWidget: newQGraphicsWidget(h_QGraphicsWidget, h_QGraphicsObject, h_QObject, h_QGraphicsItem, h_QGraphicsLayoutItem)}
}

// UnsafeNewQGraphicsProxyWidget constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsProxyWidget(h unsafe.Pointer, h_QGraphicsWidget unsafe.Pointer, h_QGraphicsObject unsafe.Pointer, h_QObject unsafe.Pointer, h_QGraphicsItem unsafe.Pointer, h_QGraphicsLayoutItem unsafe.Pointer) *QGraphicsProxyWidget {
	if h == nil {
		return nil
	}

	return &QGraphicsProxyWidget{h: (*C.QGraphicsProxyWidget)(h),
		QGraphicsWidget: UnsafeNewQGraphicsWidget(h_QGraphicsWidget, h_QGraphicsObject, h_QObject, h_QGraphicsItem, h_QGraphicsLayoutItem)}
}

// NewQGraphicsProxyWidget constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget() *QGraphicsProxyWidget {
	var outptr_QGraphicsProxyWidget *C.QGraphicsProxyWidget = nil
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsProxyWidget_new(&outptr_QGraphicsProxyWidget, &outptr_QGraphicsWidget, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsProxyWidget(outptr_QGraphicsProxyWidget, outptr_QGraphicsWidget, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsProxyWidget2 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget2(parent *QGraphicsItem) *QGraphicsProxyWidget {
	var outptr_QGraphicsProxyWidget *C.QGraphicsProxyWidget = nil
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsProxyWidget_new2(parent.cPointer(), &outptr_QGraphicsProxyWidget, &outptr_QGraphicsWidget, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsProxyWidget(outptr_QGraphicsProxyWidget, outptr_QGraphicsWidget, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsProxyWidget3 constructs a new QGraphicsProxyWidget object.
func NewQGraphicsProxyWidget3(parent *QGraphicsItem, wFlags WindowType) *QGraphicsProxyWidget {
	var outptr_QGraphicsProxyWidget *C.QGraphicsProxyWidget = nil
	var outptr_QGraphicsWidget *C.QGraphicsWidget = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil
	var outptr_QGraphicsLayoutItem *C.QGraphicsLayoutItem = nil

	C.QGraphicsProxyWidget_new3(parent.cPointer(), (C.int)(wFlags), &outptr_QGraphicsProxyWidget, &outptr_QGraphicsWidget, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem, &outptr_QGraphicsLayoutItem)
	ret := newQGraphicsProxyWidget(outptr_QGraphicsProxyWidget, outptr_QGraphicsWidget, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem, outptr_QGraphicsLayoutItem)
	ret.isSubclass = true
	return ret
}

func (this *QGraphicsProxyWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsProxyWidget_MetaObject(this.h)))
}

func (this *QGraphicsProxyWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsProxyWidget_Metacast(this.h, param1_Cstring))
}

func QGraphicsProxyWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) SetWidget(widget *QWidget) {
	C.QGraphicsProxyWidget_SetWidget(this.h, widget.cPointer())
}

func (this *QGraphicsProxyWidget) Widget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QGraphicsProxyWidget_Widget(this.h)), nil, nil)
}

func (this *QGraphicsProxyWidget) SubWidgetRect(widget *QWidget) *QRectF {
	_ret := C.QGraphicsProxyWidget_SubWidgetRect(this.h, widget.cPointer())
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsProxyWidget) SetGeometry(rect *QRectF) {
	C.QGraphicsProxyWidget_SetGeometry(this.h, rect.cPointer())
}

func (this *QGraphicsProxyWidget) Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {
	C.QGraphicsProxyWidget_Paint(this.h, painter.cPointer(), option.cPointer(), widget.cPointer())
}

func (this *QGraphicsProxyWidget) Type() int {
	return (int)(C.QGraphicsProxyWidget_Type(this.h))
}

func (this *QGraphicsProxyWidget) CreateProxyForChildWidget(child *QWidget) *QGraphicsProxyWidget {
	return UnsafeNewQGraphicsProxyWidget(unsafe.Pointer(C.QGraphicsProxyWidget_CreateProxyForChildWidget(this.h, child.cPointer())), nil, nil, nil, nil, nil)
}

func QGraphicsProxyWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsProxyWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsProxyWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsProxyWidget) callVirtualBase_SetGeometry(rect *QRectF) {

	C.QGraphicsProxyWidget_virtualbase_SetGeometry(unsafe.Pointer(this.h), rect.cPointer())

}
func (this *QGraphicsProxyWidget) OnSetGeometry(slot func(super func(rect *QRectF), rect *QRectF)) {
	C.QGraphicsProxyWidget_override_virtual_SetGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_SetGeometry
func miqt_exec_callback_QGraphicsProxyWidget_SetGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t, rect *C.QRectF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(rect *QRectF), rect *QRectF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQRectF(unsafe.Pointer(rect))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SetGeometry, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Paint(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget) {

	C.QGraphicsProxyWidget_virtualbase_Paint(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaint(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsProxyWidget_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_Paint
func miqt_exec_callback_QGraphicsProxyWidget_Paint(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_Type() int {

	return (int)(C.QGraphicsProxyWidget_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsProxyWidget) OnType(slot func(super func() int) int) {
	C.QGraphicsProxyWidget_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_Type
func miqt_exec_callback_QGraphicsProxyWidget_Type(self *C.QGraphicsProxyWidget, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ItemChange(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant {

	_ret := C.QGraphicsProxyWidget_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), value.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnItemChange(slot func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant) {
	C.QGraphicsProxyWidget_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_ItemChange
func miqt_exec_callback_QGraphicsProxyWidget_ItemChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant, change QGraphicsItem__GraphicsItemChange, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsProxyWidget_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_Event
func miqt_exec_callback_QGraphicsProxyWidget_Event(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_EventFilter(object *QObject, event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_EventFilter(unsafe.Pointer(this.h), object.cPointer(), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnEventFilter(slot func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool) {
	C.QGraphicsProxyWidget_override_virtual_EventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_EventFilter
func miqt_exec_callback_QGraphicsProxyWidget_EventFilter(self *C.QGraphicsProxyWidget, cb C.intptr_t, object *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QObject, event *QEvent) bool, object *QObject, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(object))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ShowEvent(event *QShowEvent) {

	C.QGraphicsProxyWidget_virtualbase_ShowEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnShowEvent(slot func(super func(event *QShowEvent), event *QShowEvent)) {
	C.QGraphicsProxyWidget_override_virtual_ShowEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_ShowEvent
func miqt_exec_callback_QGraphicsProxyWidget_ShowEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QShowEvent), event *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQShowEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QGraphicsProxyWidget_virtualbase_HideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	C.QGraphicsProxyWidget_override_virtual_HideEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_HideEvent
func miqt_exec_callback_QGraphicsProxyWidget_HideEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQHideEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ContextMenuEvent(event *QGraphicsSceneContextMenuEvent) {

	C.QGraphicsProxyWidget_virtualbase_ContextMenuEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnContextMenuEvent(slot func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent)) {
	C.QGraphicsProxyWidget_override_virtual_ContextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent
func miqt_exec_callback_QGraphicsProxyWidget_ContextMenuEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneContextMenuEvent), event *QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragEnterEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragEnterEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsProxyWidget_override_virtual_DragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragLeaveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragLeaveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsProxyWidget_override_virtual_DragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DragMoveEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDragMoveEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsProxyWidget_override_virtual_DragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_DragMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_DropEvent(event *QGraphicsSceneDragDropEvent) {

	C.QGraphicsProxyWidget_virtualbase_DropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnDropEvent(slot func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent)) {
	C.QGraphicsProxyWidget_override_virtual_DropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_DropEvent
func miqt_exec_callback_QGraphicsProxyWidget_DropEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneDragDropEvent), event *QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverEnterEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverEnterEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsProxyWidget_override_virtual_HoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverEnterEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverLeaveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverLeaveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsProxyWidget_override_virtual_HoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverLeaveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_HoverMoveEvent(event *QGraphicsSceneHoverEvent) {

	C.QGraphicsProxyWidget_virtualbase_HoverMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnHoverMoveEvent(slot func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent)) {
	C.QGraphicsProxyWidget_override_virtual_HoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_HoverMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneHoverEvent), event *QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_GrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGraphicsProxyWidget_override_virtual_GrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_GrabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabMouseEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_UngrabMouseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabMouseEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGraphicsProxyWidget_override_virtual_UngrabMouseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent
func miqt_exec_callback_QGraphicsProxyWidget_UngrabMouseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabMouseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseMoveEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseMoveEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsProxyWidget_override_virtual_MouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseMoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MousePressEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMousePressEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsProxyWidget_override_virtual_MousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent
func miqt_exec_callback_QGraphicsProxyWidget_MousePressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseReleaseEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseReleaseEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsProxyWidget_override_virtual_MouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MouseDoubleClickEvent(event *QGraphicsSceneMouseEvent) {

	C.QGraphicsProxyWidget_virtualbase_MouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMouseDoubleClickEvent(slot func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent)) {
	C.QGraphicsProxyWidget_override_virtual_MouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent
func miqt_exec_callback_QGraphicsProxyWidget_MouseDoubleClickEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMouseEvent), event *QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WheelEvent(event *QGraphicsSceneWheelEvent) {

	C.QGraphicsProxyWidget_virtualbase_WheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnWheelEvent(slot func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent)) {
	C.QGraphicsProxyWidget_override_virtual_WheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_WheelEvent
func miqt_exec_callback_QGraphicsProxyWidget_WheelEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneWheelEvent), event *QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyPressEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_KeyPressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyPressEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsProxyWidget_override_virtual_KeyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent
func miqt_exec_callback_QGraphicsProxyWidget_KeyPressEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QGraphicsProxyWidget_virtualbase_KeyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	C.QGraphicsProxyWidget_override_virtual_KeyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent
func miqt_exec_callback_QGraphicsProxyWidget_KeyReleaseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQKeyEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_FocusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsProxyWidget_override_virtual_FocusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent
func miqt_exec_callback_QGraphicsProxyWidget_FocusInEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QGraphicsProxyWidget_virtualbase_FocusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	C.QGraphicsProxyWidget_override_virtual_FocusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent
func miqt_exec_callback_QGraphicsProxyWidget_FocusOutEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQFocusEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_FocusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QGraphicsProxyWidget) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	C.QGraphicsProxyWidget_override_virtual_FocusNextPrevChild(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild
func miqt_exec_callback_QGraphicsProxyWidget_FocusNextPrevChild(self *C.QGraphicsProxyWidget, cb C.intptr_t, next C.bool) C.bool {
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

	_ret := C.QGraphicsProxyWidget_virtualbase_InputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnInputMethodQuery(slot func(super func(query InputMethodQuery) *QVariant, query InputMethodQuery) *QVariant) {
	C.QGraphicsProxyWidget_override_virtual_InputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery
func miqt_exec_callback_QGraphicsProxyWidget_InputMethodQuery(self *C.QGraphicsProxyWidget, cb C.intptr_t, query C.int) *C.QVariant {
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

	C.QGraphicsProxyWidget_virtualbase_InputMethodEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnInputMethodEvent(slot func(super func(event *QInputMethodEvent), event *QInputMethodEvent)) {
	C.QGraphicsProxyWidget_override_virtual_InputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent
func miqt_exec_callback_QGraphicsProxyWidget_InputMethodEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QInputMethodEvent), event *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQInputMethodEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_SizeHint(which SizeHint, constraint *QSizeF) *QSizeF {

	_ret := C.QGraphicsProxyWidget_virtualbase_SizeHint(unsafe.Pointer(this.h), (C.int)(which), constraint.cPointer())
	_goptr := newQSizeF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnSizeHint(slot func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF) {
	C.QGraphicsProxyWidget_override_virtual_SizeHint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_SizeHint
func miqt_exec_callback_QGraphicsProxyWidget_SizeHint(self *C.QGraphicsProxyWidget, cb C.intptr_t, which C.int, constraint *C.QSizeF) *C.QSizeF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(which SizeHint, constraint *QSizeF) *QSizeF, which SizeHint, constraint *QSizeF) *QSizeF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (SizeHint)(which)

	slotval2 := UnsafeNewQSizeF(unsafe.Pointer(constraint))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SizeHint, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_ResizeEvent(event *QGraphicsSceneResizeEvent) {

	C.QGraphicsProxyWidget_virtualbase_ResizeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnResizeEvent(slot func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent)) {
	C.QGraphicsProxyWidget_override_virtual_ResizeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent
func miqt_exec_callback_QGraphicsProxyWidget_ResizeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneResizeEvent), event *QGraphicsSceneResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneResizeEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GetContentsMargins(left *float64, top *float64, right *float64, bottom *float64) {

	C.QGraphicsProxyWidget_virtualbase_GetContentsMargins(unsafe.Pointer(this.h), (*C.double)(unsafe.Pointer(left)), (*C.double)(unsafe.Pointer(top)), (*C.double)(unsafe.Pointer(right)), (*C.double)(unsafe.Pointer(bottom)))

}
func (this *QGraphicsProxyWidget) OnGetContentsMargins(slot func(super func(left *float64, top *float64, right *float64, bottom *float64), left *float64, top *float64, right *float64, bottom *float64)) {
	C.QGraphicsProxyWidget_override_virtual_GetContentsMargins(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins
func miqt_exec_callback_QGraphicsProxyWidget_GetContentsMargins(self *C.QGraphicsProxyWidget, cb C.intptr_t, left *C.double, top *C.double, right *C.double, bottom *C.double) {
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

	C.QGraphicsProxyWidget_virtualbase_PaintWindowFrame(unsafe.Pointer(this.h), painter.cPointer(), option.cPointer(), widget.cPointer())

}
func (this *QGraphicsProxyWidget) OnPaintWindowFrame(slot func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget)) {
	C.QGraphicsProxyWidget_override_virtual_PaintWindowFrame(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame
func miqt_exec_callback_QGraphicsProxyWidget_PaintWindowFrame(self *C.QGraphicsProxyWidget, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget), painter *QPainter, option *QStyleOptionGraphicsItem, widget *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PaintWindowFrame, slotval1, slotval2, slotval3)

}

func (this *QGraphicsProxyWidget) callVirtualBase_BoundingRect() *QRectF {

	_ret := C.QGraphicsProxyWidget_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnBoundingRect(slot func(super func() *QRectF) *QRectF) {
	C.QGraphicsProxyWidget_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_BoundingRect
func miqt_exec_callback_QGraphicsProxyWidget_BoundingRect(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QRectF) *QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_BoundingRect)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_Shape() *QPainterPath {

	_ret := C.QGraphicsProxyWidget_virtualbase_Shape(unsafe.Pointer(this.h))
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnShape(slot func(super func() *QPainterPath) *QPainterPath) {
	C.QGraphicsProxyWidget_override_virtual_Shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_Shape
func miqt_exec_callback_QGraphicsProxyWidget_Shape(self *C.QGraphicsProxyWidget, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainterPath) *QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_Shape)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_InitStyleOption(option *QStyleOption) {

	C.QGraphicsProxyWidget_virtualbase_InitStyleOption(unsafe.Pointer(this.h), option.cPointer())

}
func (this *QGraphicsProxyWidget) OnInitStyleOption(slot func(super func(option *QStyleOption), option *QStyleOption)) {
	C.QGraphicsProxyWidget_override_virtual_InitStyleOption(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption
func miqt_exec_callback_QGraphicsProxyWidget_InitStyleOption(self *C.QGraphicsProxyWidget, cb C.intptr_t, option *C.QStyleOption) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(option *QStyleOption), option *QStyleOption))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQStyleOption(unsafe.Pointer(option))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_InitStyleOption, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UpdateGeometry() {

	C.QGraphicsProxyWidget_virtualbase_UpdateGeometry(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnUpdateGeometry(slot func(super func())) {
	C.QGraphicsProxyWidget_override_virtual_UpdateGeometry(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry
func miqt_exec_callback_QGraphicsProxyWidget_UpdateGeometry(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
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

	_ret := C.QGraphicsProxyWidget_virtualbase_PropertyChange(unsafe.Pointer(this.h), propertyName_ms, value.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsProxyWidget) OnPropertyChange(slot func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant) {
	C.QGraphicsProxyWidget_override_virtual_PropertyChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_PropertyChange
func miqt_exec_callback_QGraphicsProxyWidget_PropertyChange(self *C.QGraphicsProxyWidget, cb C.intptr_t, propertyName C.struct_miqt_string, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(propertyName string, value *QVariant) *QVariant, propertyName string, value *QVariant) *QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var propertyName_ms C.struct_miqt_string = propertyName
	propertyName_ret := C.GoStringN(propertyName_ms.data, C.int(int64(propertyName_ms.len)))
	C.free(unsafe.Pointer(propertyName_ms.data))
	slotval1 := propertyName_ret
	slotval2 := UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PropertyChange, slotval1, slotval2)

	return virtualReturn.cPointer()

}

func (this *QGraphicsProxyWidget) callVirtualBase_SceneEvent(event *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_SceneEvent(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QGraphicsProxyWidget) OnSceneEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QGraphicsProxyWidget_override_virtual_SceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_SceneEvent
func miqt_exec_callback_QGraphicsProxyWidget_SceneEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameEvent(e *QEvent) bool {

	return (bool)(C.QGraphicsProxyWidget_virtualbase_WindowFrameEvent(unsafe.Pointer(this.h), e.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameEvent(slot func(super func(e *QEvent) bool, e *QEvent) bool) {
	C.QGraphicsProxyWidget_override_virtual_WindowFrameEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent
func miqt_exec_callback_QGraphicsProxyWidget_WindowFrameEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, e *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(e *QEvent) bool, e *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(e))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_WindowFrameSectionAt(pos *QPointF) WindowFrameSection {

	return (WindowFrameSection)(C.QGraphicsProxyWidget_virtualbase_WindowFrameSectionAt(unsafe.Pointer(this.h), pos.cPointer()))

}
func (this *QGraphicsProxyWidget) OnWindowFrameSectionAt(slot func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection) {
	C.QGraphicsProxyWidget_override_virtual_WindowFrameSectionAt(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt
func miqt_exec_callback_QGraphicsProxyWidget_WindowFrameSectionAt(self *C.QGraphicsProxyWidget, cb C.intptr_t, pos *C.QPointF) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(pos *QPointF) WindowFrameSection, pos *QPointF) WindowFrameSection)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQPointF(unsafe.Pointer(pos))

	virtualReturn := gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_WindowFrameSectionAt, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsProxyWidget) callVirtualBase_ChangeEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_ChangeEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnChangeEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGraphicsProxyWidget_override_virtual_ChangeEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent
func miqt_exec_callback_QGraphicsProxyWidget_ChangeEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_CloseEvent(event *QCloseEvent) {

	C.QGraphicsProxyWidget_virtualbase_CloseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnCloseEvent(slot func(super func(event *QCloseEvent), event *QCloseEvent)) {
	C.QGraphicsProxyWidget_override_virtual_CloseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_CloseEvent
func miqt_exec_callback_QGraphicsProxyWidget_CloseEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QCloseEvent), event *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQCloseEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_MoveEvent(event *QGraphicsSceneMoveEvent) {

	C.QGraphicsProxyWidget_virtualbase_MoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnMoveEvent(slot func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent)) {
	C.QGraphicsProxyWidget_override_virtual_MoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_MoveEvent
func miqt_exec_callback_QGraphicsProxyWidget_MoveEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QGraphicsSceneMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QGraphicsSceneMoveEvent), event *QGraphicsSceneMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQGraphicsSceneMoveEvent(unsafe.Pointer(event), nil, nil)

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_PolishEvent() {

	C.QGraphicsProxyWidget_virtualbase_PolishEvent(unsafe.Pointer(this.h))

}
func (this *QGraphicsProxyWidget) OnPolishEvent(slot func(super func())) {
	C.QGraphicsProxyWidget_override_virtual_PolishEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_PolishEvent
func miqt_exec_callback_QGraphicsProxyWidget_PolishEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_PolishEvent)

}

func (this *QGraphicsProxyWidget) callVirtualBase_GrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_GrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnGrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGraphicsProxyWidget_override_virtual_GrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_GrabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_GrabKeyboardEvent, slotval1)

}

func (this *QGraphicsProxyWidget) callVirtualBase_UngrabKeyboardEvent(event *QEvent) {

	C.QGraphicsProxyWidget_virtualbase_UngrabKeyboardEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QGraphicsProxyWidget) OnUngrabKeyboardEvent(slot func(super func(event *QEvent), event *QEvent)) {
	C.QGraphicsProxyWidget_override_virtual_UngrabKeyboardEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent
func miqt_exec_callback_QGraphicsProxyWidget_UngrabKeyboardEvent(self *C.QGraphicsProxyWidget, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsProxyWidget{h: self}).callVirtualBase_UngrabKeyboardEvent, slotval1)

}

// Delete this object from C++ memory.
func (this *QGraphicsProxyWidget) Delete() {
	C.QGraphicsProxyWidget_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsProxyWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsProxyWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
