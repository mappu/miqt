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
	h          *C.QGraphicsVideoItem
	isSubclass bool
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
func newQGraphicsVideoItem(h *C.QGraphicsVideoItem, h_QGraphicsObject *C.QGraphicsObject, h_QObject *C.QObject, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsVideoItem {
	if h == nil {
		return nil
	}
	return &QGraphicsVideoItem{h: h,
		QGraphicsObject: qt6.UnsafeNewQGraphicsObject(unsafe.Pointer(h_QGraphicsObject), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QGraphicsItem))}
}

// UnsafeNewQGraphicsVideoItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsVideoItem(h unsafe.Pointer, h_QGraphicsObject unsafe.Pointer, h_QObject unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsVideoItem {
	if h == nil {
		return nil
	}

	return &QGraphicsVideoItem{h: (*C.QGraphicsVideoItem)(h),
		QGraphicsObject: qt6.UnsafeNewQGraphicsObject(h_QGraphicsObject, h_QObject, h_QGraphicsItem)}
}

// NewQGraphicsVideoItem constructs a new QGraphicsVideoItem object.
func NewQGraphicsVideoItem() *QGraphicsVideoItem {
	var outptr_QGraphicsVideoItem *C.QGraphicsVideoItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsVideoItem_new(&outptr_QGraphicsVideoItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsVideoItem(outptr_QGraphicsVideoItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsVideoItem2 constructs a new QGraphicsVideoItem object.
func NewQGraphicsVideoItem2(parent *qt6.QGraphicsItem) *QGraphicsVideoItem {
	var outptr_QGraphicsVideoItem *C.QGraphicsVideoItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsVideoItem_new2((*C.QGraphicsItem)(parent.UnsafePointer()), &outptr_QGraphicsVideoItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsVideoItem(outptr_QGraphicsVideoItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQVideoSink(unsafe.Pointer(C.QGraphicsVideoItem_VideoSink(this.h)), nil)
}

func (this *QGraphicsVideoItem) AspectRatioMode() qt6.AspectRatioMode {
	return (qt6.AspectRatioMode)(C.QGraphicsVideoItem_AspectRatioMode(this.h))
}

func (this *QGraphicsVideoItem) SetAspectRatioMode(mode qt6.AspectRatioMode) {
	C.QGraphicsVideoItem_SetAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QGraphicsVideoItem) Offset() *qt6.QPointF {
	_ret := C.QGraphicsVideoItem_Offset(this.h)
	_goptr := qt6.UnsafeNewQPointF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetOffset(offset *qt6.QPointF) {
	C.QGraphicsVideoItem_SetOffset(this.h, (*C.QPointF)(offset.UnsafePointer()))
}

func (this *QGraphicsVideoItem) Size() *qt6.QSizeF {
	_ret := C.QGraphicsVideoItem_Size(this.h)
	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetSize(size *qt6.QSizeF) {
	C.QGraphicsVideoItem_SetSize(this.h, (*C.QSizeF)(size.UnsafePointer()))
}

func (this *QGraphicsVideoItem) NativeSize() *qt6.QSizeF {
	_ret := C.QGraphicsVideoItem_NativeSize(this.h)
	_goptr := qt6.UnsafeNewQSizeF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) BoundingRect() *qt6.QRectF {
	_ret := C.QGraphicsVideoItem_BoundingRect(this.h)
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(_ret))
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

	_ret := C.QGraphicsVideoItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := qt6.UnsafeNewQRectF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnBoundingRect(slot func(super func() *qt6.QRectF) *qt6.QRectF) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsVideoItem_Paint
func miqt_exec_callback_QGraphicsVideoItem_Paint(self *C.QGraphicsVideoItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget), painter *qt6.QPainter, option *qt6.QStyleOptionGraphicsItem, widget *qt6.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := qt6.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := qt6.UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsVideoItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsVideoItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsVideoItem) OnType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_TimerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsVideoItem_TimerEvent
func miqt_exec_callback_QGraphicsVideoItem_TimerEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt6.QTimerEvent), event *qt6.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt6.UnsafeNewQTimerEvent(unsafe.Pointer(event), nil)

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_ItemChange(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant {

	_ret := C.QGraphicsVideoItem_virtualbase_ItemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnItemChange(slot func(super func(change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant, change qt6.QGraphicsItem__GraphicsItemChange, value *qt6.QVariant) *qt6.QVariant) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_ItemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsVideoItem_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QGraphicsVideoItem) Delete() {
	C.QGraphicsVideoItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsVideoItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsVideoItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
