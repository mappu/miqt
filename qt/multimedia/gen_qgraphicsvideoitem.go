package multimedia

/*

#include "gen_qgraphicsvideoitem.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsVideoItem struct {
	h *C.QGraphicsVideoItem
	*qt.QGraphicsObject
	*QMediaBindableInterface
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
	var outptr_QMediaBindableInterface *C.QMediaBindableInterface = nil
	C.QGraphicsVideoItem_virtbase(h, &outptr_QGraphicsObject, &outptr_QMediaBindableInterface)

	return &QGraphicsVideoItem{h: h,
		QGraphicsObject:         qt.UnsafeNewQGraphicsObject(unsafe.Pointer(outptr_QGraphicsObject)),
		QMediaBindableInterface: newQMediaBindableInterface(outptr_QMediaBindableInterface)}
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
func NewQGraphicsVideoItem2(parent *qt.QGraphicsItem) *QGraphicsVideoItem {

	return newQGraphicsVideoItem(C.QGraphicsVideoItem_new2((*C.QGraphicsItem)(parent.UnsafePointer())))
}

func (this *QGraphicsVideoItem) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsVideoItem_metaObject(this.h)))
}

func (this *QGraphicsVideoItem) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsVideoItem_metacast(this.h, param1_Cstring))
}

func QGraphicsVideoItem_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsVideoItem_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_trUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsVideoItem) MediaObject() *QMediaObject {
	return newQMediaObject(C.QGraphicsVideoItem_mediaObject(this.h))
}

func (this *QGraphicsVideoItem) VideoSurface() *QAbstractVideoSurface {
	return newQAbstractVideoSurface(C.QGraphicsVideoItem_videoSurface(this.h))
}

func (this *QGraphicsVideoItem) AspectRatioMode() qt.AspectRatioMode {
	return (qt.AspectRatioMode)(C.QGraphicsVideoItem_aspectRatioMode(this.h))
}

func (this *QGraphicsVideoItem) SetAspectRatioMode(mode qt.AspectRatioMode) {
	C.QGraphicsVideoItem_setAspectRatioMode(this.h, (C.int)(mode))
}

func (this *QGraphicsVideoItem) Offset() *qt.QPointF {
	_goptr := qt.UnsafeNewQPointF(unsafe.Pointer(C.QGraphicsVideoItem_offset(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetOffset(offset *qt.QPointF) {
	C.QGraphicsVideoItem_setOffset(this.h, (*C.QPointF)(offset.UnsafePointer()))
}

func (this *QGraphicsVideoItem) Size() *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsVideoItem_size(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) SetSize(size *qt.QSizeF) {
	C.QGraphicsVideoItem_setSize(this.h, (*C.QSizeF)(size.UnsafePointer()))
}

func (this *QGraphicsVideoItem) NativeSize() *qt.QSizeF {
	_goptr := qt.UnsafeNewQSizeF(unsafe.Pointer(C.QGraphicsVideoItem_nativeSize(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) BoundingRect() *qt.QRectF {
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsVideoItem_boundingRect(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsVideoItem) Paint(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {
	C.QGraphicsVideoItem_paint(this.h, (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))
}

func (this *QGraphicsVideoItem) NativeSizeChanged(size *qt.QSizeF) {
	C.QGraphicsVideoItem_nativeSizeChanged(this.h, (*C.QSizeF)(size.UnsafePointer()))
}
func (this *QGraphicsVideoItem) OnNativeSizeChanged(slot func(size *qt.QSizeF)) {
	C.QGraphicsVideoItem_connect_nativeSizeChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged
func miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged(cb C.intptr_t, size *C.QSizeF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(size *qt.QSizeF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQSizeF(unsafe.Pointer(size))

	gofunc(slotval1)
}

func QGraphicsVideoItem_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsVideoItem_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsVideoItem_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_trUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsVideoItem_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsVideoItem_trUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// UpdateMicroFocus can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsVideoItem_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Sender can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) Sender() *qt.QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := qt.UnsafeNewQObject(unsafe.Pointer(C.QGraphicsVideoItem_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h))))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsVideoItem_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QGraphicsVideoItem_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) IsSignalConnected(signal *qt.QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QGraphicsVideoItem_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer())))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// AddToIndex can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) AddToIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsVideoItem_protectedbase_addToIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// RemoveFromIndex can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) RemoveFromIndex() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsVideoItem_protectedbase_removeFromIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// PrepareGeometryChange can only be called from a QGraphicsVideoItem that was directly constructed.
func (this *QGraphicsVideoItem) PrepareGeometryChange() {

	var _dynamic_cast_ok C.bool = false
	C.QGraphicsVideoItem_protectedbase_prepareGeometryChange(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

func (this *QGraphicsVideoItem) callVirtualBase_MediaObject() *QMediaObject {

	return newQMediaObject(C.QGraphicsVideoItem_virtualbase_mediaObject(unsafe.Pointer(this.h)))

}
func (this *QGraphicsVideoItem) OnMediaObject(slot func(super func() *QMediaObject) *QMediaObject) {
	ok := C.QGraphicsVideoItem_override_virtual_mediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_mediaObject
func miqt_exec_callback_QGraphicsVideoItem_mediaObject(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QMediaObject {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QMediaObject) *QMediaObject)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MediaObject)

	return virtualReturn.cPointer()

}

func (this *QGraphicsVideoItem) callVirtualBase_BoundingRect() *qt.QRectF {

	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_boundingRect(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	ok := C.QGraphicsVideoItem_override_virtual_boundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_boundingRect
func miqt_exec_callback_QGraphicsVideoItem_boundingRect(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QRectF {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QRectF) *qt.QRectF)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_BoundingRect)

	return (*C.QRectF)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Paint(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget) {

	C.QGraphicsVideoItem_virtualbase_paint(unsafe.Pointer(this.h), (*C.QPainter)(painter.UnsafePointer()), (*C.QStyleOptionGraphicsItem)(option.UnsafePointer()), (*C.QWidget)(widget.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnPaint(slot func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget)) {
	ok := C.QGraphicsVideoItem_override_virtual_paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_paint
func miqt_exec_callback_QGraphicsVideoItem_paint(self *C.QGraphicsVideoItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))

	slotval2 := qt.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option))

	slotval3 := qt.UnsafeNewQWidget(unsafe.Pointer(widget))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsVideoItem) callVirtualBase_TimerEvent(event *qt.QTimerEvent) {

	C.QGraphicsVideoItem_virtualbase_timerEvent(unsafe.Pointer(this.h), (*C.QTimerEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnTimerEvent(slot func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_timerEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_timerEvent
func miqt_exec_callback_QGraphicsVideoItem_timerEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QTimerEvent), event *qt.QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQTimerEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_ItemChange(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_itemChange(unsafe.Pointer(this.h), (C.int)(change), (*C.QVariant)(value.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnItemChange(slot func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_itemChange(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_itemChange
func miqt_exec_callback_QGraphicsVideoItem_itemChange(self *C.QGraphicsVideoItem, cb C.intptr_t, change C.int, value *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant, change qt.QGraphicsItem__GraphicsItemChange, value *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__GraphicsItemChange)(change)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ItemChange, slotval1, slotval2)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_SetMediaObject(object *QMediaObject) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_setMediaObject(unsafe.Pointer(this.h), object.cPointer()))

}
func (this *QGraphicsVideoItem) OnSetMediaObject(slot func(super func(object *QMediaObject) bool, object *QMediaObject) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_setMediaObject(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_setMediaObject
func miqt_exec_callback_QGraphicsVideoItem_setMediaObject(self *C.QGraphicsVideoItem, cb C.intptr_t, object *C.QMediaObject) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(object *QMediaObject) bool, object *QMediaObject) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMediaObject(object)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SetMediaObject, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_Event(ev *qt.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_event(unsafe.Pointer(this.h), (*C.QEvent)(ev.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnEvent(slot func(super func(ev *qt.QEvent) bool, ev *qt.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_event
func miqt_exec_callback_QGraphicsVideoItem_event(self *C.QGraphicsVideoItem, cb C.intptr_t, ev *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(ev *qt.QEvent) bool, ev *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(ev))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_EventFilter(watched *qt.QObject, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_eventFilter(unsafe.Pointer(this.h), (*C.QObject)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnEventFilter(slot func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_eventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_eventFilter
func miqt_exec_callback_QGraphicsVideoItem_eventFilter(self *C.QGraphicsVideoItem, cb C.intptr_t, watched *C.QObject, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QObject, event *qt.QEvent) bool, watched *qt.QObject, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQObject(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_ChildEvent(event *qt.QChildEvent) {

	C.QGraphicsVideoItem_virtualbase_childEvent(unsafe.Pointer(this.h), (*C.QChildEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnChildEvent(slot func(super func(event *qt.QChildEvent), event *qt.QChildEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_childEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_childEvent
func miqt_exec_callback_QGraphicsVideoItem_childEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QChildEvent), event *qt.QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQChildEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_CustomEvent(event *qt.QEvent) {

	C.QGraphicsVideoItem_virtualbase_customEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnCustomEvent(slot func(super func(event *qt.QEvent), event *qt.QEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_customEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_customEvent
func miqt_exec_callback_QGraphicsVideoItem_customEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent), event *qt.QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_ConnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsVideoItem_virtualbase_connectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnConnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsVideoItem_override_virtual_connectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_connectNotify
func miqt_exec_callback_QGraphicsVideoItem_connectNotify(self *C.QGraphicsVideoItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DisconnectNotify(signal *qt.QMetaMethod) {

	C.QGraphicsVideoItem_virtualbase_disconnectNotify(unsafe.Pointer(this.h), (*C.QMetaMethod)(signal.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDisconnectNotify(slot func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod)) {
	ok := C.QGraphicsVideoItem_override_virtual_disconnectNotify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_disconnectNotify
func miqt_exec_callback_QGraphicsVideoItem_disconnectNotify(self *C.QGraphicsVideoItem, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *qt.QMetaMethod), signal *qt.QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQMetaMethod(unsafe.Pointer(signal))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_Advance(phase int) {

	C.QGraphicsVideoItem_virtualbase_advance(unsafe.Pointer(this.h), (C.int)(phase))

}
func (this *QGraphicsVideoItem) OnAdvance(slot func(super func(phase int), phase int)) {
	ok := C.QGraphicsVideoItem_override_virtual_advance(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_advance
func miqt_exec_callback_QGraphicsVideoItem_advance(self *C.QGraphicsVideoItem, cb C.intptr_t, phase C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(phase int), phase int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(phase)

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Advance, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_Shape() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_shape(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnShape(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsVideoItem_override_virtual_shape(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_shape
func miqt_exec_callback_QGraphicsVideoItem_shape(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Shape)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Contains(point *qt.QPointF) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_contains(unsafe.Pointer(this.h), (*C.QPointF)(point.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnContains(slot func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_contains(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_contains
func miqt_exec_callback_QGraphicsVideoItem_contains(self *C.QGraphicsVideoItem, cb C.intptr_t, point *C.QPointF) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(point *qt.QPointF) bool, point *qt.QPointF) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPointF(unsafe.Pointer(point))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Contains, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_CollidesWithItem(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_collidesWithItem(unsafe.Pointer(this.h), (*C.QGraphicsItem)(other.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsVideoItem) OnCollidesWithItem(slot func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_collidesWithItem(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_collidesWithItem
func miqt_exec_callback_QGraphicsVideoItem_collidesWithItem(self *C.QGraphicsVideoItem, cb C.intptr_t, other *C.QGraphicsItem, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool, other *qt.QGraphicsItem, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(other))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CollidesWithItem, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_CollidesWithPath(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_collidesWithPath(unsafe.Pointer(this.h), (*C.QPainterPath)(path.UnsafePointer()), (C.int)(mode)))

}
func (this *QGraphicsVideoItem) OnCollidesWithPath(slot func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_collidesWithPath(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_collidesWithPath
func miqt_exec_callback_QGraphicsVideoItem_collidesWithPath(self *C.QGraphicsVideoItem, cb C.intptr_t, path *C.QPainterPath, mode C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(path *qt.QPainterPath, mode qt.ItemSelectionMode) bool, path *qt.QPainterPath, mode qt.ItemSelectionMode) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainterPath(unsafe.Pointer(path))

	slotval2 := (qt.ItemSelectionMode)(mode)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_CollidesWithPath, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_IsObscuredBy(item *qt.QGraphicsItem) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_isObscuredBy(unsafe.Pointer(this.h), (*C.QGraphicsItem)(item.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnIsObscuredBy(slot func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_isObscuredBy(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_isObscuredBy
func miqt_exec_callback_QGraphicsVideoItem_isObscuredBy(self *C.QGraphicsVideoItem, cb C.intptr_t, item *C.QGraphicsItem) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(item *qt.QGraphicsItem) bool, item *qt.QGraphicsItem) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(item))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_IsObscuredBy, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_OpaqueArea() *qt.QPainterPath {

	_goptr := qt.UnsafeNewQPainterPath(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_opaqueArea(unsafe.Pointer(this.h))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnOpaqueArea(slot func(super func() *qt.QPainterPath) *qt.QPainterPath) {
	ok := C.QGraphicsVideoItem_override_virtual_opaqueArea(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_opaqueArea
func miqt_exec_callback_QGraphicsVideoItem_opaqueArea(self *C.QGraphicsVideoItem, cb C.intptr_t) *C.QPainterPath {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *qt.QPainterPath) *qt.QPainterPath)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_OpaqueArea)

	return (*C.QPainterPath)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsVideoItem_virtualbase_type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsVideoItem) OnType(slot func(super func() int) int) {
	ok := C.QGraphicsVideoItem_override_virtual_type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_type
func miqt_exec_callback_QGraphicsVideoItem_type(self *C.QGraphicsVideoItem, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Type)

	return (C.int)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_SceneEventFilter(watched *qt.QGraphicsItem, event *qt.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_sceneEventFilter(unsafe.Pointer(this.h), (*C.QGraphicsItem)(watched.UnsafePointer()), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnSceneEventFilter(slot func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_sceneEventFilter(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter
func miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter(self *C.QGraphicsVideoItem, cb C.intptr_t, watched *C.QGraphicsItem, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(watched *qt.QGraphicsItem, event *qt.QEvent) bool, watched *qt.QGraphicsItem, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsItem(unsafe.Pointer(watched))

	slotval2 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SceneEventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_SceneEvent(event *qt.QEvent) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_sceneEvent(unsafe.Pointer(this.h), (*C.QEvent)(event.UnsafePointer())))

}
func (this *QGraphicsVideoItem) OnSceneEvent(slot func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_sceneEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_sceneEvent
func miqt_exec_callback_QGraphicsVideoItem_sceneEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QEvent) bool, event *qt.QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SceneEvent, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_ContextMenuEvent(event *qt.QGraphicsSceneContextMenuEvent) {

	C.QGraphicsVideoItem_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneContextMenuEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnContextMenuEvent(slot func(super func(event *qt.QGraphicsSceneContextMenuEvent), event *qt.QGraphicsSceneContextMenuEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent
func miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneContextMenuEvent), event *qt.QGraphicsSceneContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneContextMenuEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragEnterEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragEnterEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent
func miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragLeaveEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragLeaveEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent
func miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DragMoveEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDragMoveEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_DropEvent(event *qt.QGraphicsSceneDragDropEvent) {

	C.QGraphicsVideoItem_virtualbase_dropEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneDragDropEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnDropEvent(slot func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_dropEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_dropEvent
func miqt_exec_callback_QGraphicsVideoItem_dropEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneDragDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneDragDropEvent), event *qt.QGraphicsSceneDragDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneDragDropEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_FocusInEvent(event *qt.QFocusEvent) {

	C.QGraphicsVideoItem_virtualbase_focusInEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnFocusInEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_focusInEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_focusInEvent
func miqt_exec_callback_QGraphicsVideoItem_focusInEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_FocusOutEvent(event *qt.QFocusEvent) {

	C.QGraphicsVideoItem_virtualbase_focusOutEvent(unsafe.Pointer(this.h), (*C.QFocusEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnFocusOutEvent(slot func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_focusOutEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_focusOutEvent
func miqt_exec_callback_QGraphicsVideoItem_focusOutEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QFocusEvent), event *qt.QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQFocusEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverEnterEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_hoverEnterEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverEnterEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_hoverEnterEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent
func miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverEnterEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverMoveEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_hoverMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverMoveEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_hoverMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_HoverLeaveEvent(event *qt.QGraphicsSceneHoverEvent) {

	C.QGraphicsVideoItem_virtualbase_hoverLeaveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneHoverEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnHoverLeaveEvent(slot func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_hoverLeaveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent
func miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneHoverEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneHoverEvent), event *qt.QGraphicsSceneHoverEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneHoverEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_HoverLeaveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_KeyPressEvent(event *qt.QKeyEvent) {

	C.QGraphicsVideoItem_virtualbase_keyPressEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnKeyPressEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_keyPressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_keyPressEvent
func miqt_exec_callback_QGraphicsVideoItem_keyPressEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_KeyReleaseEvent(event *qt.QKeyEvent) {

	C.QGraphicsVideoItem_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), (*C.QKeyEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnKeyReleaseEvent(slot func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent
func miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QKeyEvent), event *qt.QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQKeyEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MousePressEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_mousePressEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMousePressEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_mousePressEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_mousePressEvent
func miqt_exec_callback_QGraphicsVideoItem_mousePressEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseMoveEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseMoveEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent
func miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseReleaseEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseReleaseEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent
func miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_MouseDoubleClickEvent(event *qt.QGraphicsSceneMouseEvent) {

	C.QGraphicsVideoItem_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneMouseEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnMouseDoubleClickEvent(slot func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent
func miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneMouseEvent), event *qt.QGraphicsSceneMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneMouseEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_WheelEvent(event *qt.QGraphicsSceneWheelEvent) {

	C.QGraphicsVideoItem_virtualbase_wheelEvent(unsafe.Pointer(this.h), (*C.QGraphicsSceneWheelEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnWheelEvent(slot func(super func(event *qt.QGraphicsSceneWheelEvent), event *qt.QGraphicsSceneWheelEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_wheelEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_wheelEvent
func miqt_exec_callback_QGraphicsVideoItem_wheelEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QGraphicsSceneWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QGraphicsSceneWheelEvent), event *qt.QGraphicsSceneWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQGraphicsSceneWheelEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_InputMethodEvent(event *qt.QInputMethodEvent) {

	C.QGraphicsVideoItem_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), (*C.QInputMethodEvent)(event.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnInputMethodEvent(slot func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent)) {
	ok := C.QGraphicsVideoItem_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent
func miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent(self *C.QGraphicsVideoItem, cb C.intptr_t, event *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *qt.QInputMethodEvent), event *qt.QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQInputMethodEvent(unsafe.Pointer(event))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QGraphicsVideoItem) callVirtualBase_InputMethodQuery(query qt.InputMethodQuery) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(query))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnInputMethodQuery(slot func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery
func miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery(self *C.QGraphicsVideoItem, cb C.intptr_t, query C.int) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(query qt.InputMethodQuery) *qt.QVariant, query qt.InputMethodQuery) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.InputMethodQuery)(query)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_InputMethodQuery, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

func (this *QGraphicsVideoItem) callVirtualBase_SupportsExtension(extension qt.QGraphicsItem__Extension) bool {

	return (bool)(C.QGraphicsVideoItem_virtualbase_supportsExtension(unsafe.Pointer(this.h), (C.int)(extension)))

}
func (this *QGraphicsVideoItem) OnSupportsExtension(slot func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool) {
	ok := C.QGraphicsVideoItem_override_virtual_supportsExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_supportsExtension
func miqt_exec_callback_QGraphicsVideoItem_supportsExtension(self *C.QGraphicsVideoItem, cb C.intptr_t, extension C.int) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension) bool, extension qt.QGraphicsItem__Extension) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SupportsExtension, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QGraphicsVideoItem) callVirtualBase_SetExtension(extension qt.QGraphicsItem__Extension, variant *qt.QVariant) {

	C.QGraphicsVideoItem_virtualbase_setExtension(unsafe.Pointer(this.h), (C.int)(extension), (*C.QVariant)(variant.UnsafePointer()))

}
func (this *QGraphicsVideoItem) OnSetExtension(slot func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant)) {
	ok := C.QGraphicsVideoItem_override_virtual_setExtension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_setExtension
func miqt_exec_callback_QGraphicsVideoItem_setExtension(self *C.QGraphicsVideoItem, cb C.intptr_t, extension C.int, variant *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(extension qt.QGraphicsItem__Extension, variant *qt.QVariant), extension qt.QGraphicsItem__Extension, variant *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (qt.QGraphicsItem__Extension)(extension)

	slotval2 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_SetExtension, slotval1, slotval2)

}

func (this *QGraphicsVideoItem) callVirtualBase_Extension(variant *qt.QVariant) *qt.QVariant {

	_goptr := qt.UnsafeNewQVariant(unsafe.Pointer(C.QGraphicsVideoItem_virtualbase_extension(unsafe.Pointer(this.h), (*C.QVariant)(variant.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsVideoItem) OnExtension(slot func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant) {
	ok := C.QGraphicsVideoItem_override_virtual_extension(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QGraphicsVideoItem_extension
func miqt_exec_callback_QGraphicsVideoItem_extension(self *C.QGraphicsVideoItem, cb C.intptr_t, variant *C.QVariant) *C.QVariant {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(variant *qt.QVariant) *qt.QVariant, variant *qt.QVariant) *qt.QVariant)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQVariant(unsafe.Pointer(variant))

	virtualReturn := gofunc((&QGraphicsVideoItem{h: self}).callVirtualBase_Extension, slotval1)

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}

// Delete this object from C++ memory.
func (this *QGraphicsVideoItem) Delete() {
	C.QGraphicsVideoItem_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsVideoItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsVideoItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
