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
	h          *C.QGraphicsSvgItem
	isSubclass bool
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
func newQGraphicsSvgItem(h *C.QGraphicsSvgItem, h_QGraphicsObject *C.QGraphicsObject, h_QObject *C.QObject, h_QGraphicsItem *C.QGraphicsItem) *QGraphicsSvgItem {
	if h == nil {
		return nil
	}
	return &QGraphicsSvgItem{h: h,
		QGraphicsObject: qt.UnsafeNewQGraphicsObject(unsafe.Pointer(h_QGraphicsObject), unsafe.Pointer(h_QObject), unsafe.Pointer(h_QGraphicsItem))}
}

// UnsafeNewQGraphicsSvgItem constructs the type using only unsafe pointers.
func UnsafeNewQGraphicsSvgItem(h unsafe.Pointer, h_QGraphicsObject unsafe.Pointer, h_QObject unsafe.Pointer, h_QGraphicsItem unsafe.Pointer) *QGraphicsSvgItem {
	if h == nil {
		return nil
	}

	return &QGraphicsSvgItem{h: (*C.QGraphicsSvgItem)(h),
		QGraphicsObject: qt.UnsafeNewQGraphicsObject(h_QGraphicsObject, h_QObject, h_QGraphicsItem)}
}

// NewQGraphicsSvgItem constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem() *QGraphicsSvgItem {
	var outptr_QGraphicsSvgItem *C.QGraphicsSvgItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSvgItem_new(&outptr_QGraphicsSvgItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsSvgItem(outptr_QGraphicsSvgItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSvgItem2 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem2(fileName string) *QGraphicsSvgItem {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QGraphicsSvgItem *C.QGraphicsSvgItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSvgItem_new2(fileName_ms, &outptr_QGraphicsSvgItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsSvgItem(outptr_QGraphicsSvgItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSvgItem3 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem3(parentItem *qt.QGraphicsItem) *QGraphicsSvgItem {
	var outptr_QGraphicsSvgItem *C.QGraphicsSvgItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSvgItem_new3((*C.QGraphicsItem)(parentItem.UnsafePointer()), &outptr_QGraphicsSvgItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsSvgItem(outptr_QGraphicsSvgItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
}

// NewQGraphicsSvgItem4 constructs a new QGraphicsSvgItem object.
func NewQGraphicsSvgItem4(fileName string, parentItem *qt.QGraphicsItem) *QGraphicsSvgItem {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	var outptr_QGraphicsSvgItem *C.QGraphicsSvgItem = nil
	var outptr_QGraphicsObject *C.QGraphicsObject = nil
	var outptr_QObject *C.QObject = nil
	var outptr_QGraphicsItem *C.QGraphicsItem = nil

	C.QGraphicsSvgItem_new4(fileName_ms, (*C.QGraphicsItem)(parentItem.UnsafePointer()), &outptr_QGraphicsSvgItem, &outptr_QGraphicsObject, &outptr_QObject, &outptr_QGraphicsItem)
	ret := newQGraphicsSvgItem(outptr_QGraphicsSvgItem, outptr_QGraphicsObject, outptr_QObject, outptr_QGraphicsItem)
	ret.isSubclass = true
	return ret
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
	return UnsafeNewQSvgRenderer(unsafe.Pointer(C.QGraphicsSvgItem_Renderer(this.h)), nil)
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
	_ret := C.QGraphicsSvgItem_MaximumCacheSize(this.h)
	_goptr := qt.UnsafeNewQSize(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsSvgItem) BoundingRect() *qt.QRectF {
	_ret := C.QGraphicsSvgItem_BoundingRect(this.h)
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
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

	_ret := C.QGraphicsSvgItem_virtualbase_BoundingRect(unsafe.Pointer(this.h))
	_goptr := qt.UnsafeNewQRectF(unsafe.Pointer(_ret))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}
func (this *QGraphicsSvgItem) OnBoundingRect(slot func(super func() *qt.QRectF) *qt.QRectF) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsSvgItem_override_virtual_BoundingRect(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsSvgItem_override_virtual_Paint(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsSvgItem_Paint
func miqt_exec_callback_QGraphicsSvgItem_Paint(self *C.QGraphicsSvgItem, cb C.intptr_t, painter *C.QPainter, option *C.QStyleOptionGraphicsItem, widget *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget), painter *qt.QPainter, option *qt.QStyleOptionGraphicsItem, widget *qt.QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := qt.UnsafeNewQPainter(unsafe.Pointer(painter))
	slotval2 := qt.UnsafeNewQStyleOptionGraphicsItem(unsafe.Pointer(option), nil)
	slotval3 := qt.UnsafeNewQWidget(unsafe.Pointer(widget), nil, nil)

	gofunc((&QGraphicsSvgItem{h: self}).callVirtualBase_Paint, slotval1, slotval2, slotval3)

}

func (this *QGraphicsSvgItem) callVirtualBase_Type() int {

	return (int)(C.QGraphicsSvgItem_virtualbase_Type(unsafe.Pointer(this.h)))

}
func (this *QGraphicsSvgItem) OnType(slot func(super func() int) int) {
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsSvgItem_override_virtual_Type(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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
	if !this.isSubclass {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
	C.QGraphicsSvgItem_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
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

// Delete this object from C++ memory.
func (this *QGraphicsSvgItem) Delete() {
	C.QGraphicsSvgItem_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsSvgItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsSvgItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
